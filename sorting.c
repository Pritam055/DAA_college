#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
void Bubblesort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("sorted array using bubbblesort is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
void insertionsort(int a[],int n)
{   
int i,j,key;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	printf("\n\nsorted array using insertionsort is:\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
void selectionsort(int a[],int n)
{   int i,j,p,least,c[100];
	for(i=0;i<n;i++)
	{
		least=a[i];
		p=i;
		for(j=i+1;j<n  ;j++)
		{
			if(a[j]<a[p])
			{
				least=a[j];
				p=j;
			}
		}
		 if(p!=i){
		 	a[p] = a[i];
		 	a[i] = least;
		 }
	}
			
    printf("\n\nsorted array using selectionsort is:\n\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);	
}
int main()
{
	int i,n=100;
	int items[100];
	
	printf("Initail random array: \n");
	for(i=0;i<99;i++)
	{
		items[i]=rand()%100;
		printf("%d\t",items[i]);
	}
	
	Bubblesort(items,n-1);
	insertionsort(items,n-1);
	selectionsort(items,n-1);
	return 0;
}
