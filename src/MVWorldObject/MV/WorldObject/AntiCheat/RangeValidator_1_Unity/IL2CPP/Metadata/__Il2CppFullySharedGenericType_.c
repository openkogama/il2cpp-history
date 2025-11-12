
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[Unity::IL2CPP::Metadata::
         __Il2CppFullySharedGenericType]::
         RangeValidator_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__ToString
                   (RangeValidator_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    apuStack_1[0] = &UNK_?;
    FUN_?(&StringLiteral_min__0___max__1__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar2 = method->klass->rgctx_data->klass->actualSize;
  apuStack_1[0] = &UNK_?;
  lVar3 = FUN_?(0xffffffffffffff0);
  lVar3 = -lVar3;
  *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
  lVar4 = FUN_?();
  lVar4 = -lVar4;
  lVar5 = (longlong)&PStack_6 + lVar4 + lVar3;
  pFVar7 = (method->klass->rgctx_data[1].klass)->fields;
  pIVar8 = pFVar7->parent;
  lVar9 = (longlong)&this->klass + (longlong)pFVar7->offset;
  iVar10._0_2_ = (pIVar8->byval_arg).attrs;
  iVar10._2_1_ = (pIVar8->byval_arg).type;
  iVar10._3_1_ = (pIVar8->byval_arg).field_0xb;
  lVar11 = lVar9 + -0x10;
  if (-1 < iVar10) {
    lVar11 = lVar9;
  }
  *(undefined **)((longlong)apuStack_1 + lVar4 + lVar3) = &UNK_?;
  FUN_?((longlong)&PStack_6 + lVar3,lVar11,uVar2);
  pvVar12 = method->klass->rgctx_data->rgctxDataDummy;
  *(undefined **)((longlong)apuStack_1 + lVar4 + lVar3) = &UNK_?;
  arg0 = (Object *)FUN_?(pvVar12,(longlong)&PStack_6 + lVar3);
  pFVar7 = (method->klass->rgctx_data[1].klass)->fields;
  pIVar8 = pFVar7[1].parent;
  lVar9 = (longlong)&this->klass + (longlong)pFVar7[1].offset;
  iVar13._0_2_ = (pIVar8->byval_arg).attrs;
  iVar13._2_1_ = (pIVar8->byval_arg).type;
  iVar13._3_1_ = (pIVar8->byval_arg).field_0xb;
  lVar11 = lVar9 + -0x10;
  if (-1 < iVar13) {
    lVar11 = lVar9;
  }
  *(undefined **)((longlong)apuStack_1 + lVar4 + lVar3) = &UNK_?;
  FUN_?(lVar5,lVar11,uVar2);
  pvVar12 = method->klass->rgctx_data->rgctxDataDummy;
  *(undefined **)((longlong)apuStack_1 + lVar4 + lVar3) = &UNK_?;
  arg1 = (Object *)FUN_?(pvVar12,lVar5);
  pSVar14 = StringLiteral_min__0___max__1__;
  PStack_6._arg0 = (Object *)0x0;
  PStack_6._arg1 = (Object *)0x0;
  PStack_6._arg2 = (Object *)0x0;
  PStack_6._args = (Object__Array *)0x0;
  *(undefined **)((longlong)apuStack_1 + lVar4 + lVar3) = &UNK_?;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_6,arg0,arg1,(MethodInfo *)0x0);
  PStack_15._arg0 = PStack_6._arg0;
  PStack_15._arg1 = PStack_6._arg1;
  PStack_15._arg2 = PStack_6._arg2;
  PStack_15._args = PStack_6._args;
  *(undefined **)((longlong)apuStack_1 + lVar4 + lVar3) = &UNK_?;
  pSVar14 = mscorlib.dll::System::String::String_FormatHelper
                      ((IFormatProvider *)0x0,pSVar14,&PStack_15,(MethodInfo *)0x0);
  return pSVar14;
}


/* __Il2CppFullySharedGenericType Validate(__Il2CppFullySharedGenericType, Boolean) */

_Il2CppFullySharedGenericType *
MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType]::
RangeValidator_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Validate
          (RangeValidator_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          _Il2CppFullySharedGenericType *value,bool fixIfInValid,MethodInfo *method)

