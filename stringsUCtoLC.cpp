// Read astring and convert all the uppercases to $ sign and all lower cases to & sign and print the output

#include<iostream>
#include<string>
using namespace std;

void upr(string s1)
    {
        int c;
        for(int i=0;i<s1.length();i++)
        {
            c=s1[i];
            s1[i]=toupper(c);
             }
             cout<<s1;

    }
 void lwr(string s1)
    {
        int c;
        for(int i=0;i<s1.length();i++)
        {
            c=s1[i];
            s1[i]=tolower(c);
             }
             cout<<s1;

    }
        
    
int main(){
    string name;
    cout<<"Enter in Lower case:\n";
    cin>>name;
    upr(name);
    cout<<"\nEnter in Upper Case:\n";
    cin>> name;
    lwr (name);

    
    return 0;
}
