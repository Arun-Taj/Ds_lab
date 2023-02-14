#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int tos=-1;
char opndstack[50];
void push(int item);
int pop();
bool isoperator(char item);
int evaluatePostfix(char postfix[]);
void push(int item)
{
	tos++;
	opndstack[tos]=item;
}
int pop()
{
	int item;
	item=opndstack[tos];
	tos--;
	return item;
}
bool isoperator(char item)
{
	if(item=='^'||item=='$'||item=='/'||item=='*'||item=='+'||item=='-')
	return true;
	else 
	return false;
}
int evaluatePostfix(char postfix[])
{
	int op1,op2,res;
	char item;
	int i=0;
	item=postfix[i];
	while(item!='\0')
	{
		if(isoperator(item))
		{
		op2=pop();
		op1=pop();
		if(item=='^')
		{
			res=pow(op1,op2);
		}
		else if(item=='$')
		{
			res=pow(op1,op2);
		}
		else if(item=='/')
		{
			res=op1/op2;
			
		}
		else if(item=='*')
		{
			res=op1*op2;
		}
		else if(item=='+')
		{
			res=op1+op2;
		}
		else if(item=='-')
		{
			res=op1-op2;
		}
		push(res);
	}
	else 
	push((int)item-48);
		i++;
		item=postfix[i];
		
	}
	return opndstack[tos];
}
int main()
{
	char postfix[50];
	printf("Enter valid postfix expression\n");
	gets(postfix);
	int res=evaluatePostfix(postfix);
	printf("Result is : %d",res);
}
