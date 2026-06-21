#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void quickSort(int a[],int low,int high)
{
if(low<high)
{
int pivot=a[high];
int i=low-1;

for(int j=low;j<high;j++)
{
if(a[j]<pivot)
{
i++;
int temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}

int temp=a[i+1];
a[i+1]=a[high];
a[high]=temp;

quickSort(a,low,i);
quickSort(a,i+2,high);
}
}

void generateSorted(int a[],int n)
{
for(int i=0;i<n;i++)
a[i]=i;
}

void generateRandom(int a[],int n)
{
for(int i=0;i<n;i++)
a[i]=rand()%10000;
}

int main()
{
int n;

printf("Enter size of dataset: ");
scanf("%d",&n);

int sorted[n],random[n];

generateSorted(sorted,n);
generateRandom(random,n);

clock_t start,end;

start=clock();
quickSort(sorted,0,n-1);
end=clock();

printf("\nSorted Dataset Time: %lf seconds",
(double)(end-start)/CLOCKS_PER_SEC);


start=clock();
quickSort(random,0,n-1);
end=clock();

printf("\nRandom Dataset Time: %lf seconds",
(double)(end-start)/CLOCKS_PER_SEC);
OUTPUT:
Enter size of dataset: 5

Sorted Dataset Time: 0.000002 seconds
Random Dataset Time: 0.000001 seconds
OUTPUT
return 0;
}
