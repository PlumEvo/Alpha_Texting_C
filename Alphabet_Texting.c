#include <stdio.h>

int main(void){
	
	int i, j, n;
	
	//A did not work
	
	//B :- 
	for(i=0;i<5;i++){//5
		if(i==0 || i==4){
			printf("#####\n");
		}
		else if(i==2){
			printf("######\n");
		}
		else{
			printf("#    #\n");
		}
	}

	//C :-
	
	for(i=0;i<10;i++){
		if (i==0 || i==9){
			printf("   ######  \n");
		}
		else if(i==1 || i== 8){
			printf(" ##     ##\n");
		}
		else{
			printf("#\n");
		}
	}

	//D :-

	for(i=0;i<5;i++){
		if(i==0 || i==4){
			printf("#####\n");
		}
		else{
			printf("#    #\n");
		}
	}

	//E :-

	for(i=0;i<5;i++){
		if(i==0 || i==4){
			printf("#####\n");
		}
		else if(i==2){
			printf("###\n");
		}
		else{
			printf("#\n");
		}
	}

	//F :-
	
	for(i=0;i<7;i++){
			if(i==0 || i==3){
				printf("######");
			}
			else{
				printf("#");
			}
		printf("\n");
	}
	

	
	return 0;
}
