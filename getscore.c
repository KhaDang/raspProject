// this file contains the definition of function input_scores()
#include "score.h"
#include <stdio.h>	// printf() and scanf()

void input_scores(int s[]){
	int i, input = 0;
	printf("Enter scores, %d to stop:", SENTINEL);
	for(i=0; i<MAX && input!=SENTINEL; i++){
		printf("%d: ", i);
		scanf("%d", &input);
		s[i] = input;
		
	}
	printf("%d scores are given.\n", i-1);
	
}
