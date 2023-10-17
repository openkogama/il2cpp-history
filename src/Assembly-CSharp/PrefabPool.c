
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
  pDVar1 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
            *)func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>
                             );
  if (pDVar1 != (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                 *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Dictionary__
              );
    SStack_2._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_2._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_2,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarCenterGunPrefab,0,(MethodInfo *)0x0);
    key_14.TypeName = (String *)SStack_2._source;
    key_14.AssemblyName = (String *)0x1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_14,(Object *)SStack_2._index,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_3._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_3._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_3,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarImpulseGunPrefab,0,(MethodInfo *)0x0);
    key_15.TypeName = (String *)SStack_3._source;
    key_15.AssemblyName = (String *)0x2;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_15,(Object *)SStack_3._index,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_4._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_4._index = 0;
    stack0xffffff78 = (Object *)&UNK_?;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_4,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)(this->fields).avatarHealthPrefab,
               1,(MethodInfo *)0x0);
    key_17.TypeName = (String *)SStack_4._source;
    key_17.AssemblyName = (String *)0x3;
    stack0xffffff78 = (Object *)pDVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_17,(Object *)SStack_4._index,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_5._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_5._index = 0;
    stack0xffffff78 = (Object *)&UNK_?;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_5,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)(this->fields).avatarBazookaPrefab
               ,0,(MethodInfo *)0x0);
    key_18.TypeName = (String *)SStack_5._source;
    key_18.AssemblyName = (String *)0x4;
    stack0xffffff78 = (Object *)pDVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_18,(Object *)SStack_5._index,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_6._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_6._index = 0;
    stack0xffffffc0 = (Object *)&UNK_?;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_6,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)(this->fields).avatarRailGunPrefab
               ,0,(MethodInfo *)0x0);
    key_19.TypeName = (String *)SStack_6._source;
    key_19.AssemblyName = (String *)0x6;
    stack0xffffffc0 = (Object *)pDVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_19,(Object *)SStack_6._index,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    stack0xffffffc0 = (Object *)&UNK_?;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              ((SparselyPopulatedArrayAddInfo_1_System_Object_ *)&stack0xffffffcc,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)(this->fields).avatarMutantPrefab,
               0,(MethodInfo *)0x0);
    key_20.TypeName =
         (String *)
         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
    ;
    key_20.AssemblyName = (String *)0x7;
    stack0xffffffc0 = (Object *)pDVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_20,
               (Object *)
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
               ,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SVar7._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SVar7._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              ((SparselyPopulatedArrayAddInfo_1_System_Object_ *)&stack0xffffffc4,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarMeleeWeaponPrefab,0,(MethodInfo *)0x0);
    key.TypeName = (String *)SVar7._source;
    key.AssemblyName = (String *)0x8;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key,(Object *)SVar7._index,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pSStack_8 = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    stack0xffffffc0 = (Object *)0x0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              ((SparselyPopulatedArrayAddInfo_1_System_Object_ *)&pSStack_8,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)(this->fields).avatarShotgunPrefab
               ,0,(MethodInfo *)0x0);
    key_00.TypeName = (String *)pSStack_8;
    key_00.AssemblyName = (String *)0x9;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_00,stack0xffffffc0,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_9._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_9._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_9,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarFlamethrowerPrefab,0,(MethodInfo *)0x0);
    key_01.TypeName = (String *)SStack_9._source;
    key_01.AssemblyName = (String *)0xa;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_01,(Object *)SStack_9._index,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_10._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_10._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_10,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)(this->fields).avatarCubeGunPrefab
               ,0,(MethodInfo *)0x0);
    key_02.TypeName = (String *)SStack_10._source;
    key_02.AssemblyName = (String *)0xb;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_02,(Object *)SStack_10._index,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_11._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_11._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_11,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarNinjaRunPrefab,1,(MethodInfo *)0x0);
    key_03.TypeName = (String *)SStack_11._source;
    key_03.AssemblyName = (String *)0xe;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_03,(Object *)SStack_11._index,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_12._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_12._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_12,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarSixShooterPrefab,0,(MethodInfo *)0x0);
    key_04.TypeName = (String *)SStack_12._source;
    key_04.AssemblyName = (String *)0xc;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_04,(Object *)SStack_12._index,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_13._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_13._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_13,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarDoubleSixShooterPrefab,0,(MethodInfo *)0x0);
    key_05.TypeName = (String *)SStack_13._source;
    key_05.AssemblyName = (String *)0xd;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_05,(Object *)SStack_13._index,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_14._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_14._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_14,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarThrowingStarPrefab,0,(MethodInfo *)0x0);
    key_06.TypeName = (String *)SStack_14._source;
    key_06.AssemblyName = (String *)0x2d;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_06,(Object *)SStack_14._index,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SVar15._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SVar15._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              ((SparselyPopulatedArrayAddInfo_1_System_Object_ *)&stack0xffffff84,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarMultiThrowingStarPrefab,0,(MethodInfo *)0x0);
    key_07.TypeName = (String *)SVar15._source;
    key_07.AssemblyName = (String *)0x2e;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_07,(Object *)SVar15._index,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SVar16._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SVar16._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              ((SparselyPopulatedArrayAddInfo_1_System_Object_ *)&stack0xffffff7c,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarMouseGunPrefab,0,(MethodInfo *)0x0);
    key_08.TypeName = (String *)SVar16._source;
    key_08.AssemblyName = (String *)0x3c;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_08,(Object *)SVar16._index,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pSStack_17 = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    stack0xffffff78 = (Object *)0x0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              ((SparselyPopulatedArrayAddInfo_1_System_Object_ *)&pSStack_17,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarGrowthGunPrefab,0,(MethodInfo *)0x0);
    key_09.TypeName = (String *)pSStack_17;
    key_09.AssemblyName = (String *)0x3e;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_09,stack0xffffff78,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_18._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_18._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_18,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarMousePackPrefab,1,(MethodInfo *)0x0);
    key_10.TypeName = (String *)SStack_18._source;
    key_10.AssemblyName = (String *)0x3f;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_10,(Object *)SStack_18._index,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_19._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_19._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_19,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)
               (this->fields).avatarGrowthPackPrefab,1,(MethodInfo *)0x0);
    key_11.TypeName = (String *)SStack_19._source;
    key_11.AssemblyName = (String *)0x40;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_11,(Object *)SStack_19._index,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_20._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_20._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_20,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)(this->fields).avatarHealRayPrefab
               ,0,(MethodInfo *)0x0);
    key_12.TypeName = (String *)SStack_20._source;
    key_12.AssemblyName = (String *)0x46;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_12,(Object *)SStack_20._index,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    SStack_21._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
    SStack_21._index = 0;
    mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
    SparselyPopulatedArrayAddInfo_1_System_Object___ctor
              (&SStack_21,
               (SparselyPopulatedArrayFragment_1_System_Object_ *)(this->fields).avatarCostumePrefab
               ,0,(MethodInfo *)0x0);
    key_13.TypeName = (String *)SStack_21._source;
    key_13.AssemblyName = (String *)0x3b;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
    DefaultSerializationBinder+TypeNameKey,System::Object]::
    Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
              (pDVar1,key_13,(Object *)SStack_21._index,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    (this->fields).pickupPrefabLUT = (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)pDVar1;
    func_?();
    pDVar1 = (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
              *)func_?();
    if (pDVar1 != (Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object_
                   *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Dictionary__
                );
      SStack_22._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
      SStack_22._index = 0;
      mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
      SparselyPopulatedArrayAddInfo_1_System_Object___ctor
                (&SStack_22,
                 (SparselyPopulatedArrayFragment_1_System_Object_ *)
                 (this->fields).avatarMeleeWeaponPrefab,0,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
      DefaultSerializationBinder+TypeNameKey,System::Object]::
      Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
                (pDVar1,(DefaultSerializationBinder_TypeNameKey)((longlong)SStack_22 << 0x20),
                 (Object *)SStack_22._index,
                 MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Add_bool__EquipableData_
                );
      SStack_23._source = (SparselyPopulatedArrayFragment_1_System_Object_ *)0x0;
      SStack_23._index = 0;
      mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
      SparselyPopulatedArrayAddInfo_1_System_Object___ctor
                (&SStack_23,
                 (SparselyPopulatedArrayFragment_1_System_Object_ *)(this->fields).avatarSwordPrefab
                 ,0,(MethodInfo *)0x0);
      key_16.TypeName = (String *)SStack_23._source;
      key_16.AssemblyName = (String *)0x1;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[Newtonsoft::Json::Serialization::
      DefaultSerializationBinder+TypeNameKey,System::Object]::
      Dictionary_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_System_Object__Add
                (pDVar1,key_16,(Object *)SStack_23._index,
                 MethodInfo__System__Collections__Generic__Dictionary<bool,_EquipableData>__Add_bool__EquipableData_
                );
      (this->fields).meleeWeaponPrefabLUT = (Dictionary_2_System_Boolean_EquipableData_ *)pDVar1;
      func_?();
      this_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__Dictionary__
                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_00,(Object *)0x0,(Object *)(this->fields).mvJetPackPrefab,
                   MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__Add_MVJetPack__JetPackType__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject_
                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_00,(Object *)0x1,(Object *)(this->fields).mvJetPackDeluxePrefab,
                   MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_WorldObjectTypes::VehiclesBase::Shared::VehicleBaseObject>__Add_MVJetPack__JetPackType__WorldObjectTypes__VehiclesBase__Shared__VehicleBaseObject_
                  );
        (this->fields).jetPackPrefabLUT =
             (Dictionary_2_MVJetPack_JetPackType_WorldObjectTypes_VehiclesBase_Shared_VehicleBaseObject_
              *)this_00;
        func_?(&(this->fields).jetPackPrefabLUT,this_00);
        return;
      }
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
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


