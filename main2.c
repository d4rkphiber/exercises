#include <stdio.h>


int best(const int * frage)
{
  printf("%d", (int *)frage);
}


int main()
{
  best(10);
}
