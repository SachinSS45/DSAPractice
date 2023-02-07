/*Q1.count the Elements
 -Given the array A to N integers
 -Count the no.of elements that at least 1 element greater than itself

 constraints => 1<=N<=105
 		1<=A[i]<=109
	       (1)Input - A = [3,1,2]
		  Output - 2
	       (2)Input - A = [5,5,3]
	          Output - 1
*/
#include<stdio.h>

int countEle(int arr[],int size){

	if(size==1) return 0;

	int count = 0;
	for(int i=0;i<size;i++){

		for(int j=0;j<size;j++){

			if(arr[j] > arr[i]){
				count++;
				break;
			}
		}
	}
	return count;
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

	int ret = countEle(arr,size);

	printf("No.of Elements that at least 1 element greater than itself are : %d\n",ret);
}


