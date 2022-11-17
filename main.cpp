#include <iostream>

using namespace std;
int main() {
   float a=0,b=0,c=0;
    int opzione=0;
    cin>>a>>b>>opzione;
    switch (opzione){
        case 0:
            c=a*b/2;
            cout<<c;
            break;
        case 1:
            c=a*a;
            cout<<c;
            break;
        case 2:
            c=a*b;
            cout<<c;
            break;
        default:
            cout<<"opzione non valida";
        break;
    }
            
    return 0;
}

