/***********************
*                      *
*  Кофф Даниил ПИ-221  *
*  Арабские числа      *
*                      *
***********************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string input;
  int conversion;
  int outputArabic;
  string outputRoman;
  int index;
  int validNumber = -1;
  int buffer;
    
  cout << "Input a natural number (arabic or roman): ";
  cin  >> input;
    
  for (index = 0; index < input.length(); ++index) {
      
    input[index] = toupper(input[index]);
    
    if (validNumber !=2 && (input[index] >= '0' && input[index] <= '9')) {
      validNumber = 1;
    } else if (validNumber != 1 && (input[index] == 'I' || input[index] == 'V' || input[index] == 'X' || input[index] == 'L'
    || input[index] == 'C' || input[index] == 'D' || input[index] == 'M')) {
      validNumber = 2;
    } else {
      validNumber = 0;
    }
      
    if (validNumber == 0) {
      cout << "\nInvalid number";
      return 1;
    }
  }
  
  if (validNumber == 1) {
    conversion = stoi(input);
    
    buffer = conversion / 1000;
    if (buffer > 3) {
      cout << "\nInvalid number (too big to convert to roman system)";
      return 1;
    } else if (buffer == 3) {
      outputRoman += "MMM";
    } else if (buffer == 2) {
      outputRoman += "MM";
    } else if (buffer == 1) {
      outputRoman += "M";
    }
    
    buffer = conversion % 1000 / 100;
    if (buffer == 9) {
     outputRoman += "CM";
    } else if (buffer == 8) {
     outputRoman += "DCCC";
    } else if (buffer == 7) {
     outputRoman += "DCC";
    } else if (buffer == 6) {
     outputRoman += "DC";
    } else if (buffer == 5) {
     outputRoman += "D";
    } else if (buffer == 4) {
     outputRoman += "CD";
    } else if (buffer == 3) {
     outputRoman += "CCC";
    } else if (buffer == 2) {
     outputRoman += "CC";
    } else if (buffer == 1) {
     outputRoman += "C";
    }
    
    buffer = conversion % 100 / 10;
    if (buffer == 9) {
     outputRoman += "XC";
    } else if (buffer == 8) {
     outputRoman += "LXXX";
    } else if (buffer == 7) {
     outputRoman += "LXX";
    } else if (buffer == 6) {
     outputRoman += "LX";
    } else if (buffer == 5) {
     outputRoman += "L";
    } else if (buffer == 4) {
     outputRoman += "XL";
    } else if (buffer == 3) {
     outputRoman += "XXX";
    } else if (buffer == 2) {
     outputRoman += "XX";
    } else if (buffer == 1) {
     outputRoman += "X";
    }
    
    buffer = conversion % 10;
    if (buffer == 9) {
     outputRoman += "IX";
    } else if (buffer == 8) {
     outputRoman += "VIII";
    } else if (buffer == 7) {
     outputRoman += "VII";
    } else if (buffer == 6) {
     outputRoman += "VI";
    } else if (buffer == 5) {
     outputRoman += "V";
    } else if (buffer == 4) {
     outputRoman += "IV";
    } else if (buffer == 3) {
     outputRoman += "III";
    } else if (buffer == 2) {
     outputRoman += "II";
    } else if (buffer == 1) {
     outputRoman += "I";
    }
    
    cout << "Converted to roman number: " << outputRoman;
  }
  
  if (validNumber == 2) {
    outputArabic = 0;
    index = 0;
    
    if (input.substr(index, 3) == "MMM") {
      outputArabic += 3000;
      index+=3;
    } else if (input.substr(index, 2) == "MM") {
      outputArabic += 2000;
      index+=2;
    } else if (input.substr(index, 1) == "M") {
      outputArabic += 1000;
      ++index;
    }
      
      
      
      
    if (input.substr(index, 2) == "CM") {
      outputArabic += 900;
      index+=2;
    } else if (input.substr(index, 4) == "DCCC") {
      outputArabic += 800;
      index+=4;
    } else if (input.substr(index, 3) == "DCC") {
      outputArabic += 700;
      index+=3;
    } else if (input.substr(index, 2) == "DC") {
      outputArabic += 600;
      index+=2;
    } else if (input.substr(index, 1) == "D") {
      outputArabic += 500;
      ++index;
    } else if (input.substr(index, 2) == "CD") {
      outputArabic += 400;
      index+=2;
    } else if (input.substr(index, 3) == "CCC") {
      outputArabic += 300;
      index+=3;
    } else if (input.substr(index, 2) == "CC") {
      outputArabic += 200;
      index+=2;
    } else if (input.substr(index, 1) == "C") {
      outputArabic += 100;
      ++index;
    }
      
      
      
      
    if (input.substr(index, 2) == "XC") {
      outputArabic += 90;
      index+=2;
    } else if (input.substr(index, 4) == "LXXX") {
      outputArabic += 80;
      index+=4;
    } else if (input.substr(index, 3) == "LXX") {
      outputArabic += 70;
      index+=3;
    } else if (input.substr(index, 2) == "LX") {
      outputArabic += 60;
      index+=2;
    } else if (input.substr(index, 1) == "L") {
      outputArabic += 50;
      ++index;
    } else if (input.substr(index, 2) == "XL") {
      outputArabic += 40;
      index+=2;
    } else if (input.substr(index, 3) == "XXX") {
      outputArabic += 30;
      index+=3;
    } else if (input.substr(index, 2) == "XX") {
      outputArabic += 20;
      index+=2;
    } else if (input.substr(index, 1) == "X") {
      outputArabic += 10;
      ++index;
    }
      
      
      
      
    if (input.substr(index, 2) == "IX") {
      outputArabic += 9;
      index+=2;
    } else if (input.substr(index, 4) == "VIII") {
      outputArabic += 8;
      index+=4;
    } else if (input.substr(index, 3) == "VII") {
      outputArabic += 7;
      index+=3;
    } else if (input.substr(index, 2) == "VI") {
      outputArabic += 6;
      index+=2;
    } else if (input.substr(index, 1) == "V") {
      outputArabic += 5;
      ++index;
    } else if (input.substr(index, 2) == "IV") {
      outputArabic += 4;
      index+=2;
    } else if (input.substr(index, 3) == "III") {
      outputArabic += 3;
      index+=3;
    } else if (input.substr(index, 2) == "II") {
      outputArabic += 2;
      index+=2;
    } else if (input.substr(index, 1) == "I") {
      outputArabic += 1;
      ++index;
    }
      
      
      
      
    if (index < input.length()) {
      cout << "\nInvalid number (invalid structure of roman number)";
      return 0;
    } else {
      cout << "\nConverted to arabic number: " << outputArabic;
    }
  }
  
  return 0;
}


