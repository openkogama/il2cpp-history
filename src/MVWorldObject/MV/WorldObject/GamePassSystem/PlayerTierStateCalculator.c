
/* Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierState]
   GetTierPricingState(Int32, GamePassTier) */

Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *
MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
PlayerTierStateCalculator_GetTierPricingState
          (PlayerTierStateCalculator *this,int32_t playerGamePoints,
          GamePassTier__Enum playerGamePassTier,MethodInfo *method)

{
  if ((this->fields).gamePointVelocityIsZero != 0) {
    pDVar1 = PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                       (this,playerGamePassTier,(MethodInfo *)0x0);
    return pDVar1;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__MV__Common__GamePassTier;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Enum);
  }
  source = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_8
                        ((IEnumerable *)source,
                         System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                        );
  System.Core.dll::System::Linq::Enumerable::Enumerable_Max_2
            ((IEnumerable_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_RocketType_
              *)source_00,
             unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
            );
  pDVar1 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
            );
  uVar2 = GamePassTier__Enum_Tier0;
  while( true ) {
    pPVar3 = this;
    pDVar4 = (this->fields).progressionThresholds;
    if (pDVar4 ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *)
        0x0) break;
    key = CONCAT31((int3)
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                   ,uVar2);
    pDVar5 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              &UNK_?;
    GVar6 = key;
    pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
             GamePassTier,System::Object]::
             Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                       ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar4,key,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                       );
    cVar8 = (char)(GVar6 >> 0x18);
    if (pOVar7 == (Object *)0x0) break;
    pMVar9 = pOVar7[1].monitor + (int)&pDVar4->klass;
    if ((playerGamePoints < (int)pMVar9) && ((byte)(undefined1)playerGamePassTier < (byte)uVar2)) {
      if (pDVar1 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                     *)0x0) break;
      uVar10 = 0x10;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
               GamePassTier,System::Object]::
               Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                         ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,
                          (uint)(byte)(uVar2 - GamePassTier__Enum_Tier1),
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar7 == (Object *)0x0) break;
      playerGamePoints = (int32_t)(this->fields).progressionThresholds;
      if (pOVar7[1].klass == (Object__Class *)0x0) {
        if ((Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)playerGamePoints ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        this = (PlayerTierStateCalculator *)&UNK_?;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)playerGamePoints,
                            key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        gamePointRequirementBase = pOVar7[1].monitor;
        iVar11 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_2
                          (((int)gamePointRequirementBase - (int)pMVar9) + playerGamePoints,0,
                           (MethodInfo *)0x0);
        pDVar4 = (pPVar3->fields).progressionThresholds;
        if (pDVar4 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar4,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        goldPriceRequirementBase = pOVar7[1].klass;
        pPVar12 = (PlayerTierState *)func_?();
        pOVar13 = (Object__Class *)
                 ((int)goldPriceRequirementBase -
                 (int)(((double)iVar11 / (double)(int)gamePointRequirementBase) *
                      (double)(int)goldPriceRequirementBase));
        pMVar9 = gamePointRequirementBase + -iVar11;
        tierLockState = TierLockState__Enum_PurchaseUnlock;
        pDVar1 = pDVar5;
      }
      else {
        if ((Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)playerGamePoints ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        this = (PlayerTierStateCalculator *)&UNK_?;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)playerGamePoints,
                            key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        pMVar9 = pOVar7[1].monitor;
        pDVar4 = (pPVar3->fields).progressionThresholds;
        if (pDVar4 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar4,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        gamePointRequirementBase = pOVar7[1].monitor;
        pDVar4 = (pPVar3->fields).progressionThresholds;
        if (pDVar4 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar4,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        pOVar13 = pOVar7[1].klass;
        pDVar4 = (pPVar3->fields).progressionThresholds;
        if (pDVar4 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar4,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        goldPriceRequirementBase = pOVar7[1].klass;
        pPVar12 = (PlayerTierState *)func_?();
        tierLockState = TierLockState__Enum_Locked;
        pDVar1 = pDVar5;
      }
      PlayerTierState::PlayerTierState__ctor
                (pPVar12,tierLockState,(int32_t)pMVar9,(int32_t)gamePointRequirementBase,
                 (int32_t)pOVar13,(int32_t)goldPriceRequirementBase,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::
      Object]::Dictionary_2_MV_Common_GamePassTier_System_Object__Add
                ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,key,(Object *)pPVar12,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                );
    }
    else {
      pDVar4 = (this->fields).progressionThresholds;
      if (pDVar4 ==
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *
          )0x0) break;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
               GamePassTier,System::Object]::
               Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                         ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar4,key,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar7 == (Object *)0x0) break;
      pMVar9 = pOVar7[1].monitor;
      playerGamePoints = (int32_t)(this->fields).progressionThresholds;
      if ((Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *
          )playerGamePoints ==
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *
          )0x0) break;
      this = (PlayerTierStateCalculator *)&UNK_?;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
               GamePassTier,System::Object]::
               Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                         ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)playerGamePoints,key
                          ,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar7 == (Object *)0x0) break;
      pOVar13 = pOVar7[1].klass;
      pPVar12 = (PlayerTierState *)func_?();
      PlayerTierState::PlayerTierState__ctor
                (pPVar12,TierLockState__Enum_Unlocked,0,(int32_t)pMVar9,0,(int32_t)pOVar13,
                 (MethodInfo *)0x0);
      if (pDVar1 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                     *)0x0) break;
      pMVar14 = 
      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
      ;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::
      Object]::Dictionary_2_MV_Common_GamePassTier_System_Object__Add
                ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,key,(Object *)pPVar12,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                );
      uVar10 = (undefined1)((uint)pMVar14 >> 0x18);
      cVar8 = (char)((uint)pPVar12 >> 0x18);
    }
    uVar2 = cVar8 + GamePassTier__Enum_Tier1;
    playerGamePassTier = key;
    if ((byte)uVar10 < (byte)uVar2) {
      return pDVar1;
    }
  }
  func_?(0);
  pcVar15 = (code *)swi(3);
  pDVar1 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
           (*pcVar15)();
  return pDVar1;
}


/* Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierState]
   GetTierPricingStateBasedOnUserGamePointAmount(Int32, GamePassTier) */

Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *
MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
          (PlayerTierStateCalculator *this,int32_t playerGamePoints,
          GamePassTier__Enum playerGamePassTier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__MV__Common__GamePassTier;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Enum);
  }
  source = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_8
                        ((IEnumerable *)source,
                         System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                        );
  System.Core.dll::System::Linq::Enumerable::Enumerable_Max_2
            ((IEnumerable_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_RocketType_
              *)source_00,
             unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
            );
  pDVar1 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
            );
  uVar2 = GamePassTier__Enum_Tier0;
  while( true ) {
    pPVar3 = this;
    pDVar4 = (this->fields).progressionThresholds;
    if (pDVar4 ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *)
        0x0) break;
    key = CONCAT31((int3)
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                   ,uVar2);
    pDVar5 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              &UNK_?;
    GVar6 = key;
    pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
             GamePassTier,System::Object]::
             Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                       ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar4,key,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                       );
    cVar8 = (char)(GVar6 >> 0x18);
    if (pOVar7 == (Object *)0x0) break;
    pMVar9 = pOVar7[1].monitor + (int)&pDVar4->klass;
    if ((playerGamePoints < (int)pMVar9) && ((byte)(undefined1)playerGamePassTier < (byte)uVar2)) {
      if (pDVar1 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                     *)0x0) break;
      uVar10 = 0x10;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
               GamePassTier,System::Object]::
               Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                         ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,
                          (uint)(byte)(uVar2 - GamePassTier__Enum_Tier1),
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar7 == (Object *)0x0) break;
      playerGamePoints = (int32_t)(this->fields).progressionThresholds;
      if (pOVar7[1].klass == (Object__Class *)0x0) {
        if ((Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)playerGamePoints ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        this = (PlayerTierStateCalculator *)&UNK_?;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)playerGamePoints,
                            key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        gamePointRequirementBase = pOVar7[1].monitor;
        iVar11 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_2
                          (((int)gamePointRequirementBase - (int)pMVar9) + playerGamePoints,0,
                           (MethodInfo *)0x0);
        pDVar4 = (pPVar3->fields).progressionThresholds;
        if (pDVar4 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar4,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        goldPriceRequirementBase = pOVar7[1].klass;
        pPVar12 = (PlayerTierState *)func_?();
        pOVar13 = (Object__Class *)
                 ((int)goldPriceRequirementBase -
                 (int)(((double)iVar11 / (double)(int)gamePointRequirementBase) *
                      (double)(int)goldPriceRequirementBase));
        pMVar9 = gamePointRequirementBase + -iVar11;
        tierLockState = TierLockState__Enum_PurchaseUnlock;
        pDVar1 = pDVar5;
      }
      else {
        if ((Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)playerGamePoints ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        this = (PlayerTierStateCalculator *)&UNK_?;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)playerGamePoints,
                            key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        pMVar9 = pOVar7[1].monitor;
        pDVar4 = (pPVar3->fields).progressionThresholds;
        if (pDVar4 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar4,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        gamePointRequirementBase = pOVar7[1].monitor;
        pDVar4 = (pPVar3->fields).progressionThresholds;
        if (pDVar4 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar4,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        pOVar13 = pOVar7[1].klass;
        pDVar4 = (pPVar3->fields).progressionThresholds;
        if (pDVar4 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar4,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        goldPriceRequirementBase = pOVar7[1].klass;
        pPVar12 = (PlayerTierState *)func_?();
        tierLockState = TierLockState__Enum_Locked;
        pDVar1 = pDVar5;
      }
      PlayerTierState::PlayerTierState__ctor
                (pPVar12,tierLockState,(int32_t)pMVar9,(int32_t)gamePointRequirementBase,
                 (int32_t)pOVar13,(int32_t)goldPriceRequirementBase,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::
      Object]::Dictionary_2_MV_Common_GamePassTier_System_Object__Add
                ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,key,(Object *)pPVar12,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                );
    }
    else {
      pDVar4 = (this->fields).progressionThresholds;
      if (pDVar4 ==
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *
          )0x0) break;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
               GamePassTier,System::Object]::
               Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                         ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar4,key,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar7 == (Object *)0x0) break;
      pMVar9 = pOVar7[1].monitor;
      playerGamePoints = (int32_t)(this->fields).progressionThresholds;
      if ((Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *
          )playerGamePoints ==
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *
          )0x0) break;
      this = (PlayerTierStateCalculator *)&UNK_?;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
               GamePassTier,System::Object]::
               Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                         ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)playerGamePoints,key
                          ,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar7 == (Object *)0x0) break;
      pOVar13 = pOVar7[1].klass;
      pPVar12 = (PlayerTierState *)func_?();
      PlayerTierState::PlayerTierState__ctor
                (pPVar12,TierLockState__Enum_Unlocked,0,(int32_t)pMVar9,0,(int32_t)pOVar13,
                 (MethodInfo *)0x0);
      if (pDVar1 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                     *)0x0) break;
      pMVar14 = 
      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
      ;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::
      Object]::Dictionary_2_MV_Common_GamePassTier_System_Object__Add
                ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,key,(Object *)pPVar12,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                );
      uVar10 = (undefined1)((uint)pMVar14 >> 0x18);
      cVar8 = (char)((uint)pPVar12 >> 0x18);
    }
    uVar2 = cVar8 + GamePassTier__Enum_Tier1;
    playerGamePassTier = key;
    if ((byte)uVar10 < (byte)uVar2) {
      return pDVar1;
    }
  }
  func_?(0);
  pcVar15 = (code *)swi(3);
  pDVar1 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
           (*pcVar15)();
  return pDVar1;
}


/* Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierState]
   GetTierPricingStateBasedOnUserTier(GamePassTier) */

Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *
MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
          (PlayerTierStateCalculator *this,GamePassTier__Enum playerGamePassTier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__MV__Common__GamePassTier;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Enum);
  }
  source = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_8
                        ((IEnumerable *)source,
                         System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                        );
  System.Core.dll::System::Linq::Enumerable::Enumerable_Max_2
            ((IEnumerable_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_RocketType_
              *)source_00,
             unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
            );
  this_00 = (PlayerTierState *)(in_stack_1 & 0xffffff);
  pDVar2 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar2,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
            );
  uVar3 = GamePassTier__Enum_Tier0;
  do {
    if ((byte)(undefined1)playerGamePassTier < (byte)uVar3) {
      if (pDVar2 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                     *)0x0) {
code_?:
        func_?(0);
        pcVar4 = (code *)swi(3);
        pDVar2 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                  *)(*pcVar4)();
        return pDVar2;
      }
      this_00 = (PlayerTierState *)(uint)(byte)(uVar3 - GamePassTier__Enum_Tier1);
      pDVar5 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                 *)&UNK_?;
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
               GamePassTier,System::Object]::
               Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                         ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar2,
                          (GamePassTier__Enum)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                         );
      cVar7 = (char)((uint)pDVar2 >> 0x18);
      if (pOVar6 == (Object *)0x0) goto code_?;
      pDVar8 = (this->fields).progressionThresholds;
      if (pOVar6[1].klass == (Object__Class *)0x0) {
        if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) goto code_?;
        GVar9 = CONCAT31((int3)this_00,cVar7);
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar8,GVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) goto code_?;
        pMVar10 = pOVar6[1].monitor;
        pDVar8 = (this->fields).progressionThresholds;
        if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) goto code_?;
        playerGamePassTier = (GamePassTier__Enum)&UNK_?;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar8,GVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) goto code_?;
        pMVar11 = pOVar6[1].monitor;
        pDVar8 = (this->fields).progressionThresholds;
        if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) goto code_?;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar8,GVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) goto code_?;
        pOVar12 = pOVar6[1].klass;
        pDVar8 = (this->fields).progressionThresholds;
        if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) goto code_?;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar8,GVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) goto code_?;
        pOVar13 = pOVar6[1].klass;
        pPVar14 = (PlayerTierState *)func_?();
        pDVar2 = pDVar5;
        PlayerTierState::PlayerTierState__ctor
                  (pPVar14,TierLockState__Enum_PurchaseUnlock,(int32_t)pMVar10,(int32_t)pMVar11,
                   (int32_t)pOVar12,(int32_t)pOVar13,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::
        Object]::Dictionary_2_MV_Common_GamePassTier_System_Object__Add
                  ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar2,
                   CONCAT31((int3)this_00,cVar7),(Object *)pPVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                  );
      }
      else {
        if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) goto code_?;
        GVar9 = CONCAT31((int3)this_00,cVar7);
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar8,GVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) goto code_?;
        pMVar10 = pOVar6[1].monitor;
        pDVar8 = (this->fields).progressionThresholds;
        if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) goto code_?;
        playerGamePassTier = (GamePassTier__Enum)&UNK_?;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar8,GVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) goto code_?;
        pMVar11 = pOVar6[1].monitor;
        pDVar8 = (this->fields).progressionThresholds;
        if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) goto code_?;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar8,GVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) goto code_?;
        pOVar12 = pOVar6[1].klass;
        pDVar8 = (this->fields).progressionThresholds;
        if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) goto code_?;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar8,GVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) goto code_?;
        pOVar13 = pOVar6[1].klass;
        pPVar14 = (PlayerTierState *)func_?();
        pDVar2 = pDVar5;
        PlayerTierState::PlayerTierState__ctor
                  (pPVar14,TierLockState__Enum_Locked,(int32_t)pMVar10,(int32_t)pMVar11,
                   (int32_t)pOVar12,(int32_t)pOVar13,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::
        Object]::Dictionary_2_MV_Common_GamePassTier_System_Object__Add
                  ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar2,
                   CONCAT31((int3)this_00,cVar7),(Object *)pPVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                  );
      }
    }
    else {
      pDVar8 = (this->fields).progressionThresholds;
      if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                     *)0x0) goto code_?;
      GVar9 = CONCAT31((int3)this_00,uVar3);
      pDVar2 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *
               )&UNK_?;
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
               GamePassTier,System::Object]::
               Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                         ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar8,GVar9,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar6 == (Object *)0x0) goto code_?;
      pMVar10 = pOVar6[1].monitor;
      pDVar8 = (this->fields).progressionThresholds;
      if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                     *)0x0) goto code_?;
      playerGamePassTier =
           (GamePassTier__Enum)
           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
      ;
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
               GamePassTier,System::Object]::
               Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                         ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar8,GVar9,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar6 == (Object *)0x0) goto code_?;
      pOVar12 = pOVar6[1].klass;
      this_00 = (PlayerTierState *)func_?();
      PlayerTierState::PlayerTierState__ctor
                (this_00,TierLockState__Enum_Unlocked,0,(int32_t)pMVar10,0,(int32_t)pOVar12,
                 (MethodInfo *)0x0);
      if (pDVar2 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                     *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::
      Object]::Dictionary_2_MV_Common_GamePassTier_System_Object__Add
                ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar2,GVar9,
                 (Object *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                );
      cVar7 = (char)(GVar9 >> 0x18);
    }
    uVar3 = cVar7 + GamePassTier__Enum_Tier1;
    if ((byte)(char)((uint)this_00 >> 0x18) < (byte)uVar3) {
      return pDVar2;
    }
  } while( true );
}


