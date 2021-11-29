#include "stack.h"

bool isEmpty(stack S){
    return Top(S)==NULL;
}
void createStack(stack &S){
    Top(S) = NULL;
}
address create_elmStack(infotype X){
    address P = new elmStack;

    info(P) = X;
    next(P) = NULL;

    return P;
}
void push(stack &S, infotype X){
    address P = create_elmStack(X);
    if (isEmpty(S)){
        Top(S) = P;
    }else{
        next(P) = Top(S);
        Top(S) = P;
    }
}
void pop(stack &S, address &P){
    P = Top(S);
    if (isEmpty(S)){
        cout << "Stack Kosong!" << endl;
    }else{
        Top(S) = next(Top(S));
        next(P) = NULL;
    }
}
void viewStack(stack S){
    if (isEmpty(S)){
        cout << "StackKosong!" << endl;
    }else{
        address P = Top(S);
        while (P!=NULL){
            cout << info(P) << endl;
            P = next(P);

        }
    }
}
