#include <iostream>
#include <vector>
#include <sstream> 
#include <typeinfo>
#include <string> 
#include <set>
using namespace std;

void test(int &y){
	y=5;
}

int main() {
	int y=3;
	test(y);
	cout<<y;


       
  
    return 0;
}
