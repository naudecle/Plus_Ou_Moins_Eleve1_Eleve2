#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void plus_moins(int choix_joueur, int valeur_a_trouver, int choix)
{
	int i=0;

	do
	{
		scanf("%d", &choix_joueur);
		if (choix_joueur < valeur_a_trouver)
		{
			printf("plus \n");

		}
		else if (choix_joueur > valeur_a_trouver)
		{
			printf("moins \n");
		}
		else
			printf("Bingo \n");
		i++;

	}while(choix_joueur != valeur_a_trouver && i < choix);
	
}
int main()
{
	
	srand(time(NULL));
	int n=rand()%100;
	int v;
	int q;
	int p;
	printf("1.facile, 2. moyen, 3. Difficile \n");
	printf("Veuillez choisir un niveau entre 1,2 et 3: ");
	scanf("%d", &p);
	if (q==1)
	{
		/* code */
		p=100000;
	}
	else if (q==2)
	{
		/* code */
		p=25;
	}
	else
		p=10;
	printf("Devinez un entier: ");
	plus_moins(v,n,p);
	return 0;
}