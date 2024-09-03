
/* Void Awake() */

void Assembly-CSharp.dll::PrefabPool::PrefabPool_Awake(PrefabPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  TypeInfo__PrefabPool->static_fields->instance = this;
  func_?(TypeInfo__PrefabPool->static_fields,this);
  PrefabPool_BuildLookupTables(this,(MethodInfo *)0x0);
  return;
}


/* Void BuildLookupTables() */

void Assembly-CSharp.dll::PrefabPool::PrefabPool_BuildLookupTables
               (PrefabPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Add_bool__EquipableData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__Add_MVJetPack__JetPackType__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>);
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Dictionary__
            );
  SStack_1._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
  SStack_1._index = 0;
  mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
  SparselyPopulatedArrayAddInfo_1_System_Object___ctor
            (&SStack_1,
             (SparselyPopulatedArrayFragment_1_System_Object_ *)(this->fields).avatarCenterGunPrefab
             ,0,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,1,(EquipableData)SStack_1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_2._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_2._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_2,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarImpulseGunPrefab,0,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,2,(EquipableData)SStack_2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_3._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_3._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_3,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)(this->fields).avatarHealthPrefab,
               1,(MethodInfo *)0x0);
    stack0xffffff80 = (int32_t)this_00;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,3,(EquipableData)SStack_3,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_4._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_4._index = 0;
    stack0xffffff80 = (int32_t)&UNK_?;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_4,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)(this->fields).avatarBazookaPrefab
               ,0,(MethodInfo *)0x0);
    stack0xffffff80 = (int32_t)this_00;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,4,(EquipableData)SStack_4,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    stack0xffffff80 = (int32_t)&UNK_?;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              ((SparselyPopulatedArrayAddInfo_1_System_Object_ *)&stack0xffffffd4,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)(this->fields).avatarRailGunPrefab
               ,0,(MethodInfo *)0x0);
    stack0xffffffc8 = (int32_t)this_00;
    value_03.equipableType =
         (int32_t)
         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
    ;
    value_03.prefabObject =
         (ObjectPrefab *)
         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,6,value_03,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar5 = (ObjectPrefab *)0x0;
    iVar6 = 0;
    stack0xffffffc8 = (int32_t)&UNK_?;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              ((SparselyPopulatedArrayAddInfo_1_System_Object_ *)0x0,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0,1,(MethodInfo *)0x0);
    stack0xffffffc8 = (int32_t)this_00;
    value_04.equipableType = iVar6;
    value_04.prefabObject = pOVar5;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,7,value_04,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pSStack_7 = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    stack0xffffffc8 = 0xADDR;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              ((SparselyPopulatedArrayAddInfo_1_System_Object_ *)&pSStack_7,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarMeleeWeaponPrefab,0,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,8,(EquipableData)_pSStack_3c,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_8._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_8._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_8,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)(this->fields).avatarShotgunPrefab
               ,0,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,9,(EquipableData)SStack_8,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_9._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_9._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_9,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarFlamethrowerPrefab,0,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,10,(EquipableData)SStack_9,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_10._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_10._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_10,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)(this->fields).avatarCubeGunPrefab
               ,0,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0xb,(EquipableData)SStack_10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_11._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_11._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_11,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarNinjaRunPrefab,1,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0xe,(EquipableData)SStack_11,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_12._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_12._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_12,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarSixShooterPrefab,0,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0xc,(EquipableData)SStack_12,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_13._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_13._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_13,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarDoubleSixShooterPrefab,0,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0xd,(EquipableData)SStack_13,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar5 = (ObjectPrefab *)0x0;
    iVar6 = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              ((SparselyPopulatedArrayAddInfo_1_System_Object_ *)&stack0xffffff8c,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarThrowingStarPrefab,0,(MethodInfo *)0x0);
    value.equipableType = iVar6;
    value.prefabObject = pOVar5;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x2d,value,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar5 = (ObjectPrefab *)0x0;
    iVar6 = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              ((SparselyPopulatedArrayAddInfo_1_System_Object_ *)&stack0xffffff84,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarMultiThrowingStarPrefab,0,(MethodInfo *)0x0);
    value_00.equipableType = iVar6;
    value_00.prefabObject = pOVar5;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x2e,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOStack_14 = (ObjectPrefab *)0x0;
    stack0xffffff80 = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              ((SparselyPopulatedArrayAddInfo_1_System_Object_ *)&pOStack_14,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarMouseGunPrefab,0,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x3c,
               (EquipableData)_pOStack_84,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_15._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_15._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_15,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarGrowthGunPrefab,0,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x3e,(EquipableData)SStack_15
               ,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_16._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_16._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_16,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarMousePackPrefab,1,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x3f,(EquipableData)SStack_16
               ,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_17._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_17._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_17,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarGrowthPackPrefab,1,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x40,(EquipableData)SStack_17
               ,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_18._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_18._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_18,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)(this->fields).avatarHealRayPrefab
               ,0,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x46,(EquipableData)SStack_18
               ,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_19._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_19._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_19,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)(this->fields).avatarCostumePrefab
               ,0,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0x3b,(EquipableData)SStack_19
               ,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_20._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_20._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_20,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarCustomGunPrefab,0,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,EquipableData]::
    Dictionary_2_System_Int32Enum_EquipableData__Add
              ((Dictionary_2_System_Int32Enum_EquipableData_ *)this_00,0xf,(EquipableData)SStack_20,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    (this->fields).pickupPrefabLUT = this_00;
    func_?();
    this_01 = (Dictionary_2_System_Boolean_EquipableData_ *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Boolean,EquipableData]::
    Dictionary_2_System_Boolean_EquipableData___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Dictionary__
              );
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              ((SparselyPopulatedArrayAddInfo_1_System_Object_ *)&stack0xffffff44,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarMeleeWeaponPrefab,0,(MethodInfo *)0x0);
    if (this_01 != (Dictionary_2_System_Boolean_EquipableData_ *)0x0) {
      value_01.equipableType =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Add_bool__EquipableData_
      ;
      value_01.prefabObject =
           (ObjectPrefab *)
           MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Add_bool__EquipableData_
      ;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Boolean,EquipableData]::
      Dictionary_2_System_Boolean_EquipableData__Add
                (this_01,0,value_01,
                 MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Add_bool__EquipableData_
                );
      pOVar5 = (ObjectPrefab *)0x0;
      iVar6 = 0;
      mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
      SparselyPopulatedArrayAddInfo_1_System_Object___ctor
                ((SparselyPopulatedArrayAddInfo_1_System_Object_ *)0x0,
                 (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0,0,(MethodInfo *)0x0);
      value_02.equipableType = iVar6;
      value_02.prefabObject = pOVar5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Boolean,EquipableData]::
      Dictionary_2_System_Boolean_EquipableData__Add
                (this_01,1,value_02,
                 MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Add_bool__EquipableData_
                );
      (this->fields).meleeWeaponPrefabLUT = this_01;
      func_?();
      stack0xffffff80 =
           (int32_t)
           TypeInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>
      ;
      this_02 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                 *)func_?();
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
      RuntimeEvents::ExplosionEvent+ExplosionValues]::
      Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__Dictionary__
                );
      if (this_02 !=
          (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__Add
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,0,
                   (Object *)(this->fields).mvJetPackPrefab,
                   MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__Add_MVJetPack__JetPackType__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject_
                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
        Dictionary_2_System_ByteEnum_System_Object__Add
                  ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,1,
                   (Object *)(this->fields).mvJetPackDeluxePrefab,
                   MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__Add_MVJetPack__JetPackType__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject_
                  );
        (this->fields).jetPackPrefabLUT =
             (Dictionary_2_MVJetPack_JetPackType_WorldObjectTypes_VehiclesBase_Shared_VehicleBaseObject_
              *)this_02;
        func_?();
        return;
      }
    }
  }
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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

