#include <stdio.h>//importing c packages

int solveMeFirst(int x, int y);
int main(void)//main program
{
  printf("enter two numbers:");//inputiing the numbers
  int x=get_int();//storing to variable x
  int y=get_int();//storing to variable y
  int sum=solveMeFirst(x,y);//calling function to add the inputted numbers
  printf("sumof the two numbers is %i", sum);//outputting the final result
}
int solveMeFirst(int x, int y)//sunction to add the numbers
{
  int sum=x+y;//adding the mnumbers
  return sum;//returning the values as integer
}
