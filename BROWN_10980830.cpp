//BROWN KATHLEEN NICOLE
//10980830
#include<iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main(){
    //collecting student name
    string studentname;
    cout<<"student name is ";
    cin>>studentname;
    cout<<studentname<<endl;
    //collecting scores for test 1 to test 5
    int test1,test2,test3,test4,test5,sum,average;
    cout<<"test 1: ";
    cin>>test1;
    cout<<"test 2: ";
    cin>>test2;
    cout<<"test 3: ";
    cin>>test3;
    cout<<"test 4: ";
    cin>>test4;
    cout<<"test 5: ";
    cin>>test5;
    //finding the sum of the test scores
    sum = test1 + test2 + test3 + test4 + test5;
    cout<<"the sum of the 5 tests is ";
    cout<<sum;
    cout<<"\n";
    //calculating the average grade
    average = sum/5;
    cout<<"The average is ";
    cout<<average;
    cout<<"\n";
    //grading the student
    switch(average){
        case 100:;
        case 90:;
        cout<<"A\n";
        cout<<"excellent";
        break;
        case 80:;
        cout<<"B\n";
        cout<<"very good";
        break;
        case 70:;
        cout<<"C\n";
        cout<<"good";
        break;
        case 60:;
        cout<<"D\n";
        cout<<"pass";
        break;
        case 50:;
        case 40:;
        case 30:;
        case 20:;
        case 10:;
        cout<<"F\n";
        cout<<"fail";
        break;
    }
}
