// bits.h

void set_n_bit(unsigned int number, int n)
{
  number = number | (1 << n);
  return;
}

void toggle_n_bit(unsigned int number, int n)
{
  number = number ^ (1 << n);
  return;
}

void clear_n_bit(unsigned int number, int n)
{
  number = number & (1 << n);
  return;
}
  
int check_n_bit(unsigned int number, int n)
{
  return (number >> n) & 1;
}

void set_n_bit_to_x(unsigned int number, int n, int x)
{
  number = (number & ~(1 << n)) | (x << n);
  return;
}
