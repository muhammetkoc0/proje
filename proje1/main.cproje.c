#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop
*****************************************************************************************************
1.Ba�la

2.Yeni kay�t al . Ad� , soyad� ve adresi gir. 

3. Yeni sipari� al. Sade K�nefemi, Kaymakl� K�nefemi se� ve adet say�s�n� gir.

4.�deme aktar. 45tl ,Kaymakl� 55tl 

5.EFT mi Kap�da �dememi se�.

6.Sipari�i olu�tur.

7.Bitir
*******************************************************************************************************
 */
 //fonksiyon ekleme
 void hata1();
 void  iban();
 void  fis();
 void  odeme();
 void bilgi();
//ba�la
int main()
 {
 		FILE *dosyapoint;

 	setlocale(LC_ALL, "Turkish");//t�rk�e karakter kabul�
 	//de�er atamalar�
	int Cesit,adet=0,Toplam=0,Odeme=0,i,j;
	int TelNo=0;
	char  ad[50];
	char durum;
	char  adres[100];
  	char a[2][2]={45,55,65,75,};
  					//fonksiyon tan�mlamalar�
  					
  						void bilgi()
  						{
  						
  							printf("<<<<<<<<<<<<<<FATURA>>>>>>>>>>>>>\n Ad : %s\n Adres: %s\n Telefon No:05%d\n Cesit:%d\n Adet:%d\n Odenecek Tutar:%d\n ",ad,adres,TelNo,Cesit,adet,Toplam);
								printf(" * AF�YET OLSUN �Y� G�NLER :) *\n");
						
						  }
  						void  odeme()
  							{
  							printf("Odeme EFT ise 1 Kap�da Odeme ise 2 yi Seciniz:\n");
	  						scanf("%d",&Odeme);
  							
						  	}
	 	
					 	void  fis()
	 	
		 					{
		 						printf(" siparisiniz basari ile olusturuldu.\nSiparis fisi adresinize gonderilecektir.\n");
								{
								bilgi();	//i� i�e fonksiyon kullan�m�
								}	
							}
 						void  iban()
 							{
 								printf("Siparisiniz Basari ile Olusturuldu\n l�tfen tutar� belirtilren iban'a at�n�z\niban=TR147852963369852147741258963\n  ");
	  			 				{
								bilgi();    //i� i�e fonksiyon kullan�m�
								}	
					
							}
 						void  hata1()
				   			{
								printf("hatal� tu�lama yapt�n�z");	
							}
							
					//sistemin ba�lamas�
	  				printf("------------------------------\n");
	 				printf("   G�NCEL F�YAT L�STES�\n");
	 					printf("------------------------------\n");
	 		 		//d�ng� eklentisi
					for(i=1;i<5;i++)
 					printf("�e�it%d  ",i);
 					printf("\n------------------------------");
 					
 					for(j=1;j<3;j++)
 					
 
 					printf("\n"); 	//de�erin okunmas�
	 				for (i=0;i<2;i++)
	 				for (j=0;j<2;j++)	//oknan de�erin yaz�lmas�
	 				for (i=0;i<2;i++)
	 				for (j=0;j<2;j++)
	 				//dizi matris kullan�m�
	 					{
	 						printf("  %d 	 ",a[i][j]);
	 						if(j==2)
	 						printf("\n");	
						}
						printf("\n------------------------------\n");
  				printf("\nYENI KAYIT AL\nAd ve Soyad� Giriniz:\n");
				gets(ad);//gets kullanma sebebi bo�lu�u karekter olarak saymamas�
				printf("Adresinizi Giriniz:\n");
	  			gets(adres);
	  			printf("l�tfen cep telefon numaras�n� giriniz:\n+90 5---------\n+90 5");
				scanf("%d",&TelNo);
				printf("S�PAR�� AL\n\n");
  				//i� i�e d�ng� kullan�m�
				for(i=1;i<3;i++)
				{	
 					printf("�e�it%d\n",i);
 					for(j=1;j<3;j++)
 					printf("extra%2d  ",j);
 					printf("\n\n");
 	
 				} 
 			
 				printf("K�nefe �e�idini gir: \n*sade ise 1'i kaymakl� ise 2'yi tu�lay�n*\n");
 	
 				scanf("%d",&Cesit);
 				//ko�ullu ifadeler
 				if (Cesit==1)
 			{
 					printf("Adet Sayisini Gir:\n");
					scanf("%d",&adet);
					Toplam=adet*45;
					printf("tutar=%d\n",Toplam);
				{
					odeme();//fonksiyon �a��rma
				}
	  				if(Odeme==1)
	   					{
	   						iban();//fonksiyon �a��rma
	   					}
					else if (Odeme==2)
						{
						 fis();//fonksiyon �a��rma
						
						}
					else
						{
						 hata1();//fonksiyon �a��rma
			
						}
			}
				 else if(Cesit==2)
	   		{
						printf("Adet Sayisini Gir:\n");
	    			scanf("%d",&adet);
					Toplam=adet*55;
	  				printf("tutar=%d\n",Toplam);
	   					int d=1;
	   					while(d>0)
	   					{
	   						d++;
	   						odeme();//fonksiyon �a��rma						
							break;
						   }
	  				if(Odeme==1)
	   					{
	   						 iban();//fonksiyon �a��rma
					   	}
					   		
					else if (Odeme==2)
						{
							 fis();//fonksiyon �a��rma
							 
						}
					else
					{
						
						  hata1();//fonksiyon �a��rma
					}
					
				   }
		
				 else 		 	
					{
						printf("Cesit Kodunu Yanl�s Girdiniz\n");
					}
					

char yazi[100];

	int d=0,sayi=0;

	strcpy(yazi,"<<<<<<<<<<<<<<FATURA>>>>>>>>>>>>>\n Ad : %s\n Adres: %s\n Telefon No:05%d\n Cesit:%d\n Adet:%d\n Odenecek Tutar:%d\n ");

		dosyapoint=fopen("fatura.txt","a");
		for(d=0;d<strlen(yazi);d++)
		{
			putc(yazi[d],dosyapoint);
		}
			putc('\n',dosyapoint);
			fclose(dosyapoint);
		 			
	return 0;//bitir
}
