#include <stdio.h>

int solveMeFirst(int x, int y);
int main(void)
{
  printf("enter two numbers:");
  int x=get_int();
  int y=get_int();
  int sum=solveMeFirst(x,y);
  printf("sumof the two numbers is %i", sum);
}
int solveMeFirst(int x, int y)
{
  int sum=x+y;
  return sum;
}
