#include <iostream>

using namespace std;

class Age {
private:
int wiek;
public:
Age(int a)
{
if (a<0)
{
throw -1;
}
if (a>150)
{
throw "Chyba jestes za stary";
}
cout<<"Age: "<<a<<endl;
}
};

int main() {
try {
Age a(-5);
}
catch(int e)
{
cout<<"Error: "<<e<<endl;
}
catch(const char* x)
{
cout<<"message: "<<x<<endl;
}

//wszystkie b³êdy to catch(...)
}
