#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, Q;
    cin >> N >> Q;
    
    // For each pigeon i, store its current "group id" (initially, pigeon i is in group i).
    vector<int> pigeonGroup(N + 1);
    // For each nest label l, store the group id that currently corresponds to that nest.
    vector<int> groupForLabel(N + 1);
    // For each group id g, store its current nest label.
    vector<int> labelForGroup(N + 1);
    
    // Initialize: pigeon i is in group i and nest i has label i.
    for (int i = 1; i <= N; i++) {
        pigeonGroup[i] = i;
        groupForLabel[i] = i;
        labelForGroup[i] = i;
    }
    
    // Process operations.
    while (Q--) {
        int op;
        cin >> op;
        if (op == 1) {
            int a, b;
            cin >> a >> b;
            // Type 1: Move pigeon a to nest b.
            // Set pigeon a's group to the group corresponding to nest b.
            pigeonGroup[a] = groupForLabel[b];
        } else if (op == 2) {
            int a, b;
            cin >> a >> b;
            // Type 2: Swap all pigeons in nest a with those in nest b.
            // Let groupA and groupB be the groups currently corresponding to nest labels a and b.
            int groupA = groupForLabel[a];
            int groupB = groupForLabel[b];
            // Swap the mapping so that nest a now corresponds to groupB and nest b to groupA.
            groupForLabel[a] = groupB;
            groupForLabel[b] = groupA;
            // Also update the label for each group.
            labelForGroup[groupA] = b;
            labelForGroup[groupB] = a;
        } else if (op == 3) {
            int a;
            cin >> a;
            // Type 3: Report the nest label of pigeon a.
            // Pigeon a is in group pigeonGroup[a]; its nest label is labelForGroup[pigeonGroup[a]].
            cout << labelForGroup[pigeonGroup[a]] << "\n";
        }
    }
    
    return 0;
}
