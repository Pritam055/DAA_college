#include<stdio.h>
#include<conio.h>
 
void dynafibo(){
	int n=8;
	int a[n];
	a[0] = 0;
	a[1] = 1;
	int i;
	for(i=2;i<n;i++){
		a[i] = a[i-1]+a[i-2];
	}
	printf("%d",a[i-1]);
}

int main(){
 	
	dynafibo();
}
