
/* MVRuntimeDataVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](String, Single,
   Dictionary`2[System.Object,System.Object], Boolean) */

void Assembly-CSharp.dll::MVRuntimeDataVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               String *variableId,float sendInterval,
               Dictionary_2_System_Object_System_Object_ *initialRuntimeData,bool writeThrough,
               MethodInfo *method)

{
  MVRuntimeDataVariable::MVRuntimeDataVariable__ctor
            ((MVRuntimeDataVariable *)this,variableId,sendInterval,initialRuntimeData,writeThrough,
             (MethodInfo *)0x0);
  return;
}


/* __Il2CppFullySharedGenericType get_Value() */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::MVRuntimeDataVariable`1[Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType]::
MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Value
          (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  uVar1 = *(undefined4 *)(**(int **)(*(int *)(in_stack_2 + 0x10) + 0x60) + 0x84);
  func_?();
  if (this != (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pOVar3 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value
                       ((MVRuntimeDataVariable *)this,(MethodInfo *)0x0);
    if ((*(byte *)(**(int **)(*(int *)(in_stack_2 + 0x10) + 0x60) + 0xbd) & 1) == 0) {
      func_?();
    }
    uVar4 = func_?(pOVar3);
    p_Var5 = (_Il2CppFullySharedGenericType *)func_?(method,uVar4,uVar1);
    return p_Var5;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  p_Var5 = (_Il2CppFullySharedGenericType *)(*pcVar5)();
  return p_Var5;
}


/* Void set_Value(__Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::MVRuntimeDataVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_Value
               (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = method->klass->rgctx_data->klass->actualSize;
  func_?();
  p_Var4 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)pMVar1->klass->rgctx_data->method->return_type < 0) {
    p_Var4 = value;
  }
  func_?(&stack0xfffffff0,p_Var4,uVar2);
  value_00 = (Object *)func_?(pMVar1->klass->rgctx_data->rgctxDataDummy,&stack0xfffffff0);
  if (this != (MVRuntimeDataVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
              ((MVRuntimeDataVariable *)this,value_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

