#include "big_number.h"

using namespace std;

int main(){

  //~ cout << "\t\t Testing int constructor...\n" << endl;
  //~ big_number intTest(123456789);
  //~ cout << intTest;
//~ 
//~ 
  //~ big_number intTest2(987654321);
  //~ cout << intTest2;
//~ 
//~ 
  //~ cout << "\t\t Testing int constructor with single digit...\n" << endl;
  //~ big_number intTest3(3);
  //~ cout << intTest3;
//~ 
//~ 
  //~ cout << "\t\t Testing int constructor with single negative digit...\n" << endl;
  //~ big_number intTest4(-3);
  //~ cout << intTest4;
//~ 
//~ 
  //~ cout << "\t\t Testing int constructor with negative int...\n" << endl;
  //~ big_number intTest5(-305);
  //~ cout << intTest5;
//~ 
//~ 
  //~ cout << "\t\t Testing default constructor...\n" << endl;
  //~ big_number defaultTest;
  //~ cout << defaultTest;
//~ 
//~ 
  //~ cout << "\t\t Testing copy constructor...\n" << endl;
  //~ big_number copyTest(intTest);
  //~ cout << copyTest;
//~ 
//~ 
  //~ cout << "\t\t Testing string constructor...\n" << endl;
  //~ big_number strTest("123456789", 10);
  //~ cout << strTest;
//~ 
//~ 
  //~ cout << "\t\t Testing string constructor with single digit...\n" << endl;
  //~ big_number strTest2("8", 10);
  //~ cout << strTest2;
//~ 
//~ 
  //~ cout << "\t\t Testing string constructor with negative number...\n" << endl;
  //~ big_number strTest3("-98765432101234567893", 10);
  //~ cout << strTest3;
//~ 
//~ 
  //~ cout << "\t\t Testing string constructor with single negative digit...\n" << endl;
  //~ big_number strTest4("-8", 10);
  //~ cout << strTest4;
//~ 
//~ 
  //~ cout << "\t\t Copying first testInt to previous number...\n" << endl;
  //~ strTest4 = intTest;
  //~ cout << strTest4;
//~ 
  //~ cout << "\t\t Copying second testInt to first testInt...\n" << endl;
  //~ intTest = intTest2;
  //~ cout << intTest;
//~ 
//~ 
  //~ cout << "\t\t Copying first testInt to new clone...\n" << endl;
  //~ big_number clone;
  //~ clone = intTest;
  //~ cout << "\t\t Printing intTest...\n" << endl;
  //~ cout << intTest;
  //~ cout << "\t\t Printing clone...\n" << endl;
  //~ cout << clone;
//~ 
//~ 
//~ //Testing == operator...
//~ 
  //~ cout << "\t\t Are the two previous big_numbers equal?\n" << endl;
  //~ if(clone == intTest){
	  //~ cout << "\t\t They are.\n" << endl;
  //~ }
  //~ else{
	  //~ cout << "\t\t They are not.\n" << endl;
  //~ }
//~ 
//~ 
  //~ cout << "\t\t Are the following two big_numbers equal?\n" << endl;
  //~ cout << strTest;
  //~ cout << strTest3;
  //~ if(strTest == strTest3){
	  //~ cout << "\t\t They are.\n" << endl;
  //~ }
  //~ if(strTest != strTest3){
	  //~ cout << "\t\t They are not.\n" << endl;
  //~ }
//~ 
//~ 
  //~ cout << "\t\t Are the two following numbers equal?\n" << endl;
  //~ big_number firstNine(123456789);
  //~ big_number firstNineNeg("-123456789",10);
  //~ cout << firstNine;
  //~ cout << firstNineNeg;
  //~ if(firstNine == firstNineNeg){
    //~ cout << "\t\t They are.";
  //~ }
  //~ if(firstNine != firstNineNeg){
    //~ cout << "\t\t They are not.\n" << endl;
  //~ }
//~ 
//~ 
//~ 
//~ 
//~ 
//~ //Testing > operator...
//~ 
  //~ cout << "\t\t Testing > operator...\n" << endl;
//~ 
  //~ big_number oneThou(1000);
  //~ big_number oneThou2(1000);
  //~ big_number twoThou(2000);
  //~ big_number threeThou(3000);
  //~ big_number fourThou(4000);
  //~ big_number tenThou(10000);
//~ 
  //~ cout << "\t\t Is the following big_num:\n" << endl;
  //~ cout << oneThou;
  //~ cout << "\t\t bigger than this big_num?\n\n";
  //~ cout << oneThou2;
  //~ if(oneThou > oneThou2){
	  //~ cout << "\n\t\t It is.\n" << endl;
  //~ }
  //~ if(!(oneThou > oneThou2)){
	  //~ cout << "\n\t\t It is not.\n" << endl;
  //~ }
//~ 
  //~ cout << "\n\t\t Is the following big_num:\n" << endl;
  //~ cout << twoThou;
  //~ cout << "\t\t bigger than this big_num?\n\n";
  //~ cout << oneThou;
  //~ if(twoThou > oneThou){
	  //~ cout << "\n\t\t It is.\n" << endl;
  //~ }
  //~ if(!(twoThou > oneThou)){
	  //~ cout << "\n\t\t It is not.\n" << endl;
  //~ }
//~ 
  //~ cout << "\n\t\t Is the following big_num:\n" << endl;
  //~ cout << oneThou;
  //~ cout << "\t\t bigger than this big_num?\n\n";
  //~ cout << twoThou;
  //~ if(oneThou > twoThou){
	  //~ cout << "\n\t\t It is.\n" << endl;
  //~ }
  //~ if(!(oneThou > twoThou)){
	  //~ cout << "\n\t\t It is not.\n" << endl;
  //~ }
//~ 
//~ 
//~ 
//~ //Testing >= operator...
//~ 
  //~ cout << "\t\t Testing >= operator...\n" << endl;
//~ 
  //~ cout << "\t\t Is the following big_num:\n" << endl;
  //~ cout << oneThou;
  //~ cout << "\t\t greater than or equal to this big_num?\n\n";
  //~ cout << oneThou2;
  //~ if(oneThou >= oneThou2){
	  //~ cout << "\n\t\t It is.\n" << endl;
  //~ }
  //~ if(!(oneThou >= oneThou2)){
	  //~ cout << "\n\t\t It is not.\n" << endl;
  //~ }
//~ 
  //~ cout << "\n\t\t Is the following big_num:\n" << endl;
  //~ cout << twoThou;
  //~ cout << "\t\t greater than or equal to this big_num?\n\n";
  //~ cout << oneThou;
  //~ if(twoThou >= oneThou){
	  //~ cout << "\n\t\t It is.\n" << endl;
  //~ }
  //~ if(!(twoThou >= oneThou)){
	  //~ cout << "\n\t\t It is not.\n" << endl;
  //~ }
//~ 
  //~ cout << "\n\t\t Is the following big_num:\n" << endl;
  //~ cout << oneThou;
  //~ cout << "\t\t greater than or equal to this big_num?\n\n";
  //~ cout << twoThou;
  //~ if(oneThou >= twoThou){
	  //~ cout << "\n\t\t It is.\n" << endl;
  //~ }
  //~ if(!(oneThou >= twoThou)){
	  //~ cout << "\n\t\t It is not.\n" << endl;
  //~ }
//~ 
//~ 
//~ 
//~ //  Testing < operator...
//~ 
  //~ cout << "\t\t Testing < operator...\n" << endl;
//~ 
  //~ cout << "\t\t Is the following big_num:\n" << endl;
  //~ cout << oneThou;
  //~ cout << "\t\t less than this big_num?\n\n";
  //~ cout << oneThou2;
  //~ if(oneThou < oneThou2){
	  //~ cout << "\n\t\t It is.\n" << endl;
  //~ }
  //~ if(!(oneThou < oneThou2)){
	  //~ cout << "\n\t\t It is not.\n" << endl;
  //~ }
//~ 
  //~ cout << "\n\t\t Is the following big_num:\n" << endl;
  //~ cout << twoThou;
  //~ cout << "\t\t less than this big_num?\n\n";
  //~ cout << oneThou;
  //~ if(twoThou < oneThou){
	  //~ cout << "\n\t\t It is.\n" << endl;
  //~ }
  //~ if(!(twoThou < oneThou)){
	  //~ cout << "\n\t\t It is not.\n" << endl;
  //~ }
//~ 
  //~ cout << "\n\t\t Is the following big_num:\n" << endl;
  //~ cout << oneThou;
  //~ cout << "\t\t less than this big_num?\n\n";
  //~ cout << twoThou;
  //~ if(oneThou < twoThou){
	  //~ cout << "\n\t\t It is.\n" << endl;
  //~ }
  //~ if(!(oneThou < twoThou)){
	  //~ cout << "\n\t\t It is not.\n" << endl;
  //~ }
//~ 
//~ 
//~ 
//~ //Testing <= operator...
//~ 
  //~ cout << "\t\t Testing <= operator...\n" << endl;
//~ 
  //~ cout << "\t\t Is the following big_num:\n" << endl;
  //~ cout << oneThou;
  //~ cout << "\t\t less than or equal to this big_num?\n\n";
  //~ cout << oneThou2;
  //~ if(oneThou <= oneThou2){
	  //~ cout << "\n\t\t It is.\n" << endl;
  //~ }
  //~ if(!(oneThou <= oneThou2)){
	  //~ cout << "\n\t\t It is not.\n" << endl;
  //~ }
//~ 
  //~ cout << "\n\t\t Is the following big_num:\n" << endl;
  //~ cout << twoThou;
  //~ cout << "\t\t less than or equal to this big_num?\n\n";
  //~ cout << oneThou;
  //~ if(twoThou <= oneThou){
	  //~ cout << "\n\t\t It is.\n" << endl;
  //~ }
  //~ if(!(twoThou <= oneThou)){
	  //~ cout << "\n\t\t It is not.\n" << endl;
  //~ }
//~ 
  //~ cout << "\n\t\t Is the following big_num:\n" << endl;
  //~ cout << oneThou;
  //~ cout << "\t\t less than or equal to this big_num?\n\n";
  //~ cout << twoThou;
  //~ if(oneThou <= twoThou){
	  //~ cout << "\n\t\t It is.\n" << endl;
  //~ }
  //~ if(!(oneThou <= twoThou)){
	  //~ cout << "\n\t\t It is not.\n" << endl;
  //~ }
  
  
//Testing sum method
	cout << "\n\t\t Testing sum method..." << endl;
	big_number sum1("1000000", 10);
	big_number sum2("0234567", 10);
	cout << "Adding:\n" << sum1 << "\nto:\n" << sum2 << endl;
	sum1.sum(sum2);
	cout << "Result:\n" << sum1 << "\n\n\n";

	
	big_number sum3("97", 10);
	big_number sum4("10", 10);
	cout << "Adding:\n" << sum3 << "\nto:\n" << sum4 << endl;
	sum3.sum(sum4);
	cout << "Result:\n" << sum3 << "\n\n\n";
	
	
	big_number sum5("999999999999", 10);
	big_number sum6("0001", 10);
	cout << "Adding:\n" << sum5 << "\nto:\n" << sum6 << endl;
	sum5.sum(sum6);
	cout << "Result:\n" << sum5 << "\n\n\n";
	
	
	big_number sum7("793fe942", 16);
	big_number sum8("fa1763", 16);
	cout << "Adding:\n" << sum7 << "\nto:\n" << sum8 << endl;
	sum7.sum(sum8);
	cout << "Result:\n" << sum7<< "\n\n\n";
	
	
	big_number sum9("999", 10);
	big_number sum10("1", 16);
	cout << "Adding:\n" << sum9 << "\nto:\n" << sum10 << endl;
	sum9.sum(sum10);
	cout << "Result:\n" << sum9 << "\n\n\n";
	
	
	big_number sum11("621ee8", 16);
	big_number sum12("cb60a8", 16);
	cout << "Adding:\n" << sum11 << "\nto:\n" << sum12 << endl;
	sum11.sum(sum12);
	cout << "Result:\n" << sum11 << "\n\n\n";
	
	
//~ 
//~ 
	//~ int n1, n2;
	//~ unsigned int base;
	//~ string s;
//~ 
	//~ char choice;
	//~ do
	//~ {
		//~ cout << "Type 'd' to test default constructor" << endl;
		//~ cout << "Type 'i' to test int constructor" << endl;
		//~ cout << "Type 's' to test string constructor" << endl;
		//~ cout << "Type 'a' to test assignment" << endl;
		//~ cout << "Type '>' to test input operator" << endl;
		//~ cout << "Type '=' to test comparison operators" << endl;
		//~ cout << "Type 'q' to quit" << endl;
		//~ cin >> choice;
//~ 
		//~ if (toupper(choice) == 'D')
		//~ {
			//~ big_number a;
			//~ cout << "Default constructor gives: " << a << endl;
		//~ }
//~ 
		//~ if (toupper(choice) == 'I')
		//~ {
			//~ cout << "Enter an integer: ";
			//~ cin >> n1;
			//~ big_number b(n1);
			//~ cout << "Int constructor with " << n1 << " gives: " << b << endl;
		//~ }
//~ 
		//~ if (toupper(choice) == 'S')
		//~ {
			//~ cout << "Enter a base: ";
			//~ cin >> base;
			//~ cout << "Enter a string: ";
			//~ cin >> s;
			//~ big_number e(s, base);
			//~ cout << "String constructor with " << s << " in base " <<
				//~ base << " gives: " << e << endl;
		//~ }
//~ 
		//~ if (toupper(choice) == 'A')
		//~ {
			//~ big_number e(9);
			//~ big_number d;
			//~ d = e;
			//~ cout << "Assignment of " << e << " to ";
			//~ ++e;
			//~ cout << d << " gives: " << e << endl;
			//~ if (d == e) cout << "boo, shallow copy";
		//~ }
//~ 
		//~ if (choice == '>')
		//~ {
			//~ big_number n1;
			//~ cout << "big_number before input:" << n1;
			//~ cout << "Enter a big number: ";
			//~ cin >> n1;
			//~ cout << "You just made this big_number:\n" << n1 << endl;
		//~ }
//~ 
		//~ if (choice == '=')
		//~ {
			//~ cout << "Enter a number: ";
			//~ cin >> n1;
			//~ cout << "Enter another number: ";
			//~ cin >> n2;
			//~ big_number f(n1);
			//~ big_number g(n2);
			//~ if (f == g)
				//~ cout << f << " == " << g << endl;
			//~ if (f != g)
				//~ cout << f << " != " << g << endl;
			//~ if (f < g)
				//~ cout << f << " < " << g << endl;
			//~ if (f <= g)
				//~ cout << f << " <= " << g << endl;
			//~ if (f > g)
				//~ cout << f << " > " << g << endl;
			//~ if (f >= g)
				//~ cout << f << " >= " << g << endl;
		//~ }
//~ 
	//~ } while (toupper(choice) != 'Q');
}
