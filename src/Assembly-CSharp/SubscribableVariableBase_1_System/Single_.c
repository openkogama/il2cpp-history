
/* Boolean Equals(SubscribableVariableBase`1[System.Single]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__Equals
               (SubscribableVariableBase_1_System_Single_ *this,
               SubscribableVariableBase_1_System_Single_ *other,MethodInfo *method)

{
  if (other == (SubscribableVariableBase_1_System_Single_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  afStackX_8[0] = (other->fields).value;
  plVar3 = (longlong *)FUN_?(method->klass->rgctx_data[5].rgctxDataDummy,afStackX_8);
  if (plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
    if (*plVar3 == lRam_?) {
      plVar4 = plVar3;
    }
    if (plVar4 != (longlong *)0x0) {
      if (*(longlong *)(*plVar3 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar3);
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      if (*(float *)(plVar3 + 2) == (this->fields).value) {
        return 1;
      }
      if (0x7f800000 < (uint)ABS(*(float *)(plVar3 + 2))) {
        return 0x7f800000 < (uint)ABS((this->fields).value);
      }
    }
  }
  return 0;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__Equals_1
               (SubscribableVariableBase_1_System_Single_ *this,Object *obj,MethodInfo *method)

{
  if (obj != (Object *)0x0) {
    if (this == (SubscribableVariableBase_1_System_Single_ *)obj) {
      return 1;
    }
    lVar1 = FUN_?(&(obj->klass->_0).byval_arg);
    if (this == (SubscribableVariableBase_1_System_Single_ *)0x0) {
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
      pIVar5 = method->klass->rgctx_data;
      pIVar6 = pIVar5->klass;
      pMVar7 = pIVar5[1].method;
      if ((pIVar6->field_0x135 & 1) == 0) {
        pIVar6 = (Il2CppClass *)FUN_?(pIVar6);
      }
      if (((obj->klass->_1).naturalAligment < pIVar6->naturalAligment) ||
         ((obj->klass->_1).typeHierarchy[(ulonglong)pIVar6->naturalAligment - 1] != pIVar6)) {
        FUN_?(obj,pIVar6);
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      auStackX_10[0] = *(undefined4 *)&obj[1].klass;
      plVar8 = (longlong *)FUN_?(pMVar7->klass->rgctx_data[5].rgctxDataDummy,auStackX_10);
      if (plVar8 != (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        if (*plVar8 == lRam_?) {
          plVar9 = plVar8;
        }
        if (plVar9 != (longlong *)0x0) {
          if (*(longlong *)(*plVar8 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
            FUN_?(plVar8);
            pcVar2 = (code *)swi(3);
            bVar3 = (*pcVar2)();
            return bVar3;
          }
          if (*(float *)(plVar8 + 2) == (this->fields).value) {
            return 1;
          }
          if (0x7f800000 < (uint)ABS(*(float *)(plVar8 + 2))) {
            return 0x7f800000 < (uint)ABS((this->fields).value);
          }
        }
      }
    }
  }
  return 0;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
        SubscribableVariableBase_1_System_Single__GetHashCode
                  (SubscribableVariableBase_1_System_Single_ *this,MethodInfo *method)

{
  pEVar1 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Single]::
           EqualityComparer_1_System_Single__get_Default(method->klass->rgctx_data[2].method);
  if (pEVar1 != (EqualityComparer_1_System_Single_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*(pEVar1->klass->vtable).__unknown_1.methodPtr)
                      (pEVar1,(this->fields).value,(pEVar1->klass->vtable).__unknown_1.method);
    return iVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* Void Notify() */

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__Notify
               (SubscribableVariableBase_1_System_Single_ *this,MethodInfo *method)

