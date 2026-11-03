#include <stdio.h>
#include <string.h>
void getstring(int n, char arr[n][50]){
    for(int i =0;i<n;i++){
        scanf("%49s",arr[i]);
    }
}

void putline(int n ,char arr [n][50]){
    for(int i =0;i<n;i++){
        printf("%s \n",arr[i]);
    }
}

void sortstring(int n,char arr[n][50]){
    for(int i =0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(strcmp(arr[i],arr[j])>0){
                char temp[50];
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
            }
        }
    }
}

void sortstring2(int n,char arr[n][50]){
    for(int i =0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(strcmp(arr[i],arr[j])<0){
                char temp[50];
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
            }
        }
    }
}

int main (){

    int n;
    scanf("%d",&n);

    char arr[n][50];

    getstring(n,arr);
    sortstring(n,arr);
    printf("Sorted array (small to big) \n");
    putline(n,arr);
    sortstring2(n,arr);
    printf("Sorted array (big to small) \n");
    putline(n,arr);



    return 0;
}