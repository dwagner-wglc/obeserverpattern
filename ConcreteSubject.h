//
// Created by Andreas.ZUNZER on 2022.04.25..
//

#ifndef OBSERVERPROJECT_CONCRETESUBJECT_H
#define OBSERVERPROJECT_CONCRETESUBJECT_H

// ConcreteSubject.h //
#include <string>
#include "Subject.h"

using namespace std;

class ConcreteSubject : public Subject
{

private:
    string data;

public:
    void setData(string _data) { data = _data; }
    string getData() { return data; }
    ConcreteSubject() : Subject() {}
};

#endif //OBSERVERPROJECT_CONCRETESUBJECT_H
