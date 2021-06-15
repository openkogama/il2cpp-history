
/* Void Awake() */

void Assembly-CSharp.dll::PrefabPool::PrefabPool_Awake(PrefabPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?();
  }
  TypeInfo__PrefabPool->static_fields->instance = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Dictionary__
            );
  pOVar1 = (ObjectPrefab *)0x0;
  iVar2 = 0;
  func_?(&stack0xfffffff4,(this->fields).avatarCenterGunPrefab,0,0);
  if (this_00 != (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)0x0) {
    value_08.equipableType = iVar2;
    value_08.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_CenterGun,value_08,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?(&stack0xffffffec,(this->fields).avatarImpulseGunPrefab,0,0);
    value_07.equipableType = iVar2;
    value_07.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_ImpulseGun,value_07,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?(&stack0xffffffe4,(this->fields).avatarHealthPrefab,1,0);
    value_10.equipableType = iVar2;
    value_10.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_Health,value_10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_09.equipableType = iVar2;
    value_09.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_Bazooka,value_09,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_RailGun,(EquipableData)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_11.equipableType = iVar2;
    value_11.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_Mutant,value_11,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_13.equipableType = iVar2;
    value_13.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_Sword,value_13,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    func_?();
    value_12.equipableType =
         (int32_t)
         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
    ;
    value_12.prefabObject =
         (ObjectPrefab *)
         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_Shotgun,value_12,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_14.equipableType = iVar2;
    value_14.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_Flamethrower,value_14,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_CubeGun,(EquipableData)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_00.equipableType = iVar2;
    value_00.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_NinjaRun,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value.equipableType = iVar2;
    value.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_SixShooter,value,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_02.equipableType = iVar2;
    value_02.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_DoubleSixShooter,value_02,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_01.equipableType = iVar2;
    value_01.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_ThrowingStar,value_01,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_MultiThrowingStar,(EquipableData)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_03.equipableType = iVar2;
    value_03.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_MouseGun,value_03,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_05.equipableType = iVar2;
    value_05.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_GrowthGun,value_05,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_04.equipableType = iVar2;
    value_04.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_MousePack,value_04,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_06.equipableType = iVar2;
    value_06.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_GrowthPack,value_06,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_HealRay,(EquipableData)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    (this->fields).pickupPrefabLUT = this_00;
    this_01 = (Dictionary_2_MVJetPack_JetPackType_VehicleBaseObject_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_VehicleBaseObject>__Dictionary__
              );
    if (this_01 != (Dictionary_2_MVJetPack_JetPackType_VehicleBaseObject_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MVJetPack+JetPackType,System::Object]
      ::Dictionary_2_MVJetPack_JetPackType_System_Object__Add
                ((Dictionary_2_MVJetPack_JetPackType_System_Object_ *)this_01,
                 MVJetPack_JetPackType__Enum_JetPack,(Object *)(this->fields).mvJetPackPrefab,
                 MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_VehicleBaseObject>__Add_MVJetPack__JetPackType__VehicleBaseObject_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MVJetPack+JetPackType,System::Object]
      ::Dictionary_2_MVJetPack_JetPackType_System_Object__Add
                ((Dictionary_2_MVJetPack_JetPackType_System_Object_ *)this_01,
                 MVJetPack_JetPackType__Enum_JetPackDeluxe,
                 (Object *)(this->fields).mvJetPackDeluxePrefab,
                 MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_VehicleBaseObject>__Add_MVJetPack__JetPackType__VehicleBaseObject_
                );
      (this->fields).jetPackPrefabLUT = this_01;
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void BuildLookupTables() */

void Assembly-CSharp.dll::PrefabPool::PrefabPool_BuildLookupTables
               (PrefabPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Dictionary__
            );
  pOVar1 = (ObjectPrefab *)0x0;
  iVar2 = 0;
  func_?(&stack0xfffffff4,(this->fields).avatarCenterGunPrefab,0,0);
  if (this_00 != (Dictionary_2_MV_Common_AvatarItemType_EquipableData_ *)0x0) {
    value_08.equipableType = iVar2;
    value_08.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_CenterGun,value_08,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?(&stack0xffffffec,(this->fields).avatarImpulseGunPrefab,0,0);
    value_07.equipableType = iVar2;
    value_07.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_ImpulseGun,value_07,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?(&stack0xffffffe4,(this->fields).avatarHealthPrefab,1,0);
    value_10.equipableType = iVar2;
    value_10.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_Health,value_10,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_09.equipableType = iVar2;
    value_09.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_Bazooka,value_09,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_RailGun,(EquipableData)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_11.equipableType = iVar2;
    value_11.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_Mutant,value_11,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_13.equipableType = iVar2;
    value_13.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_Sword,value_13,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    func_?();
    value_12.equipableType =
         (int32_t)
         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
    ;
    value_12.prefabObject =
         (ObjectPrefab *)
         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
    ;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_Shotgun,value_12,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_14.equipableType = iVar2;
    value_14.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_Flamethrower,value_14,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_CubeGun,(EquipableData)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_00.equipableType = iVar2;
    value_00.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_NinjaRun,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value.equipableType = iVar2;
    value.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_SixShooter,value,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_02.equipableType = iVar2;
    value_02.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_DoubleSixShooter,value_02,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_01.equipableType = iVar2;
    value_01.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_ThrowingStar,value_01,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_MultiThrowingStar,(EquipableData)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_03.equipableType = iVar2;
    value_03.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_MouseGun,value_03,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_05.equipableType = iVar2;
    value_05.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_GrowthGun,value_05,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_04.equipableType = iVar2;
    value_04.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_MousePack,value_04,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    pOVar1 = (ObjectPrefab *)0x0;
    iVar2 = 0;
    func_?();
    value_06.equipableType = iVar2;
    value_06.prefabObject = pOVar1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_GrowthPack,value_06,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
    AvatarItemType,EquipableData]::Dictionary_2_MV_Common_AvatarItemType_EquipableData__Add
              (this_00,AvatarItemType__Enum_HealRay,(EquipableData)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AvatarItemType,_EquipableData>__Add_MV__Common__AvatarItemType__EquipableData_
              );
    (this->fields).pickupPrefabLUT = this_00;
    this_01 = (Dictionary_2_MVJetPack_JetPackType_VehicleBaseObject_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_VehicleBaseObject>__Dictionary__
              );
    if (this_01 != (Dictionary_2_MVJetPack_JetPackType_VehicleBaseObject_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MVJetPack+JetPackType,System::Object]
      ::Dictionary_2_MVJetPack_JetPackType_System_Object__Add
                ((Dictionary_2_MVJetPack_JetPackType_System_Object_ *)this_01,
                 MVJetPack_JetPackType__Enum_JetPack,(Object *)(this->fields).mvJetPackPrefab,
                 MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_VehicleBaseObject>__Add_MVJetPack__JetPackType__VehicleBaseObject_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MVJetPack+JetPackType,System::Object]
      ::Dictionary_2_MVJetPack_JetPackType_System_Object__Add
                ((Dictionary_2_MVJetPack_JetPackType_System_Object_ *)this_01,
                 MVJetPack_JetPackType__Enum_JetPackDeluxe,
                 (Object *)(this->fields).mvJetPackDeluxePrefab,
                 MethodInfo__System__Collections__Generic__Dictionary<MVJetPack::JetPackType,_VehicleBaseObject>__Add_MVJetPack__JetPackType__VehicleBaseObject_
                );
      (this->fields).jetPackPrefabLUT = this_01;
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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


/* Void OnDestroy() */

void Assembly-CSharp.dll::PrefabPool::PrefabPool_OnDestroy(PrefabPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  TypeInfo__PrefabPool->static_fields->instance = (PrefabPool *)0x0;
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


/* ObjectiveArrow get_CollectTheItemDropOffArrowPrefab() */

ObjectiveArrow *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).collectTheItemDropOffArrow;
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


/* GameCoinDisplayObject get_GameCoinDisplayPrefab() */

GameCoinDisplayObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_GameCoinDisplayPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).gameCoinDisplayPrefab;
}


/* ObjectPrefab get_GamePointChestPrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_GamePointChestPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).gamePointChestPrefab;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  return TypeInfo__PrefabPool->static_fields->instance;
}


/* Dictionary`2[MVJetPack+JetPackType,VehicleBaseObject] get_JetPackPrefabLUT() */

Dictionary_2_MVJetPack_JetPackType_VehicleBaseObject_ *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_JetPackPrefabLUT(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    return (pPVar1->fields).jetPackPrefabLUT;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pDVar3 = (Dictionary_2_MVJetPack_JetPackType_VehicleBaseObject_ *)(*pcVar2)();
  return pDVar3;
}


/* LevelDisplayCube get_LevelDisplayPrefab() */

LevelDisplayCube *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_LevelDisplayPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).levelDisplayPrefab;
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


