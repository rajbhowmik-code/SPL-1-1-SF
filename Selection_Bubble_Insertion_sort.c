#include <stdio.h>
void get(int n,int arr[n]){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void put(int n,int arr[n]){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
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
void bubblesort(int n,int arr[n]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void insertionsort(int n,int arr[n]){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    get(n,arr);
    selectionsort(n,arr);
    put(n,arr);
    return 0;

}