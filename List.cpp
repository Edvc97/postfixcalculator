//Edward Carter
//List.cpp

#include "List.h"

List::List(){ //First Constructor
  
  head = new ListNode;
  tail = new ListNode;
  head -> next = tail;
  tail -> previous = head;
  head -> previous = NULL;
  tail -> next = NULL;
  count = 0;

}

List::List(const List& source){ //Second Constructor

 head=new ListNode;
    tail=new ListNode;
    head->next=tail;
    tail->previous=head;
    count=0;
    ListItr iter(source.head->next);
    while (!iter.isPastEnd()) {       // deep copy of the list
        insertAtTail(iter.retrieve());
        iter.moveForward();
    }

}

List::~List(){ // Destructor
  makeEmpty();
  delete head;
  delete tail;
}


List& List::operator=(const List& source) { //Equals operator
    if (this == &source)
        return *this;
    else {
        makeEmpty();
        ListItr iter(source.head->next);
        while (!iter.isPastEnd()) {
            insertAtTail(iter.retrieve());
            iter.moveForward();
        }
    }
    return *this;
}

bool List::isEmpty() const{ //Returns true if empty; else false
  
  return count  == 0;
  
}

void List::makeEmpty(){ //Removes all items except blank head and tail

  while(!isEmpty()){

    remove(head -> next -> value);

  }
  
}


ListItr List::first(){ //Returns an iterator that points to the ListNode in the first position

  return ListItr(head -> next);

}

ListItr List::last(){ 	//Returns an iterator that points to the ListNode in the last position
  
  return ListItr(tail -> previous);

}

void List::insertAfter(int x, ListItr position){ //Inserts x after current iterator position p

 
  ListNode *inserter = new ListNode;
  inserter -> value = x;
  inserter -> previous  = position.current;
  inserter -> next = position.current -> next;
  position.current -> next = inserter;
  inserter -> next -> previous = inserter;

  count++;
  
}

void List::insertBefore(int x, ListItr position){ //Inserts x before current iterator position p



  ListNode *inserter = new ListNode;
  inserter -> value = x;
  inserter -> next = position.current;
  inserter -> previous = position.current -> previous;
  position.current -> previous = inserter;
  inserter -> previous -> next = inserter;
  
  count++;

  
}

void List::insertAtTail(int x){ //Insert x at tail of list
  
  ListNode *inserter = new ListNode;
  inserter -> value = x;
  inserter -> next = tail;
  inserter -> previous = tail -> previous;
  tail -> previous -> next = inserter;
  tail -> previous = inserter;
 
 
  count++;
  
  
  
}

void List::remove(int x){ //Removes the first occurrence of x
  
  ListItr remover = first();
  while(!remover.isPastEnd()){

    if(remover.current -> value == x){

      remover.current -> next -> previous = remover.current -> previous;
      remover.current -> previous -> next = remover.current -> next;
      delete remover.current;
      count--;
      break;



    }else{

      remover.moveForward();

   }
    
  }

}

ListItr List::find(int x){ //Returns an iterator that points to the first occurrence of x, else return a iterator to the dummy tail node

  
   ListItr finder = first();

  while(!finder.isPastEnd()){

     if(finder.current -> value == x){
       
       return finder;

    }else{

     finder.moveForward();

    }
    
    return finder;

     }

  return finder;
  
}
int List::size() const{ //Returns the number of elements in the list

  return count;
  
  
}

void printList(List& source, bool direction){ //prints list forwards when direction is true or backwards when direction is false


  if(direction){

    ListItr printer = source.first();

    while(!printer.isPastEnd()){

      cout << printer.retrieve() << endl;

      printer.moveForward();


    }

  }else{

    ListItr printer = source.last();

    while(!printer.isPastBeginning()){

      cout << printer.retrieve() << endl;

	printer.moveBackward();
      
    }

  }   

}
