/*Arrange the given elements in a 1D array in ascending and descending order using
bubble sort method*/

#include<stdio.h>

int main()
{
    printf("\nMy name is Sudipta Basak \n");

    int num;
    char chr;

    printf("\nEnter number of elements : ");
    scanf("%d",&num);

    int ele[6];
    printf("\nEnter the elements : ");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&ele[i]);
    }

    printf("\nSorting elements......  \nEnter 'a' for ascending order or 'd' for descending order : ");
    scanf("\n%c",&chr);
    printf("\n** Order = %c",chr);
    switch(chr)
    {
        case 'a':   // bubble sorting procedure
                    for(int i=0; i<num-1; i++)         //pass
                    {
                        for(int j=0; j<num-i-1; j++)
                        {
                            if(ele[j] > ele[j+1]) // comparison
                            {
                                // interchange
                                int temp = ele[j];
                                ele[j] = ele[j+1];
                                ele[j+1] = temp;
                                printf("\nxyz");
                            }
                        }
                    }
                    printf("\nElements in ascending order : \n");
                    break;

        case 'd':   // bubble sorting procedure
                    for(int i=0; i<num-1; i++)         //pass
                    {
                        for(int j=0; j<num-i-1; j++)
                        {
                            if(ele[j] < ele[j+1]) // comparison
                            {
                                // interchange
                                int temp = ele[j];
                                ele[j] = ele[j+1];
                                ele[j+1] = temp;
                                printf("\nabc");
                            }
                        }
                    }
                    printf("\nElements in descending order : \n");
                    break;
    }

    for(int i=0;i<num;i++)
    {
        printf("%d   ",ele[i]);
        //printf("\n123");
    }

    return 0;
}
