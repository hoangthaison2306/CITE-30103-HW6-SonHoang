#include<stdio.h> //link section

//Main function
int main(){

float l,w,a,p;//declare variables
//enter input
printf("Enter length: ");
scanf("%f", &l);
printf("Enter width: ");
scanf("%f", &w);
//calculations
p = (l + w)*2;
a = l * w;
//print output
printf("Area: %.2f\n", a);
printf("Perimeter: %.2f\n", p);

return 0;
}
