#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    int burstTime[n], process[n];

    cout << "Enter Burst Time for each process:\n";
    for (int i = 0; i < n; i++) {
        cout << "Process " << i+1 << " Burst Time: ";
        cin >> burstTime[i];
        process[i] = i+1;
    }


    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (burstTime[i] > burstTime[j]) {
                swap(burstTime[i], burstTime[j]);
                swap(process[i], process[j]);
            }
        }
    }

    int completionTime = 0;
    cout << "\nExecution Order:\n";
    for (int i = 0; i < n; i++) {
        completionTime += burstTime[i];
        cout << "Process " << process[i] << " (Completion Time: " << completionTime << ")\n";
    }

    return 0;
}