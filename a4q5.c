#include <stdio.h>
int main() {
    int num, orgnum, rem, res = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    orgnum = num;
    if (!100<num<999){
        printf("incorrect input");
    }
    else{

    while (orgnum != 0) {
        rem = orgnum % 10;
        res =res+ rem * rem * rem;
       orgnum = orgnum/10;
    }

    if (res == num){
        printf("%d is an Armstrong number.", num);}
    else{
        printf("%d is not an Armstrong number.", num);}
        }

}
