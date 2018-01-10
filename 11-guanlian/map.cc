#include <iostream>
#include <map>
#include <string>
using namespace::std;
// int main()
// {
//     map <string,size_t> word_count;
//     string word;
//     while(cin >> word)
//         ++word_count[word];
//     for(const auto &w : word_count)
//     {
//         cout << w.first << " occurs " << w.second << ((w.second >1 )? " times":" time")<<endl;
//     }
//     return 1;
// }
// int main()
// {
//     int dbra=0, zbra=0, xbra=0;
//     map <string, size_t> brackets;
//     string word;
//     cin >> word;
//     auto    = word.begin();
//     auto end = word.end();
//     if(ptr == end)
//     {
//         cout << "no stream !"<<endl;
//     }
//     // cout << *ptr << " "<< *end<<endl; 
//     while(ptr != end)
//     {
//         if(*ptr == '{')
//             dbra++;
//         else if(*ptr == '[')
//             zbra++;
//         else if(*ptr == '(')
//             xbra++;
//         else if(*ptr == '}' && dbra > 0)
//         {
//             ++brackets["{}"];
//             --dbra;
//         }
//         else if(*ptr == ']' && zbra > 0)
//         {
//             ++brackets["[]"];
//             --zbra;
//         }
//         else if(*ptr == ')' && xbra > 0)
//         {
//             ++brackets["()"];
//             --xbra;
//         }
//         ptr++;
//     }
//     for(auto &w:brackets)
//     {
//         cout << w.first << " occurs " << w.second << ((w.second >1 )? " times": " time") <<endl;
//     }
//     return 0;
// }
int main(void)
{
    map <string,string> call = {{"wayne","12345"},
                                {"cl","3245"},
                                {"sally","97678"},
                                {"liuhui","78967"},
                                };
    // for(auto &w:call)
    // {
    //     cout << w.first << w.second<<endl;
    // }
    cout << call["wayne"]<<endl;
    cout << call["cl"]<<endl;
    return 1; 
}