#include<stdio.h>
#include<math.h>
int main()
{
  int i,n,a[100];
  double sum=0;
  printf("Enter the size of n\n");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    sum=sum+sqrt(a[i]);
  }
  printf("%0.2lf",sum);
  return 0;
} 
