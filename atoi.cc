#include <iostream>
using namespace std;
bool isNumericChar(char x) {
   return (x >= '0' && x <= '9') ? true : false;
}
int myAtoi(char* str) {
   if (*str == '\0')
      return 0;
   int result = 0;
   int sign = 1;
   int i = 0;
   if (str[0] == '-') {
      sign = -1;
      i++;
   }
   for (; str[i] != '\0'; ++i) {
      if (isNumericChar(str[i]) == false)
         return 0;
      result = result * 10 + str[i] - '0';
   }
   return sign * result;
}
int main() {
   char string[] = "-32491841";
   int intVal = myAtoi(string);
   cout<<"The integer equivalent of the given string is "<<intVal;
   return 0;
}
