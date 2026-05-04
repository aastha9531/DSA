#include<iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int marks;
    cout<<"Enter your marks: "<<endl;
    cin>>marks;
    if(marks>=80 && marks<=100)
    {
        cout<<"You got A+ grade."<<endl;
}
else if(marks>=60 && marks<80)
{
    cout<<"You got B grade."<<endl;
}
else if(marks>=50 && marks<60)
{
    cout<<"You got C grade."<<endl;
}
else if(marks >=45 && marks<50)
{
    cout<<"You got D grade."<<endl;
}
else if(marks>=25 && marks<45)
{
    cout<<"You got E grade."<<endl;
}
else
{
    cout<<"You got F grade."<<endl;
}
return 0;
}