{
  lVar1 = CONCAT44(in_stack_2,in_stack_3);
  uVar4 = *(undefined4 *)(**(longlong **)(*(longlong *)(lVar1 + 0x20) + 0xc0) + 0xfc);
  lVar5 = **(longlong **)(*(longlong *)(lVar1 + 0x20) + 0xc0);
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)value;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    apuStack_6[0] = &UNK_?;
    FUN_?(lVar5);
  }
  apuStack_6[0] = &UNK_?;
  lVar7 = FUN_?();
  lVar7 = -lVar7;
  aplStack_8[1] = (longlong *)((longlong)aplStack_8 + lVar7);
  lVar5 = **(longlong **)(*(longlong *)(lVar1 + 0x20) + 0xc0);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_6 + lVar7) = &UNK_?;
    FUN_?(lVar5);
  }
  *(undefined **)((longlong)apuStack_6 + lVar7) = &UNK_?;
  lVar9 = FUN_?();
  lVar9 = -lVar9;
  lStack_10 = (longlong)aplStack_8 + lVar9 + lVar7;
  *(undefined **)((longlong)apuStack_6 + lVar9 + lVar7) = &UNK_?;
  lVar11 = FUN_?();
  lVar11 = -lVar11;
  plVar12 = (longlong *)((longlong)aplStack_8 + lVar11 + lVar9 + lVar7);
  lVar5 = *(longlong *)
            (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + 0xc0) + 8) + 0x80);
  lVar13 = (longlong)&this->klass + (longlong)*(int *)(lVar5 + 0x18);
  lVar14 = lVar13 + -0x10;
  if (-1 < *(int *)(*(longlong *)(lVar5 + 0x10) + 0x28)) {
    lVar14 = lVar13;
  }
  *(undefined **)((longlong)apuStack_6 + lVar11 + lVar9 + lVar7) = &UNK_?;
  FUN_?(plVar12,lVar14);
  plVar15 = plVar12;
  if (-1 < *(int *)(**(longlong **)(*(longlong *)(lVar1 + 0x20) + 0xc0) + 0x28)) {
    plVar15 = (longlong *)*plVar12;
  }
  p_Var16 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_10;
  if (*(int *)(**(longlong **)(*(longlong *)(lVar1 + 0x20) + 0xc0) + 0x28) < 0) {
    p_Var16 = p_StackX_10;
  }
  plVar16 = *(longlong **)(*(longlong *)(lVar1 + 0x20) + 0xc0);
  lVar5 = *plVar16;
  lVar14 = plVar16[3];
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_6 + lVar11 + lVar9 + lVar7) = &UNK_?;
    lVar5 = FUN_?(lVar5);
  }
  plVar16 = aplStack_8[1];
  *(int **)((longlong)alStack_17 + lVar11 + lVar9 + lVar7 + 8) = &stack0x00000028;
  aplStack_8[0] = plVar15;
  *(longlong ***)((longlong)alStack_17 + lVar11 + lVar9 + lVar7) = aplStack_8;
  *(undefined **)((longlong)apuStack_6 + lVar11 + lVar9 + lVar7) = &UNK_?;
  FUN_?(lVar5,lVar14,plVar16,p_Var16);
  if (in_stack_3 < 0) {
    if (fixIfInValid == 0) {
      *(undefined **)((longlong)apuStack_6 + lVar11 + lVar9 + lVar7) = &UNK_?;
      uVar18 = func_?(&TypeInfo__System__Exception);
      *(undefined **)((longlong)apuStack_6 + lVar11 + lVar9 + lVar7) = &UNK_?;
      pEVar19 = (Exception *)func_?(uVar18);
      *(undefined **)((longlong)apuStack_6 + lVar11 + lVar9 + lVar7) = &UNK_?;
      pSVar20 = (String *)func_?(&StringLiteral_value__minVal);
      *(undefined **)((longlong)apuStack_6 + lVar11 + lVar9 + lVar7) = &UNK_?;
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar19,pSVar20,(MethodInfo *)0x0);
      *(undefined **)((longlong)apuStack_6 + lVar11 + lVar9 + lVar7) = &UNK_?;
      FUN_?(pEVar19,lVar1);
      pcVar21 = (code *)swi(3);
      p_Var11 = (_Il2CppFullySharedGenericType *)(*pcVar21)();
      return p_Var11;
    }
    lVar5 = *(longlong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + 0xc0) + 8) + 0x80);
    iVar22 = *(int *)(lVar5 + 0x18);
    lVar5 = *(longlong *)(lVar5 + 0x10);
  }
  else {
    lVar5 = *(longlong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + 0xc0) + 8) + 0x80);
    lVar13 = (longlong)&this->klass + (longlong)*(int *)(lVar5 + 0x38);
    lVar14 = lVar13 + -0x10;
    if (-1 < *(int *)(*(longlong *)(lVar5 + 0x30) + 0x28)) {
      lVar14 = lVar13;
    }
    *(undefined **)((longlong)apuStack_6 + lVar11 + lVar9 + lVar7) = &UNK_?;
    FUN_?(plVar12,lVar14,uVar4);
    plVar15 = plVar12;
    if (-1 < *(int *)(**(longlong **)(*(longlong *)(lVar1 + 0x20) + 0xc0) + 0x28)) {
      plVar15 = (longlong *)*plVar12;
    }
    p_Var16 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_10;
    if (*(int *)(**(longlong **)(*(longlong *)(lVar1 + 0x20) + 0xc0) + 0x28) < 0) {
      p_Var16 = p_StackX_10;
    }
    plVar16 = *(longlong **)(*(longlong *)(lVar1 + 0x20) + 0xc0);
    lVar5 = *plVar16;
    lVar14 = plVar16[3];
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      *(undefined **)((longlong)apuStack_6 + lVar11 + lVar9 + lVar7) = &UNK_?;
      lVar5 = FUN_?(lVar5);
    }
    lVar13 = lStack_10;
    *(int **)((longlong)alStack_17 + lVar11 + lVar9 + lVar7 + 8) = &stack0x00000028;
    aplStack_8[1] = plVar15;
    *(longlong ***)((longlong)alStack_17 + lVar11 + lVar9 + lVar7) = aplStack_8 + 1;
    *(undefined **)((longlong)apuStack_6 + lVar11 + lVar9 + lVar7) = &UNK_?;
    FUN_?(lVar5,lVar14,lVar13,p_Var16);
    if (in_stack_3 < 1) {
      p_Var16 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_10;
      if (*(int *)(**(longlong **)(*(longlong *)(lVar1 + 0x20) + 0xc0) + 0x28) < 0) {
        p_Var16 = p_StackX_10;
      }
      goto code_?;
    }
    if (fixIfInValid == 0) {
      *(undefined **)((longlong)apuStack_6 + lVar11 + lVar9 + lVar7) = &UNK_?;
      uVar18 = func_?(&TypeInfo__System__Exception);
      *(undefined **)((longlong)apuStack_6 + lVar11 + lVar9 + lVar7) = &UNK_?;
      pEVar19 = (Exception *)func_?(uVar18);
      *(undefined **)((longlong)apuStack_6 + lVar11 + lVar9 + lVar7) = &UNK_?;
      pSVar20 = (String *)func_?(&StringLiteral_value___maxVal);
      *(undefined **)((longlong)apuStack_6 + lVar11 + lVar9 + lVar7) = &UNK_?;
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar19,pSVar20,(MethodInfo *)0x0);
      *(undefined **)((longlong)apuStack_6 + lVar11 + lVar9 + lVar7) = &UNK_?;
      FUN_?(pEVar19,lVar1);
      pcVar21 = (code *)swi(3);
      p_Var11 = (_Il2CppFullySharedGenericType *)(*pcVar21)();
      return p_Var11;
    }
    lVar5 = *(longlong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + 0xc0) + 8) + 0x80);
    iVar22 = *(int *)(lVar5 + 0x38);
    lVar5 = *(longlong *)(lVar5 + 0x30);
  }
  p_Var18 = (_Il2CppFullySharedGenericType__Class *)((longlong)&this->klass + (longlong)iVar22);
  p_Var16 = (_Il2CppFullySharedGenericType__Class *)&p_Var18[-1].vtable.ToString;
  if (-1 < *(int *)(lVar5 + 0x28)) {
    p_Var16 = p_Var18;
  }
