#include <stdio.h>
int main()
{
  int n, c, k;

  printf("Enter number of rows\n");
  scanf("%d", &n);

  for (k = 1; k <= n; k=k+2)
  {
    for (c = 1; c <= n-k; c=c+2)
      printf(" ");

    for (c = 1; c <= 2*k-1; c=c+2)
      printf("*");
          for (c = 1; c <= n-k; c=c+2)
      printf(" ");

    for (c = 1; c <= 2*k-1; c=c+2)
      printf("*");

    printf("\n");
  }

  for (k = 1; k <= n-1 ; k=k+2)
  {
    for (c = 1; c <= k; c=c+2)
      printf(" ");

    for (c = 1 ; c <= 2*(n-k)-2; c=c+2)
      printf("*");
      for (c = 1; c <= k; c=c+2)
      printf(" ");

    for (c = 1 ; c <= 2*(n-k)-2; c=c+2)
      printf("*");

    printf("\n");
  }

  return 0;
}
