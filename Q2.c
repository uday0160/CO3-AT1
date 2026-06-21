#include<stdio.h>
#include<time.h>

int binaryRecursive(int a[],int low,int high,int key)
{
if(low<=high)
{
int mid=(low+high)/2;

if(a[mid]==key)
return mid;

if(a[mid]>key)
return binaryRecursive(a,low,mid-1,key);

return binaryRecursive(a,mid+1,high,key);
}

return -1;
}


int binaryIterative(int a[],int n,int key)
{
int low=0,high=n-1;

while(low<=high)
{
int mid=(low+high)/2;

if(a[mid]==key)
return mid;

else if(a[mid]<key)
low=mid+1;

else
high=mid-1;
}

return -1;
}


int main()
{

int n,key;

printf("Enter size: ");
scanf("%d",&n);

int a[n];

for(int i=0;i<n;i++)
a[i]=i;

key=n-1;

clock_t start,end;


start=clock();

binaryRecursive(a,0,n-1,key);

end=clock();

printf("Recursive Binary Search Time: %lf",
(double)(end-start)/CLOCKS_PER_SEC);



start=clock();

binaryIterative(a,n,key);

end=clock();


printf("\nIterative Binary Search Time: %lf",
(double)(end-start)/CLOCKS_PER_SEC);


return 0;
}
OUTPUT:
Enter size: 4
Recursive Binary Search Time: 0.000001
Iterative Binary Search Time: 0.000001
