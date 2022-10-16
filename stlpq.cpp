#include <iostream>
#include <queue>

using namespace std;

void populate(priority_queue<string>& pq);
void print(priority_queue<string>& pq);

int main(){
  
  priority_queue<string> pq;

  populate(pq);
  //cout << pq.top() << endl;
  print(pq);

return 0;
}

void populate(priority_queue<string>& pq)
{
  pq.push("James");
  pq.push("Dean");
  pq.push("Shinji");
  pq.push("Bob");
  pq.push("Carter");
  pq.push("Alexandra");
  pq.push("Bella");
  pq.push("Charlotte");
  pq.push("Sarah");
  pq.push("Maria");
}

void print(priority_queue<string>& pq)
{
  while (!pq.empty() )
  {
    cout << pq.top() << endl;
    pq.pop();
  }
}