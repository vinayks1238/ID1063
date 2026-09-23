#include<stdio.h>
#include<math.h>
double rms(double a[], int n)
{
	double r, b, sum=0.0;
	for(int i=0; i<n; i++){
		sum=sum+(a[i]*a[i]);
	} 

	b=sqrt(sum);
	r=b/n;
	return r;
}

int main(){

	int n;
	scanf("%d", &n);
	double a[n];
	for(int i=0; i<n; i++){
		scanf("%lf", &a[i]);
	}
	double r;
        r=rms(a, n);
        printf("%.2lf", r);
        return 0;
}

