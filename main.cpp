#include<iostream>
using namespace std;
double convertMeter(double inch) { return inch*2.54/100; }
double convertKg(double lb) { return lb/2.2; }
double bmiCalc(double meters, double kg) { return convertKg(kg) / (convertMeter(meters)*convertMeter(meters)); }
string cat(double bmi)
{
    if (bmi<18.5) return "underweight";
    else if (bmi<25) return "healthy";
    else if (bmi<30) return "overweight";
    return "very overweight";
}
int main()
{
    int weight;
    int height;
    cout<<"Please enter height in inches : ";
    while(cin>>height)
    {
        cout<<"Please enter weight in pounds : ";
        cin>>weight;
        cout<<bmiCalc(height,weight)<<endl<<cat(bmiCalc(height,weight))<<endl;
        cout<<"Please enter height in inches : ";
    }
}