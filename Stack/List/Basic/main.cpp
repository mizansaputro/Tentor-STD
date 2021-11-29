#include "stack.h"

int main()
{
    stack S;
    address P;

    createStack(S);

    cout << "Print All Element: " << endl;;
    viewStack(S);
    push(S,10);
    push(S,12);
    cout << "Print All Element: " << endl;;
    viewStack(S); // 12 10
    pop(S,P);
    pop(S,P);
    pop(S,P);
}
