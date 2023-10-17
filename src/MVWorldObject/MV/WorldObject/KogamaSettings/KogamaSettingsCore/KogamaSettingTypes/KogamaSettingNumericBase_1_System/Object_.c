
/* KogamaSettingNumericBase`1[System.Object](String, Object, Object, Object,
   KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[System::Object]::KogamaSettingNumericBase_1_System_Object___ctor
               (KogamaSettingNumericBase_1_System_Object_ *this,String *key,Object *value,
               Object *min,Object *max,KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  KogamaSettingValueWrapperBase::KogamaSettingValueWrapperBase__ctor
            ((KogamaSettingValueWrapperBase *)this,key,parent,(MethodInfo *)0x0);
  pvVar1 = method->klass->rgctx_data->rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  pKVar2 = (KogamaSettingNumeric_1_System_Object_ *)func_?(pvVar1);
  if (pKVar2 != (KogamaSettingNumeric_1_System_Object_ *)0x0) {
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


/* Object get_NumericValue() */

Object * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingNumericBase`1[System::Object]::
         KogamaSettingNumericBase_1_System_Object__get_NumericValue
                   (KogamaSettingNumericBase_1_System_Object_ *this,MethodInfo *method)

{
  pKVar1 = (this->fields).KogamaSettingNumeric;
  if (pKVar1 != (KogamaSettingNumeric_1_System_Object_ *)0x0) {
    pOVar2 = (Object *)
             (*(method->klass->rgctx_data[1].method)->virtualMethodPointer)
                       (pKVar1,method->klass->rgctx_data[1].rgctxDataDummy);
    return pOVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar3)();
  return pOVar2;
}


/* Void set_NumericValue(Object) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[System::Object]::
     KogamaSettingNumericBase_1_System_Object__set_NumericValue
               (KogamaSettingNumericBase_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  pKVar1 = (this->fields).KogamaSettingNumeric;
  if (pKVar1 != (KogamaSettingNumeric_1_System_Object_ *)0x0) {
    (*(method->klass->rgctx_data[2].method)->virtualMethodPointer)
              (pKVar1,value,method->klass->rgctx_data[2].rgctxDataDummy);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

