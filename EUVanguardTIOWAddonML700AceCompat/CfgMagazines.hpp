class CfgMagazines
{
    class Default;
	class CA_Magazine: Default{};

	
    class HighDensityM36KantRifle_mag: CA_Magazine
	{
		scope=2;
		model="\Cadian_Weapons\Model\M36KantRifleMag.p3d";
		displayName="[Cadian] High Powered M36 Kantrael Lasrifle Powerpack";
		picture="\Cadian_Weapons\Icon\KantLasriflePowerpack_ca.paa";
		ammo="HighDensityM36KantRifle_LasBolt";
		count=25;
		initSpeed=10000;
		tracersEvery=1;
		lastRoundsTracer=999;
		descriptionShort="[Cadian] High Powered M36 Kantrael Lasrifle Powerpack";
		magazineGroup[]=
		{
			"M36KantRifle_mags"
		};
	};

	class 150RndLasLmg_mag: CA_Magazine
	{
		scope=2;
		model="\Cadian_Weapons\Model\M36KantRifleMag.p3d";
		displayName="[Vanguard] 150 Round Las-LMG Powerpack";
		picture="\Cadian_Weapons\Icon\KantLasriflePowerpack_ca.paa";
		ammo="M36KantRifle_LasBolt";
		count=150;
		mass=16;
		initSpeed=10000;
		tracersEvery=1;
		lastRoundsTracer=999;
		descriptionShort="[Vanguard] 150 Round Las-LMG Powerpack";
		magazineGroup[]=
		{
			"M36KantRifle_mags"
		};
	};

	class 200RndLasLmg_mag: CA_Magazine
	{
		scope=2;
		model="\Cadian_Weapons\Model\M36KantRifleMag.p3d";
		displayName="[Vanguard] 200 Round Las-LMG Powerpack";
		picture="\Cadian_Weapons\Icon\KantLasriflePowerpack_ca.paa";
		ammo="M36KantRifle_LasBolt";
		count=200;
		mass=24;
		initSpeed=10000;
		tracersEvery=1;
		lastRoundsTracer=999;
		descriptionShort="[Vanguard] 200 Round Las-LMG Powerpack";
		magazineGroup[]=
		{
			"M36KantRifle_mags"
		};
	};

    class TIOW_100Rnd_Stubber_mag: CA_Magazine
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="100 Round Box Magazine.";
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo="TIOW_Long825HS";
		count=100;
        mass=16;
		initSpeed=820;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="100 Round box for Lucius Pattern Heavy Stubber.";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
	class TIOW_100Rnd_Stubber_mag_Tracer: TIOW_100Rnd_Stubber_mag
	{
		tracersEvery=5;
		lastRoundsTracer=100;
		displayName="100 Round Box. Tracers";
		descriptionShort="100 Round box for Lucius Pattern Heavy Stubber. Tracers.";
		displaynameshort="100 Round Box. Tracers";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
	class TIOW_100Rnd_Stubber_amput: CA_Magazine
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="100 Round Box Magazine. Amputators";
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo="TIOW_Long825HSA";
		count=100;
        mass=16;
		initSpeed=720;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="100 Round box for Lucius Pattern Heavy Stubber. Amputators";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
	class TIOW_100Rnd_Stubber_manstop: CA_Magazine
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="100 Round Box Magazine. Man Stopper";
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo="TIOW_Long825HSMS";
		count=100;
        mass=16;
		initSpeed=920;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="100 Round box for Lucius Pattern Heavy Stubber.";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
	class TIOW_100Rnd_Stubber_expander: CA_Magazine
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="100 Round Box Magazine. Expander Rounds";
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo="TIOW_Long825HSER";
		count=100;
        mass=16;
		initSpeed=820;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="100 Round box for Lucius Pattern Heavy Stubber.";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
    class TIOW_150Rnd_Stubber_mag: CA_Magazine
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="150 Round Box Magazine.";
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo="TIOW_Long825HS";
		count=150;
        mass=24;
		initSpeed=820;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="150 Round box for Lucius Pattern Heavy Stubber.";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
	class TIOW_150Rnd_Stubber_mag_Tracer: TIOW_150Rnd_Stubber_mag
	{
		tracersEvery=5;
		lastRoundsTracer=50;
		displayName="150 Round Box. Tracers";
		descriptionShort="150 Round box for Lucius Pattern Heavy Stubber. Tracers.";
		displaynameshort="150 Round Box. Tracers";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
	class TIOW_150Rnd_Stubber_amput: CA_Magazine
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="150 Round Box Magazine. Amputators";
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo="TIOW_Long825HSA";
		count=150;
        mass=24;
		initSpeed=720;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="150 Round box for Lucius Pattern Heavy Stubber. Amputators";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
	class TIOW_150Rnd_Stubber_manstop: CA_Magazine
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="150 Round Box Magazine. Man Stopper";
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo="TIOW_Long825HSMS";
		count=150;
        mass=24;
		initSpeed=920;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="150 Round box for Lucius Pattern Heavy Stubber.";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
	class TIOW_150Rnd_Stubber_expander: CA_Magazine
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="150 Round Box Magazine. Expander Rounds";
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo="TIOW_Long825HSER";
		count=150;
        mass=24;
		initSpeed=820;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="150 Round box for Lucius Pattern Heavy Stubber.";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
};