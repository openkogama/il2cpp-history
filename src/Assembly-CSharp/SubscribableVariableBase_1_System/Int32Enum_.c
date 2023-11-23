
/* Boolean Equals(SubscribableVariableBase`1[System.Int32Enum]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32Enum]::
     SubscribableVariableBase_1_System_Int32Enum__Equals
               (SubscribableVariableBase_1_System_Int32Enum_ *this,
               SubscribableVariableBase_1_System_Int32Enum_ *other,MethodInfo *method)

{
  pMVar1 = method;
  pSVar2 = this;
  if (other != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
    this = (SubscribableVariableBase_1_System_Int32Enum_ *)(other->fields).value;
    obj = (Object *)func_?(method->klass->rgctx_data[5].rgctxDataDummy,&this);
    VStack_3.klass = (ValueType__Class *)pMVar1->klass->rgctx_data[5].klass;
    if (((uint)((Il2CppClass *)VStack_3.klass)->vtable[0].methodPtr & 0x100) == 0) {
      VStack_3.klass = (ValueType__Class *)func_?(VStack_3.klass);
    }
    iStack_4 = (pSVar2->fields).value;
    VStack_3.monitor = (MonitorData *)0xffffffff;
    bVar5 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_3,obj,(MethodInfo *)0x0);
    return bVar5;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32Enum]::
     SubscribableVariableBase_1_System_Int32Enum__Equals_1
               (SubscribableVariableBase_1_System_Int32Enum_ *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SubscribableVariableBase_1_System_Int32Enum_ *)obj) {
    return 1;
  }
  left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
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
      if (((uint)(pMVar2->klass->rgctx_data[5].klass)->vtable[0].methodPtr & 0x100) == 0) {
        func_?();
      }
      bVar1 = mscorlib.dll::System::ValueType::ValueType_Equals
                        ((ValueType *)0xffffffff,obj_00,(MethodInfo *)0x0);
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

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32Enum]::
        SubscribableVariableBase_1_System_Int32Enum__GetHashCode
                  (SubscribableVariableBase_1_System_Int32Enum_ *this,MethodInfo *method)

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
  pEVar3 = *(EqualityComparer_1_System_Int32Enum_ **)pIVar2->static_fields;
  func_?();
  if (pEVar3 == (EqualityComparer_1_System_Int32Enum_ *)0x0) {
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pEVar3 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32Enum]::
             EqualityComparer_1_System_Int32Enum__CreateComparer(pIVar2->rgctx_data[3].method);
    func_?();
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[2].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    *(EqualityComparer_1_System_Int32Enum_ **)pIVar2->static_fields = pEVar3;
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
  if (pEVar3 != (EqualityComparer_1_System_Int32Enum_ *)0x0) {
    iVar4 = (*(code *)(pEVar3->klass->vtable).__unknown_1.method)
                      (pEVar3,(this->fields).value,(pEVar3->klass->vtable).IndexOf.methodPtr);
    return iVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Boolean op_Equality(Int32Enum, SubscribableVariableBase`1[System.Int32Enum]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32Enum]::
     SubscribableVariableBase_1_System_Int32Enum__op_Equality
               (Int32Enum__Enum b,SubscribableVariableBase_1_System_Int32Enum_ *a,MethodInfo *method
               )

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Int32Enum_ *)(a->fields).value;
    pIVar2 = method->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    obj = (Object *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,&a);
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[5].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    IStack_3 = b;
    VStack_4.monitor = (MonitorData *)0xffffffff;
    VStack_4.klass = (ValueType__Class *)pIVar2;
    bVar5 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_4,obj,(MethodInfo *)0x0);
    return bVar5;
  }
  func_?();
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
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Int32Enum_ *)(a->fields).value;
    pIVar2 = method->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    obj = (Object *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,&a);
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[5].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    IStack_3 = b;
    VStack_4.monitor = (MonitorData *)0xffffffff;
    VStack_4.klass = (ValueType__Class *)pIVar2;
    bVar5 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_4,obj,(MethodInfo *)0x0);
    return bVar5;
  }
  func_?();
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
  pMVar1 = method;
  pSVar2 = a;
  if ((a != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) &&
     (b != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0)) {
    a = (SubscribableVariableBase_1_System_Int32Enum_ *)(b->fields).value;
    pIVar3 = method->klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    obj = (Object *)func_?(pIVar3->rgctx_data[5].rgctxDataDummy,&a);
    pIVar3 = pMVar1->klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    pIVar3 = pIVar3->rgctx_data[5].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    iStack_4 = (pSVar2->fields).value;
    VStack_5.monitor = (MonitorData *)0xffffffff;
    VStack_5.klass = (ValueType__Class *)pIVar3;
    bVar6 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_5,obj,(MethodInfo *)0x0);
    return bVar6;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean op_Inequality(Int32Enum, SubscribableVariableBase`1[System.Int32Enum]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::Int32Enum]::
     SubscribableVariableBase_1_System_Int32Enum__op_Inequality
               (Int32Enum__Enum b,SubscribableVariableBase_1_System_Int32Enum_ *a,MethodInfo *method
               )

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Int32Enum_ *)(a->fields).value;
    pIVar2 = method->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    obj = (Object *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,&a);
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[5].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    IStack_3 = b;
    VStack_4.monitor = (MonitorData *)0xffffffff;
    VStack_4.klass = (ValueType__Class *)pIVar2;
    bVar5 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_4,obj,(MethodInfo *)0x0);
    return bVar5 ^ 1;
  }
  func_?();
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
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) {
    a = (SubscribableVariableBase_1_System_Int32Enum_ *)(a->fields).value;
    pIVar2 = method->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    obj = (Object *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,&a);
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[5].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    IStack_3 = b;
    VStack_4.monitor = (MonitorData *)0xffffffff;
    VStack_4.klass = (ValueType__Class *)pIVar2;
    bVar5 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_4,obj,(MethodInfo *)0x0);
    return bVar5 ^ 1;
  }
  func_?();
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
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pMVar2 = pIVar1->rgctx_data[10].method;
  if ((a != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) &&
     (b != (SubscribableVariableBase_1_System_Int32Enum_ *)0x0)) {
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
    pIVar1 = pIVar1->rgctx_data[5].klass;
    if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    iStack_3 = (a->fields).value;
    VStack_4.monitor = (MonitorData *)0xffffffff;
    VStack_4.klass = (ValueType__Class *)pIVar1;
    bVar5 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_4,obj,(MethodInfo *)0x0);
    return bVar5 ^ 1;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}

