#include <iostream>
#include <regex>
#include <string> 
using namespace std;

int main(){
string text;
regex pattern("^[A-Z].*");
cout<<"Enter text:"<<endl;


while (true) {
        getline(cin, text); 
        if (text.empty()) 
            break;
        if (regex_match(text, pattern)) { 
            cout << text << endl;
}
}
return 0;
}
