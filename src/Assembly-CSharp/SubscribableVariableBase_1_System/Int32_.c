
/* Boolean Equals(SubscribableVariableBase`1[System.Int32]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32]::
     SubscribableVariableBase_1_System_Int32__Equals
               (SubscribableVariableBase_1_System_Int32_ *this,
               SubscribableVariableBase_1_System_Int32_ *other,MethodInfo *method)

{
  pMVar1 = method;
  if (other != (SubscribableVariableBase_1_System_Int32_ *)0x0) {
    other = (SubscribableVariableBase_1_System_Int32_ *)(other->fields).value;
    obj = (Object *)func_?(method->klass->rgctx_data[5].rgctxDataDummy,&other);
    bVar2 = mscorlib.dll::System::Int32::Int32_Equals
                      ((Int32 *)&this->fields,obj,pMVar1->klass->rgctx_data[9].method);
    return bVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32]::
     SubscribableVariableBase_1_System_Int32__Equals_1
               (SubscribableVariableBase_1_System_Int32_ *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SubscribableVariableBase_1_System_Int32_ *)obj) {
    return 1;
  }
  left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SubscribableVariableBase_1_System_Int32_ *)0x0) {
    right = (XNamespace *)
            mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = System.Xml.Linq.dll::System::Xml::Linq::XNamespace::XNamespace_op_Inequality
                      (left,right,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return 0;
    }
    pMVar2 = method->klass->rgctx_data[1].method;
    pIVar3 = method->klass->rgctx_data->klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?();
    }
    if ((pIVar3->naturalAligment <= (obj->klass->_1).naturalAligment) &&
       ((obj->klass->_1).typeHierarchy[pIVar3->naturalAligment - 1] == pIVar3)) {
      obj_00 = (Object *)func_?();
      bVar1 = mscorlib.dll::System::Int32::Int32_Equals
                        ((Int32 *)&this->fields,obj_00,pMVar2->klass->rgctx_data[9].method);
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

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32]::
        SubscribableVariableBase_1_System_Int32__GetHashCode
                  (SubscribableVariableBase_1_System_Int32_ *this,MethodInfo *method)

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
  pEVar3 = *(EqualityComparer_1_System_Int32_ **)pIVar2->static_fields;
  func_?();
  if (pEVar3 == (EqualityComparer_1_System_Int32_ *)0x0) {
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pEVar3 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32]::
             EqualityComparer_1_System_Int32__CreateComparer(pIVar2->rgctx_data[3].method);
    func_?();
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[2].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    *(EqualityComparer_1_System_Int32_ **)pIVar2->static_fields = pEVar3;
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
  if (pEVar3 != (EqualityComparer_1_System_Int32_ *)0x0) {
    iVar4 = (*(code *)(pEVar3->klass->vtable).__unknown_1.method)
                      (pEVar3,(this->fields).value,(pEVar3->klass->vtable).IndexOf.methodPtr);
    return iVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Boolean op_Equality(Int32, SubscribableVariableBase`1[System.Int32]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32]::
     SubscribableVariableBase_1_System_Int32__op_Equality
               (int32_t b,SubscribableVariableBase_1_System_Int32_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Int32_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Int32_ *)(a->fields).value;
    pIVar2 = method->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    obj = (Object *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,&a);
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    bVar3 = mscorlib.dll::System::Int32::Int32_Equals((Int32 *)&b,obj,pIVar2->rgctx_data[9].method);
    return bVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32]::
     SubscribableVariableBase_1_System_Int32__op_Equality_1
               (SubscribableVariableBase_1_System_Int32_ *a,int32_t b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Int32_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Int32_ *)(a->fields).value;
    pIVar2 = method->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    obj = (Object *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,&a);
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    bVar3 = mscorlib.dll::System::Int32::Int32_Equals((Int32 *)&b,obj,pIVar2->rgctx_data[9].method);
    return bVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.Int32],
   SubscribableVariableBase`1[System.Int32]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32]::
     SubscribableVariableBase_1_System_Int32__op_Equality_2
               (SubscribableVariableBase_1_System_Int32_ *a,
               SubscribableVariableBase_1_System_Int32_ *b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Int32_ *)0x0) {
    this = &a->fields;
    if (b != (SubscribableVariableBase_1_System_Int32_ *)0x0) {
      a = (SubscribableVariableBase_1_System_Int32_ *)(b->fields).value;
      pIVar2 = method->klass;
      if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      obj = (Object *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,&a);
      pIVar2 = pMVar1->klass;
      if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      bVar3 = mscorlib.dll::System::Int32::Int32_Equals
                        ((Int32 *)this,obj,pIVar2->rgctx_data[9].method);
      return bVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean op_Inequality(Int32, SubscribableVariableBase`1[System.Int32]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32]::
     SubscribableVariableBase_1_System_Int32__op_Inequality
               (int32_t b,SubscribableVariableBase_1_System_Int32_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Int32_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Int32_ *)(a->fields).value;
    pIVar2 = method->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    obj = (Object *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,&a);
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    bVar3 = mscorlib.dll::System::Int32::Int32_Equals((Int32 *)&b,obj,pIVar2->rgctx_data[9].method);
    return bVar3 == 0;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32]::
     SubscribableVariableBase_1_System_Int32__op_Inequality_1
               (SubscribableVariableBase_1_System_Int32_ *a,int32_t b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Int32_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Int32_ *)(a->fields).value;
    pIVar2 = method->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    obj = (Object *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,&a);
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    bVar3 = mscorlib.dll::System::Int32::Int32_Equals((Int32 *)&b,obj,pIVar2->rgctx_data[9].method);
    return bVar3 == 0;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.Int32],
   SubscribableVariableBase`1[System.Int32]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32]::
     SubscribableVariableBase_1_System_Int32__op_Inequality_2
               (SubscribableVariableBase_1_System_Int32_ *a,
               SubscribableVariableBase_1_System_Int32_ *b,MethodInfo *method)

{
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pMVar2 = pIVar1->rgctx_data[10].method;
  if (a != (SubscribableVariableBase_1_System_Int32_ *)0x0) {
    if (b != (SubscribableVariableBase_1_System_Int32_ *)0x0) {
      method = (MethodInfo *)(b->fields).value;
      pIVar1 = pMVar2->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      obj = (Object *)func_?(pIVar1->rgctx_data[5].rgctxDataDummy,&method);
      pIVar1 = pMVar2->klass;
      if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
        pIVar1 = (Il2CppClass *)func_?(pIVar1);
      }
      bVar3 = mscorlib.dll::System::Int32::Int32_Equals
                        ((Int32 *)&a->fields,obj,pIVar1->rgctx_data[9].method);
      return bVar3 == 0;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}

