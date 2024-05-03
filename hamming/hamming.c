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
  return 0;
}
