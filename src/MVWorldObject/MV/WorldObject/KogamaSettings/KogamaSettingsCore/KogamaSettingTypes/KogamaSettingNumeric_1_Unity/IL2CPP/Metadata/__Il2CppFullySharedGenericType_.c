
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingNumeric`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
         KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__ToString
                   (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
                   ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (this != (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
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


/* KogamaSettingNumeric`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumeric`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *value,_Il2CppFullySharedGenericType *min,
               _Il2CppFullySharedGenericType *max,MethodInfo *method)

{
  pMVar1 = method;
  _Var9 = (_union_155)(method->klass->rgctx_data[1].klass)->actualSize;
  func_?();
  method = (MethodInfo *)&stack0xffffffd8;
  func_?();
  _Var8.rgctx_data = (Il2CppRGCTXData *)&stack0xffffffd8;
  func_?();
  ppIVar2 = (Il2CppType **)&stack0xffffffd8;
  func_?();
  func_?();
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,(MethodInfo *)0x0);
  p_Var4 = (_Il2CppFullySharedGenericType *)&min;
  if ((int)(pMVar1->klass->rgctx_data[1].method)->return_type < 0) {
    p_Var4 = min;
  }
  func_?(method,p_Var4,_Var9.genericMethod);
  p_Var4 = (_Il2CppFullySharedGenericType *)&max;
  if ((int)(pMVar1->klass->rgctx_data[1].method)->return_type < 0) {
    p_Var4 = max;
  }
  func_?(&stack0xffffffd8,p_Var4,_Var9.genericMethod);
  if (((uint)(pMVar1->klass->rgctx_data[3].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?();
  }
  _Var6.dummy = &UNK_?;
  min = (_Il2CppFullySharedGenericType *)func_?();
  _Var5.dummy = &stack0xffffffd8;
  if (-1 < (int)(pMVar1->klass->rgctx_data[1].method)->return_type) {
    method = (MethodInfo *)method->methodPointer;
    _Var5 = _Var6;
  }
  pMVar3 = pMVar1->klass->rgctx_data[5].method;
  (*pMVar3->invoker_method)
            ((pMVar1->klass->rgctx_data[5].method)->methodPointer,pMVar3,min,
             (void **)&stack0xffffffe8,_Var5.dummy);
  (this->fields).RangeValidator =
       (RangeValidator_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)min;
  _Var5.dummy = &(this->fields).RangeValidator;
  func_?();
  min = (_Il2CppFullySharedGenericType *)(this->fields).RangeValidator;
  p_Var4 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(pMVar1->klass->rgctx_data[1].method)->return_type < 0) {
    p_Var4 = value;
  }
  func_?(_Var8.rgctx_data,p_Var4,_Var9.genericMethod);
  p_Var4 = min;
  if (min != (_Il2CppFullySharedGenericType *)0x0) {
    min = (_Il2CppFullySharedGenericType *)((uint)min & 0xffffff00);
    pMVar3 = pMVar1->klass->rgctx_data[4].method;
    (*pMVar3->invoker_method)
              ((pMVar1->klass->rgctx_data[4].method)->methodPointer,pMVar3,p_Var4,
               (void **)&stack0xffffffe4,ppIVar2);
    func_?();
    value = (_Il2CppFullySharedGenericType *)&stack0xffffffd8;
    if (-1 < (int)(pMVar1->klass->rgctx_data[1].method)->return_type) {
      value = (_Il2CppFullySharedGenericType *)_Var5;
    }
    pMVar3 = pMVar1->klass->rgctx_data[6].method;
    (*pMVar3->invoker_method)
              ((pMVar1->klass->rgctx_data[6].method)->methodPointer,pMVar3,value,&value,value);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* KogamaSettingValueType get_KogamaSettingValueType() */

KogamaSettingValueType__Enum
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
KogamaSettingNumeric`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_KogamaSettingValueType
          (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

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
      func_?(TypeInfo__System__Type);
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
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
    pMStack4 = method;
    pEStack5 = this_00;
    func_?();
    pcVar6 = (code *)swi(3);
    KVar7 = (*pcVar6)();
    return KVar7;
  }
  return KogamaSettingValueType__Enum_Int;
}


/* __Il2CppFullySharedGenericType get_NumericValue() */

_Il2CppFullySharedGenericType *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
KogamaSettingNumeric`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_NumericValue
          (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(in_stack_2 + 0x10) + 0x60) + 4) + 0x84);
  func_?();
  if (this != (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pOVar3 = (this->fields)._.value;
    iVar4 = *(int *)(*(int *)(*(int *)(in_stack_2 + 0x10) + 0x60) + 4);
    if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = func_?(iVar4);
    }
    uVar5 = func_?(pOVar3,iVar4,&stack0xfffffff0);
    p_Var6 = (_Il2CppFullySharedGenericType *)func_?(method,uVar5,uVar1);
    return p_Var6;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  p_Var6 = (_Il2CppFullySharedGenericType *)(*pcVar6)();
  return p_Var6;
}


/* Void set_NumericValue(__Il2CppFullySharedGenericType) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumeric`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_NumericValue
               (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[1].klass)->actualSize;
  func_?();
  func_?();
  puStack_3 = &stack0xffffffd8;
  func_?();
  puStack_4 = &stack0xffffffd8;
  func_?();
  puStack_5 = &stack0xffffffd8;
  func_?(&stack0xffffffd8,0,uVar2);
  method = (MethodInfo *)(this->fields).RangeValidator;
  p_Var7 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(pMVar1->klass->rgctx_data[1].method)->return_type < 0) {
    p_Var7 = value;
  }
  func_?(&stack0xffffffd8,p_Var7,uVar2);
  puVar6 = puStack_3;
  if (method != (MethodInfo *)0x0) {
    puStack_7 = &stack0xffffffd8;
    if (-1 < (int)(pMVar1->klass->rgctx_data[1].method)->return_type) {
      puStack_7 = unaff_EDI;
    }
    value = (_Il2CppFullySharedGenericType *)CONCAT31(value._1_3_,1);
    puStack_8 = puStack_3;
    pMVar9 = pMVar1->klass->rgctx_data[4].method;
    pp_Stack_18 = &value;
    (*pMVar9->invoker_method)
              ((pMVar1->klass->rgctx_data[4].method)->methodPointer,pMVar9,method,&puStack_7,
               puStack_3);
    puVar10 = puStack_5;
    func_?(puStack_5,puVar6,uVar2);
    puVar6 = puStack_4;
    func_?(puStack_4,puVar10,uVar2);
    value_00 = (Object *)func_?(pMVar1->klass->rgctx_data[1].rgctxDataDummy,puVar6);
    KogamaSettingBase::KogamaSettingBase_set_Value
              ((KogamaSettingBase *)this,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

