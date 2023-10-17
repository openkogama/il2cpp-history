
/* Boolean Equals(SubscribableVariableBase`1[System.Object]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__Equals
               (SubscribableVariableBase_1_System_Object_ *this,
               SubscribableVariableBase_1_System_Object_ *other,MethodInfo *method)

{
  if (other != (SubscribableVariableBase_1_System_Object_ *)0x0) {
    if ((this->fields).value != (Object *)0x0) {
      pOVar1 = (this->fields).value;
      pOVar2 = pOVar1->klass;
      bVar3 = (*(pOVar2->vtable).Equals.methodPtr)
                        (pOVar1,(other->fields).value,(pOVar2->vtable).Equals.method);
      return bVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__Equals_1
               (SubscribableVariableBase_1_System_Object_ *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SubscribableVariableBase_1_System_Object_ *)obj) {
    return 1;
  }
  left._source = (CancellationTokenSource *)
                 mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SubscribableVariableBase_1_System_Object_ *)0x0) {
    right._source =
         (CancellationTokenSource *)
         mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar1 = mscorlib.dll::System::Threading::CancellationToken::CancellationToken_op_Inequality
                      (left,right,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 0;
    }
    pIVar2 = (method->klass->rgctx_data[1].method)->virtualMethodPointer;
    pIVar3 = method->klass->rgctx_data->klass;
    if (pIVar3->initialized_and_no_error == 0) {
      pIVar3 = (Il2CppClass *)func_?();
    }
    if ((pIVar3->typeHierarchyDepth <= (obj->klass->_1).typeHierarchyDepth) &&
       ((obj->klass->_1).typeHierarchy[pIVar3->typeHierarchyDepth - 1] == pIVar3)) {
      bVar1 = (*pIVar2)(this);
      return bVar1;
    }
    func_?();
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
        SubscribableVariableBase_1_System_Object__GetHashCode
                  (SubscribableVariableBase_1_System_Object_ *this,MethodInfo *method)

{
  piVar1 = (int *)(*(method->klass->rgctx_data[2].method)->virtualMethodPointer)
                            (method->klass->rgctx_data[2].rgctxDataDummy);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x104))
                      (piVar1,(this->fields).value,*(undefined4 *)(*piVar1 + 0x108));
    return iVar2;
  }
  func_?();
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
    (*(method->klass->rgctx_data[0xb].method)->virtualMethodPointer)
              ((this->fields).OnChange,(this->fields).value,
               method->klass->rgctx_data[0xb].rgctxDataDummy);
  }
  return;
}


/* Boolean op_Equality(Object, SubscribableVariableBase`1[System.Object]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__op_Equality
               (Object *b,SubscribableVariableBase_1_System_Object_ *a,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Object_ *)0x0) {
    if (b != (Object *)0x0) {
      bVar1 = (*(b->klass->vtable).Equals.methodPtr)
                        (b,(a->fields).value,(b->klass->vtable).Equals.method);
      return bVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Object], Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__op_Equality_1
               (SubscribableVariableBase_1_System_Object_ *a,Object *b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Object_ *)0x0) {
    if (b != (Object *)0x0) {
      bVar1 = (*(b->klass->vtable).Equals.methodPtr)
                        (b,(a->fields).value,(b->klass->vtable).Equals.method);
      return bVar1;
    }
  }
  func_?();
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
  if ((a != (SubscribableVariableBase_1_System_Object_ *)0x0) &&
     (b != (SubscribableVariableBase_1_System_Object_ *)0x0)) {
    if ((a->fields).value != (Object *)0x0) {
      pOVar1 = (a->fields).value;
      pOVar2 = pOVar1->klass;
      bVar3 = (*(pOVar2->vtable).Equals.methodPtr)
                        (pOVar1,(b->fields).value,(pOVar2->vtable).Equals.method);
      return bVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Object op_Implicit(SubscribableVariableBase`1[System.Object]) */

Object * Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
         SubscribableVariableBase_1_System_Object__op_Implicit
                   (SubscribableVariableBase_1_System_Object_ *s,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (s != (SubscribableVariableBase_1_System_Object_ *)0x0) {
    return (s->fields).value;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pOVar5 = (Object *)(*pcVar4)();
  return pOVar5;
}


/* Boolean op_Inequality(Object, SubscribableVariableBase`1[System.Object]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__op_Inequality
               (Object *b,SubscribableVariableBase_1_System_Object_ *a,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Object_ *)0x0) {
    if (b != (Object *)0x0) {
      cVar1 = (*(b->klass->vtable).Equals.methodPtr)
                        (b,(a->fields).value,(b->klass->vtable).Equals.method);
      return cVar1 == '\0';
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Object], Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__op_Inequality_1
               (SubscribableVariableBase_1_System_Object_ *a,Object *b,MethodInfo *method)

{
  if (a != (SubscribableVariableBase_1_System_Object_ *)0x0) {
    if (b != (Object *)0x0) {
      cVar1 = (*(b->klass->vtable).Equals.methodPtr)
                        (b,(a->fields).value,(b->klass->vtable).Equals.method);
      return cVar1 == '\0';
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

