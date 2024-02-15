// EMF.h

#pragma once
#include <functional>
#include "bits/bits.h"

template<typename Func, typename... Args>
int has_errors(unsigned int* emf, Func func_ptr, Args&&... args)
{
  if(func_ptr(std::forward<Args>(args)...) != 1)
    {
      set_n_bit(*emf, 1);
    }
  
  return 0;
}

// here n is the number of errors to be handled
// n + 1 bits will be set to account for unaccounted errors
unsigned int* init_emf(int n)
{
  unsigned int* emf = (unsigned int*)malloc(sizeof(unsigned int));
  return emf;
}

void free_emf(unsigned int* emf)
{
  free(emf);
}
