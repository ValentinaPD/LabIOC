#include "amdprocessor.h"

AmdProcessor::AmdProcessor(double _speed, std::string _version)
{
    speed = _speed;
    //type = _type;
    version = _version;
}
std::string AmdProcessor::GetInfoProcessor() const
{
    return "Amd Processor. Version: " + version + ". Type: " + ". Speed: ";
}
