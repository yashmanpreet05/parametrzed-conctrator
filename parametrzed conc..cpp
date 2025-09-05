#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    demo(int m,int n)
    {
        a=m;
        b=n;
    }
    void putdata ()
    {
        cout<<"a:"<<a<<"b:"<<b<<endl;
    }
   
};
int main()
{
demo s(6,5);
s.putdata();
return 0;
}