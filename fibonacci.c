#include <stdio.h>
int main()
{
    int i,temp,first=0,second=1,third,n;
    printf("enter the no: \n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        third=first+second;
        temp=first;
        printf("%d\n",temp);
        first=second;
        second=third;
    }
    if(n==first||n==second||n==third)
    {
        printf("%d is a part if fibonacci series",n);
    }
    printf("%d is not a part of fibonacci series",n);
}
