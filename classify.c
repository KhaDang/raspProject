// this file contains function definition of classification()
#include "score.h"
#include <stdio.h>

void classification(const int m[], int stat[]){
	int i;
	for(i=0; i<MAX && m[i]!=SENTINEL; i++){
		switch(m[i]){
			case 0: stat[0]++; break;
			case 1: stat[1]++; break;
			case 2: stat[2]++; break;
			case 3: stat[3]++; break;
			case 4: stat[4]++; break;
			case 5: stat[5]++; break;
		}// switch
	}// for
	printf("Classification done");
 	
}// function

