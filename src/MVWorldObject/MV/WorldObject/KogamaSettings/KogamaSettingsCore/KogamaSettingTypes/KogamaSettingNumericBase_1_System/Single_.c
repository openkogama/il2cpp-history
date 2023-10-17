
/* KogamaSettingNumericBase`1[System.Single](String, Single, Single, Single,
   KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[System::Single]::KogamaSettingNumericBase_1_System_Single___ctor
               (KogamaSettingNumericBase_1_System_Single_ *this,String *key,float value,float min,
               float max,KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  KogamaSettingValueWrapperBase::KogamaSettingValueWrapperBase__ctor
            ((KogamaSettingValueWrapperBase *)this,key,parent,(MethodInfo *)0x0);
  pvVar1 = method->klass->rgctx_data->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  pKVar2 = (KogamaSettingNumeric_1_System_Single_ *)func_?(pvVar1);
  if (pKVar2 != (KogamaSettingNumeric_1_System_Single_ *)0x0) {
    (*(method->klass->rgctx_data[3].method)->virtualMethodPointer)
              (pKVar2,value,min,max,method->klass->rgctx_data[3].rgctxDataDummy);
    (this->fields).KogamaSettingNumeric = pKVar2;
    func_?(&(this->fields).KogamaSettingNumeric,pKVar2);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Single get_NumericValue() */

float MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
      KogamaSettingNumericBase`1[System::Single]::
      KogamaSettingNumericBase_1_System_Single__get_NumericValue
                (KogamaSettingNumericBase_1_System_Single_ *this,MethodInfo *method)

{
  IStack_1.rgctxDataDummy = &stack0xfffffffc;
  pKStack_2 = (this->fields).KogamaSettingNumeric;
  if (pKStack_2 != (KogamaSettingNumeric_1_System_Single_ *)0x0) {
    IStack_1 = method->klass->rgctx_data[1];
    fVar3 = (float10)(*(method->klass->rgctx_data[1].method)->virtualMethodPointer)();
    return (float)fVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  fVar3 = (float10)(*pcVar6)();
  return (float)fVar3;
}


/* Void set_NumericValue(Single) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[System::Single]::
     KogamaSettingNumericBase_1_System_Single__set_NumericValue
               (KogamaSettingNumericBase_1_System_Single_ *this,float value,MethodInfo *method)

{
  pKVar1 = (this->fields).KogamaSettingNumeric;
  if (pKVar1 != (KogamaSettingNumeric_1_System_Single_ *)0x0) {
    (*(method->klass->rgctx_data[2].method)->virtualMethodPointer)
              (pKVar1,value,method->klass->rgctx_data[2].rgctxDataDummy);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

