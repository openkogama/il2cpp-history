
/* KogamaSettingNumericBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](String,
   __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType,
   KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     KogamaSettingNumericBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (KogamaSettingNumericBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
               ,String *key,_Il2CppFullySharedGenericType *value,_Il2CppFullySharedGenericType *min,
               _Il2CppFullySharedGenericType *max,KogamaSettingsCollectionBase *parent,
               MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[3].klass)->actualSize;
  func_?();
  method = (MethodInfo *)&stack0xffffffe0;
  func_?();
  func_?();
  KogamaSettingValueWrapperBase::KogamaSettingValueWrapperBase__ctor
            ((KogamaSettingValueWrapperBase *)this,key,parent,(MethodInfo *)0x0);
  p_Var5 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(pMVar1->klass->rgctx_data[3].method)->return_type < 0) {
    p_Var5 = value;
  }
  func_?(method,p_Var5,uVar2);
  p_Var5 = (_Il2CppFullySharedGenericType *)&min;
  if ((int)(pMVar1->klass->rgctx_data[3].method)->return_type < 0) {
    p_Var5 = min;
  }
  func_?(&stack0xffffffe0,p_Var5,uVar2);
  p_Var5 = (_Il2CppFullySharedGenericType *)&max;
  if ((int)(pMVar1->klass->rgctx_data[3].method)->return_type < 0) {
    p_Var5 = max;
  }
  func_?(&stack0xffffffe0,p_Var5,uVar2);
  if (((uint)(pMVar1->klass->rgctx_data[1].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?();
  }
  pKVar3 = (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           func_?();
  if (-1 < (int)(pMVar1->klass->rgctx_data[3].method)->return_type) {
    method = (MethodInfo *)method->methodPointer;
  }
  pMVar4 = pMVar1->klass->rgctx_data[5].method;
  (*pMVar4->invoker_method)
            ((pMVar1->klass->rgctx_data[5].method)->methodPointer,pMVar4,pKVar3,
             (void **)&stack0xffffffec,method);
  (this->fields).KogamaSettingNumeric = pKVar3;
  func_?();
  return;
}


/* __Il2CppFullySharedGenericType get_NumericValue() */

_Il2CppFullySharedGenericType *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
KogamaSettingNumericBase`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
KogamaSettingNumericBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_NumericValue
          (KogamaSettingNumericBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  uVar1 = *(undefined4 *)
           (*(int *)(*(int *)(*(int *)((int)in_stack_2 + 0x10) + 0x60) + 0xc) + 0x84);
  func_?();
  pKVar3 = (this->fields).KogamaSettingNumeric;
  if (pKVar3 != (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    iVar4 = *(int *)(*(int *)(*(int *)((int)in_stack_2 + 0x10) + 0x60) + 8);
    piVar5 = (int *)((int)in_stack_2 + 0x10);
    in_stack_2 = &stack0xfffffff0;
    (**(code **)(iVar4 + 8))
              (**(undefined4 **)(*(int *)(*piVar5 + 0x60) + 8),iVar4,pKVar3,&stack0x0000000c,
               &stack0xfffffff0);
    p_Var6 = (_Il2CppFullySharedGenericType *)func_?(method,&stack0xfffffff0,uVar1);
    return p_Var6;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  p_Var6 = (_Il2CppFullySharedGenericType *)(*pcVar6)();
  return p_Var6;
}


/* Void set_NumericValue(__Il2CppFullySharedGenericType) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingNumericBase`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
     KogamaSettingNumericBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_NumericValue
               (KogamaSettingNumericBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
               ,_Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[3].klass)->actualSize;
  func_?();
  method = (MethodInfo *)(this->fields).KogamaSettingNumeric;
  p_Var5 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(pMVar1->klass->rgctx_data[3].method)->return_type < 0) {
    p_Var5 = value;
  }
  func_?(&stack0xfffffff0,p_Var5,uVar2);
  if (method != (MethodInfo *)0x0) {
    value = (_Il2CppFullySharedGenericType *)&stack0xfffffff0;
    if (-1 < (int)(pMVar1->klass->rgctx_data[3].method)->return_type) {
      value = unaff_EDI;
    }
    pMVar3 = pMVar1->klass->rgctx_data[4].method;
    (*pMVar3->invoker_method)
              ((pMVar1->klass->rgctx_data[4].method)->methodPointer,pMVar3,method,&value,value);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

