#include <stdio.h>
#include "../include/emf.h"

bool func(int a, int b)
{
  return a > b;
}

int main()
{
  unsigned int* emf_ptr = init_emf(1);
  has_errors(emf_ptr, func, 1, 3);

  unsigned int emf = *emf_ptr;
  free_emf(emf_ptr);
  if(emf > 0) printf("Hello\n");
  
  return 0;
}
