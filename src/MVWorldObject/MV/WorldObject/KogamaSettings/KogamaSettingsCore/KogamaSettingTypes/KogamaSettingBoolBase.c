
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
  (this->fields)._._.key = key;
  func_?(&(this->fields)._._.key,key);
  method_00 = 
  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingBool
  ;
  pKVar1 = (KogamaSettingBool *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pKVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  KogamaSettingBool::KogamaSettingBool_set_ValueBool(pKVar1,value,(MethodInfo *)0x0);
  (this->fields).KogamaSettingBool = pKVar1;
  func_?(&(this->fields).KogamaSettingBool,pKVar1);
  pKVar1 = (this->fields).KogamaSettingBool;
  this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>
                           );
  Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
  SpawnRoleVariableTypes::SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
  SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingValueWrapperBase__KogamaSettingOnOnValueChange_MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting_
             ,(MethodInfo *)0x0);
  if (pKVar1 != (KogamaSettingBool *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    a = (pKVar1->fields)._.OnValueChange;
    while ((pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0),
           pDVar2 == (Delegate *)0x0 || (iVar3 = func_?(), iVar3 != 0))) {
      pAVar4 = (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)
               func_?();
      bVar5 = pAVar4 == a;
      a = pAVar4;
      if (bVar5) {
        return;
      }
    }
    func_?();
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
    (((KogamaSettingBool__Fields *)&(pBVar1->_0).name)->_).value = pOVar5;
    func_?((KogamaSettingBool__Fields *)&(pBVar1->_0).name,pOVar5);
    if ((Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)
        (pBVar1->_0).namespaze !=
        (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0) {
      pAVar6 = (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)
               (pBVar1->_0).namespaze;
      puStack_3 = (pAVar6->fields)._._.method;
      pBStack_4 = pBVar1;
      (*(pAVar6->fields)._._.invoke_impl)((pAVar6->fields)._._.method_code);
    }
    return;
  }
  uVar7 = func_?(&pBStack_4);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

