//
// Created by Andreas.ZUNZER on 2022.04.25..
//

// SubjectImpl.cpp //
#include "Subject.h"
#include "ObserverInterface.h"

void Subject::attach(ObserverInterface* observer)
{
    observers.push_back(observer);
}

void Subject::detach(ObserverInterface *observer)
{
    observers.remove(observer);
}

void Subject::notify()
{
    list<ObserverInterface*>::iterator iter = observers.begin();
    for ( ; iter != observers.end(); iter++ )
    {
        (*iter)->update();

    }
}