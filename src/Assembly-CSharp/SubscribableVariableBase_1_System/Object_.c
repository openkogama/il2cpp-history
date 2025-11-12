
/* Boolean Equals(SubscribableVariableBase`1[System.Object]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__Equals
               (SubscribableVariableBase_1_System_Object_ *this,
               SubscribableVariableBase_1_System_Object_ *other,MethodInfo *method)

{
  if ((other != (SubscribableVariableBase_1_System_Object_ *)0x0) &&
     ((this->fields).value != (Object *)0x0)) {
    pOVar1 = (this->fields).value;
    pOVar2 = pOVar1->klass;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar3 = (*(pOVar2->vtable).Equals.methodPtr)
                      (pOVar1,(other->fields).value,(pOVar2->vtable).Equals.method);
    return bVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__Equals_1
               (SubscribableVariableBase_1_System_Object_ *this,Object *obj,MethodInfo *method)

{
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SubscribableVariableBase_1_System_Object_ *)obj) {
    return 1;
  }
  lVar1 = FUN_?(&(obj->klass->_0).byval_arg);
  if (this != (SubscribableVariableBase_1_System_Object_ *)0x0) {
    lVar2 = FUN_?(&(this->klass->_0).byval_arg);
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (lVar1 != lVar2) {
      return 0;
    }
    pIVar3 = method->klass->rgctx_data->klass;
    if ((pIVar3->field_0x135 & 1) == 0) {
      pIVar3 = (Il2CppClass *)FUN_?(pIVar3);
    }
    if (((obj->klass->_1).naturalAligment < pIVar3->naturalAligment) ||
       ((obj->klass->_1).typeHierarchy[(ulonglong)pIVar3->naturalAligment - 1] != pIVar3)) {
      FUN_?(obj,pIVar3);
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    if ((this->fields).value != (Object *)0x0) {
      pOVar6 = (this->fields).value;
      pOVar7 = pOVar6->klass;
      bVar5 = (*(pOVar7->vtable).Equals.methodPtr)
                        (pOVar6,obj[1].klass,(pOVar7->vtable).Equals.method);
      return bVar5;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
        SubscribableVariableBase_1_System_Object__GetHashCode
                  (SubscribableVariableBase_1_System_Object_ *this,MethodInfo *method)

{
  pEVar1 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
           EqualityComparer_1_System_Object__get_Default(method->klass->rgctx_data[2].method);
  if (pEVar1 != (EqualityComparer_1_System_Object_ *)0x0) {
    UNRECOVERED_JUMPTABLE = (pEVar1->klass->vtable).__unknown_1.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*UNRECOVERED_JUMPTABLE)
                      (pEVar1,(this->fields).value,(pEVar1->klass->vtable).__unknown_1.method,
                       UNRECOVERED_JUMPTABLE);
    return iVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  iVar2 = (*pcVar3)();
  return iVar2;
}


/* Void Notify() */

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__Notify
               (SubscribableVariableBase_1_System_Object_ *this,MethodInfo *method)

{
  if ((this->fields).OnChange != (Action_1_Object_ *)0x0) {
    pAVar1 = (this->fields).OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields).value,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Boolean op_Equality(Object, SubscribableVariableBase`1[System.Object]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__op_Equality
               (Object *b,SubscribableVariableBase_1_System_Object_ *a,MethodInfo *method)

{
  if ((a != (SubscribableVariableBase_1_System_Object_ *)0x0) && (b != (Object *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = (*(b->klass->vtable).Equals.methodPtr)
                      (b,(a->fields).value,(b->klass->vtable).Equals.method);
    return bVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Object], Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__op_Equality_1
               (SubscribableVariableBase_1_System_Object_ *a,Object *b,MethodInfo *method)

{
  if ((a != (SubscribableVariableBase_1_System_Object_ *)0x0) && (b != (Object *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = (*(b->klass->vtable).Equals.methodPtr)
                      (b,(a->fields).value,(b->klass->vtable).Equals.method);
    return bVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Object],
   SubscribableVariableBase`1[System.Object]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__op_Equality_2
               (SubscribableVariableBase_1_System_Object_ *a,
               SubscribableVariableBase_1_System_Object_ *b,MethodInfo *method)

{
  if (((a != (SubscribableVariableBase_1_System_Object_ *)0x0) &&
      (b != (SubscribableVariableBase_1_System_Object_ *)0x0)) &&
     ((a->fields).value != (Object *)0x0)) {
    pOVar1 = (a->fields).value;
    pOVar2 = pOVar1->klass;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar3 = (*(pOVar2->vtable).Equals.methodPtr)
                      (pOVar1,(b->fields).value,(pOVar2->vtable).Equals.method);
    return bVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean op_Inequality(Object, SubscribableVariableBase`1[System.Object]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__op_Inequality
               (Object *b,SubscribableVariableBase_1_System_Object_ *a,MethodInfo *method)

{
  if ((a != (SubscribableVariableBase_1_System_Object_ *)0x0) && (b != (Object *)0x0)) {
    cVar1 = (*(b->klass->vtable).Equals.methodPtr)
                      (b,(a->fields).value,(b->klass->vtable).Equals.method);
    return cVar1 == '\0';
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Object], Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__op_Inequality_1
               (SubscribableVariableBase_1_System_Object_ *a,Object *b,MethodInfo *method)

{
  if ((a != (SubscribableVariableBase_1_System_Object_ *)0x0) && (b != (Object *)0x0)) {
    cVar1 = (*(b->klass->vtable).Equals.methodPtr)
                      (b,(a->fields).value,(b->klass->vtable).Equals.method);
    return cVar1 == '\0';
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Object],
   SubscribableVariableBase`1[System.Object]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__op_Inequality_2
               (SubscribableVariableBase_1_System_Object_ *a,
               SubscribableVariableBase_1_System_Object_ *b,MethodInfo *method)

{
  if ((method->klass->field_0x135 & 1) == 0) {
    FUN_?();
  }
  if (((a != (SubscribableVariableBase_1_System_Object_ *)0x0) &&
      (b != (SubscribableVariableBase_1_System_Object_ *)0x0)) &&
     ((a->fields).value != (Object *)0x0)) {
    pOVar1 = (a->fields).value;
    pOVar2 = pOVar1->klass;
    cVar3 = (*(pOVar2->vtable).Equals.methodPtr)
                      (pOVar1,(b->fields).value,(pOVar2->vtable).Equals.method);
    return cVar3 == '\0';
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}

