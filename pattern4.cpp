#include<iostream>
using namespace std;
void pattern4(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
    int n = 10;
    pattern4(n);
    return 0;

}