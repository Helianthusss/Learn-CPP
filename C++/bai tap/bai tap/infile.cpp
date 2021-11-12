#include<iostream>
using namespace std;

void input(ListP *pr, int &n, int &timeOUT) {
    timeOUT = 0;
    cin >> n;
    pr = new process[n];
    for (int i = 0; i < n; i++) {
        cin >> pr[i].name;
        cin >> pr[i].timeRL;
        cin >> pr[i].timeCPU;
        if (timeOUT < pr[i].timeRL)
            timeOUT = pr[i].timeRL + pr[i].timeCPU;
        else
            timeOUT += pr[i].timeCPU;
        pr[i].index = i;
    }
}
void output_FIFO(ListP pr, int n, int timeOUT) {
    cout << "FIFO" << endl << endl << "PROCESS" << endl << endl;
    cout << "Name" << setw(10) << "TimeRL" << setw(10) << "TimeCPU" << setw(10)
            << "Priority" << setw(10) << "TimeIN" << setw(10) << "TimeOUT"
            << setw(10) << "Timewait" << setw(10) << "Timesave" << endl;
    for (int i = 0; i < n; i++)
        cout << pr[i].name << setw(10) << pr[i].timeRL << setw(10)
                << pr[i].timeCPU << setw(10)
                << pr[i].timeIN << setw(10) << pr[i].timeOUT << setw(10)
                << pr[i].timewait << setw(10) << pr[i].timesave << endl;
}