#include<bits/stdc++.h>
using namespace std;

//Define the structs Workshops and Available_Workshops
struct Workshop
{
 int start_time;
 int duration;
 int end_time;
};

struct Available_Workshops
{
 int n;
 Workshop ws_array[];
};

//Implement the functions initialize and CalculateMaxWorkshops
Available_Workshops* initialize (int start_time[], int duration[], int n)
{
 Available_Workshops* aws = new Available_Workshops;
 aws->n = n;

 for(int i = 0; i < n; ++i)
 {
   aws->ws_array[i].start_time = start_time[i];
   aws->ws_array[i].end_time = duration[i];
   aws->ws_array[i].end_time = start_time[i] + duration[i];
 }

 return aws;
}

int CalculateMaxWorkshops(Available_Workshops* ptr)
{
 int num_ws = 1;
 int ws_A = ptr->ws_array[0].end_time;

 for(int i = 1; i < ptr->n; ++i)
 {
   int ws_B = ptr->ws_array[i].start_time;

   /*cout << "end of ws #" << i << " is " << ptr->ws_array[i-1].end_time
   << " and begin of ws #" << i + 1 << " is "
   << ptr->ws_array[i].start_time << endl;*/

   if(ws_A <= ws_B)
   {
     num_ws++;
     ws_A = ptr->ws_array[i].end_time;
     //cout << "can attend ws #" << i << endl;
   }
   /*else
   {
     cout << "can't attend ws #" << i << endl;
   }*/
 }
 return num_ws;
}


int main(int argc, char *argv[])
{
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++)
    {
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
