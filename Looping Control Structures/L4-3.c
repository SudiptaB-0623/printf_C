/*Evaluate the sine series, sin(x)= x- x^3/3! + x^5/5!–x^7/7!+ ……… to n terms*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");


    int x,n,val=0;

    printf("\nEnter the value of 'x' : ");
    scanf("%d",&x);
    printf("\nEnter the value of 'n' : ");
    scanf("%d",&n);

    for(int i=1,j=1;i<=n;i++,j=j+2)
    {
        int fact=1;
        for(int k=j;k>=1;k--)
        {
            fact=fact*k;

        }
        if(i%2==0)
        {
            val=val-(pow(x,j)/fact);

        }
        else
        {
            val=val+(pow(x,j)/fact);


        }

    }

    printf("\nsin(%d) = %d",x,val);

    return 0;
}
