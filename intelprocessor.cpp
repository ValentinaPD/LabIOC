#include "intelprocessor.h"

IntelProcessor::IntelProcessor(double _speed, std::string _version)
{
    speed = _speed;
    //type = _type;
    version = _version;
}
std::string IntelProcessor::GetInfoProcessor() const
{
    return "Intel Processor. Version: " + version + ". Type: " + ". Speed: ";
}
