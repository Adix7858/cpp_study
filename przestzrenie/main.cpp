#include <iostream>

using namespace std;

namespace test_name
{
    struct dev
    {
        int a;
        char b;
    };
        int inc (int x, int y)
        {
            return (x+y);
        }
}

int main()
{
    using namespace test_name;
    dev variable;
    variable.a = 99;
    cout<<"Listen to: "<<variable.a<<endl;
    cout<<"Variable + 24: "<<inc(variable.a, 24)<<endl;
    return 0;
}
