#include <stdio.h>


int best(const int * frage)
{
  printf("%d", *frage);
  printf("%d", frage);
}


int main()
{
  int *d;
  int e=10;
  
  d = &e;
  best(d);
}
