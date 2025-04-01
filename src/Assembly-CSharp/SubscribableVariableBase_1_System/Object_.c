
/* Boolean Equals(SubscribableVariableBase`1[System.Object]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__Equals
               (SubscribableVariableBase_1_System_Object_ *this,
               SubscribableVariableBase_1_System_Object_ *other,MethodInfo *method)

{
  if (other != (SubscribableVariableBase_1_System_Object_ *)0x0) {
    pOVar1 = (this->fields).value;
    if (pOVar1 != (Object *)0x0) {
      bVar2 = (*(code *)(pOVar1->klass->vtable).Equals.method)
                        (pOVar1,(other->fields).value,(pOVar1->klass->vtable).Finalize.methodPtr);
      return bVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
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
  left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SubscribableVariableBase_1_System_Object_ *)0x0) {
    right = (XNamespace *)
            mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar1 = System.Xml.Linq.dll::System::Xml::Linq::XNamespace::XNamespace_op_Inequality
                      (left,right,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 0;
    }
    pIVar2 = method->klass->rgctx_data->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?();
    }
    if (((obj->klass->_1).naturalAligment < pIVar2->naturalAligment) ||
       ((obj->klass->_1).typeHierarchy[pIVar2->naturalAligment - 1] != pIVar2)) {
      func_?();
    }
    else {
      pOVar3 = (this->fields).value;
      if (pOVar3 != (Object *)0x0) {
        bVar1 = (*(code *)(pOVar3->klass->vtable).Equals.method)();
        return bVar1;
      }
    }
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
  pMVar1 = method->klass->rgctx_data[2].method;
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data[2].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pEVar3 = *(EqualityComparer_1_System_Object_ **)pIVar2->static_fields;
  func_?();
  if (pEVar3 == (EqualityComparer_1_System_Object_ *)0x0) {
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pEVar3 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Object]::
             EqualityComparer_1_System_Object__CreateComparer(pIVar2->rgctx_data[3].method);
    func_?();
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[2].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    *(EqualityComparer_1_System_Object_ **)pIVar2->static_fields = pEVar3;
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[2].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    func_?(pIVar2->static_fields,pEVar3);
  }
  if (pEVar3 != (EqualityComparer_1_System_Object_ *)0x0) {
    iVar4 = (*(code *)(pEVar3->klass->vtable).__unknown_1.method)
                      (pEVar3,(this->fields).value,(pEVar3->klass->vtable).IndexOf.methodPtr);
    return iVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Void Notify() */

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::Object]::
     SubscribableVariableBase_1_System_Object__Notify
               (SubscribableVariableBase_1_System_Object_ *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnChange;
  if (pAVar1 != (Action_1_Object_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields).value,(pAVar1->fields)._._.method);
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
      bVar1 = (*(code *)(b->klass->vtable).Equals.method)
                        (b,(a->fields).value,(b->klass->vtable).Finalize.methodPtr);
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
      bVar1 = (*(code *)(b->klass->vtable).Equals.method)
                        (b,(a->fields).value,(b->klass->vtable).Finalize.methodPtr);
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
    pOVar1 = (a->fields).value;
    if (pOVar1 != (Object *)0x0) {
      bVar2 = (*(code *)(pOVar1->klass->vtable).Equals.method)
                        (pOVar1,(b->fields).value,(pOVar1->klass->vtable).Finalize.methodPtr);
      return bVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
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
      cVar1 = (*(code *)(b->klass->vtable).Equals.method)
                        (b,(a->fields).value,(b->klass->vtable).Finalize.methodPtr);
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
      cVar1 = (*(code *)(b->klass->vtable).Equals.method)
                        (b,(a->fields).value,(b->klass->vtable).Finalize.methodPtr);
      return cVar1 == '\0';
    }
  }
  func_?();
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
  if (((uint)method->klass->vtable[0].methodPtr & 0x100) == 0) {
    func_?(method->klass);
  }
  if ((a != (SubscribableVariableBase_1_System_Object_ *)0x0) &&
     (b != (SubscribableVariableBase_1_System_Object_ *)0x0)) {
    pOVar1 = (a->fields).value;
    if (pOVar1 != (Object *)0x0) {
      cVar2 = (*(code *)(pOVar1->klass->vtable).Equals.method)
                        (pOVar1,(b->fields).value,(pOVar1->klass->vtable).Finalize.methodPtr);
      return cVar2 == '\0';
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}

