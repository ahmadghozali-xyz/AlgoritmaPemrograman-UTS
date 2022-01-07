#include<stdio.h>
#include<conio.h>

int main()
{
	int genre,jadwal,siang,malam;
	
	printf("ALGORITMA PEMROGRAMAN        \n");
	printf("AHMAD GHOZALI	      : 210401225   \n");
	printf("ALDERIRAH SIHOMBING   : 210401191   \n\n\n");
	
	
	printf ("	TIKET BIOSKOP\n ");
	printf ("=========================================================\n");
	printf (" Pilih genre film yang ingin anda tonton: \n");
	printf ("\n 1. Petualangan\n");
	printf ("\n 2. Drama\n");
	printf ("\n 3. Komedi\n\n");
	printf (" =========================================================\n");
	printf (" Pilih Jadwal:\n");
	printf ("\n 1. siang\n");
	printf ("\n 2. malam\n");
	printf (" =========================================================\n\n");
	
	printf (" Pilih genre film   : "); scanf("%i",&genre);
	printf ("\n Pilih jadwal	   : "); scanf("%d",&jadwal);
	printf (" =========================================================\n");
	
	 
	if(jadwal == 1){
			
            printf("\n film yang tersedia adalah Dora");
	}
	else if(jadwal == 2){
    
    		printf("\n film yang tersedia adalah Naruto");
	}
	else{
		printf("\ film tidak tersedia");
		
	}
    
	return 0;
		
	
}
