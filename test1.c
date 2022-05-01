#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char plz[] = "31275 Arpke";
	char *ort;
	int  *art;
	printf("\nart:%x",art);
	printf("\nbrt:%x",&art);
	int **urt = &art;
	printf("\nurt:%x:", *urt);
	unsigned long neu; 
	neu = strtoul(plz, &ort, 10);
	
	printf("\nort:%x", &ort);
	printf("\n");
	printf("\nplz %lu", neu);

	printf("\nort %s", ort);
	printf("\n");


}

