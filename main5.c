#include <stdio.h>


int best(int * frage)
{
  printf("%d", *frage);
}


int main()
{
  int e = 10;
  int *d = &e;
  printf("blu");
  *d = 5;
  
  best(d);
}
