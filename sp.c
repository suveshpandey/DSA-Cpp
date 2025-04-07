#include<stdio.h>

//iterative method
int calFact(int n){
    if(n == 0) return 1;
    int fact = 1;
    for(int i = n; i>0; i--){
        fact *= i;
    }
    return fact;
}

//recursive method
int calFactRec(int n){
    if(n == 0 || n == 1) return 1;
    return n * calFactRec(n-1);
}

int mx(int a, int b){
    if(a>b) return a;
    else return b;
}
int mn(int a, int b){
    if(a<b) return a;
    else return b;
}
int calGCD(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;
    if(a == b) return a;
    if(a > b) return calGCD(a-b, b);
    return calGCD(a, b-a);
}
int calGCD2(int a, int b){
    int rem;
    while(b!=0){
        rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}

void calSum(int A[2][2], int B[2][2]){
    int ans[2][2];
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            ans[i][j] = A[i][j] + B[i][j];
        }
    }
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("%d, ", ans[i][j]);
        }
        printf("\n");
    }

}
void calProd(int A[2][2], int B[2][2]){
    int ans[2][2];
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            ans[i][j] = 0;
            for(int k = 0; k<2; k++){
                ans[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            printf("%d, ", ans[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int A[2][2];
    printf("Enter the A matrix elements: ");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            scanf("%d", &A[i][j]);
        }
    }
    int B[2][2];
    printf("Enter the B matrix elements: ");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            scanf("%d", &B[i][j]);
        }
    }
    calSum(A, B);
    printf("\n");
    calProd(A, B);
}