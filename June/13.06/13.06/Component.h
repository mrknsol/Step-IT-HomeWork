#pragma once
#include <iostream>
using namespace std;



class Component {
public:
    string make;
    string model;

    Component() = default;
    Component(string& make, string& model);

    void info() const;


};

