#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    int priority[n], burstTime[n], process[n];

    cout << "Enter Burst Time and Priority for each process:\n";
    for(int i = 0; i < n; i++) {
        cout << "Process " << i+1 << " Burst Time: ";
        cin >> burstTime[i];
        cout << "Process " << i+1 << " Priority: ";
        cin >> priority[i];
        process[i] = i+1;
    }

    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(priority[i] > priority[j]) {
                swap(priority[i], priority[j]);
                swap(burstTime[i], burstTime[j]);
                swap(process[i], process[j]);
            }
        }
    }

    cout << "\nExecution Order:\n";
    for(int i = 0; i < n; i++) {
        cout << "Process " << process[i] << " (Priority: " << priority[i] << ")\n";
    }

    return 0;
}