#include<stdio.h>
void quick_sort(int arr[], int low, int high)
{
	int pivot,i,j,temp;
	if(low<high)
	{
		pivot = low;
		i = low;
		j = high;
		while(i<j)
		{
			while(arr[i]<=arr[pivot] && i<=high)
				i++;
			while(arr[j]>arr[pivot] && j>=low)
				j--;
			if(i<j)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		temp = arr[j];
		arr[j] = arr[pivot];
		arr[pivot] = temp;
		
		quick_sort(arr,low,j-1);
		quick_sort(arr,j+1,high);
	}
}
int main()
{
	int arr[10],n,i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quick_sort(arr,0,n-1);
	printf("The sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
