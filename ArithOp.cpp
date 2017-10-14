#include <iostream>

using namespace std;

int main()
{
    int x, y,c;
    cout<<"Enter the numbers: \n";
    cin>>x>>y;

    cout<<"Choose: ";
    cout<<"1) Add\n2) Subtract\n3) Multiply\n4) Divide";
    cin>>c;

    switch(c)
    {
        case 1:    cout<<"Sum: "<<(x + y);  break;
        case 2:    cout<<"Difference: "<<(x - y);   break;
        case 3:    cout<<"Product: "<<(x * y);  break;
        case 4:    cout<<"Quotient"<<(x / y); break;
        default:   cout<<"Invalid Choice";
    }
    return 0
}
