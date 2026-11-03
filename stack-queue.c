#include<stdio.h>
#define Max_Size 100
int stack[Max_Size];
int tp = 0;

int size(){
    return tp;
}

int empty(){
    if (size() == 0)
        return 1;
    else
        return 0;
}

void push(int a){
    if(size() == Max_Size){
        printf("Overflow");
        return;
    }
    stack[tp] = a;
    tp++;
    return;
}

void pop(){
    if(empty()==1)
        printf("Empty Nothing to Pop\n");
    else
        tp--;
}

int top(){
    if(empty()==1){
        printf("Empty Nothing on Top\n");
        return -1;
    }
    else
        return stack[tp-1];
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);
        push(a);
    }

    printf("Empty check: %d\n", empty());
    printf("Current Size: %d\n", size());

    push(50);
    printf("Top element: %d\n", top());

    pop();
    printf("Top after pop: %d\n", top());
    printf("Final Size: %d\n", size());

    return 0;
}
