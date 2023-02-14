#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h> // now we can use isalpha() & isdigit()

//ADT
void push(char item);
char pop();
int precedence(char item);
bool isoperator(char item);
void infixtopostfix(char infix[],char postfix[]);

char opstack[50];
int tos=-1;

void push(char item){
	tos++;
	opstack[tos]=item;
}

char pop(){
	char item;
	item=opstack[tos];
	tos--;
	return item;
}

int precedence(char item){
	if(item=='^' || item=='$')
		return 3;  //high precedence

	else if(item=='/' || item=='*')
		return 2;   
		
	else if(item=='+' || item=='-')
		return 1;  //least precedence
		
	else 
	    return 0;	
}

bool isoperator(char item){
	if(item=='^'|| item=='$'|| item=='*' || item=='/' || item=='+' || item=='-')
    	return true;
    else
    	return false;
}

void infixtopostfix(char infix[], char postfix[])
{ 
	int i, j;   //used to access infix and postfix array on the basis of index
	char item;  //stores currently scanned operator from infix expression
	char x;     //stores poped operator from opstack

	push('#');  //used to pop remaining operators  from opstack
	            //will check this at last

	i=0;   //accessing infix array
	j=0;   //index of array always starts from 0.
	       //accessing postfix array
	
	item=infix[i];         /* initialize before loop*/

	while(item != '\0')        /* run loop till end of infix expression */
	{
		if(item == '(')
		{
			push(item);
		}
		else if( isdigit(item) || isalpha(item))  //operand or not..
		{
			postfix[j] = item;              /* add operand symbol to postfix expr */
			j++;    //because, next operand must be stored in next index.
		}
		else if(isoperator(item))        /* means symbol is operator */
		{
			x=pop();
			while(isoperator(x) && precedence(x)>= precedence(item))
			{
				postfix[j] = x;                  /* so pop all higher precendence operator and */
				j++;
				x = pop();                       /* add them to postfix expresion */
			}
			push(x);
			/* because just above while loop will terminate we have
			oppped one extra item
			for which condition fails and loop terminates, so that one*/

			push(item);                 /* push current oprerator symbol onto stack */
		}
		else if(item == ')')         /* if current symbol is ')' then */
		{
			x = pop();                   /* pop and keep popping until */
			while(x != '(')                /* '(' encounterd */
			{
				postfix[j] = x;
				j++;
				x = pop();
			}
		}
		i++;
		item = infix[i]; /* go to next symbol of infix expression */
	} /* while loop ends here */
	
	while(opstack[tos] != '#')     /* Pop from stack till empty */
    {
    	//pop from opstack
    	char item=pop();
    	//put to postfix
    	postfix[j]=item;
    	j++;
	}
	postfix[j] = '\0';   //Making postfix valid
}

int main(){
	char infix[50],postfix[50];
	printf("Enter valid infix expression:\n");
	gets(infix);
	infixtopostfix(infix,postfix);
	printf("Postfix expression is:\n");
    puts(postfix);
	return 0;
}
