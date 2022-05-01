

#include <stdio.h>
 
int main()
{
  int a = 100, *pa = &a;   /* a wird mit 100 initialisiert, pa zeigt gleich auf a */
 
  printf ("a = %d\n", a);
  printf ("*pa = %d\n", *pa);
 
  printf ("&a = %x (hexadezimal)\n", &a);
  printf ("pa = %x (hexadezimal)\n", pa);   /* "Wert" des Zeigers, also wohin zeigt pa? */
  printf ("&pa = %x (hexadezimal)\n",&pa);   /* Wo liegt der Zeiger selbst im Speicher? */
 
  printf ("Zeiger wird dereferenziert, Wert verändert ...\n");
  *pa = 200;   /* Ueber den Zeiger auf a zugreifen und dessen Wert veraendern */
  printf ("Neuer Wert von a: %d\n", a);
 
  return 0;
}
