// Main.cpp //
#include "ObserverInterface.h"
#include "ConcreteSubject.h"
#include "ConcreteObserver.h"

int main()
{

    // Das Objekt hält alle Daten (=notfier = subject)
    ConcreteSubject* subj = new ConcreteSubject();

    ObserverInterface* obs1 = new ConcreteObserver(subj,"A");
    ObserverInterface* obs2 = new ConcreteObserver(subj,"B");

    // Observer(=views) an Subjekt anhängen (attachen)
    subj->attach(obs1);
    subj->attach(obs2);

    // Daten ändern und Observer informieren (notify)
    subj->setData("TestData");
    subj->notify();

    // Daten ändern und Observer informieren (notify)
    subj->setData("TestData 1111111");
    subj->notify();

    // Daten ändern und Observer informieren (notify)
    subj->setData("TestData 222222222222");
    subj->notify();

    /*
     Ausgabe:
     Observer A hat neuen Zustand: TestData
     Observer B hat neuen Zustand: TestData
    */

    //Halli Hallo

    return 0;

}