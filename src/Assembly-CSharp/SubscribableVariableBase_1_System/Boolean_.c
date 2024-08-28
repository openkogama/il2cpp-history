
/* Boolean Equals(SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__Equals
               (SubscribableVariableBase_1_System_Boolean_ *this,
               SubscribableVariableBase_1_System_Boolean_ *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  this_00 = &this->fields;
  if (other != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    this = (SubscribableVariableBase_1_System_Boolean_ *)CONCAT13((other->fields).value,this._0_3_);
    obj = (Object *)func_?(method->klass->rgctx_data[5].rgctxDataDummy,(int)&this + 3);
    if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Boolean);
    }
    bVar2 = mscorlib.dll::System::Boolean::Boolean_Equals
                      ((Boolean *)this_00,obj,pMVar1->klass->rgctx_data[9].method);
    return bVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__Equals_1
               (SubscribableVariableBase_1_System_Boolean_ *this,Object *obj,MethodInfo *method)

{
  pOVar1 = obj;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (pOVar1 == (Object *)0x0) {
    return 0;
  }
  if (this == (SubscribableVariableBase_1_System_Boolean_ *)pOVar1) {
    return 1;
  }
  left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(pOVar1,(MethodInfo *)0x0);
  if (this != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    obj = (Object *)mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    bVar2 = System.Xml.Linq.dll::System::Xml::Linq::XNamespace::XNamespace_op_Inequality
                      (left,(XNamespace *)obj,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return 0;
    }
    pIVar3 = method->klass->rgctx_data;
    pMVar4 = pIVar3[1].method;
    obj = (Object *)pIVar3->klass;
    if (((uint)((Il2CppClass *)obj)->vtable[0].methodPtr & 0x100) == 0) {
      obj = (Object *)func_?();
    }
    if ((((Il2CppClass *)obj)->naturalAligment <= (pOVar1->klass->_1).naturalAligment) &&
       ((pOVar1->klass->_1).typeHierarchy[((Il2CppClass *)obj)->naturalAligment - 1] ==
        (Il2CppClass *)obj)) {
      if (cRam_? == '\0') {
        obj = (Object *)&TypeInfo__System__Boolean;
        func_?();
        cRam_? = '\x01';
      }
      obj = (Object *)((int)&obj + 3);
      pOVar1 = (Object *)func_?();
      if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
        obj = (Object *)TypeInfo__System__Boolean;
        func_?();
      }
      obj = (Object *)pMVar4->klass->rgctx_data[9].method;
      bVar2 = mscorlib.dll::System::Boolean::Boolean_Equals
                        ((Boolean *)&this->fields,pOVar1,(MethodInfo *)obj);
      return bVar2;
    }
    func_?();
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
        SubscribableVariableBase_1_System_Boolean__GetHashCode
                  (SubscribableVariableBase_1_System_Boolean_ *this,MethodInfo *method)

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
  pEVar3 = *(EqualityComparer_1_System_Boolean_ **)pIVar2->static_fields;
  func_?();
  if (pEVar3 == (EqualityComparer_1_System_Boolean_ *)0x0) {
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pEVar3 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Boolean]::
             EqualityComparer_1_System_Boolean__CreateComparer(pIVar2->rgctx_data[3].method);
    func_?();
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[2].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    *(EqualityComparer_1_System_Boolean_ **)pIVar2->static_fields = pEVar3;
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
  method = (MethodInfo *)(uint)(this->fields).value;
  if (pEVar3 != (EqualityComparer_1_System_Boolean_ *)0x0) {
    iVar4 = (*(code *)(pEVar3->klass->vtable).__unknown_1.method)
                      (pEVar3,method,(pEVar3->klass->vtable).IndexOf.methodPtr);
    return iVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Boolean op_Equality(Boolean, SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Equality
               (bool b,SubscribableVariableBase_1_System_Boolean_ *a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Boolean_ *)CONCAT13((a->fields).value,a._0_3_);
    pIVar2 = method->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    obj = (Object *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,(int)&a + 3);
    if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Boolean);
    }
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    bVar3 = mscorlib.dll::System::Boolean::Boolean_Equals
                      ((Boolean *)&b,obj,pIVar2->rgctx_data[9].method);
    return bVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Boolean], Boolean) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Equality_1
               (SubscribableVariableBase_1_System_Boolean_ *a,bool b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Boolean_ *)CONCAT13((a->fields).value,a._0_3_);
    pIVar2 = method->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    obj = (Object *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,(int)&a + 3);
    if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Boolean);
    }
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    bVar3 = mscorlib.dll::System::Boolean::Boolean_Equals
                      ((Boolean *)&b,obj,pIVar2->rgctx_data[9].method);
    return bVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Boolean],
   SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Equality_2
               (SubscribableVariableBase_1_System_Boolean_ *a,
               SubscribableVariableBase_1_System_Boolean_ *b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    this = &a->fields;
    if (b != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
      a = (SubscribableVariableBase_1_System_Boolean_ *)CONCAT13((b->fields).value,a._0_3_);
      pIVar2 = method->klass;
      if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      obj = (Object *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,(int)&a + 3);
      if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Boolean);
      }
      pIVar2 = pMVar1->klass;
      if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      bVar3 = mscorlib.dll::System::Boolean::Boolean_Equals
                        ((Boolean *)this,obj,pIVar2->rgctx_data[9].method);
      return bVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean op_Inequality(Boolean, SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Inequality
               (bool b,SubscribableVariableBase_1_System_Boolean_ *a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Boolean_ *)CONCAT13((a->fields).value,a._0_3_);
    pIVar2 = method->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    obj = (Object *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,(int)&a + 3);
    if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Boolean);
    }
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    bVar3 = mscorlib.dll::System::Boolean::Boolean_Equals
                      ((Boolean *)&b,obj,pIVar2->rgctx_data[9].method);
    return bVar3 == 0;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Boolean], Boolean) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Inequality_1
               (SubscribableVariableBase_1_System_Boolean_ *a,bool b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Boolean_ *)CONCAT13((a->fields).value,a._0_3_);
    pIVar2 = method->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    obj = (Object *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,(int)&a + 3);
    if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Boolean);
    }
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    bVar3 = mscorlib.dll::System::Boolean::Boolean_Equals
                      ((Boolean *)&b,obj,pIVar2->rgctx_data[9].method);
    return bVar3 == 0;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Boolean],
   SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Inequality_2
               (SubscribableVariableBase_1_System_Boolean_ *a,
               SubscribableVariableBase_1_System_Boolean_ *b,MethodInfo *method)

{
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pMVar2 = pIVar1->rgctx_data[10].method;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    cRam_? = '\x01';
  }
  if (a != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    if (b != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
      method = (MethodInfo *)CONCAT13((b->fields).value,method._0_3_);
      pIVar1 = pMVar2->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      obj = (Object *)func_?(pIVar1->rgctx_data[5].rgctxDataDummy,(int)&method + 3);
      if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Boolean);
      }
      pIVar1 = pMVar2->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      bVar3 = mscorlib.dll::System::Boolean::Boolean_Equals
                        ((Boolean *)&a->fields,obj,pIVar1->rgctx_data[9].method);
      return bVar3 == 0;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}

