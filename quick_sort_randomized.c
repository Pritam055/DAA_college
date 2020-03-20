#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void quickSort(int* a,int l,int r){
	if(l<r){
		int p = partition(a,l,r);
		quickSort(a,l,p-1);
		quickSort(a,p+1,r);
	}
}
void swap(int* a,int i,int j){
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
void shuffling(int *a,int l,int r){
	srand(time(NULL));
	
	int i,randm;
	for(i=0;i<r;i++){
		randm = rand()%(r+1);
		swap(a,randm,i);
	}
	
}

int partition(int* a,int l,int r){
	int x,y,m;
	x = l;
	y = r+1;
	int pivot = a[l];
	while(x<y){
		do{
			x++;
		}while(a[x]<pivot);
		do{
			y--;
		}while(a[y]>pivot);
		if(x<y){
			swap(a,x,y);
		}
	}
	swap(a,l,y);
	return y;
}
int main(){
	int a[] = {3,2,66,46,500,43,1,99,7};
	int size,i;;
	size = sizeof(a)/sizeof(a[0]);
	printf("Before sorting: \n");
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
	
	shuffling(a,0,size-1);
	printf("\n\nAfter shuffling: \n");
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
	printf("\n\n");
//	printf("%d",size);
	quickSort(a,0,size-1);

	printf("After sorting:\n");
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
}
