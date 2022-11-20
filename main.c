#include <stdio.h>
#include <math.h>


double requestA();
double requestB();
double requestC();

int main() {
    double a,b,c = 0;

    a = requestA();
    b = requestB();
    c = requestC();

    double delta = (b*b)- (4*a*c);
    if(delta<0){
        printf("This equation has no real solutions!");
        return 69;
    }
    double firstSolution = ((-b) - sqrt(delta))/(2*a);
    double secondSolution = (-b + sqrt(delta))/(2*a);
    printf("First solution: %lf",firstSolution);
    printf("Second solution: %lf",secondSolution);

    return 69;
}




double requestA() {
    double a;
    printf("Please enter the a:");
    scanf("%lf", &a);
    if (a == 0) {
        printf("a cannot be 0! please enter a again\n");
        a = requestA();
    }
    return a;
}

double requestB() {
    double b;
    printf("Please enter the b:");
    scanf("%lf", &b);
    return b;
}

double requestC() {
    double c;
    printf("Please enter the c:");
    scanf("%lf", &c);
    return c;
}