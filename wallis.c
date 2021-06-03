#include<stdio.h>

int main()

{  int n,i;

   float temp,val,sum=1;

   printf("enter n");

   scanf("%d",&n);

   for(i=1;i<=n;i++)

   {  temp=(4*i*i)/((4*i*i)-1.0);

      sum=sum*temp;

   }

   val=2*sum;

   printf("%.2f",val);

   return 0;

}
