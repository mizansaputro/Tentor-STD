#include "Soal_1.h"

void createStack(Stack &S){
    S.top = -1;
}
bool isEmpty(Stack S){
    return S.top==-1;
}
bool isFull(Stack S){
    return S.top==n-1;
}
void Push(Stack &S,int X){
    if (!isFull(S)){
        S.info[++S.top]=X;
    }
}
void Pop(Stack &S){
    if (!isEmpty(S)){
        S.top--;
    }
}
void printInfo(Stack S){
    cout << "[TOP] ";
    if (!isEmpty(S)){
        for (int i=S.top;i>=0;i--){
            cout << S.info[i] << " ";
        }
        cout << endl;
    }
}
void balikStack(Stack &S){
    int belakang = S.top;
    for (int i=0;i<=S.top/2;i++){
        int temp = S.info[belakang];
        S.info[belakang] = S.info[i];
        S.info[i] = temp;

        belakang--;
    }

}
