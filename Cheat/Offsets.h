#pragma once
DWORD64 automatic[]{ 2112891776, 2112840512,2112841856  };

DWORD64 semiautomatic[]{ 2112840384, 2112122432, 2112122048, 2112067792, 1802077840, 2112067936, 2112754144, 2112840512,2112834752,2112841856,2112086080,2112247728,2112842048,2112068080,2112067792,2112670016,
	

};

DWORD64 meele[]{ 
	-1978999529, 1602646136, -194509282, -1966748496, 1326180354, 1540934679
};
//nopatch 884424049(compound), 
DWORD64 bow = 1802482880;

#define oGameObjectManager 0x17A6AD8
#define oBaseNetworkable 0x2815dd8

//class BasePlayer
#define oPlayerModel 0x490 //0x520  public PlayerModel playerModel; // 0x490
#define oPlayerFlags 0x5B8 //0x480  public BasePlayer.PlayerFlags playerFlags; // 0x480
#define oPlayerName 0x620 //0x4E8   protected string _displayName; // 0x4E8
#define oPlayerHealth 0x1F4 //0x1F4 private float _health; // 0x1F4
#define olastSentTickTime 0x60C //0x60C �� �����
#define oClientTeam 0x500 // 0x5B0 public PlayerTeam clientTeam; // 0x5B0
#define oLifestate 0x1EC // 0x1EC public BaseCombatEntity.LifeState lifestate; // 0x1EC
#define oSteamID 0x610 // 0x4D8 public ulong userID; // 0x4D8
#define oPlayerInput 0x5E0// 0x4A8 public PlayerInput input; // 0x4A8
#define oPlayerInventory 0x5C8 //0x490 public PlayerInventory inventory; // 0x490
#define oActiveUID 0x530// 0x5B8 private float lastReceivedTeamTime; // 0x5B8
#define oFrozen 0x498// 0x528 public bool Frozen; // 0x528
#define oPlayerMovement 0x5E8// 0x4B0 public BaseMovement movement; // 0x4B0
#define oWaterBonus 0x644// 0x50C public float clothingWaterSpeedBonus; // 0x50C
#define oNoSway 0x648 //0x510 public float clothingAccuracyBonus; // 0x510
#define oNoBlockAiming 0x63C //0x504 public bool clothingBlocksAiming; // 0x504
#define oSpeedReduction 0x640// 0x508 public float clothingMoveSpeedReduction; // 0x508

#define oHeld 0x98 //private EntityRef heldEntity

//BaseProjectile
#define oAuto 0x270 //public bool automatic;
#define oFastReload 0x2A8 //0x280 bool fractionalReload
#define oDistance 0x268 // public float distanceScale
#define oprojectileVelocityScale 0x26C //public float projectileVelocityScale
//RecoilProperties
#define oRecoilMinYaw 0x18 //public float recoilYawMin;
#define oRecoilMaxYaw 0x1C //public float recoilYawMax;
#define oRecoilMinPitch 0x20 //public float recoilPitchMin;
#define oRecoilMaxPitch 0x24 //public float recoilPitchMax;

#define oArrowBack 0x344 //private float arrowBack;
#define oTriggerReady 0x340 // protected bool attackReady;