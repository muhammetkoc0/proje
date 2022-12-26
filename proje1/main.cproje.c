#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop
*****************************************************************************************************
1.Baþla

2.Yeni kayýt al . Adý , soyadý ve adresi gir. 

3. Yeni sipariþ al. Sade Künefemi, Kaymaklý Künefemi seç ve adet sayýsýný gir.

4.Ödeme aktar. 45tl ,Kaymaklý 55tl 

5.EFT mi Kapýda Ödememi seç.

6.Sipariþi oluþtur.

7.Bitir
*******************************************************************************************************
 */
 //fonksiyon ekleme
 void hata1();
 void  iban();
 void  fis();
 void  odeme();
 void bilgi();
//baþla
int main()
 {
 		FILE *dosyapoint;

 	setlocale(LC_ALL, "Turkish");//türkçe karakter kabulü
 	//deðer atamalarý
	int Cesit,adet=0,Toplam=0,Odeme=0,i,j;
	int TelNo=0;
	char  ad[50];
	char durum;
	char  adres[100];
  	char a[2][2]={45,55,65,75,};
  					//fonksiyon tanýmlamalarý
  					
  						void bilgi()
  						{
  						
  							printf("<<<<<<<<<<<<<<FATURA>>>>>>>>>>>>>\n Ad : %s\n Adres: %s\n Telefon No:05%d\n Cesit:%d\n Adet:%d\n Odenecek Tutar:%d\n ",ad,adres,TelNo,Cesit,adet,Toplam);
								printf(" * AFÝYET OLSUN ÝYÝ GÜNLER :) *\n");
						
						  }
  						void  odeme()
  							{
  							printf("Odeme EFT ise 1 Kapýda Odeme ise 2 yi Seciniz:\n");
	  						scanf("%d",&Odeme);
  							
						  	}
	 	
					 	void  fis()
	 	
		 					{
		 						printf(" siparisiniz basari ile olusturuldu.\nSiparis fisi adresinize gonderilecektir.\n");
								{
								bilgi();	//iç içe fonksiyon kullanýmý
								}	
							}
 						void  iban()
 							{
 								printf("Siparisiniz Basari ile Olusturuldu\n lütfen tutarý belirtilren iban'a atýnýz\niban=TR147852963369852147741258963\n  ");
	  			 				{
								bilgi();    //iç içe fonksiyon kullanýmý
								}	
					
							}
 						void  hata1()
				   			{
								printf("hatalý tuþlama yaptýnýz");	
							}
							
					//sistemin baþlamasý
	  				printf("------------------------------\n");
	 				printf("   GÜNCEL FÝYAT LÝSTESÝ\n");
	 					printf("------------------------------\n");
	 		 		//döngü eklentisi
					for(i=1;i<5;i++)
 					printf("çeþit%d  ",i);
 					printf("\n------------------------------");
 					
 					for(j=1;j<3;j++)
 					
 
 					printf("\n"); 	//deðerin okunmasý
	 				for (i=0;i<2;i++)
	 				for (j=0;j<2;j++)	//oknan deðerin yazýlmasý
	 				for (i=0;i<2;i++)
	 				for (j=0;j<2;j++)
	 				//dizi matris kullanýmý
	 					{
	 						printf("  %d 	 ",a[i][j]);
	 						if(j==2)
	 						printf("\n");	
						}
						printf("\n------------------------------\n");
  				printf("\nYENI KAYIT AL\nAd ve Soyadý Giriniz:\n");
				gets(ad);//gets kullanma sebebi boþluðu karekter olarak saymamasý
				printf("Adresinizi Giriniz:\n");
	  			gets(adres);
	  			printf("lütfen cep telefon numarasýný giriniz:\n+90 5---------\n+90 5");
				scanf("%d",&TelNo);
				printf("SÝPARÝÞ AL\n\n");
  				//iç içe döngü kullanýmý
				for(i=1;i<3;i++)
				{	
 					printf("çeþit%d\n",i);
 					for(j=1;j<3;j++)
 					printf("extra%2d  ",j);
 					printf("\n\n");
 	
 				} 
 			
 				printf("Künefe Çeþidini gir: \n*sade ise 1'i kaymaklý ise 2'yi tuþlayýn*\n");
 	
 				scanf("%d",&Cesit);
 				//koþullu ifadeler
 				if (Cesit==1)
 			{
 					printf("Adet Sayisini Gir:\n");
					scanf("%d",&adet);
					Toplam=adet*45;
					printf("tutar=%d\n",Toplam);
				{
					odeme();//fonksiyon çaðýrma
				}
	  				if(Odeme==1)
	   					{
	   						iban();//fonksiyon çaðýrma
	   					}
					else if (Odeme==2)
						{
						 fis();//fonksiyon çaðýrma
						
						}
					else
						{
						 hata1();//fonksiyon çaðýrma
			
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
	   						odeme();//fonksiyon çaðýrma						
							break;
						   }
	  				if(Odeme==1)
	   					{
	   						 iban();//fonksiyon çaðýrma
					   	}
					   		
					else if (Odeme==2)
						{
							 fis();//fonksiyon çaðýrma
							 
						}
					else
					{
						
						  hata1();//fonksiyon çaðýrma
					}
					
				   }
		
				 else 		 	
					{
						printf("Cesit Kodunu Yanlýs Girdiniz\n");
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
