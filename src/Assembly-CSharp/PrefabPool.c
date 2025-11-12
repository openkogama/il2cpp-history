
/* Void Awake() */

void Assembly-CSharp.dll::PrefabPool::PrefabPool_Awake(PrefabPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__PrefabPool->static_fields->instance = this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__PrefabPool->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Add_bool__EquipableData_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__Add_MVJetPack__JetPackType__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>
                         );
  pEVar5 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32Enum]::
           EqualityComparer_1_System_Int32Enum__get_Default
                     (MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Dictionary__
                      ->klass->rgctx_data->method->klass->rgctx_data[3].method);
  if ((pEVar5 != (EqualityComparer_1_System_Int32Enum_ *)0x0) &&
     (bVar6 = iRam_? != 0,
     (this_00->fields)._comparer = (IEqualityComparer_1_MV_Common_AvatarItemType_ *)0x0, bVar6)) {
    uVar1 = (uint)((ulonglong)&(this_00->fields)._comparer >> 0xc);
    lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar2 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar2;
      if (bVar6) {
        *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pMStack_8 = (this->fields).avatarCenterGunPrefab;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&pMStack_8 >> 0xc);
    lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar2 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar2;
      if (bVar6) {
        *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  uStack_9 = 0;
  if (this_00 != (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)0x0) {
    IVar10 = CONCAT31((int3)((uint)in_R9D >> 8),2);
    EStack_11.equipableType = 0;
    EStack_11._12_4_ = 0;
    EStack_11.prefabObject = (ObjectPrefab *)pMStack_8;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,1,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarImpulseGunPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_12 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_13 = 0;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 0;
    EStack_11._12_4_ = 0;
    pMStack_12 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,2,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarHealthPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_14 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_15 = 1;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 1;
    EStack_11._12_4_ = 0;
    pMStack_14 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,3,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarBazookaPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_16 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_17 = 0;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 0;
    EStack_11._12_4_ = 0;
    pMStack_16 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,4,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarRailGunPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_18 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_19 = 0;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 0;
    EStack_11._12_4_ = 0;
    pMStack_18 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,6,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarMutantPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_20 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_21 = 1;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 1;
    EStack_11._12_4_ = 0;
    pMStack_20 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,7,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarMeleeWeaponPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_22 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_23 = 0;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 0;
    EStack_11._12_4_ = 0;
    pMStack_22 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,8,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarShotgunPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_24 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_25 = 0;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 0;
    EStack_11._12_4_ = 0;
    pMStack_24 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,9,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarFlamethrowerPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_26 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_27 = 0;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 0;
    EStack_11._12_4_ = 0;
    pMStack_26 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,10,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarCubeGunPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_28 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_29 = 0;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 0;
    EStack_11._12_4_ = 0;
    pMStack_28 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0xb,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarNinjaRunPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_30 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_31 = 1;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 1;
    EStack_11._12_4_ = 0;
    pMStack_30 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0xe,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarSixShooterPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_32 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_33 = 0;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 0;
    EStack_11._12_4_ = 0;
    pMStack_32 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0xc,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarDoubleSixShooterPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_34 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_35 = 0;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 0;
    EStack_11._12_4_ = 0;
    pMStack_34 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0xd,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarThrowingStarPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_36 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_37 = 0;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 0;
    EStack_11._12_4_ = 0;
    pMStack_36 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x2d,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarMultiThrowingStarPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_38 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_39 = 0;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 0;
    EStack_11._12_4_ = 0;
    pMStack_38 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x2e,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarMouseGunPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_40 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_41 = 0;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 0;
    EStack_11._12_4_ = 0;
    pMStack_40 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x3c,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarGrowthGunPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_42 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_43 = 0;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 0;
    EStack_11._12_4_ = 0;
    pMStack_42 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x3e,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarMousePackPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_44 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_45 = 1;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 1;
    EStack_11._12_4_ = 0;
    pMStack_44 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x3f,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarGrowthPackPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_46 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_47 = 1;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 1;
    EStack_11._12_4_ = 0;
    pMStack_46 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x40,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarHealRayPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_48 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_49 = 0;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 0;
    EStack_11._12_4_ = 0;
    pMStack_48 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x46,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarCostumePrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_50 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_51 = 0;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 0;
    EStack_11._12_4_ = 0;
    pMStack_50 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x3b,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarCustomGunPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_52 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    puStack_53 = (undefined *)0x0;
    IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
    EStack_11.equipableType = 0;
    EStack_11._12_4_ = 0;
    pMStack_52 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0xf,&EStack_11,IVar10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    bVar6 = iRam_? != 0;
    (this->fields).pickupPrefabLUT = this_00;
    if (bVar6) {
      uVar1 = (uint)((ulonglong)&(this->fields).pickupPrefabLUT >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    this_01 = (Dictionary_2_System_Boolean_EquipableData_ *)
              FUN_?(TypeInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>)
    ;
    pEVar54 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Boolean]::
             EqualityComparer_1_System_Boolean__get_Default
                       (MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Dictionary__
                        ->klass->rgctx_data->method->klass->rgctx_data[3].method);
    if ((pEVar54 != (EqualityComparer_1_System_Boolean_ *)0x0) &&
       (bVar6 = iRam_? != 0,
       (this_01->fields)._comparer = (IEqualityComparer_1_System_Boolean_ *)0x0, bVar6)) {
      uVar1 = (uint)((ulonglong)&(this_01->fields)._comparer >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pMStack_55 = (this->fields).avatarMeleeWeaponPrefab;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&pMStack_55 >> 0xc);
      lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar2 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar2;
        if (bVar6) {
          *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    uStack_56 = 0;
    if (this_01 != (Dictionary_2_System_Boolean_EquipableData_ *)0x0) {
      IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
      EStack_11.equipableType = 0;
      EStack_11._12_4_ = 0;
      EStack_11.prefabObject = (ObjectPrefab *)pMStack_55;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Boolean,EquipableData]::
      Dictionary_2_System_Boolean_EquipableData__TryInsert
                (this_01,0,&EStack_11,IVar10,
                 MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Add_bool__EquipableData_
                 ->klass->rgctx_data[0x22].method);
      EStack_11.prefabObject = (ObjectPrefab *)(this->fields).avatarSwordPrefab;
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)&pMStack_57 >> 0xc);
        lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar2 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar2;
          if (bVar6) {
            *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      uStack_58 = 0;
      IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
      EStack_11.equipableType = 0;
      EStack_11._12_4_ = 0;
      pMStack_57 = (MVPickupItemBaseObject *)EStack_11.prefabObject;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Boolean,EquipableData]::
      Dictionary_2_System_Boolean_EquipableData__TryInsert
                (this_01,1,&EStack_11,IVar10,
                 MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Add_bool__EquipableData_
                 ->klass->rgctx_data[0x22].method);
      bVar6 = iRam_? != 0;
      (this->fields).meleeWeaponPrefabLUT = this_01;
      if (bVar6) {
        uVar1 = (uint)((ulonglong)&(this->fields).meleeWeaponPrefabLUT >> 0xc);
        lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar2 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar2;
          if (bVar6) {
            *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      this_02 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
      RuntimeEvents::ExplosionEvent+ExplosionValues]::
      Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__Dictionary__
                );
      if (this_02 !=
          (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
           *)0x0) {
        IVar10 = CONCAT31((int3)(IVar10 >> 8),2);
        uVar59 = 0;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__TryInsert
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,0,
                   (Object *)(this->fields).mvJetPackPrefab,IVar10,
                   MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__Add_MVJetPack__JetPackType__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject_
                   ->klass->rgctx_data[0x22].method);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__TryInsert
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,
                   (ByteEnum__Enum)CONCAT71((int7)((ulonglong)uVar59 >> 8),1),
                   (Object *)(this->fields).mvJetPackDeluxePrefab,CONCAT31((int3)(IVar10 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__Add_MVJetPack__JetPackType__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject_
                   ->klass->rgctx_data[0x22].method);
        bVar6 = iRam_? != 0;
        (this->fields).jetPackPrefabLUT =
             (Dictionary_2_MVJetPack_JetPackType_WorldObjectTypes_VehiclesBase_Shared_VehicleBaseObject_
              *)this_02;
        if (bVar6) {
          uVar1 = (uint)((ulonglong)&(this->fields).jetPackPrefabLUT >> 0xc);
          lVar7 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar2 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar6 = uVar4 == *puVar2;
            if (bVar6) {
              *puVar2 = uVar4 | 1L << (uVar1 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar60 = (code *)swi(3);
  (*pcVar60)();
  return;
}


/* Void BuildLookupTables() */

void Assembly-CSharp.dll::PrefabPool::PrefabPool_BuildLookupTables
               (PrefabPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Add_bool__EquipableData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__Add_MVJetPack__JetPackType__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>
                         );
  pEVar1 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32Enum]::
           EqualityComparer_1_System_Int32Enum__get_Default
                     (MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Dictionary__
                      ->klass->rgctx_data->method->klass->rgctx_data[3].method);
  if ((pEVar1 != (EqualityComparer_1_System_Int32Enum_ *)0x0) &&
     (bVar2 = iRam_? != 0,
     (this_00->fields)._comparer = (IEqualityComparer_1_MV_Common_AvatarItemType_ *)0x0, bVar2)) {
    uVar3 = (uint)((ulonglong)&(this_00->fields)._comparer >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pMStack_7 = (this->fields).avatarCenterGunPrefab;
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&pMStack_7 >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  uStack_8 = 0;
  if (this_00 != (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)0x0) {
    IVar9 = CONCAT31((int3)((uint)in_R9D >> 8),2);
    EStack_10.equipableType = 0;
    EStack_10._12_4_ = 0;
    EStack_10.prefabObject = (ObjectPrefab *)pMStack_7;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,1,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarImpulseGunPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_11 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_12 = 0;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 0;
    EStack_10._12_4_ = 0;
    pMStack_11 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,2,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarHealthPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_13 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_14 = 1;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 1;
    EStack_10._12_4_ = 0;
    pMStack_13 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,3,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarBazookaPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_15 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_16 = 0;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 0;
    EStack_10._12_4_ = 0;
    pMStack_15 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,4,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarRailGunPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_17 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_18 = 0;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 0;
    EStack_10._12_4_ = 0;
    pMStack_17 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,6,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarMutantPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_19 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_20 = 1;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 1;
    EStack_10._12_4_ = 0;
    pMStack_19 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,7,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarMeleeWeaponPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_21 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_22 = 0;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 0;
    EStack_10._12_4_ = 0;
    pMStack_21 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,8,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarShotgunPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_23 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_24 = 0;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 0;
    EStack_10._12_4_ = 0;
    pMStack_23 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,9,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarFlamethrowerPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_25 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_26 = 0;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 0;
    EStack_10._12_4_ = 0;
    pMStack_25 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,10,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarCubeGunPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_27 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_28 = 0;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 0;
    EStack_10._12_4_ = 0;
    pMStack_27 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0xb,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarNinjaRunPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_29 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_30 = 1;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 1;
    EStack_10._12_4_ = 0;
    pMStack_29 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0xe,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarSixShooterPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_31 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_32 = 0;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 0;
    EStack_10._12_4_ = 0;
    pMStack_31 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0xc,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarDoubleSixShooterPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_33 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_34 = 0;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 0;
    EStack_10._12_4_ = 0;
    pMStack_33 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0xd,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarThrowingStarPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_35 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_36 = 0;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 0;
    EStack_10._12_4_ = 0;
    pMStack_35 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x2d,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarMultiThrowingStarPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_37 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_38 = 0;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 0;
    EStack_10._12_4_ = 0;
    pMStack_37 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x2e,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarMouseGunPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_39 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_40 = 0;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 0;
    EStack_10._12_4_ = 0;
    pMStack_39 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x3c,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarGrowthGunPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_41 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_42 = 0;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 0;
    EStack_10._12_4_ = 0;
    pMStack_41 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x3e,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarMousePackPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_43 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_44 = 1;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 1;
    EStack_10._12_4_ = 0;
    pMStack_43 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x3f,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarGrowthPackPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_45 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_46 = 1;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 1;
    EStack_10._12_4_ = 0;
    pMStack_45 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x40,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarHealRayPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_47 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_48 = 0;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 0;
    EStack_10._12_4_ = 0;
    pMStack_47 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x46,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarCostumePrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_49 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_50 = 0;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 0;
    EStack_10._12_4_ = 0;
    pMStack_49 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x3b,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarCustomGunPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_51 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_52 = 0;
    IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
    EStack_10.equipableType = 0;
    EStack_10._12_4_ = 0;
    pMStack_51 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__TryInsert
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0xf,&EStack_10,IVar9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ->klass->rgctx_data[0x22].method);
    bVar2 = iRam_? != 0;
    (this->fields).pickupPrefabLUT = this_00;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).pickupPrefabLUT >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    this_01 = (Dictionary_2_System_Boolean_EquipableData_ *)
              FUN_?(TypeInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>)
    ;
    pEVar53 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Boolean]::
             EqualityComparer_1_System_Boolean__get_Default
                       (MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Dictionary__
                        ->klass->rgctx_data->method->klass->rgctx_data[3].method);
    if ((pEVar53 != (EqualityComparer_1_System_Boolean_ *)0x0) &&
       (bVar2 = iRam_? != 0,
       (this_01->fields)._comparer = (IEqualityComparer_1_System_Boolean_ *)0x0, bVar2)) {
      uVar3 = (uint)((ulonglong)&(this_01->fields)._comparer >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pMStack_54 = (this->fields).avatarMeleeWeaponPrefab;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pMStack_54 >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    uStack_55 = 0;
    if (this_01 != (Dictionary_2_System_Boolean_EquipableData_ *)0x0) {
      IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
      EStack_10.equipableType = 0;
      EStack_10._12_4_ = 0;
      EStack_10.prefabObject = (ObjectPrefab *)pMStack_54;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Boolean,EquipableData]::
      Dictionary_2_System_Boolean_EquipableData__TryInsert
                (this_01,0,&EStack_10,IVar9,
                 MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Add_bool__EquipableData_
                 ->klass->rgctx_data[0x22].method);
      EStack_10.prefabObject = (ObjectPrefab *)(this->fields).avatarSwordPrefab;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&pMStack_56 >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      uStack_57 = 0;
      IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
      EStack_10.equipableType = 0;
      EStack_10._12_4_ = 0;
      pMStack_56 = (MVPickupItemBaseObject *)EStack_10.prefabObject;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Boolean,EquipableData]::
      Dictionary_2_System_Boolean_EquipableData__TryInsert
                (this_01,1,&EStack_10,IVar9,
                 MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Add_bool__EquipableData_
                 ->klass->rgctx_data[0x22].method);
      bVar2 = iRam_? != 0;
      (this->fields).meleeWeaponPrefabLUT = this_01;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).meleeWeaponPrefabLUT >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      this_02 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
      RuntimeEvents::ExplosionEvent+ExplosionValues]::
      Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__Dictionary__
                );
      if (this_02 !=
          (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
           *)0x0) {
        IVar9 = CONCAT31((int3)(IVar9 >> 8),2);
        uVar58 = 0;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__TryInsert
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,0,
                   (Object *)(this->fields).mvJetPackPrefab,IVar9,
                   MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__Add_MVJetPack__JetPackType__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject_
                   ->klass->rgctx_data[0x22].method);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__TryInsert
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,
                   (ByteEnum__Enum)CONCAT71((int7)((ulonglong)uVar58 >> 8),1),
                   (Object *)(this->fields).mvJetPackDeluxePrefab,CONCAT31((int3)(IVar9 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__Add_MVJetPack__JetPackType__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject_
                   ->klass->rgctx_data[0x22].method);
        bVar2 = iRam_? != 0;
        (this->fields).jetPackPrefabLUT =
             (Dictionary_2_MVJetPack_JetPackType_WorldObjectTypes_VehiclesBase_Shared_VehicleBaseObject_
              *)this_02;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(this->fields).jetPackPrefabLUT >> 0xc);
          lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
            puVar6 = (ulonglong *)(lVar4 + 0xADDR);
            LOCK();
            bVar2 = uVar5 == *puVar6;
            if (bVar2) {
              *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
            }
            UNLOCK();
          } while (!bVar2);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar59 = (code *)swi(3);
  (*pcVar59)();
  return;
}


/* RectTransform CubeEditHelpTextBubble(CubeModelingStateMachine+HoverType) */

RectTransform *
Assembly-CSharp.dll::PrefabPool::PrefabPool_CubeEditHelpTextBubble
          (PrefabPool *this,CubeModelingStateMachine_HoverType__Enum t,MethodInfo *method)

{
  if (t == CubeModelingStateMachine_HoverType__Enum_Corner) {
    return (this->fields).editCornerHelpText;
  }
  if (t != CubeModelingStateMachine_HoverType__Enum_Edge) {
    if (t != CubeModelingStateMachine_HoverType__Enum_Face) {
      return (RectTransform *)0x0;
    }
    return (this->fields).editFaceHelpText;
  }
  return (this->fields).editEdgeHelpText;
}


/* EquipableData GetPickupPrefab(AvatarItemType, Int32) */

EquipableData *
Assembly-CSharp.dll::PrefabPool::PrefabPool_GetPickupPrefab
          (EquipableData *__return_storage_ptr__,AvatarItemType__Enum avatarItemType,int32_t itemId,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__get_Item_MV__Common__AvatarItemType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__get_Item_bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (avatarItemType == AvatarItemType__Enum_MeleeWeapon) {
    pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar1 != (PrefabPool *)0x0) {
      this = (pPVar1->fields).meleeWeaponPrefabLUT;
      if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      key = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
            MeleeWeaponData_IsLegacySword(itemId,(MethodInfo *)0x0);
      pMVar2 = 
      MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__get_Item_bool_;
      if (this != (Dictionary_2_System_Boolean_EquipableData_ *)0x0) {
        uVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Boolean,EquipableData]::Dictionary_2_System_Boolean_EquipableData__FindEntry
                          (this,key,MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__get_Item_bool_
                                    ->klass->rgctx_data[0x21].method);
        if ((int)uVar3 < 0) {
          uVar4 = func_?(pMVar2->klass->rgctx_data,0xe);
          key_00 = (Object *)func_?(uVar4);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                    (key_00,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          pEVar6 = (EquipableData *)(*pcVar5)();
          return pEVar6;
        }
        pDVar7 = (this->fields)._entries;
        if (pDVar7 != (Dictionary_2_TKey_TValue_Entry_System_Boolean_EquipableData___Array *)0x0) {
          if ((uint)pDVar7->max_length <= uVar3) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            pEVar6 = (EquipableData *)(*pcVar5)();
            return pEVar6;
          }
          pEVar6 = &pDVar7->vector[(int)uVar3].value;
          uVar8 = *(undefined4 *)&pEVar6->prefabObject;
          uVar9 = *(undefined4 *)((longlong)&pEVar6->prefabObject + 4);
          iVar10 = pEVar6->equipableType;
          uVar11 = *(undefined4 *)&pEVar6->field_0xc;
          goto code_?;
        }
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
    if ((pPVar1 != (PrefabPool *)0x0) &&
       (pDVar12 = (pPVar1->fields).pickupPrefabLUT,
       pDVar12 != (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)0x0)) {
      puVar13 = (undefined4 *)FUN_?(auStack_14,pDVar12,avatarItemType);
      uVar8 = *puVar13;
      uVar9 = puVar13[1];
      iVar10 = puVar13[2];
      uVar11 = puVar13[3];
code_?:
      *(undefined4 *)&__return_storage_ptr__->prefabObject = uVar8;
      *(undefined4 *)((longlong)&__return_storage_ptr__->prefabObject + 4) = uVar9;
      __return_storage_ptr__->equipableType = iVar10;
      *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar11;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pEVar6 = (EquipableData *)(*pcVar5)();
  return pEVar6;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PrefabPool::PrefabPool_OnDestroy(PrefabPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__PrefabPool->static_fields->instance = (PrefabPool *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__PrefabPool->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}


/* MVPickupItemBaseObject get_AvatarCenterGunPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarCenterGunPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarCenterGunPrefab;
}


/* AvatarInputControllerTouchSettings get_AvatarInputControllerTouchSettings() */

AvatarInputControllerTouchSettings *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarInputControllerTouchSettings
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarInputControllerTouchSettings;
}


/* GameObject get_AvatarItemBazooka() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemBazooka
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemBazooka;
}


/* GameObject get_AvatarItemCostume() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemCostume
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemCostume;
}


/* GameObject get_AvatarItemCustomGun() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemCustomGun
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemCustomGun;
}


/* GameObject get_AvatarItemFlamethrower() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemFlamethrower
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemFlamethrower;
}


/* GameObject get_AvatarItemHand() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemHand(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemHand;
}


/* GameObject get_AvatarItemHealRay() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemHealRay
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemHealRay;
}


/* GameObject get_AvatarItemMeleeWeapon() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemMeleeWeapon
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemMeleeWeapon;
}


/* GameObject get_AvatarItemShotgun() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemShotgun
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemShotgun;
}


/* GameObject get_AvatarItemSword() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemSword(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemSword;
}


/* Material get_BlinkerDefaultMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_BlinkerDefaultMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).blinkerDefaultMaterial;
}


/* Material get_CellCursorErrorMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_CellCursorErrorMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).cellCursorErrorMaterial;
}


/* Material get_CellCursorMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_CellCursorMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).cellCursorMaterial;
}


/* ParticleSystem get_CollectTheItemParticles() */

ParticleSystem *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_CollectTheItemParticles
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).collectTheItemParticles;
}


/* CubeModelChunkPrefab get_CubeModelChunkPrefab() */

CubeModelChunkPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_CubeModelChunkPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).cubeModelChunkPrefab;
}


/* Material get_Cursor2dCornerMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_Cursor2dCornerMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).cursor2dCornerMaterial;
}


/* Material get_Cursor2dEdgeMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_Cursor2dEdgeMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).cursor2dEdgeMaterial;
}


/* Material get_CursorCornerMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_CursorCornerMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).cursorCornerMaterial;
}


/* Material get_CursorMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_CursorMaterial(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).cursorMaterial;
}


/* Material get_CursorNoneMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_CursorNoneMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).cursorNoneMaterial;
}


/* ObjectPrefab get_DoorPrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_DoorPrefab(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).doorPrefab;
}


/* GameObject get_DrawPlaneObject() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_DrawPlaneObject(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).drawPlaneObject;
}


/* SentryGunBeam get_FireBeamObject() */

SentryGunBeam *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_FireBeamObject(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).fireBeamObject;
}


