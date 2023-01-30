#include<stdio.h>
int min(int b[],int n)
{
   int i,small=b[0];
   for(i=1;i<5;i++)
   {
    if(small>b[i])
     small=b[i];
   }
   return small;
}
int main()
{
   
    int a[5];
    int i ,j;
   printf("enter a  5 anumber");
   for(i=0;i<5;i++)
  { 
    scanf("%d",&a[i]);
  }
    
    j= min(a,5);

    printf(" smallest number is %d",j);
  return 0;

}