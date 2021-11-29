#include <iostream>

using namespace std;

#define info(P) P->info
#define next(P) P->next
#define Top(S) S.Top

typedef int infotype;
typedef struct elmStack *address;

struct elmStack{
    infotype info;
    address next;
};
struct stack{
    address Top;
};

bool isEmpty(stack S);
void createStack(stack &S);
address create_elmStack(infotype X);
void push(stack &S, infotype X);
void pop(stack &S, address &P);
void viewStack(stack S);
