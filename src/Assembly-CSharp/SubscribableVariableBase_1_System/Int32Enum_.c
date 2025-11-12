
/* Boolean Equals(SubscribableVariableBase`1[System.Int32Enum]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32Enum]::
     SubscribableVariableBase_1_System_Int32Enum__Equals
               (SubscribableVariableBase_1_System_Int32Enum_ *this,
               SubscribableVariableBase_1_System_Int32Enum_ *other,MethodInfo *method)

{
  if (other != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
    aiStackX_8[0] = (other->fields).value;
    o2 = (Object *)FUN_?(method->klass->rgctx_data[5].rgctxDataDummy,aiStackX_8);
    OStack_1.klass = method->klass->rgctx_data[5].rgctxDataDummy;
    if ((((OStack_1.klass)->_1).field_0x6d & 1) == 0) {
      OStack_1.klass = (Object__Class *)FUN_?(OStack_1.klass);
    }
    iStack_2 = (this->fields).value;
    OStack_1.monitor = (MonitorData *)0xffffffffffffffff;
    bVar3 = mscorlib.dll::System::ValueType::ValueType_DefaultEquals
                      (&OStack_1,o2,(MethodInfo *)0x0);
    return bVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32Enum]::
     SubscribableVariableBase_1_System_Int32Enum__Equals_1
               (SubscribableVariableBase_1_System_Int32Enum_ *this,Object *obj,MethodInfo *method)

{
  if (obj != (Object *)0x0) {
    if (this == (SubscribableVariableBase_1_System_Int32Enum_ *)obj) {
      return 1;
    }
    lVar1 = FUN_?(&(obj->klass->_0).byval_arg);
    if (this == (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
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
      if ((pIVar6->naturalAligment <= (obj->klass->_1).naturalAligment) &&
         ((obj->klass->_1).typeHierarchy[(ulonglong)pIVar6->naturalAligment - 1] == pIVar6)) {
        auStackX_10[0] = *(undefined4 *)&obj[1].klass;
        o2 = (Object *)FUN_?(pMVar7->klass->rgctx_data[5].rgctxDataDummy,auStackX_10);
        OStack_8.klass = pMVar7->klass->rgctx_data[5].rgctxDataDummy;
        if ((((OStack_8.klass)->_1).field_0x6d & 1) == 0) {
          OStack_8.klass = (Object__Class *)FUN_?(OStack_8.klass);
        }
        iStack_9 = (this->fields).value;
        OStack_8.monitor = (MonitorData *)0xffffffffffffffff;
        bVar3 = mscorlib.dll::System::ValueType::ValueType_DefaultEquals
                          (&OStack_8,o2,(MethodInfo *)0x0);
        return bVar3;
      }
      FUN_?(obj,pIVar6);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  return 0;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32Enum]::
        SubscribableVariableBase_1_System_Int32Enum__GetHashCode
                  (SubscribableVariableBase_1_System_Int32Enum_ *this,MethodInfo *method)

{
  pEVar1 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32Enum]::
           EqualityComparer_1_System_Int32Enum__get_Default(method->klass->rgctx_data[2].method);
  if (pEVar1 != (EqualityComparer_1_System_Int32Enum_ *)0x0) {
    UNRECOVERED_JUMPTABLE = (pEVar1->klass->vtable).__unknown_1.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*UNRECOVERED_JUMPTABLE)
                      (pEVar1,(ulonglong)(uint)(this->fields).value,
                       (pEVar1->klass->vtable).__unknown_1.method,UNRECOVERED_JUMPTABLE);
    return iVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* Void Notify() */

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32Enum]::
     SubscribableVariableBase_1_System_Int32Enum__Notify
               (SubscribableVariableBase_1_System_Int32Enum_ *this,MethodInfo *method)

