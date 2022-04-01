#include<stdio.h>
int input()
{
  int a;
  printf("Enter two numbers\n");
  scanf("%d",&a);
  return a;
}
int hcf(int n, int m)
{
    {
      if(n%i==0&&m%i==0)
        hcf=i;
    }
  return hcf;
}
void output(int n, int m, int gcd)
{
  printf("The HCF of %d and %d is %d",n,m,gcd);
}
int main()
{
  int n,m;
  n,m=input();
  i=hcf(n,m);
  output(n,m,hcf);
  return 0;
}