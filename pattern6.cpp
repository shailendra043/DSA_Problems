#include<iostream>
using namespace std;
void pattern6(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j > i; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
}
int main(){
    int n = 5;
    pattern6(n);
    return 0;
}