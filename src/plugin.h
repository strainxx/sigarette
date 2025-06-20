#pragma once

#include "pluginmain.h"
#include <string>
#include <sstream>
#include <iomanip>
#include <Zydis/Zydis.h>

#define SEARCH_SIG 1
#define CREATE_SIG 2


//functions
bool pluginInit(PLUG_INITSTRUCT* initStruct);
void pluginStop();
void pluginSetup();


std::uint8_t* PatternScan(duint,std::vector<std::uint8_t>, const char*);

std::uint8_t* SearchSig(const char* sig);
std::string CreateSig();