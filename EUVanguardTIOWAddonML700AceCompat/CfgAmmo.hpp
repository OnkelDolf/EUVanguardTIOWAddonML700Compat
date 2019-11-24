class CfgAmmo
{
    class Default;
	class BulletBase;
	class RocketBase;
	class ammo_Penetrator_Base;

	class TIOW_MLAT: RocketBase
	{
		model="\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7.p3d";
		hit=690;
		indirectHit=3;
		indirectHitRange=1;
		explosive=0.1;
		cost=350;
		airFriction=0.085000001;
		sideAirFriction=0.085000001;
		maxSpeed=700;
		initTime=0;
		thrustTime=1;
		thrust=1600;
		fuseDistance=15;
		submunitionAmmo="TIOW_MLAT_Penetrator";
		CraterEffects="ATMissileCrater";
		explosionEffects="ATMissileExplosion";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=820;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		effectsMissileInit="";
		effectsMissile="EmptyEffect";
		simulationStep=0.02;
		airLock=0;
		aiAmmoUsageFlags="128 + 512";
		irLock=0;
		timeToLive=10;
		maneuvrability=0;
		allowAgainstInfantry=0;
		caliber=0;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",
			2.5118899,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",
			2.5118899,
			1,
			1800
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",
			2.5118899,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.34,
			"soundHit2",
			0.33000001,
			"soundHit3",
			0.33000001
		};
		class CamShakeExplode
		{
			power="(35*0.2)";
			duration="((round (35^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((4 + 35^0.5)*8)";
		};
		class CamShakeHit
		{
			power=85;
			duration="((round (85^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(15^0.25)";
			duration="((round (15^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((15^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=1;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class TIOW_MLAT_Penetrator: ammo_Penetrator_Base
	{
		caliber=60;
		hit=700;
		indirectHit=12;
		indirectHitRange=2;
	};

	class HighDensityM36KantRifle_LasBolt: BulletBase
	{
		allowAgainstInfantry=1;
		hit=30;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		cost=1;
		visibleFire=8;
		audibleFire=12;
		visibleFireTime=3;
		airFriction=0;
		coefGravity=0;
		timetolive=6;
		typicalSpeed=1000;
		deflecting=0;
		explosive=0;
		fuseDistance=0;
		caliber=1.6;
		model="\a40k_wepbase\LasgunFlashes\lasbolt";
		nvgOnly=0;
		tracerStartTime=0.001;
		tracerEndTime=10;
		class CamShakeFire
		{
			power=0;
			duration=0;
			frequency=0;
			distance=0;
		};
		class CamShakePlayerFire
		{
			power=0;
			duration=0;
			frequency=0;
			distance=0;
		};
	};

	/*
	They fixed it. This is no longer needed
	class G_40mm_HE;
	class TIOW_IG_GL_Krak_ammo: G_40mm_HE
	{
		hit=330;
		indirectHit=230;
		indirectHitRange=1;
		model="\A3\weapons_f\ammo\UGL_slug";
		explosionTime=0;
		fusedistance=5;
		deflectionSlowDown=0.001;
		aiAmmoUsageFlags="512 + 128";
	};
	*/
};