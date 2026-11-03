#include<stdio.h>
#include<string.h>

unsigned long long int Fibo(int n,unsigned long long int fibo[]){
    if(n == 0 || n == 1){
        fibo[n] = n;
        return fibo[n];
        }
    if(fibo[n] != 0){
        return fibo[n];
    }
    else{
        fibo[n] = Fibo(n-1,fibo)+ Fibo(n-2,fibo);
        return fibo[n];
    }


}
int main (){
    int n;
    scanf("%d",&n);
    unsigned long long int fibo[n+1];
    memset(fibo,0,sizeof(fibo));
    printf("Fibonicci %d is %llu",n,Fibo(n,fibo));


}
