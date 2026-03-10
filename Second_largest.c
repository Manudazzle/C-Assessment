#include<stdio.h>
#include<limits.h>
int main() {
	int n=5;
	int i;
	printf("Size of array: %d\n",n);
	int arr[5]= {88,99,77,66,55};
	printf("The elements of array: ",arr);
	for(i=0; i<n; i++) {
		printf("%d ",arr[i]);
	}
	printf("\n ");
	int largest=INT_MIN;
	int secondLargest=INT_MIN;
	for(i=0; i<n; i++)
	{
		if(arr[i]>largest) {
			secondLargest=largest;
			largest=arr[i];
		}
		else if(arr[i]>secondLargest && arr[i]!=largest) {
			secondLargest=arr[i];
		}
	}
	printf("\nSecond largest element: %d",secondLargest);
	return 0;

}
