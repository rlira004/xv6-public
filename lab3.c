#include "types.h"
#include "user.h"

#pragma GCC push_options
#pragma GCC optimize("O0")
static int
recursive(int n_start)
{
  if (n_start == 0)
    return 0;
  return n_start + recursive(n_start - 1);
}
#pragma GCC pop_options

int main(int argc, char *argv[])
{
  int m;
  int n_start = 9;
  int i = 0;
  int new_n = 0;
  int x = 1;
  printf(1, "The program is starting at 9 levels and incrementing in multiplies of 9\n");
  for (i = 0; i < 4; i++)
  {
    printf(1, "Iteration: # %d\n", x);
    printf(1, "This Program is Recursing at %d levels\n", n_start);
    m = recursive(n_start);
    printf(1, "The Yielded value is %d\n", m);
    new_n = n_start * 9;
    n_start = new_n;
    x++;
  }
  exit();
}