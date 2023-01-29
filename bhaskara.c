#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	float a,b,c,delta, x1,x2;

	scanf("%f %f %f",&a,&b,&c);
	
	delta= b*b - 4.0*a*c;
	x1= (-b + (sqrt (delta)))/(2.0*a); 
	x2= (-b - (sqrt (delta)))/(2.0*a);

	if ( delta < 0) {
		printf("NRR");
    }
	else if (a == 0) {
        printf("NEESG");
    }
	else {
		 
        x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);

		printf("%.2f\n%.2f",x1,x2);
	}
    return 0;
}