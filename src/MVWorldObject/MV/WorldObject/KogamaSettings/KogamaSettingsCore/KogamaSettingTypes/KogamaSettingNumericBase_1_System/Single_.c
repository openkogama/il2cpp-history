
/* KogamaSettingNumericBase`1[System.Single](String, Single, Single, Single,
   KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[System::Single]::KogamaSettingNumericBase_1_System_Single___ctor
               (KogamaSettingNumericBase_1_System_Single_ *this,String *key,float value,float min,
               float max,KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  KogamaSettingValueWrapperBase::KogamaSettingValueWrapperBase__ctor
            ((KogamaSettingValueWrapperBase *)this,key,parent,(MethodInfo *)0x0);
  pIVar1 = method->klass->rgctx_data[1].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)func_?(pIVar1);
  pMVar2 = method->klass->rgctx_data[5].method;
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
  if (((uint)(pMVar2->klass->rgctx_data[3].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?();
  }
  this_02 = (RangeValidator_1_System_Single_ *)func_?();
  AntiCheat::RangeValidator`1[System::Single]::RangeValidator_1_System_Single___ctor_1
            (this_02,min,max,pMVar2->klass->rgctx_data[5].method);
  ppMVar3 = &this_01[1].monitor;
  *ppMVar3 = (MonitorData *)this_02;
  func_?();
  if ((RangeValidator_1_System_Single_ *)*ppMVar3 != (RangeValidator_1_System_Single_ *)0x0) {
    AntiCheat::RangeValidator`1[System::Single]::RangeValidator_1_System_Single__Validate
              ((RangeValidator_1_System_Single_ *)*ppMVar3,value,0,
               pMVar2->klass->rgctx_data[4].method);
    this_00 = (KogamaSettingBase *)*ppMVar3;
    if (this_00 != (KogamaSettingBase *)0x0) {
      AntiCheat::RangeValidator`1[System::Single]::RangeValidator_1_System_Single__Validate
                ((RangeValidator_1_System_Single_ *)this_00,value,1,
                 (pMVar2->klass->rgctx_data[6].method)->klass->rgctx_data[4].method);
      value_00 = (Object *)func_?();
      KogamaSettingBase::KogamaSettingBase_set_Value(this_00,value_00,(MethodInfo *)0x0);
      _UNK_? = this_00;
      func_?();
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Single get_NumericValue() */

float MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
      KogamaSettingNumericBase`1[System::Single]::
      KogamaSettingNumericBase_1_System_Single__get_NumericValue
                (KogamaSettingNumericBase_1_System_Single_ *this,MethodInfo *method)

{
  pKVar1 = (this->fields).KogamaSettingNumeric;
  pOVar2 = (Object *)0x0;
  if (pKVar1 != (KogamaSettingNumeric_1_System_Single_ *)0x0) {
    pOVar2 = (pKVar1->fields)._.value;
    pIVar3 = (method->klass->rgctx_data[2].method)->klass->rgctx_data[1].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class == pIVar3->element_class) {
        pfVar4 = (float *)func_?(pOVar2);
        return *pfVar4;
      }
      goto code_?;
    }
  }
  pIVar3 = (Il2CppClass *)func_?();
code_?:
  func_?(pOVar2,pIVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Void set_NumericValue(Single) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[System::Single]::
     KogamaSettingNumericBase_1_System_Single__set_NumericValue
               (KogamaSettingNumericBase_1_System_Single_ *this,float value,MethodInfo *method)

{
  this_00 = (this->fields).KogamaSettingNumeric;
  if ((this_00 != (KogamaSettingNumeric_1_System_Single_ *)0x0) &&
     (this_01 = (this_00->fields).RangeValidator, this_01 != (RangeValidator_1_System_Single_ *)0x0)
     ) {
    pMVar1 = method->klass->rgctx_data[4].method;
    this = (KogamaSettingNumericBase_1_System_Single_ *)
           AntiCheat::RangeValidator`1[System::Single]::RangeValidator_1_System_Single__Validate
                     (this_01,value,1,pMVar1->klass->rgctx_data[4].method);
    value_00 = (Object *)func_?(pMVar1->klass->rgctx_data[1].rgctxDataDummy,&this);
    KogamaSettingBase::KogamaSettingBase_set_Value
              ((KogamaSettingBase *)this_00,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

