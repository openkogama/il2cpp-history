
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
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast
                        ((IEnumerable *)source,
                         System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                        );
  uVar2 = System.Core.dll::System::Linq::Enumerable::Enumerable_Max
                    (source_00,
                     unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
                    );
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    puVar3 = &UNK_?;
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
              );
    iVar4 = (uint)uVar2 << 8;
    key = (Object *)((uint)puVar3 & 0xffffff00);
    while( true ) {
      this_03 = this_00;
      pDVar5 = (this->fields).progressionThresholds;
      if (pDVar5 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                     *)0x0) break;
      pMVar6 = 
      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
      ;
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,(ByteEnum__Enum)key,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar7 == (Object *)0x0) break;
      uVar8 = (undefined1)iVar4;
      if ((playerGamePoints < (int)(pOVar7[1].monitor + (int)&pMVar6->methodPointer)) &&
         ((byte)(undefined1)playerGamePassTier < (byte)uVar8)) {
        puVar3 = &UNK_?;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_03,
                            (uint)(byte)(uVar8 - GamePassTier__Enum_Tier1),
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        pDVar5 = (this->fields).progressionThresholds;
        if (pOVar7[1].klass == (Object__Class *)0x0) {
          if (pDVar5 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                         *)0x0) {
            playerGamePassTier =
                 (GamePassTier__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
            ;
            pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,
                                (ByteEnum__Enum)key,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar7 != (Object *)0x0) {
              pMVar9 = pOVar7[1].monitor;
              if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              iVar10 = mscorlib.dll::System::Math::Math_Max_2
                                (((int)pMVar9 - (int)puVar3) + (int)key,0,(MethodInfo *)0x0);
              pDVar5 = (this->fields).progressionThresholds;
              if (pDVar5 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                             *)0x0) {
                pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         ByteEnum,System::Object]::
                         Dictionary_2_System_ByteEnum_System_Object__get_Item
                                   ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,
                                    (ByteEnum__Enum)key,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                   );
                if (pOVar7 != (Object *)0x0) {
                  pOVar11 = pOVar7[1].klass;
                  this_02 = (PlayerTierState *)&UNK_?;
                  iVar12 = func_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState
                                         );
                  if (iVar12 != 0) {
                    remainingGoldPriceRequired =
                         (int)pOVar11 -
                         (int)(((double)iVar10 / (double)(int)this_02) * (double)(int)pOVar11);
                    iVar12 = (int)this_02 - remainingGoldPriceRequired;
                    tierLockState = TierLockState__Enum_PurchaseUnlock;
                    this_01 = this_02;
                    goto code_?;
                  }
                }
              }
            }
          }
          break;
        }
        if (pDVar5 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) break;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,
                            (ByteEnum__Enum)key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        pMVar9 = pOVar7[1].monitor;
        pDVar5 = (this->fields).progressionThresholds;
        if (pDVar5 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) break;
        playerGamePassTier = (GamePassTier__Enum)&UNK_?;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,
                            (ByteEnum__Enum)key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        pDVar5 = (this->fields).progressionThresholds;
        if (pDVar5 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) break;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,
                            (ByteEnum__Enum)key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        pOVar11 = pOVar7[1].klass;
        pDVar5 = (this->fields).progressionThresholds;
        if (pDVar5 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) break;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,
                            (ByteEnum__Enum)key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        gamePointRequirementBase = pOVar7[1].klass;
        this_01 = (PlayerTierState *)func_?();
        if (this_01 == (PlayerTierState *)0x0) break;
        PlayerTierState::PlayerTierState__ctor
                  (this_01,TierLockState__Enum_Locked,(int32_t)pMVar9,
                   (int32_t)gamePointRequirementBase,(int32_t)pOVar11,
                   (int32_t)gamePointRequirementBase,(MethodInfo *)0x0);
      }
      else {
        this_03 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).progressionThresholds;
        if (this_03 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_03,
                            (ByteEnum__Enum)key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        this_01 = (PlayerTierState *)pOVar7[1].monitor;
        pDVar5 = (this->fields).progressionThresholds;
        if (pDVar5 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) break;
        playerGamePassTier =
             (GamePassTier__Enum)
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
        ;
        pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,
                            (ByteEnum__Enum)key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar7 == (Object *)0x0) break;
        pOVar11 = pOVar7[1].klass;
        this_02 = (PlayerTierState *)func_?();
        if (this_02 == (PlayerTierState *)0x0) break;
        remainingGoldPriceRequired = 0;
        iVar12 = 0;
        tierLockState = TierLockState__Enum_Unlocked;
