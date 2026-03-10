#include<stdio.h>
#include<limits.h>
int main() {
	int n,i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array: \n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
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
	printf("Second largest element: %d",secondLargest);
	return 0;

}