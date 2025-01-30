#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify source code above this line

void shuffle(int &a,int &b,int &c,int &d){
    int temp;
    int random;
    
    random = rand() % 4;
    if (random == 0) { temp = a; a = a; }
    else if (random == 1) { temp = a; a = b; b = temp; }
    else if (random == 2) { temp = a; a = c; c = temp; }
    else { temp = a; a = d; d = temp; }
    
    random = rand() % 4;
    if (random == 0) { temp = b; b = b; }
    else if (random == 1) { temp = b; b = a; a = temp; }
    else if (random == 2) { temp = b; b = c; c = temp; }
    else { temp = b; b = d; d = temp; }
    
    random = rand() % 4;
    if (random == 0) { temp = c; c = c; }
    else if (random == 1) { temp = c; c = a; a = temp; }
    else if (random == 2) { temp = c; c = b; b = temp; }
    else { temp = c; c = d; d = temp; }

    
    random = rand() % 4;
    if (random == 0) { temp = d; d = d; }
    else if (random == 1) { temp = d; d = a; a = temp; }
    else if (random == 2) { temp = d; d = b; b = temp; }
    else { temp = d; d = c; c = temp; }
}