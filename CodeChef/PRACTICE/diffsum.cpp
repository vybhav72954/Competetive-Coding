//Problem Code:DIFFSUM
#include <iostream>
using namespace std;

int main() {
	int a, b;
	int sum, diff;
	cin>>a;
	cin>>b;
	if ( a>b){
	    diff = a - b;
	    cout<<diff<<endl;
	}
	else{
	    sum = a + b;
	    cout<<sum<<endl;
	}
	return 0;
}
