#include "processor.h"

//Processor::Processor(){

//}
IntelProcessor::IntelProcessor(){

}
AmdProcessor::AmdProcessor(){

}
void AmdProcessor::Set(double _speed, unsigned int _type ,const std::string& _version)
{
    speed = _speed;
    type = _type;
    version = _version;
}
std::string AmdProcessor::GetInfo() const
{
    return "Amd Processor. Version: " + version + ". Type: "+ processor_type[type] + ". Speed: " + std::to_string(speed);
}

void IntelProcessor::Set(double _speed, unsigned int _type ,const std::string& _version)
{
    speed = _speed;
    type = _type;
    version = _version;
}
std::string IntelProcessor::GetInfo() const
{
    return "Intel Processor. Version: " + version + ". Type: "+processor_type[type] + ". Speed: " + std::to_string(speed);
}
