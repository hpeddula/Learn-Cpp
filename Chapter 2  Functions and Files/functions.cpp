/*
 *Functions Basics
 */

#include <iostream>
int add(int,int);
int main()
{
    std::cout << "This is a demo of Forward Declaraion" << "\n";
    std::cout << "The value of add is " << add(5,6) << "\n";
}
int add (int a, int b)
{
    return a+b;
}