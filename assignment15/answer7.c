#include<stdio.h>
int duplicate(int b[],int n)
{ int i;
printf("enter a number");
for(i=0;i<12;i++)
{
  scanf("%d",&b[i]);
}
printf("\n\n");

 int hash[10] ={0};
   for(i=0;i<12;i++)
   {
    hash[b[i]]++;
   }
   for(i=0;i<10;i++)
   {
    if(hash[i] == 2)
    printf("%d ",i);
   }
  
}
int main()
{
   
   int a[12] ;
   duplicate(a,12);
  

  return 0;

}