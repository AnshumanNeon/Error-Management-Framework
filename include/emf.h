// EMF.h

#pragma once
#include <functional>

template<typename Func, typename... Args>
int has_errors(Func func_ptr, Args&&... args)
{
  if(func_ptr(std::forward<Args>(args)...)) return 1;
  else return -1;
}
