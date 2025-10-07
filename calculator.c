#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void cal_add() {
    float a, b, add;
    printf("Enter two numbers a & b: ");
    scanf("%f%f", &a, &b);
    add = a + b;
    printf("Addition of %f & %f = %.2f\n", a, b, add);
}
void cal_sub() {
    float a, b, sub; 
    printf("Enter two numbers a & b: ");
    scanf("%f%f", &a, &b);
    sub = a - b;
    printf("Subtraction of %f & %f = %.2f\n", a, b, sub);
}
void cal_mul() {
    float a, b, mul;
    printf("Enter two numbers a & b: ");
    scanf("%f%f", &a, &b);
    mul = a * b;
    printf("Multiplication of %f & %f = %.2f\n", a, b, mul);
}
void cal_div() {
    float a, b, div;
    printf("Enter two numbers a & b: ");
    scanf("%f%f", &a, &b);
    if(b != 0){
    div = a / b;
    printf("Division of %f & %f = %.2f\n", a, b, div);
    }
    else
    printf("Result can't be defined\n");
}
void cal_mod() {
    int a, b, mod;
    printf("Enter two numbers a & b: ");
    scanf("%d%d", &a, &b);
    if(b != 0){
    mod = a % b;
    printf("Modulus of %d & %d = %d\n", a, b, mod);
    }
    else
    printf("Result can't be defined\n");

}
void cal_squ() {
    float a, squ;
    printf("Enter a number a : ");
    scanf("%f", &a);
    squ = a * a;
    printf("Square of %f = %.2f\n", a, squ);
}
void cal_squ_ro() {
    float a, squ_ro;
    printf("Enter a number a: ");
    scanf("%f", &a);
    if(a<0){
        printf("Result is a complex number.\n");
    }
    else{
        squ_ro = sqrt(a);
        printf("Square-root of %f = %.2f\n", a, squ_ro);
    }

}
void cal_pow() {
    float a, b, p=1;
    printf("Enter two numbers a & b: ");
    scanf("%f%f", &a, &b);
    p = pow(a, b);
    printf("%f to the power %f = %.2f\n", a, b, p);
}
void cal_fac() {
    int a, i, fac=1;
    printf("Enter a number a : ");
    scanf("%d", &a);
    if(a<0){
        printf("Result can't be defined\n");
    }
    else
    for(i=a; i>=1; i--){
        fac *= i;
    }
    printf("Factorial of %d = %d\n", a, fac);
    }
int main() {
    char op;
    while (1){
    printf("---Calculator---\nChoose operator\n(Enter 0 to exit)\n1. Addition\n2. Subtraction\n3. multiplication\n4. division\n5. Modulus\n6. Square\n7. Square root\n8. Power\n9. Factorial\n");
    printf("Enter the operator: ");
    scanf(" %c", &op);
    switch (op){
    case '1': cal_add(); break;
    case '2': cal_sub(); break;
    case '3': cal_mul(); break;
    case '4': cal_div(); break;
    case '5': cal_mod(); break;
    case '6': cal_squ(); break;
    case '7': cal_squ_ro(); break;
    case '8': cal_pow(); break;
    case '9': cal_fac(); break;
    case '0': exit(0);
    default: printf("Operator error!\n");
    }
    }
    return 0;
}