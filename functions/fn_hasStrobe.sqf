params ["_unit"];
private _hasStrobe = getNumber (configFile >> "CfgWeapons" >> headgear _unit >> "tfe_helmet_strobe");

_hasStrobe == 1;
