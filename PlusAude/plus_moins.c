#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void plus_moins(int choix_joueuer, int valeur_a_trouver)
{
	if (choix_joueuer < valeur_a_trouver)
	{
		printf("plus \n");
	}
	else if (choix_joueuer > valeur_a_trouver)
	{
		printf("moins \n");
	}
	else
		printf("Bingo \n");
}
int main()
{
	
	srand(time(NULL));
	int n=rand()%100;
	int v;
	printf("Devienez un entier: ");
	scanf("%d", &v);
	plus_moins(v,n);
	return 0;
}