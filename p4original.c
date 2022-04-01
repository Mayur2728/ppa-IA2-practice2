#include<stdio.h>
int input_array_size()
{
  int length;
  printf("Enter the length of the array\n");
  scanf("%d",&length);
  return length;
}
void input_array(int n, int a[n])
{
  printf("enter all values of the array\n");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}

int sum_composite_numbers(int n, int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
  return sum;
}
void out_put(int sum)
{
  printf("the sum of composite numbers is %d\n",sum);
}
int main()
{
  int length=input_array_size();
  int data[length];
  input_array(length,data);
  int res=sum_composite_numbers(length,data);
  out_put(res);
  return 0;
}
