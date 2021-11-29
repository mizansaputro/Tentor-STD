#include "Soal_1.h"

int main()
{
    cout << "Hello world!" << endl;
    Stack S;
    createStack(S);
    Push(S,3);
    Push(S,4);
    Push(S,8);
    Pop(S);
    Push(S,2);
    Push(S,3);
    Pop(S);
    Push(S,9);
    printInfo(S);
    cout<<"balik stack"<<endl;
    balikStack(S);
    printInfo(S);
    return 0;
}
