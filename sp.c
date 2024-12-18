#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c;
    printf("Enter three coefficients: ");
    scanf("%f %f %f", &a, &b, &c);

    float discriminant = b*b - 4*a*c;

    if(discriminant > 0){
        //real and different roots
        float r1 = (-b + sqrt(discriminant))/(2*a);
        float r2 = (-b - sqrt(discriminant))/(2*a);

        printf("Real and different roots.\n");
        printf("root1 = %.2f\n", r1);
        printf("root2 = %.2f\n", r2);
    }
    else if(discriminant == 0){
        //real and equal roots
        float r1, r2;
        printf("Real and equal roots.\n");
        r1 = r2 = -b/(2*a);
        printf("root1 = %.2f\n", r1);
        printf("root2 = %.2f\n", r2);
    }
    else{
        //complex roots
        float realPart = -b/(2*a);
        float imgPart = sqrt(-discriminant)/(2*a);
        printf("complex roots.\n");
        printf("root1 = %.2f + %.2fi\n",realPart, imgPart);
        printf("root1 = %.2f - %.2fi\n", realPart, imgPart);
    }

}