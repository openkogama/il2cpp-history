
/* KogamaSettingBoolBase(String, Boolean, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingBoolBase::KogamaSettingBoolBase__ctor
               (KogamaSettingBoolBase *this,String *key,bool value,
               KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBool
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__KogamaSettingOnOnValueChange_MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting_
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._._._Parent_k__BackingField = parent;
  func_?(&this->fields,parent);
  ppSVar1 = &(this->fields)._._.key;
  *ppSVar1 = key;
  func_?(ppSVar1,key);
  method_00 = 
  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBool
  ;
  pKVar2 = (KogamaSettingBool *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pKVar2,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  KogamaSettingBool::KogamaSettingBool_set_ValueBool(pKVar2,value,(MethodInfo *)0x0);
  ppKVar3 = &(this->fields).KogamaSettingBool;
  *ppKVar3 = pKVar2;
  func_?(ppKVar3,pKVar2);
  pKVar2 = *ppKVar3;
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(
                              TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
                              );
  Assembly-CSharp.dll::DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::
  IL2CPP::Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__KogamaSettingOnOnValueChange_MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting_
             ,(MethodInfo *)0x0);
  if (pKVar2 != (KogamaSettingBool *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    a = (pKVar2->fields)._.OnValueChange;
    while ((pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0),
           pDVar4 == (Delegate *)0x0 || (iVar5 = func_?(), iVar5 != 0))) {
      pAVar6 = (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)
               func_?();
      bVar7 = pAVar6 == a;
      a = pAVar6;
      if (bVar7) {
        return;
      }
    }
    func_?();
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean get_ValueBool() */

bool MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingBoolBase::KogamaSettingBoolBase_get_ValueBool
               (KogamaSettingBoolBase *this,MethodInfo *method)

{
  pKVar1 = (this->fields).KogamaSettingBool;
  if (pKVar1 != (KogamaSettingBool *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Boolean);
      cRam_? = '\x01';
    }
    pOVar2 = (pKVar1->fields)._.value;
    if (pOVar2 != (Object *)0x0) {
      pBVar3 = TypeInfo__System__Boolean;
      if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar4 = (bool *)func_?(pOVar2);
        return *pbVar4;
      }
      goto code_?;
    }
  }
  func_?();
  pOVar2 = extraout_ECX;
  pBVar3 = extraout_EDX;
code_?:
  func_?(pOVar2,pBVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void set_ValueBool(Boolean) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingBoolBase::KogamaSettingBoolBase_set_ValueBool
               (KogamaSettingBoolBase *this,bool value,MethodInfo *method)

{
  pBVar1 = (Boolean__Class *)(this->fields).KogamaSettingBool;
  if (pBVar1 != (Boolean__Class *)0x0) {
    method = (MethodInfo *)0x0;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    bStack2 = value;
    puStack_3 = &stack0x0000000b;
    pBStack_4 = TypeInfo__System__Boolean;
    pOVar5 = (Object *)func_?();
    pKVar6 = (KogamaSettingBool__Fields *)&(pBVar1->_0).name;
    (pKVar6->_).value = pOVar5;
    func_?(pKVar6,pOVar5);
    pAVar7 = (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)
             (pBVar1->_0).namespaze;
    if (pAVar7 != (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0)
    {
      puStack_3 = (pAVar7->fields)._._.method;
      pBStack_4 = pBVar1;
      (*(pAVar7->fields)._._.invoke_impl)((pAVar7->fields)._._.method_code);
    }
    return;
  }
  uVar8 = func_?(&pBStack_4);
  func_?(uVar8);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

