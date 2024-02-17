#include "./error_struct.h"
#include "./bits/bits.h"

int isError(int n)
{
  struct Data* data = getDataSingleton();

  return check_n_bit(data->flags, n);
}
