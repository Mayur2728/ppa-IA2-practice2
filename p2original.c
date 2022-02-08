#include<stdio.h>
int input_side()
{
  int a;
  printf("Enter the values\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a, int b, int c)
{
  if(a!=c && a!=b && b!=c)
  return 1;
  else 
  return -1;
}
void output(int isscalene)
{
  if (isscalene==1)
  printf("The triangle is scalene\n");
  else
  printf("The traingle is not scalene\n");
}
int main()
{
  int a,b,c;
  a=input_side();
  b=input_side();
  c=input_side();
  int res=(check_scalene(a,b,c));
  output(res);
  return 0;
}