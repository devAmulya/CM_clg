#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double funct(double x){
    //Function f = x^3 - 4x + 9;
    double value = x*x*x  - 4*x - 9;
    return value;
}
int main(){
    
    double tol = 0.0001;
    double x = 2;
    double x1 = 3;
    double x2;
    while(true){
        x2 = (x+x1)/2;
        double mul = funct(x) * funct(x2);
        cout<<x<<" "<<x1<<" "<<x2<<endl;
        if(mul < 0){
            x1 = x2;
        }else if(mul > 0){
            x = x2;
        }else{
            break;
        }
        double p = funct(x2);
        if(p < 0){
            p *= -1;
        }
        if(p <= tol){
            break;
        }
    }
    cout<<x2;
    
}
