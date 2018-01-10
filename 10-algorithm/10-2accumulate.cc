#include <string>
#include <iostream>
#include <vector>
using namespace::std;

auto accumulate(vector<string>::iterator begin, vector<string>::iterator end, string str)
{
    auto now = begin;
    while(now != end)
    {
        str+=(*now);
        now++;
    }
    // cout<<"str is:"<<str<<endl;
    return str;
}

int main()
{
    vector<string> str{"my ","college ","is ","UESTC"};
    string a;
    a = accumulate(str.begin(), str.end(), string(""));
    cout<<a<<endl;
}