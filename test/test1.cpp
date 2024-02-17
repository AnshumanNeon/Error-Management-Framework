#include <stdio.h>
#include "../include/emf.h"

bool func(int a, int b)
{
  return a > b;
}

int main()
{
  initEMF();
  struct Data* data = getDataSingleton();
  
  has_errors(data->flags, func, 2, 3);
  return 0;
}
