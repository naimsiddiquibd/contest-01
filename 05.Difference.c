#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int A, B, C;
    scanf("%d%d",&A,&B);
    if(A > B){
        C = A - B;
    }else{
        C = B -A;
    }
    printf("%d",C);
    return 0;
}
