#include<iostream>
using namespace std;

/*
*****
*****
*****
*****
*****/
void pattern1(int n)
{
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

/*
**
***
****
*****/
void pattern2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
/*
1
12
123
1234
12345
    */
void pattern3(int n)

{
    for(int i=0;i<n;i++)
    {
        int a=1;
        for(int j=0;j<=i;j++)
        {
        
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}

/*
1
22
333
4444
55555
    */
void pattern4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
/*
*****
****
***
**
*
    */
void pattern5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=5;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

/*
12345
1234
123
12
1
    */
void pattern6(int n)
{
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j ;
        }
        cout<<endl;
    }
}
/*
    *   
   ***  
  ***** 
 *******
*********
    */

void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
{
    // space
    for (int j = 0; j < n - i; j++)
    {
        cout << " ";
    }

    // star
    for (int j = 0; j < 2 * i - 1; j++)
    {
        cout << "*";
    }
   //space
   for(int j=0;j<n-i-1;j++)
   {
    cout<<" ";
   }
    cout << endl;
}
}
/*
*********
 ******* 
  *****  
   ***   
    *  

    */

void pattern8(int n)
{
    for(int i=0;i<n;i++)
    {
        //space
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        //star
        for (int j=0;j<2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        //space
         for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
/*
*
**
***
****
*****
****
***
**
*
    */

void pattern10(int n)
{
    for(int i = 1; i <= 2*n - 1; i++)
{
    int star;
    
    if(i <= n)
        star = i;
    else
        star = 2*n - i;

    for(int j = 1; j <= star; j++)
    {
        cout << "*";
    }
    cout << endl;
}
}

/*
1
01
101
0101
10101
    */
void pattern11(int n)
{
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
        }
        cout<<endl;
    }
}
/*
1        1
12      21
123    321
1234  4321
1234554321
    */

void pattern12(int n)
{
    for (int i=0;i<n;i++)
    {
        //number
        for(int j=0;j<i+1;j++)
        {
            cout << j+1;
    
        }
        //space
        for(int j=0;j<2*n-(2*i+2);j++)
        {
            cout<<" ";
        }
        //number
         for(int j = i; j >= 0; j--)
        {
        cout << j + 1;
        }
        cout<<endl;
}
}
/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
    */
void pattern13(int n)
{
            int num=1;

    for (int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
/*
A 
A B 
A B C 
A B C D 
A B C D E 
*/
void pattern14(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+i;ch++)
        {
            cout<<ch<<" ";
            
        }
        cout<<endl;
    }
}

/*
A B C D E 
A B C D 
A B C 
A B 
A
    */
void pattern15(int n)
{
    for(int i=n;i>=1;i--)
    {
        for(char ch='A';ch<='A'+i-1;ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
/*
A 
B B 
C C C 
D D D D 
E E E E E 
    */

void pattern16(int n)
{
    for(char i='A';i<'A'+n;i++)
    {
        for(char ch='A';ch<=i;ch++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
    */

void pattern17(int n)
{
    for(int i = 1; i <= n; i++)
{
    // spaces
    for(int j = 1; j <= n - i; j++)
    {
        cout << " ";
    }

    // increasing letters
    for(char ch = 'A'; ch < 'A' + i; ch++)
    {
        cout << ch;
    }

    // decreasing letters
    for(char ch = 'A' + i - 2; ch >= 'A'; ch--)
    {
        cout << ch;
    }

    cout << endl;
}
}
/*
E 
D E 
C D E 
B C D E 
A B C D E 
    */
void pattern18(int n)
{
    for (int i=0;i<n;i++)
     {
        for (char ch='E'-i;ch<='E';ch++)
    {
        cout<<ch<<" ";
    }
    cout<<endl;
     }
     

}

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

        pattern1(n);
        pattern2(n);
        pattern3(n);
        pattern4(n);        
        pattern5(n);
        pattern6(n);    
        pattern7(n);
        pattern8(n);
        pattern10(n);
        pattern11(n);
        pattern12(n);
        pattern13(n);
        pattern14(n);
        pattern15(n);
        pattern16(n);
        pattern17(n);
    pattern18(n);
    return 0;
}
