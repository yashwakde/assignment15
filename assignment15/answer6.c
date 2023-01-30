#include<stdio.h>
void pri(int b[],int n)
{
    int i;
    printf("enter %d number",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
}
int main()
{
   
    int a[5];
    int i;
    pri(a,5);
   for(i=4;i>=0;i--)
  {
    printf("%d ",a[i]);
  }
  return 0;

}