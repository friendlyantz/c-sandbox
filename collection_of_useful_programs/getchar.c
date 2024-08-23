#import <stdio.h>

int main()
{
  int lala; /* use int instead of char to be able to handle exit code */
  long count; /* long int */

  count = 0;
  while ((lala = getchar()) != EOF) {
    ++count; /* can be count++ */
    // count++;
    // putchar(lala);
    printf("%ld\n", count);
  }
}
