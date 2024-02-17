// EMF.h

#pragma once
#include <functional>
#include "./check_error.h"

template<typename Func, typename... Args>
int has_errors(int emf, Func func_ptr, Args&&... args)
{
  if(func_ptr(std::forward<Args>(args)...) != 1)
  {
    set_n_bit(emf, 1);
  }
  
  return 0;
}

void initEMF()
{
  struct Data* data = getDataSingleton();
  data->flags = 0;
}
