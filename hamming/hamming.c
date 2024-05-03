#include "hamming.h"

#include <string.h>

int compute(const char *lhs, const char *rhs)
{
  int distance = 0;
  for (; *lhs != '\0' && *rhs != '\0'; lhs++, rhs++) // '\0' terminating char pointing in memory
  {
    if (*lhs != *rhs)
    {
      distance++;
    }
  }

  return (*lhs || *rhs) ? -1 : distance;
}
