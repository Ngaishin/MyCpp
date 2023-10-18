#if 0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// class Pow
// {
// public:
//     int operator()(int i)
//     {
//         return i * i;
//     }
// };
bool srt(int i, int j)
{
    return i < j;
}
class bsrt
{
public:
    bool operator()(int i, int j)
    {
        return i < j;
    }
};
int main()
{
    vector<int> vt({43, 5, 42, 25, 2, 65, 7});
    vt.push_back(58);
    vt[2] = 30;
    for (int i = 0; i < vt.size(); i++)
    {
        cout << vt[i] << endl;
    }
    cout << "---------------" << endl;
    // sort(vt.begin(),vt.end(),[&](int i,int j){return i<j;});
    //sort(vt.begin(), vt.end(), srt);
    sort(vt.begin(), vt.end(), bsrt());

    for (int i = 0; i < vt.size(); i++)
    {
        cout << vt[i] << endl;
    }
    return 0;
}
#endif