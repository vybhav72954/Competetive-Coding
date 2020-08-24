#include <iostream>
using namespace std;

int main() {
    int test;
    cin>>test;
    int num;
    for (int i = 0; i < test; i++)
        {
        cin>>num;
        int rev = 0;
        int r;
        while (num != 0 )
        {
            r =  num%10;
            rev = rev*10 + r;
            num /= 10;
        }
        cout<<rev<<endl;
            
        }
        return 0;
    
}
