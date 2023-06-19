#include <QCoreApplication>
#include <processor.h>
#include <computer.h>
#include <iostream>
#include <ioccontainer.h>
using namespace std;

int IOCContainer::s_nextTypeId = 115094801;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    IOCContainer injector;

    injector.RegisterInstance<Processor, AmdProcessor>();
    auto processor = injector.GetObject<Processor>();
    processor->Set(3.1,ProcessorType::x64,"78");
    Computer computer(processor.get());
    cout<<computer.GetProcessorInfo()<<endl;


    injector.RegisterInstance<Processor, IntelProcessor>();
    auto processor1 = injector.GetObject<Processor>();
    processor1->Set(3.1,ProcessorType::x64,"78");
    Computer computer1(processor1.get());
    cout<<computer1.GetProcessorInfo()<<endl;
    return a.exec();
}
