#include<iostream>
#include<cstring>
using namespace std;
void inputProducts(int * price, int * weight, int n){
    for(int i=0;i<n;i++){
        cin >> price[i];
    }
    for(int i=0;i<n;i++){
        cin >> weight[i];
    }
}
//hello my name is kamen - str
//name - word
//nick - replacement
void replace(char * str, char * word, char * replacement){
    char * toReplace = strstr(str,word);
    int size = strlen(replacement);
    for(int i=0;i<size;i++){
        toReplace[i] = replacement[i];
    }
}
int maxValue(int * price, int * weight, int n, int bagWeight){
    int best = 0;
    if(bagWeight<=0){
        return 0;
    }
    for(int i=0;i<n;i++){
        if(bagWeight - weight[i] >= 0){
            int current = price[i] + maxValue(price,weight,n, bagWeight-weight[i]);
            if(current>best){
                best = current;
            }
        }
    }
    return best;
}
//505 352 458 220 354 414 498 545 473 543
//23 26 20 18 32 27 29 26 30 27
int main(){
    /*
    int n, bagWeight;
    cin >> bagWeight;
    cin >> n;
    int * price = new(nothrow) int [n];
    if(!price){
        cerr << "error" << endl;
    }
    int * weight = new(nothrow) int [n];
    if(!weight){
        cerr << "error" << endl;
    }
    inputProducts(price,weight,n);
    cout << maxValue(price,weight,n,bagWeight);
    delete[] price;
    delete[] weight;
    */
    char sentence[64];
    char word[10];
    char replacement[10];
    cin.getline(sentence,64);
    cin >> word >> replacement;
    replace(sentence, word, replacement);
    cout << sentence << endl;
    return 0;
}