#include "hamming.h"

#include <string.h>

int compute(const char *lhs, const char *rhs)
{
  size_t lhs_lnegth = strlen(lhs);
  size_t rhs_lnegth = strlen(rhs);

  if (lhs_lnegth != rhs_lnegth)
  {
    return -1;
  }

  int distance = 0;
  // for (int i = 0; i < (int)lhs_lnegth; i++)
  for (; *lhs != '\0' && *rhs != '\0'; lhs++, rhs++)
  {
    if (*lhs != *rhs)
    {
      distance++;
    }
  }
  return distance;
}
