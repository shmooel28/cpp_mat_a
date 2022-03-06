#include "mat.hpp"
#include <string>

using namespace std;

namespace ariel
{
    string mat(int row, int col, char a, char b)
    {
        int i;
        string ans = "";
        for (i = 0; i < row; i++)
        {
            ans += a;
        }
        ans += '\n';
        for (i = 0; i < col; i++)
        {
            ans += b;
        }
        return ans;
    }
}