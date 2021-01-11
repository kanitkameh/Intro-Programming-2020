#include<iostream>
#include<cstring>
#define BUFFER_SIZE 5000
using namespace std;

bool isCharacter(char c){
    return (c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9');
}
//  .....asdfa....fasdfa....
int wordCount(char * text){
    int count = 0;
    while(*text!=0){
        while(*text!=0 && isCharacter(*text)==false){
            text++;
        }
        if(isCharacter(*text)){
            count++;
        }
        while(*text!=0 && isCharacter(*text)){
            text++;
        }
    }
    return count;
}

void wordCopy(char * source, char * destination, int count){
    for(int i=0;i<count;i++){
        destination[i]=source[i];
    }
    destination[count]=0; //'\0'
}

int wordLen(char * word){
    int counter = 0;
    while(isCharacter(*word)){
        counter++;
        word++;
    }
    return counter;
}
//"az sym pesho" => ["az","sym","pesho"]
char** split(char* text, int* wordCnt){
    *wordCnt = wordCount(text);
    char** words = new char*[*wordCnt];
    int currentWordIndex = 0;
    while(*text!=0){
        while(*text!=0 && isCharacter(*text)==false){
            text++;
        }
        if(isCharacter(*text)){
            //a new word begins
            int characterCount = wordLen(text);
            words[currentWordIndex] = new char[characterCount+1];
            wordCopy(text,words[currentWordIndex],characterCount);
            currentWordIndex++;
        }
        while(*text!=0 && isCharacter(*text)){
            text++;
        }
    }
    return words;
}
int wordCountInText(char** text, int textWordCount,
                        char * word){
    int count = 0;
    for(int i=0;i<textWordCount;i++){
        if(strcmp(text[i],word)==0){
            count++;
        }
    }
    return count;
}
bool wordExistsInText(char** text, int textWordCount,
                        char * word){
    for(int i=0;i<textWordCount;i++){
        if(strcmp(text[i],word)==0){
            return true;
        }
    }
    return false;
}
float findSameWordsPercent(char** text, int textWordCount,
                char** sentence, int sentenceWordCount){
    int occuringWords = 0;
    for(int i=0;i<sentenceWordCount;i++){
        if(wordExistsInText(text,textWordCount,sentence[i])){
            occuringWords++;
        }
    }
    return 100*(((float)occuringWords)/sentenceWordCount);
}
//potato banana kamen ala bala test
//boy girl kamen ala nesthto test 
int findConsecutiveWordsCount(char** text, int textWordCount,
                char** sentence, int sentenceWordCount){
    int bestCount = 0;
    int currentCount = 1;                
    for(int i=0;i<sentenceWordCount-1;i++){
        if(wordExistsInText(text,textWordCount,sentence[i]) &&
            wordExistsInText(text,textWordCount,sentence[i+1])){
                currentCount++;
                if(currentCount>bestCount){
                    bestCount=currentCount;
                }
        }else{
            currentCount = 1;
        }
    }
    return bestCount;
}

int * getWordsStatistic(char** text, int textWordCount,
                char** sentence, int sentenceWordCount){
    int * result = new int[sentenceWordCount];
    for(int i=0;i<sentenceWordCount;i++){
        char * currentWord = sentence[i];
        result[i] = wordCountInText(text,textWordCount,currentWord);
    }
    return result;
}

void deleteWords(char** words, int wordCount){
    for(int i=0;i<wordCount;i++){
        delete[] words[i];
    }
    delete[] words;
}

int main(){
    char string[BUFFER_SIZE];

    cin.getline(string,BUFFER_SIZE);
    int textWordCount;
    char ** text = split(string,&textWordCount);

    cin.getline(string,BUFFER_SIZE);
    int sentenceWordCount;
    char ** sentence = split(string,&sentenceWordCount);
    
    cout << findSameWordsPercent(text,textWordCount,
        sentence,sentenceWordCount) << "%" << endl;
    
    cout << findConsecutiveWordsCount(text,textWordCount,
        sentence,sentenceWordCount) << " consecutive words" << endl;
    
    int * statistics = getWordsStatistic(text,textWordCount,sentence,sentenceWordCount);
    
    for(int i=0;i<sentenceWordCount;i++){
        cout << sentence[i] << " occurs: " << statistics[i] << " times" << endl;
    }
    delete[] statistics;
    deleteWords(text,textWordCount);
    deleteWords(sentence,sentenceWordCount);
    return 0;
}