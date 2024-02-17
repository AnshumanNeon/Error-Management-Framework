// #include <something_if_needed.h>

struct Data
{
  int flags;
} Data;

struct Data* getDataSingleton()
{
  static struct Data;
  static int structInitialized = 0;

  if(structInitialized != 1)
  {
    structInitialized = 1;
  }

  return &Data;
}
