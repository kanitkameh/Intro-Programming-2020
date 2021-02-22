#include<iostream>
#include<cstring>
using namespace std;
struct Student{
    char name[64];
    int facultyNumber;
    int age;
};
void reverse (char * text)
{
   int len = strlen(text); 
   for(int i=0;i<len/2;i++){
       char temp = text[i];
       text[i] = text[(len-1)-i];
       text[(len-1)-i] = temp;
   }
}
int func(int a, int b=0){
    return a>b? a : b;
}
bool bigger(int a, int b){
    return a>b;
}
bool smaller(int a, int b){
    return a<b;
}
void printStudent(Student s){
    cout << s.name << " " << s.age << " " << s.facultyNumber;
}
void sort(int* arr, int size, bool (func) (int,int) ){
    for(int i=1;i<size;i++){
        for(int j=i;j>=1 && func(arr[j],arr[j-1]);j--){
           int temp = arr[j];
           arr[j] = arr[j-1];
           arr[j-1] = temp; 
        }
    }
}
//char, float, double, short, int, long long, *, unsigned 
int main(){
    /*
    char str[64];
    cin >> str;
    reverse(str);
    cout << str << endl;
    */
   /*
    int x;
    int& ref = x;
    ref= 56;
    std::cout << ref << " " << x;
    cout << "ala bala" << endl;
    */
   /*
   cout << func(5) << endl;
   cout << func(5,9) << endl;
   */
  /*
  int len = 64;
  int* arr = new (std::nothrow) int[len];
  if(!arr){
      std::cout << "error" << std::endl;
      return -1;
  }
  arr[0]=299;
  std::cout<< arr[0]<< std::endl;
  //work with arr
  delete[] arr;
  */
 /*
    int n;
    cin >> n;
    int * arr = new int[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,n,bigger);
    for(int i=0;i<n;i++){
       cout << arr[i] << " ";
    }
    cout << endl;
    sort(arr,n,smaller);
    for(int i=0;i<n;i++){
       cout << arr[i] << " ";
    }
    */
    Student s;
    cin >> s.name >> s.age >> s.facultyNumber;
    printStudent(s);
    return 0;
}