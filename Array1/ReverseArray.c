/*Q4..Reverse the Array (Return new Array)
     Problem Constraints :
     1<=N<=10000(size)
     1<=A[i]<=10000
     Input - 1 2 3 4 5
     Ouput - 5 4 3 2 1

*/
#include<stdio.h>

int* reverse(int A[],int size,int rev[]){
	int i=0;
	while(i<size){
		rev[i] = A[size-1-i];
		i++;
	}
	return rev;
}
void main(){

	int arr[10000];
	
	int size;
	printf("Enter the size : ");
	scanf("%d",&size);

	printf("Enter the elements of array : ");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int rev[size];
	int *ptr = reverse(arr,size,rev);
	printf("Reverse array is : ");
	for(int i=0;i<size;i++){
		printf("%d ",*(ptr + i));
	}


}


