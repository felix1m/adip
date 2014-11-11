#include <stdio.h>
void untprog1(int z){
    unsigned int mask = 01 << 31;
    int i = 31;
    while(i>=0) {
        if  ((z&mask) !=0)
            printf("1");
        else
            printf("0");
        if((i%8==0) && mask!=1)
            printf(".");
        mask >>= 1;
        i--;
    }
    printf("\n");
}
int main(){
    int input;

    scanf("%i", &input);

    untprog1(input);

    return 0;
}
