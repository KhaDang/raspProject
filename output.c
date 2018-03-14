// this file contains function definition of output_results()
#include "score.h"
#include <stdio.h>

void output_results(const int m[],const int stat[]){
	int i;
	printf("Here are the marks: \n");
	for(i=0;i<MAX && m[i]!=SENTINEL; i++)
		printf("%4d", m[i]);
	printf("\nHere are the statistic: \n");
	for(i=0; i<6; i++)
		printf("Mark %d: %d hits\n", i, stat[i]);
	
}
