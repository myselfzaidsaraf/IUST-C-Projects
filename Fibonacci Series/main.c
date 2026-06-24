#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,c;
    a=0;
    b=1;
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    printf("The Fibonacci series is\n");

    for (int i=0;i<n;i++){
        if (i<=1){
            c=i;
        } else{
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d ", c);
    }
    return 0;
}