code_?:
        PlayerTierState::PlayerTierState__ctor
                  (this_02,tierLockState,iVar12,(int32_t)this_01,remainingGoldPriceRequired,
                   (int32_t)pOVar11,(MethodInfo *)0x0);
      }
      puVar3 = &UNK_?;
      this_00 = this_03;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_03,key,(Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                );
      bVar13 = uVar8 + GamePassTier__Enum_Tier1;
      uVar14 = (uint)iVar4 >> 8;
      iVar4 = CONCAT31((int3)((uint)iVar4 >> 8),bVar13);
      playerGamePoints = (int32_t)key;
      key = (Object *)CONCAT31((int3)((uint)puVar3 >> 8),bVar13);
      if ((byte)uVar14 < bVar13) {
        return (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *
               )this_03;
      }
    }
  }
  func_?();
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
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast
                        ((IEnumerable *)source,
                         System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                        );
  uVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Max
                    (source_00,
                     unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
                    );
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    puVar2 = &UNK_?;
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
              );
    iVar3 = (uint)uVar1 << 8;
    key = (Object *)((uint)puVar2 & 0xffffff00);
    while( true ) {
      this_03 = this_00;
      pDVar4 = (this->fields).progressionThresholds;
      if (pDVar4 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                     *)0x0) break;
      pMVar5 = 
      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
      ;
      pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,(ByteEnum__Enum)key,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar6 == (Object *)0x0) break;
      uVar7 = (undefined1)iVar3;
      if ((playerGamePoints < (int)(pOVar6[1].monitor + (int)&pMVar5->methodPointer)) &&
         ((byte)(undefined1)playerGamePassTier < (byte)uVar7)) {
        puVar2 = &UNK_?;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_03,
                            (uint)(byte)(uVar7 - GamePassTier__Enum_Tier1),
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) break;
        pDVar4 = (this->fields).progressionThresholds;
        if (pOVar6[1].klass == (Object__Class *)0x0) {
          if (pDVar4 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                         *)0x0) {
            playerGamePassTier =
                 (GamePassTier__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
            ;
            pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,
                                (ByteEnum__Enum)key,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar6 != (Object *)0x0) {
              pMVar8 = pOVar6[1].monitor;
              if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              iVar9 = mscorlib.dll::System::Math::Math_Max_2
                                (((int)pMVar8 - (int)puVar2) + (int)key,0,(MethodInfo *)0x0);
              pDVar4 = (this->fields).progressionThresholds;
              if (pDVar4 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                             *)0x0) {
                pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         ByteEnum,System::Object]::
                         Dictionary_2_System_ByteEnum_System_Object__get_Item
                                   ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,
                                    (ByteEnum__Enum)key,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                   );
                if (pOVar6 != (Object *)0x0) {
                  pOVar10 = pOVar6[1].klass;
                  this_02 = (PlayerTierState *)&UNK_?;
                  iVar11 = func_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState
                                         );
                  if (iVar11 != 0) {
                    remainingGoldPriceRequired =
                         (int)pOVar10 -
                         (int)(((double)iVar9 / (double)(int)this_02) * (double)(int)pOVar10);
                    iVar11 = (int)this_02 - remainingGoldPriceRequired;
                    tierLockState = TierLockState__Enum_PurchaseUnlock;
                    this_01 = this_02;
                    goto code_?;
                  }
                }
              }
            }
          }
          break;
        }
        if (pDVar4 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) break;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,
                            (ByteEnum__Enum)key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) break;
        pMVar8 = pOVar6[1].monitor;
        pDVar4 = (this->fields).progressionThresholds;
        if (pDVar4 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) break;
        playerGamePassTier = (GamePassTier__Enum)&UNK_?;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,
                            (ByteEnum__Enum)key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) break;
        pDVar4 = (this->fields).progressionThresholds;
        if (pDVar4 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) break;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,
                            (ByteEnum__Enum)key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) break;
        pOVar10 = pOVar6[1].klass;
        pDVar4 = (this->fields).progressionThresholds;
        if (pDVar4 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) break;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,
                            (ByteEnum__Enum)key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) break;
        gamePointRequirementBase = pOVar6[1].klass;
        this_01 = (PlayerTierState *)func_?();
        if (this_01 == (PlayerTierState *)0x0) break;
        PlayerTierState::PlayerTierState__ctor
                  (this_01,TierLockState__Enum_Locked,(int32_t)pMVar8,
                   (int32_t)gamePointRequirementBase,(int32_t)pOVar10,
                   (int32_t)gamePointRequirementBase,(MethodInfo *)0x0);
      }
      else {
        this_03 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).progressionThresholds;
        if (this_03 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_03,
                            (ByteEnum__Enum)key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) break;
        this_01 = (PlayerTierState *)pOVar6[1].monitor;
        pDVar4 = (this->fields).progressionThresholds;
        if (pDVar4 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                       *)0x0) break;
        playerGamePassTier =
             (GamePassTier__Enum)
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
        ;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,
                            (ByteEnum__Enum)key,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) break;
        pOVar10 = pOVar6[1].klass;
        this_02 = (PlayerTierState *)func_?();
        if (this_02 == (PlayerTierState *)0x0) break;
        remainingGoldPriceRequired = 0;
        iVar11 = 0;
        tierLockState = TierLockState__Enum_Unlocked;