/* ObjectPrefab get_MVBatteryPrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVBatteryPrefab(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvBatteryPrefab;
}


/* ObjectPrefab get_MVCameraSettingsPrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVCameraSettingsPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvCameraSettingsPrefab;
}


/* ObjectPrefab get_MVCheckpointPrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVCheckpointPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvCheckpointPrefab;
}


/* MVCollectibleObject get_MVCollectibleFantaPrefab() */

MVCollectibleObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVCollectibleFantaPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvCollectibleFantaPrefab;
}


/* MVCollectibleObject get_MVCollectiblePrefab() */

MVCollectibleObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVCollectiblePrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvCollectiblePrefab;
}


/* ObjectPrefab get_MVGameCoinChestPrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVGameCoinChestPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvGameCoinChestPrefab;
}


/* MVGameCoinObject get_MVGameCoinPrefab() */

MVGameCoinObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVGameCoinPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvGameCoinPrefab;
}


/* VehicleBaseObject get_MVJetPackPrefab() */

VehicleBaseObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVJetPackPrefab(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvJetPackPrefab;
}


/* ObjectPrefab get_MVKillLimitPrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVKillLimitPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvKillLimitPrefab;
}


/* ObjectPrefab get_MVNegatePrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVNegatePrefab(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvNegatePrefab;
}


/* MVPointLightObject get_MVPointLightPrefab() */

MVPointLightObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVPointLightPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvPointLightPrefab;
}


/* ObjectPrefab get_MVPulseBoxPrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVPulseBoxPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvPulseBoxPrefab;
}


/* ObjectPrefab get_MVRandomBoxPrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVRandomBoxPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvRandomBoxPrefab;
}


/* ObjectPrefab get_MVRoundCubePrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVRoundCubePrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvRoundCubePrefab;
}


/* ObjectPrefab get_MVSmokePrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVSmokePrefab(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvSmokePrefab;
}


/* SoundEmitterObject get_MVSoundEmitterPrefab() */

SoundEmitterObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVSoundEmitterPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvSoundEmitterPrefab;
}


/* ObjectPrefab get_MVSpawnPointRedPrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVSpawnPointRedPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvSpawnPointRedPrefab;
}


/* ObjectPrefab get_MVSpawnPointYellowPrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVSpawnPointYellowPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvSpawnPointYellowPrefab;
}


/* MVTextMsgObject get_MVTextMsgPrefab() */

MVTextMsgObject *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVTextMsgPrefab(PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvTextMsgPrefab;
}


/* ObjectPrefab get_MVTimeTriggerPrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVTimeTriggerPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvTimeTriggerPrefab;
}


/* ObjectPrefab get_MVToggleBoxPrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_MVToggleBoxPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).mvToggleBoxPrefab;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    return (pPVar1->fields).pickupPrefabLUT;
  }
  func_?(0);
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


/* ObjectPrefab get_TeamEditorPrefab() */

ObjectPrefab *
Assembly-CSharp.dll::PrefabPool::PrefabPool_get_TeamEditorPrefab
          (PrefabPool *this,MethodInfo *method)

{
  return (this->fields).teamEditorPrefab;
}

