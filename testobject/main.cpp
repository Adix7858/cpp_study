#include <iostream>

using namespace std;

class test {
public:
    test()
    {
        cout<<"Zabawy konstruktorem :)"<<endl;
    }
    void test_function()
    {
        cout<<"A tutaj cos wpisze :)"<<endl;
    }
    ~test()
    {
        cout<<"A tutaj ulegnie destrukcji moja funkcja :("<<endl;
    }
};

int main()
{
    test tester;
    tester.test_function();
    return 0;
}
