#include "Soal_2.h"

void createStack(Stack &S){
    S.top = -1;
}
bool isEmpty(Stack S){
    return S.top==-1;
}
bool isFull(Stack S){
    return S.top==n-1;
}
void pushAscending(Stack &S,int X){
    if (isEmpty(S)){
        S.info[++S.top]=X;
    }else if(!isFull(S)){
        if (S.info[S.top]<=X){
            S.info[++S.top] = X;
        }else{
            int i = S.top;
            while (i>=0 && S.info[i]>X){
                i--;
            }
            int j;
            for (j=S.top;j>i;j--){
                S.info[j+1] = S.info[j];
            }
            S.info[j+1] = X;
            S.top++;
        }
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
