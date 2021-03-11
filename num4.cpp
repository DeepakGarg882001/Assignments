#include<iostream>
#include<math.h>
using namespace std;
float powerfunction(float number,int power)
{
    return pow(number,power);
}
float powerfunction(float num1)
{
    int power_1=2;
    return pow(num1,power_1);
}
void display(float data){
    cout<<"result is "<<data<<endl;
}
int main()
{
        int e;
        float no;
        float res1,res2;

        //take input form user
        cout<<"enter number is ="<<endl;
        cin>>no;
        cout<<"enter power number is ="<<endl;
        cin>>e;

        cout<<"without default power.. "<<endl;
        res1=powerfunction(no,e);            
        display(res1);

        cout<<"using default power condition.. "<<endl;
        res2=powerfunction(no);          
        display(res2);
        return 0;
        }