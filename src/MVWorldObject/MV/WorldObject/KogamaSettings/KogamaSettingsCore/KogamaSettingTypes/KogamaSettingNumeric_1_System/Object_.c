
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingNumeric`1[System::Object]::KogamaSettingNumeric_1_System_Object__ToString
                   (KogamaSettingNumeric_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (this != (KogamaSettingNumeric_1_System_Object_ *)0x0) {
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


/* KogamaSettingNumeric`1[System.Object](Object, Object, Object) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumeric`1[System::Object]::KogamaSettingNumeric_1_System_Object___ctor
               (KogamaSettingNumeric_1_System_Object_ *this,Object *value,Object *min,Object *max,
               MethodInfo *method)

{
  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
  TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)this,(MethodInfo *)0x0);
  pvVar1 = method->klass->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  pRVar2 = (RangeValidator_1_System_Object_ *)func_?(pvVar1);
  if (pRVar2 != (RangeValidator_1_System_Object_ *)0x0) {
    (*(method->klass->rgctx_data[4].method)->virtualMethodPointer)
              (pRVar2,min,max,method->klass->rgctx_data[4].rgctxDataDummy);
    (this->fields).RangeValidator = pRVar2;
    func_?(&(this->fields).RangeValidator,pRVar2);
    pRVar2 = (this->fields).RangeValidator;
    if (pRVar2 != (RangeValidator_1_System_Object_ *)0x0) {
      (*(method->klass->rgctx_data[3].method)->virtualMethodPointer)
                (pRVar2,value,0,method->klass->rgctx_data[3].rgctxDataDummy);
      (*(method->klass->rgctx_data[5].method)->virtualMethodPointer)
                (this,value,method->klass->rgctx_data[5].rgctxDataDummy);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* KogamaSettingValueType get_KogamaSettingValueType() */

KogamaSettingValueType__Enum
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
KogamaSettingNumeric`1[System::Object]::
KogamaSettingNumeric_1_System_Object__get_KogamaSettingValueType
          (KogamaSettingNumeric_1_System_Object_ *this,MethodInfo *method)

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


/* Object get_NumericValue() */

Object * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingNumeric`1[System::Object]::
         KogamaSettingNumeric_1_System_Object__get_NumericValue
                   (KogamaSettingNumeric_1_System_Object_ *this,MethodInfo *method)

{
  if (this == (KogamaSettingNumeric_1_System_Object_ *)0x0) {
    func_?();
    pOVar1 = (Object *)0x0;
  }
  else {
    pOVar1 = (this->fields)._.value;
    unaff_ESI = method->klass->rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((int)unaff_ESI + 0xba) & 1) == 0) {
      unaff_ESI = (void *)func_?(unaff_ESI);
    }
    if (pOVar1 == (Object *)0x0) {
      return (Object *)0x0;
    }
    pOVar2 = (Object *)func_?(pOVar1,unaff_ESI);
    if (pOVar2 != (Object *)0x0) {
      return pOVar2;
    }
  }
  func_?(pOVar1,unaff_ESI);
  pcVar3 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar3)();
  return pOVar1;
}


/* Void set_NumericValue(Object) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumeric`1[System::Object]::KogamaSettingNumeric_1_System_Object__set_NumericValue
               (KogamaSettingNumeric_1_System_Object_ *this,Object *value,MethodInfo *method)

{
  if ((this->fields).RangeValidator != (RangeValidator_1_System_Object_ *)0x0) {
    value_00 = (Object *)
               (*(method->klass->rgctx_data[3].method)->virtualMethodPointer)
                         ((this->fields).RangeValidator,value,1,
                          method->klass->rgctx_data[3].rgctxDataDummy);
    KogamaSettingBase::KogamaSettingBase_set_Value
              ((KogamaSettingBase *)this,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

