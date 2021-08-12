
// NO ERROR IN THIS CODE

#include<stdio.h>
//Kernal Definition
__global__ void hello(float a, float b, float c){
	printf("Its a KERNEL function");
	printf ("%d",a+b+c);
	return 0;
}

int add(int a, int b){
	return a+b;
}
/*
this is 
random
multi
line 
comment
for test
*/

//Struct
struct node{
	int a;
	char b;
	float c;
};

//Single Line Comment

int main()
{
//Variable Declaration
	struct node x;
	int a=4, i;
	char z;
	float a[10];
	struct node b;
	int b;
	
//If-Else
	if(i>2){
		printf(1);
	}
	else{
		printf("1");
	}
	
	
//Loop
	for(i=0;i<10;i)
	{
		printf("%d",i);
	}
	
	while(i>j){
		if(1>2)
			scanf("%d",&i);
			break;
	}
//Function Call
	add(5,6);	
	add(3,4);
	
//Kernal Call
	hello <<<123,1024>>> (1.2 ,1.3 ,15);
	hello <<<24,512>>> (5 ,1.3 ,15);
	hello <<<12,10>>> (6 ,715);
	
	return 0;
}
