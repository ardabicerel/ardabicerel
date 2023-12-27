#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int oyuncu_secim;
	int bilgisayar_secim;
	int bilgisayar_puan=0; 
	int oyuncu_puan=0;
	int oyun_sayisi;
	int sayac=1;
	
	printf("----------Tas Kagit Makas----------\n\n");
	
	printf("Kac oyun oynanacagini giriniz : ");
	scanf("%d",&oyun_sayisi);
	
	while(sayac<=oyun_sayisi)
	{
		
				
		printf("\n\n0-Tas\n1-Kagit\n2-Makas\n\nSeciminizi giriniz : ");
		scanf("%d",&oyuncu_secim);
		
		srand(time(NULL));
		bilgisayar_secim = rand() % 3; //0,1,2 sayýlarý arasýnda sayý oluþturur.
		
		switch(oyuncu_secim)
		{
		case 0:
			printf("\nTas-");
			break;
	
		case 1:
			printf("\nKagit-");
			break;
	
		case 2:
			printf("\nMakas-");
			break;
		
		default:
			printf("\nYanlis deger girildi. Oyun bitiriliyor.\n\n");
			break;
		}
		
		switch(bilgisayar_secim)
		{
			case 0:
				printf("Tas\n");
				break;
			
			case 1:
				printf("Kagit\n");
				break;
				
			case 2:
				printf("Makas\n");
				break;
		}
		
		if(bilgisayar_secim == 0 && oyuncu_secim == 2 || bilgisayar_secim == 1 && oyuncu_secim == 0 || bilgisayar_secim == 2 && oyuncu_secim == 1)
		{
			bilgisayar_puan++;
		}
		
		else if(oyuncu_secim == 0 && bilgisayar_secim == 2 || oyuncu_secim == 1 && bilgisayar_secim == 0 || oyuncu_secim == 2 && bilgisayar_secim == 1)
		{
			oyuncu_puan++;
		}
		
		printf("Bilgisayar : %d\nOyuncu Puan : %d",bilgisayar_puan,oyuncu_puan);
		
		printf("\n\n-----------------------------------");
	
		sayac++;
	}
	
	if(bilgisayar_puan > oyuncu_puan)
	{
		printf("\n\n***Bilgisayar kazandi***\n");
	}
	
	else if(oyuncu_puan > bilgisayar_puan)
	{
		printf("\n\n***Oyuncu1 oyunu kazandi***\n");
	}
	
	else if(oyuncu_puan == bilgisayar_puan)
	{
		printf("\n\nBu oyunlar sonucunda kazanan olmadi.\n");
	}
    
    return 0;
}

