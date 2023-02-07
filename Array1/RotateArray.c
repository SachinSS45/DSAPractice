/*Q5..Rotate the Array
     Problem Discription :
     -Given an integer array A of N and an integer B.you have to return the same array after rotating it B times towards right.
     -Return the array A after rotating it B times to the right
     Problem Constraints :
     1<=N<=105(size)
     1<=A[i]<=109
     1<=B<=109
     Input 1:
     A = [1,2,3,4]
     B = 2

     Output 1:
     [3,4,1,2]

*/
#include<stdio.h>

int* arrayRotation(int A[],int size,int B){
	
	if(size==1) return A;

	while(B!=0){

		int temp = A[size-1];

		for(int i=size-1;i>=1;i--){
			A[i] = A[i-1];
		}
		A[0] = temp;
		B--;
	}
	return A;
}
void main(){

	int arr[105];
	
	int size;
	printf("Enter the size : ");
	scanf("%d",&size);

	printf("Enter the elements of array : ");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int B;
	printf("How many times you want to rotate : ");
	scanf("%d",&B);
	int *ptr = arrayRotation(arr,size,B);
	printf("Rotated array is : ");
	for(int i=0;i<size;i++){
		printf("%d ",*(ptr + i));
	}
}


