#import <stdio.h>

int main()
{
  int lala; /* use int instead of char to be able to handle exit code */
  double count; /* long int */

  // count = 0;
  // while ((lala = getchar()) != EOF) {
    // ++count; /* can be count++ */
    // count++;
    // putchar(lala);
    // printf("%ld\n", count); // for int
  // }

  for(count = 0; getchar() != EOF; ++count) {
    printf("%.0f\n", count);
  }
}
