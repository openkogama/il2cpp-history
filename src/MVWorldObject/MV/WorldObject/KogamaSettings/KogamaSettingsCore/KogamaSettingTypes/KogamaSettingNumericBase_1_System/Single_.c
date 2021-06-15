
/* KogamaSettingNumericBase`1[System.Single](String, Single, Single, Single,
   KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[System::Single]::KogamaSettingNumericBase_1_System_Single___ctor
               (KogamaSettingNumericBase_1_System_Single_ *this,String *key,float value,float min,
               float max,KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  if (this != (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
    KogamaSettingValueWrapperBase::KogamaSettingValueWrapperBase__ctor
              ((KogamaSettingValueWrapperBase *)this,key,parent,(MethodInfo *)0x0);
    iVar1 = *(int *)(*(int *)(method->name + 0x60) + 8);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    pKVar2 = (KogamaSettingNumeric_1_System_Single_ *)func_?(iVar1);
    puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0xc);
    (*(code *)*puVar3)(pKVar2,value,min,max,puVar3);
    (this->fields).KogamaSettingNumeric = pKVar2;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* IKogamaSetting get_KogamaSetting() */

IKogamaSetting *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
KogamaSettingNumericBase`1[System::Single]::
KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
          (KogamaSettingNumericBase_1_System_Single_ *this,MethodInfo *method)

{
  return (IKogamaSetting *)(this->fields).KogamaSettingNumeric;
}


/* Void set_NumericValue(Single) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[System::Single]::
     KogamaSettingNumericBase_1_System_Single__set_NumericValue
               (KogamaSettingNumericBase_1_System_Single_ *this,float value,MethodInfo *method)

{
  pKVar1 = (this->fields).KogamaSettingNumeric;
  if (pKVar1 != (KogamaSettingNumeric_1_System_Single_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 4);
    (*(code *)*puVar2)(pKVar1,value,puVar2);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

