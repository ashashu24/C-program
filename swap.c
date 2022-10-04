/* Given 3 variables circularly shift values to right */
#include<stdio.h>
void fun (int,int,int);
int main()
{
    int x,y,z;
    printf("Enter values of 3 integers:");
    scanf("%d%d%d",&x,&y,&z);
    printf("\n Values of x,y,z as entered\n x=%d\ty=%d\tz=%d",x,y,z);;
    
    fun (x,y,z);
    return 0;
}
/*Function to shift values*/
void fun (int x,int y,int z)
{
    int i,t;
    for(i=0;i<=2;i++)
    {
        t=z;
        z=y;
        y=x;
        x=t;
        printf("\n Result \n x=%d \t y=%d \t z=%d",x,y,z);
    }
}
