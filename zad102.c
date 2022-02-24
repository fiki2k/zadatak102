// Program treba naci i ispisat sve elemente random polja djeljivih s 3.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int polje[10], i;
	
	for(i = 0; i < 10; i++)
    {
        polje[i] = (rand() % 100);
    }
    
    printf("Ispis cijelog polja:");
    for(i=0;i<10;i++){
    printf("%d\t",polje[i]);
	}
	printf("\n");
    printf("Ispis elementata polja djeljivih s 3:");
    for(i=0;i<10;i++){
    	
    	if(polje[i]%3==0){
    	printf("%d\t",polje[i]);
		}
	}
    return 0;
}
