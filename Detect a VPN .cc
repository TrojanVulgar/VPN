//CesarVersatti
#include "stdafx.h"

#using <mscorlib.dll>
#using <System.dll>

using namespace System;
using namespace System::Diagnostics;
using namespace System::ComponentModel;

int main() {
    System::String ^procName = "dsNetworkConnect";

    array<System::Diagnostics::Process^>^matches =
        System::Diagnostics::Process::GetProcessesByName(procName);

    if (matches->Length > 0)
        System::Console::WriteLine("Process " + matches[0]->ProcessName + 
           " found - do something");
    else
        System::Console::WriteLine("Process not found, do something else.");
    System::Console::ReadKey();
}