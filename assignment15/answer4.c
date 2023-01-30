#include<stdio.h>



void sort(int a[],int size,int d)
{
    int i,j,x;
  for(i=1;i<=d;i++)
   {
     x=a[size-1];
     for(j=size-1;j>0;j--)
    {
       a[j] =a[j-1];
    }
      a[0] =x;
   }
   for(i=0;i<size;i++)
   {
    printf("%d ",a[i]); 
   }
   printf("\n\n");
}
int main()
{
   
    int a[] ={32, 29, 40, 12, 70};
    
    sort(a,5,3);
   
  return 0;

}