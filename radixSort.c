#include<stdio.h>
void countSort(int arr[],int len,int exp){
    //Occurences of the digits
    int output[len];
    int count[10]={0};
    for(int i=0;i<len;i++){
        count[(arr[i]/exp)%10]++;
    }
    //Calculatating Positions
    for(int i=1;i<10;i++){
        count[i]=count[i]+count[i-1];
    }
    //Building Output Array based on them
    for(int i = len-1;i>=0;i--){
        int digit = (arr[i]/exp)%10;
        output[count[digit]-1]=arr[i];
        count[digit]--;
    }
    //copying output to arr
    for(int i=0;i<len;i++){
        arr[i]=output[i];
    }
}
int getMax(int arr[],int len){
    int max = arr[0];
    for(int i=1;i<len;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
void radixSort(int arr[],int len){ 
    int max=getMax(arr,len);
    for(int exp=1;max/exp>0;exp*=10){
        countSort(arr,len,exp);
    }
}
void printArray(int arr[],int len){
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {2,5,13,42,8,203,123,55};
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("Original Array\n");
    printArray(arr,len);
    radixSort(arr,len);
    printf("Sorted array\n");
    printArray(arr,len);
    return 0;
}