/* MVGamePointObject get_GamePointPrefab() */

MVGamePointObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_GamePointPrefab(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).gamePointPrefab;
}


/* AdvancedGhostIcon get_GhostEditorIconObject() */

AdvancedGhostIcon *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_GhostEditorIconObject
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).ghostEditorIconObject;
}


/* Material get_GhostMarkerMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_GhostMarkerMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).ghostMarkerMaterial;
}


/* ParticleSystem get_GoldExplosion() */

ParticleSystem *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_GoldExplosion(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).goldExplosion;
}


/* ParticleSystem get_HealingParticles() */

ParticleSystem *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_HealingParticles
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).healingParticles;
}


/* SentryGunBeam get_IceBeamObject() */

SentryGunBeam *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_IceBeamObject(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).iceBeamObject;
}


/* Material get_IndentMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_IndentMaterial(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).indentMaterial;
}


/* Material get_InsertPreviewMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_InsertPreviewMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).insertPreviewMaterial;
}


/* PrefabPool get_Instance() */

PrefabPool * Assembly-CSharp.dll::PrefabPool::PrefabPool_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__PrefabPool->static_fields->instance;
}


/* Dictionary`2[MVJetPack+JetPackType,WorldObjectTypes.VehiclesBase.Shared.VehicleBaseObject]
   get_JetPackPrefabLUT() */

