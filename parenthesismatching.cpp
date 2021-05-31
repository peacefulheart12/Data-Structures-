




#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define size 100
struct stack {
   char s[size];
   int top;
} st;
 
int stfull() {
   if (st.top >= size - 1)
      return 1;
   else
      return 0;
}
 
void push(char item) {
   st.top++;
   st.s[st.top] = item;
}
 
int stempty() {
   if (st.top == -1)
      return 1;
   else
      return 0;
}
 
int pop() {
   char item;
   item = st.s[st.top];
   st.top--;
   return (item);
}
 
void display() {
   int i;
   if (stempty())
      printf("\nStack Is Empty!");
   else {
      for (i = st.top; i >= 0; i--)
         printf("\n%d", st.s[i]);
   }
}
 
int main() {
   //int item, choice;
   char expression[80];
   int i=-1;
   st.top = -1;
   printf("\n\tImplementation Of Stack");
   printf("\nEnter the expression —> "); 

scanf("%s",expression);
while(expression[++i] != '\0')
{
	if(stempty()&&(expression[i]==')'||expression[i]=='}'||expression[i]==']')){
		printf("bad initial parenthesis");
		return 0;
	}
	//printf("%c\t\t%c\n",expression[i],st.s[st.top]);
switch (expression[i])
{
	
	case '(' : 
	{
		push('(');
		break;
	}
	case ')' : 
	{
		if(st.s[st.top]=='(');
		pop();
		break;
	}
	case '[' :
	{
	  
	
	push('[');
	break;
	}
	case ']' : 
	{
		
	if(st.s[st.top]=='[')
	pop();
	break;
	}
	case '{' : 
	{
	
	push('{');
	break;
	}
	case '}' : 
	{
	
	if(st.s[st.top]=='{');
	pop();
	break;
	}
}

}
   if (!stempty())
   
printf("\nExpression has unmatched parenthesis");
else
printf("\nExpression is okay");

return 0;
}
