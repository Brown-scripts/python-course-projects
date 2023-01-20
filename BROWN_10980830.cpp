#include<iostream>
using namespace std;
int main(){
    //collecting student name
    string studentname;
    //for (string i =0; i<)
    cout<<"student name is ";
    cin>>studentname;
    cout<<studentname;
    cout<<"\n";
    //collecting scores for test 1 to test 5
    int test1,test2,test3,test4,test5;
    cout<<"test 1 grade is ";
    cin>>test1;
    cout<<test1;
    cout<<"\n";
    cout<<"test 2 grade is ";
    cin>>test2;
    cout<<test2;
    cout<<"\n";
    cout<<"test 3 grade is ";
    cin>>test3;
    cout<<test3;
    cout<<"\n";
    cout<<"test 4 grade is ";
    cin>>test4;
    cout<<test4;
    cout<<"\n";
    cout<<"test 5 grade is ";
    cin>>test5;
    cout<<test5;
    cout<<"\n";
    //finding the sum of the test scores
    int sum;
    sum = test1 + test2 + test3 + test4 + test5;
    cout<<"the sum of the 5 tests is ";
    cout<<sum;
    cout<<"\n";
    //calculating the average grade
    int average;
    average = sum/5;
    cout<<"the average is ";
    cout<<average;
    cout<<"\n";
    //grading the student
    if (average>=90){
        cout<<"A";
        cout<<" excellent";
    }
    if (average>=80 && average<90){
        cout<<"B";
        cout<<" very good";

    }
    if (average>=70 && average<80){
        cout<<"C";
        cout<<" good";

    }
    if (average>=60 && average<70){
        cout<<"D";
        cout<<" pass";

    }
    if (average<60){
        cout<<"F";
        cout<<" fail";

    }

}
