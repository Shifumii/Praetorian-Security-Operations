/*
Function name:MRH_fnc_MilsimTools_ZeusModules_
Author: Mr H.
Description:
Return value:
Public:
Parameters:
Example(s):
call MRH_fnc_MilsimTools_ZeusModules_;
*/
#include "MRH_C_Path.hpp"
//uncomment the following for funcs called by modules
#include "MRH_MODULE_FUNC_MACROS_INC.sqf"
_unit = attachedTo _logic;




createDialog "MRHDataCreator";
_display = findDisplay 220119;
_display setVariable ["MRH_ZeusModules_displayparams",[_logic,_unit]];