//
// Created by Andreas.ZUNZER on 2022.04.25..
//

// ConcreteObserverImpl.cpp //
#include <iostream>
#include "ConcreteObserver.h"

using namespace std;

// Daten anzeigen
void ConcreteObserver::update()
{
    observerState = subject->getData();
    cout << "Observer " << name << " hat neuen Zustand: " << observerState << endl;
}

void ConcreteObserver::setSubject(ConcreteSubject* obj)
{
    subject = obj;
}

ConcreteSubject* ConcreteObserver::getSubject()
{
    return subject;
}

ConcreteObserver::ConcreteObserver(ConcreteSubject* subj, string n)
{
    name = n;
    subject = subj;
}