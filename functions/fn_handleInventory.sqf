#include "..\script_component.hpp"

params ["_unit"];

if (!(_unit call tfe_strobe_fnc_hasStrobe)) exitWith { [_unit, true] call tfe_strobe_fnc_deleteStrobe };
