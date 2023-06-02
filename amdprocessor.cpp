#include "amdprocessor.h"

AmdProcessor::AmdProcessor(double _speed, unsigned int _type ,const std::string& _version)
{
    speed = _speed;
    type = _type;
    version = _version;
}
std::string AmdProcessor::GetInfoProcessor() const
{
    return "Amd Processor. Version: " + version + ". Type: "+ processor_type[type] + ". Speed: " + std::to_string(speed);
}
