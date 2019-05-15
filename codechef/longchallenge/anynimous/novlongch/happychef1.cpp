/*#include<bits/stdc++.h>
using namespace std;
// Swapping two values.
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

// Partitioning the array on the basis of values at high as pivot value.
int Partition(int a[], int low, int high)
{
	int pivot, index, i;
	index = low;
	pivot = high;

	// Getting index of pivot.
	for(i=low; i < high; i++)
	{
		if(a[i] < a[pivot])
		{
			swap(&a[i], &a[index]);
			index++;
		}
	}
	// Swapping value at high and at the index obtained.
	swap(&a[pivot], &a[index]);

	return index;
}

// Random selection of pivot.
int RandomPivotPartition(int a[], int low, int high)
{
	int pvt, n, temp;
	n = rand();
	// Randomizing the pivot value in the given subpart of array.
	pvt = low + n%(high-low+1);

	// Swapping pvt value from high, so pvt value will be taken as pivot while partitioning.
	swap(&a[high], &a[pvt]);

	return Partition(a, low, high);
}

// Implementing QuickSort algorithm.
int QuickSort(int a[], int low, int high)
{
	int pindex;
	if(low < high)
	{
		// Partitioning array using randomized pivot.
		pindex = RandomPivotPartition(a, low, high);
		// Recursively implementing QuickSort.
		QuickSort(a, low, pindex-1);
		QuickSort(a, pindex+1, high);
	}
	return 0;
}
int in()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int a[n+1];a[0]=0;
        for(i=1;i<n+1;i++)
            cin>>a[i];
        int flag=0;
        for(i=1;i<n+1;i++)
        {
            for(j=i+1;i<n+1;j++)
            {
                if(a[i]==a[j])
                    flag=1;
                break;
            }if(flag==1) break;
        }
    QuickSort(a,1,n);
    for(int k=1;k<n+1;k++)
        cout<<"\t"<<a[k]<<"\t"<<i<<"\t"<<j<<"\n";
//seraching for index i in array

    if(flag == 1)
    {
       int first = 1;
        int last = n;
        int middle = (first+last)/2;
        while (first <= last)
        {
           if(a[middle] < i)
           {
            first = middle + 1;

           }
           else if(a[middle] == i)
           {
            flag=1;
                    break;
               }
               else {
                    last = middle - 1;
               }
               middle = (first + last)/2;
            }
            if(first > last)
        {
           flag=0;
        }

    }
    //searching for indexj in array
    if(flag==1)
    {
	 int first = 1;
	int last = n;
	int middle = (first+last)/2;
	while (first <= last)
	{
	   if(a[middle] < j)
	   {
		first = middle + 1;

	   }
	   else if(a[middle] == j)
	   {
		 cout<<"Truly Happy"<<"\n";
                break;
           }
           else {
                last = middle - 1;
           }
           middle = (first + last)/2;
        }
        if(first > last)
	{
	   cout<<"Poor Chef"<<"\n";
	}
    }
    else
	cout<<"Poor Chef"<<"\n";
    }
    return 0;
}*/
