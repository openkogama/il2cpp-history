
/* KogamaSettingNumericBase`1[System.Int32](String, Int32, Int32, Int32,
   KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[System::Int32]::KogamaSettingNumericBase_1_System_Int32___ctor
               (KogamaSettingNumericBase_1_System_Int32_ *this,String *key,int32_t value,int32_t min
               ,int32_t max,KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  if (this != (KogamaSettingNumericBase_1_System_Int32_ *)0x0) {
    KogamaSettingValueWrapperBase::KogamaSettingValueWrapperBase__ctor
              ((KogamaSettingValueWrapperBase *)this,key,parent,(MethodInfo *)0x0);
    iVar1 = *(int *)(*(int *)(method->name + 0x60) + 8);
    if ((*(byte *)(iVar1 + 0xbe) & 1) == 0) {
      func_?(iVar1);
    }
    pKVar2 = (KogamaSettingNumeric_1_System_Int32_ *)func_?(iVar1);
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


/* Int32 get_NumericValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
        KogamaSettingNumericBase`1[System::Int32]::
        KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                  (KogamaSettingNumericBase_1_System_Int32_ *this,MethodInfo *method)

{
  if ((this->fields).KogamaSettingNumeric != (KogamaSettingNumeric_1_System_Int32_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)**(undefined4 **)(method->name + 0x60))();
    return iVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}


/* Void set_NumericValue(Int32) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[System::Int32]::
     KogamaSettingNumericBase_1_System_Int32__set_NumericValue
               (KogamaSettingNumericBase_1_System_Int32_ *this,int32_t value,MethodInfo *method)

{
  if ((this->fields).KogamaSettingNumeric != (KogamaSettingNumeric_1_System_Int32_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 4))();
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

