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
	int dil_secim;
	
	printf("-----------------------------------\n\n");
	printf("1-Turkish\n2-English\n\n");
	printf("Oynamak icin dilinizi giriniz(Choose your language for play) : ");
	scanf("%d",&dil_secim);
	
	system("cls");
	
	if(dil_secim==1)
	{
		printf("----------Tas Kagit Makas----------\n\n");
	
		printf("Kac oyun oynanacagini giriniz : ");
		scanf("%d",&oyun_sayisi);
	
		while(sayac<=oyun_sayisi)
		{
		
				
			printf("\n\n0-Tas\n1-Kagit\n2-Makas\n\nSeciminizi giriniz : ");
			scanf("%d",&oyuncu_secim);
		
			srand(time(NULL));
			bilgisayar_secim = rand() % 3; //0,1,2 sayýlarý arasýnda sayý oluþturur.
			
			printf("\n-----------------------------------\n");

		
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
					printf("Tas\n\n");
					break;
			
				case 1:
					printf("Kagit\n\n");
					break;
				
				case 2:
					printf("Makas\n\n");
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
		
			printf("Bilgisayar Puan : %d\nOyuncu Puan : %d",bilgisayar_puan,oyuncu_puan);
		
			printf("\n\n-----------------------------------");
	
			sayac++;
		}
	
		if(bilgisayar_puan > oyuncu_puan)
		{
			printf("\n\n***Bilgisayar kazandi***\n");
			printf("\n-----------------------------------\n\n");
		}
	
		else if(oyuncu_puan > bilgisayar_puan)
		{
			printf("\n\n***Oyuncu1 oyunu kazandi***\n");
			printf("\n-----------------------------------\n\n");
		}
	
		else if(oyuncu_puan == bilgisayar_puan)
		{
			printf("\n\nBu oyunlar sonucunda kazanan olmadi.\n\n");
			printf("-----------------------------------\n\n");
		}
	}
	
	else if(dil_secim==2)
	{
		printf("----------Rock Paper Scissors----------\n\n");
	
		printf("Please enter how many round will you play : ");
		scanf("%d",&oyun_sayisi);
	
		while(sayac<=oyun_sayisi)
		{
		
				
			printf("\n\n0-Rock\n1-Paper\n2-Scissors\n\nEnter your choice : ");
			scanf("%d",&oyuncu_secim);
		
			srand(time(NULL));
			bilgisayar_secim = rand() % 3; //0,1,2 sayýlarý arasýnda sayý oluþturur.
		
			printf("\n-----------------------------------\n");
			
			switch(oyuncu_secim)
			{
			case 0:
				printf("\nRock-");
				break;
	
			case 1:
				printf("\nPaper-");
				break;
	
			case 2:
				printf("\nScissors-");
				break;
			}
		
			switch(bilgisayar_secim)
			{
				case 0:
					printf("Rock\n\n");
					break;
			
				case 1:
					printf("Paper\n\n");
					break;
				
				case 2:
					printf("Scissors\n\n");
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
		
			printf("Computer Score : %d\nPlayer Score : %d",bilgisayar_puan,oyuncu_puan);
		
			printf("\n\n-----------------------------------");
	
			sayac++;
		}
	
		if(bilgisayar_puan > oyuncu_puan)
		{
			printf("\n\n***Computer won the game.***\n");
			printf("\n-----------------------------------\n\n");
		}
	
		else if(oyuncu_puan > bilgisayar_puan)
		{
			printf("\n\n***Player1 won the game.***\n");
			printf("\n-----------------------------------\n\n");
		}
	
		else if(oyuncu_puan == bilgisayar_puan)
		{
			printf("\n\nAt the end of the rounds, there is no winner.\n");
			printf("\n-----------------------------------\n\n");
		}
	}
	
	else
	{
		printf("-----------------------------------\n\n");
		printf("Turkish : Yanlis secim. Oyun bitirildi.\n");
		printf("English : Wrong choice. The game is finished.");
		printf("\n\n-----------------------------------\n\n");
	}
	
	printf("Turkish : Cikmak icin 1 yaziniz.\nEnglish : Type 1 to exit.\n");
	scanf("%[\n]");
	
    return 0;
}

