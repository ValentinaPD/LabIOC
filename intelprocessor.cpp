#include "intelprocessor.h"
#include <cmath>

IntelProcessor::IntelProcessor(double _speed, unsigned int _type ,const std::string& _version)
{
    speed = _speed;
    type = _type;
    version = _version;
}
std::string IntelProcessor::GetInfoProcessor() const
{
    return "Intel Processor. Version: " + version + ". Type: "+processor_type[type] + ". Speed: " + std::to_string(speed);
}
