/*
#include <bits/stdc++.h>
using namespace std;    
void f(int c)
{
    if(c==4)
    return;
    cout<<c<<" ";
    c++;
    f(c);
}
int main()
{
    f(0);
    return 0;
} */

#include <bits/stdc++.h>
using namespace std; 

//Print name N times using recursion
void f1(int i, int n)
{
if(i > n)
return;
cout<<"Aastha"<<endl;
i++;
f1(i, n);
}

//print 1 to n using recursion
void f2(int i, int n)
{
if (i>n)
return;
cout<<i<<" ";
f2(i+1,n);
}

//print n to 1 using recursion
void f3(int i,int n)
{
    if(n<i)
    return;
    cout<<n<<" ";
    f3(i,n-1);
}

//print sum of n numbers using recursion
void f4(int i, int n, int sum=0)
{
    if(i>n)
    {
        cout<<sum<<" ";
        return;
    }
    sum+=i;
    f4(i+1,n,sum);
}

int main()
{
    int n;
    cout<<"Enter the no of times";
    cin>>n;

    int i,sum=0;
    f4(1,n,sum);
    return 0;
}
