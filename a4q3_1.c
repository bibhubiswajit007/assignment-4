#include <stdio.h>
int main (){
    float ir;
    int cb,cs;
    printf("Enter the current balance:");
    scanf("%d",&cb);
    printf("Enter the credit score:");
    scanf("%d",&cs);
    int flag=cs<600;
    switch(flag){
        case 1:
        ir=0.15*cb;

        break;
        case 0:
        switch(cs>=600 && cs<=750){
            case 1:
            ir=0.12*cb;
            break;
            case 0:
            ir=0.10*cb;
            break;
            default:
            printf("Invalid entry");
            break;

        }
        break;
        default:
        printf("Invalid entry");
        break;



    }
    printf("The interest is :%f",ir);
    return 0;


}
