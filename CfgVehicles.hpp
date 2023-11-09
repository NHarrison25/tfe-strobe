class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class aceax_ingame_gear
			{
				class tfe_ir_strobe
				{
					displayName = "IR Strobe";
					condition = "[_player] call tfe_strobe_fnc_hasStrobe";
					statement = "";
					class tfe_ir_strobe_off
					{
						condition = "_player call tfe_strobe_fnc_checkStrobe != 0";
						displayName = "Off";
						statement = "[_player, 0] call tfe_strobe_fnc_toggleStrobe";
					};
					class tfe_ir_strobe_steady
					{
						condition = "_player call tfe_strobe_fnc_checkStrobe != 1";
						displayName = "Steady";
						statement = "[_player, 1] call tfe_strobe_fnc_toggleStrobe";
					};
					class tfe_ir_strobe_pulse
					{
						condition = "_player call tfe_strobe_fnc_checkStrobe != 2";
						displayName = "Pulse";
						statement = "[_player, 2] call tfe_strobe_fnc_toggleStrobe";
					};
				};
			};
		};
	};
	class ACE_IR_Strobe_Effect
	{
		class NVGMarker;
	};
	class tfe_strobe_pulse: ACE_IR_Strobe_Effect
	{
		class NVGMarker: NVGMarker {
			brightness = 0.30;
			ambient[] = {0.0005, 0.0005, 0.0005};
			diffuse[] = {0.001, 0.001, 0.001};
		};
	};
	class tfe_strobe_steady: ACE_IR_Strobe_Effect
	{
		class NVGMarker: NVGMarker {
			brightness = 0.30;
			ambient[] = {0.00025, 0.00025, 0.00025};
			diffuse[] = {0.001, 0.001, 0.001};
			blinking = 0;
			blinkingStartsOn = 0;
		};
	};
};
