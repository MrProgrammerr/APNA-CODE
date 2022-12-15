#include<iostream>
int main()
{
    float inch,cm;
    std::cout<<"\nEnter the inch value : ";
    std::cin>>inch;
    cm=inch*2.54;
    std::cout<<inch<<" inch = "<<cm<<" cm\n\n";
}