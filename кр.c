#include <math.h>
#include <stdio.h>
double f(double x){
	return pow(x, 2.0)-2;
}
double df(double x){
	return 2 * x;
}
double g(double x){
	return x - f(x) / df(x);
}
int eqution(double f(double), double df(double), double e, double* x) {
	while(e < fabs(g(*x) - *x)){
		if (df(*x) == 0)
			break;
		*x = g(*x);
	}
}
int main() {
	double x;
	double eps;
	printf("X: "); 
	scanf("%lf", &x);
	printf("E: ");
	scanf("%lf", &eps);
	eqution(*f, *df, eps, &x);
	printf("%lf", x);
	return 0;
}

 