EquipableData
Assembly-CSharp.dll::PrefabPool::PrefabPool_GetPickupPrefab
          (AvatarItemType__Enum avatarItemType,int32_t itemId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__get_Item_MV__Common__AvatarItemType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__get_Item_bool_
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  if (avatarItemType == AvatarItemType__Enum_MeleeWeapon) {
    pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar1 != (PrefabPool *)0x0) {
      this_00 = (pPVar1->fields).meleeWeaponPrefabLUT;
      if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MeleeWeapon__MeleeWeaponData);
      }
      key = Assets::Scripts::WorldObjectTypes::MeleeWeapon::MeleeWeaponData::
            MeleeWeaponData_IsLegacySword(itemId,(MethodInfo *)0x0);
      if (this_00 != (Dictionary_2_System_Boolean_EquipableData_ *)0x0) {
        EVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Boolean,EquipableData]::Dictionary_2_System_Boolean_EquipableData__get_Item
                          (this_00,key,
                           MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__get_Item_bool_
                          );
        return EVar2;
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
    if ((pPVar1 != (PrefabPool *)0x0) &&
       (this = (pPVar1->fields).pickupPrefabLUT,
       this != (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)0x0)) {
      EVar2 = (EquipableData)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32Enum,GamePassesHighScoreList+HighScoreListData]::
              Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData__get_Item
                        ((Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *
                         )this,avatarItemType,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__get_Item_MV__Common__AvatarItemType_
                        );
      return EVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  EVar2 = (EquipableData)(*pcVar3)();
  return EVar2;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PrefabPool::PrefabPool_OnDestroy(PrefabPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  TypeInfo__PrefabPool->static_fields->instance = (PrefabPool *)0x0;
  func_?(TypeInfo__PrefabPool->static_fields,0);
  return;
}


