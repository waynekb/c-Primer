#include <vector>
#include <iostream>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int count(vector<int>::iterator begin, vector<int>::iterator end, int val)
{
    auto now = begin;
    int res = 0;
    while(now != end)
    {
        if(*now == val)
        {
            res++;
        }
        now++;
    }
    return res;
}

int main()
{
    int val;
    int ret;
    vector<int> a{1,2,4,5,4,3,4,3,3};
    // while(cin >> val)
    // {
    //     a.push_back(val);
    // }
    ret = count(a.begin(), a.end(), 3);
    cout<<"3 num is:"<<ret<<endl;
}