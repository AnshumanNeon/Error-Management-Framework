#include <stdio.h>
#include "include/emf.h"

bool func(int a, int b)
{
  return a > b;
}

int main()
{
  if(has_errors(func, 2, 3) > 0)
    printf("Hello");
  
  return 0;
}
