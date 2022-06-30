#include<iostream>
#define SCALE 8
#define Float_Fixed(x) roundf((float)x * (float)(1 << SCALE))
#define Fixed_Float(x) ((float)x / (float)(1<<SCALE))
int main()
{
    int a = Float_Fixed(14.42f);
    std::cout<<Fixed_Float(a)<<std::endl;
}