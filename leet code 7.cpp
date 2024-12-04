#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> decompose(int x)
{
    vector<int> deco;
    while (x > 0)
    {
        deco.push_back(x % 10);
        x = x / 10;
    }
    return deco;
}
int revrse(const vector<int>& dec)
{
    int num = 0;
    for (size_t i = 0; i < dec.size(); ++i)
    {
        num += dec[i] * pow(10, dec.size() - 1 - i);
    }
    return num;
}

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (a<0)
    {
        a=abs(a);
        vector<int> decomposed = decompose(a);
        int reversedNumber = revrse(decomposed)*-1;
    }
    else 
    {
        vector<int> decomposed = decompose(a);
        int reversedNumber = revrse(decomposed);
    }
    cout << "Reversed number: " << reversedNumber << endl;
    return 0;
}
