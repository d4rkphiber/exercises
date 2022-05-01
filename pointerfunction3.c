#include <stdio.h>
#include <stdint.h>

void (*function)(uint16_t);

void bla(uint16_t zahl)
{

 printf("%d\n", zahl);

}


void blu(uint16_t zahl)
{
 
 printf("%d\n", zahl);

}


void blo(uint16_t zahl)
{
 
 printf("%d\n", zahl);

}


int main()
{

  void (*funktionen[])(uint16_t)={bla, blu, blo};

  for  (uint8_t i=0; i <3 ; i++)
  {
    function=funktionen[i];
    function(i);
  }
} 

