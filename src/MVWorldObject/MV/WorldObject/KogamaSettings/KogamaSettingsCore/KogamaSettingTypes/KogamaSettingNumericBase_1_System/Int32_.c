
/* KogamaSettingNumericBase`1[System.Int32](String, Int32, Int32, Int32,
   KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[System::Int32]::KogamaSettingNumericBase_1_System_Int32___ctor
               (KogamaSettingNumericBase_1_System_Int32_ *this,String *key,int32_t value,int32_t min
               ,int32_t max,KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  KogamaSettingValueWrapperBase::KogamaSettingValueWrapperBase__ctor
            ((KogamaSettingValueWrapperBase *)this,key,parent,(MethodInfo *)0x0);
  pIVar1 = method->klass->rgctx_data[1].klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  this_00 = (KogamaSettingBase *)func_?(pIVar1);
  pMVar2 = method->klass->rgctx_data[5].method;
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_00,(MethodInfo *)0x0);
  if (((uint)(pMVar2->klass->rgctx_data[3].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?();
  }
  this_01 = (KogamaSettingBase__Class *)func_?();
  mscorlib.dll::System::Tuple`2[Int32,Int32]::Tuple_2_Int32_Int32___ctor
            ((Tuple_2_Int32_Int32_ *)this_01,min,max,pMVar2->klass->rgctx_data[5].method);
  this_00[1].klass = this_01;
  func_?(this_00 + 1);
  if (this_00[1].klass != (KogamaSettingBase__Class *)0x0) {
    AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
              ((RangeValidator_1_System_Int32_ *)this_00[1].klass,value,0,
               pMVar2->klass->rgctx_data[4].method);
    if (this_00[1].klass != (KogamaSettingBase__Class *)0x0) {
      AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
                ((RangeValidator_1_System_Int32_ *)this_00[1].klass,value,1,
                 (pMVar2->klass->rgctx_data[6].method)->klass->rgctx_data[4].method);
      value_00 = (Object *)func_?();
      KogamaSettingBase::KogamaSettingBase_set_Value(this_00,value_00,(MethodInfo *)0x0);
      _UNK_? = this_00;
      func_?();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 get_NumericValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
        KogamaSettingNumericBase`1[System::Int32]::
        KogamaSettingNumericBase_1_System_Int32__get_NumericValue
                  (KogamaSettingNumericBase_1_System_Int32_ *this,MethodInfo *method)

{
  pKVar1 = (this->fields).KogamaSettingNumeric;
  pOVar2 = (Object *)0x0;
  if (pKVar1 != (KogamaSettingNumeric_1_System_Int32_ *)0x0) {
    pOVar2 = (pKVar1->fields)._.value;
    pIVar3 = (method->klass->rgctx_data[2].method)->klass->rgctx_data[1].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class == pIVar3->element_class) {
        piVar4 = (int32_t *)func_?(pOVar2);
        return *piVar4;
      }
      goto code_?;
    }
  }
  pIVar3 = (Il2CppClass *)func_?();
code_?:
  func_?(pOVar2,pIVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void set_NumericValue(Int32) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[System::Int32]::
     KogamaSettingNumericBase_1_System_Int32__set_NumericValue
               (KogamaSettingNumericBase_1_System_Int32_ *this,int32_t value,MethodInfo *method)

{
  this_00 = (this->fields).KogamaSettingNumeric;
  if ((this_00 != (KogamaSettingNumeric_1_System_Int32_ *)0x0) &&
     (this_01 = (this_00->fields).RangeValidator, this_01 != (RangeValidator_1_System_Int32_ *)0x0))
  {
    pMVar1 = method->klass->rgctx_data[4].method;
    this = (KogamaSettingNumericBase_1_System_Int32_ *)
           AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
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

