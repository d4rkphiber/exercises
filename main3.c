#include <stdio.h>


int best(const int * frage)
{
  printf("%d", *frage);
  printf("%d", frage);
}


int main()
{
  int d=10;
  best(&d);
}
