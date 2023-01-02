#include "overload.h"

Money Money::Money operator + (const Money& this, const Money& a){
  Money temp;
  temp.setChecking(this->getChecking()+a.getChecking());
  temp.setSavings(this_>getSavings()+a.getSavings());
  return temp;
}

Money Money::Money operator - (const Money & this, const Money& a){
  Money temp2;
  temp2.setChecking(this.getChecking()-a.getChecking());
  temp2.setSavings(this.getSavings()-a.getSavings());
  return temp2;
}

Money Money::bool operator == (const Money& this, const Money& a){
  if(this->checking == a.getChecking() && this->getSavings() == a.getSavings()){
    return true;
  else
      return false;
    }

  }
}
