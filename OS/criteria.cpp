#include <iostream>
using namespace std;

void FCFS(int bt[], int n) {
    int wt = 0, tat = 0;
    for (int i = 0; i < n; i++) {
        tat += bt[i];
        wt = tat - bt[i];
        cout << "Process " << i + 1 << " - WT: " << wt << ", TAT: " << tat << endl;
    }
}

void RoundRobin(int bt[], int n, int quantum) {
    int rem_bt[n], time = 0;
    for (int i = 0; i < n; i++) rem_bt[i] = bt[i];

    while (true) {
        bool done = true;
        for (int i = 0; i < n; i++) {
            if (rem_bt[i] > 0) {
                done = false;
                int exec_time = min(rem_bt[i], quantum);
                time += exec_time;
                rem_bt[i] -= exec_time;
                cout << "Process " << i + 1 << " executed till " << time << "ms\n";
            }
        }
        if (done) break;
    }
}

int main() {
    int n, quantum;
    cout << "Enter number of processes: ";
    cin >> n;
    int bt[n];
    cout << "Enter burst times: ";
    for (int i = 0; i < n; i++) cin >> bt[i];

    cout << "Enter quantum for Round Robin: ";
    cin >> quantum;

    cout << "\nFCFS Scheduling:\n";
    FCFS(bt, n);

    cout << "\nRound Robin Scheduling:\n";
    RoundRobin(bt, n, quantum);

    return 0;
}