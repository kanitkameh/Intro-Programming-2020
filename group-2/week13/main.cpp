#include<iostream>
#include<cstring>

using namespace std;

struct Student { 
    char name[64];
    int age;
    int facultyNumber;
};

int nextInteger(int n){
    return n+1;
}

void reverse (char * text)
{
    int len = strlen(text);
    for(int i=0;i<len/2;i++){
       swap(text[i], text[(len-1)-i]);
    }
}

int nextEven(int n){
    if(n+1%2==0){
        return n+1;
    }
    return n+2;
}

int sum(int a, int b){
    return a+b;
}

// s1.name > s2.name
bool biggerByName(Student s1, Student s2){
    return strcmp(s1.name, s2.name) == 1;
}

// s1.name < s2.name
bool smallerByName(Student s1, Student s2){
    return strcmp(s1.name, s2.name) == -1;
}

// > 
bool bigger(int a, int b){
    return a>b;
}
// < 
bool smaller(int a, int b){
    return a<b;
}

void sort(int* array, int size, bool(compare)(int,int)){
    for(int i=1;i<size;i++){
        for(int j=i;j>=1 && compare(array[j],array[j-1]);j--){
            int temp = array[j];
            array[j] = array[j-1];
            array[j-1] = temp;
        }
    }
}
void sortStudents(Student* array, int size, bool(compare)(Student,Student)){
    for(int i=1;i<size;i++){
        for(int j=i;j>=1 && compare(array[j],array[j-1]);j--){
            Student temp = array[j];
            array[j] = array[j-1];
            array[j-1] = temp;
        }
    }
}

int divide(int a, int b = 5){
    return a/b;
}

void printStudent(Student s){
    cout << s.name << " " << s.facultyNumber << " " << s.age << endl;
}

int main(){
    /*
    int(*myFunction)(int,int) = &sum;
    cout << (*myFunction)(16,32) << endl;
    */
   /*
    int n;
    cin >> n;
    int * array = new int[n];
    for(int i=0;i<n;i++){
        cin >> array[i];
    }
    sort(array,10,smaller);
    for(int i=0;i<n;i++){
        cout << array[i] << " ";
    }
    cout << endl;
    delete[] array;
    */
    
    /*
    int arr[10] = {3, 1, 2, 9, 8, 3, 2, 7, 9, 2};
    sort(arr,10,smaller);
    for(int i=0;i<10;i++){
        cout << arr[i] << " ";
    }
    */
    /*
    char string[64];
    cin >> string;
    reverse(string);
    cout << string;
    */

   /*
    int x;
    int& ref = x;
    ref = 56;
    //std::cout << ref << " " << x;
    cout << divide(30,6) << endl;
    */
   /*
   int n;
   n = 15;
    int * array = new(nothrow) int[n];
    if(!array){
        cout << "error" << endl;
        return -1;
    }
    array[5] = 99;
    cout << array[5];
    //work with dynamic array
    delete[] array;
    */

    /*
    for(init;condition;step){

    }

    init;
    while(condition){
        step;
    }
    */
   int n;
   cin >> n;
    Student * s = new Student[n];
    for(int i=0;i<n;i++){
        cin >> s[i].name >> s[i].facultyNumber >> s[i].age;
    }
    cout << "========================" << endl;
    sortStudents(s,n,smallerByName);
    for(int i=0;i<n;i++){
        printStudent(s[i]);
    }
    return 0;
}