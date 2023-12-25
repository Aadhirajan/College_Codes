// Binary search using recursion
#include<stdio.h>
int binary_search(int arr[],int start,int end,int target)
{
    if(end>=1)
    {
        int mid = (start+end)/2;
        if (arr[mid]==target)
        return mid;
        if (arr[mid]<target)
        return binary_search(arr,mid-1,end,target);
        if(arr[mid]>target)
        return binary_search(arr,start,mid-1,target);
    }
    return -1;
}
int main()
{
    int arr[]={1,5,4,7,8,4};
    int target=7;
    int start=0;
    int end=sizeof(arr)/sizeof(arr[0]);
    int result=binary_search(arr,start,end-1,target);
    if (result==-1){
        printf("Element not found");
    }
    else{
        printf("The element is at index %d", result);
    }

}
