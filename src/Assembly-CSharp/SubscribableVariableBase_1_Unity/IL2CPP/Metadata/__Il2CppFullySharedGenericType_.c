
/* Boolean Equals(SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Equals
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
               ,SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *other,MethodInfo *method)

{
  pIVar1 = method->klass->rgctx_data[5].klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  apuStack_2[0] = &UNK_?;
  lVar3 = FUN_?(pIVar1->actualSize + 0x10,0xffffffffffffff0);
  lVar3 = -lVar3;
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  lVar4 = FUN_?();
  lVar4 = -lVar4;
  pFVar5 = method->klass->rgctx_data->klass->fields;
  pIVar1 = pFVar5->parent;
  lVar6 = (longlong)&other->klass + (longlong)pFVar5->offset;
  iVar7._0_2_ = (pIVar1->byval_arg).attrs;
  iVar7._2_1_ = (pIVar1->byval_arg).type;
  iVar7._3_1_ = (pIVar1->byval_arg).field_0xb;
  lVar8 = lVar6 + -0x10;
  if (-1 < iVar7) {
    lVar8 = lVar6;
  }
  *(undefined **)((longlong)apuStack_2 + lVar4 + lVar3) = &UNK_?;
  FUN_?(&stack0xffffffffffffffd8 + lVar4 + lVar3,lVar8);
  pvVar9 = method->klass->rgctx_data[5].rgctxDataDummy;
  *(undefined **)((longlong)apuStack_2 + lVar4 + lVar3) = &UNK_?;
  uStackX_10 = FUN_?(pvVar9,&stack0xffffffffffffffd8 + lVar4 + lVar3);
  pFVar5 = method->klass->rgctx_data->klass->fields;
  pIVar1 = pFVar5->parent;
  lVar6 = (longlong)&this->klass + (longlong)pFVar5->offset;
  iVar10._0_2_ = (pIVar1->byval_arg).attrs;
  iVar10._2_1_ = (pIVar1->byval_arg).type;
  iVar10._3_1_ = (pIVar1->byval_arg).field_0xb;
  lVar8 = lVar6 + -0x10;
  if (-1 < iVar10) {
    lVar8 = lVar6;
  }
  pIVar11 = method->klass->rgctx_data;
  pvVar9 = pIVar11[9].rgctxDataDummy;
  pvVar12 = pIVar11[5].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar12 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar4 + lVar3) = &UNK_?;
    pvVar12 = (void *)FUN_?(pvVar12);
  }
  *(bool **)((longlong)alStack_13 + lVar4 + lVar3 + 8) = abStackX_8;
  *(undefined8 **)((longlong)alStack_13 + lVar4 + lVar3) = &uStackX_10;
  *(undefined **)((longlong)apuStack_2 + lVar4 + lVar3) = &UNK_?;
  FUN_?(pvVar12,pvVar9,&stack0xffffffffffffffd8 + lVar3,lVar8);
  return abStackX_8[0];
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Equals_1
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
               ,Object *obj,MethodInfo *method)

{
  if (obj != (Object *)0x0) {
    if (this == (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                obj) {
      return 1;
    }
    lVar1 = FUN_?(&(obj->klass->_0).byval_arg);
    if (this == (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    lVar4 = FUN_?(&(this->klass->_0).byval_arg);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (lVar1 == lVar4) {
      pIVar5 = (method->klass->rgctx_data[1].method)->methodPointer;
      pIVar6 = method->klass->rgctx_data;
      pIVar7 = pIVar6->klass;
      pvVar8 = pIVar6[1].rgctxDataDummy;
      if ((pIVar7->field_0x135 & 1) == 0) {
        pIVar7 = (Il2CppClass *)FUN_?(pIVar7);
      }
      if ((pIVar7->naturalAligment <= (obj->klass->_1).naturalAligment) &&
         ((obj->klass->_1).typeHierarchy[(ulonglong)pIVar7->naturalAligment - 1] == pIVar7)) {
        bVar3 = (*pIVar5)(this,obj,pvVar8);
        return bVar3;
      }
      FUN_?(obj,pIVar7);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  return 0;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__GetHashCode
                  (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                   *this,MethodInfo *method)

{
  uVar1 = (method->klass->rgctx_data[5].klass)->actualSize;
  apuStack_2[0] = &UNK_?;
  pMVar3 = method;
  lVar4 = FUN_?();
  lVar4 = -lVar4;
  plVar5 = (longlong *)(&stack0xffffffffffffffd8 + lVar4);
  pIVar6 = (pMVar3->klass->rgctx_data[2].method)->methodPointer;
  *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
  plVar7 = (longlong *)(*pIVar6)();
  pFVar8 = method->klass->rgctx_data->klass->fields;
  pIVar9 = pFVar8->parent;
  lVar10 = (longlong)&this->klass + (longlong)pFVar8->offset;
  iVar11._0_2_ = (pIVar9->byval_arg).attrs;
  iVar11._2_1_ = (pIVar9->byval_arg).type;
  iVar11._3_1_ = (pIVar9->byval_arg).field_0xb;
  lVar12 = lVar10 + -0x10;
  if (-1 < iVar11) {
    lVar12 = lVar10;
  }
  *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
  FUN_?(plVar5,lVar12,uVar1);
  if (plVar7 != (longlong *)0x0) {
    if (-1 < *(int *)&(method->klass->rgctx_data[5].method)->return_type) {
      plVar5 = (longlong *)*plVar5;
    }
    lVar12 = *(longlong *)(*plVar7 + 0x1d0);
    pcVar13 = *(code **)(lVar12 + 0x10);
    uVar14 = *(undefined8 *)(lVar12 + 8);
    *(int32_t **)((longlong)alStack_15 + lVar4) = aiStackX_8;
    *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
    lStackX_10 = (longlong)plVar5;
    (*pcVar13)(uVar14,lVar12,plVar7,&lStackX_10);
    return aiStackX_8[0];
  }
  *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
  FUN_?();
  pcVar13 = (code *)swi(3);
  iVar16 = (*pcVar13)();
  return iVar16;
}


/* Void Notify() */

void Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Notify
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
               ,MethodInfo *method)

{
  apuStack_1[0] = &UNK_?;
  pMVar2 = method;
  lVar3 = FUN_?();
  lVar3 = -lVar3;
  pvStackX_8 = &stack0xfffffffffffffff8 + lVar3;
  pFVar4 = pMVar2->klass->rgctx_data->klass->fields;
  pIVar5 = pFVar4[1].parent;
  plVar6 = (longlong *)((longlong)&this->klass + (longlong)pFVar4[1].offset);
  iVar7._0_2_ = (pIVar5->byval_arg).attrs;
  iVar7._2_1_ = (pIVar5->byval_arg).type;
  iVar7._3_1_ = (pIVar5->byval_arg).field_0xb;
  plVar8 = plVar6 + -2;
  if (-1 < iVar7) {
    plVar8 = plVar6;
  }
  if (*plVar8 != 0) {
    pFVar4 = method->klass->rgctx_data->klass->fields;
    pIVar5 = pFVar4[1].parent;
    puVar9 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar4[1].offset);
    iVar10._0_2_ = (pIVar5->byval_arg).attrs;
    iVar10._2_1_ = (pIVar5->byval_arg).type;
    iVar10._3_1_ = (pIVar5->byval_arg).field_0xb;
    puVar11 = puVar9 + -2;
    if (-1 < iVar10) {
      puVar11 = puVar9;
    }
    pvVar12 = (void *)*puVar11;
    pFVar4 = method->klass->rgctx_data->klass->fields;
    lVar13 = (longlong)&this->klass + (longlong)pFVar4->offset;
    pIVar5 = pFVar4->parent;
    iVar14._0_2_ = (pIVar5->byval_arg).attrs;
    iVar14._2_1_ = (pIVar5->byval_arg).type;
    iVar14._3_1_ = (pIVar5->byval_arg).field_0xb;
    lVar15 = lVar13 + -0x10;
    if (-1 < iVar14) {
      lVar15 = lVar13;
    }
    *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
    FUN_?(pvStackX_8,lVar15);
    if (-1 < *(int *)&(method->klass->rgctx_data[5].method)->return_type) {
      pvStackX_8 = *(void **)pvStackX_8;
    }
    pIVar5 = method->klass;
    *(void **)((longlong)alStack_16 + lVar3) = pvStackX_8;
    pMVar2 = pIVar5->rgctx_data[0xc].method;
    pIVar17 = pMVar2->invoker_method;
    pIVar18 = pMVar2->methodPointer;
    *(undefined **)((longlong)apuStack_1 + lVar3) = &UNK_?;
    (*pIVar17)(pIVar18,pMVar2,pvVar12,&pvStackX_8,*(void **)((longlong)alStack_16 + lVar3));
  }
  return;
}


/* SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](__Il2CppFullySharedGenericType)
    */

void Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
               ,_Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  uVar1 = (method->klass->rgctx_data[5].klass)->actualSize;
  apuStack_2[0] = &UNK_?;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)value;
  lVar3 = FUN_?(this,value,value);
  lVar3 = -lVar3;
  p_Var4 = (_Il2CppFullySharedGenericType *)&p_StackX_10;
  if (*(int *)&(method->klass->rgctx_data[5].method)->return_type < 0) {
    p_Var4 = value;
  }
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?(&stack0xffffffffffffffe8 + lVar3,p_Var4,uVar1);
  pFVar4 = method->klass->rgctx_data->klass->fields;
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?(this,pFVar4,&stack0xffffffffffffffe8 + lVar3,uVar1);
  return;
}


/* Void add_OnChange(Action`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__add_OnChange
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
               ,Action_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *value,
               MethodInfo *method)

{
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar2 = pFVar1[1].parent;
  puVar3 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar1[1].offset);
  iVar4._0_2_ = (pIVar2->byval_arg).attrs;
  iVar4._2_1_ = (pIVar2->byval_arg).type;
  iVar4._3_1_ = (pIVar2->byval_arg).field_0xb;
  puVar5 = puVar3 + -2;
  if (-1 < iVar4) {
    puVar5 = puVar3;
  }
  a = (Delegate *)*puVar5;
  do {
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine(a,(Delegate *)value,(MethodInfo *)0x0)
    ;
    pvVar7 = method->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
      pvVar7 = (void *)FUN_?(pvVar7);
    }
    if (pDVar6 == (Delegate *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = FUN_?(pDVar6,pvVar7);
      if (lVar8 == 0) {
        FUN_?(pDVar6,pvVar7);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar1 = method->klass->rgctx_data->klass->fields;
    pIVar2 = pFVar1[1].parent;
    plVar10 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[1].offset);
    iVar11._0_2_ = (pIVar2->byval_arg).attrs;
    iVar11._2_1_ = (pIVar2->byval_arg).type;
    iVar11._3_1_ = (pIVar2->byval_arg).field_0xb;
    plVar12 = plVar10 + -2;
    if (-1 < iVar11) {
      plVar12 = plVar10;
    }
    LOCK();
    pDVar6 = (Delegate *)*plVar12;
    bVar13 = a == pDVar6;
    if (bVar13) {
      *plVar12 = lVar8;
      pDVar6 = a;
    }
    UNLOCK();
    pDVar14 = a;
    if (!bVar13) {
      pDVar14 = pDVar6;
    }
    if (iRam_? != 0) {
      uVar15 = (uint)((ulonglong)plVar12 >> 0xc);
      uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
      do {
        uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
        puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
        LOCK();
        bVar13 = uVar17 == *puVar18;
        if (bVar13) {
          *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    bVar13 = pDVar14 != a;
    a = pDVar14;
  } while (bVar13);
  return;
}


/* __Il2CppFullySharedGenericType get_Value() */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType]::
SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Value
          (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(in_R8 + 0x20) + 0xc0) + 0x28) + 0xfc);
  apuStack_2[0] = &UNK_?;
  lVar3 = FUN_?(this,this);
  lVar3 = -lVar3;
  lVar4 = *(longlong *)(**(longlong **)(*(longlong *)(in_R8 + 0x20) + 0xc0) + 0x80);
  lVar5 = (longlong)&this->klass + (longlong)*(int *)(lVar4 + 0x18);
  lVar6 = lVar5 + -0x10;
  if (-1 < *(int *)(*(longlong *)(lVar4 + 0x10) + 0x28)) {
    lVar6 = lVar5;
  }
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  FUN_?(&stack0xfffffffffffffff8 + lVar3,lVar6,uVar1);
  *(undefined **)((longlong)apuStack_2 + lVar3) = &UNK_?;
  p_Var4 = (_Il2CppFullySharedGenericType *)
           FUN_?(method,&stack0xfffffffffffffff8 + lVar3,uVar1);
  return p_Var4;
}


