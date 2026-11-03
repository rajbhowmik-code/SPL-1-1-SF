#include<stdio.h>
#define Max_Size 100
int queue[Max_Size];
int frnt = 0,bck = 0;

int size(){
    return bck - frnt;
}

int empty(){
    if (size() == 0)
        return 1;
    else
        return 0;
}

void push(int a){
    if(bck == Max_Size-1){
        printf("Overflow\n");
        return;
    }
    else {
    queue[bck] = a;
    bck++;
    }
    return;

}

void pop(){
    if(empty()==1 || frnt == Max_Size-1){
        printf("Underflow\n");
        return;
    }
    else{
        frnt++;
    }
    return;
}

int front(){
    if(empty()==1){
        printf("Empty Nothing on front\n");
        return -1;
    }
    else
        return queue[frnt];
}

int back(){
    if(empty()==1){
        printf("Empty Nothing on front\n");
        return -1;
    }
    else
        return queue[bck-1];
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
    printf("front element: %d\n", front());

    pop();
    printf("front after pop: %d\n", front());
    printf("Final Size: %d\n", size());

    return 0;
}

