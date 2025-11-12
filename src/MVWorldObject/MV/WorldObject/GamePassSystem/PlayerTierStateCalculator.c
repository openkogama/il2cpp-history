
/* Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierState]
   GetTierPricingState(Int32, GamePassTier) */

Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *
MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
PlayerTierStateCalculator_GetTierPricingState
          (PlayerTierStateCalculator *this,int32_t playerGamePoints,
          GamePassTier__Enum playerGamePassTier,MethodInfo *method)

{
  if ((this->fields).gamePointVelocityIsZero == 0) {
    uVar1 = 0;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                    ,CONCAT44(in_register_00000014,playerGamePoints),
                    CONCAT44(in_register_00000084,playerGamePassTier),0);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeRef__MV__Common__GamePassTier);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__System__Math);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar2 = TypeRef__MV__Common__GamePassTier;
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    plVar3 = (longlong *)0x0;
    plVar4 = plVar3;
    if (pIVar2 != (Il2CppType *)0x0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar5 = FUN_?(pIVar2,1);
      plVar4 = (longlong *)FUN_?(lVar5 + 0x20);
    }
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (plVar4 == (longlong *)0x0) {
      uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
      pAVar6 = (ArgumentNullException *)func_?(uVar1);
      pSVar7 = (String *)func_?(&StringLiteral_enumType);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (pAVar6,pSVar7,(MethodInfo *)0x0);
      uVar1 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
      FUN_?(pAVar6,uVar1);
      pcVar8 = (code *)swi(3);
      pDVar9 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                 *)(*pcVar8)();
      return pDVar9;
    }
    uVar10 = (**(code **)(*plVar4 + 0x888))(plVar4,*(undefined8 *)(*plVar4 + 0x890));
    pIVar11 = (IEnumerable_1_System_Byte_ *)FUN_?(uVar10);
    uVar12 = System.Core.dll::System::Linq::Enumerable::Enumerable_Max_1
                      (pIVar11,
                       unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
                      );
    pDVar13 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
               *)FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
    RuntimeEvents::ExplosionEvent+ExplosionValues]::
    Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
              (pDVar13,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
              );
    uVar14 = unaff_RDI & 0xffffffffffffff00;
    while (pDVar15 = (this->fields).progressionThresholds,
          pDVar15 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                     *)0x0) {
      BVar16 = (ByteEnum__Enum)uVar14;
      pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,BVar16 & 0xff,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                          );
      if (pOVar17 == (Object *)0x0) break;
      uVar18 = (int)plVar3 + *(int *)((longlong)&pOVar17[1].klass + 4);
      plVar3 = (longlong *)(ulonglong)uVar18;
      if ((playerGamePoints < (int)uVar18) && ((byte)playerGamePassTier < (byte)uVar14)) {
        if (((pDVar13 ==
              (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
               *)0x0) ||
            (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       ByteEnum,System::Object]::
                       Dictionary_2_System_ByteEnum_System_Object__get_Item
                                 ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar13,BVar16 - 1,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                 ), pOVar17 == (Object *)0x0)) ||
           (pDVar15 = (this->fields).progressionThresholds,
           pDVar15 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                      *)0x0)) break;
        if (*(int *)&pOVar17[1].klass == 0) {
          pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,BVar16 & 0xff,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                              );
          if (pOVar17 == (Object *)0x0) break;
          iVar19 = *(int *)((longlong)&pOVar17[1].klass + 4);
          if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
            FUN_?();
          }
          pDVar15 = (this->fields).progressionThresholds;
          iVar20 = (playerGamePoints - uVar18) + iVar19;
          if (iVar20 < 0) {
            iVar20 = 0;
          }
          if ((pDVar15 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                          *)0x0) ||
             (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,
                                   BVar16 & 0xff,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                  ), pOVar17 == (Object *)0x0)) break;
          iVar21 = *(int *)&pOVar17[1].klass;
          pOVar17 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState);
          *(undefined4 *)&pOVar17[1].klass = 1;
          *(int *)&pOVar17[2].klass = iVar19;
          *(int *)((longlong)&pOVar17[1].klass + 4) = iVar19 - iVar20;
          *(int *)((longlong)&pOVar17[1].monitor + 4) = iVar21;
          *(int *)&pOVar17[1].monitor =
               iVar21 - (int)(((double)iVar20 / (double)iVar19) * (double)iVar21);
        }
        else {
          pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,BVar16 & 0xff,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                              );
          if (pOVar17 == (Object *)0x0) break;
          pDVar15 = (this->fields).progressionThresholds;
          uVar22 = *(undefined4 *)((longlong)&pOVar17[1].klass + 4);
          if ((pDVar15 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                          *)0x0) ||
             (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,
                                   BVar16 & 0xff,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                  ), pOVar17 == (Object *)0x0)) break;
          pDVar15 = (this->fields).progressionThresholds;
          uVar23 = *(undefined4 *)((longlong)&pOVar17[1].klass + 4);
          if ((pDVar15 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                          *)0x0) ||
             (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,
                                   BVar16 & 0xff,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                  ), pOVar17 == (Object *)0x0)) break;
          pDVar15 = (this->fields).progressionThresholds;
          uVar24 = *(undefined4 *)&pOVar17[1].klass;
          if ((pDVar15 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                          *)0x0) ||
             (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,
                                   BVar16 & 0xff,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                  ), pOVar17 == (Object *)0x0)) break;
          uVar25 = *(undefined4 *)&pOVar17[1].klass;
          pOVar17 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState);
          *(undefined4 *)((longlong)&pOVar17[1].klass + 4) = uVar22;
          *(undefined4 *)&pOVar17[2].klass = uVar23;
          *(undefined4 *)&pOVar17[1].klass = 2;
          *(undefined4 *)&pOVar17[1].monitor = uVar24;
          *(undefined4 *)((longlong)&pOVar17[1].monitor + 4) = uVar25;
        }
      }
      else {
        pDVar15 = (this->fields).progressionThresholds;
        if ((pDVar15 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                        *)0x0) ||
           (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,BVar16 & 0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                ), pOVar17 == (Object *)0x0)) break;
        pDVar15 = (this->fields).progressionThresholds;
        uVar22 = *(undefined4 *)((longlong)&pOVar17[1].klass + 4);
        if ((pDVar15 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                        *)0x0) ||
           (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,BVar16 & 0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                ), pOVar17 == (Object *)0x0)) break;
        uVar23 = *(undefined4 *)&pOVar17[1].klass;
        pOVar17 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState);
        pOVar17[1].klass = (Object__Class *)0x0;
        *(undefined4 *)&pOVar17[1].monitor = 0;
        *(undefined4 *)&pOVar17[2].klass = uVar22;
        *(undefined4 *)((longlong)&pOVar17[1].monitor + 4) = uVar23;
        if (pDVar13 ==
            (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)0x0) break;
      }
      uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
      Dictionary_2_System_ByteEnum_System_Object__TryInsert
                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar13,BVar16 & 0xff,pOVar17,
                 (InsertionBehavior__Enum)uVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                 ->klass->rgctx_data[0x22].method);
      bVar26 = (byte)uVar14 + 1;
      uVar14 = CONCAT71((int7)(uVar14 >> 8),bVar26);
      if (uVar12 < bVar26) {
        return (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *
               )pDVar13;
      }
    }
    FUN_?();
    pcVar8 = (code *)swi(3);
    pDVar9 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              (*pcVar8)();
    return pDVar9;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MV__Common__GamePassTier);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar2 = TypeRef__MV__Common__GamePassTier;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar4 = (longlong *)0x0;
  if (pIVar2 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar5 = FUN_?(pIVar2,1);
    plVar4 = (longlong *)FUN_?(lVar5 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar4 == (longlong *)0x0) {
    uVar1 = func_?(&TypeInfo__System__ArgumentNullException);
    pAVar6 = (ArgumentNullException *)func_?(uVar1);
    pSVar7 = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (pAVar6,pSVar7,(MethodInfo *)0x0);
    uVar1 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(pAVar6,uVar1);
    pcVar8 = (code *)swi(3);
    pDVar9 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              (*pcVar8)();
    return pDVar9;
  }
  uVar1 = (**(code **)(*plVar4 + 0x888))(plVar4,*(undefined8 *)(*plVar4 + 0x890));
  pIVar11 = (IEnumerable_1_System_Byte_ *)FUN_?(uVar1);
  uVar12 = System.Core.dll::System::Linq::Enumerable::Enumerable_Max_1
                    (pIVar11,
                     unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
                    );
  pDVar13 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (pDVar13,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
            );
  uVar14 = (ulonglong)plVar4 & 0xffffffffffffff00;
  do {
    BVar16 = (ByteEnum__Enum)uVar14;
    if ((byte)playerGamePassTier < (byte)uVar14) {
      if (((pDVar13 ==
            (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)0x0) ||
          (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar13,BVar16 - 1,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               ), pOVar17 == (Object *)0x0)) ||
         (pDVar15 = (this->fields).progressionThresholds,
         pDVar15 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                    *)0x0)) goto DAT_?;
      if (*(int *)&pOVar17[1].klass == 0) {
        pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,BVar16 & 0xff,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                            );
        if (pOVar17 == (Object *)0x0) goto DAT_?;
        pDVar15 = (this->fields).progressionThresholds;
        uVar22 = *(undefined4 *)((longlong)&pOVar17[1].klass + 4);
        if ((pDVar15 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                        *)0x0) ||
           (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,BVar16 & 0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                ), pOVar17 == (Object *)0x0)) goto DAT_?;
        pDVar15 = (this->fields).progressionThresholds;
        uVar23 = *(undefined4 *)((longlong)&pOVar17[1].klass + 4);
        if ((pDVar15 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                        *)0x0) ||
           (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,BVar16 & 0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                ), pOVar17 == (Object *)0x0)) goto DAT_?;
        pDVar15 = (this->fields).progressionThresholds;
        uVar24 = *(undefined4 *)&pOVar17[1].klass;
        if ((pDVar15 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                        *)0x0) ||
           (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,BVar16 & 0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                ), pOVar17 == (Object *)0x0)) goto DAT_?;
        uVar25 = *(undefined4 *)&pOVar17[1].klass;
        pOVar17 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState);
        *(undefined4 *)&pOVar17[1].klass = 1;
      }
      else {
        pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,BVar16 & 0xff,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                            );
        if (pOVar17 == (Object *)0x0) goto DAT_?;
        pDVar15 = (this->fields).progressionThresholds;
        uVar22 = *(undefined4 *)((longlong)&pOVar17[1].klass + 4);
        if ((pDVar15 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                        *)0x0) ||
           (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,BVar16 & 0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                ), pOVar17 == (Object *)0x0)) goto DAT_?;
        pDVar15 = (this->fields).progressionThresholds;
        uVar23 = *(undefined4 *)((longlong)&pOVar17[1].klass + 4);
        if ((pDVar15 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                        *)0x0) ||
           (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,BVar16 & 0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                ), pOVar17 == (Object *)0x0)) goto DAT_?;
        pDVar15 = (this->fields).progressionThresholds;
        uVar24 = *(undefined4 *)&pOVar17[1].klass;
        if ((pDVar15 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                        *)0x0) ||
           (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,BVar16 & 0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                ), pOVar17 == (Object *)0x0)) goto DAT_?;
        uVar25 = *(undefined4 *)&pOVar17[1].klass;
        pOVar17 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState);
        *(undefined4 *)&pOVar17[1].klass = 2;
      }
      *(undefined4 *)((longlong)&pOVar17[1].klass + 4) = uVar22;
      *(undefined4 *)&pOVar17[1].monitor = uVar24;
      *(undefined4 *)&pOVar17[2].klass = uVar23;
      *(undefined4 *)((longlong)&pOVar17[1].monitor + 4) = uVar25;
    }
    else {
      pDVar15 = (this->fields).progressionThresholds;
      if ((pDVar15 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                      *)0x0) ||
         (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,BVar16 & 0xff,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                              ), pOVar17 == (Object *)0x0)) {
DAT_?:
        FUN_?();
        pcVar8 = (code *)swi(3);
        pDVar9 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                   *)(*pcVar8)();
        return pDVar9;
      }
      pDVar15 = (this->fields).progressionThresholds;
      uVar22 = *(undefined4 *)((longlong)&pOVar17[1].klass + 4);
      if ((pDVar15 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                      *)0x0) ||
         (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar15,BVar16 & 0xff,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                              ), pOVar17 == (Object *)0x0)) goto DAT_?;
      uVar23 = *(undefined4 *)&pOVar17[1].klass;
      pOVar17 = (Object *)FUN_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState);
      pOVar17[1].klass = (Object__Class *)0x0;
      *(undefined4 *)&pOVar17[1].monitor = 0;
      *(undefined4 *)&pOVar17[2].klass = uVar22;
      *(undefined4 *)((longlong)&pOVar17[1].monitor + 4) = uVar23;
      if (pDVar13 ==
          (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
           *)0x0) goto DAT_?;
    }
    method = (MethodInfo *)CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
    Dictionary_2_System_ByteEnum_System_Object__TryInsert
              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar13,BVar16 & 0xff,pOVar17,
               (InsertionBehavior__Enum)method,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
               ->klass->rgctx_data[0x22].method);
    bVar26 = (byte)uVar14 + 1;
    uVar14 = CONCAT71((int7)(uVar14 >> 8),bVar26);
    if (uVar12 < bVar26) {
      return (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
             pDVar13;
    }
  } while( true );
}


/* Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierState]
   GetTierPricingStateBasedOnUserGamePointAmount(Int32, GamePassTier) */

Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *
MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
          (PlayerTierStateCalculator *this,int32_t playerGamePoints,
          GamePassTier__Enum playerGamePassTier,MethodInfo *method)

{
  behavior = (InsertionBehavior__Enum)method;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                  ,CONCAT44(in_register_00000014,playerGamePoints),
                  CONCAT44(in_register_00000084,playerGamePassTier),behavior);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MV__Common__GamePassTier);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__MV__Common__GamePassTier;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar2 = (longlong *)0x0;
  plVar3 = plVar2;
  if (pIVar1 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar4 = FUN_?(pIVar1,1);
    plVar3 = (longlong *)FUN_?(lVar4 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar3 == (longlong *)0x0) {
    uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
    this_01 = (ArgumentNullException *)func_?(uVar5);
    paramName = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_01,paramName,(MethodInfo *)0x0);
    uVar5 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this_01,uVar5);
    pcVar6 = (code *)swi(3);
    pDVar7 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              (*pcVar6)();
    return pDVar7;
  }
  uVar5 = (**(code **)(*plVar3 + 0x888))(plVar3,*(undefined8 *)(*plVar3 + 0x890));
  source = (IEnumerable_1_System_Byte_ *)FUN_?(uVar5);
  uVar8 = System.Core.dll::System::Linq::Enumerable::Enumerable_Max_1
                     (source,
                      unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
                     );
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
            );
  uVar9 = unaff_RDI & 0xffffffffffffff00;
  while( true ) {
    pDVar10 = (this->fields).progressionThresholds;
    if (pDVar10 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                   *)0x0) break;
    BVar11 = (ByteEnum__Enum)uVar9;
    pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar10,BVar11 & 0xff,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                        );
    if (pOVar12 == (Object *)0x0) break;
    uVar13 = (int)plVar2 + *(int *)((longlong)&pOVar12[1].klass + 4);
    plVar2 = (longlong *)(ulonglong)uVar13;
    if ((playerGamePoints < (int)uVar13) && ((byte)playerGamePassTier < (byte)uVar9)) {
      if (((this_00 ==
            (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)0x0) ||
          (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,BVar11 - 1,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               ), pOVar12 == (Object *)0x0)) ||
         (pDVar10 = (this->fields).progressionThresholds,
         pDVar10 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                    *)0x0)) break;
      if (*(int *)&pOVar12[1].klass == 0) {
        pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar10,BVar11 & 0xff,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                            );
        if (pOVar12 == (Object *)0x0) break;
        iVar14 = *(int *)((longlong)&pOVar12[1].klass + 4);
        if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
          FUN_?();
        }
        pDVar10 = (this->fields).progressionThresholds;
        iVar15 = (playerGamePoints - uVar13) + iVar14;
        if (iVar15 < 0) {
          iVar15 = 0;
        }
        if ((pDVar10 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                        *)0x0) ||
           (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar10,BVar11 & 0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                ), pOVar12 == (Object *)0x0)) break;
        iVar16 = *(int *)&pOVar12[1].klass;
        pOVar12 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState);
        *(undefined4 *)&pOVar12[1].klass = 1;
        *(int *)&pOVar12[2].klass = iVar14;
        *(int *)((longlong)&pOVar12[1].klass + 4) = iVar14 - iVar15;
        *(int *)((longlong)&pOVar12[1].monitor + 4) = iVar16;
        *(int *)&pOVar12[1].monitor =
             iVar16 - (int)(((double)iVar15 / (double)iVar14) * (double)iVar16);
      }
      else {
        pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar10,BVar11 & 0xff,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                            );
        if (pOVar12 == (Object *)0x0) break;
        pDVar10 = (this->fields).progressionThresholds;
        uVar17 = *(undefined4 *)((longlong)&pOVar12[1].klass + 4);
        if ((pDVar10 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                        *)0x0) ||
           (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar10,BVar11 & 0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                ), pOVar12 == (Object *)0x0)) break;
        pDVar10 = (this->fields).progressionThresholds;
        uVar18 = *(undefined4 *)((longlong)&pOVar12[1].klass + 4);
        if ((pDVar10 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                        *)0x0) ||
           (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar10,BVar11 & 0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                ), pOVar12 == (Object *)0x0)) break;
        pDVar10 = (this->fields).progressionThresholds;
        uVar19 = *(undefined4 *)&pOVar12[1].klass;
        if ((pDVar10 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                        *)0x0) ||
           (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar10,BVar11 & 0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                ), pOVar12 == (Object *)0x0)) break;
        uVar20 = *(undefined4 *)&pOVar12[1].klass;
        pOVar12 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState);
        *(undefined4 *)((longlong)&pOVar12[1].klass + 4) = uVar17;
        *(undefined4 *)&pOVar12[2].klass = uVar18;
        *(undefined4 *)&pOVar12[1].klass = 2;
        *(undefined4 *)&pOVar12[1].monitor = uVar19;
        *(undefined4 *)((longlong)&pOVar12[1].monitor + 4) = uVar20;
      }
    }
    else {
      pDVar10 = (this->fields).progressionThresholds;
      if ((pDVar10 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                      *)0x0) ||
         (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar10,BVar11 & 0xff,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                              ), pOVar12 == (Object *)0x0)) break;
      pDVar10 = (this->fields).progressionThresholds;
      uVar17 = *(undefined4 *)((longlong)&pOVar12[1].klass + 4);
      if ((pDVar10 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                      *)0x0) ||
         (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar10,BVar11 & 0xff,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                              ), pOVar12 == (Object *)0x0)) break;
      uVar18 = *(undefined4 *)&pOVar12[1].klass;
      pOVar12 = (Object *)FUN_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState);
      pOVar12[1].klass = (Object__Class *)0x0;
      *(undefined4 *)&pOVar12[1].monitor = 0;
      *(undefined4 *)&pOVar12[2].klass = uVar17;
      *(undefined4 *)((longlong)&pOVar12[1].monitor + 4) = uVar18;
      if (this_00 ==
          (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
           *)0x0) break;
    }
    behavior = CONCAT31((int3)(behavior >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
    Dictionary_2_System_ByteEnum_System_Object__TryInsert
              ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,BVar11 & 0xff,pOVar12,behavior,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
               ->klass->rgctx_data[0x22].method);
    bVar21 = (byte)uVar9 + 1;
    uVar9 = CONCAT71((int7)(uVar9 >> 8),bVar21);
    if (uVar8 < bVar21) {
      return (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
             this_00;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pDVar7 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            (*pcVar6)();
  return pDVar7;
}


/* Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierState]
   GetTierPricingStateBasedOnUserTier(GamePassTier) */

Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *
MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
          (PlayerTierStateCalculator *this,GamePassTier__Enum playerGamePassTier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MV__Common__GamePassTier);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__MV__Common__GamePassTier;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  plVar2 = (longlong *)0x0;
  if (pIVar1 != (Il2CppType *)0x0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    lVar3 = FUN_?(pIVar1,1);
    plVar2 = (longlong *)FUN_?(lVar3 + 0x20);
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar2 == (longlong *)0x0) {
    uVar4 = func_?(&TypeInfo__System__ArgumentNullException);
    this_01 = (ArgumentNullException *)func_?(uVar4);
    paramName = (String *)func_?(&StringLiteral_enumType);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_01,paramName,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
    FUN_?(this_01,uVar4);
    pcVar5 = (code *)swi(3);
    pDVar6 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              (*pcVar5)();
    return pDVar6;
  }
  uVar4 = (**(code **)(*plVar2 + 0x888))(plVar2,*(undefined8 *)(*plVar2 + 0x890));
  source = (IEnumerable_1_System_Byte_ *)FUN_?(uVar4);
  uVar7 = System.Core.dll::System::Linq::Enumerable::Enumerable_Max_1
                    (source,
                     unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
                    );
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Dictionary__
            );
  uVar8 = (ulonglong)plVar2 & 0xffffffffffffff00;
  do {
    BVar9 = (ByteEnum__Enum)uVar8;
    if ((byte)playerGamePassTier < (byte)uVar8) {
      if (((this_00 ==
            (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)0x0) ||
          (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,BVar9 - 1,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                              ), pOVar10 == (Object *)0x0)) ||
         (pDVar11 = (this->fields).progressionThresholds,
         pDVar11 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                    *)0x0)) goto DAT_?;
      if (*(int *)&pOVar10[1].klass == 0) {
        pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar11,BVar9 & 0xff,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar10 == (Object *)0x0) goto DAT_?;
        pDVar11 = (this->fields).progressionThresholds;
        uVar12 = *(undefined4 *)((longlong)&pOVar10[1].klass + 4);
        if ((pDVar11 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                        *)0x0) ||
           (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar11,BVar9 & 0xff,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                               ), pOVar10 == (Object *)0x0)) goto DAT_?;
        pDVar11 = (this->fields).progressionThresholds;
        uVar13 = *(undefined4 *)((longlong)&pOVar10[1].klass + 4);
        if ((pDVar11 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                        *)0x0) ||
           (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar11,BVar9 & 0xff,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                               ), pOVar10 == (Object *)0x0)) goto DAT_?;
        pDVar11 = (this->fields).progressionThresholds;
        uVar14 = *(undefined4 *)&pOVar10[1].klass;
        if ((pDVar11 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                        *)0x0) ||
           (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar11,BVar9 & 0xff,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                               ), pOVar10 == (Object *)0x0)) goto DAT_?;
        uVar15 = *(undefined4 *)&pOVar10[1].klass;
        pOVar10 = (Object *)FUN_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState)
        ;
        *(undefined4 *)&pOVar10[1].klass = 1;
      }
      else {
        pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar11,BVar9 & 0xff,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar10 == (Object *)0x0) goto DAT_?;
        pDVar11 = (this->fields).progressionThresholds;
        uVar12 = *(undefined4 *)((longlong)&pOVar10[1].klass + 4);
        if ((pDVar11 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                        *)0x0) ||
           (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar11,BVar9 & 0xff,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                               ), pOVar10 == (Object *)0x0)) goto DAT_?;
        pDVar11 = (this->fields).progressionThresholds;
        uVar13 = *(undefined4 *)((longlong)&pOVar10[1].klass + 4);
        if ((pDVar11 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                        *)0x0) ||
           (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar11,BVar9 & 0xff,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                               ), pOVar10 == (Object *)0x0)) goto DAT_?;
        pDVar11 = (this->fields).progressionThresholds;
        uVar14 = *(undefined4 *)&pOVar10[1].klass;
        if ((pDVar11 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                        *)0x0) ||
           (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar11,BVar9 & 0xff,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                               ), pOVar10 == (Object *)0x0)) goto DAT_?;
        uVar15 = *(undefined4 *)&pOVar10[1].klass;
        pOVar10 = (Object *)FUN_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState)
        ;
        *(undefined4 *)&pOVar10[1].klass = 2;
      }
      *(undefined4 *)((longlong)&pOVar10[1].klass + 4) = uVar12;
      *(undefined4 *)&pOVar10[1].monitor = uVar14;
      *(undefined4 *)&pOVar10[2].klass = uVar13;
      *(undefined4 *)((longlong)&pOVar10[1].monitor + 4) = uVar15;
    }
    else {
      pDVar11 = (this->fields).progressionThresholds;
      if ((pDVar11 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                      *)0x0) ||
         (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar11,BVar9 & 0xff,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                             ), pOVar10 == (Object *)0x0)) {
DAT_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        pDVar6 = (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                   *)(*pcVar5)();
        return pDVar6;
      }
      pDVar11 = (this->fields).progressionThresholds;
      uVar12 = *(undefined4 *)((longlong)&pOVar10[1].klass + 4);
      if ((pDVar11 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                      *)0x0) ||
         (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar11,BVar9 & 0xff,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                             ), pOVar10 == (Object *)0x0)) goto DAT_?;
      uVar13 = *(undefined4 *)&pOVar10[1].klass;
      pOVar10 = (Object *)FUN_?(TypeInfo__MV__WorldObject__GamePassSystem__PlayerTierState);
      pOVar10[1].klass = (Object__Class *)0x0;
      *(undefined4 *)&pOVar10[1].monitor = 0;
      *(undefined4 *)&pOVar10[2].klass = uVar12;
      *(undefined4 *)((longlong)&pOVar10[1].monitor + 4) = uVar13;
      if (this_00 ==
          (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
           *)0x0) goto DAT_?;
    }
    in_R9D = CONCAT31((int3)(in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
    Dictionary_2_System_ByteEnum_System_Object__TryInsert
              ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,BVar9 & 0xff,pOVar10,in_R9D,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__Add_MV__Common__GamePassTier__MV__WorldObject__GamePassSystem__PlayerTierState_
               ->klass->rgctx_data[0x22].method);
    bVar16 = (byte)uVar8 + 1;
    uVar8 = CONCAT71((int7)(uVar8 >> 8),bVar16);
    if (uVar7 < bVar16) {
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerable<unsigned_char>_MethodInfo__System__Linq__Enumerable__Cast<unsigned_char>_System__Collections__IEnumerable_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MV__Common__GamePassTier);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = TypeRef__MV__Common__GamePassTier;
  if ((this->fields).gamePassRewardsActivated != 0) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    plVar2 = (longlong *)0x0;
    plVar3 = plVar2;
    if (pIVar1 != (Il2CppType *)0x0) {
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      lVar4 = FUN_?(pIVar1,1);
      plVar3 = (longlong *)FUN_?(lVar4 + 0x20);
    }
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (plVar3 == (longlong *)0x0) {
      uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
      this_01 = (ArgumentNullException *)func_?(uVar5);
      paramName = (String *)func_?(&StringLiteral_enumType);
      mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                (this_01,paramName,(MethodInfo *)0x0);
      uVar5 = func_?(&MethodInfo__System__Enum__GetValues_System__Type_);
      FUN_?(this_01,uVar5);
      pcVar6 = (code *)swi(3);
      GVar7 = (*pcVar6)();
      return GVar7;
    }
    uVar5 = (**(code **)(*plVar3 + 0x888))(plVar3,*(undefined8 *)(*plVar3 + 0x890));
    source = (IEnumerable_1_System_Byte_ *)FUN_?(uVar5);
    uVar8 = System.Core.dll::System::Linq::Enumerable::Enumerable_Max_1
                      (source,
                       unsigned_char_MethodInfo__System__Linq__Enumerable__Max<unsigned_char>_System__Collections__Generic__IEnumerable<unsigned_char>_
                      );
    key = 0;
    bVar9 = 0;
    do {
      this_00 = (this->fields).progressionThresholds;
      if (this_00 ==
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *
          )0x0) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        GVar7 = (*pcVar6)();
        return GVar7;
      }
      bVar10 = (byte)key;
      pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,key,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar11 == (Object *)0x0) goto code_?;
      uVar12 = (int)plVar2 + *(int *)((longlong)&pOVar11[1].klass + 4);
      plVar2 = (longlong *)(ulonglong)uVar12;
    } while (((int)uVar12 <= gamePoints) &&
            (key = (ByteEnum__Enum)(byte)(bVar10 + 1), bVar9 = bVar10, (byte)(bVar10 + 1) <= uVar8));
    if ((byte)curGamePassTier <= bVar9) {
      return (uint)bVar9;
    }
  }
  return curGamePassTier & 0xff;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
         PlayerTierStateCalculator_ToString(PlayerTierStateCalculator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__GamePassTier);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_u000A_0____1__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_gamePassRewardsActivated__0___we);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,(this->fields).gamePassRewardsActivated);
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_8);
  aiStackX_8[0] = (this->fields).welcomeReward;
  pOVar2 = (Object *)FUN_?(uRam_?,aiStackX_8);
  pSVar3 = StringLiteral_gamePassRewardsActivated__0___we;
  PStack_4._arg0 = (Object *)0x0;
  PStack_4._arg1 = (Object *)0x0;
  PStack_4._arg2 = (Object *)0x0;
  PStack_4._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_4,pOVar1,pOVar2,(MethodInfo *)0x0)
  ;
  PStack_5._arg0 = PStack_4._arg0;
  PStack_5._arg1 = PStack_4._arg1;
  PStack_5._arg2 = PStack_4._arg2;
  PStack_5._args = PStack_4._args;
  pSVar3 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar3,&PStack_5,(MethodInfo *)0x0);
  PStack_6._arg0 = (Object *)(this->fields).progressionThresholds;
  if ((Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *)
      PStack_6._arg0 ==
      (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *)0x0
     ) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar7)();
    return pSVar3;
  }
  PStack_6._arg2 = (Object *)0x0;
  PStack_6._args = (Object__Array *)0x0;
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&PStack_6 >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  PStack_6._arg1 =
       (Object *)
       (ulonglong)
       (uint)(((Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                *)PStack_6._arg0)->fields)._version;
  uStack_12 = 2;
  auStack_13._8_8_ = PStack_6._arg1;
  KStack_14.key = 0;
  KStack_14._1_7_ = 0;
  KStack_14.value = (Object *)0x0;
  uStack_15._0_4_ = 2;
  uStack_15._4_4_ = 0;
  uStack_16 = 0;
  puStack_17 = auStack_13;
  auStack_13._0_8_ = PStack_6._arg0;
  while (bVar18 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+Enumerator[System::ByteEnum,System::Object]::
                 Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object__MoveNext
                           ((Dictionary_2_TKey_TValue_Enumerator_System_ByteEnum_System_Object_ *)
                            auStack_13,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__MoveNext__
                           ), pOVar1 = KStack_14.value, bVar18 != 0) {
    aiStackX_8[0] = CONCAT31(aiStackX_8[0]._1_3_,KStack_14.key);
    pOVar2 = (Object *)FUN_?(TypeInfo__MV__Common__GamePassTier,aiStackX_8);
    pSVar19 = StringLiteral_u000A_0____1__;
    PStack_5._arg0 = (Object *)0x0;
    PStack_5._arg1 = (Object *)0x0;
    PStack_5._arg2 = (Object *)0x0;
    PStack_5._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
              (&PStack_5,pOVar2,pOVar1,(MethodInfo *)0x0);
    PStack_6._arg0 = PStack_5._arg0;
    PStack_6._arg1 = PStack_5._arg1;
    PStack_6._arg2 = PStack_5._arg2;
    PStack_6._args = PStack_5._args;
    pSVar19 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar19,&PStack_6,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,pSVar19,(MethodInfo *)0x0);
  }
  return pSVar3;
}


/* PlayerTierStateCalculator() */

void MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
     PlayerTierStateCalculator__ctor(PlayerTierStateCalculator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).progressionThresholds =
       (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *)
       this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).progressionThresholds >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__Dictionary__
            );
  iVar1 = iRam_?;
  (this->fields).progressionThresholds =
       (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_ *)
       this_00;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).progressionThresholds >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).progressionThresholds = progressionThresholds;
  (this->fields).gamePassRewardsActivated = gamePassRewardsActivated;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).progressionThresholds >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  (this->fields).welcomeReward = welcomeReward;
  (this->fields).gamePointVelocityIsZero = gamePointVelocityIsZero;
  return;
}

