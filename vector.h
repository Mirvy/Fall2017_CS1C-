/*vector.h
 *
 *  Created on: Dec 1, 2016
 *      Author: jkath
 *  Modified on: Oct 19, 2017
 *      Author: Mike Yelverton
 */

#ifndef VECTOR_H_
#define VECTOR_H_
#include <algorithm>    // std::copy

using std::copy;

namespace myStd

{
template <typename T>
 class vector
 {
 /*
  vector of doubles much like stl vector container
   NOTE: elem[n] is vector component n for all n >= 0 AND n < size_v
   size_v = the number of items stored in the vector
   space = the available storage capacity of the vector where size_v <= space 
   if size_v < space there is space for (space � size_v) doubles after elem[size_v�1]
 */
   int size_v;    // the size
   T* elem;  // pointer to the elements (or 0)
   int space;     // number of elements plus number of free slots

public:

   vector() : size_v{0}, elem{nullptr}, space{0} { }	// default constructor 
   explicit vector(int s) : size_v{0}, elem{new T[s]}, space{s}	// alternate constructor
   //Modified - changed parameter of size_v from s to 0; first index was not actual.
   {
     for (int i=0; i<size_v; ++i) elem[i] = 0; // elements are initialized
   }
   vector(const vector& src) : size_v{src.size_v}, elem{new T[src.size_v]}, space{src.space} // copy constructor
   {
     copy(src.elem, src.elem + size_v, elem); 	// copy elements - std::copy() algorithm
   }
   vector& operator=(const vector& src)	// copy assignment
   {
     T* p = new T[src.size_v];			// allocate new space
     copy(src.elem, src.elem + src.size_v, p);	// copy elements - std::copy() algorithm
     delete[] elem;  // deallocate old space
     elem = p;	// now we can reset elem
     size_v = src.size_v;
     return *this;  // return a self-reference
   }
   ~vector() { delete[] elem; }	 // destructor
   T& operator[](int n) { return elem[n]; }	// access: return reference
   const T& operator[](int n) const { return elem[n]; }
   int size() const { return size_v; }
   int capacity() const { return space; }
   void resize(int newsize)  // growth
   {
     reserve(newsize);  // make the vector have newsize elements
     for (int i=size_v; i<newsize; ++i) elem[i] = 0; // initialize new elements
     size_v = newsize;  // initialize each new element with the default value 0.0
   }
   void push_back(T d)  // increase vector size by one; initialize the new element with d
   {
     if (space == 0) reserve(8);  // start with space for 8 elements
     else if (size_v == space) reserve(2*space);  // get more space
     elem[size_v] = d;	// add d at end
     ++size_v;	// increase the size (size_v is the number of elements)
   }
   void reserve(int newalloc)
   {
     if (newalloc <= space) return;  // never decrease allocation
     T* p = new T[newalloc]; 	// allocate new space
     for (int i=0; i<size_v; ++i) p[i] = elem[i];  // copy old elements
     delete[] elem;  // deallocate old space
     elem = p;
     space = newalloc;
   }
   using iterator = T*;
   using const_iterator = const T*;
   iterator begin()  // points to first element
   {
     if (size_v == 0)
     return nullptr;
     return &elem[0];
   }
   
   const_iterator begin() const
   {
     if (size_v == 0)
     return nullptr;
     return &elem[0];
   }
   
   iterator end()  // points to one beyond the last element
   {
     if (size_v == 0)
     return nullptr;
     return &elem[size_v];
   }

   const_iterator end() const
   {
     if (size_v == 0)
     return nullptr;
     return &elem[size_v];
   }

   iterator insert(iterator p, const T& val) // insert a new element val before p
   {
     int index = p - begin();
     if (size() == capacity())
     reserve(size()==0 ? 8 : 2*size());	 // make sure we have space
     ++size_v;
     iterator pp = begin() + index;  // the place to put value
     for (iterator pos=end()-1; pos!=pp; --pos)
     *pos = *(pos-1);  // copy element one position to the right
     *(begin() + index) = val; // insert value
     return pp;
   }

   iterator erase(iterator p)	// remove element pointed to by p
   //Changed to void return type; previously was attempting to deallocate
   //the last index of the vector "delete (end()-1)=0", and was changed
   //to *(end()-1) = 0, to reiniitalise the element to 0;
   {
     if (p == end()) return p;
     for (iterator pos=p+1; pos!=end(); ++pos)
     *(pos-1) = *pos;	// copy element one position to the left
     *(end()-1) = 0;
     --size_v;
     return p;
   }
};
}
#endif /* VECTOR_H_ */
