#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#define max 5
int ch,item,top=-1,stack[max];
int(pop);
void display;
void peek;
int main()
{
	printf("/nenter u r choice/n");
	printf("/n1.push/n");
	printf("/n2.pop/n");
	printf("/n3.display/n");
	printf("/n4.peek/n");
	printf("/n5.exit/n");
	printf("/nenter the choice/n");
	fflush(stdin);
	scanf("%d",&ch);
	while (ch!=5)
	{
		switch(ch)
	{
			case 1:push(item);
			printf("enter the element to be pushed in to the stack/n");
			scanf("/npush(item)/n");
			break;
			case 2:intpop();
			printf("/n the element popped is %d/n",item);
			break;
			case 3:display;
			break;
			case 4: peek;
			break;
			case 5:exit;
		}
	printf("/n enter your choice/n");
	printf("/n1.push/n");
	printf("/n2.pop/n");
	printf("/n3.peek/n");
	printf("/n4.display/n");
	printf("/n5.exit/n");
	printf("/nenter the choice/n");
	scanf("%d",&item);
 }
 pushint(item);
 {
 	if(max==-1)
	 {
	 	top++;
	 	stack[top]=item;
	 	printf("stack is full or over flow/n");
	 }
	 else
	 {
	 	if(top=1)
	 	{
	 		top--;
	 		item=stack[top];
	 		printf("stack is empty or underflow/n");
	 	}
	 }
	 void display()
	 {
	 	int i;
	 	{
	 		printf("/n");
	 		printf("/n %3d",stack[i]);
		 }
	 }
	  void peek()
	  {
	 	printf("/n right now the stack top most element is=%d/n",stack[top]);
	 	getch()
	 }
}
		 
	 
	 
		 	
	
			
		
	
	



