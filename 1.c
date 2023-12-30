#include <stdio.h>
 #include<ctype.h>
 #include<string.h>
 static char strp[30];
 int top=1;
 int push(char);
 int pop();
 int priority(char);
 void main()
 {

printf("\n enter the string (infix expression)");
gets(in);
l=strlen(in);
printf("length is %d",l);
for(i=0,j=0;i<l;i++)
{
    if(isalpha(in[i])|| isdigit(in[i]))
    post[j++]=in[i];
    
    else{

        if(in[i]=='(')
        push(in[i]);
        else if (in[i]==')')
        {
            while((ch=pop())!='(')
            post[j++]=ch;

        }
        else
        {
            while(priority(in[i])<=priority(str[top]))
            post[j++]=pop();
            push(in[i]);
        }
    }

}
        while(top!=-1)
        post[j++]=pop();
        post[j]='\0';
        printf("\n equivalent infix to postfix is %s",post)

 }
 int priority (char c)
 {

    switch (c)
    {
    case '+':
    case '-': return 1;
    case '*':
    case '/': return 2;
    case '$': return 3;
    case '^': return 4;    

    }
    return 0;

 }
 
 int push(char c)
 {
    str[++top]=c;
    return0;

 }


 int pop()
 {
    return(str[top--]);
 }
