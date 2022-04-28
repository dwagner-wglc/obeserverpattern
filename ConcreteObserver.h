//
// Created by Andreas.ZUNZER on 2022.04.25..
//

#ifndef OBSERVERPROJECT_CONCRETEOBSERVER_H
#define OBSERVERPROJECT_CONCRETEOBSERVER_H

// ConcreteObserver.h //
#include <string>
#include "ObserverInterface.h"
#include "ConcreteSubject.h"

using namespace std;
class ConcreteObserver : public ObserverInterface
{

private:
    string name;
    string observerState;
    ConcreteSubject* subject; // Dieses Objekt hält die Daten (=notifier)

public:
    void update();
    void setSubject(ConcreteSubject* subj);
    ConcreteSubject* getSubject();
    ConcreteObserver(ConcreteSubject* subj, string name);

};

#endif //OBSERVERPROJECT_CONCRETEOBSERVER_H
