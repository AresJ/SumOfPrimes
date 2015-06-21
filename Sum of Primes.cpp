//
//  Sum of Primes.cpp
//  
//
//  Created by are$ on 6/21/15.
//
//

#include <iostream>

bool primes(number);

int main(){
    int sum = 0; // The Sum
    int number = 0; // The Number
    int numberOfTimes = 1000; //The Number of Primes Needing To Summed
    int a = 2; //Count
    
    while (number < numberOfTimes){
        if(primes(number)){
            sum += a;
            ++number;
                }
            }
        ++a;
    }

cout << endl << sum << endl;

return 0;

}

bool primes(int number){
    for(int a = 2; a < number; a++){
        if(number % a == 0){
            return false;
        }
    }
    
    return true;
    
}
