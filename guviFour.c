#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if('A'>=a<='Z')
    {
     printf("alphabet");   
    }
    else
    {
        printf("not an alphabet");
    }
    return 0;
}
