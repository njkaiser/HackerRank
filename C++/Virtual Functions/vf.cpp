#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


/*MY CODE HERE*/

class Person
{
public:
	char m_name[100];
	int m_age;
	int m_ID; //should this be per subclass, since it needs to be static?
	
	virtual void getdata() {/*empty???*/}
	virtual void putdata() {/*empty???*/}
};


class Professor : public Person
{
public:
	static int m_cur_ID;
	int m_pubs;
	
	virtual void getdata()
	{
		cin >> m_name >> m_age >> m_pubs;
	}
	
	virtual void putdata()
	{
		cout << m_name << " " << m_age << " " << m_pubs << " " << m_cur_ID++ << endl;
	}
};


class Student : public Person
{
public:
	static int m_cur_ID;
	vector<int> m_marks;
	
	virtual void getdata()
	{
		cin >> m_name >> m_age;
		
		for(int i = 0; i < 6; ++i)
		{
			int mark;
			cin >> mark;
			m_marks.push_back(mark);
		}
	}
	
	virtual void putdata()
	{
		int total = 0;
		for(vector<int>::iterator it = m_marks.begin(); it != m_marks.end(); ++it)
			total += *it;
		cout << m_name << " " << m_age << " " << total << " " << m_cur_ID++ << endl;
	}
};

int Student::m_cur_ID = 1;
int Professor::m_cur_ID = 1;

/*END MY CODE*/


int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
