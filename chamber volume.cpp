#include<iostream>
using namespace std;
int main()
{
float bore;
cout<<"bore = ";
cin>>bore;

float stroke;
cout<<"stroke = ";
cin>>stroke;

float kompresi;
cout<<"compression ratio = ";
cin>>kompresi;

float volume = ((0.7854 * bore * bore * stroke) / kompresi) * 0.001;

cout<<"chamber volume = "<<volume;
return 0;
} 
