
/* Boolean Equals(SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__Equals
               (SubscribableVariableBase_1_System_Boolean_ *this,
               SubscribableVariableBase_1_System_Boolean_ *other,MethodInfo *method)

{
  pMVar1 = method;
  this_00 = &this->fields;
  if (other != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    this = (SubscribableVariableBase_1_System_Boolean_ *)CONCAT13((other->fields).value,this._0_3_);
    pvVar2 = method->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    obj = (Object *)func_?(pvVar2,(int)&this + 3);
    bVar3 = mscorlib.dll::System::Boolean::Boolean_Equals
                      ((Boolean *)this_00,obj,pMVar1->klass->rgctx_data[8].method);
    return bVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__Equals_1
               (SubscribableVariableBase_1_System_Boolean_ *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SubscribableVariableBase_1_System_Boolean_ *)obj) {
    return 1;
  }
  left._source = (CancellationTokenSource *)
                 mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
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


/* Boolean op_Equality(Boolean, SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Equality
               (bool b,SubscribableVariableBase_1_System_Boolean_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Boolean_ *)CONCAT13((a->fields).value,a._0_3_);
    pIVar2 = method->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pvVar3 = pIVar2->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    obj = (Object *)func_?(pvVar3,(int)&a + 3);
    pIVar2 = pMVar1->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    bVar4 = mscorlib.dll::System::Boolean::Boolean_Equals
                      ((Boolean *)&b,obj,pIVar2->rgctx_data[8].method);
    return bVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Boolean], Boolean) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Equality_1
               (SubscribableVariableBase_1_System_Boolean_ *a,bool b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Boolean_ *)CONCAT13((a->fields).value,a._0_3_);
    pIVar2 = method->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pvVar3 = pIVar2->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    obj = (Object *)func_?(pvVar3,(int)&a + 3);
    pIVar2 = pMVar1->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    bVar4 = mscorlib.dll::System::Boolean::Boolean_Equals
                      ((Boolean *)&b,obj,pIVar2->rgctx_data[8].method);
    return bVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Boolean],
   SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Equality_2
               (SubscribableVariableBase_1_System_Boolean_ *a,
               SubscribableVariableBase_1_System_Boolean_ *b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    this = &a->fields;
    if (b != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
      a = (SubscribableVariableBase_1_System_Boolean_ *)CONCAT13((b->fields).value,a._0_3_);
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pvVar3 = pIVar2->rgctx_data[7].rgctxDataDummy;
      if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
        pvVar3 = (void *)func_?(pvVar3);
      }
      obj = (Object *)func_?(pvVar3,(int)&a + 3);
      pIVar2 = pMVar1->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      bVar4 = mscorlib.dll::System::Boolean::Boolean_Equals
                        ((Boolean *)this,obj,pIVar2->rgctx_data[8].method);
      return bVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Inequality(Boolean, SubscribableVariableBase`1[System.Boolean]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Inequality
               (bool b,SubscribableVariableBase_1_System_Boolean_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Boolean_ *)CONCAT13((a->fields).value,a._0_3_);
    pIVar2 = method->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pvVar3 = pIVar2->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    obj = (Object *)func_?(pvVar3,(int)&a + 3);
    pIVar2 = pMVar1->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    bVar4 = mscorlib.dll::System::Boolean::Boolean_Equals
                      ((Boolean *)&b,obj,pIVar2->rgctx_data[8].method);
    return bVar4 == 0;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Boolean], Boolean) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Boolean]::
     SubscribableVariableBase_1_System_Boolean__op_Inequality_1
               (SubscribableVariableBase_1_System_Boolean_ *a,bool b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Boolean_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Boolean_ *)CONCAT13((a->fields).value,a._0_3_);
    pIVar2 = method->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pvVar3 = pIVar2->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    obj = (Object *)func_?(pvVar3,(int)&a + 3);
    pIVar2 = pMVar1->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    bVar4 = mscorlib.dll::System::Boolean::Boolean_Equals
                      ((Boolean *)&b,obj,pIVar2->rgctx_data[8].method);
    return bVar4 == 0;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}

