#include <stdio.h>

/***
	This program reads a txt and drop the string in front of a SYMBOL defined
	at the top level for each line
	eg. a file containing below text, and SYMBOL as ':'
		134:abc
		sasdf:13
	will produce
		abc
		13
	
*/

#define SYMBOL ':'


int mygetchar();
int main(){
	
	int i = 0, nLines = 0, breaker = 0;
	
	char c;
	while((c=mygetchar())!=EOF){
		if(c==SYMBOL){
			nLines += 1;
			breaker = 1;
		}
		if(c=='\n'){
			breaker = 0;
			putchar(c);
		}
		
		if(breaker){
			if(c!=SYMBOL)
				putchar(c);
		}
	}

	return 0;
}


int mygetchar() {
	int c;
	while ((c=getchar())=='\r') {}
	return c;
}

