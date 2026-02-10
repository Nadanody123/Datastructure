#ifndef STACK_H__H_INCLUDED
#define STACK_H__H_INCLUDED
#define MAX 10
typedef char Stackentry;
typedef struct stack{
       int top;
       Stackentry entry[MAX];
}Stack;
void Createstack(Stack*ps);
int StackFull(Stack*ps);
void Push(Stackentry e,Stack*ps);
int StackEmpty(Stack*ps);
void Pop(Stackentry*pe,Stack*ps);
void Peek(Stackentry*pe,Stack*ps);
void Clearstack(Stack*ps);
int Stacksize(Stack*ps);
void TraverseStack(Stack*ps,void (*pf)(Stackentry));
Stackentry returnfirst(Stack*ps);
Stackentry returnlast(Stack*ps);
void Copystack(Stack*ps1,Stack*ps2);




#endif // STACK_H__H_INCLUDED