/* MVPickupItemBaseObject get_AvatarBazookaPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarBazookaPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarBazookaPrefab;
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


/* MVPickupItemBaseObject get_AvatarDoubleSixShooterPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarDoubleSixShooterPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarDoubleSixShooterPrefab;
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


/* AvatarInputControllerAndroidSettings get_AvatarInputControllerAndroidSettings() */

AvatarInputControllerAndroidSettings *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarInputControllerAndroidSettings
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarInputControllerAndroidSettings;
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


/* MVPickupItemBaseObject get_AvatarMultiThrowingStarPrefab() */

MVPickupItemBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_AvatarMultiThrowingStarPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).avatarMultiThrowingStarPrefab;
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


/* LinkObjectScript get_LinkObject() */

LinkObjectScript *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_LinkObject(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).linkObject;
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


/* Material get_LogicCubeConnectorRedMaterial() */

Material *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_LogicCubeConnectorRedMaterial
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).logicCubeConnectorRedMaterial;
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


/* ObjectPrefab get_MVNegatePrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVNegatePrefab(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvNegatePrefab;
}


/* ObjectPrefab get_MVRoundCubePrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVRoundCubePrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvRoundCubePrefab;
}


/* MVTriggerBoxObject get_MVTriggerBoxPrefab() */

MVTriggerBoxObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVTriggerBoxPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvTriggerBoxPrefab;
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


/* ObjectLinkObjectScript get_ObjectLinkObject() */

ObjectLinkObjectScript *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_ObjectLinkObject
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).objectLinkObject;
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


/* TransformGizmo get_TransformGizmo() */

TransformGizmo *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_TransformGizmo(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).transformGizmo;
}

