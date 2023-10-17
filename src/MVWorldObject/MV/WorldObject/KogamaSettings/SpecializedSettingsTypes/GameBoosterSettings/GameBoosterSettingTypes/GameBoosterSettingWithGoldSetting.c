
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
  func_?();
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
  pKVar1 = (KogamaSettingsCollectionBase *)
           func_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingTypes__GameBoosterSettingWithGoldSetting
                          );
  if (pKVar1 != (KogamaSettingsCollectionBase *)0x0) {
    KogamaSettingsCore::KogamaSettingTypes::KogamaSettingsCollectionBase::
    KogamaSettingsCollectionBase__ctor(pKVar1,key,parent,(MethodInfo *)0x0);
    return pKVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pKVar1 = (KogamaSettingsCollectionBase *)(*pcVar2)();
  return pKVar1;
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
    pDVar4 = (this->fields)._.children;
    if (pDVar4 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)0x0) goto code_?;
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                        (Object *)StringLiteral_sk,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                       );
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?();
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar5;
    func_?();
    pDVar4 = (this->fields)._.children;
    if (pDVar4 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)0x0) goto code_?;
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                        (Object *)StringLiteral_gsk,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                       );
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?();
      if (iVar3 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar5;
    func_?();
    pDVar4 = (this->fields)._.children;
    if (pDVar4 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)0x0) goto code_?;
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                        (Object *)StringLiteral_tsk,
                        MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                       );
    if (pOVar5 == (Object *)0x0) {
code_?:
      if (3 < args->max_length) {
        args->vector[3] = pOVar5;
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


/* Void Validate() */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
     GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
     GameBoosterSettingWithGoldSetting_Validate
               (GameBoosterSettingWithGoldSetting *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__ContainsKey_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Count__
                   );
    func_?(&StringLiteral_GameBoosterPrototypeSetting);
    func_?(&StringLiteral_tsk);
    func_?(&StringLiteral_sk);
    func_?(&StringLiteral_gsk);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._.children;
  if (pDVar1 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (pDVar1,(Object *)StringLiteral_sk,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__ContainsKey_System__String_
                      );
    if (bVar2 != 0) {
      pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._.children;
      if (pDVar1 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
      goto code_?;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (pDVar1,(Object *)StringLiteral_gsk,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__ContainsKey_System__String_
                        );
      if (bVar2 != 0) {
        pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields)._.children
        ;
        if (pDVar1 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
        goto code_?;
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (pDVar1,(Object *)StringLiteral_tsk,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__ContainsKey_System__String_
                          );
        if (bVar2 != 0) {
          this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                     *)(this->fields)._.children;
          if (this_00 ==
              (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )0x0) goto code_?;
          iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                  RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                  Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Count__
                            );
          if (iVar3 == 3) {
            pKVar4 = (this->fields)._._._Parent_k__BackingField;
            if (pKVar4 == (KogamaSettingsCollectionBase *)0x0) goto code_?;
            bVar2 = mscorlib.dll::System::String::String_op_Inequality
                              ((pKVar4->fields)._.key,StringLiteral_GameBoosterPrototypeSetting,
                               (MethodInfo *)0x0);
            if (bVar2 == 0) {
              pKVar4 = (this->fields)._._._Parent_k__BackingField;
              if (pKVar4 == (KogamaSettingsCollectionBase *)0x0) goto code_?;
              if ((pKVar4->fields)._._Parent_k__BackingField == (KogamaSettingsCollectionBase *)0x0)
              {
                return;
              }
              func_?();
              pEVar5 = (Exception *)func_?();
              func_?();
              pSVar6 = (String *)func_?();
              mscorlib.dll::System::Exception::Exception__ctor_1(pEVar5,pSVar6,(MethodInfo *)0x0);
              func_?();
              func_?();
            }
            func_?();
            pEVar5 = (Exception *)func_?();
            func_?();
            pSVar6 = (String *)func_?();
            mscorlib.dll::System::Exception::Exception__ctor_1(pEVar5,pSVar6,(MethodInfo *)0x0);
            func_?();
            func_?();
          }
          func_?();
          pEVar5 = (Exception *)func_?();
          func_?();
          pSVar6 = (String *)func_?();
          mscorlib.dll::System::Exception::Exception__ctor_1(pEVar5,pSVar6,(MethodInfo *)0x0);
          func_?();
          func_?();
        }
        func_?();
        pEVar5 = (Exception *)func_?();
        func_?();
        pSVar6 = (String *)func_?();
        mscorlib.dll::System::Exception::Exception__ctor_1(pEVar5,pSVar6,(MethodInfo *)0x0);
        func_?();
        func_?();
      }
      func_?();
      pEVar5 = (Exception *)func_?();
      func_?();
      pSVar6 = (String *)func_?();
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar5,pSVar6,(MethodInfo *)0x0);
      func_?();
      func_?();
    }
    uVar7 = func_?();
    pEVar5 = (Exception *)func_?(uVar7);
    func_?(pEVar5);
    method_00 = (MethodInfo *)0x0;
    pSVar6 = (String *)func_?(&StringLiteral_Missing_settingKey);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar5,pSVar6,method_00);
    func_?();
    func_?();
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
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
  this_00 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                              );
  if (this_00 !=
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
              );
    method_00 = (MethodInfo *)&(this->fields)._.children;
    (this->fields)._.children = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    (this->fields)._._._Parent_k__BackingField = kogamaSettingsCollection;
    func_?(&(this->fields)._._._Parent_k__BackingField,kogamaSettingsCollection);
    (this->fields)._._.key = key;
    func_?(&this->fields,key);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* KogamaSettingNumericBase`1[System.Int32] get_BoostTime() */

KogamaSettingNumericBase_1_System_Int32_ *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::
GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
GameBoosterSettingWithGoldSetting_get_BoostTime
          (GameBoosterSettingWithGoldSetting *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                   );
    func_?(&StringLiteral_tsk);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.children;
  if (this_00 ==
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    func_?();
    pKVar1 = extraout_EDX;
  }
  else {
    unaff_ESI = (KogamaSettingNumericBase_1_System_Int32_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          ((Dictionary_2_System_Object_System_Object_ *)this_00,
                           (Object *)StringLiteral_tsk,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                          );
    if (unaff_ESI == (KogamaSettingNumericBase_1_System_Int32_ *)0x0) {
      return (KogamaSettingNumericBase_1_System_Int32_ *)0x0;
    }
    pKVar1 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
    ;
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         ->_1).typeHierarchyDepth <= (unaff_ESI->klass->_1).typeHierarchyDepth) &&
       ((unaff_ESI->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         ->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       )) {
      return unaff_ESI;
    }
  }
  func_?(unaff_ESI,pKVar1);
  pcVar2 = (code *)swi(3);
  pKVar3 = (KogamaSettingNumericBase_1_System_Int32_ *)(*pcVar2)();
  return pKVar3;
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
  this_00 = (this->fields)._.children;
  if (this_00 ==
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    func_?();
    pKVar1 = extraout_EDX;
  }
  else {
    unaff_ESI = (KogamaSettingNumericBase_1_System_Int32_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          ((Dictionary_2_System_Object_System_Object_ *)this_00,
                           (Object *)StringLiteral_gsk,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                          );
    if (unaff_ESI == (KogamaSettingNumericBase_1_System_Int32_ *)0x0) {
      return (KogamaSettingNumericBase_1_System_Int32_ *)0x0;
    }
    pKVar1 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
    ;
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         ->_1).typeHierarchyDepth <= (unaff_ESI->klass->_1).typeHierarchyDepth) &&
       ((unaff_ESI->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
         ->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       )) {
      return unaff_ESI;
    }
  }
  func_?(unaff_ESI,pKVar1);
  pcVar2 = (code *)swi(3);
  pKVar3 = (KogamaSettingNumericBase_1_System_Int32_ *)(*pcVar2)();
  return pKVar3;
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
  this_00 = (this->fields)._.children;
  if (this_00 ==
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) {
    func_?();
    pKVar1 = extraout_EDX;
  }
  else {
    unaff_ESI = (KogamaSettingValueWrapperBase *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          ((Dictionary_2_System_Object_System_Object_ *)this_00,
                           (Object *)StringLiteral_sk,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Item_System__String_
                          );
    if (unaff_ESI == (KogamaSettingValueWrapperBase *)0x0) {
      return (KogamaSettingValueWrapperBase *)0x0;
    }
    pKVar1 = 
    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
    ;
    if (((
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         ->_1).typeHierarchyDepth <= (unaff_ESI->klass->_1).typeHierarchyDepth) &&
       ((unaff_ESI->klass->_1).typeHierarchy
        [(
         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
         ->_1).typeHierarchyDepth - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase
       )) {
      return unaff_ESI;
    }
  }
  func_?(unaff_ESI,pKVar1);
  pcVar2 = (code *)swi(3);
  pKVar3 = (KogamaSettingValueWrapperBase *)(*pcVar2)();
  return pKVar3;
}

