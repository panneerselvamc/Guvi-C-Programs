#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],b;
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            printf("%d",a[i]);
        }
    }
    return 0;
}
