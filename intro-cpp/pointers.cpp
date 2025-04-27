#include <iostream>
using namespace std;

// Function to increment the value by 2 using pointer
void increment(int* x) {
  // Dereference pointer and add 2 to the value
  *x = *x + 2;
}

int main() {
  // Fast IO setup (optional for faster input/output)
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  /*
   MEMORY AND POINTERS INTRODUCTION:

   - Memory is made of bytes (1 byte = 8 bits).
   - Every byte has a unique address (shown in hexadecimal format).
   - A data type like int usually takes 4 bytes (32 bits).
   - A pointer stores the memory address of a variable.
  */

  int x = 4;      // Declare an integer variable 'x' and assign it 4
  int* p_x = &x;  // Pointer 'p_x' stores the address of 'x'

  // Printing the memory address and the value of x
  cout << "Address of variable x         : " << &x
       << endl;  // Print the address of 'x'
  cout << "Address stored in pointer p_x : " << p_x
       << endl;  // Print the address stored in 'p_x'
  cout << "Value pointed by p_x (*p_x)   : " << *p_x
       << endl;  // Print the value of 'x' using pointer p_x

  // Modify the value of 'x' through the pointer
  *p_x = 5;  // Dereference p_x and set 'x' to 5

  cout << "\nAfter modifying through pointer:\n";
  cout << "Value of x                    : " << x << endl;  // Now x should be 5

  // Pointer Arithmetic
  cout << "\nPointer Arithmetic:\n";
  cout << "p_x (current address)          : " << p_x
       << endl;  // Print current address stored in p_x
  cout << "p_x + 1 (next int address)     : " << p_x + 1
       << endl;  // p_x + 1 moves 4 bytes ahead (size of int)
  cout << "Value at p_x + 1 (*[p_x + 1])  : " << *(p_x + 1)
       << endl;  // Print the value at the next int location (garbage/random
                 // value)

  /*
   EXPLANATION:

   - p_x points to x, and the value of x is 5.
   - p_x + 1 moves the pointer 4 bytes ahead, to the next integer memory
   location.
   - *(p_x + 1) gives the value at that next location, which is random or
   garbage, as we don't own that memory.
  */

  cout << "=========================\n";
  cout << "\tDouble Pointer Example\t" << endl;
  cout << "=========================\n";

  // Double Pointer Example

  int y = 20;  // Declare a new variable 'y' and set it to 20

  int* p_y = &y;      // Pointer 'p_y' stores the address of 'y'
  int** pp_y = &p_y;  // Double pointer 'pp_y' stores the address of 'p_y'

  // Printing addresses
  cout << "Address of variable y           : " << &y
       << endl;  // Print address of y
  cout << "Address stored in pointer p_y   : " << p_y
       << endl;  // Print address stored in p_y
  cout << "Address stored in double pointer pp_y : " << pp_y
       << endl;  // Print address stored in pp_y

  cout << "\nValues:\n";
  cout << "Value of y                      : " << y
       << endl;  // Value of y is 20
  cout << "Value pointed by p_y (*p_y)     : " << *p_y
       << endl;  // Dereference p_y, so it prints value of y
  cout << "Value pointed by pp_y (**pp_y)  : " << **pp_y
       << endl;  // Dereference pp_y twice to get value of y

  // Modifying value through double pointer
  **pp_y = 50;  // Changing y's value through double pointer

  cout << "\nAfter modifying y through double pointer:\n";
  cout << "New value of y                   : " << y
       << endl;  // Value of y is now 50
  cout << "New value pointed by p_y (*p_y)  : " << *p_y
       << endl;  // p_y points to y, so it should show 50
  cout << "New value pointed by pp_y (**pp_y): " << **pp_y
       << endl;  // pp_y points to p_y, which points to y (50)

  cout << "=========================\n";
  cout << "\tArrays with Pointer Example\t" << endl;
  cout << "=========================\n";

  // Array Pointer Example

  int a[10];  // Declare an array of size 10
  a[0] = 2;   // Set the first element to 2
  a[1] = 4;   // Set the second element to 4

  // Print array addresses and values using pointers
  cout << "Array a address      : " << a
       << endl;  // Address of the first element
  cout << "Address of a[0]      : " << &a[0]
       << endl;  // Address of first element (same as 'a')
  cout << "Value at a[0]        : " << *a
       << endl;  // Dereference 'a', shows value at first element
  cout << "Address of a[1]      : " << &a[1]
       << endl;  // Address of second element
  cout << "Value at a[1]        : " << *(a + 1)
       << endl;  // Dereference pointer 'a+1', shows second element

  cout << "=========================\n";
  cout << "\tPointer Function Example\t" << endl;
  cout << "=========================\n";

  // Function call example with pointer

  int b;
  cout << "Enter a number: ";
  cin >> b;  // Get input from the user
  cout << "Before Function Call : " << b
       << endl;   // Print the number before function call
  increment(&b);  // Pass address of b to the increment function
  cout << "After Function Call  : " << b
       << endl;  // Print the number after adding 2

  return 0;
}
