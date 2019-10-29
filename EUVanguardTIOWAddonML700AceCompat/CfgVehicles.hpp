// Generated by unRap v1.06 by Kegetys

class CfgVehicles {

    //////////////////////////////////////////////////////////////////////////////////////
	//TODO: Balance out the space marines so a Lucius pattern lasgun can't one shot them//
	//////////////////////////////////////////////////////////////////////////////////////

	/*
    class ThingX;	// External class reference
	class CAManBase;	// External class reference
	
	class SoldierWB : CAManBase {
		class HeadLimits;	// External class reference
	};
	
	class TIOWSpaceMarine_Base : SoldierWB {
		class HitPoints { // Additional info can be found on the wiki https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
			 class HitFace
    {
        armor = 1;  // "Healthpoints" of this hitpoint is armor value (of hitpoint) * armor value ( coefficient of the total armor defined below for the whole object
        material = -1; // damage material (-1 means "unused")
        name = "face_hub"; // selection name from hit points LOD in object
        passThrough = 0.8; // coefficient defining how much damage will pass into total damage when this hit point is damaged
	pen = 0.4; //Mod exclusive caculation
        radius = 0.08;// size of the hit point sphere, this is how it works: https://community.bistudio.com/wiki/Arma_3_Damage_Description
        explosionShielding = 0.1; // multiplier of explosive damage (parameter: explosive > 0 in ammunition type)
        minimalHit = 0.01; // minimal damage value that can be applied (based on armor value), damage below this threshold is ignored
    };
    class HitNeck: HitFace
    {
        armor = 1;
        material = -1;
        name = "neck";
        passThrough = 0.8;
	pen = 0.4;
        radius = 0.1;
        explosionShielding = 0.5;
        minimalHit = 0.01;
    };
    class HitHead: HitNeck
    {
        armor = 1;
        material = -1;
        name = "head";
        passThrough = 0.8;
	pen = 0.4;
        radius = 0.2;
        explosionShielding = 0.5;
        minimalHit = 0.01;
        depends = "HitFace max HitNeck";
    };
    class HitPelvis: HitHead
    {
        armor = 6;
        material = -1;
        name = "pelvis";
        passThrough = 0.8;
	pen = 0.4;
        radius = 0.24;
        explosionShielding = 1;
        visual = "injury_body";
        minimalHit = 0.01;
        depends = "0";
    };
    class HitAbdomen: HitPelvis
    {
        armor = 1;
        material = -1;
        name = "spine1";
        passThrough = 0.8;
	pen = 0.4;
        radius = 0.16;
        explosionShielding = 1;
        visual = "injury_body";
        minimalHit = 0.01;
    };
    class HitDiaphragm: HitAbdomen
    {
        armor = 1;
        material = -1;
        name = "spine2";
        passThrough = 0.8;
	pen = 0.4;
        radius = 0.18;
        explosionShielding = 6;
        visual = "injury_body";
        minimalHit = 0.01;
    };
    class HitChest: HitDiaphragm
    {
        armor = 1;
        material = -1;
        name = "spine3";
        passThrough = 0.8;
	pen = 0.4;
        radius = 0.18;
        explosionShielding = 6;
        visual = "injury_body";
        minimalHit = 0.01;
    };
    class HitBody: HitChest
    {
        armor = 1000;
        material = -1;
        name = "body";
        passThrough = 1;
	pen = 0.4;
        radius = 0;
        explosionShielding = 6;
        visual = "injury_body";
        minimalHit = 0.01;
        depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
    };
    class HitArms: HitBody
    {
        armor = 3;
        material = -1;
        name = "arms";
        passThrough = 1;
	pen = 0.4;
        radius = 0.1;
        explosionShielding = 1;
        visual = "injury_hands";
        minimalHit = 0.01;
        depends = "0";
    };
    class HitHands: HitArms
    {
        armor = 3;
        material = -1;
        name = "hands";
        passThrough = 1;
	pen = 0.4;
        radius = 0.1;
        explosionShielding = 1;
        visual = "injury_hands";
        minimalHit = 0.01;
        depends = "HitArms";
    };
    class HitLegs: HitHands
    {
        armor = 3;
        material = -1;
        name = "legs";
        passThrough = 1;
	pen = 0.4;
        radius = 0.14;
        explosionShielding = 1;
        visual = "injury_legs";
        minimalHit = 0.01;
        depends = "0";
    };
    class Incapacitated: HitLegs
    {
        armor = 1000;
        material = -1;
        name = "body";
        passThrough = 1;
	pen = 0.4;
        radius = 0;
        explosionShielding = 1;
        visual = "";
        minimalHit = 0;
        depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
    };
    class HitLeftArm
    {
        armor = 1;
        material = -1;
        name = "hand_l";
        passThrough = 1;
	pen = 0.4;
        radius = 0.08;
        explosionShielding = 1;
        visual = "injury_hands";
        minimalHit = 0.01;
    };
    class HitRightArm: HitLeftArm
    {
        name = "hand_r";
    };
    class HitLeftLeg
    {
        armor = 1;
        material = -1;
        name = "leg_l";
        passThrough = 1;
	pen = 0.4;
        radius = 0.1;
        explosionShielding = 1;
        visual = "injury_legs";
        minimalHit = 0.01;
    };
    
    class HitRightLeg: HitLeftLeg
    {
        name = "leg_r";
    };
		};
		armor = 40;
		armorStructural = 10.0;
		explosionShielding = 10.25;
		class EventHandlers;	// External class reference
		weapons[] = {"Throw", "Put"};
		respawnweapons[] = {"Throw", "Put"};
		Items[] = {};
		RespawnItems[] = {};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		uniformAccessories[] = {};
	};
    */
    class B_Soldier_F;
	class Strategic;
	class ReammoBox: Strategic
	{
	};
	class Bag_Base: ReammoBox
	{
	};
	class B_AssaultPack_Base: Bag_Base
	{
	};
	class B_AssaultPack_rgr: B_AssaultPack_Base
	{
	};
    
