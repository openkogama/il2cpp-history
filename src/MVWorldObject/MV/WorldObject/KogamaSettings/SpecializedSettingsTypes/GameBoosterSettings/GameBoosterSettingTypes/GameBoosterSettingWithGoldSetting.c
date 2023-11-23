
/* Void AddChild(KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
     GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
     GameBoosterSettingWithGoldSetting_AddChild
               (GameBoosterSettingWithGoldSetting *this,KogamaSettingWrapperBase *kogamaSetting,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_tsk);
    func_?(&StringLiteral_sk);
    func_?(&StringLiteral_gsk);
    cRam_? = '\x01';
  }
  if (kogamaSetting != (KogamaSettingWrapperBase *)0x0) {
    bVar1 = mscorlib.dll::System::String::String_op_Inequality
                      ((kogamaSetting->fields).key,StringLiteral_sk,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      bVar1 = mscorlib.dll::System::String::String_op_Inequality
                        ((kogamaSetting->fields).key,StringLiteral_gsk,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        this = (GameBoosterSettingWithGoldSetting *)(kogamaSetting->fields).key;
        bVar1 = mscorlib.dll::System::String::String_op_Inequality
                          ((String *)this,StringLiteral_tsk,(MethodInfo *)0x0);
        if (bVar1 != 0) goto code_?;
      }
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (this->fields)._.children;
    if (this_00 !=
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_00,
                 (Object *)(kogamaSetting->fields).key,(Object *)kogamaSetting,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Add_System__String__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                );
      return;
    }
  }
  func_?();
code_?:
  func_?();
  this_01 = (Exception *)func_?();
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?();
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,method_00);
  uStack2 = func_?();
  pEStack3 = this_01;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
                   );
    cRam_? = '\x01';
  }
  key = (this->fields)._._.key;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                   );
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_tsk);
    func_?(&StringLiteral_sk);
    func_?(&StringLiteral__0___Setting___1__GoldSetting___);
    func_?(&StringLiteral_gsk);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,4);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Object);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._._.key;
  args_00 = (Object__Array *)func_?(TypeInfo__System__Object,0);
  pSVar1 = mscorlib.dll::System::String::String_Format_3(pSVar1,args_00,(MethodInfo *)0x0);
  if (args == (Object__Array *)0x0) {
code_?:
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
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
    func_?(args->vector,pSVar1);
    pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._.children;
    if (pDVar4 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar4,(Object *)StringLiteral_sk,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                      );
    if (TVar5.m_Index != 0) {
      iVar3 = func_?();
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)TVar5.m_Index;
    func_?();
    pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._.children;
    if (pDVar4 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar4,(Object *)StringLiteral_gsk,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                      );
    if (TVar5.m_Index != 0) {
      iVar3 = func_?();
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)TVar5.m_Index;
    func_?();
    pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._.children;
    if (pDVar4 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar4,(Object *)StringLiteral_tsk,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                      );
    if (TVar5.m_Index == 0) {
code_?:
      if (3 < args->max_length) {
        args->vector[3] = (Object *)TVar5.m_Index;
        func_?();
        pSVar1 = mscorlib.dll::System::String::String_Format_3
                           (StringLiteral__0___Setting___1__GoldSetting___,args,(MethodInfo *)0x0);
        return pSVar1;
      }
      goto code_?;
    }
    iVar3 = func_?();
    if (iVar3 != 0) goto code_?;
  }
  func_?();
  func_?();
code_?:
  func_?();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
            );
  method_00 = (MethodInfo *)&(this->fields)._.children;
  (this->fields)._.children =
       (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
        *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  (this->fields)._._._Parent_k__BackingField = kogamaSettingsCollection;
  func_?(&(this->fields)._._._Parent_k__BackingField,kogamaSettingsCollection);
  (this->fields)._._.key = key;
  func_?(&this->fields,key);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                   );
    func_?(&StringLiteral_gsk);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._.children;
  if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    func_?();
  }
  else {
    unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_00,(Object *)StringLiteral_gsk,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                          );
    if (unaff_ESI.m_Index == 0) {
      return (KogamaSettingNumericBase_1_System_Int32_ *)0x0;
    }
    unaff_EDI = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
    ;
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         ->_1).naturalAligment <= *(byte *)(*(int *)unaff_ESI.m_Index + 0xb8)) &&
       (*(KogamaSettingNumericBase_1_System_Int32___Class **)
         (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
         (uint)(
               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
               ->_1).naturalAligment * 4) ==
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       )) {
      return (KogamaSettingNumericBase_1_System_Int32_ *)unaff_ESI.m_Index;
    }
  }
  func_?(unaff_ESI.m_Index,unaff_EDI);
  pcVar1 = (code *)swi(3);
  pKVar2 = (KogamaSettingNumericBase_1_System_Int32_ *)(*pcVar1)();
  return pKVar2;
}


/* KogamaSettingValueWrapperBase get_Setting() */

KogamaSettingValueWrapperBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
GameBoosterSettingWithGoldSetting_get_Setting
          (GameBoosterSettingWithGoldSetting *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
                   );
    func_?(&StringLiteral_sk);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
            (this->fields)._.children;
  if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    func_?();
  }
  else {
    unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (this_00,(Object *)StringLiteral_sk,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                          );
    if (unaff_ESI.m_Index == 0) {
      return (KogamaSettingValueWrapperBase *)0x0;
    }
    unaff_EDI = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
    ;
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         ->_1).naturalAligment <= *(byte *)(*(int *)unaff_ESI.m_Index + 0xb8)) &&
       (*(KogamaSettingValueWrapperBase__Class **)
         (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
         (uint)(
               TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
               ->_1).naturalAligment * 4) ==
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
       )) {
      return (KogamaSettingValueWrapperBase *)unaff_ESI.m_Index;
    }
  }
  func_?(unaff_ESI.m_Index,unaff_EDI);
  pcVar1 = (code *)swi(3);
  pKVar2 = (KogamaSettingValueWrapperBase *)(*pcVar1)();
  return pKVar2;
}

