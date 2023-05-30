#include "computer.h"

Computer::Computer(Processor* _processor)
{
    processor = _processor;
}
std::string Computer::GetProcessorInfo()
{
    return processor->GetInfoProcessor();
}
