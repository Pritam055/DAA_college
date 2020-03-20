//WAP to implement iterative binary search and analyze it.
//WAP to implement GCD algorithm and analyse it

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void binarySearch(char a[],int l,int r,int key){
//	int i,j;
//		printf("\nsorted rey\n");
//	for(i=0;i<strlen(a);i++){
//		printf("%d\t",a[i]);
//	}
	int i,pos;
	int mid;
	mid = (l+r)/2;
	 int found=0;
	 
		if(mid>key){
			for(i=0;i<mid;i++){
				if(key==a[i]){
					pos = i;
					found=1;
				 	printf("\npos: %d",pos+1);
			 
				}
			}
		}else{
			for(i=mid;i<r;i++){
				if(key==a[i]){
					pos = i;
					found=1;
					printf("\npos: %d",pos+1);
					 
				}
			}
		}
		if(found==0)
			printf("\n%d not found\n",key);
	
}
void sortlist(char a[]){
	int i,j,least,p;
	int n;
	n = strlen(a);
 
	for(i=0;i<n;i++){
		least = a[i];
		p = i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[p]){
				least = a[j];
				p = j;
			}
		}
		if(p!=i){
			int temp;
			temp = a[i];
			a[i] = least;
		}
		
	}
	printf("\nAfter sorting: \n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
int main(){
	time_t start,end,timetaken;
	start = time(NULL);
	printf("Starting time: %d\n\n",start);
	char a[101];
 
 	int i,j;
 	for(i=0;i<100;i++){
 		a[i]=rand()%100+1;
 	}
	 
	printf("array length: %d\n",strlen(a));
	for(i=0;i<strlen(a);i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	sortlist(a);
	int key=88;
	printf("\n\nkey : %d\n\n",key);
	 binarySearch(a,0,8,key);

	end = time(NULL);
	printf("\n\nending time: %d\n\n",end);
	
	timetaken = (end-start);
	printf("timetaken : %d",timetaken);
	getch();
	return 0;
}
