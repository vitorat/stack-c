//Author: Vitor tolomelli

#include<stdio.h>
#include<stdlib.h>


main() {
	
	int size;
	int top, option, value, i;

	top = -1;

	printf("--------->Type the stack size<---------\n");
	scanf("%d", &size);
	
	int stack[size];
	
	printf("------->Stack started as empty<--------\n");
	printf("\nType an option:  1 - Insert, 2 - Remove, 3 - End\n");
	scanf("%d", &option);

	while(option!=3){

		if(option==1){
			if(top == (size-1)){
				printf("_________________Full stack_________________\n");
				printf("\nType an option:  1 - Insert, 2 - Remove, 3 - End\n");
 				scanf("%d", &option);
		}
			else{
				printf("------------>Type a value<-------------\n");
		        scanf("%d", &value);
		        top++;
		        stack[top]=value;
		        printf("--------------->Stacked<---------------\n");
			}

		}

		if(option==2){
			if(top==-1){
				printf("_____Stack empty, choose another option_____\n");
				printf("\nType an option:  1 - Insert, 2 - Remove, 3 - End\n");
				scanf("%d", &option);
				printf("------------>Type a value<-------------\n");
		        scanf("%d", &value);
		        top++;
		        stack[top]=value;
		        printf("--------------->Stacked<---------------\n");
				}
			else{
				printf("-------------->Unstacked<--------------\n");
		        top--;
			}
		}
			printf("\n------------->STACK IMAGE<-------------\n");
			for(i=top; i>=0; i=i-1)
				printf(" [%d]  %d\n", i, stack[i] );
				printf("\nType an option:  1 - Insert, 2 - Remove, 3 - End\n");
				scanf("%d",&option);
		};
		printf("\n");
		system("pause");
	}

