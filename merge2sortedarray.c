#include<stdio.h>a
int main()
{
int ar1[20],ar2[20],ar3[40];
int m,n;
void read_array(int[],int);
void print_array(int[],int);
void merge(int[],int[],int[],int,int);
printf("no of elements in first array[1-20]:");
scanf("%d",&m);
printf("enter the elements in non decreasing order:");
read_array(ar1,m);
printf("no of elements in second array[1-20]:");
scanf("%d",&n);
printf("enter the elements in non decreasing order:");
read_array(ar2,n);
merge(ar1,ar2,ar3,m,n);
printf("merged array:\n");
print_array(ar3,(m+n));
}
// function for read n array elements
// int an array
void read_array(int ar[],int n)
{ 
int i;
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
return;
}
// function to print array elements
void print_array(int ar[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d\t",ar[i]);
return;
}
// mering two arrays
void merge(int a[],int b[],int c[],int m,int n)
{ 
 int i,j,k;
 i=j=k=0;
 // compare and copy elements
 while(i<m&&j<n)
 if(a[i]<b[j])
 {
 c[k]=a[i];
 i=i+1;
 k=k+1;
 }
 else
 {
 c[k]=b[j];
 j=j+1;
 k=k+1;
 }
 // copy remaining elements if any from array a
 while(i<m)
 c[k++]=a[i++];
 
 
 
 
 
 // copy remaining elements from array b
 while(j<n)
 c[k++]=b[j++];
 }
 