Dictionary_2_MVJetPack_JetPackType_WorldObjectTypes_VehiclesBase_Shared_VehicleBaseObject_ *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_JetPackPrefabLUT(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    return (pPVar1->fields).jetPackPrefabLUT;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pDVar3 = (Dictionary_2_MVJetPack_JetPackType_WorldObjectTypes_VehiclesBase_Shared_VehicleBaseObject_
            *)(*pcVar2)();
  return pDVar3;
}


/* LineRangeIndicator get_LineRangeIndicator() */

LineRangeIndicator *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_LineRangeIndicator
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).lineRangeIndicator;
}


/* LinkObjectScript get_LinkObject() */

LinkObjectScript *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_LinkObject(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).linkObject;
}


/* Material get_LogicCubeConnectorBlueSelectedMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_LogicCubeConnectorBlueSelectedMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).logicCubeConnectorBlueSelectedMaterial;
}


/* Material get_LogicCubeConnectorRedMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_LogicCubeConnectorRedMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).logicCubeConnectorRedMaterial;
}


/* GameObject get_LogicInputConnectorPrefab() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_LogicInputConnectorPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).logicInputConnectorPrefab;
}


/* GameObject get_LogicObjectConnectorPrefab() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_LogicObjectConnectorPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).logicObjectConnectorPrefab;
}


/* GameObject get_LogicOutputConnectorPrefab() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_LogicOutputConnectorPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).logicOutputConnectorPrefab;
}


/* MVObjectTransparencyObject get_MVObjectTransparencyPrefab() */

MVObjectTransparencyObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVObjectTransparencyPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvObjectTransparencyPrefab;
}


/* Material get_ModelCubeSpaceMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_ModelCubeSpaceMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).modelCubeSpaceMaterial;
}


/* Material get_ObjectHiddenMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_ObjectHiddenMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).objectHiddenMaterial;
}


/* GameObject get_ParticleCFX_GroundAura() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_ParticleCFX_GroundAura
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).particleCFX_GroundAura;
}


/* ParticleSystem get_ParticleCubeDust() */

ParticleSystem *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_ParticleCubeDust
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).particleCubeDust;
}


/* ParticleSystem get_ParticleCubeDustDestroyed() */

ParticleSystem *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_ParticleCubeDustDestroyed
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).particleCubeDustDestroyed;
}


/* ParticleSystem get_ParticleExplosion() */

ParticleSystem *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_ParticleExplosion
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).particleExplosion;
}


/* Dictionary`2[MV.Common.AvatarItemType,EquipableData] get_PickupPrefabLUT() */

Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_PickupPrefabLUT(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    return (pPVar1->fields).pickupPrefabLUT;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pDVar3 = (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)(*pcVar2)();
  return pDVar3;
}


/* ParticleSystem get_PoisonParticles() */

ParticleSystem *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_PoisonParticles(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).poisonParticles;
}


