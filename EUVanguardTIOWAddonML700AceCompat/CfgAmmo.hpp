class CfgAmmo
{
    class Default;
	class BulletBase;
	class ammo_Penetrator_Base;

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
		submunitionAmmo="HighDensityM36KantRifle_LasBolt_Penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=820;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		timetolive=6;
		typicalSpeed=10000;
		deflecting=0;
		explosive=0;
		fuseDistance=0;
		caliber=1.6;
		explosionEffects="Lasbeam_flameExplosion";
		model="\A3\weapons_f\empty";
		effectFly="Lasbeam_flametrail";
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
	class HighDensityM36KantRifle_LasBolt_Penetrator: ammo_Penetrator_Base
	{
		caliber=0.75;
		warheadName="AP";
		hit=20;
		timeToLive=0.5;
		deflecting=0;
		deflectionDirDistribution=0;
		penetrationDirDistribution=0;
		deflectionSlowDown=0.25;
		model="\A3\weapons_f\empty";
		class HitEffects
		{
			Hit_Foliage_green="ImpactLeavesGreen";
			Hit_Foliage_Dead="ImpactLeavesDead";
			Hit_Foliage_Green_big="ImpactLeavesGreenBig";
			Hit_Foliage_Palm="ImpactLeavesPalm";
			Hit_Foliage_Pine="ImpactLeavesPine";
			hitFoliage="ImpactLeaves";
			hitGlass="ImpactGlass";
			hitGlassArmored="ImpactGlassThin";
			hitWood="ImpactWood";
			hitMetal="ImpactMetal";
			hitMetalPlate="ImpactMetal";
			hitBuilding="ImpactPlaster";
			hitPlastic="ImpactPlastic";
			hitRubber="ImpactRubber";
			hitTyre="ImpactTyre";
			hitConcrete="ImpactConcrete";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="ImpactEffectsSmall";
			hitGroundRed="ImpactEffectsRed";
			hitGroundHard="ImpactEffectsHardGround";
			hitWater="ImpactEffectsWater";
			hitVirtual="ImpactMetal";
		};
	};
};