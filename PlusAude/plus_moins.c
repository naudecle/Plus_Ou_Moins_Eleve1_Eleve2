#include <stdio.h>
#include <stdlib.h>

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
	
	int n=10;
	int v;
	printf("Devienez un entier: ");
	scanf("%d", &v);
	plus_moins(v,n);
	return 0;
}