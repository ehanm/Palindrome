// Made by Ehan Masud
// Completed on 9/28/21
// This program takes an input (with a maximum of 80 characters long) and determines whether it is a palindrome or not
#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char input[81]; // character array for input
  char converter[81]; // character array to remove all spaces and punctuation 
  char checker[81]; // character array to reverse the the previous array
  int convertercounter = 0;
  int finalcheck = 0;
  cin.get(input, 81);

  for (int i = 0; i < strlen(input); i++) { // removing all punctuation and converting the entire array to uppercase
    if (isalpha(input[i]) != 0){
      converter[convertercounter] = toupper(input[i]);
      convertercounter++;
    }
 
  }

  for (int i = 0; i < strlen(converter); i++){ // reversing the entire array and copying it into a new array
    checker[i] = converter[strlen(converter)-1-i];
  }

  for (int i = 0; i < strlen(converter); i++) { // checking if both arrays are the same
    if (checker[i] == converter[i]){
      finalcheck++;
    }
  }

  if (finalcheck == strlen(converter)) { // if they are, print "Palindrome"
    cout << "Palindrome.";
  }
  else { // if they aren't print "Not a palindrome."
    cout << "Not a palindrome."; 
  }
 
  return 0;
}
