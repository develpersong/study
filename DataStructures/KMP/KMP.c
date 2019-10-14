#include<stdio.h>
#include<string.h>

int main(){
	char* S = "HelloWorld";
	char* P = "llo";
	printf("%d\n",NaiveStringSearch(S,P));
	return 0;
}

int NaiveStringSearch(char* S, char* P){
	int i=0;
	int j=0;

	while(i<strlen(S) && j<strlen(P)){
			if(S[i]==P[j]){
				i++;
				j++;
				printf("%c\n",S[i]);
			}else{
				i=i-j+1;
				j=0;
			}
	
	}	

	printf("i=%d,j=%d\n",i,j);
	if(j==strlen(P)){
		return i-j;
	}
	return -1;
}
