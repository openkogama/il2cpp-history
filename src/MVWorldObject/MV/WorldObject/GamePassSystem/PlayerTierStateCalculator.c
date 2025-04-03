
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                   );
    func_?(&TypeInfo__System__Enum);
    func_?(&
                    System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                   );
    func_?(&
                    unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
    func_?(&TypeRef__MV__Common__GamePassTier);
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = TypeRef__MV__Common__GamePassTier;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Enum);
  }
  source = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_4
                        ((IEnumerable *)source,
                         System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                        );
  System.Core.dll::System::Linq::Enumerable::Enumerable_Max_1
            ((IEnumerable_1_System_Byte_ *)source_00,
             unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
            );
  this_00 = (MethodInfo *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
              *)this_00,
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
    pMVar5 = (MethodInfo *)&UNK_?;
    BVar6 = key;
    pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,key,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                       );
    cVar8 = (char)(BVar6 >> 0x18);
    if (pOVar7 == (Object *)0x0) break;
    pMVar9 = pOVar7[1].monitor + (int)&pDVar4->klass;
    if ((playerGamePoints < (int)pMVar9) && ((byte)(undefined1)playerGamePassTier < (byte)uVar2)) {
      if (this_00 == (MethodInfo *)0x0) break;
      uVar10 = 0x10;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,
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
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)playerGamePoints,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        pMVar11 = pOVar7[1].monitor;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        mscorlib.dll::System::Math::Math_Max_4
                  (((int)pMVar11 - (int)pMVar9) + playerGamePoints,0,(MethodInfo *)0x0);
        pDVar4 = (pPVar3->fields).progressionThresholds;
        if (pDVar4 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        puVar12 = &UNK_?;
        this_00 = 
        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
        ;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        goldPriceRequirementBase = pOVar7[1].klass;
        cVar8 = '\x10';
        pPVar13 = TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState;
        pPVar14 = (PlayerTierState *)func_?();
        uVar10 = (undefined1)((uint)pPVar13 >> 0x18);
        pOVar15 = (Object__Class *)
                  ((int)goldPriceRequirementBase -
                  (int)(((double)(int)puVar12 / (double)(int)pDVar4) *
                       (double)(int)goldPriceRequirementBase));
        pMVar9 = (MonitorData *)((int)pDVar4 - (int)puVar12);
        tierLockState = TierLockState__Enum_PurchaseUnlock;
      }
      else {
        if ((Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)playerGamePoints ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        this = (PlayerTierStateCalculator *)&UNK_?;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)playerGamePoints,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        pMVar9 = pOVar7[1].monitor;
        pDVar4 = (pPVar3->fields).progressionThresholds;
        if (pDVar4 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        pDVar4 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                   *)pOVar7[1].monitor;
        pDVar16 = (pPVar3->fields).progressionThresholds;
        if (pDVar16 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) break;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar16,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        pOVar15 = pOVar7[1].klass;
        pDVar16 = (pPVar3->fields).progressionThresholds;
        if (pDVar16 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) break;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar16,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        goldPriceRequirementBase = pOVar7[1].klass;
        pPVar14 = (PlayerTierState *)func_?();
        tierLockState = TierLockState__Enum_Locked;
        this_00 = pMVar5;
      }
      PlayerTierState::PlayerTierState__ctor
                (pPVar14,tierLockState,(int32_t)pMVar9,(int32_t)pDVar4,(int32_t)pOVar15,
                 (int32_t)goldPriceRequirementBase,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
      Dictionary_2_System_ByteEnum_System_Object__Add
                ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,key,(Object *)pPVar14,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                );
    }
    else {
      pDVar4 = (this->fields).progressionThresholds;
      if (pDVar4 ==
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *
          )0x0) break;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,key,
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
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)playerGamePoints,key,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar7 == (Object *)0x0) break;
      pOVar15 = pOVar7[1].klass;
      pPVar14 = (PlayerTierState *)func_?();
      PlayerTierState::PlayerTierState__ctor
                (pPVar14,TierLockState__Enum_Unlocked,0,(int32_t)pMVar9,0,(int32_t)pOVar15,
                 (MethodInfo *)0x0);
      if (this_00 == (MethodInfo *)0x0) break;
      pMVar5 = 
      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
      ;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
      Dictionary_2_System_ByteEnum_System_Object__Add
                ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,key,(Object *)pPVar14,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                );
      uVar10 = (undefined1)((uint)pMVar5 >> 0x18);
      cVar8 = (char)((uint)pPVar14 >> 0x18);
    }
    uVar2 = cVar8 + GamePassTier__Enum_Tier1;
    playerGamePassTier = key;
    if ((byte)uVar10 < (byte)uVar2) {
      return (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
             this_00;
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  pDVar1 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
           (*pcVar17)();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                   );
    func_?(&TypeInfo__System__Enum);
    func_?(&
                    System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                   );
    func_?(&
                    unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
    func_?(&TypeRef__MV__Common__GamePassTier);
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = TypeRef__MV__Common__GamePassTier;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Enum);
  }
  source = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_4
                        ((IEnumerable *)source,
                         System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                        );
  System.Core.dll::System::Linq::Enumerable::Enumerable_Max_1
            ((IEnumerable_1_System_Byte_ *)source_00,
             unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
            );
  this_00 = (MethodInfo *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            ((Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
              *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
            );
  uVar1 = GamePassTier__Enum_Tier0;
  while( true ) {
    pPVar2 = this;
    pDVar3 = (this->fields).progressionThresholds;
    if (pDVar3 ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *)
        0x0) break;
    key = CONCAT31((int3)
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                   ,uVar1);
    pMVar4 = (MethodInfo *)&UNK_?;
    BVar5 = key;
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,key,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                       );
    cVar7 = (char)(BVar5 >> 0x18);
    if (pOVar6 == (Object *)0x0) break;
    pMVar8 = pOVar6[1].monitor + (int)&pDVar3->klass;
    if ((playerGamePoints < (int)pMVar8) && ((byte)(undefined1)playerGamePassTier < (byte)uVar1)) {
      if (this_00 == (MethodInfo *)0x0) break;
      uVar9 = 0x10;
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,
                          (uint)(byte)(uVar1 - GamePassTier__Enum_Tier1),
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar6 == (Object *)0x0) break;
      playerGamePoints = (int32_t)(this->fields).progressionThresholds;
      if (pOVar6[1].klass == (Object__Class *)0x0) {
        if ((Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)playerGamePoints ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        this = (PlayerTierStateCalculator *)&UNK_?;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)playerGamePoints,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) break;
        pMVar10 = pOVar6[1].monitor;
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        mscorlib.dll::System::Math::Math_Max_4
                  (((int)pMVar10 - (int)pMVar8) + playerGamePoints,0,(MethodInfo *)0x0);
        pDVar3 = (pPVar2->fields).progressionThresholds;
        if (pDVar3 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        puVar11 = &UNK_?;
        this_00 = 
        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
        ;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) break;
        goldPriceRequirementBase = pOVar6[1].klass;
        cVar7 = '\x10';
        pPVar12 = TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState;
        pPVar13 = (PlayerTierState *)func_?();
        uVar9 = (undefined1)((uint)pPVar12 >> 0x18);
        pOVar14 = (Object__Class *)
                  ((int)goldPriceRequirementBase -
                  (int)(((double)(int)puVar11 / (double)(int)pDVar3) *
                       (double)(int)goldPriceRequirementBase));
        pMVar8 = (MonitorData *)((int)pDVar3 - (int)puVar11);
        tierLockState = TierLockState__Enum_PurchaseUnlock;
      }
      else {
        if ((Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)playerGamePoints ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        this = (PlayerTierStateCalculator *)&UNK_?;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)playerGamePoints,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) break;
        pMVar8 = pOVar6[1].monitor;
        pDVar3 = (pPVar2->fields).progressionThresholds;
        if (pDVar3 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) break;
        pDVar3 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                   *)pOVar6[1].monitor;
        pDVar15 = (pPVar2->fields).progressionThresholds;
        if (pDVar15 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) break;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) break;
        pOVar14 = pOVar6[1].klass;
        pDVar15 = (pPVar2->fields).progressionThresholds;
        if (pDVar15 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) break;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) break;
        goldPriceRequirementBase = pOVar6[1].klass;
        pPVar13 = (PlayerTierState *)func_?();
        tierLockState = TierLockState__Enum_Locked;
        this_00 = pMVar4;
      }
      PlayerTierState::PlayerTierState__ctor
                (pPVar13,tierLockState,(int32_t)pMVar8,(int32_t)pDVar3,(int32_t)pOVar14,
                 (int32_t)goldPriceRequirementBase,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
      Dictionary_2_System_ByteEnum_System_Object__Add
                ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,key,(Object *)pPVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                );
    }
    else {
      pDVar3 = (this->fields).progressionThresholds;
      if (pDVar3 ==
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *
          )0x0) break;
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,key,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar6 == (Object *)0x0) break;
      pMVar8 = pOVar6[1].monitor;
      playerGamePoints = (int32_t)(this->fields).progressionThresholds;
      if ((Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *
          )playerGamePoints ==
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *
          )0x0) break;
      this = (PlayerTierStateCalculator *)&UNK_?;
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)playerGamePoints,key,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar6 == (Object *)0x0) break;
      pOVar14 = pOVar6[1].klass;
      pPVar13 = (PlayerTierState *)func_?();
      PlayerTierState::PlayerTierState__ctor
                (pPVar13,TierLockState__Enum_Unlocked,0,(int32_t)pMVar8,0,(int32_t)pOVar14,
                 (MethodInfo *)0x0);
      if (this_00 == (MethodInfo *)0x0) break;
      pMVar4 = 
      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
      ;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
      Dictionary_2_System_ByteEnum_System_Object__Add
                ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,key,(Object *)pPVar13,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                );
      uVar9 = (undefined1)((uint)pMVar4 >> 0x18);
      cVar7 = (char)((uint)pPVar13 >> 0x18);
    }
    uVar1 = cVar7 + GamePassTier__Enum_Tier1;
    playerGamePassTier = key;
    if ((byte)uVar9 < (byte)uVar1) {
      return (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
             this_00;
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  pDVar17 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
           (*pcVar16)();
  return pDVar17;
}


/* Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierState]
   GetTierPricingStateBasedOnUserTier(GamePassTier) */

Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *
MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
          (PlayerTierStateCalculator *this,GamePassTier__Enum playerGamePassTier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                   );
    func_?(&TypeInfo__System__Enum);
    func_?(&
                    System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                   );
    func_?(&
                    unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
    func_?(&TypeRef__MV__Common__GamePassTier);
    func_?(&TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = TypeRef__MV__Common__GamePassTier;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Enum);
  }
  source = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_4
                        ((IEnumerable *)source,
                         System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                        );
  System.Core.dll::System::Linq::Enumerable::Enumerable_Max_1
            ((IEnumerable_1_System_Byte_ *)source_00,
             unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
            );
  this_01 = (PlayerTierState *)(in_stack_1 & 0xffffff);
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
            );
  uVar2 = GamePassTier__Enum_Tier0;
  do {
    if ((byte)(undefined1)playerGamePassTier < (byte)uVar2) {
      if (this_00 ==
          (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
           *)0x0) {
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        pDVar4 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                   *)(*pcVar3)();
        return pDVar4;
      }
      this_01 = (PlayerTierState *)(uint)(byte)(uVar2 - GamePassTier__Enum_Tier1);
      pDVar5 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                 *)&UNK_?;
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,
                          (ByteEnum__Enum)this_01,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                         );
      cVar7 = (char)((uint)this_00 >> 0x18);
      if (pOVar6 == (Object *)0x0) goto code_?;
      pDVar8 = (this->fields).progressionThresholds;
      if (pOVar6[1].klass == (Object__Class *)0x0) {
        if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) goto code_?;
        BVar9 = CONCAT31((int3)this_01,cVar7);
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar8,BVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) goto code_?;
        pMVar10 = pOVar6[1].monitor;
        pDVar8 = (this->fields).progressionThresholds;
        if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) goto code_?;
        playerGamePassTier = (GamePassTier__Enum)&UNK_?;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar8,BVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) goto code_?;
        pMVar11 = pOVar6[1].monitor;
        pDVar8 = (this->fields).progressionThresholds;
        if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) goto code_?;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar8,BVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) goto code_?;
        pOVar12 = pOVar6[1].klass;
        pDVar8 = (this->fields).progressionThresholds;
        if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) goto code_?;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar8,BVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) goto code_?;
        pOVar13 = pOVar6[1].klass;
        pPVar14 = (PlayerTierState *)func_?();
        this_00 = pDVar5;
        PlayerTierState::PlayerTierState__ctor
                  (pPVar14,TierLockState__Enum_PurchaseUnlock,(int32_t)pMVar10,(int32_t)pMVar11,
                   (int32_t)pOVar12,(int32_t)pOVar13,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__Add
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,
                   CONCAT31((int3)this_01,cVar7),(Object *)pPVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                  );
      }
      else {
        if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) goto code_?;
        BVar9 = CONCAT31((int3)this_01,cVar7);
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar8,BVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) goto code_?;
        pMVar10 = pOVar6[1].monitor;
        pDVar8 = (this->fields).progressionThresholds;
        if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) goto code_?;
        playerGamePassTier = (GamePassTier__Enum)&UNK_?;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar8,BVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) goto code_?;
        pMVar11 = pOVar6[1].monitor;
        pDVar8 = (this->fields).progressionThresholds;
        if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) goto code_?;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar8,BVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) goto code_?;
        pOVar12 = pOVar6[1].klass;
        pDVar8 = (this->fields).progressionThresholds;
        if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) goto code_?;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar8,BVar9,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) goto code_?;
        pOVar13 = pOVar6[1].klass;
        pPVar14 = (PlayerTierState *)func_?();
        this_00 = pDVar5;
        PlayerTierState::PlayerTierState__ctor
                  (pPVar14,TierLockState__Enum_Locked,(int32_t)pMVar10,(int32_t)pMVar11,(int32_t)pOVar12
                   ,(int32_t)pOVar13,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__Add
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,
                   CONCAT31((int3)this_01,cVar7),(Object *)pPVar14,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                  );
      }
    }
    else {
      pDVar8 = (this->fields).progressionThresholds;
      if (pDVar8 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                     *)0x0) goto code_?;
      BVar9 = CONCAT31((int3)this_01,uVar2);
      this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                 *)&UNK_?;
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar8,BVar9,
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
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar8,BVar9,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar6 == (Object *)0x0) goto code_?;
      pOVar12 = pOVar6[1].klass;
      this_01 = (PlayerTierState *)func_?();
      PlayerTierState::PlayerTierState__ctor
                (this_01,TierLockState__Enum_Unlocked,0,(int32_t)pMVar10,0,(int32_t)pOVar12,
                 (MethodInfo *)0x0);
      if (this_00 ==
          (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
           *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
      Dictionary_2_System_ByteEnum_System_Object__Add
                ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,BVar9,(Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                );
      cVar7 = (char)(BVar9 >> 0x18);
    }
    uVar2 = cVar7 + GamePassTier__Enum_Tier1;
    if ((byte)(char)((uint)this_01 >> 0x18) < (byte)uVar2) {
      return (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
             this_00;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__System__Enum);
    func_?(&
                    System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                   );
    func_?(&
                    unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
    func_?(&TypeRef__MV__Common__GamePassTier);
    in_EAX = func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = TypeRef__MV__Common__GamePassTier;
  if ((this->fields).gamePassRewardsActivated == 0) {
    uVar1 = (undefined3)((uint)in_EAX >> 8);
  }
  else {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
    if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Enum);
    }
    source = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
    source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_4
                          ((IEnumerable *)source,
                           System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                          );
    System.Core.dll::System::Linq::Enumerable::Enumerable_Max_1
              ((IEnumerable_1_System_Byte_ *)source_00,
               unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
              );
    pMVar2 = (MonitorData *)0x0;
    uVar3 = 0;
    BStack_4 = 0;
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
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,BStack_4,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar8 == (Object *)0x0) goto code_?;
      pMVar2 = pMVar2 + (int)pOVar8[1].monitor;
      if ((int)pMVar5 < (int)pMVar2) break;
      bVar9 = (char)uVar3 + 1;
      uVar3 = (uint)CONCAT11((char)uVar3,bVar9);
      BStack_4 = (ByteEnum__Enum)bVar9;
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
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Current__
                   );
    func_?(&TypeInfo__MV__Common__GamePassTier);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Value__
                   );
    func_?(&StringLiteral_u000A_0____1__);
    func_?(&StringLiteral_gamePassRewardsActivated__0___we);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pPVar6 = this;
  this = (PlayerTierStateCalculator *)CONCAT13((this->fields).gamePassRewardsActivated,this._0_3_);
  pOVar7 = (Object *)func_?(TypeInfo__System__Boolean,(int)&this + 3);
  iStack_8 = (pPVar6->fields).welcomeReward;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_8);
  pSVar9 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_gamePassRewardsActivated__0___we,pOVar7,arg1,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(pPVar6->fields).progressionThresholds;
  pSStack_10 = pSVar9;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffff98,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__GetEnumerator__
                       );
    method_00 = (Object__Class *)pDVar11->_dictionary;
    uVar12 = (pDVar11->_current).key;
    uVar13 = *(undefined8 *)&(pDVar11->_current).value;
    uStack_1 = 1;
    while( true ) {
      bVar14 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_ *)
                         &stack0xffffffb0,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__MoveNext__
                        );
      if (bVar14 == 0) break;
      uStack_15 = (uint8_t)uVar12;
      pOStack_16 = (Object *)uVar13;
      uStack_17 = uStack_15;
      pOVar7 = (Object *)func_?();
      str1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_u000A_0____1__,pOVar7,pOStack_16,(MethodInfo *)0x0);
      pSVar9 = mscorlib.dll::System::String::String_Concat_3(pSVar9,str1,(MethodInfo *)0x0);
      pSStack_10 = pSVar9;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffb0,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__Dispose__
               ,(MethodInfo *)method_00);
    *unaff_FS_OFFSET = uStack_3;
    return pSVar9;
  }
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  pSVar9 = (String *)(*pcVar18)();
  return pSVar9;
}


/* PlayerTierStateCalculator() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
     PlayerTierStateCalculator__ctor(PlayerTierStateCalculator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__Dictionary__
            );
  method_00 = (MethodInfo *)&(this->fields).progressionThresholds;
  *(Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_ **)
   method_00 = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__Dictionary__
            );
  ppDVar1 = &(this->fields).progressionThresholds;
  *ppDVar1 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
              *)this_00;
  method_00 = (MethodInfo *)ppDVar1;
  func_?(ppDVar1,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields).gamePassRewardsActivated = gamePassRewardsActivated;
  *ppDVar1 = progressionThresholds;
  func_?(ppDVar1,progressionThresholds);
  (this->fields).gamePointVelocityIsZero = gamePointVelocityIsZero;
  (this->fields).welcomeReward = welcomeReward;
  return;
}

