
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


/* KogamaSettingNumeric`1[System.Int32](Int32, Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumeric`1[System::Int32]::KogamaSettingNumeric_1_System_Int32___ctor
               (KogamaSettingNumeric_1_System_Int32_ *this,int32_t value,int32_t min,int32_t max,
               MethodInfo *method)

{
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,(MethodInfo *)0x0);
  pMVar1 = method;
  pIVar2 = method->klass->rgctx_data[3].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  this_01 = (Tuple_2_Int32_Int32_ *)func_?(pIVar2);
  mscorlib.dll::System::Tuple`2[Int32,Int32]::Tuple_2_Int32_Int32___ctor
            (this_01,min,max,pMVar1->klass->rgctx_data[5].method);
  ppRVar3 = &(this->fields).RangeValidator;
  *ppRVar3 = (RangeValidator_1_System_Int32_ *)this_01;
  func_?(ppRVar3,this_01);
  if (*ppRVar3 != (RangeValidator_1_System_Int32_ *)0x0) {
    AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
              (*ppRVar3,value,0,pMVar1->klass->rgctx_data[4].method);
    value_00 = value;
    this_00 = *ppRVar3;
    if (this_00 != (RangeValidator_1_System_Int32_ *)0x0) {
      pMVar1 = pMVar1->klass->rgctx_data[6].method;
      method = pMVar1->klass->rgctx_data[4].method;
      max = 1;
      min = value;
      value = (int32_t)this_00;
      value = AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
                        (this_00,value_00,1,method);
      method = (MethodInfo *)&value;
      max = *(int32_t *)(pMVar1->klass->rgctx_data + 1);
      min = (int32_t)&UNK_?;
      value = func_?();
      min = 0;
      KogamaSettingBase::KogamaSettingBase_set_Value
                ((KogamaSettingBase *)&UNK_?,(Object *)value,(MethodInfo *)0x0);
      return;
    }
  }
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
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
  bVar4 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
          UnsafeUtility_EnumEquals
                    ((Int32Enum__Enum)pTVar2,(Int32Enum__Enum)pTVar3,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    IVar1 = *method->klass->rgctx_data;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)IVar1,(MethodInfo *)0x0);
    pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)TypeRef__System__Single,(MethodInfo *)0x0);
    bVar4 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_EnumEquals
                      ((Int32Enum__Enum)pTVar2,(Int32Enum__Enum)pTVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      return KogamaSettingValueType__Enum_Float;
    }
    handle.value = (void *)func_?();
    puStack5 = (undefined *)func_?();
    func_?();
    pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (pTVar2 == (Type *)0x0) {
      str1 = (String *)0x0;
      pSVar6 = (String *)func_?();
    }
    else {
      pSVar6 = (String *)func_?();
      func_?();
      str1 = (String *)func_?();
    }
    pSVar6 = mscorlib.dll::System::String::String_Concat_3(pSVar6,str1,(MethodInfo *)0x0);
    func_?();
    this_00 = (Exception *)func_?();
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar6,(MethodInfo *)0x0);
    pMStack7 = method;
    pEStack8 = this_00;
    func_?();
    pcVar9 = (code *)swi(3);
    KVar10 = (*pcVar9)();
    return KVar10;
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
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
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
  this_01 = this;
  this_00 = (this->fields).RangeValidator;
  if (this_00 != (RangeValidator_1_System_Int32_ *)0x0) {
    this = (KogamaSettingNumeric_1_System_Int32_ *)
           AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
                     (this_00,value,1,method->klass->rgctx_data[4].method);
    value_00 = (Object *)func_?(pMVar1->klass->rgctx_data[1].rgctxDataDummy,&this);
    KogamaSettingBase::KogamaSettingBase_set_Value
              ((KogamaSettingBase *)this_01,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

