#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,i,num2,gcdnum;
    printf("enter two number");
    scanf("%d%d",&num1,&num2);
    for(i=1;i<=num1&&i<=num2;++i)
    {
        if((num1%i==0) && (num2%i==0))
        {
            gcdnum=i;
        }
    }
    printf("%d",gcdnum);
    return 0;
}

