#include <iostream>

using namespace std;

int main(){
    
    int number, counter, aux, space=1;
    
    cout<<"\nGive me a number to start: ";
    cin>>number;
    
    space=number-1;
        
    for (aux=1; aux<=number; aux++){
        for (counter=1; counter<=space; counter++)
            cout<<" ";
        space--;

        for (counter=1; counter<= 2*aux-1; counter++)
            cout<<"*";
        
        cout<<"\n";
    }
    
    space=1;
    
    for (aux=1; aux<= number-1; aux++){
        for(counter=1; counter<= space; counter++)
            cout<<" ";
        space++;
        for(counter=1; counter<=2*(number-aux)-1; counter++)
            cout<<"*";
        cout<<"\n";
    }
    return 0;
}
