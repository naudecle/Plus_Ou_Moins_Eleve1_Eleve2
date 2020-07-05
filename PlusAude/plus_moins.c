#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
//PREMIER TRAVAIL
//FAIT PAR AUDE-CLERIA NTUNGANE
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
void seul_joueur()
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
		
		p=100000;
	}
	else if (q==2)
	{
		
		p=25;
	}
	else
		p=10;
	printf("Devinez un entier: ");
	plus_moins(v,n,p);
	
}
void mode_joueur1(int choix_joueur, int valeur_a_trouver, int choix, int* r)
{
	int i=0;
	int b=choix;

	do
	{
		scanf("%d", &choix_joueur);
		if (choix_joueur < valeur_a_trouver)
		{
			printf("plus \n");
			b=b-1;

		}
		else if (choix_joueur > valeur_a_trouver)
		{
			printf("moins \n");
			b=b-1;
		}
		else
			printf("Bingo \n");
		i++;


	}while(choix_joueur != valeur_a_trouver && i < choix);

	*r+=b;
	printf("votre score est: %d\n", b);

	
	
}
void mode_joueur2(int choice_joueur, int value_a_find, int choice, int* s)
{
	int i=0;
	int z=choice;

	do
	{
		scanf("%d", &choice_joueur);
		if (choice_joueur < value_a_find)
		{
			printf("plus \n");
			z=z-1;

		}
		else if (choice_joueur > value_a_find)
		{
			printf("moins \n");
			z=z-1;
		}
		else
			printf("Bingo \n");
		i++;


	}while(choice_joueur != value_a_find && i < choice);

	*s+=z;
	printf("votre score est: %d\n", z);
	
	
}

void deux_joeurs()
{
	
	int j1=0;
	int j2=0;
	int p=0;
	int v=0;

	
	int t;
	printf("Choisissez le nombre de tour que vous desirez: \n");
	scanf("%d", &t);

	for (int i=0; i<t; i++)
	{
		
		srand(time(NULL));
		int n=rand()%100;
		int m=rand()%100;
		printf("Joeur 1 chosit le nombre d essaie pour Joueur 2 \n");
		scanf("%d", &p);
		while(p < 10)
		{
			printf("Le nombre d'essaie doit etre superieur ou egal a 10\n");
			printf("Joeur 1 chosit le nombre d essaie pour Joueur 2 \n");
			scanf("%d", &p);
		}
		printf("Devinez un nombre \n");
		mode_joueur1(v,n,p,&j2);
		printf("////////////////////////////////////////////////////////////////////////////\n");
		
		printf("Joeur 2 chosit le nombre d essaie pour Joueur 1 \n");
		scanf("%d", &p);
			
		while(p < 10)
		{
			printf("Le nombre d'essaie doit etre superieur ou egal a 10\n");
			printf("Joeur 2 chosit le nombre d essaie pour Joueur 1 \n");
			scanf("%d", &p);
		}
		printf("Devinez un nombre \n");
		mode_joueur2(v,m,p,&j1);
		
	}

	printf("/////////////////////Fin du match///////////////////////// \n" );

	printf("Le score pour joueur 1 est : %d  \n", j1);
	printf("Le score pour joueur 2 est : %d  \n", j2);

	if (j1 > j2)
	{
		printf("LE GAGNANT EST LE JOUEUR 1 \n");
	}
	else if (j1 == j2)
	{
		/* code */
		printf("MATCH NUL\n");
	}
	else
		printf("LE GAGNANT EST LE JOUEUR 2\n");
	
	
}
 
int main()
{
	int mode=0;
	printf("\t===========================================\n");
	printf("\t==               Choisissez           =====\n");
	printf("\t==          1.Jouer seul               ====\n");
	printf("\t==           2.Jouer A deux             ===\n");
	scanf("%d", &mode);
	switch(mode)
	{
		case 1:
			seul_joueur();
			break;
		case 2:
			deux_joeurs();
			break;
	}
	return 0;
}