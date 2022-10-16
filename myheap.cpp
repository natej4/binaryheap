#include "BinaryHeap.h"
#include <iostream>

using namespace std;


int main()
{
  BinaryHeap<char> PQ(50);
  

  for (char c='A'; c<='J'; c++)
  {
    PQ.insert(c);
    
  }

  
  PQ.deleteMin();
  PQ.printLtSubtree();
  cout <<endl;
  cout << PQ.Height() << endl;
  cout << PQ.findMax() << endl;

}