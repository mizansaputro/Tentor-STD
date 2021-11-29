#include <iostream>

using namespace std;

const int n = 5;
struct Stack{
    int info[n];
    int top;
};

void createStack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void Push(Stack &S,int X);
void Pop(Stack &S);
void printInfo(Stack S);
void balikStack(Stack &S);
