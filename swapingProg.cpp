// Swapping of Number without using thrd variable

#include<iostream>
using namespace std;
int main(){
      int x,y;
      x=5;
      y=6;
      cout<<"Before Swapping x: "<<x<<"   y:"<<y<< endl;
      x=x+y;

      y=x-y;
      x=x-y;
      cout<<"After Swapping x: "<<x<<"   y: "<<y<<endl;
    return 0;
}
