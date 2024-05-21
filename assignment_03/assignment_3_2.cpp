#include <iostream>
#include <string>

using namespace std;

int main() {
    // Array of places initialized with 13 locations, some of which are duplicates.
    string places[] = {
        "Moritzkirche", "Baggersee", "THI", "Klenzepark", "Audi Museum",
        "Reitschule", "Altes Rathaus", "Neues Schloss", "THI", "Stadttheater",
        "Baggersee", "Mailling", "Reitschule"
    };
    const int n = sizeof(places) / sizeof(places[0]);

    // Output the list of places with numbering
    cout << "List of places:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << i + 1 << ") " << places[i] << endl;
    }

    cout << "\nChecking for duplicates:" << endl;
    bool duplicatesFound = false;

    // Array to track already reported duplicates
    bool reported[n] = {false};

    // Check for duplicates
    for (int i = 0; i < n; ++i) {
        if (!reported[i]) { // If this location has not already been reported as a duplicate
            bool firstOccurrence = true;
            for (int j = i + 1; j < n; ++j) {
                if (places[i] == places[j]) {
                    if (firstOccurrence) {
                        cout << "doubly present: \"" << places[i] << "\", in line " << i + 1;
                        firstOccurrence = false;
                        duplicatesFound = true;
                    }
                    cout << " and line " << j + 1;
                    reported[j] = true; // Mark this as reported to avoid multiple reports
                }
            }
            if (!firstOccurrence) {
                cout << endl; // Finish this line of output
            }
        }
    }

    if (!duplicatesFound) {
        cout << "No duplicates found." << endl;
    }

    return 0;
}
