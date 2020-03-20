//WAP to implement iterative binary search and analyze it.
//WAP to implement GCD algorithm and analyse it

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 
#include<time.h>

void binarySearch(int a[],int l,int r,int key){
 	int mid;
 	int found = 0;
 	while(l<r){
 		mid = (l+r)/2;
 		
 		if(key==a[mid]){
 			found= 1;
 			break;
		 }else if(a[mid]>key){
		 	r = mid-1;
		 }else{
		 	l = mid+1;
		 }
	 }
	 if(found==1){
	 	printf("%d found at position %d.\n",key,mid);
	 }else{
	 	printf("%d not found.",key);
	 }
	
}
void sortlist(int a[],int size){
	int i,j,least,p;

	for(i=0;i<size;i++){
		least = a[i];
		p = i;
		for(j=i+1;j<size;j++){
			if(a[j]<a[p]){
				least = a[j];
				p = j;
			}
		}
		if(p!=i){
			int temp;
			temp = a[i];
			a[i] = least;
			a[p] = temp;
		}
		
	}
	printf("\nAfter sorting: \n");
	for(i=0;i<size;i++)
		printf("%d\t",a[i]);
}
int main(){
	time_t start,end,timetaken;
	start = time(NULL);
	printf("Starting time: %d\n\n",start);
	int a[2000];
 
 	int i,j,size;
 	
 	size = (sizeof(a)/sizeof(a[0]))-1;
 	printf("%d",size);
 	
 	for(i=0;i<size;i++){
 		a[i]=rand()%100+1;
 	}
 	a[i] = '\0';
 	
	printf("array length: %d\n",size);
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	sortlist(a,size);
	
	int key=46;
	printf("\n\nkey : %d\n\n",key);
	 binarySearch(a,0,size,key);

	end = time(NULL);
	printf("\n\nending time: %d\n\n",end);
	
	timetaken = (end-start);
	printf("timetaken : %d",timetaken);
	getch();
	return 0;
} 