{
  if ((this->fields).OnChange != (Action_1_Single_ *)0x0) {
    pAVar1 = (this->fields).OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields).value,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void add_OnChange(Action`1[Single]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__add_OnChange
               (SubscribableVariableBase_1_System_Single_ *this,Action_1_Single_ *value,
               MethodInfo *method)

{
  ppAVar1 = &(this->fields).OnChange;
  a = (this->fields).OnChange;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pvVar3 = method->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?();
    }
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_Single_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_Single_ *)FUN_?(pDVar2,pvVar3);
      if (pAVar4 == (Action_1_Single_ *)0x0) {
        FUN_?(pDVar2,pvVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
  } while (bVar7);
  return;
}


/* Single get_Value() */

float Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
      SubscribableVariableBase_1_System_Single__get_Value
                (SubscribableVariableBase_1_System_Single_ *this,MethodInfo *method)

{
  return (this->fields).value;
}


/* Boolean op_Equality(Single, SubscribableVariableBase`1[System.Single]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__op_Equality
               (float b,SubscribableVariableBase_1_System_Single_ *a,MethodInfo *method)

{
  if (a == (SubscribableVariableBase_1_System_Single_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pIVar3 = method->klass;
  afStackX_10[0] = (a->fields).value;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  plVar4 = (longlong *)FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy,afStackX_10);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    if (*plVar4 == lRam_?) {
      plVar5 = plVar4;
    }
    if (plVar5 != (longlong *)0x0) {
      if (*(longlong *)(*plVar4 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar4);
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      if (*(float *)(plVar4 + 2) == b) {
        return 1;
      }
      if (0x7f800000 < (uint)ABS(*(float *)(plVar4 + 2))) {
        return 0x7f800000 < (uint)ABS(b);
      }
    }
  }
  return 0;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Single], Single) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__op_Equality_1
               (SubscribableVariableBase_1_System_Single_ *a,float b,MethodInfo *method)

{
  if (a == (SubscribableVariableBase_1_System_Single_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pIVar3 = method->klass;
  afStackX_8[0] = (a->fields).value;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  plVar4 = (longlong *)FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy,afStackX_8);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    if (*plVar4 == lRam_?) {
      plVar5 = plVar4;
    }
    if (plVar5 != (longlong *)0x0) {
      if (*(longlong *)(*plVar4 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar4);
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      if (*(float *)(plVar4 + 2) == b) {
        return 1;
      }
      if (0x7f800000 < (uint)ABS(*(float *)(plVar4 + 2))) {
        return 0x7f800000 < (uint)ABS(b);
      }
    }
  }
  return 0;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Single],
   SubscribableVariableBase`1[System.Single]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__op_Equality_2
               (SubscribableVariableBase_1_System_Single_ *a,
               SubscribableVariableBase_1_System_Single_ *b,MethodInfo *method)

{
  if ((a == (SubscribableVariableBase_1_System_Single_ *)0x0) ||
     (b == (SubscribableVariableBase_1_System_Single_ *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pIVar3 = method->klass;
  afStackX_8[0] = (b->fields).value;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  plVar4 = (longlong *)FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy,afStackX_8);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    if (*plVar4 == lRam_?) {
      plVar5 = plVar4;
    }
    if (plVar5 != (longlong *)0x0) {
      if (*(longlong *)(*plVar4 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar4);
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      if (*(float *)(plVar4 + 2) == (a->fields).value) {
        return 1;
      }
      if (0x7f800000 < (uint)ABS(*(float *)(plVar4 + 2))) {
        return 0x7f800000 < (uint)ABS((a->fields).value);
      }
    }
  }
  return 0;
}


/* Single op_Implicit(SubscribableVariableBase`1[System.Single]) */

float Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
      SubscribableVariableBase_1_System_Single__op_Implicit
                (SubscribableVariableBase_1_System_Single_ *s,MethodInfo *method)

{
  if (s != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    return (s->fields).value;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  fVar2 = (float)(*pcVar1)();
  return fVar2;
}


/* Boolean op_Inequality(Single, SubscribableVariableBase`1[System.Single]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__op_Inequality
               (float b,SubscribableVariableBase_1_System_Single_ *a,MethodInfo *method)

{
  if (a == (SubscribableVariableBase_1_System_Single_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pIVar3 = method->klass;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  plVar4 = (longlong *)FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    plVar6 = plVar5;
    if (*plVar4 == lRam_?) {
      plVar6 = plVar4;
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(longlong *)(*plVar4 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar4,lRam_?);
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      if (*(float *)(plVar4 + 2) == b) goto code_?;
      if (0x7f800000 < (uint)ABS(*(float *)(plVar4 + 2))) {
        return (uint)ABS(b) < 0x7f800001;
      }
    }
  }
  plVar5 = (longlong *)0x1;
code_?:
  return (bool)plVar5;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Single], Single) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__op_Inequality_1
               (SubscribableVariableBase_1_System_Single_ *a,float b,MethodInfo *method)

{
  if (a == (SubscribableVariableBase_1_System_Single_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pIVar3 = method->klass;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  plVar4 = (longlong *)FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy);
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    plVar6 = plVar5;
    if (*plVar4 == lRam_?) {
      plVar6 = plVar4;
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(longlong *)(*plVar4 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar4,lRam_?);
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      if (*(float *)(plVar4 + 2) == b) goto code_?;
      if (0x7f800000 < (uint)ABS(*(float *)(plVar4 + 2))) {
        return (uint)ABS(b) < 0x7f800001;
      }
    }
  }
  plVar5 = (longlong *)0x1;
code_?:
  return (bool)plVar5;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Single],
   SubscribableVariableBase`1[System.Single]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__op_Inequality_2
               (SubscribableVariableBase_1_System_Single_ *a,
               SubscribableVariableBase_1_System_Single_ *b,MethodInfo *method)

{
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pMVar2 = pIVar1->rgctx_data[10].method;
  if ((a == (SubscribableVariableBase_1_System_Single_ *)0x0) ||
     (b == (SubscribableVariableBase_1_System_Single_ *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  pIVar1 = pMVar2->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  plVar5 = (longlong *)FUN_?(pIVar1->rgctx_data[5].rgctxDataDummy);
  if ((pMVar2->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = plVar6;
    if (*plVar5 == lRam_?) {
      plVar7 = plVar5;
    }
    if (plVar7 != (longlong *)0x0) {
      if (*(longlong *)(*plVar5 + 0x40) != *(longlong *)(lRam_? + 0x40)) {
        FUN_?(plVar5,lRam_?);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      if (*(float *)(plVar5 + 2) == (a->fields).value) goto code_?;
      if (0x7f800000 < (uint)ABS(*(float *)(plVar5 + 2))) {
        return (uint)ABS((a->fields).value) < 0x7f800001;
      }
    }
  }
  plVar6 = (longlong *)0x1;
code_?:
  return (bool)plVar6;
}


/* Void remove_OnChange(Action`1[Single]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__remove_OnChange
               (SubscribableVariableBase_1_System_Single_ *this,Action_1_Single_ *value,
               MethodInfo *method)

{
  ppAVar1 = &(this->fields).OnChange;
  source = (this->fields).OnChange;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pvVar3 = method->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?();
    }
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_Single_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_Single_ *)FUN_?(pDVar2,pvVar3);
      if (pAVar4 == (Action_1_Single_ *)0x0) {
        FUN_?(pDVar2,pvVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}

