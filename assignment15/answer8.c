#include<stdio.h>
int unique(int b[],int n)
{ int i;
printf("enter a numbers");
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
    if(hash[i] == 1)
    printf("%d ",i);
   }
  
}
int main()
{
   
   int a[12] ;
   unique(a,12);
  

  return 0;

}