
/* Void AddChild(KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
     GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
     GameBoosterSettingWithGoldSetting_AddChild
               (GameBoosterSettingWithGoldSetting *this,KogamaSettingWrapperBase *kogamaSetting,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (kogamaSetting != (KogamaSettingWrapperBase *)0x0) {
    pSVar1 = (String *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)kogamaSetting,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_op_Inequality
                      (pSVar1,StringLiteral_sk,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      this = (GameBoosterSettingWithGoldSetting *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)kogamaSetting,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar2 = mscorlib.dll::System::String::String_op_Inequality
                        ((String *)this,StringLiteral_gsk,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pSVar1 = (String *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)kogamaSetting,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        bVar2 = mscorlib.dll::System::String::String_op_Inequality
                          (pSVar1,StringLiteral_tsk,(MethodInfo *)0x0);
        if (bVar2 != 0) goto code_?;
      }
    }
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
    KogamaSettingsCollectionBase_AddChild
              ((KogamaSettingsCollectionBase *)this,kogamaSetting,(MethodInfo *)0x0);
    return;
  }
  func_?();
code_?:
  this_00 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_00,StringLiteral_Only_child_with_setting_key_is_a,(MethodInfo *)0x0);
  pMStack3 =
       MethodInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting__AddChild_MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
  ;
  uStack4 = 0;
  pIStack5 = this_00;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* KogamaSettingsCollectionBase CopyWithOutChildren(KogamaSettingsCollectionBase) */

KogamaSettingsCollectionBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
GameBoosterSettingWithGoldSetting_CopyWithOutChildren
          (GameBoosterSettingWithGoldSetting *this,KogamaSettingsCollectionBase *parent,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (String *)
        mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
        Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
  this_00 = (KogamaSettingsCollectionBase *)
            func_?(
                           TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
                           );
  KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
  KogamaSettingsCollectionBase__ctor(this_00,key,parent,(MethodInfo *)0x0);
  return this_00;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
         GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
         GameBoosterSettingWithGoldSetting_ToString
                   (GameBoosterSettingWithGoldSetting *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  pSVar1 = KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
           KogamaSettingsCollectionBase_ToString
                     ((KogamaSettingsCollectionBase *)this,(MethodInfo *)0x0);
  if (args == (Object__Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pSVar1;
    pDVar4 = (this->fields)._.children;
    if (pDVar4 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)0x0) goto code_?;
    pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pDVar4,(Type *)StringLiteral_sk,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                       );
    if (pPVar5 != (Pool *)0x0) {
      iVar3 = func_?(pPVar5);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)pPVar5;
    pDVar4 = (this->fields)._.children;
    if (pDVar4 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)0x0) goto code_?;
    pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pDVar4,(Type *)StringLiteral_gsk,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                       );
    if (pPVar5 != (Pool *)0x0) {
      iVar3 = func_?(pPVar5);
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)pPVar5;
    pDVar4 = (this->fields)._.children;
    if (pDVar4 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)0x0) goto code_?;
    pPVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pDVar4,(Type *)StringLiteral_tsk,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                       );
    if (pPVar5 == (Pool *)0x0) {
code_?:
      if (3 < args->max_length) {
        args->vector[3] = (Object *)pPVar5;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar1 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral__0___Setting___1__GoldSetting___,args,(MethodInfo *)0x0);
        return pSVar1;
      }
      goto code_?;
    }
    iVar3 = func_?(pPVar5);
    if (iVar3 != 0) goto code_?;
  }
  uVar2 = func_?(0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0);
  func_?(uVar2);
  pcVar6 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar6)();
  return pSVar1;
}


/* GameBoosterSettingWithGoldSetting(String, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
     GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
     GameBoosterSettingWithGoldSetting__ctor
               (GameBoosterSettingWithGoldSetting *this,String *key,
               KogamaSettingsCollectionBase *kogamaSettingsCollection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = 
  TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
  ;
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
            );
  (this->fields)._.children = this_00;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields)._._._Parent_k__BackingField = kogamaSettingsCollection;
  (this->fields)._._.key = key;
  return;
}


/* KogamaSettingNumericBase`1[System.Int32] get_GoldPrice() */

KogamaSettingNumericBase_1_System_Int32_ *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
GameBoosterSettingWithGoldSetting_get_GoldPrice
          (GameBoosterSettingWithGoldSetting *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.children;
  if (this_00 ==
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    func_?(0);
    pPVar1 = extraout_EDX;
  }
  else {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,(Type *)StringLiteral_gsk,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                       );
    if (pPVar1 == (Pool *)0x0) {
      return (KogamaSettingNumericBase_1_System_Int32_ *)0x0;
    }
    bVar2 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
            ->_1).naturalAligment;
    if (((pPVar1->klass->_1).naturalAligment < bVar2) ||
       ((pPVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pPVar4 = (Pool *)0x0;
    if (bVar3) {
      pPVar4 = pPVar1;
    }
    if (pPVar4 != (Pool *)0x0) {
      return (KogamaSettingNumericBase_1_System_Int32_ *)pPVar4;
    }
  }
  func_?(pPVar1);
  pcVar5 = (code *)swi(3);
  pKVar6 = (KogamaSettingNumericBase_1_System_Int32_ *)(*pcVar5)();
  return pKVar6;
}


/* KogamaSettingValueWrapperBase get_Setting() */

KogamaSettingValueWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
GameBoosterSettingWithGoldSetting_get_Setting
          (GameBoosterSettingWithGoldSetting *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.children;
  if (this_00 ==
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    func_?(0);
    pPVar1 = extraout_EDX;
  }
  else {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,(Type *)StringLiteral_sk,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                       );
    if (pPVar1 == (Pool *)0x0) {
      return (KogamaSettingValueWrapperBase *)0x0;
    }
    bVar2 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
            ->_1).naturalAligment;
    if (((pPVar1->klass->_1).naturalAligment < bVar2) ||
       ((pPVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pPVar4 = (Pool *)0x0;
    if (bVar3) {
      pPVar4 = pPVar1;
    }
    if (pPVar4 != (Pool *)0x0) {
      return (KogamaSettingValueWrapperBase *)pPVar4;
    }
  }
  func_?(pPVar1);
  pcVar5 = (code *)swi(3);
  pKVar6 = (KogamaSettingValueWrapperBase *)(*pcVar5)();
  return pKVar6;
}

