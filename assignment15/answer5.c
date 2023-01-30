#include<stdio.h>
  int occurance(int b[],int n)
{  int i,j;
printf("enter %d number",n);
      for(i=0;i<n;i++)
    {
      scanf("%d",&b[i]);
    }
      
   for(i=0;i<n;i++)
   {
      for(j=i+1;j<n;j++)
    { if(b[i]== b[j] )
     {
      printf(" %d",b[i]);
     
     }
   }
   return 0;
   }
   
}
int main()
{
   int a[5];
   occurance(a,5);
   
}