#include<stdio.h>
#include<math.h>
#define PI 3.14159

 int main()
 {
    float x,y,z,a,b;

    printf("enter the first angle of cos=");
    scanf("%f",&a);
    x=cos(a*PI/180);
    printf("cos(a)= %f\n",x);

    printf("enter the second angle of sin=");
    scanf("%f",&b);
    y=sin(b*PI/180);
    printf("sin(a)= %f\n",y);

    printf("z=");
    z=x/y ;

    printf("%f",z);

  return 0;




 }
