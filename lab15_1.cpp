#include <iostream>
using namespace std;

void show(int a,char b,char &c,int *x,char *y,int **z){
    cout << a << " " << b << " " << c << " "<< x << " "<< (int *)y << " " << z << "\n";
}


int main(){
    int a=5;
    char b='A';
    char &c=b;
    int *x=&a;
    char *y=&b;
    int **z=&x;

    cout << a << " " << b << " "<< c << " " << x << " " <<  &y << " " << z << "\n";
    cout << &a << " " << (int *)&b << " " << (int *)&c << " " << &x << " " << &y << " " << &z << "\n";

    c='F';
    show(a,b,c,x,y,z);

    *y='W';
    show(a,b,c,x,y,z);
    
    *x=6;
    show(a,b,c,x,y,z);

    **z=7;
    show(a,b,c,x,y,z);


    return 0;
}
