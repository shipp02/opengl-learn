#include<stdio.h>

void blast(int timer){
	if(timer > 0){
		printf("%d",timer);
		printf("\n");
		blast(timer-1);
	}
	else if(timer ==0){
		printf("Blastoff!\n");
	}

}

int main(){
	blast(10);
	return 0;

}

