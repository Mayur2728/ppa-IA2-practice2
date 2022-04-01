#include<stdio.h>
int input_number()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}
int is_composite(int n)
{
  
  if(n%2==0)
    return 0;
  else 
    return -1;
}
void output(int n, int composite)
{
  if(composite == 0)
  printf("the entered number is composite");
  else
  printf("the entered number is prime");
}
int main()
{
  int n= input_number();
  int composite = is_composite(n);
  output(n,composite);
  return 0;
}
