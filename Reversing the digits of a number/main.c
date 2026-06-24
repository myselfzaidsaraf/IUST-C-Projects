#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, revnum =0, remainder;
    printf("Enter a number : ");
    scanf("%d", &num);

    while (num!=0){
        remainder = num%10;
        revnum = revnum*10+remainder;
        num = num/10;
    }
     printf("The number after reversing its digits is %d\n", revnum);
    return 0;
}
