
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingNumeric`1[System::Int32]::KogamaSettingNumeric_1_System_Int32__ToString
                   (KogamaSettingNumeric_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (this != (KogamaSettingNumeric_1_System_Int32_ *)0x0) {
    pSVar1 = mscorlib.dll::System::String::String_Format_1
                       (StringLiteral_Value__0____1_,(this->fields)._.value,
                        (Object *)(this->fields).RangeValidator,(MethodInfo *)0x0);
    return pSVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* KogamaSettingValueType get_KogamaSettingValueType() */

KogamaSettingValueType__Enum
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
KogamaSettingNumeric`1[System::Int32]::
KogamaSettingNumeric_1_System_Int32__get_KogamaSettingValueType
          (KogamaSettingNumeric_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Int32);
    func_?(&TypeRef__System__Single);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  IVar1 = *method->klass->rgctx_data;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)IVar1,(MethodInfo *)0x0);
  pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)TypeRef__System__Int32,(MethodInfo *)0x0);
  if (pTVar2 != pTVar3) {
    IVar1 = *method->klass->rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)IVar1,(MethodInfo *)0x0);
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)TypeRef__System__Single,(MethodInfo *)0x0);
    if (pTVar2 == pTVar3) {
      return KogamaSettingValueType__Enum_Float;
    }
    handle.value = (void *)func_?();
    func_?();
    func_?();
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    arg0 = (Object *)func_?();
    message = mscorlib.dll::System::String::String_Concat(arg0,(Object *)pTVar2,method_00);
    func_?();
    this_00 = (Exception *)func_?();
    func_?();
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
    uStack4 = func_?();
    pEStack5 = this_00;
    func_?();
    pcVar6 = (code *)swi(3);
    KVar7 = (*pcVar6)();
    return KVar7;
  }
  return KogamaSettingValueType__Enum_Int;
}


/* Int32 get_NumericValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
        KogamaSettingNumeric`1[System::Int32]::KogamaSettingNumeric_1_System_Int32__get_NumericValue
                  (KogamaSettingNumeric_1_System_Int32_ *this,MethodInfo *method)

{
  pOVar1 = (Object *)0x0;
  if (this != (KogamaSettingNumeric_1_System_Int32_ *)0x0) {
    pOVar1 = (this->fields)._.value;
    pIVar2 = method->klass->rgctx_data[1].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == pIVar2->element_class) {
        piVar3 = (int32_t *)func_?(pOVar1);
        return *piVar3;
      }
      goto code_?;
    }
  }
  pIVar2 = (Il2CppClass *)func_?();
code_?:
  func_?(pOVar1,pIVar2);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void set_NumericValue(Int32) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumeric`1[System::Int32]::KogamaSettingNumeric_1_System_Int32__set_NumericValue
               (KogamaSettingNumeric_1_System_Int32_ *this,int32_t value,MethodInfo *method)

{
  pMVar1 = method;
  this_00 = this;
  pRVar2 = (this->fields).RangeValidator;
  if (pRVar2 != (RangeValidator_1_System_Int32_ *)0x0) {
    this = (KogamaSettingNumeric_1_System_Int32_ *)
           (*(method->klass->rgctx_data[3].method)->virtualMethodPointer)
                     (pRVar2,value,1,method->klass->rgctx_data[3].rgctxDataDummy);
    pvVar3 = pMVar1->klass->rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    value_00 = (Object *)func_?(pvVar3,&this);
    KogamaSettingBase::KogamaSettingBase_set_Value
              ((KogamaSettingBase *)this_00,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

