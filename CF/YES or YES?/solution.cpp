#include <iostream>
using namespace std;

int main() {
    int tests;
    string s[tests];
   cin>>tests;
    for (int i=0; i<tests; i++){
       cin>>s[i];  
        string temp;
        if ( s[i] == "yes"){
           cout<<"YES"<<endl;
        }
        else{
           cout<<"NO"<<endl;
        }
    }

    return 0;
}