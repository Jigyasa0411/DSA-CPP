#include<iostream>
using namespace std;
int main()
{
    for(int row=0;row<5;row++){
         for(int i=0;i<row-1;i++){
            cout<<" ";
         }
         for(int j=0;j<5-row;j++){
            cout<<" *";
         }
         cout<<endl;
    
    }
    return 0;
}