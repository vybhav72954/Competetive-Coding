//Problem Code:SNCKYEAR
#include <iostream>
using namespace std;

int main() {
	int test;
	int y;
	cin>>test;
	for (int i; i < test; i++){
	    cin>>y;
	    //2010, 2015, 2016, 2017 and 2019.
	    if (y == 2010 || y == 2015 || y == 2016 || y == 2017 || y == 2019){
	        cout<<("HOSTED")<<endl;
	    }
	    else{
	        cout<<("NOT HOSTED")<<endl;
	    }
	}
	return 0;
}
