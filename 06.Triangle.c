#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int A, B, C;
    scanf("%d%d%d",&A,&B,&C);
    if(A == B && B == C && A != 0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}
