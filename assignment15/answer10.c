#include<stdio.h>
int frequency(int b[],int n)
{ int i;
printf("enter a numbers");
for(i=0;i<12;i++)
{
  scanf("%d",&b[i]);
}
printf("\n\n");

 int hash[100] ={0};
   for(i=0;i<12;i++)
   {
    hash[b[i]]++;
   }
   for(i=0;i<100;i++)
   {
    if(hash[i] != 0)
    printf("%d --> %d \n",i,hash[i]);
   }
  
}
int main()
{
   
   int a[12] ;
   frequency(a,12);
  

  return 0;

}