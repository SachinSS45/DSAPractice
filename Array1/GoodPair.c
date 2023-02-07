/*Q2.Good Pair
     A[i] + A[j] = B  && i!=j
     return 1 if Good Pair is Present 
     return 0 if Good Pair is not Present     

     Problem Constraints :
     1<=A.size() <=104
     1<=A[i]<=109
     1<=B<=109
*/
#include<stdio.h>

int goodPair(int A[],int size,int B){

	if(size==1) return 0;


	for(int i=0;i<size-1;i++){

		for(int j=0;j<size;j++){

			if(A[j]+A[i]==B && i!=j){
				return 1;
			}
		}
	}
	return 0;
}
void main(){

	int arr[104];
	int size;
	printf("Enter the size : ");
	scanf("%d",&size);

	printf("Enter the elements of array : ");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int b;
	printf("Enter target sum : ");
	scanf("%d",&b);
	if(goodPair(arr,size,b)){
		printf("Good Pair is Present\n");
	}else{
		printf("Good Pair is not Present\n");
	}


}


