cmake_minimum_required(VERSION 3.21)
project(ObserverProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(ObserverProject main.cpp ObserverInterface.h Subject.h SubjectImpl.cpp ConcreteSubject.h ConcreteObserver.h ConcreteObserverImpl.cpp)
