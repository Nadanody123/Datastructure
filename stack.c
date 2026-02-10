#include "stack.h"
void Createstack(Stack*ps){
    ps->top=0;

}
int StackFull(Stack*ps){
   return ps->top==MAX;
}
void Push(Stackentry e,Stack*ps){
      ps->entry[ps->top++]=e;
}
int StackEmpty(Stack*ps){
     return ps->top==0;
}
void Pop(Stackentry*pe,Stack*ps){
   *pe=ps->entry[--ps->top];
}
void Peek(Stackentry*pe,Stack*ps){
    ps->entry[ps->top-1];
}
int Stacksize(Stack*ps){
   return ps->top;
}
void Clearstack(Stack*ps){
    ps->top=0;
}
void TraverseStack(Stack*ps,void (*pf)(Stackentry)){
    for(int i =ps->top;i>0;i--){
        (*pf)(ps->entry[i-1]);
    }
}
Stackentry returnfirst(Stack*ps){
  return ps->entry[0];
}
Stackentry returnlast(Stack*ps){
      return ps->entry[ps->top-1];
}
void Copystack(Stack*ps1,Stack*ps2){
       ps2->top=ps1->top;
       for(int i=0;i<MAX;i++){
        ps2->entry[i]=ps1->entry[i];
       }
}
