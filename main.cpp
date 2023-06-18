#include <QCoreApplication>
#include <processor.h>
#include <computer.h>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    AmdProcessor* pro = new AmdProcessor(12.0, ProcessorType::x64,"78");
    Computer comp(pro);
    std::cout << comp.GetProcessorInfo()<<std::endl;
    return a.exec();
}
