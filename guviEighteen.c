#include <stdio.h>
#include<conio.h>
int main()
{
    int nr,originalNumber,remainder,result= 0;
    scanf("%d", &nr);
    originalNumber = nr;
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }
    if(result==nr)
        printf("%d is an Armstrong number.",nr);
    else
        printf("%d is not an Armstrong number.",nr);
        return 0;
}
