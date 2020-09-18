#include<stdio.h>
#define MAX 100
int main(){
	int number_of_word[MAX+1];
	char ch;
	int i;
	for(i=0;ch=getchar()!=EOF&&i<MAX;i++){
		ch=number_of_word[i];
	}
	number_of_word[MAX]='\0';
}
