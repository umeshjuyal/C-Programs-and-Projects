#include<iostream>
using namespace std;

int main(){
int n;
scanf("%d",&n);
// left or right or U or D
char c ='R';
int x=0,y=0;
int distance =10;

while (n)
{
  switch(c)
  {
  case 'R':
      x = x+distance;
      distance=distance+10;
      c='U';
      break;

      case 'U':
      y=y+distance;
      distance=distance+10;
      c='L';
      break;

      case 'L':
      x=x - distance;
      distance=distance+10;
      c ='D';
      break;

      case 'D':
      y=y-distance;
      distance=distance+10;
      c='A';
      break;

      case 'A':
      x=x+distance;
      distance=distance+10;
      c='R';
      break;
}
n--;
}
cout<<"%d  %d",x,y;

return 0;
}