#include<stdio.h>
#include<math.h>
int main(){
int pri,t;
float r;
double si,ci,A;
printf("Enter the principal amount \n");
scanf("%d",&pri);
printf("Enter the rate \n");
scanf("%f",&r);
printf("Enter the time \n");
scanf("%d",&t);
si=(pri*r*t)/100;
printf("The simple interset is %lf\n", si);
A=pri*pow(1+(r/100),t);
ci=A-pri;
printf("The compound interestr is %lf ",ci);
}
