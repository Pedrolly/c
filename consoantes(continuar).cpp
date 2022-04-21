
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;
int main()
{
float somvog,medcon,somlet,medvog;
char let;    
somlet = 0;somvog = 0;    
    while(let != '*')
    {
        cin>>let;
    somlet = somlet + 1;
    if(let =='a' || let =='e' || let =='i' || let =='o' || let =='u')
    {
        somvog=somvog + 1;
    }   
    
    
    }



medcon =(somvog/somlet)* 100;
medvog = medcon - 100;
cout<< medvog <<endl;    






    return 0;
}







