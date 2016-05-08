// implementing Ciurculer Buffer
// Lets have fun implementing it!

#ifndef CircullerBuffer_h
#define CircullerBuffer_h

#include<iostream>
using namespace std;
template <class T>

class CircullerBuffer
{
  T* CB; 
  int counter;
  int currentPos;
  int siz;
  static const int Init_SIZE = 3;

  public:
  CircullerBuffer(int = Init_SIZE);
  void addElement(T);
  void getArrayInRecentOrder() const;
  void display() const;
  ~CircullerBuffer();
};

template <class T>
CircullerBuffer<T>::CircullerBuffer(int init_siz)
{
  siz = init_siz;
  counter = 0;
  currentPos = 0;
  CB = new T[siz];
}

template <class T>
void CircullerBuffer<T>::addElement(T element)
{
  currentPos = counter % siz;
  CB[currentPos] = element;
  counter++;
}

template <class T>
void CircullerBuffer<T>::display() const
{
  cout << "OUPUT in REGULER ORDER! { ";
  for(int i = 0; i < siz && i < counter; i++)
  {
    cout << CB[i] << " ";
  }
  cout << "}"<< endl;
}

template <class T>
void CircullerBuffer<T>::getArrayInRecentOrder() const
{
  cout << "OUTPUT in RECENT order! { ";
  int tempCurrentPos = currentPos;
  for(int i = 0; i < siz && i < counter; i++)
  {
    cout << CB[tempCurrentPos] << " ";
    tempCurrentPos--; 
    if(tempCurrentPos == -1) tempCurrentPos = siz -1;
  }
  cout << "}" << endl;
}

template <class T>
CircullerBuffer<T>::~CircullerBuffer()
{
  delete [] CB; 
}
#endif
