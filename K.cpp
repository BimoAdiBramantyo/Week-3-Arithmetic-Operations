	#include <stdio.h>
	#include <math.h>
	
	int main() {
	    int P;
	    double r;
	    double A;
	
	    scanf("%d %lf", &P, &r);
	    
	    r = r / 100.0;
	    A = P * pow(1 + r, 3);
	    
	    printf("%.2lf\n", A);
	
	    return 0;
	}

