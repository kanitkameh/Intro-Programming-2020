#include<iostream>
#include<cstring>

using namespace std;

//TO-DO
void readLabyrinth(){
	int array[4][3];
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			cin >> array[i][j];
		}
	}
}

//Example of strlen
int stringLenght(char * s){
	int len = 0;
	while(s[len]!='\0'){
		len++;
	}
	return len;
}

char * addChar(char * str, char c){
	int len = strlen(str);
	char * result = new char[len+2];
	for(int i=0;i<len;i++){
		result[i]=str[i];
	}
	result[len]=c;
	result[len+1]='\0';
	return result;
}

char * concatenate(char * a, char * b){
	int lenA = strlen(a);
	int lenB = strlen(b);
	char * concatenated = new char[lenA+lenB+1];
	for(int i=0;i<lenA;i++){
		concatenated[i] = a[i];
	}
	for(int i=0;i<lenB;i++){
		concatenated[lenA+i] = b[i];
	}
	concatenated[lenA+lenB]=0;
	return concatenated;
}

char * getK(){
	char * c = new char;
	*c = 'K';
	return c;
}

char * readLine(){
	char * line = new char[1];
	line[0]='\0';
	char c;
	do{
		cin >> noskipws >> c;
		if(c!='\n'){
			char * appended = addChar(line,c);
			delete[] line;
			line = appended;
		}
	}while(c!='\n');
	return line;
}

int main(){
	//scope is the main function
	/*
	int a=15;
	if(true){
		int b=14;
	}
	*/
	//b++; //not accessible because out of scope

	/* Escape sequences
	cout << "We use \" to write strings" << endl;
	cout << "We use \' to write chars" << endl;
	cout << "We use \\n to write newline" << endl;
	cout << "We use \\\\ to write \\" << endl;
	cout << "We use \\b to delete text we write wro\b\b\b and fix it" << endl;
	cout << "\101" << endl;
	*/
	//cout << stringLenght("Hello") << endl;
	/*
	char word1[20]; 
	char word2[20]; 
	cin >> word1 >> word2;
	char * concatenatedWords = concatenate(word1,word2);
	cout << concatenatedWords << endl;
	delete[] concatenatedWords;
	int * other;
	if(true){
		int * n = new int;
		*n = 15;
		other = n;
	}
	cout << *other << endl;	
	delete other;
	*/
	char * line = readLine();
	cout << line << endl;
	delete[] line;
	return 0;
}