
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
  uVar1 = (method->klass->rgctx_data[3].klass)->actualSize;
  func_?();
  func_?();
  func_?();
  KogamaSettingValueWrapperBase::KogamaSettingValueWrapperBase__ctor
            ((KogamaSettingValueWrapperBase *)this,key,parent,(MethodInfo *)0x0);
  p_Var5 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(method->klass->rgctx_data[3].method)->return_type < 0) {
    p_Var5 = value;
  }
  func_?(&stack0xffffffe0,p_Var5,uVar1);
  p_Var5 = (_Il2CppFullySharedGenericType *)&min;
  if ((int)(method->klass->rgctx_data[3].method)->return_type < 0) {
    p_Var5 = min;
  }
  func_?(&stack0xffffffe0,p_Var5,uVar1);
  pMVar2 = method;
  p_Var5 = (_Il2CppFullySharedGenericType *)&max;
  if ((int)(method->klass->rgctx_data[3].method)->return_type < 0) {
    p_Var5 = max;
  }
  func_?(&stack0xffffffe0,p_Var5,uVar1);
  if (((uint)(pMVar2->klass->rgctx_data[1].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?();
  }
  pKVar3 = (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           func_?();
  pIVar4 = method->klass->rgctx_data;
  puVar5 = &stack0xffffffe0;
  if (-1 < (int)(pIVar4[3].method)->return_type) {
    puVar5 = unaff_EDI;
  }
  pMVar2 = pIVar4[5].method;
  (*pMVar2->invoker_method)(pMVar2->methodPointer,pMVar2,pKVar3,(void **)&stack0xffffffec,puVar5);
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
  iVar1 = *(int *)(*(int *)((int)in_stack_2 + 0x10) + 0x60);
  uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x84);
  func_?();
  pKVar4 = (this->fields).KogamaSettingNumeric;
  if (pKVar4 != (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    puVar5 = *(undefined4 **)(iVar1 + 8);
    in_stack_2 = &stack0xfffffff0;
    (*(code *)puVar5[2])(*puVar5,puVar5,pKVar4,&stack0x0000000c,&stack0xfffffff0);
    p_Var6 = (_Il2CppFullySharedGenericType *)func_?(method,&stack0xfffffff0,uVar3);
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
  pIVar1 = method->klass->rgctx_data[3].klass;
  func_?();
  pKVar2 = (this->fields).KogamaSettingNumeric;
  iVar3._0_2_ = (pIVar1->byval_arg).attrs;
  iVar3._2_1_ = (pIVar1->byval_arg).type;
  iVar3._3_1_ = (pIVar1->byval_arg).field_0x7;
  p_Var7 = (_Il2CppFullySharedGenericType *)&value;
  if (iVar3 < 0) {
    p_Var7 = value;
  }
  func_?(&stack0xfffffff4,p_Var7,pIVar1->actualSize);
  if (pKVar2 != (KogamaSettingNumeric_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pIVar4 = method->klass->rgctx_data;
    value = (_Il2CppFullySharedGenericType *)&stack0xfffffff4;
    if (-1 < (int)(pIVar4[3].method)->return_type) {
      value = unaff_EDI;
    }
    pMVar5 = pIVar4[4].method;
    (*pMVar5->invoker_method)(pMVar5->methodPointer,pMVar5,pKVar2,&value,value);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

