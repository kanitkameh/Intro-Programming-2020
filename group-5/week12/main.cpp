#include<iostream>
#include<cstring>

using namespace std;

bool isCharacter(char c);
int wordLength(char * str, char delimeter);

char * copyTillDelimiter(char * source, char * destination,
                    char delimiter){
    int sourceLen = wordLength(source,delimiter);
    for(int i=0;i<sourceLen &&
          source[i]!=delimiter;i++){
        destination[i] = source[i];
    }
    destination[sourceLen]=0;
    return destination;
}

int wordCount(char * string){
    int len = strlen(string);
    int result = 0;
    for(int i=0;i<len;){
        while(i<len && !isCharacter(string[i])){
            i++;
        }
        if(isCharacter(string[i])){
            result++;
        }
        while(i<len && isCharacter(string[i])){
            i++;
        }
    }
    return result;
}

int wordLength(char * str, char delimeter){
    int result = 0;
    while(*str!=0 && *str!=delimeter 
        && isCharacter(*str)){
        result++;
        str++;
    }
    return result;
}

bool isCharacter(char c){
    return (c>='a' && c<='z') || (c>='A' && c<='Z');
}

//returns an array of strings(every row is a word)
//splits by the space character
char ** split(char * string, char delimiter, int * wordCnt){
    *wordCnt = wordCount(string);
    char** words = new char*[*wordCnt];
    int charCount = strlen(string); 
    int currentWordIndex = 0;
    for(int i=0;i<charCount;i++){
        while(i<charCount && !isCharacter(string[i])){
            i++;
        }
        if(i<charCount && isCharacter(string[i])){
            words[currentWordIndex] = new char[wordLength(&string[i],delimiter)+1];
            copyTillDelimiter(&string[i],words[currentWordIndex],delimiter);
            currentWordIndex++;
        }
        while(i<charCount && isCharacter(string[i])){
            i++;
        }
    }
    return words;
}

void deleteWords(char ** words, int wordCnt){
    for(int i=0;i<wordCnt;i++){
        delete[] words[i];
    }
    delete[] words;
}
bool existsInText(char ** text, int textLen, char * word){
    for(int i=0;i<textLen;i++){
        if(strcmp(text[i],word)==0){
            return true;
        }
    }
    return false;
}
float findSameWordsPercent(char** text, int textLen, char** sentence, int sentenceLen){
    int occuringWords = 0;
    for(int i=0;i<sentenceLen;i++){
        if(existsInText(text,textLen,sentence[i])){
            occuringWords++;
        }
    }
    return 100*((float)occuringWords)/sentenceLen;
}
int findConsecutiveWordsCount(char** text, int textLen, char** sentence, int sentenceLen){
    int currentCount = 1;
    int bestCount = 0;
    for(int i=0;i<sentenceLen-1;i++){
        if(existsInText(text,textLen,sentence[i]) && 
            existsInText(text,textLen,sentence[i+1])){ 
            currentCount++;
            if(currentCount>bestCount){
                bestCount = currentCount;
            }
        }else{
            currentCount=1;
        }
    }
    return bestCount;
}

int main(){
    char line[128];

    int wordCountText;
    cin.getline(line,128);
    char** text = split(line,' ',&wordCountText);
    cout << wordCountText << endl;

    int wordCountSentence;
    cin.getline(line,128);
    char** sentence = split(line,' ',&wordCountSentence);
    cout << wordCountSentence << endl;

    cout << findSameWordsPercent(text,wordCountText,sentence,wordCountSentence) << endl;
    cout << findConsecutiveWordsCount(text,wordCountText,sentence,wordCountSentence) << endl;
    return 0;
}