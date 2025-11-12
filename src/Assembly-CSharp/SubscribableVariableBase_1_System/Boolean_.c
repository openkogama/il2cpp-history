
/* Boolean Equals(SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__Equals
               (SubscribableVariableBase_1_System_Boolean_ *this,
               SubscribableVariableBase_1_System_Boolean_ *other,MethodInfo *method)

{
  if (other == (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  abStackX_8[0] = (other->fields).value;
  plVar3 = (longlong *)FUN_?(method->klass->rgctx_data[5].rgctxDataDummy,abStackX_8);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
    if (*plVar3 == lRam_?) {
      plVar4 = plVar3;
    }
    if (plVar4 != (longlong *)0x0) {
      if (*(longlong *)(*plVar3 + 0x40) == *(longlong *)(lRam_? + 0x40)) {
        return (this->fields).value == *(bool *)(plVar3 + 2);
      }
      FUN_?(plVar3);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
  }
  return 0;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__Equals_1
               (SubscribableVariableBase_1_System_Boolean_ *this,Object *obj,MethodInfo *method)

{
  if (obj != (Object *)0x0) {
    if (this == (SubscribableVariableBase_1_System_Boolean_ *)obj) {
      return 1;
    }
    lVar1 = FUN_?(&(obj->klass->_0).byval_arg);
    if (this == (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
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
      auStackX_10[0] = *(undefined1 *)&obj[1].klass;
      plVar8 = (longlong *)FUN_?(pMVar7->klass->rgctx_data[5].rgctxDataDummy,auStackX_10);
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (plVar8 != (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
        if (*plVar8 == lRam_?) {
          plVar9 = plVar8;
        }
        if (plVar9 != (longlong *)0x0) {
          if (*(longlong *)(*plVar8 + 0x40) == *(longlong *)(lRam_? + 0x40)) {
            return (this->fields).value == *(bool *)(plVar8 + 2);
          }
          FUN_?(plVar8);
          pcVar2 = (code *)swi(3);
          bVar3 = (*pcVar2)();
          return bVar3;
        }
      }
    }
  }
  return 0;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
        SubscribableVariableBase_1_System_Boolean__GetHashCode
                  (SubscribableVariableBase_1_System_Boolean_ *this,MethodInfo *method)

{
  pEVar1 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Boolean]::
           EqualityComparer_1_System_Boolean__get_Default(method->klass->rgctx_data[2].method);
  if (pEVar1 != (EqualityComparer_1_System_Boolean_ *)0x0) {
    UNRECOVERED_JUMPTABLE = (pEVar1->klass->vtable).__unknown_1.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*UNRECOVERED_JUMPTABLE)
                      (pEVar1,(ulonglong)(this->fields).value,
                       (pEVar1->klass->vtable).__unknown_1.method,UNRECOVERED_JUMPTABLE);
    return iVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* Boolean op_Equality(Boolean, SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Equality
               (bool b,SubscribableVariableBase_1_System_Boolean_ *a,MethodInfo *method)

{
  if (a == (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  abStackX_10[0] = (a->fields).value;
  pIVar3 = method->klass;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  plVar4 = (longlong *)FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy,abStackX_10);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?(lRam_?);
  }
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    if (*plVar4 == lRam_?) {
      plVar5 = plVar4;
    }
    if (plVar5 != (longlong *)0x0) {
      if (*(longlong *)(*plVar4 + 0x40) == *(longlong *)(lRam_? + 0x40)) {
        return b == *(bool *)(plVar4 + 2);
      }
      FUN_?(plVar4);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
  }
  return 0;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Boolean], Boolean) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Equality_1
               (SubscribableVariableBase_1_System_Boolean_ *a,bool b,MethodInfo *method)

{
  if (a == (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  abStackX_8[0] = (a->fields).value;
  pIVar3 = method->klass;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  plVar4 = (longlong *)FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy,abStackX_8);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?(lRam_?);
  }
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    if (*plVar4 == lRam_?) {
      plVar5 = plVar4;
    }
    if (plVar5 != (longlong *)0x0) {
      if (*(longlong *)(*plVar4 + 0x40) == *(longlong *)(lRam_? + 0x40)) {
        return b == *(bool *)(plVar4 + 2);
      }
      FUN_?(plVar4);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
  }
  return 0;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Boolean],
   SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Equality_2
               (SubscribableVariableBase_1_System_Boolean_ *a,
               SubscribableVariableBase_1_System_Boolean_ *b,MethodInfo *method)

{
  if ((a == (SubscribableVariableBase_1_System_Boolean_ *)0x0) ||
     (b == (SubscribableVariableBase_1_System_Boolean_ *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  abStackX_8[0] = (b->fields).value;
  pIVar3 = method->klass;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  plVar4 = (longlong *)FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy,abStackX_8);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?(lRam_?);
  }
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    if (*plVar4 == lRam_?) {
      plVar5 = plVar4;
    }
    if (plVar5 != (longlong *)0x0) {
      if (*(longlong *)(*plVar4 + 0x40) == *(longlong *)(lRam_? + 0x40)) {
        return (a->fields).value == *(bool *)(plVar4 + 2);
      }
      FUN_?(plVar4);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
  }
  return 0;
}


/* Boolean op_Inequality(Boolean, SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Inequality
               (bool b,SubscribableVariableBase_1_System_Boolean_ *a,MethodInfo *method)

{
  if (a == (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  abStackX_10[0] = (a->fields).value;
  pIVar3 = method->klass;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  plVar4 = (longlong *)FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy,abStackX_10);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?(lRam_?);
  }
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    if (*plVar4 == lRam_?) {
      plVar5 = plVar4;
    }
    if (plVar5 != (longlong *)0x0) {
      if (*(longlong *)(*plVar4 + 0x40) == *(longlong *)(lRam_? + 0x40)) {
        return b != *(bool *)(plVar4 + 2);
      }
      FUN_?(plVar4);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
  }
  return 1;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Boolean], Boolean) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Inequality_1
               (SubscribableVariableBase_1_System_Boolean_ *a,bool b,MethodInfo *method)

{
  if (a == (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  abStackX_8[0] = (a->fields).value;
  pIVar3 = method->klass;
  if ((pIVar3->field_0x135 & 1) == 0) {
    pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
  }
  plVar4 = (longlong *)FUN_?(pIVar3->rgctx_data[5].rgctxDataDummy,abStackX_8);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?(lRam_?);
  }
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar4 != (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    if (*plVar4 == lRam_?) {
      plVar5 = plVar4;
    }
    if (plVar5 != (longlong *)0x0) {
      if (*(longlong *)(*plVar4 + 0x40) == *(longlong *)(lRam_? + 0x40)) {
        return b != *(bool *)(plVar4 + 2);
      }
      FUN_?(plVar4);
      pcVar1 = (code *)swi(3);
      bVar2 = (*pcVar1)();
      return bVar2;
    }
  }
  return 1;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Boolean],
   SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Inequality_2
               (SubscribableVariableBase_1_System_Boolean_ *a,
               SubscribableVariableBase_1_System_Boolean_ *b,MethodInfo *method)

{
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pMVar2 = pIVar1->rgctx_data[10].method;
  if ((a == (SubscribableVariableBase_1_System_Boolean_ *)0x0) ||
     (b == (SubscribableVariableBase_1_System_Boolean_ *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  abStackX_8[0] = (b->fields).value;
  pIVar1 = pMVar2->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  plVar5 = (longlong *)FUN_?(pIVar1->rgctx_data[5].rgctxDataDummy,abStackX_8);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?(lRam_?);
  }
  if ((pMVar2->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    if (*plVar5 == lRam_?) {
      plVar6 = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      if (*(longlong *)(*plVar5 + 0x40) == *(longlong *)(lRam_? + 0x40)) {
        return (a->fields).value != *(bool *)(plVar5 + 2);
      }
      FUN_?(plVar5);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
  }
  return 1;
}