/* Boolean op_Equality(__Il2CppFullySharedGenericType,
   SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Equality
               (_Il2CppFullySharedGenericType *b,
               SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  p_StackX_8 = (_Il2CppFullySharedGenericType__Class *)b;
  if ((pIVar1->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pIVar3 = method->klass;
  uVar4 = (ulonglong)(pIVar1->rgctx_data[5].klass)->actualSize;
  if ((pIVar3->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  if (((pIVar3->rgctx_data[5].klass)->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    FUN_?(pIVar3->rgctx_data[5].klass);
  }
  uVar5 = 0xffffffffffffff0;
  apuStack_2[0] = &UNK_?;
  lVar6 = FUN_?();
  lVar6 = -lVar6;
  uVar7 = uVar4 + 0xf;
  if (uVar4 + 0xf <= uVar4) {
    uVar7 = uVar5;
  }
  uVar7 = uVar7 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_2 + lVar6) = &UNK_?;
  FUN_?();
  pIVar1 = method->klass;
  lVar8 = -uVar7;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pFVar9 = pIVar1->rgctx_data->klass->fields;
  pIVar1 = pFVar9->parent;
  lVar10 = (longlong)&a->klass + (longlong)pFVar9->offset;
  iVar11._0_2_ = (pIVar1->byval_arg).attrs;
  iVar11._2_1_ = (pIVar1->byval_arg).type;
  iVar11._3_1_ = (pIVar1->byval_arg).field_0xb;
  lVar12 = lVar10 + -0x10;
  if (-1 < iVar11) {
    lVar12 = lVar10;
  }
  *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
  FUN_?(&stack0xffffffffffffffd8 + lVar8 + lVar6,lVar12,uVar4);
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pvVar13 = pIVar1->rgctx_data[5].rgctxDataDummy;
  *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
  uVar14 = FUN_?(pvVar13,&stack0xffffffffffffffd8 + lVar8 + lVar6);
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pIVar3 = method->klass;
  p_Var15 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_8;
  if (*(int *)&(pIVar1->rgctx_data[5].method)->return_type < 0) {
    p_Var15 = p_StackX_8;
  }
  if ((pIVar3->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  pvVar13 = pIVar3->rgctx_data[9].rgctxDataDummy;
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pvVar15 = pIVar1->rgctx_data[5].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar15 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pvVar15 = (void *)FUN_?(pvVar15);
  }
  *(bool **)((longlong)alStack_16 + lVar8 + lVar6 + 8) = abStackX_10;
  *(undefined8 **)((longlong)alStack_16 + lVar8 + lVar6) = &uStackX_18;
  *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
  uStackX_18 = uVar14;
  FUN_?(pvVar15,pvVar13,&stack0xffffffffffffffd8 + lVar6,p_Var15);
  return abStackX_10[0];
}


/* Boolean
   op_Equality(SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   __Il2CppFullySharedGenericType) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Equality_1
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               _Il2CppFullySharedGenericType *b,MethodInfo *method)

{
  pIVar1 = method->klass;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)b;
  if ((pIVar1->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pIVar3 = method->klass;
  uVar4 = (ulonglong)(pIVar1->rgctx_data[5].klass)->actualSize;
  if ((pIVar3->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  if (((pIVar3->rgctx_data[5].klass)->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    FUN_?(pIVar3->rgctx_data[5].klass);
  }
  uVar5 = 0xffffffffffffff0;
  apuStack_2[0] = &UNK_?;
  lVar6 = FUN_?();
  lVar6 = -lVar6;
  uVar7 = uVar4 + 0xf;
  if (uVar4 + 0xf <= uVar4) {
    uVar7 = uVar5;
  }
  uVar7 = uVar7 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_2 + lVar6) = &UNK_?;
  FUN_?();
  pIVar1 = method->klass;
  lVar8 = -uVar7;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pFVar9 = pIVar1->rgctx_data->klass->fields;
  pIVar1 = pFVar9->parent;
  lVar10 = (longlong)&a->klass + (longlong)pFVar9->offset;
  iVar11._0_2_ = (pIVar1->byval_arg).attrs;
  iVar11._2_1_ = (pIVar1->byval_arg).type;
  iVar11._3_1_ = (pIVar1->byval_arg).field_0xb;
  lVar12 = lVar10 + -0x10;
  if (-1 < iVar11) {
    lVar12 = lVar10;
  }
  *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
  FUN_?(&stack0xffffffffffffffd8 + lVar8 + lVar6,lVar12,uVar4);
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pvVar13 = pIVar1->rgctx_data[5].rgctxDataDummy;
  *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
  pMVar14 = (MonitorData *)FUN_?(pvVar13,&stack0xffffffffffffffd8 + lVar8 + lVar6);
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pIVar3 = method->klass;
  p_Var15 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_10;
  if (*(int *)&(pIVar1->rgctx_data[5].method)->return_type < 0) {
    p_Var15 = p_StackX_10;
  }
  if ((pIVar3->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  pvVar13 = pIVar3->rgctx_data[9].rgctxDataDummy;
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pvVar15 = pIVar1->rgctx_data[5].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar15 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pvVar15 = (void *)FUN_?(pvVar15);
  }
  *(bool **)((longlong)alStack_16 + lVar8 + lVar6 + 8) = abStackX_8;
  *(MonitorData ***)((longlong)alStack_16 + lVar8 + lVar6) = &pMStackX_18;
  *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
  pMStackX_18 = pMVar14;
  FUN_?(pvVar15,pvVar13,&stack0xffffffffffffffd8 + lVar6,p_Var15);
  return abStackX_8[0];
}


/* Boolean
   op_Equality(SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Equality_2
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *b,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pIVar3 = method->klass;
  uVar4 = (ulonglong)(pIVar1->rgctx_data[5].klass)->actualSize;
  if ((pIVar3->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  if (((pIVar3->rgctx_data[5].klass)->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    FUN_?(pIVar3->rgctx_data[5].klass);
  }
  uVar5 = 0xffffffffffffff0;
  apuStack_2[0] = &UNK_?;
  lVar6 = FUN_?();
  lVar6 = -lVar6;
  uVar7 = uVar4 + 0xf;
  if (uVar4 + 0xf <= uVar4) {
    uVar7 = uVar5;
  }
  uVar7 = uVar7 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_2 + lVar6) = &UNK_?;
  FUN_?();
  pIVar1 = method->klass;
  lVar8 = -uVar7;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pFVar9 = pIVar1->rgctx_data->klass->fields;
  pIVar1 = pFVar9->parent;
  lVar10 = (longlong)&b->klass + (longlong)pFVar9->offset;
  iVar11._0_2_ = (pIVar1->byval_arg).attrs;
  iVar11._2_1_ = (pIVar1->byval_arg).type;
  iVar11._3_1_ = (pIVar1->byval_arg).field_0xb;
  lVar12 = lVar10 + -0x10;
  if (-1 < iVar11) {
    lVar12 = lVar10;
  }
  *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
  FUN_?(&stack0xffffffffffffffd8 + lVar8 + lVar6,lVar12,uVar4);
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pvVar13 = pIVar1->rgctx_data[5].rgctxDataDummy;
  *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
  uVar14 = FUN_?(pvVar13,&stack0xffffffffffffffd8 + lVar8 + lVar6);
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pFVar9 = pIVar1->rgctx_data->klass->fields;
  pIVar1 = pFVar9->parent;
  lVar10 = (longlong)&a->klass + (longlong)pFVar9->offset;
  iVar15._0_2_ = (pIVar1->byval_arg).attrs;
  iVar15._2_1_ = (pIVar1->byval_arg).type;
  iVar15._3_1_ = (pIVar1->byval_arg).field_0xb;
  pIVar1 = method->klass;
  lVar12 = lVar10 + -0x10;
  if (-1 < iVar15) {
    lVar12 = lVar10;
  }
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pvVar13 = pIVar1->rgctx_data[9].rgctxDataDummy;
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pvVar16 = pIVar1->rgctx_data[5].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar16 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pvVar16 = (void *)FUN_?(pvVar16);
  }
  *(bool **)((longlong)alStack_17 + lVar8 + lVar6 + 8) = abStackX_8;
  *(undefined8 **)((longlong)alStack_17 + lVar8 + lVar6) = &uStackX_10;
  *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
  uStackX_10 = uVar14;
  FUN_?(pvVar16,pvVar13,&stack0xffffffffffffffd8 + lVar6,lVar12);
  return abStackX_8[0];
}


/* __Il2CppFullySharedGenericType
   op_Implicit(SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType]::
SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Implicit
          (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *s,
          MethodInfo *method)

{
  lVar1 = *(longlong *)(in_R8 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    lVar1 = FUN_?(lVar1);
  }
  uVar3 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar1 + 0xc0) + 0x28) + 0xfc);
  apuStack_2[0] = &UNK_?;
  lVar4 = FUN_?();
  lVar4 = -lVar4;
  lVar1 = *(longlong *)(in_R8 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
    lVar1 = FUN_?(lVar1);
  }
  lVar1 = *(longlong *)(**(longlong **)(lVar1 + 0xc0) + 0x80);
  lVar5 = (longlong)&s->klass + (longlong)*(int *)(lVar1 + 0x18);
  lVar6 = lVar5 + -0x10;
  if (-1 < *(int *)(*(longlong *)(lVar1 + 0x10) + 0x28)) {
    lVar6 = lVar5;
  }
  *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
  FUN_?(&stack0xffffffffffffffe8 + lVar4,lVar6,uVar3);
  *(undefined **)((longlong)apuStack_2 + lVar4) = &UNK_?;
  p_Var4 = (_Il2CppFullySharedGenericType *)
           FUN_?(method,&stack0xffffffffffffffe8 + lVar4,uVar3);
  return p_Var4;
}


/* Boolean op_Inequality(__Il2CppFullySharedGenericType,
   SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Inequality
               (_Il2CppFullySharedGenericType *b,
               SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  p_StackX_8 = (_Il2CppFullySharedGenericType__Class *)b;
  if ((pIVar1->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pIVar3 = method->klass;
  uVar4 = (ulonglong)(pIVar1->rgctx_data[5].klass)->actualSize;
  if ((pIVar3->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  if (((pIVar3->rgctx_data[5].klass)->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    FUN_?(pIVar3->rgctx_data[5].klass);
  }
  uVar5 = 0xffffffffffffff0;
  apuStack_2[0] = &UNK_?;
  lVar6 = FUN_?();
  lVar6 = -lVar6;
  uVar7 = uVar4 + 0xf;
  if (uVar4 + 0xf <= uVar4) {
    uVar7 = uVar5;
  }
  uVar7 = uVar7 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_2 + lVar6) = &UNK_?;
  FUN_?();
  pIVar1 = method->klass;
  lVar8 = -uVar7;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pFVar9 = pIVar1->rgctx_data->klass->fields;
  pIVar1 = pFVar9->parent;
  lVar10 = (longlong)&a->klass + (longlong)pFVar9->offset;
  iVar11._0_2_ = (pIVar1->byval_arg).attrs;
  iVar11._2_1_ = (pIVar1->byval_arg).type;
  iVar11._3_1_ = (pIVar1->byval_arg).field_0xb;
  lVar12 = lVar10 + -0x10;
  if (-1 < iVar11) {
    lVar12 = lVar10;
  }
  *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
  FUN_?(&stack0xffffffffffffffd8 + lVar8 + lVar6,lVar12,uVar4);
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pvVar13 = pIVar1->rgctx_data[5].rgctxDataDummy;
  *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
  uVar14 = FUN_?(pvVar13,&stack0xffffffffffffffd8 + lVar8 + lVar6);
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pIVar3 = method->klass;
  p_Var15 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_8;
  if (*(int *)&(pIVar1->rgctx_data[5].method)->return_type < 0) {
    p_Var15 = p_StackX_8;
  }
  if ((pIVar3->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  pvVar13 = pIVar3->rgctx_data[9].rgctxDataDummy;
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pvVar15 = pIVar1->rgctx_data[5].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar15 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pvVar15 = (void *)FUN_?(pvVar15);
  }
  *(char **)((longlong)alStack_16 + lVar8 + lVar6 + 8) = acStackX_10;
  *(undefined8 **)((longlong)alStack_16 + lVar8 + lVar6) = &uStackX_18;
  *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
  uStackX_18 = uVar14;
  FUN_?(pvVar15,pvVar13,&stack0xffffffffffffffd8 + lVar6,p_Var15);
  return acStackX_10[0] == '\0';
}


/* Boolean
   op_Inequality(SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   __Il2CppFullySharedGenericType) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Inequality_1
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               _Il2CppFullySharedGenericType *b,MethodInfo *method)

{
  pIVar1 = method->klass;
  p_StackX_10 = (_Il2CppFullySharedGenericType__Class *)b;
  if ((pIVar1->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pIVar3 = method->klass;
  uVar4 = (ulonglong)(pIVar1->rgctx_data[5].klass)->actualSize;
  if ((pIVar3->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  if (((pIVar3->rgctx_data[5].klass)->field_0x135 & 1) == 0) {
    apuStack_2[0] = &UNK_?;
    FUN_?(pIVar3->rgctx_data[5].klass);
  }
  uVar5 = 0xffffffffffffff0;
  apuStack_2[0] = &UNK_?;
  lVar6 = FUN_?();
  lVar6 = -lVar6;
  uVar7 = uVar4 + 0xf;
  if (uVar4 + 0xf <= uVar4) {
    uVar7 = uVar5;
  }
  uVar7 = uVar7 & 0xfffffffffffffff0;
  *(undefined **)((longlong)apuStack_2 + lVar6) = &UNK_?;
  FUN_?();
  pIVar1 = method->klass;
  lVar8 = -uVar7;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pFVar9 = pIVar1->rgctx_data->klass->fields;
  pIVar1 = pFVar9->parent;
  lVar10 = (longlong)&a->klass + (longlong)pFVar9->offset;
  iVar11._0_2_ = (pIVar1->byval_arg).attrs;
  iVar11._2_1_ = (pIVar1->byval_arg).type;
  iVar11._3_1_ = (pIVar1->byval_arg).field_0xb;
  lVar12 = lVar10 + -0x10;
  if (-1 < iVar11) {
    lVar12 = lVar10;
  }
  *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
  FUN_?(&stack0xffffffffffffffd8 + lVar8 + lVar6,lVar12,uVar4);
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pvVar13 = pIVar1->rgctx_data[5].rgctxDataDummy;
  *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
  pMVar14 = (MonitorData *)FUN_?(pvVar13,&stack0xffffffffffffffd8 + lVar8 + lVar6);
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pIVar3 = method->klass;
  p_Var15 = (_Il2CppFullySharedGenericType__Class *)&p_StackX_10;
  if (*(int *)&(pIVar1->rgctx_data[5].method)->return_type < 0) {
    p_Var15 = p_StackX_10;
  }
  if ((pIVar3->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  pvVar13 = pIVar3->rgctx_data[9].rgctxDataDummy;
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pvVar15 = pIVar1->rgctx_data[5].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar15 + 0x135) & 1) == 0) {
    *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
    pvVar15 = (void *)FUN_?(pvVar15);
  }
  *(char **)((longlong)alStack_16 + lVar8 + lVar6 + 8) = acStackX_8;
  *(MonitorData ***)((longlong)alStack_16 + lVar8 + lVar6) = &pMStackX_18;
  *(undefined **)((longlong)apuStack_2 + lVar8 + lVar6) = &UNK_?;
  pMStackX_18 = pMVar14;
  FUN_?(pvVar15,pvVar13,&stack0xffffffffffffffd8 + lVar6,p_Var15);
  return acStackX_8[0] == '\0';
}


/* Boolean
   op_Inequality(SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Inequality_2
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *b,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pIVar2 = method->klass;
  pIVar3 = (pIVar1->rgctx_data[10].method)->methodPointer;
  if ((pIVar2->field_0x135 & 1) == 0) {
    pIVar2 = (Il2CppClass *)FUN_?(pIVar2);
  }
  cVar4 = (*pIVar3)(a,b,pIVar2->rgctx_data[10].rgctxDataDummy);
  return cVar4 == '\0';
}


/* Void remove_OnChange(Action`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__remove_OnChange
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
               ,Action_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *value,
               MethodInfo *method)

{
  pFVar1 = method->klass->rgctx_data->klass->fields;
  pIVar2 = pFVar1[1].parent;
  puVar3 = (undefined8 *)((longlong)&this->klass + (longlong)pFVar1[1].offset);
  iVar4._0_2_ = (pIVar2->byval_arg).attrs;
  iVar4._2_1_ = (pIVar2->byval_arg).type;
  iVar4._3_1_ = (pIVar2->byval_arg).field_0xb;
  puVar5 = puVar3 + -2;
  if (-1 < iVar4) {
    puVar5 = puVar3;
  }
  source = (Delegate *)*puVar5;
  do {
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (source,(Delegate *)value,(MethodInfo *)0x0);
    pvVar7 = method->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar7 + 0x135) & 1) == 0) {
      pvVar7 = (void *)FUN_?(pvVar7);
    }
    if (pDVar6 == (Delegate *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = FUN_?(pDVar6,pvVar7);
      if (lVar8 == 0) {
        FUN_?(pDVar6,pvVar7);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar1 = method->klass->rgctx_data->klass->fields;
    pIVar2 = pFVar1[1].parent;
    plVar10 = (longlong *)((longlong)&this->klass + (longlong)pFVar1[1].offset);
    iVar11._0_2_ = (pIVar2->byval_arg).attrs;
    iVar11._2_1_ = (pIVar2->byval_arg).type;
    iVar11._3_1_ = (pIVar2->byval_arg).field_0xb;
    plVar12 = plVar10 + -2;
    if (-1 < iVar11) {
      plVar12 = plVar10;
    }
    LOCK();
    pDVar6 = (Delegate *)*plVar12;
    bVar13 = source == pDVar6;
    if (bVar13) {
      *plVar12 = lVar8;
      pDVar6 = source;
    }
    UNLOCK();
    pDVar14 = source;
    if (!bVar13) {
      pDVar14 = pDVar6;
    }
    if (iRam_? != 0) {
      uVar15 = (uint)((ulonglong)plVar12 >> 0xc);
      uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
      do {
        uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
        puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
        LOCK();
        bVar13 = uVar17 == *puVar18;
        if (bVar13) {
          *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    bVar13 = pDVar14 != source;
    source = pDVar14;
  } while (bVar13);
  return;
}

