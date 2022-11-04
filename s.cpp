 #include<iostream>
 using namespace std;
 /*
Creating a class order with private and public members 
*/
 class order
 { 
 //Private members.
 int tableno,noofpatrons ;
 string servername; static double minimumcharge;
 //Public member.
 public :
 static double display()
 {
 return minimumcharge;
 }
 
 };
 // Assigning a value to minimumcharge to class order.
 double order :: minimumcharge =4.75;
 //Main function.
 int main()
 {
 // Creating a object of class order.
// order o;
/*Displaying the minimumcharge with help of static member 
function display() */
cout<<"THE MINIMUM CHARGE OF THE TABLE IS : $ "<< order::display() << endl;
 return 0;
 }
 
