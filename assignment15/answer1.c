#include<stdio.h>
int max(int b[],int n)
{
   int i,large=b[0];
   for(i=1;i<5;i++)
   {
    if(large<b[i])
     large=b[i];
   }
   return large;
}
int main()
{
   
    int a[5];
    int i ,j;
   printf("enter a  5 number");
   for(i=0;i<5;i++)
  { 
    scanf("%d",&a[i]);
  }
    
    j= max(a,5);

    printf(" greatest number is %d",j);
  return 0;

}