/* GamePassTier GetUnlockedTier(Int32, GamePassTier) */

GamePassTier__Enum
MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
PlayerTierStateCalculator_GetUnlockedTier
          (PlayerTierStateCalculator *this,int32_t gamePoints,GamePassTier__Enum curGamePassTier,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    in_EAX = func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__MV__Common__GamePassTier;
  if ((this->fields).gamePassRewardsActivated == 0) {
    uVar1 = (undefined3)((uint)in_EAX >> 8);
  }
  else {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Enum);
    }
    source = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
    source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_8
                          ((IEnumerable *)source,
                           System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                          );
    System.Core.dll::System::Linq::Enumerable::Enumerable_Max_2
              ((IEnumerable_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_AttributeSettings_AttributePrototypeSettings_RocketType_
                *)source_00,
               unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
              );
    pMVar2 = (MonitorData *)0x0;
    uVar3 = 0;
    GStack_4 = GamePassTier__Enum_Tier0;
    do {
      pMVar5 = 
      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
      ;
      this_00 = (this->fields).progressionThresholds;
      if (this_00 ==
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *
          )0x0) {
code_?:
        func_?();
        pcVar6 = (code *)swi(3);
        GVar7 = (*pcVar6)();
        return GVar7;
      }
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
               GamePassTier,System::Object]::
               Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                         ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_00,GStack_4,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar8 == (Object *)0x0) goto code_?;
      pMVar2 = pMVar2 + (int)pOVar8[1].monitor;
      if ((int)pMVar5 < (int)pMVar2) break;
      bVar9 = (char)uVar3 + 1;
      uVar3 = (uint)CONCAT11((char)uVar3,bVar9);
      GStack_4 = (GamePassTier__Enum)bVar9;
    } while (bVar9 == 0);
    uVar1 = (undefined3)((uint)pOVar8 >> 8);
    uVar10 = (undefined1)(uVar3 >> 8);
    if ((byte)(undefined1)curGamePassTier <= (byte)uVar10) {
      return CONCAT31(uVar1,uVar10);
    }
  }
  return CONCAT31(uVar1,(undefined1)curGamePassTier);
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
         PlayerTierStateCalculator_ToString(PlayerTierStateCalculator *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = 0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  pPVar8 = this;
  this = (PlayerTierStateCalculator *)CONCAT13((this->fields).gamePassRewardsActivated,this._0_3_);
  puStack_9 = (undefined4 *)&stack0xffffff98;
  puStack_4 = &stack0xffffff98;
  pOVar10 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  iStack_11 = (pPVar8->fields).welcomeReward;
  pSStack_12 = (String *)func_?(TypeInfo__System__Int32,&iStack_11);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar13 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_gamePassRewardsActivated__0___we,pOVar10,(Object *)pSStack_12,
                      (MethodInfo *)0x0);
  this_00 = (pPVar8->fields).progressionThresholds;
  pSStack_12 = pSVar13;
  if (this_00 !=
      (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *)0x0
     ) {
    pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffa4,(Dictionary_2_WinningConditionType_System_Object_ *)this_00
                        ,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar14->dictionary;
    auStack_6._4_4_ = pDVar14->next;
    auStack_6._8_4_ = pDVar14->stamp;
    auStack_6._12_4_ = (pDVar14->current).key;
    auStack_6._16_4_ = (pDVar14->current).value;
    uStack_1 = 0;
    while (cVar15 = func_?(), cVar15 != '\0') {
      KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Current__
                            );
      auStack_6._0_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Key__
      ;
      uStack_16 = func_?();
      auStack_6._0_4_ = &uStack_16;
      pOStack_17 = (Object *)func_?();
      auStack_6._0_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Value__
      ;
      pOVar10 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      str1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_u000A_0____1__,pOStack_17,pOVar10,(MethodInfo *)0x0);
      pSVar13 = mscorlib.dll::System::String::String_Concat_2(pSVar13,str1,(MethodInfo *)0x0);
      pSStack_12 = pSVar13;
    }
    *puStack_9 = 0x74;
    uStack_1 = 0xffffffff;
    func_?();
    *unaff_FS_OFFSET = uStack_3;
    return pSVar13;
  }
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  pSVar13 = (String *)(*pcVar18)();
  return pSVar13;
}


/* PlayerTierStateCalculator() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
     PlayerTierStateCalculator__ctor(PlayerTierStateCalculator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__Dictionary__
            );
  (this->fields).progressionThresholds = this_00;
  return;
}


/* PlayerTierStateCalculator(Boolean, Boolean, Int32,
   Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierThresholds]) */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
     PlayerTierStateCalculator__ctor_1
               (PlayerTierStateCalculator *this,bool gamePassRewardsActivated,
               bool gamePointVelocityIsZero,int32_t welcomeReward,
               Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
               *progressionThresholds,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>
  ;
  this_00 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__Dictionary__
            );
  (this->fields).progressionThresholds = this_00;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).gamePassRewardsActivated = gamePassRewardsActivated;
  (this->fields).progressionThresholds = progressionThresholds;
  (this->fields).gamePointVelocityIsZero = gamePointVelocityIsZero;
  (this->fields).welcomeReward = welcomeReward;
  return;
}

