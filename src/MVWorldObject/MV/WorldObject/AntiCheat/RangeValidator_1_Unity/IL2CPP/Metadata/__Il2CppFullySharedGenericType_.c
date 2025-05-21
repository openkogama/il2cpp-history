
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
  uVar1 = method->klass->rgctx_data->klass->actualSize;
  func_?();
  func_?();
  uVar2 = func_?(this,(method->klass->rgctx_data[1].klass)->fields);
  func_?(&stack0xffffffec,uVar2,uVar1);
  arg0 = (Object *)func_?(method->klass->rgctx_data->rgctxDataDummy,&stack0xffffffec);
  uVar2 = func_?(this,(method->klass->rgctx_data[1].klass)->fields + 1);
  func_?(&stack0xffffffec,uVar2,uVar1);
  arg1 = (Object *)func_?(method->klass->rgctx_data->rgctxDataDummy,&stack0xffffffec);
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_min__0___max__1__,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
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
  uVar3 = *(undefined4 *)(**(int **)(*(int *)((int)in_stack_2 + 0x10) + 0x60) + 0x84);
  iVar4 = **(int **)(*(int *)((int)in_stack_2 + 0x10) + 0x60);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    func_?(iVar4);
  }
  func_?();
  iVar4 = **(int **)(*(int *)((int)in_stack_2 + 0x10) + 0x60);
  puStack_5 = &stack0xffffffdc;
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    puStack_5 = &stack0xffffffdc;
    func_?(iVar4);
  }
  func_?();
  func_?();
  uVar6 = func_?(this,*(undefined4 *)
                                (*(int *)(*(int *)(*(int *)((int)in_stack_2 + 0x10) + 0x60) +
                                         4) + 0x40));
  func_?(&stack0xffffffdc,uVar6,uVar3);
  piVar7 = (int *)((int)in_stack_2 + 0x10);
  in_stack_2 = unaff_EDI;
  if (*(int *)(**(int **)(*piVar7 + 0x60) + 0x14) < 0) {
    in_stack_2 = &stack0xffffffdc;
  }
  p_Stack_8 = (_Il2CppFullySharedGenericType *)&value;
  if (*(int *)(**(int **)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14) < 0) {
    p_Stack_8 = value;
  }
  uStack_8 = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xc);
  iVar4 = **(int **)(*(int *)(iVar1 + 0x10) + 0x60);
  if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = func_?(iVar4);
  }
  func_?(iVar4,uStack_8,puStack_5,p_Stack_8,&stack0x00000014,&p_Stack_14);
  if ((int)p_Stack_14 < 0) {
    if (fixIfInValid == 0) goto code_?;
    iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 4) + 0x40);
  }
  else {
    uVar6 = func_?(this,*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 4) +
                                         0x40) + 0x14);
    func_?(&stack0xffffffdc,uVar6,uVar3);
    in_stack_2 = unaff_EDI;
    if (*(int *)(**(int **)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14) < 0) {
      in_stack_2 = &stack0xffffffdc;
    }
    p_Stack_14 = (_Il2CppFullySharedGenericType *)&value;
    if (*(int *)(**(int **)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14) < 0) {
      p_Stack_14 = value;
    }
    uStack_8 = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 0xc);
    iVar4 = **(int **)(*(int *)(iVar1 + 0x10) + 0x60);
    if ((*(byte *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = func_?(iVar4);
    }
    func_?(iVar4,uStack_8,&stack0xffffffdc,p_Stack_14,&stack0x00000014,&puStack_5);
    if ((int)puStack_5 < 1) {
      p_Var6 = (_Il2CppFullySharedGenericType *)&value;
      if (*(int *)(**(int **)(*(int *)(iVar1 + 0x10) + 0x60) + 0x14) < 0) {
        p_Var6 = value;
      }
      func_?(&stack0xffffffdc,p_Var6,uVar3);
      p_Var6 = (_Il2CppFullySharedGenericType *)func_?(method,&stack0xffffffdc,uVar3);
      return p_Var6;
    }
    if (fixIfInValid == 0) {
      uVar3 = func_?(&TypeInfo__System__Exception);
      pEVar9 = (Exception *)func_?(uVar3);
      pMVar10 = (MethodInfo *)0x0;
      pSVar11 = (String *)func_?(&StringLiteral_value___maxVal);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar9,pSVar11,pMVar10);
      func_?();
code_?:
      uVar3 = func_?(&TypeInfo__System__Exception);
      pEVar9 = (Exception *)func_?(uVar3);
      pMVar10 = (MethodInfo *)0x0;
      pSVar11 = (String *)func_?(&StringLiteral_value__minVal);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar9,pSVar11,pMVar10);
      func_?();
      pcVar12 = (code *)swi(3);
      p_Var6 = (_Il2CppFullySharedGenericType *)(*pcVar12)();
      return p_Var6;
    }
    iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x10) + 0x60) + 4) + 0x40) + 0x14;
  }
  uVar6 = func_?(this,iVar4);
  func_?(&stack0xffffffdc,uVar6,uVar3);
  p_Var6 = (_Il2CppFullySharedGenericType *)func_?(method,&stack0xffffffdc,uVar3);
  return p_Var6;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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

