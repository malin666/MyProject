/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: malin
 *
 * Created on January 30, 2018, 10:38 AM
 */

#include <QApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    cout << "works" << endl;
    // create and show your widgets here

    return app.exec();
}
