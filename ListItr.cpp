//Edward Carter
//ListItr.cpp

#include "ListItr.h"


ListItr::ListItr(){ //Constructor
  
  current = NULL;
    
}

ListItr::ListItr(ListNode*theNode){ //Constructor with Parameters

  current = theNode;
}

bool ListItr::isPastEnd() const{ //Returns true if past end position

  if( current -> next == NULL){
    
    return true;


  }
  
  return false;

}

bool ListItr::isPastBeginning() const{ //Returns true if past first position

 if( current -> previous == NULL){
   
    return true;


  }
 
  return false;


}

void ListItr::moveForward(){

  if(!isPastEnd()){
    
    current = current -> next;
   
  }

}

void ListItr:: moveBackward(){

  if(!isPastBeginning()){

    current = current -> previous;
    
  }


}

int ListItr:: retrieve() const{

  return current -> value;
  
}
