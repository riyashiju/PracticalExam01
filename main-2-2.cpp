#include <iostream>
#include <string.h>
using namespace std;
int main() {
  
int binary_digits[30];
  
int number_of_digits;
  
int binary_to_number(binary_digits[30]);{
  
    string bin_str;

    for (int i=0; i<number_of_digits; i++) {
      
         if (binary_digits[i] == 0) {
           
             bin_str = "0" + bin_str;
           
         } else if (binary_digits[i] == 1) {
           
             bin_str = "1" + bin_str;
           
           } 
    }
    int bin_int = std::stoi (bin_str);
return bin_int;
  }
}