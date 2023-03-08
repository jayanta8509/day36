// Write a Program to Capitalize the first and last letter of each word of a
// string
#include <cctype>
#include <iostream>
using namespace std;

void Capitalize(string a) {
  int len = a.length();
  char ok[len + 1];               // Add one to include null terminator
  ok[len + 1] = '\0';             // Initialize with null terminator
  for (int i = 0; i < len; i++) { // Change loop limit to len-2
    ok[i] = a[i];
    if (i == 0) {
      ok[0] = toupper(ok[i]);
    }
    ok[len] = toupper(ok[i]);
  }
  cout << ok;
}

int main() {
  string a = "programming";
  Capitalize(a);
}