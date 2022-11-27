/*
A A A
B B B
C C C
*/

#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    char c = 'A';
    cin>>n;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            char new_char = c+j-1;
            cout<<new_char;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}