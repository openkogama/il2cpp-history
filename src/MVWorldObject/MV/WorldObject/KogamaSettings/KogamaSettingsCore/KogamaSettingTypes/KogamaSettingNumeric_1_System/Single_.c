
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingNumeric`1[System::Single]::KogamaSettingNumeric_1_System_Single__ToString
                   (KogamaSettingNumeric_1_System_Single_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (this != (KogamaSettingNumeric_1_System_Single_ *)0x0) {
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


/* KogamaSettingNumeric`1[System.Single](Single, Single, Single) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumeric`1[System::Single]::KogamaSettingNumeric_1_System_Single___ctor
               (KogamaSettingNumeric_1_System_Single_ *this,float value,float min,float max,
               MethodInfo *method)

{
  UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
  TweenRunner_1_FloatTween___ctor((TweenRunner_1_FloatTween_ *)this,(MethodInfo *)0x0);
  pvVar1 = method->klass->rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((int)pvVar1 + 0xba) & 1) == 0) {
    pvVar1 = (void *)func_?(pvVar1);
  }
  pRVar2 = (RangeValidator_1_System_Single_ *)func_?(pvVar1);
  if (pRVar2 != (RangeValidator_1_System_Single_ *)0x0) {
    (*(method->klass->rgctx_data[4].method)->virtualMethodPointer)
              (pRVar2,min,max,method->klass->rgctx_data[4].rgctxDataDummy);
    (this->fields).RangeValidator = pRVar2;
    func_?(&(this->fields).RangeValidator,pRVar2);
    pRVar2 = (this->fields).RangeValidator;
    if (pRVar2 != (RangeValidator_1_System_Single_ *)0x0) {
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
KogamaSettingNumeric`1[System::Single]::
KogamaSettingNumeric_1_System_Single__get_KogamaSettingValueType
          (KogamaSettingNumeric_1_System_Single_ *this,MethodInfo *method)

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


/* Single get_NumericValue() */

float MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
      KogamaSettingNumeric`1[System::Single]::KogamaSettingNumeric_1_System_Single__get_NumericValue
                (KogamaSettingNumeric_1_System_Single_ *this,MethodInfo *method)

{
  pOVar1 = (Object *)0x0;
  if (this != (KogamaSettingNumeric_1_System_Single_ *)0x0) {
    pOVar1 = (this->fields)._.value;
    pIVar2 = method->klass->rgctx_data[1].klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == pIVar2->element_class) {
        pfVar3 = (float *)func_?(pOVar1);
        return *pfVar3;
      }
      goto code_?;
    }
  }
  pIVar2 = (Il2CppClass *)func_?();
code_?:
  func_?(pOVar1,pIVar2);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Void set_NumericValue(Single) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumeric`1[System::Single]::KogamaSettingNumeric_1_System_Single__set_NumericValue
               (KogamaSettingNumeric_1_System_Single_ *this,float value,MethodInfo *method)

{
  pMVar1 = method;
  pRVar2 = (this->fields).RangeValidator;
  if (pRVar2 != (RangeValidator_1_System_Single_ *)0x0) {
    fVar3 = (float10)(*(method->klass->rgctx_data[3].method)->virtualMethodPointer)
                               (pRVar2,value,1,method->klass->rgctx_data[3].rgctxDataDummy);
    value = (float)fVar3;
    pvVar4 = pMVar1->klass->rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
      pvVar4 = (void *)func_?(pvVar4);
    }
    value_00 = (Object *)func_?(pvVar4,&value);
    KogamaSettingBase::KogamaSettingBase_set_Value
              ((KogamaSettingBase *)this,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

