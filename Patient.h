
#ifndef DEF_PATIENT
#define DEF_PATIENT

#include <string>

class Patient
{
    public:
 Patient();
    void display();
//    void rec(string file= "log.txt");
    void rec();

    private:
     // m_ car variable membre : https://openclassrooms.com/fr/courses/1894236-programmez-avec-le-langage-c/1897344-creez-les-classes-partie-1-2
        int m_age;
        int m_comorbidite;
        int m_intelligence;
        int m_fanatism;
        int m_utility;
        char m_genre;
};

#endif
