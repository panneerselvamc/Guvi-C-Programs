#include<stdio.h>
#include<conio.h>
int main()
{
   int n,i,t=0;
   scanf("%d",&n);
   for(i=1;i<=n;++i)
   {
       t+=i;
   }
   printf("%d",t);
   return 0;
}
