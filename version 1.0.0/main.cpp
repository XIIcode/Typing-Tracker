#include <iostream>
#include <string>
#include <chrono>
#include <iomanip>
using namespace std;
int main()
{
    chrono::time_point < chrono :: system_clock > start_time , end_time;
    string stage_1 = "All good and working very well";
    cout << "Welcome to type speed tracker..." << endl;
    cout << "Type the following string to start \n" << quoted(stage_1) << endl;
    string entry = "";
    start_time = chrono::system_clock::now();
    getline(cin, entry);
    end_time = chrono::system_clock::now();
    chrono::duration<double> elapsed_seconds = end_time - start_time;
    cout << "Time taken : " << elapsed_seconds.count() << " seconds"<< endl;
}