{
  if ((this->fields).OnChange != (Action_1_Int32Enum_ *)0x0) {
    pAVar1 = (this->fields).OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields).value,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Boolean op_Equality(Int32Enum, SubscribableVariableBase`1[System.Int32Enum]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32Enum]::
     SubscribableVariableBase_1_System_Int32Enum__op_Equality
               (Int32Enum__Enum b,SubscribableVariableBase_1_System_Int32Enum_ *a,MethodInfo *method
               )

{
  if (a != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
    aiStackX_10[0] = (a->fields).value;
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    o2 = (Object *)FUN_?(pIVar1->rgctx_data[5].rgctxDataDummy,aiStackX_10);
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pOVar2 = pIVar1->rgctx_data[5].rgctxDataDummy;
    if (((pOVar2->_1).field_0x6d & 1) == 0) {
      pOVar2 = (Object__Class *)FUN_?(pOVar2);
    }
    OStack_3.monitor = (MonitorData *)0xffffffffffffffff;
    OStack_3.klass = pOVar2;
    IStack_4 = b;
    bVar5 = mscorlib.dll::System::ValueType::ValueType_DefaultEquals
                      (&OStack_3,o2,(MethodInfo *)0x0);
    return bVar5;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Int32Enum], Int32Enum) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32Enum]::
     SubscribableVariableBase_1_System_Int32Enum__op_Equality_1
               (SubscribableVariableBase_1_System_Int32Enum_ *a,Int32Enum__Enum b,MethodInfo *method
               )

{
  if (a != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
    aiStackX_8[0] = (a->fields).value;
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    o2 = (Object *)FUN_?(pIVar1->rgctx_data[5].rgctxDataDummy,aiStackX_8);
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pOVar2 = pIVar1->rgctx_data[5].rgctxDataDummy;
    if (((pOVar2->_1).field_0x6d & 1) == 0) {
      pOVar2 = (Object__Class *)FUN_?(pOVar2);
    }
    OStack_3.monitor = (MonitorData *)0xffffffffffffffff;
    OStack_3.klass = pOVar2;
    IStack_4 = b;
    bVar5 = mscorlib.dll::System::ValueType::ValueType_DefaultEquals
                      (&OStack_3,o2,(MethodInfo *)0x0);
    return bVar5;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Int32Enum],
   SubscribableVariableBase`1[System.Int32Enum]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32Enum]::
     SubscribableVariableBase_1_System_Int32Enum__op_Equality_2
               (SubscribableVariableBase_1_System_Int32Enum_ *a,
               SubscribableVariableBase_1_System_Int32Enum_ *b,MethodInfo *method)

{
  if ((a != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) &&
     (b != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0)) {
    aiStackX_8[0] = (b->fields).value;
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    o2 = (Object *)FUN_?(pIVar1->rgctx_data[5].rgctxDataDummy,aiStackX_8);
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pOVar2 = pIVar1->rgctx_data[5].rgctxDataDummy;
    if (((pOVar2->_1).field_0x6d & 1) == 0) {
      pOVar2 = (Object__Class *)FUN_?(pOVar2);
    }
    iStack_3 = (a->fields).value;
    OStack_4.monitor = (MonitorData *)0xffffffffffffffff;
    OStack_4.klass = pOVar2;
    bVar5 = mscorlib.dll::System::ValueType::ValueType_DefaultEquals
                      (&OStack_4,o2,(MethodInfo *)0x0);
    return bVar5;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Int32Enum op_Implicit(SubscribableVariableBase`1[System.Int32Enum]) */

Int32Enum__Enum
Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32Enum]::
SubscribableVariableBase_1_System_Int32Enum__op_Implicit
          (SubscribableVariableBase_1_System_Int32Enum_ *s,MethodInfo *method)

{
  if (s != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
    return (s->fields).value;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  IVar2 = (*pcVar1)();
  return IVar2;
}


/* Boolean op_Inequality(Int32Enum, SubscribableVariableBase`1[System.Int32Enum]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32Enum]::
     SubscribableVariableBase_1_System_Int32Enum__op_Inequality
               (Int32Enum__Enum b,SubscribableVariableBase_1_System_Int32Enum_ *a,MethodInfo *method
               )

{
  if (a != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
    aiStackX_10[0] = (a->fields).value;
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    o2 = (Object *)FUN_?(pIVar1->rgctx_data[5].rgctxDataDummy,aiStackX_10);
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pOVar2 = pIVar1->rgctx_data[5].rgctxDataDummy;
    if (((pOVar2->_1).field_0x6d & 1) == 0) {
      pOVar2 = (Object__Class *)FUN_?(pOVar2);
    }
    OStack_3.monitor = (MonitorData *)0xffffffffffffffff;
    OStack_3.klass = pOVar2;
    IStack_4 = b;
    bVar5 = mscorlib.dll::System::ValueType::ValueType_DefaultEquals
                      (&OStack_3,o2,(MethodInfo *)0x0);
    return bVar5 ^ 1;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Int32Enum], Int32Enum) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32Enum]::
     SubscribableVariableBase_1_System_Int32Enum__op_Inequality_1
               (SubscribableVariableBase_1_System_Int32Enum_ *a,Int32Enum__Enum b,MethodInfo *method
               )

{
  if (a != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
    aiStackX_8[0] = (a->fields).value;
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    o2 = (Object *)FUN_?(pIVar1->rgctx_data[5].rgctxDataDummy,aiStackX_8);
    pIVar1 = method->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pOVar2 = pIVar1->rgctx_data[5].rgctxDataDummy;
    if (((pOVar2->_1).field_0x6d & 1) == 0) {
      pOVar2 = (Object__Class *)FUN_?(pOVar2);
    }
    OStack_3.monitor = (MonitorData *)0xffffffffffffffff;
    OStack_3.klass = pOVar2;
    IStack_4 = b;
    bVar5 = mscorlib.dll::System::ValueType::ValueType_DefaultEquals
                      (&OStack_3,o2,(MethodInfo *)0x0);
    return bVar5 ^ 1;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Int32Enum],
   SubscribableVariableBase`1[System.Int32Enum]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32Enum]::
     SubscribableVariableBase_1_System_Int32Enum__op_Inequality_2
               (SubscribableVariableBase_1_System_Int32Enum_ *a,
               SubscribableVariableBase_1_System_Int32Enum_ *b,MethodInfo *method)

{
  pIVar1 = method->klass;
  if ((pIVar1->field_0x135 & 1) == 0) {
    pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
  }
  pMVar2 = pIVar1->rgctx_data[10].method;
  if ((a != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) &&
     (b != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0)) {
    aiStackX_8[0] = (b->fields).value;
    pIVar1 = pMVar2->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    o2 = (Object *)FUN_?(pIVar1->rgctx_data[5].rgctxDataDummy,aiStackX_8);
    pIVar1 = pMVar2->klass;
    if ((pIVar1->field_0x135 & 1) == 0) {
      pIVar1 = (Il2CppClass *)FUN_?(pIVar1);
    }
    pOVar3 = pIVar1->rgctx_data[5].rgctxDataDummy;
    if (((pOVar3->_1).field_0x6d & 1) == 0) {
      pOVar3 = (Object__Class *)FUN_?(pOVar3);
    }
    iStack_4 = (a->fields).value;
    OStack_5.monitor = (MonitorData *)0xffffffffffffffff;
    OStack_5.klass = pOVar3;
    bVar6 = mscorlib.dll::System::ValueType::ValueType_DefaultEquals
                      (&OStack_5,o2,(MethodInfo *)0x0);
    return bVar6 ^ 1;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}

