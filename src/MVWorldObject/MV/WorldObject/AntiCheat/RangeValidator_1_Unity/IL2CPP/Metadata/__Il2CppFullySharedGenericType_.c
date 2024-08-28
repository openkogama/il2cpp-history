
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[Unity::IL2CPP::Metadata::
         __Il2CppFullySharedGenericType]::
         RangeValidator_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__ToString
                   (RangeValidator_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_min__0___max__1__);
    cRam_? = '\x01';
  }
  pIVar1 = method->klass->rgctx_data;
  uVar2 = pIVar1->klass->actualSize;
  func_?();
  func_?();
  uVar3 = func_?(this,(pIVar1[1].klass)->fields);
  func_?(&stack0xffffffec,uVar3,uVar2);
  arg0 = (Object *)func_?(method->klass->rgctx_data->rgctxDataDummy,&stack0xffffffec);
  uVar3 = func_?(this,(method->klass->rgctx_data[1].klass)->fields + 1);
  func_?(&stack0xffffffec,uVar3,uVar2);
  arg1 = (Object *)func_?(method->klass->rgctx_data->rgctxDataDummy,&stack0xffffffec);
  pSVar4 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_min__0___max__1__,arg0,arg1,(MethodInfo *)0x0);
  return pSVar4;
}


/* __Il2CppFullySharedGenericType Validate(__Il2CppFullySharedGenericType, Boolean) */

_Il2CppFullySharedGenericType *
MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType]::
RangeValidator_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Validate
          (RangeValidator_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          _Il2CppFullySharedGenericType *value,bool fixIfInValid,MethodInfo *method)

{
  iVar1 = (int)in_stack_2;
  iVar3 = **(int **)(*(int *)((int)in_stack_2 + 0x10) + 0x60);
  uVar4 = *(undefined4 *)(iVar3 + 0x84);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    func_?(iVar3);
  }
  func_?();
  iVar3 = **(int **)(*(int *)((int)in_stack_2 + 0x10) + 0x60);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    func_?(iVar3);
  }
  func_?();
  func_?();
  uVar5 = func_?(this,*(undefined4 *)
                                (*(int *)(*(int *)(*(int *)((int)in_stack_2 + 0x10) + 0x60) +
                                         4) + 0x40));
  func_?(&stack0xffffffe0,uVar5,uVar4);
  piVar6 = *(int **)(*(int *)((int)in_stack_2 + 0x10) + 0x60);
  iVar3 = *piVar6;
  p_Stack_c = (_Il2CppFullySharedGenericType *)&value;
  in_stack_2 = unaff_EDI;
  if (*(int *)(iVar3 + 0x14) < 0) {
    p_Stack_c = value;
    in_stack_2 = &stack0xffffffe0;
  }
  iStack_7 = piVar6[3];
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = func_?(iVar3);
  }
  func_?(iVar3,iStack_7,&stack0xffffffe0,p_Stack_c,&stack0x00000014,&p_Stack_c);
  if ((int)p_Stack_c < 0) {
    if (fixIfInValid == 0) goto code_?;
    iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 4) + 0x40);
  }
  else {
    uVar5 = func_?(this,*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 4) +
                                         0x40) + 0x14);
    func_?(&stack0xffffffe0,uVar5,uVar4);
    piVar6 = *(int **)(*(int *)(iVar1 + 0x10) + 0x60);
    iVar3 = *piVar6;
    p_Stack_c = (_Il2CppFullySharedGenericType *)&value;
    in_stack_2 = unaff_EDI;
    if (*(int *)(iVar3 + 0x14) < 0) {
      p_Stack_c = value;
      in_stack_2 = &stack0xffffffe0;
    }
    iVar8 = piVar6[3];
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = func_?(iVar3);
    }
    func_?(iVar3,iVar8,&stack0xffffffe0,p_Stack_c,&stack0x00000014,&p_Stack_c);
    if ((int)p_Stack_c < 1) {
      p_Var7 = (_Il2CppFullySharedGenericType *)&value;
      if (*(int *)(**(int **)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14) < 0) {
        p_Var7 = value;
      }
      func_?(&stack0xffffffe0,p_Var7,uVar4);
      p_Var7 = (_Il2CppFullySharedGenericType *)func_?(method,&stack0xffffffe0,uVar4);
      return p_Var7;
    }
    if (fixIfInValid == 0) {
      uVar4 = func_?(&TypeInfo__System__Exception);
      pEVar9 = (Exception *)func_?(uVar4);
      pMVar10 = (MethodInfo *)0x0;
      pSVar11 = (String *)func_?(&StringLiteral_value___maxVal);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar9,pSVar11,pMVar10);
      func_?();
code_?:
      uVar4 = func_?(&TypeInfo__System__Exception);
      pEVar9 = (Exception *)func_?(uVar4);
      pMVar10 = (MethodInfo *)0x0;
      pSVar11 = (String *)func_?(&StringLiteral_value__minVal);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar9,pSVar11,pMVar10);
      func_?();
      pcVar12 = (code *)swi(3);
      p_Var7 = (_Il2CppFullySharedGenericType *)(*pcVar12)();
      return p_Var7;
    }
    iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 4) + 0x40) + 0x14;
  }
  uVar5 = func_?(this,iVar3);
  func_?(&stack0xffffffe0,uVar5,uVar4);
  p_Var7 = (_Il2CppFullySharedGenericType *)func_?(method,&stack0xffffffe0,uVar4);
  return p_Var7;
}


/* RangeValidator`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType) */

void MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     RangeValidator_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor_1
               (RangeValidator_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *min,_Il2CppFullySharedGenericType *max,
               MethodInfo *method)

{
  uVar1 = method->klass->rgctx_data->klass->actualSize;
  func_?();
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  p_Var2 = (_Il2CppFullySharedGenericType *)&min;
  if ((int)method->klass->rgctx_data->method->return_type < 0) {
    p_Var2 = min;
  }
  func_?(&stack0xfffffff0,p_Var2,uVar1);
  func_?(this,(method->klass->rgctx_data[1].klass)->fields,&stack0xfffffff0,uVar1);
  p_Var2 = (_Il2CppFullySharedGenericType *)&max;
  if ((int)method->klass->rgctx_data->method->return_type < 0) {
    p_Var2 = max;
  }
  func_?(&stack0xfffffff0,p_Var2,uVar1);
  func_?(this,(method->klass->rgctx_data[1].klass)->fields + 1,&stack0xfffffff0,uVar1);
  return;
}

