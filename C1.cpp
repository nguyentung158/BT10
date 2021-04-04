#include<iostream>
#include<string.h>
using namespace std;
struct String{
    int n;
    char* str;
    String (const char* chuoi){
        n = strlen(chuoi);
        str= new char[n];
        for(int i = 0; i<n;i++){
            *(str +i) = *(chuoi +i);
        }
    }
    ~String(){
        delete str;
    }
    void print(){
        for(int i=0 ; i< n;i++)
        cout << *(str+i);
    }
    void append(const char*  duoi){
        strcat( str, duoi) ;
        n+= strlen(duoi);
    }
};
int main(){
    String s("hello");
    s.print();
    cout << endl;
    s.append(" world");
    s.print();
}
