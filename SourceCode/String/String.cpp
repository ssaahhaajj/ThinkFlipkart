#include<stdio.h>

// String module
// in the bugFix branch
void greetings(char hello[]){
	printf("\n%s",hello);
}

void toUpper(char str[]){
	str=toUpper(str);
	printf("Making string upper..");
}
void toLower(char str[]){
	str=toLower(str);
	printf("Making string lower..");
}
//Added in the master branch
void toTitile(char str[]){
	printf("Making string upper..");
}

void hello() {
    printf("hello");
}

int main()
{
	char greet[]="Hello World";
	greeting(greet);
}

