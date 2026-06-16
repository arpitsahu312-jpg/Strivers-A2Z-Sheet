#include<bits/stdc++.h>
using namespace std;
//Write a program that take an input of age
// and print if you are adult or not
// >= 18, yes
// <18 , no

int main()
{
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    if (age >= 18)
    {
        cout<<"You are an adult";
    }
    else if (age<10)
    {
        cout<<"You are not an adult";
    }
    return 0;
}

/*
A school has following rules for grading system:
a. Below 25 -F
b. 25 to 44 -E
c. 45 to 49 -D
d. 50 to 59 -C
e. 60 to 79 -B
f. 80 to 100 -A
Ask user to enter marks and print the corresponding grade.
*/

int main()
{
    cout<<"Enter your marks"<<endl;
    int marks;
    cin>>marks;
    if(marks<25)
    {
        cout<<"F";
    }
    else if(marks<45)
    {
        cout<<"E";
    }
    else if(marks<50)
    {
        cout<<"D";
    }
    else if(marks<60)
    {
        cout<<"C";
    }
    else if(marks<80)
    {
        cout<<"B";
    }
    else
    {
        cout<<"A";
    }
    return 0;
}

/*
Take the age from the user and then decide accordingly
1. If age<18
   print-> not eligible for job
2. If age >=18
   print-> eligible for job
3. If age>=55 and age <=57,
   print-> eligible for job but retiremewnt soon
4. If age>57
   print-> retirement time
*/

int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age <18)
    {
        cout<<"not eligible for job";
    }
    else
    {
        if(age<55)
        {
            cout<<"eligible for job"<<endl;
        }
        else if(age<=57)
        {
            cout<<"eligible for job but retirement soon";
        }
        else
        {
            cout<<"retirement time";
        }
    }
    // else if(age<55)
    //     {
    //         cout<<"eligible for job"<<endl;
    //     }
    // else if(age<=57)
    //     {
    //         cout<<"eligible for job but retirement soon";
    //     }
    // else
    //     {
    //         cout<<"retirement time";
    //     }
    return 0;
}