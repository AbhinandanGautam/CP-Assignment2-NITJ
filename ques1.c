#include <stdio.h>
#include<math.h>
int main()
{
  int n,x,y,x1,digit=1;
  printf("enter the number:- ");
  scanf("%d", &n);
  x=n;
  for (int i = 0;; i++)  // count digit in given number
   {
      x = x/10;
      if (x != 0)
         digit++;
      else
         break;
   }
  for(int i=1;i<=digit;i++)
  {
    y=pow(10,digit-i);
    x1=n/y;
    switch(x1)
    {
      case 0:
      printf(" ZERO");
      break;
      case 1:
      printf(" ONE");
      break;
      case 2:
      printf(" TWO");
      break;
      case 3:
      printf(" THREE");
      break;
      case 4:
      printf(" FOUR");
      break;
      case 5:
      printf(" FIVE");
      break;
      case 6:
      printf(" SIX");
      break;
      case 7:
      printf(" SEVEN");
      break;
      case 8:
      printf(" EIGHT");
      break;
      case 9:
      printf(" NINE");
      break;
      default:
      printf("XYZ");
    }
    n%=y;
  }
  printf("\n");
  return 0;
}