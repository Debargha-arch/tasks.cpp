<<<<<<< HEAD
#include<iostream>

using namespace std;

void f1(int a, int b)   //call by value

{
    int n;

    n=a;
    a=b;
    b=n;
}

void f2(int &a, int &b)  //call by refernce
{
    int n=a;

    a=b;
    b=n;
}


void f3(int *a,int *b)   //call by address
{
    int n=*a;

    *a=*b;
    *b=n;
}


int main()
{
    cout<<"Enter any 2 numbers : "<<endl;

    int p,q;

    cin>>p>>q;

    int x,y;

    x=p;
    y=q;

    cout<<" Call by value "<<endl;
    cout<<" Before Swap "<<endl;
    cout<<x<<"  "<<y<<endl;

    f1(x,y);

    cout<<" After Swap "<<endl;
    cout<<x<<"  "<<y<<endl;

    x=p;
    y=q;

    cout<<" Call by Reference "<<endl;
    cout<<" Before Swap "<<endl;

    cout<<x<<"  "<<y<<endl;

    f2(x,y);

    cout<<" After Swap "<<endl;
    cout<<x<<"  "<<y<<endl;

    x=p;
    y=q;

    cout<<" Call by Address "<<endl;
    cout<<" Before Swap "<<endl;
    cout<<x<<"  "<<y<<endl;

    f3(&x,&y);

    cout<<" After Swap "<<endl;
    cout<<x<<"  "<<y<<endl;

       return 0;

=======
#include <iostream>
using namespace std;

void swap(int &n1, int &n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{

    int a = 1, b = 2;

    cout << "\nBefore swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    swap(a, b);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
>>>>>>> 7795091f388889e08bce490b31e02604f6d78c06
}
