#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

string getInitials(string);

int main(void){

    string name = "";
    cout << "Type in you name: ";
    getline(cin, name);

    printf("%c", toupper(name[0]));
    for(int i=0; i < name.length();i ++) {
        if(name[i] == ' '){
            printf("%c",toupper(name[i + 1]));
        }
    }

}



