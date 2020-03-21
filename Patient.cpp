#include "Patient.h"
#include <iostream>
#include <fstream>

using namespace std;
Patient::Patient(){
m_age = rand() % 110  ;
m_comorbidite = rand() % 10;
m_intelligence = rand() % 200;
m_fanatism = rand() % 10;
m_utility = rand() % 10;
m_genre = 'f';
if ((rand() %2)==0)// 0 1
{
m_genre = 'm';
}
}
void Patient::rec(){
       string file = "del.txt";
        ofstream myfile;
    myfile.open(file, ios_base::app);
    if(!myfile.is_open()) { // Error file.
        cerr << "Unable to write in the file: " << file << "!"; // Err of file? Help needed:
//        return 2; // Error file.
        }
    else { // File ok.

myfile << "Age: " << m_age << endl;
myfile << "Comorbidity: " << m_comorbidite << endl;
myfile << "Intelligence: " << m_intelligence << endl;
myfile << "Fanatism: " << m_fanatism << endl;
myfile << "Utility: " << m_utility << endl;
myfile << "Genre: " << m_genre << endl;
    }
}

void Patient::display(){
cout << "Age: " << m_age << endl;
cout << "Comorbidity: " << m_comorbidite << endl;
cout << "Intelligence: " << m_intelligence << endl;
cout << "Fanatism: " << m_fanatism << endl;
cout << "Utility: " << m_utility << endl;
cout << "Genre: " << m_genre << endl;
}
