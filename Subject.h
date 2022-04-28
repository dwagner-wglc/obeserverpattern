//
// Created by Andreas.ZUNZER on 2022.04.25..
//

#ifndef OBSERVERPROJECT_SUBJECT_H
#define OBSERVERPROJECT_SUBJECT_H

// Subject.h //
#include <list>
#include "ObserverInterface.h"

using namespace std;

class Subject
{

public:
    void attach(ObserverInterface* observer);
    void detach(ObserverInterface* observer);
    void notify();

private:
    list<ObserverInterface*> observers;

protected:
    // Durch protected-Konstruktor wird diese Klasse abstrakt
    Subject() {};

};

#endif //OBSERVERPROJECT_SUBJECT_H
