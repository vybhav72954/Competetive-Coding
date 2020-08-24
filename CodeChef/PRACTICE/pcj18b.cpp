//Problem Code:PCJ18B
#include <iostream>
using namespace std;

int main() {
	 int n;
	 cin>>n;
	 while(n--)
	 {
	       int N , sum=0;
	       cin>>N;
	       sum=N*N;
	       for(int i=3;i<=N;i+=2)
	          sum+= (N-i+1)*(N-i+1);
	          
	       cout<<sum<<endl;   
	 }
	return 0;
}

