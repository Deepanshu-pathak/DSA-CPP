#include <iostream>
using namespace std;

void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{ 
    int x=8,y=5;
    int *p1=&x,*p2=&y;

    swap(p1,p2);//pass by reference using pointer

    cout<<x<<" "<<y<<endl;
    return 0;
}