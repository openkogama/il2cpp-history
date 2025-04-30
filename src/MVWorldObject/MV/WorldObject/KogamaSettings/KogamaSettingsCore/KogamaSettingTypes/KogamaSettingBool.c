
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingBool::KogamaSettingBool_ToString(KogamaSettingBool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Value__0_);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_Value__0_,(this->fields)._.value,(MethodInfo *)0x0);
  return pSVar1;
}


/* KogamaSettingBool(Boolean) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingBool::KogamaSettingBool__ctor
               (KogamaSettingBool *this,bool value,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  uRam_? = func_?(TypeInfo__System__Boolean,&stack0x00000013);
  func_?(8,uRam_?);
  if (iRam_? != 0) {
    (**(code **)(iRam_? + 0xc))
              (*(undefined4 *)(iRam_? + 0x20),0,*(undefined4 *)(iRam_? + 0x14));
  }
  return;
}


/* Boolean get_ValueBool() */

bool MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingBool::KogamaSettingBool_get_ValueBool(KogamaSettingBool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pBStack_1 = (Boolean__Class *)&TypeInfo__System__Boolean;
    func_?();
    cRam_? = '\x01';
  }
  pOVar2 = (this->fields)._.value;
  if (pOVar2 != (Object *)0x0) {
    if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
      pBStack_1 = (Boolean__Class *)pOVar2;
      pbVar3 = (bool *)func_?();
      return *pbVar3;
    }
    pBStack_1 = TypeInfo__System__Boolean;
    pOStack_4 = pOVar2;
    func_?();
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  pBStack_1 = (Boolean__Class *)&stack0xfffffffc;
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void set_ValueBool(Boolean) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingBool::KogamaSettingBool_set_ValueBool
               (KogamaSettingBool *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  bStack1 = value;
  pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&stack0x0000000b);
  (this->fields)._.value = pOVar2;
  func_?(&this->fields,pOVar2);
  pAVar3 = (this->fields)._.OnValueChange;
  if (pAVar3 != (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0) {
    (*(pAVar3->fields)._._.invoke_impl)
              ((pAVar3->fields)._._.method_code,this,(pAVar3->fields)._._.method);
  }
  return;
}

