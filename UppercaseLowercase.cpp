#include <iostream>
using namespace std;
int main(){
char ch;
	cout<<"Enter an alphabet  : ";
	cin >>ch;
		if ((ch>='A')&&(ch<='Z')){
			cout <<"It is an uppercase alphabet.\n";}
		else if ((ch>='a')&&(ch<='z')){
			cout <<"It is a lowercase alphabet.\n";}
return 0;
}
