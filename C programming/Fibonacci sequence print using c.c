#include <stdio.h>
int main()
{
     int n,first=0, second=1;
     printf("Enter the number:");
     scanf("%d",&n);

     for(int i=1;i<=n;i++){
        printf("%d ",first);  //first it'll print 0

        int fibo;
        fibo=first+second;  /*it'll do addition of first and second number.whenever the loop execute first time and contain the value in fibo*/
        first=second;
        second=fibo;
     }

    return 0;
}
