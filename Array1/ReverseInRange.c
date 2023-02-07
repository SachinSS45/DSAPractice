/*Q3.Reverse In Range
     Problem Constraints :
     1<=N<=105(size)
     1<=A[i]<=109
     1<=B<=C<=N-1
*/
#include<stdio.h>

int* reverseInRange(int A[],int size,int B,int C){

	if(B>=size) return A;


	while(B<C){
		int temp = A[B];
		A[B] = A[C];
		A[C] =temp;
		B++;
		C--;
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
	int b;
	printf("Enter starting index: ");
	scanf("%d",&b);
	int c;
	printf("Enter ending index : ");
	scanf("%d",&c);
	int *ptr = reverseInRange(arr,size,b,c);
	printf("Reverse array in given Range is : ");
	for(int i=0;i<size;i++){
		printf("%d ",*(ptr + i));
	}


}


