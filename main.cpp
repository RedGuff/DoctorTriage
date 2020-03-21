#include <iostream>
#include "Patient.h"
#include <fstream>
#include <time.h>
#include <chrono>
using namespace std;

// Fabrique des patients au hasard.
// Demande de choisir.
// Enregistre tout, avec l'heure.
// But : faire vite.

int main() {
    srand(time(NULL));       // No need for better init.
    Patient patient1, patient2;
    string file = "";
    cout << "Le nom du fichier, svp ? (Par exemple \"NOM_date.txt\") :" << endl;
    getline(cin, file);
    int nbChoix = 42;
    ofstream myfile;
    myfile.open(file, ios_base::app);
    if(!myfile.is_open()) { // Error file.
        cerr << "Unable to write in the file: " << file << "!"; // Err of file? Help needed:
        return 2; // Error file.
        }
    else { // File ok.
        std::chrono::time_point<std::chrono::system_clock> start, end;
        start = std::chrono::system_clock::now();
        end = std::chrono::system_clock::now();
        int elapsed_seconds = std::chrono::duration_cast<std::chrono::seconds>
                              (end - start).count();
        std::time_t end_time = std::chrono::system_clock::to_time_t(end);
        string choice = "";
        myfile << ctime(&end_time) << endl;
        cout << "For your choice, just type 1 or 2, and ENTER." << endl;
        for(int numChoix = 1; numChoix < nbChoix + 1; numChoix++) {
            cout << numChoix << "/" << nbChoix << endl;
// REC:time:
            patient1.display();
            cout << "" << endl;
            patient2.display();
            cout << "Do you want to take care of patient 1, and let patient 2 die (choice 1), or " << endl;
            cout << "Do you want to take care of patient 2, and let patient 1 die (choice 2)?" << endl;
            getline(cin, choice);
// REC: RecPatient1, RecPatient2, RecChoice, RecTime2
            myfile << choice << endl;
            myfile << "-----" << endl;
//    std::cout << "finished computation at " << std::ctime(&end_time)
            }
        myfile   << "elapsed time: " << elapsed_seconds << " seconds."; // BUG.
        }
    cout << "Ok !" << endl;
    return 0;
    }
