#include<stdio.h>
#define Max_Size 100
char stack[Max_Size];
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

void push(char a){
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

char top(){
    if(empty()==1){
        printf("Empty Nothing on Top\n");
        return -1;
    }
    else
        return stack[tp-1];
}

int main(){
    int n,k=1;
    scanf("%d",&n);
    for(int i =0 ; i <n ; i++){
        char a;
        scanf(" %c",&a);
        if(a == '(' || a =='{' || a == '['){
            push(a);
           }
        else if(a == ')'){
                    if(empty() == 0 && top()=='('){
                        pop();
                       }
                    else{
                        k=0;
                        break;
                    }
                }
        else if(a == '}'){
                    if(empty() == 0 && top()=='{'){
                        pop();
                       }
                    else{
                        k=0;
                        break;
                    }
                }
        else if(a == ']'){
                    if(empty() == 0 && top()=='['){
                        pop();
                       }
                    else{
                        k=0;
                        break;
                    }
                }
    }
    if(k && empty())
        printf("Balanced");
    else
        printf("Unbalanced");

    return 0;
}

