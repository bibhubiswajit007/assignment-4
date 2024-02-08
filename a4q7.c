#include <stdio.h>
int main (){
    int age;
    float tp;
    printf("Enter the age:");
    scanf("%d",&age);
    switch(age<5){
        case 1:
        tp=0;
        break;
        case 0:
        switch(age>=5 && age<=12){
            case 1:
            tp=20;
            break;
            case 0:
            switch(age>=13 && age<=59){
                case 1:
                tp=50;
                break;
                case 0:
                tp=50-(0.2*50);
                break;
            }
        }
        break;
        default:
        printf("Invalid entry");
        break;

    }
    printf("The ticket price is %f",tp);
    return 0;



}
