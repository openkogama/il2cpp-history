
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
  _Var11 = (_union_155)(method->klass->rgctx_data[1].klass)->actualSize;
  func_?();
  method = (MethodInfo *)&stack0xffffffd8;
  func_?();
  IVar2.rgctxDataDummy = &stack0xffffffd8;
  func_?();
  ppIVar3 = (Il2CppType **)&stack0xffffffd8;
  func_?();
  func_?();
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this,(MethodInfo *)0x0);
  p_Var5 = (_Il2CppFullySharedGenericType *)&min;
  if ((int)(pMVar1->klass->rgctx_data[1].method)->return_type < 0) {
    p_Var5 = min;
  }
  func_?(method,p_Var5,_Var11.genericMethod);
  p_Var5 = (_Il2CppFullySharedGenericType *)&max;
  if ((int)(pMVar1->klass->rgctx_data[1].method)->return_type < 0) {
    p_Var5 = max;
  }
  func_?(&stack0xffffffd8,p_Var5,_Var11.genericMethod);
  if (((uint)(pMVar1->klass->rgctx_data[3].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?();
  }
  _Var9.dummy = &UNK_?;
  max = (_Il2CppFullySharedGenericType *)func_?();
  min = (_Il2CppFullySharedGenericType *)pMVar1->klass->rgctx_data;
  _Var6.dummy = &stack0xffffffd8;
  if (-1 < (int)((Il2CppRGCTXData *)((int)min + 4))->method->return_type) {
    method = (MethodInfo *)method->methodPointer;
    _Var6 = _Var9;
  }
  pMVar4 = ((Il2CppRGCTXData *)((int)min + 0x14))->method;
  (*pMVar4->invoker_method)(pMVar4->methodPointer,pMVar4,max,(void **)&stack0xffffffe8,_Var6.dummy);
  ppRVar5 = &(this->fields).RangeValidator;
  *ppRVar5 = (RangeValidator_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)max;
  _Var6 = (_union_86)ppRVar5;
  func_?();
  min = (_Il2CppFullySharedGenericType *)*ppRVar5;
  p_Var5 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(pMVar1->klass->rgctx_data[1].method)->return_type < 0) {
    p_Var5 = value;
  }
  func_?(IVar2,p_Var5,_Var11.genericMethod);
  p_Var5 = min;
  if (min != (_Il2CppFullySharedGenericType *)0x0) {
    pIVar6 = pMVar1->klass->rgctx_data;
    if (-1 < (int)(pIVar6[1].method)->return_type) {
      IVar2 = (Il2CppRGCTXData)(IVar2.klass)->image;
    }
    pMVar4 = pIVar6[4].method;
    min = (_Il2CppFullySharedGenericType *)((uint)min & 0xffffff00);
    (*pMVar4->invoker_method)
              (pMVar4->methodPointer,IVar2.method,p_Var5,(void **)&stack0xffffffe4,ppIVar3);
    func_?();
    pIVar6 = pMVar1->klass->rgctx_data;
    value = (_Il2CppFullySharedGenericType *)&stack0xffffffd8;
    if (-1 < (int)(pIVar6[1].method)->return_type) {
      value = (_Il2CppFullySharedGenericType *)_Var6;
    }
    pMVar1 = pIVar6[6].method;
    (*pMVar1->invoker_method)(pMVar1->methodPointer,pMVar1,value,&value,value);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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


/* __Il2CppFullySharedGenericType get_NumericValue() */

_Il2CppFullySharedGenericType *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
KogamaSettingNumeric`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_NumericValue
          (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  iVar1 = *(int *)(*(int *)(*(int *)(in_stack_2 + 0x10) + 0x60) + 4);
  uVar3 = *(undefined4 *)(iVar1 + 0x84);
  func_?();
  if (this != (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pOVar4 = (this->fields)._.value;
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_?(iVar1);
    }
    uVar5 = func_?(pOVar4,iVar1,&stack0xfffffff0);
    p_Var6 = (_Il2CppFullySharedGenericType *)func_?(method,uVar5,uVar3);
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
  p_Var8 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(pMVar1->klass->rgctx_data[1].method)->return_type < 0) {
    p_Var8 = value;
  }
  func_?(&stack0xffffffd8,p_Var8,uVar2);
  puVar6 = puStack_3;
  if (method != (MethodInfo *)0x0) {
    pIVar7 = pMVar1->klass->rgctx_data;
    puStack_8 = &stack0xffffffd8;
    if (-1 < (int)(pIVar7[1].method)->return_type) {
      puStack_8 = unaff_EDI;
    }
    pMVar9 = pIVar7[4].method;
    pp_Stack_18 = &value;
    value = (_Il2CppFullySharedGenericType *)CONCAT31(value._1_3_,1);
    puStack_10 = puStack_3;
    (*pMVar9->invoker_method)(pMVar9->methodPointer,pMVar9,method,&puStack_8,puStack_3);
    puVar11 = puStack_5;
    func_?(puStack_5,puVar6,uVar2);
    puVar6 = puStack_4;
    func_?(puStack_4,puVar11,uVar2);
    value_00 = (Object *)func_?(pMVar1->klass->rgctx_data[1].rgctxDataDummy,puVar6);
    KogamaSettingBase::KogamaSettingBase_set_Value
              ((KogamaSettingBase *)this,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