/* Material get_PreviewBoxMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_PreviewBoxMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).previewBoxMaterial;
}


/* SphereVolumeIndicator get_RangeVisualizationObject() */

SphereVolumeIndicator *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_RangeVisualizationObject
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).rangeVisualizationObject;
}


/* RewardedAdDisplayObject get_RewardedAdDisplayPrefab() */

RewardedAdDisplayObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_RewardedAdDisplayPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).rewardedAdDisplayPrefab;
}


/* Material get_RoundedRectangleMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_RoundedRectangleMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).roundedRectangleMaterial;
}


/* Material get_SelectBoxMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_SelectBoxMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).selectBoxMaterial;
}


/* AvatarModifier get_ShieldModifier() */

AvatarModifier *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_ShieldModifier(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).shieldModifier;
}


/* StarDisplayObject get_StarDisplayPrefab() */

StarDisplayObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_StarDisplayPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).starDisplayPrefab;
}


/* ObjectPrefab get_TeamEditorPrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_TeamEditorPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).teamEditorPrefab;
}


/* TeleportAvatar get_TeleportAvatarPrefab() */

TeleportAvatar *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_TeleportAvatarPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).teleportAvatarPrefab;
}


/* TransformGizmo get_TransformGizmo() */

TransformGizmo *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_TransformGizmo(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).transformGizmo;
}


/* TriggerCubePrefab get_TriggerCubePrefab() */

TriggerCubePrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_TriggerCubePrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).triggerCubePrefab;
}


/* ObjectPrefab get_VehicleEnergyPrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_VehicleEnergyPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).vehicleEnergyPrefab;
}

