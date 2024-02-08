#include <stdio.h>
int main()
{   int num1,num2,num3;
    printf("Enter any three numbers to check the greatest number: ");
    scanf("%d%d%d",&num1,&num2,&num3);

     switch (!( num1 < num2 ) && !( num1 < num3 ))
    {
    case 1:
        printf( "%d is maximum\n", num1 );
        break;

    case 0:
        switch (!( num2 < num3 ))
        {
        case 1:
            printf( "%d is maximum\n", num2 );
            break;

        case 0:
            printf( "%d is maximum\n", num3 );
            break;
        }
    }

    return 0;
}
