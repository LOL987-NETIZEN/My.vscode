#include<iostream>
#include<string>
using namespace std;
int main()
{
    string text;
    cout<<"Enter text:"<<endl;
    getline(cin,text);

    string pattern;
    cout<<"Write pattern:"<<endl;
    getline(cin,pattern);

    if(pattern.empty()){
        cout<<"Pattern is empty."<<endl;
        return 0;
    }

    int pos=(int)text.find(pattern);

    if(pos != -1){
        cout<<"pattern found at index: "<<pos<<endl;
    }

    else if(pos== 0){
        cout<<"Pattern is at the beginning of the text."<<endl;
    }
 
    else if(pos == (int)(text.size()-pattern.size())){
        cout<<"Pattern is at the end of the text."<<endl;
    }
    else{
        cout<<"Pattern not found."<<endl;
    }

    return 0;
}