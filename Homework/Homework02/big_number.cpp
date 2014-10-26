  #include "big_number.h"

  /* Private big_num variables

   *  node* head_ptr
   *  node* tail_ptr
   *  unsigned int digits
   *  bool positive
   *  unsigned int base
  */

  using namespace std;

  //===Precondition: (*this) is no empty===
  //prepends an item to the head_ptr of the big_num;
  //SHOULD ONLY BE PASSED SINGLE DIGITS! - currently only compatible with ints
  void big_number::prepend(const int in){
    if((*this).head_ptr){
      node* incoming = new node();
      incoming->data = in;
      incoming->prev = nullptr;
      incoming->next = (*this).head_ptr;
      (*this).head_ptr->prev = incoming;
      (*this).head_ptr = incoming;
      (*this).digits++;
    }
    else{
      cout << "Sorry, head_ptr is not instantiated yet for this object..." << endl;
    }
  }

  // default constructor, creates a 0
  big_number::big_number(){
    (*this).head_ptr = (*this).tail_ptr = new node();
    (*this).head_ptr->data = 0;
    (*this).head_ptr->next = (*this).head_ptr->prev = nullptr;
    (*this).digits = 1;
    (*this).positive = true;
    (*this).base = 10;
  }

  // int constructor; create big_number from base 10 integer
  big_number::big_number(int i){
    //assign this.base
    (*this).base = 10;

    //assign this.positive
    if(i < 0){
      positive = false;
      i *= -1;
    }
    else{
      positive = true;
    }

    (*this).head_ptr = (*this).tail_ptr = new node();
    (*this).head_ptr->next = (*this).head_ptr->prev = nullptr;

    //if incoming int is only one digit, handle appropriately
    if(i < (*this).base){
      (*this).head_ptr->data = i;
      (*this).digits = 1;
    }
    else{
      //disect i's digits, from right to left and prepend to big_num
      while(i > (*this).base){
        (*this).prepend(i % 10);
        i /= 10;
      }
      //add final digit if it is not == 0
      if(i != 0){
        (*this).prepend(i);
      }
    }

  }

  // copy constructor, creates a deep copy of m
  big_number::big_number(const big_number& m){
    (*this).head_ptr = (*this).tail_ptr = new node();
    (*this).positive = m.positive;
    (*this).base = m.base;
    copy_list(m.head_ptr, (*this).head_ptr, (*this).tail_ptr);
  }

  // create a big_number from a string
  big_number::big_number(const string& s, unsigned int b){

  }

  // destructor
  big_number::~big_number(){

  }

  // assignment operator
  big_number& big_number::operator=(const big_number& m){
    return *this;
  }

  // set value to original value + b; return answer in original number's base
  big_number& big_number::operator+= (const big_number& b){
    return *this;
  }

  // set value to original value * b; return answer in original number's base
  big_number& big_number::operator*= (const big_number& b){
    return *this;
  }

  // set value to original value - b; return answer in original number's base
  big_number& big_number::operator-= (const big_number& b){
    return *this;
  }

  // set value to original value / b; return answer in original number's base
  big_number& big_number::operator/= (const big_number& b){
    return *this;
  }

  // set value to original value * b; return answer in original number's base
  big_number& big_number::operator%= (const big_number& b){
    return *this;
  }

  // prefix increment
  big_number& big_number::operator++(){
    return *this;
  }

  // prefix decrement
  big_number& big_number::operator--(){
    return *this;
  }

  bool operator >(const big_number& a, const big_number& b){
    return false;
  }

  bool operator >=(const big_number& a, const big_number& b){
    return false;
  }

  bool operator <(const big_number& a, const big_number& b){
    return false;
  }

  bool operator <=(const big_number& a, const big_number& b){
    return false;
  }

  bool operator==(const big_number& a, const big_number& b){
    return false;
  }

  bool operator!=(const big_number& a, const big_number& b){
    return false;
  }

  ostream& operator <<(ostream& out, const big_number& n){
    return out;
  }

  istream& operator >>(istream& in, big_number& n){
    return in;
  }

  big_number operator+(const big_number& a, const big_number& b){
    big_number answer;
    return answer;
  }

  big_number operator-(const big_number& a, const big_number& b){
    big_number answer;
    return answer;
  }

  big_number operator*(const big_number& a, const big_number& b){
    big_number answer;
    return answer;
  }

  big_number operator/(const big_number& a, const big_number& b){
    big_number answer;
    return answer;
  }

  big_number operator%(const big_number& a, const big_number& b){
    big_number answer;
    return answer;
  }

  big_number factorial(const big_number& a){
    big_number answer;
    return answer;
  }