/* Texture2D get_AvatarAccessoryMoveIcon() */

Texture2D *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarAccessoryMoveIcon
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarAccessoryMoveIcon;
}


/* MVPickupItemBaseObject get_AvatarCenterGunPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarCenterGunPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarCenterGunPrefab;
}


/* MVPickupItemBaseObject get_AvatarCostumePrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarCostumePrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarCostumePrefab;
}


/* MVPickupItemBaseObject get_AvatarCubeGunPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarCubeGunPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarCubeGunPrefab;
}


/* MVPickupItemBaseObject get_AvatarCustomGunPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarCustomGunPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarCustomGunPrefab;
}


/* MVPickupItemBaseObject get_AvatarFlamethrowerPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarFlamethrowerPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarFlamethrowerPrefab;
}


/* MVPickupItemBaseObject get_AvatarGrowthGunPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarGrowthGunPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarGrowthGunPrefab;
}


/* MVPickupItemBaseObject get_AvatarGrowthPackPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarGrowthPackPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarGrowthPackPrefab;
}


/* MVPickupItemBaseObject get_AvatarHealRayPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarHealRayPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarHealRayPrefab;
}


/* MVPickupItemBaseObject get_AvatarHealthPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarHealthPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarHealthPrefab;
}


/* MVPickupItemBaseObject get_AvatarImpulseGunPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarImpulseGunPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarImpulseGunPrefab;
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


/* GameObject get_AvatarItemCenterGun() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemCenterGun
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemCenterGun;
}


/* GameObject get_AvatarItemCollectTheItem() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemCollectTheItem
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemCollectTheItem;
}


/* GameObject get_AvatarItemCostume() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemCostume
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemCostume;
}


/* GameObject get_AvatarItemCubeGun() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemCubeGun
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemCubeGun;
}


/* GameObject get_AvatarItemCustomGun() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemCustomGun
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemCustomGun;
}


/* GameObject get_AvatarItemDoubleSixShooter() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemDoubleSixShooter
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemDoubleSixShooter;
}


/* GameObject get_AvatarItemFlamethrower() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemFlamethrower
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemFlamethrower;
}


/* GameObject get_AvatarItemGrowthGun() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemGrowthGun
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemGrowthGun;
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


/* GameObject get_AvatarItemImpulseGun() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemImpulseGun
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemImpulseGun;
}


/* GameObject get_AvatarItemLaserPointer() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemLaserPointer
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemLaserPointer;
}


/* GameObject get_AvatarItemMeleeWeapon() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemMeleeWeapon
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemMeleeWeapon;
}


/* GameObject get_AvatarItemMouseGun() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemMouseGun
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemMouseGun;
}


/* GameObject get_AvatarItemMultiThrowingStar() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemMultiThrowingStar
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemMultiThrowingStar;
}


/* GameObject get_AvatarItemRailGun() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemRailGun
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemRailGun;
}


/* GameObject get_AvatarItemShotgun() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemShotgun
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemShotgun;
}


/* GameObject get_AvatarItemSixShooter() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemSixShooter
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemSixShooter;
}


/* GameObject get_AvatarItemSlapGun() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemSlapGun
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemSlapGun;
}


/* GameObject get_AvatarItemSword() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemSword(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemSword;
}


/* GameObject get_AvatarItemThrowingStar() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarItemThrowingStar
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarItemThrowingStar;
}


/* MVPickupItemBaseObject get_AvatarMeleeWeaponPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarMeleeWeaponPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarMeleeWeaponPrefab;
}


/* MVPickupItemBaseObject get_AvatarMouseGunPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarMouseGunPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarMouseGunPrefab;
}


/* MVPickupItemBaseObject get_AvatarMousePackPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarMousePackPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarMousePackPrefab;
}


/* MVPickupItemBaseObject get_AvatarMutantPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarMutantPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarMutantPrefab;
}


/* MVPickupItemBaseObject get_AvatarNinjaRunPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarNinjaRunPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarNinjaRunPrefab;
}


/* MVPickupItemBaseObject get_AvatarRailGunPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarRailGunPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarRailGunPrefab;
}


/* MVPickupItemBaseObject get_AvatarShotgunPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarShotgunPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarShotgunPrefab;
}


/* MVPickupItemBaseObject get_AvatarSixShooterPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarSixShooterPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarSixShooterPrefab;
}


/* MVPickupItemBaseObject get_AvatarSwordPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarSwordPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarSwordPrefab;
}


/* MVPickupItemBaseObject get_AvatarThrowingStarPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarThrowingStarPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarThrowingStarPrefab;
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


/* ChatBubble get_ChatBubble() */

