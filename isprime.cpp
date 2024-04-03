#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n)
{
    if (n < 2){
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if(isPrime(n)) 
        cout<<"La so nguyen to"<<endl;
    else 
        cout<<"Khong la so nguyen to"<<endl;
    return 0;
}