    class TIOW_CadBackpack: B_AssaultPack_Base
	{
		author="1st Legion";
		scope=2;
		picture="\CadFoot\Icon\Backpack_ca.paa";
		displayName="[Cadian] Infantry Backpack";
		model="\CadFoot\Model\Backpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"CadFoot\Data\Textures\Backpack_co.paa"
		};
		class TransportMagazines
		{
			class _xx_M36KantRifle_mag
			{
				magazine="M36KantRifle_mag";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=4;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
		};
	};
    class TIOW_CadMedicaeBackpack: B_AssaultPack_Base
	{
		author="1st Legion";
		scope=2;
        maximumLoad = 240;
		picture="\CadFoot\Icon\Backpack_ca.paa";
		displayName="[Cadian] Medicae Backpack";
		model="\CadFoot\Model\Backpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"CadFoot\Data\Textures\MedicaeBackpack_co.paa"
		};
		class TransportMagazines
		{
			class _xx_M36KantRifle_mag
			{
				magazine="M36KantRifle_mag";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
	};

	class TIOW_CadMedicaeBackpack_Winter: B_AssaultPack_Base
	{
		author="1st Legion";
		scope=2;
        maximumLoad = 240;
		picture="\CadFoot\Icon\Backpack_ca.paa";
		displayName="[Cadian] Medicae Backpack (Winter Camo)";
		model="\CadFoot\Model\Backpack.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"CadFoot\Data\Textures\MedicaeBackpackWinter_co.paa"
		};
		class TransportMagazines
		{
			class _xx_M36KantRifle_mag
			{
				magazine="M36KantRifle_mag";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=2;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
	};

    class TIOW_CadATBackpack: TIOW_CadBackpack
	{
		displayName="[Cadian] Infantry AT Backpack";
	    maximumLoad = 320;
	};
};