#include <stdio.h>
#include<string.h>

void getstring (int n,char arr [n][50]){
    for(int i = 0;i<n;i++){
        scanf("%49s",arr[i]);
    }
}

int findsmallindex(int n,char arr[n][50]){
    int minindex=0;
    for(int i =1;i<n;i++){
        if(strcmp(arr[i],arr[minindex]) <0){
            minindex =i;

        }
    }
    return minindex;
}

int findbigindex(int n,char arr[n][50]){
    int bigindex=0;
    for(int i =1;i<n;i++){
        if(strcmp(arr[i],arr[bigindex]) >0){
            bigindex =i;
        }
    }
    return bigindex;
}
int main (){

    int n;
    scanf("%d",&n);
    char arr[n][50];

    getstring(n,arr);
    int small = findsmallindex(n,arr);
    int big = findbigindex(n,arr);

    printf("Lexicographically Smallest: %s Biggest: %s \n",arr[small],arr[big]);



    return 0;
}