code_?:
  *(undefined **)((longlong)apuStack_6 + lVar11 + lVar9 + lVar7) = &UNK_?;
  FUN_?(plVar12,p_Var16,uVar4);
  *(undefined **)((longlong)apuStack_6 + lVar11 + lVar9 + lVar7) = &UNK_?;
  p_Var11 = (_Il2CppFullySharedGenericType *)FUN_?(method,plVar12,uVar4);
  return p_Var11;
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
  apuStack_2[0] = &UNK_?;
  _StackX_10.klass = (_Il2CppFullySharedGenericType__Class *)min;
  _StackX_10.monitor = (MonitorData *)max;
  lVar3 = FUN_?(0xffffffffffffff0,min,max,min);
  lVar3 = -lVar3;
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  lVar4 = FUN_?();
  lVar4 = -lVar4;
  p_Var5 = &_StackX_10;
  if (*(int *)&method->klass->rgctx_data->method->return_type < 0) {
    p_Var5 = min;
  }
  *(undefined **)((longlong)apuStack_2 + lVar4 + lVar3) = &UNK_?;
  FUN_?(&stack0xffffffffffffffd8 + lVar3,p_Var5,uVar1);
  pFVar5 = (method->klass->rgctx_data[1].klass)->fields;
  *(undefined **)((longlong)apuStack_2 + lVar4 + lVar3) = &UNK_?;
  FUN_?(this,pFVar5,&stack0xffffffffffffffd8 + lVar3,uVar1);
  p_Var5 = (_Il2CppFullySharedGenericType *)&_StackX_10.monitor;
  if (*(int *)&method->klass->rgctx_data->method->return_type < 0) {
    p_Var5 = max;
  }
  *(undefined **)((longlong)apuStack_2 + lVar4 + lVar3) = &UNK_?;
  FUN_?(&stack0xffffffffffffffd8 + lVar4 + lVar3,p_Var5,uVar1);
  pFVar5 = (method->klass->rgctx_data[1].klass)->fields;
  *(undefined **)((longlong)apuStack_2 + lVar4 + lVar3) = &UNK_?;
  FUN_?(this,pFVar5 + 1,&stack0xffffffffffffffd8 + lVar4 + lVar3,uVar1);
  return;
}

