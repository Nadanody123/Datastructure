#include <stdio.h>
#include <stdlib.h>
#include"stack.h"
int isbalanced(char*a){
    Stack s;
    Createstack(&s);
    for(int i=0;a[i]!='\0';i++){
        char x=a[i];
        if(x=='('||x=='{'||x=='[')
            Push(x,&s);
        else if (x==')'||x=='}'||x==']'){
            if (StackEmpty(&s))
                return 0;

                char top;
            Pop(&top,&s);
            if((x==')'&&top!='(')||(x=='}'&&top!='{')||(x==']'&&top!='['))
                return 0;

            }

    }
            return StackEmpty(&s);

}
int main(){

    char a[10];
    printf("Enter an expression:");
    gets(a);
    if(isbalanced(a)){
        printf("balanced");
    }
    else{
        printf("unbalanced");
    }
    return 0;
}
