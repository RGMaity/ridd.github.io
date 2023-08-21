#include <iostream>
#include <string>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

class employee
{
public:
    string name;
    int salary;
};

int main()
{
    // cout<<"hello world"<<endl;
    // cout<<"hi!!!!"<<endl;

    // int a,b;
    // cout<<"enter 1 no"<<endl;
    // cin>>a;
    // cout<<"enter 2 no"<<endl;
    // cin>>b;
    // cout<<"a-b "<<a-b<<endl;
    // cout<<"a*b "<<a*b<<endl;
    // cout<<"a/b "<<(float)a/b<<endl;
    // cout<<"a+b "<<a+b<<endl;

    // int age;
    // cout << "enter age" << endl;
    // cin >> age;

    // switch (age)
    // {
    // case 12:
    //     cout << "12 years";
    //     break;
    // case 18:
    //     cout << "18 years";
    //     break;

    // default:
    //     cout << "neither 12 nor 18";
    //     break;
    // }
    // if(age>=18)
    // {
    //     cout<<"vote";
    // }
    // else
    // {
    //     cout<<"nope";
    // }
    // if (8==8 && 4==4)
    // {
    //     cout<<"yep";
    // }

    // int index=0;
    // while (index<34)
    // {
    //     cout<<"at index "<<index<<endl;
    //     index=index+1;

    // }

    // int index=0;
    // do
    // {
    //     cout<<"at index "<<index<<endl;
    //     index=index+1;
    // } while (index>32 );

    // for (int i = 0; i < 34; i++)
    // {
    //     cout<<"value of i is "<<i<<endl;
    // }

    // int a,b;
    // cout<<"enter 1 no"<<endl;
    // cin>>a;
    // cout<<"enter 2 no"<<endl;
    // cin>>b;
    // cout<<"function retured "<<add(a,b);

    // int arr[]={1,2,3};
    // cout<<arr[2];

    // int marks[6];
    // for (int i=0;i<6;i++)
    // {
    //     cout<<"enter marks for "<<i<<"th stud "<<endl;
    //     cin>>marks[i];
    // }

    // for (int i=0;i<6;i++)
    // {
    //     cout<<"marks for "<<i<<"th stud is "<<marks[i]<<endl;

    // }

    // int arr2d[2][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6}};

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "value at " << i << " , " << j << " is " << arr2d[i][j] << endl;
    //     }
    // }

    // string name="harry";
    // cout<<"naem is "<<name<<endl;
    // cout<<"length is "<<name.length()<<endl;
    // cout<<"substring "<<name.substr(0,5)<<endl;

    // int a=32;
    // int *ptra;
    // ptra=&a;
    // cout<<ptra<<endl;
    // cout<<*ptra<<endl;

    employee har;
    har.name = "harry";
    har.salary = 100;
    cout << "name is " << har.name << "and salary is " << har.salary << endl;

    return 0;
}