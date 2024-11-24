#include<stdio.h>
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i = low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}
void quickSort(int arr[],int low,int high){
    if(low<high){
        int pi = partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
int main(){
    int arr[] ={1,8,3,5,12,4,34,22,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sorting");
    printArray(arr,size);
    quickSort(arr,0,size-1);
    printf("After Sorting");
    printArray(arr,size);
}
