
/* Boolean Equals(SubscribableVariableBase`1[System.Single]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__Equals
               (SubscribableVariableBase_1_System_Single_ *this,
               SubscribableVariableBase_1_System_Single_ *other,MethodInfo *method)

{
  pMVar1 = method;
  this_00 = &this->fields;
  if (other != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    this = (SubscribableVariableBase_1_System_Single_ *)(other->fields).value;
    pvVar2 = method->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    obj = (Object *)func_?(pvVar2,&this);
    bVar3 = mscorlib.dll::System::Single::Single_Equals
                      ((Single *)this_00,obj,pMVar1->klass->rgctx_data[8].method);
    return bVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__Equals_1
               (SubscribableVariableBase_1_System_Single_ *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SubscribableVariableBase_1_System_Single_ *)obj) {
    return 1;
  }
  left._source = (CancellationTokenSource *)
                 mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SubscribableVariableBase_1_System_Single_ *)0x0) {
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

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
        SubscribableVariableBase_1_System_Single__GetHashCode
                  (SubscribableVariableBase_1_System_Single_ *this,MethodInfo *method)

{
  IStack_1 = method->klass->rgctx_data[2];
  piStack_2 = (int *)(*(method->klass->rgctx_data[2].method)->virtualMethodPointer)();
  if (piStack_2 != (int *)0x0) {
    IStack_1 = *(Il2CppRGCTXData *)(*piStack_2 + 0x108);
    puStack_3 = (undefined *)(this->fields).value;
    iVar4 = (**(code **)(*piStack_2 + 0x104))();
    return iVar4;
  }
  IStack_1 = (Il2CppRGCTXData)&stack0xfffffffc;
  uVar5 = func_?(&piStack_2);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  iVar4 = (*pcVar6)();
  return iVar4;
}


/* Void Notify() */

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__Notify
               (SubscribableVariableBase_1_System_Single_ *this,MethodInfo *method)

{
  if ((this->fields).OnChange != (Action_1_Single_ *)0x0) {
    (*(method->klass->rgctx_data[0xb].method)->virtualMethodPointer)
              ((this->fields).OnChange,(this->fields).value,
               method->klass->rgctx_data[0xb].rgctxDataDummy);
  }
  return;
}


/* SubscribableVariableBase`1[System.Single](Single) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single___ctor
               (SubscribableVariableBase_1_System_Single_ *this,float value,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).value = value;
  return;
}


/* Void add_OnChange(Action`1[Single]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__add_OnChange
               (SubscribableVariableBase_1_System_Single_ *this,Action_1_Single_ *value,
               MethodInfo *method)

{
  a = (this->fields).OnChange;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pvVar2 = method->klass->rgctx_data[6].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    if (pDVar1 == (Delegate *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = func_?(pDVar1,pvVar2);
      if (iVar3 == 0) {
        func_?(pDVar1,pvVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Single_ *)func_?(&(this->fields).OnChange,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
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
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Single_ *)(a->fields).value;
    pIVar2 = method->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pvVar3 = pIVar2->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    obj = (Object *)func_?(pvVar3,&a);
    pIVar2 = pMVar1->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    bVar4 = mscorlib.dll::System::Single::Single_Equals
                      ((Single *)&b,obj,pIVar2->rgctx_data[8].method);
    return bVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Single], Single) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__op_Equality_1
               (SubscribableVariableBase_1_System_Single_ *a,float b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Single_ *)(a->fields).value;
    pIVar2 = method->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pvVar3 = pIVar2->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    obj = (Object *)func_?(pvVar3,&a);
    pIVar2 = pMVar1->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    bVar4 = mscorlib.dll::System::Single::Single_Equals
                      ((Single *)&b,obj,pIVar2->rgctx_data[8].method);
    return bVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Single],
   SubscribableVariableBase`1[System.Single]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__op_Equality_2
               (SubscribableVariableBase_1_System_Single_ *a,
               SubscribableVariableBase_1_System_Single_ *b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    this = &a->fields;
    if (b != (SubscribableVariableBase_1_System_Single_ *)0x0) {
      a = (SubscribableVariableBase_1_System_Single_ *)(b->fields).value;
      pIVar2 = method->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pvVar3 = pIVar2->rgctx_data[7].rgctxDataDummy;
      if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
        pvVar3 = (void *)func_?(pvVar3);
      }
      obj = (Object *)func_?(pvVar3,&a);
      pIVar2 = pMVar1->klass;
      if (pIVar2->initialized_and_no_error == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      bVar4 = mscorlib.dll::System::Single::Single_Equals
                        ((Single *)this,obj,pIVar2->rgctx_data[8].method);
      return bVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Single op_Implicit(SubscribableVariableBase`1[System.Single]) */

float Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
      SubscribableVariableBase_1_System_Single__op_Implicit
                (SubscribableVariableBase_1_System_Single_ *s,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (s != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    return (s->fields).value;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  fVar5 = (float10)(*pcVar4)();
  return (float)fVar5;
}


/* Boolean op_Inequality(Single, SubscribableVariableBase`1[System.Single]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__op_Inequality
               (float b,SubscribableVariableBase_1_System_Single_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Single_ *)(a->fields).value;
    pIVar2 = method->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pvVar3 = pIVar2->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    obj = (Object *)func_?(pvVar3,&a);
    pIVar2 = pMVar1->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    bVar4 = mscorlib.dll::System::Single::Single_Equals
                      ((Single *)&b,obj,pIVar2->rgctx_data[8].method);
    return bVar4 == 0;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Single], Single) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__op_Inequality_1
               (SubscribableVariableBase_1_System_Single_ *a,float b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Single_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Single_ *)(a->fields).value;
    pIVar2 = method->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pvVar3 = pIVar2->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    obj = (Object *)func_?(pvVar3,&a);
    pIVar2 = pMVar1->klass;
    if (pIVar2->initialized_and_no_error == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    bVar4 = mscorlib.dll::System::Single::Single_Equals
                      ((Single *)&b,obj,pIVar2->rgctx_data[8].method);
    return bVar4 == 0;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Void remove_OnChange(Action`1[Single]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::Single]::
     SubscribableVariableBase_1_System_Single__remove_OnChange
               (SubscribableVariableBase_1_System_Single_ *this,Action_1_Single_ *value,
               MethodInfo *method)

{
  source = (this->fields).OnChange;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pvVar2 = method->klass->rgctx_data[6].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    if (pDVar1 == (Delegate *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = func_?(pDVar1,pvVar2);
      if (iVar3 == 0) {
        func_?(pDVar1,pvVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Single_ *)func_?(&(this->fields).OnChange,iVar3,source);
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
}