ChatBubble *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_ChatBubble(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).chatBubble;
}


/* ParticleSystem get_CollectTheItemParticles() */

ParticleSystem *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_CollectTheItemParticles
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).collectTheItemParticles;
}


/* Texture2D get_CrosshairCursor() */

Texture2D *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_CrosshairCursor(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).crosshairCursor;
}


/* Material get_CursorNoneMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_CursorNoneMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).cursorNoneMaterial;
}


/* GameObject get_DrawPlaneObject() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_DrawPlaneObject(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).drawPlaneObject;
}


/* GameCoinDisplayObject get_GameCoinDisplayPrefab() */

GameCoinDisplayObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_GameCoinDisplayPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).gameCoinDisplayPrefab;
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


/* Material get_IndentMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_IndentMaterial(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).indentMaterial;
}


/* InsertCursor get_InsertCursor() */

InsertCursor *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_InsertCursor(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).insertCursor;
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
    func_?(&TypeInfo__PrefabPool);
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
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    return (pPVar1->fields).jetPackPrefabLUT;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pDVar5 = (Dictionary_2_MVJetPack_JetPackType_WorldObjectTypes_VehiclesBase_Shared_VehicleBaseObject_
            *)(*pcVar4)();
  return pDVar5;
}


/* LineRangeIndicator get_LineRangeIndicator() */

LineRangeIndicator *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_LineRangeIndicator
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).lineRangeIndicator;
}


/* Material get_LogicCubeConnectorBlueMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_LogicCubeConnectorBlueMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).logicCubeConnectorBlueMaterial;
}


/* Material get_LogicCubeConnectorBlueSelectedMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_LogicCubeConnectorBlueSelectedMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).logicCubeConnectorBlueSelectedMaterial;
}


/* Material get_LogicCubeConnectorRedSelectedMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_LogicCubeConnectorRedSelectedMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).logicCubeConnectorRedSelectedMaterial;
}


/* GameObject get_LogicInputConnectorPrefab() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_LogicInputConnectorPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).logicInputConnectorPrefab;
}


/* GameObject get_LogicOutputConnectorPrefab() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_LogicOutputConnectorPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).logicOutputConnectorPrefab;
}


/* MaterialButtonTextureGenerator get_MaterialButtonTextureGenerator() */

MaterialButtonTextureGenerator *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MaterialButtonTextureGenerator
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).materialButtonTextureGenerator;
}


/* Material get_ModelConstraintsMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_ModelConstraintsMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).modelConstraintsMaterial;
}


/* GameObject get_MuzzleEditNodePrefab() */

GameObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MuzzleEditNodePrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).muzzleEditNodePrefab;
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


/* ParticleSystem get_ParticleFluffySmoke() */

ParticleSystem *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_ParticleFluffySmoke
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).particleFluffySmoke;
}


/* Dictionary`2[MV.Common.AvatarItemType,EquipableData] get_PickupPrefabLUT() */

Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_PickupPrefabLUT(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    return (pPVar1->fields).pickupPrefabLUT;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pDVar5 = (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)(*pcVar4)();
  return pDVar5;
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

