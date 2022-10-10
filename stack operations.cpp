#include<iostream>
using namespace std;

void push(int stack[], int *top,int max,int element)
{
	if(*top>=max-1)
	{
		cout<<"overflow"<<endl;
	}
	else
	{
		*top = *top + 1;
		stack[*top]=element;
	}
}

void display(int stack[], int * top)
{
	if(*top<=-1)
	{
		cout<<"underflow"<<endl;
		return;
	}
	else
	{
		for(int i=*top;i>=0;i--)
		{
			cout<<stack[i]<<" ";
		}
		cout<<endl;
		cout<<stack[*top]<<endl;
	}
}

int pop(int stack[],int *top)
{
	if(*top<=-1)
	{
		cout<<"stack is empty"<<endl;
		return 0 ;	
	}
	else
	{	
		int ele = stack[*top];
		*top -= 1;
		return ele;
	}	
}

void palindrome(int stack[], int top)
{
	int flag;
	for( int i=0;i<top+1;i++)
	{
		if(stack[i] == pop(stack,&top))
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
			
	}
	if(flag)
	{
		cout<<"Stack contents are palindrome"<<endl;
		
	}
	else
	{
		cout<<"Stack contents are not palindrome"<<endl;
	}
}
int main()
{
	int top=-1,stack[100], max=100;
	push(stack,&top,max,10);
	push(stack,&top,max,30);
	push(stack,&top,max,20);
//	pop(stack,&top);
	push(stack,&top,max,10);
//	pop(stack,&top);
	palindrome(stack,top);
	
	display(stack,&top);
}
