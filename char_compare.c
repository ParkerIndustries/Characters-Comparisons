#include <stdio.h>

typedef char string[21];


void	initialisation(string c)
{
	printf("\nEnter a string of characters\n");
	scanf("%s",c);
}

int 	longueur(string c)
{
	int i;

	i = 0;
	while(c[i] != '\0')
		{
			i++;
		}
	return (i);
}

void	recopie(string c, string c2)
{
	int i;

	printf("\nIn the string 2 there is now : \n");
	for (i=0; i<longueur(c); i++)
		{
			c2[i] = c[i];
			printf("%c",c2[i]);
		}
	printf("\n");
	return ;
}

void	recopie_n_caracteres(string c, string c2)
{
	int i;
	int n;

	printf("\nHow many characters do you want to copy in the string 2 ? \n");
	scanf("%d",&n);
	printf("\nIn the string 2 there is now : \n");
	for (i=0 ;i<n; i++)
		{
			c2[i] = c[i];
			printf("%c",c2[i]);
		}
	printf("\n");
	return ;
}	

int 	comparaison(string c3, string c4)
{
	int i;

	initialisation(c3);
	initialisation(c4);
	if (longueur(c3) < longueur(c4))
		{
			printf ("\nThe string 1 is less than the string 2.\n");
			return (-1);
		}
	if (longueur(c3) > longueur(c4))
		{
			printf ("\nThe string 1 is greater than the string 2.\n");
			return 1;
		}
	if (longueur(c3) == longueur(c4))
		{
			for (i=0; i<longueur(c3); i++)
				{
					if (c3[i] == c4[i])
						{
							i++;
						}
					if (c3[i] < c4[i])
						{
							printf ("\nThe string 1 is less than the string 2.\n");
							return -1;
						}
					if (c3[i] > c4[i])
						{
							printf ("\nThe string 1 is greater than the string 2.\n");
							return 1;
						}
				}
		}
	printf("\nThe string 1 is equal to the string 2.\n");
	return 0;
}

int 	comparaison_n_caracteres(string c5,string c6)
{
	int i;
	int n;

	initialisation(c5);
	initialisation(c6);
	printf("\nHow many characters do you want to compare? \n");
	scanf("%d",&n);
	if(longueur(c5) < longueur(c6) )
		{
			printf ("\nThe string 1 is less than the string 2.\n");
			return -1;
		}
	if(longueur(c5) > longueur(c6) )
		{
			printf ("\nThe string 1 is greater than the string 2.\n");
			return 1;
		}
	if(longueur(c5) == longueur(c6) )
		{
			for (i=0 ; i<n ; i++)
				{
					if ( c5[i] == c6[i] )
						{
							i++;
						}
						
					if ( c5[i] < c6[i] )
						{
							printf ("\nThe string 1 is less than the string 2.\n");
							return -1;
						}
					if ( c5[i] > c6[i] )
						{
							printf ("\nThe string 1 is greater than the string 2.\n");
							return 1;
						}
				}
		}
	printf("\nThe string 1 is equal to the string 2.\n");
	return 0;
}

void 	recherche(string c7)
{
	int i;
	char a;
	initialisation(c7);
	printf(" Choose a character.\n");
	scanf("%c",&a);
	for (i=0 ; i<longueur(c7) ; i++)
		{
			if ( c7[i] != a )
				{
					i++;
				}
			else 
				{ 
					printf (" The caractere %c is at the %d place. \n" ,a,i);
				}	
		}
	printf ( " This character is not in the string.\n");
	return;
}


int 	main (void)
{
	string c;
	string c2;
	string c3;
	string c4;
	string c5;
	string c6;
	string c7;
	int l,x;
	
	
	printf (" >>> INITIALISATION\n\n");
	initialisation(c);
	
	
	printf (" \n\n >>> LENGTH\n\n");
	printf ("\nThere is %d caractères In the string 1. \n",longueur(c));
	
	
	printf (" \n\n >>> COPY\n\n");
	recopie(c,c2);
	
	
	printf (" \n\n >>> COPY OF N CHARACTERS\n\n");
	recopie_n_caracteres(c,c2);
	
	
	printf (" \n\n >>> COMPARE\n\n");
	l=comparaison(c3, c4);
	printf( "%d" ,l);
	
	
	printf (" \n\n >>> COMPARE N CHARACTERS\n\n");
	x=comparaison_n_caracteres(c5, c6);
	printf( "%d" ,x);
	
	
	printf (" \n\n >>> LOOKING FOR A CHARACTER\n\n");
	recherche(c7);

	
	
	return 0;
}
	
