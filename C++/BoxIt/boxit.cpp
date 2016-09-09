#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int BoxesCreated, BoxesDestroyed;



//Implement the class Box
class Box
{
private: //l,b,h are integers representing the dimensions of the box
  int m_l;
  int m_b;
  int m_h;

public:
  //empty constructor
  Box()
  {m_l = 0; m_b = 0; m_h = 0; cout<<"emptyconst"<<endl; BoxesCreated++;}

  //argumented constructor
  Box(int l, int b, int h) : m_l{l}, m_b{b}, m_h{h}
  {
    cout << "argconst" << endl;
    BoxesCreated++;
  }

  //copy constructor 1
  Box(const Box &box2) : m_l{box2.m_l}, m_b{box2.m_b}, m_h{box2.m_h}
  {
    cout << "copy1const" << endl;
    BoxesCreated++;
  }

  //copy constructor 2
  Box operator= (const Box &box2) //WHY IS THIS NOT VOID?!!??!?!
  {
    m_l = box2.m_l;
    m_b = box2.m_b;
    m_h = box2.m_h;
    cout << "copy2const" << endl;
    BoxesCreated++;
  }

  //destructor
  ~Box(){BoxesDestroyed++;}

  int getLength() {return m_l;}
  int getBreadth() {return m_b;}
  int getHeight() {return m_h;}

  long long CalculateVolume() {return static_cast<long long>(m_l) * m_b * m_h;}

  bool operator< (Box& box2) //removed const
  {
    if(m_l < box2.m_l)
      return true;
    if(m_b < box2.m_b)
      return true;
    if(m_h < box2.m_h)
      return true;
    else
      return false;
  }

  friend ostream& operator<<(ostream& out, const Box &B)
  {
    //cout << m_l << ' ' << m_b << ' ' << m_h << endl;
    cout << B.m_l << ' ' << B.m_b << ' ' << B.m_h;
    return out;
  }

};



void check2()
{
  int n;
  cin>>n;
  Box temp;
  for(int i=0;i<n;i++)
  {
    int type;
    cin>>type;
    if(type == 1)
    {
      cout<<temp<<endl;
    }
    if(type == 2)
    {
      int l,b,h;
      cin>>l>>b>>h;
      Box NewBox(l,b,h);
      temp=NewBox;
      cout<<temp<<endl;
    }
    if(type==3)
    {
      int l,b,h;
      cin>>l>>b>>h;
      Box NewBox(l,b,h);
      if(NewBox<temp)
      {
          cout<<"Lesser"<<endl;
      }
      else
      {
        cout<<"Greater"<<endl;
      }
    }
    if(type==4)
    {
      cout<<temp.CalculateVolume()<<endl;
    }
    if(type==5)
    {
      Box NewBox(temp);
      cout<<NewBox<<endl;
    }
  }
}



int main()
{
    BoxesCreated = 0;
    BoxesDestroyed = 0;
    check2();
    cout<<"Boxes Created : "<<BoxesCreated<<endl<<"Boxes Destroyed : "<<BoxesDestroyed<<endl;
}
