#include <QCoreApplication>
#include <processor.h>
#include <intelprocessor.h>
#include <amdprocessor.h>
#include <computer.h>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    std::cout << "=================================" << std::endl;
    IntelProcessor* pro = new IntelProcessor(12.0,"78");
    Computer comp(pro);
    std::cout << comp.GetProcessorInfo();
    return a.exec();
}
