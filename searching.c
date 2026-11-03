#include <stdio.h>
void get(int n,int arr[n]){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void selectionsort(int n,int arr[n]){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]= arr[j];
                arr[j] = temp;
            }
        }
    }

}

int binarysearch(int n,int target,int arr[n]){
    int low =0,high = n-1,mid;
    while(low <= high){
        mid = (low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;
}

int main (){

    int n;
    scanf("%d",&n);
    int arr[n];
    get(n,arr);
    int target;

    selectionsort(n,arr);
    
    scanf("%d",&target);
    int index = binarysearch(n,target,arr);

    if (index != -1) {
        printf("Found %d at index %d in sorted array.\n", target, index);
    } else {
        printf("Not found.\n");
    }

    return 0;
}