#include<stdio.h>

int search(int a[],int beg,int end,int item)
{

    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(a[mid]==item)
        {
            /*printf("\n %d is found at %d position",item,mid);*/
            return mid;
            break;

        }
        else if(item>a[mid])
            beg = mid+1;
        else
            end= mid-1;
    }
    return -1;
}

/****
    if(beg>end)
        printf("\n%d is not found ", item);
        */

int main()
{

    int a[]= {10,13,22,37,48};
    int n = sizeof(a) / sizeof(a[0]);
    int item=13;
    int number = Search(a, 0, n - 1, item);
    if(number == -1){
            printf("Element is not present in array");}
    else{printf("Element is present at index %d",number);
    }

    return 0;
    /**
     if(item % 2== 0)
             {
                 printf("\n %d is even",item);
             }
             else
             {
                 printf("\n %d is odd",item);
             }
             **/
}

