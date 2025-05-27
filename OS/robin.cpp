#include<iostream>
using namespace std;


struct Process {
    int id, burst_time, remaining_time;
};

void roundRobin(Process processes[], int n, int quantum) {
    int time = 0;
    bool done;
    
    do {
        done = true;
        for (int i = 0; i < n; i++) {
            if (processes[i].remaining_time > 0) {
                done = false;
                if (processes[i].remaining_time > quantum) {
                    time += quantum;
                    processes[i].remaining_time -= quantum;
                } else {
                    time += processes[i].remaining_time;
                    processes[i].remaining_time = 0;
                    cout << "Process " << processes[i].id << " finished at time " << time << endl;
                }
            }
        }
    } while (!done);
}

int main() {
    int n, quantum;
    cout << "Enter the number of processes: ";
    cin >> n;
    Process processes[n];

    for (int i = 0; i < n; i++) {
        processes[i].id = i + 1;
        cout << "Enter burst time for process " << processes[i].id << ": ";
        cin >> processes[i].burst_time;
        processes[i].remaining_time = processes[i].burst_time;
    }

    cout << "Enter time quantum: ";
    cin >> quantum;
    
    roundRobin(processes, n, quantum);
    return 0;
}