code_?:
        PlayerTierState::PlayerTierState__ctor
                  (this_02,tierLockState,iVar11,(int32_t)this_01,remainingGoldPriceRequired,
                   (int32_t)pOVar10,(MethodInfo *)0x0);
      }
      puVar2 = &UNK_?;
      this_00 = this_03;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_03,key,(Object *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                );
      bVar12 = uVar7 + GamePassTier__Enum_Tier1;
      uVar13 = (uint)iVar3 >> 8;
      iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),bVar12);
      playerGamePoints = (int32_t)key;
      key = (Object *)CONCAT31((int3)((uint)puVar2 >> 8),bVar12);
      if ((byte)uVar13 < bVar12) {
        return (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *
               )this_03;
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  pDVar15 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
           (*pcVar14)();
  return pDVar15;
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
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast
                        ((IEnumerable *)source,
                         System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                        );
  System.Core.dll::System::Linq::Enumerable::Enumerable_Max
            (source_00,
             unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
            );
  pDVar1 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)(in_stack_2 & 0xffffff);
  this_00 = (Object__Class *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                           );
  if (this_00 != (Object__Class *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
              );
    iVar3 = (playerGamePassTier & 0xff) << 8;
    do {
      bVar4 = (byte)iVar3;
      if ((byte)((uint)iVar3 >> 8) < bVar4) {
        pMVar5 = 
        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
        ;
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,
                            (uint)(byte)(bVar4 - 1),
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 == (Object *)0x0) break;
        pDVar7 = (this->fields).progressionThresholds;
        uVar8 = (undefined1)((uint)pMVar5 >> 0x18);
        if (pOVar6[1].klass == (Object__Class *)0x0) {
          if (pDVar7 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
               *)0x0) break;
          pOVar6 = (Object *)CONCAT31((int3)pDVar1,uVar8);
          pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7,
                              (ByteEnum__Enum)pOVar6,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar9 == (Object *)0x0) break;
          pDVar1 = (this->fields).progressionThresholds;
          if (pDVar1 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
               *)0x0) break;
          pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,
                              (ByteEnum__Enum)pOVar6,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar9 == (Object *)0x0) break;
          pMVar10 = pOVar9[1].monitor;
          pDVar1 = (this->fields).progressionThresholds;
          if (pDVar1 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
               *)0x0) break;
          pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,
                              (ByteEnum__Enum)pOVar6,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar9 == (Object *)0x0) break;
          this_00 = pOVar9[1].klass;
          pDVar1 = (this->fields).progressionThresholds;
          if (pDVar1 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
               *)0x0) break;
          pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,
                              (ByteEnum__Enum)pOVar6,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar9 == (Object *)0x0) break;
          pOVar11 = pOVar9[1].klass;
          pPVar12 = (PlayerTierState *)func_?();
          if (pPVar12 == (PlayerTierState *)0x0) break;
          PlayerTierState::PlayerTierState__ctor
                    (pPVar12,TierLockState__Enum_PurchaseUnlock,(int32_t)pMVar10,(int32_t)pMVar10,
                     (int32_t)this_00,(int32_t)pOVar11,(MethodInfo *)0x0);
        }
        else {
          if (pDVar7 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
               *)0x0) break;
          pOVar6 = (Object *)CONCAT31((int3)pDVar1,uVar8);
          pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7,
                              (ByteEnum__Enum)pOVar6,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar9 == (Object *)0x0) break;
          pMVar10 = pOVar9[1].monitor;
          pDVar1 = (this->fields).progressionThresholds;
          if (pDVar1 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
               *)0x0) break;
          pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,
                              (ByteEnum__Enum)pOVar6,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar9 == (Object *)0x0) break;
          gamePointRequirementBase = pOVar9[1].monitor;
          pDVar1 = (this->fields).progressionThresholds;
          if (pDVar1 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
               *)0x0) break;
          pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,
                              (ByteEnum__Enum)pOVar6,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar9 == (Object *)0x0) break;
          pOVar11 = pOVar9[1].klass;
          pDVar1 = (this->fields).progressionThresholds;
          if (pDVar1 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
               *)0x0) break;
          pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,
                              (ByteEnum__Enum)pOVar6,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar9 == (Object *)0x0) break;
          goldPriceRequirementBase = pOVar9[1].klass;
          this_00 = (Object__Class *)func_?();
          if (this_00 == (Object__Class *)0x0) break;
          PlayerTierState::PlayerTierState__ctor
                    ((PlayerTierState *)this_00,TierLockState__Enum_Locked,(int32_t)pMVar10,
                     (int32_t)gamePointRequirementBase,(int32_t)pOVar11,
                     (int32_t)goldPriceRequirementBase,(MethodInfo *)0x0);
        }
      }
      else {
        pDVar7 = (this->fields).progressionThresholds;
        if (pDVar7 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        pOVar6 = (Object *)
                 CONCAT31((int3)pDVar1,
                          (char)((uint)
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                >> 0x18));
        pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7,
                            (ByteEnum__Enum)pOVar6,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar9 == (Object *)0x0) break;
        pMVar10 = pOVar9[1].monitor;
        pDVar7 = (this->fields).progressionThresholds;
        if (pDVar7 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)0x0) break;
        pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7,
                            (ByteEnum__Enum)pOVar6,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar9 == (Object *)0x0) break;
        pOVar11 = pOVar9[1].klass;
        pPVar12 = (PlayerTierState *)func_?();
        if (pPVar12 == (PlayerTierState *)0x0) break;
        this_00 = (Object__Class *)0x0;
        PlayerTierState::PlayerTierState__ctor
                  (pPVar12,TierLockState__Enum_Unlocked,0,(int32_t)pMVar10,0,(int32_t)pOVar11,
                   (MethodInfo *)0x0);
      }
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar6,(Object *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                );
      iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),bVar4 + 1);
      pDVar1 = pDVar7;
      if ((byte)((uint)pDVar7 >> 0x18) < (byte)(bVar4 + 1)) {
        return (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *
               )this_00;
      }
    } while( true );
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pDVar14 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
           (*pcVar13)();
  return pDVar14;
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
    source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast
                          ((IEnumerable *)source,
                           System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                          );
    System.Core.dll::System::Linq::Enumerable::Enumerable_Max
              (source_00,
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
  pOVar9 = (Object *)func_?(TypeInfo__System__Int32,&iStack_8);
  pSVar10 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_gamePassRewardsActivated__0___we,pOVar7,pOVar9,(MethodInfo *)0x0
                     );
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(pPVar6->fields).progressionThresholds;
  pSStack_11 = pSVar10;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffff98,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__GetEnumerator__
                       );
    method_00 = (Object__Class *)pDVar12->_dictionary;
    pOVar7 = (pDVar12->_current).key;
    uVar13 = *(undefined8 *)&(pDVar12->_current).value;
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
      uStack_15 = (uint8_t)pOVar7;
      pOStack_16 = (Object *)uVar13;
      uStack_17 = uStack_15;
      pOVar9 = (Object *)func_?();
      str1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_u000A_0____1__,pOVar9,pOStack_16,(MethodInfo *)0x0);
      pSVar10 = mscorlib.dll::System::String::String_Concat_3(pSVar10,str1,(MethodInfo *)0x0);
      pSStack_11 = pSVar10;
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&stack0xffffffb0,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__Dispose__
               ,(MethodInfo *)method_00);
    *unaff_FS_OFFSET = uStack_3;
    return pSVar10;
  }
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  pSVar10 = (String *)(*pcVar18)();
  return pSVar10;
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
  this_00 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>
                              );
  if (this_00 !=
      (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *)0x0
     ) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__Dictionary__
              );
    method_00 = (MethodInfo *)&(this->fields).progressionThresholds;
    (this->fields).progressionThresholds = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  this_00 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>
                              );
  if (this_00 !=
      (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *)0x0
     ) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__Dictionary__
              );
    method_00 = (MethodInfo *)&(this->fields).progressionThresholds;
    (this->fields).progressionThresholds = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    (this->fields).gamePassRewardsActivated = gamePassRewardsActivated;
    (this->fields).progressionThresholds = progressionThresholds;
    func_?(&(this->fields).progressionThresholds,progressionThresholds);
    (this->fields).gamePointVelocityIsZero = gamePointVelocityIsZero;
    (this->fields).welcomeReward = welcomeReward;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

