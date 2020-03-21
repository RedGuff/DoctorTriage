#include "Patient.h"
#include <iostream>
using namespace std;
Patient::Patient(){
// m_age = 42;
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

void Patient::display(){
cout << "Age: " << m_age << endl;
cout << "Comorbidity: " << m_comorbidite << endl;
cout << "Intelligence: " << m_intelligence << endl;
cout << "Fanatism: " << m_fanatism << endl;
cout << "Utility: " << m_utility << endl;
cout << "Genre: " << m_genre << endl;
}
