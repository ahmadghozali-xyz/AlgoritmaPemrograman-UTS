#include<stdio.h>

int main()
{
	int genre,jadwal,siang,malam;
	char nama_film[35];
	
	printf("ALGORITMA PEMROGRAMAN        \n");
	printf("AHMAD GHOZALI	      : 210401225   \n");
	printf("ALDERIRAH SIHOMBING   : 210401191   \n\n\n");
	
	printf ("	TIKET BIOSKOP\n \n");
	printf ("Pilih genre film yang ingin anda tonton \n");
	printf ("\n 1. Action\n");
	printf ("\n 2. Drama\n");
	printf ("\n 3. Dokumenter\n\n");
	
	printf ("Pilih genre film		: "); scanf("%i",&genre);
	printf ("\nPilih jadwal	      	: "); scanf("%d",&jadwal);
	
if(genre==1)
    {
		 if(jadwal=siang)
            printf("\nfilm yang tersedia adalah unyil");
         }
    else     
         {
		 if(jadwal=malam)
            printf("\nfilm yang tersedia adalah naruto");
         }
         
if(genre==2)
    {
		 if(jadwal=siang)
            printf("\nfilm yang tersedia adalah adit sopo jarwo");
         }
    else     
         {
		 if(jadwal=malam)
            printf("\nfilm yang tersedia adalah upin ipin");
         }
         
         if(genre==3)
    {
		 if(jadwal=siang)
            printf("\nfilm yang tersedia adalah dora");
         }
    else     
         {
		 if(jadwal=malam)
            printf("\nfilm yang tersedia adalah dudung");
         }
	
return 0;
	
}
