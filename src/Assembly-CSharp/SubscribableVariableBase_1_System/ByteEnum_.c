
/* Boolean Equals(SubscribableVariableBase`1[System.ByteEnum]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::ByteEnum]::
     SubscribableVariableBase_1_System_ByteEnum__Equals
               (SubscribableVariableBase_1_System_ByteEnum_ *this,
               SubscribableVariableBase_1_System_ByteEnum_ *other,MethodInfo *method)

{
  pMVar1 = method;
  pSVar2 = this;
  if (other != (SubscribableVariableBase_1_System_ByteEnum_ *)0x0) {
    this = (SubscribableVariableBase_1_System_ByteEnum_ *)CONCAT13((other->fields).value,this._0_3_)
    ;
    pvVar3 = method->klass->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    obj = (Object *)func_?(pvVar3,(int)&this + 3);
    VStack_4.klass = pMVar1->klass->rgctx_data[7].rgctxDataDummy;
    if (((VStack_4.klass)->_1).initialized_and_no_error == 0) {
      VStack_4.klass = (ValueType__Class *)func_?(VStack_4.klass);
    }
    uStack_5 = (pSVar2->fields).value;
    VStack_4.monitor = (MonitorData *)0xffffffff;
    bVar6 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_4,obj,(MethodInfo *)0x0);
    return bVar6;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::ByteEnum]::
     SubscribableVariableBase_1_System_ByteEnum__Equals_1
               (SubscribableVariableBase_1_System_ByteEnum_ *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SubscribableVariableBase_1_System_ByteEnum_ *)obj) {
    return 1;
  }
  left._source = (CancellationTokenSource *)
                 mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SubscribableVariableBase_1_System_ByteEnum_ *)0x0) {
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

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[System::ByteEnum]::
        SubscribableVariableBase_1_System_ByteEnum__GetHashCode
                  (SubscribableVariableBase_1_System_ByteEnum_ *this,MethodInfo *method)

{
  IStack_1 = method->klass->rgctx_data[2];
  piStack_2 = (int *)(*(method->klass->rgctx_data[2].method)->virtualMethodPointer)();
  method = (MethodInfo *)CONCAT31(method._1_3_,(this->fields).value);
  if (piStack_2 != (int *)0x0) {
    IStack_1 = *(Il2CppRGCTXData *)(*piStack_2 + 0x108);
    pMStack_3 = method;
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

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::ByteEnum]::
     SubscribableVariableBase_1_System_ByteEnum__Notify
               (SubscribableVariableBase_1_System_ByteEnum_ *this,MethodInfo *method)

{
  if ((this->fields).OnChange != (Action_1_ByteEnum_ *)0x0) {
    (*(method->klass->rgctx_data[0xb].method)->virtualMethodPointer)
              ((this->fields).OnChange,(uint)(this->fields).value,
               method->klass->rgctx_data[0xb].rgctxDataDummy);
  }
  return;
}


/* SubscribableVariableBase`1[System.ByteEnum](ByteEnum) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[System::ByteEnum]::
     SubscribableVariableBase_1_System_ByteEnum___ctor
               (SubscribableVariableBase_1_System_ByteEnum_ *this,ByteEnum__Enum value,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).value = (undefined1)value;
  return;
}


/* ByteEnum get_Value() */

ByteEnum__Enum
Assembly-CSharp.dll::SubscribableVariableBase`1[System::ByteEnum]::
SubscribableVariableBase_1_System_ByteEnum__get_Value
          (SubscribableVariableBase_1_System_ByteEnum_ *this,MethodInfo *method)

{
  return CONCAT31((int3)((uint)this >> 8),(this->fields).value);
}


/* Boolean op_Equality(ByteEnum, SubscribableVariableBase`1[System.ByteEnum]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::ByteEnum]::
     SubscribableVariableBase_1_System_ByteEnum__op_Equality
               (ByteEnum__Enum b,SubscribableVariableBase_1_System_ByteEnum_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_ByteEnum_ *)0x0) {
    a = (SubscribableVariableBase_1_System_ByteEnum_ *)CONCAT13((a->fields).value,a._0_3_);
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
    pVVar4 = pIVar2->rgctx_data[7].rgctxDataDummy;
    if ((pVVar4->_1).initialized_and_no_error == 0) {
      pVVar4 = (ValueType__Class *)func_?(pVVar4);
    }
    uStack_5 = (undefined1)b;
    VStack_6.monitor = (MonitorData *)0xffffffff;
    VStack_6.klass = pVVar4;
    bVar7 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_6,obj,(MethodInfo *)0x0);
    return bVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.ByteEnum], ByteEnum) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::ByteEnum]::
     SubscribableVariableBase_1_System_ByteEnum__op_Equality_1
               (SubscribableVariableBase_1_System_ByteEnum_ *a,ByteEnum__Enum b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_ByteEnum_ *)0x0) {
    a = (SubscribableVariableBase_1_System_ByteEnum_ *)CONCAT13((a->fields).value,a._0_3_);
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
    pVVar4 = pIVar2->rgctx_data[7].rgctxDataDummy;
    if ((pVVar4->_1).initialized_and_no_error == 0) {
      pVVar4 = (ValueType__Class *)func_?(pVVar4);
    }
    uStack_5 = (undefined1)b;
    VStack_6.monitor = (MonitorData *)0xffffffff;
    VStack_6.klass = pVVar4;
    bVar7 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_6,obj,(MethodInfo *)0x0);
    return bVar7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Boolean op_Equality(SubscribableVariableBase`1[System.ByteEnum],
   SubscribableVariableBase`1[System.ByteEnum]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::ByteEnum]::
     SubscribableVariableBase_1_System_ByteEnum__op_Equality_2
               (SubscribableVariableBase_1_System_ByteEnum_ *a,
               SubscribableVariableBase_1_System_ByteEnum_ *b,MethodInfo *method)

{
  pMVar1 = method;
  pSVar2 = a;
  if ((a != (SubscribableVariableBase_1_System_ByteEnum_ *)0x0) &&
     (b != (SubscribableVariableBase_1_System_ByteEnum_ *)0x0)) {
    a = (SubscribableVariableBase_1_System_ByteEnum_ *)CONCAT13((b->fields).value,a._0_3_);
    pIVar3 = method->klass;
    if (pIVar3->initialized_and_no_error == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    pvVar4 = pIVar3->rgctx_data[7].rgctxDataDummy;
    if ((*(byte *)((int)pvVar4 + 0xba) & 1) == 0) {
      pvVar4 = (void *)func_?(pvVar4);
    }
    obj = (Object *)func_?(pvVar4,(int)&a + 3);
    pIVar3 = pMVar1->klass;
    if (pIVar3->initialized_and_no_error == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    pVVar5 = pIVar3->rgctx_data[7].rgctxDataDummy;
    if ((pVVar5->_1).initialized_and_no_error == 0) {
      pVVar5 = (ValueType__Class *)func_?(pVVar5);
    }
    uStack_6 = (pSVar2->fields).value;
    VStack_7.monitor = (MonitorData *)0xffffffff;
    VStack_7.klass = pVVar5;
    bVar8 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_7,obj,(MethodInfo *)0x0);
    return bVar8;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* ByteEnum op_Implicit(SubscribableVariableBase`1[System.ByteEnum]) */

ByteEnum__Enum
Assembly-CSharp.dll::SubscribableVariableBase`1[System::ByteEnum]::
SubscribableVariableBase_1_System_ByteEnum__op_Implicit
          (SubscribableVariableBase_1_System_ByteEnum_ *s,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (s != (SubscribableVariableBase_1_System_ByteEnum_ *)0x0) {
    return CONCAT31((int3)((uint)s >> 8),(s->fields).value);
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  BVar5 = (*pcVar4)();
  return BVar5;
}


/* Boolean op_Inequality(ByteEnum, SubscribableVariableBase`1[System.ByteEnum]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::ByteEnum]::
     SubscribableVariableBase_1_System_ByteEnum__op_Inequality
               (ByteEnum__Enum b,SubscribableVariableBase_1_System_ByteEnum_ *a,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_ByteEnum_ *)0x0) {
    a = (SubscribableVariableBase_1_System_ByteEnum_ *)CONCAT13((a->fields).value,a._0_3_);
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
    pVVar4 = pIVar2->rgctx_data[7].rgctxDataDummy;
    if ((pVVar4->_1).initialized_and_no_error == 0) {
      pVVar4 = (ValueType__Class *)func_?(pVVar4);
    }
    uStack_5 = (undefined1)b;
    VStack_6.monitor = (MonitorData *)0xffffffff;
    VStack_6.klass = pVVar4;
    bVar7 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_6,obj,(MethodInfo *)0x0);
    return bVar7 == 0;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}


/* Boolean op_Inequality(SubscribableVariableBase`1[System.ByteEnum], ByteEnum) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[System::ByteEnum]::
     SubscribableVariableBase_1_System_ByteEnum__op_Inequality_1
               (SubscribableVariableBase_1_System_ByteEnum_ *a,ByteEnum__Enum b,MethodInfo *method)

{
  pMVar1 = method;
  if (a != (SubscribableVariableBase_1_System_ByteEnum_ *)0x0) {
    a = (SubscribableVariableBase_1_System_ByteEnum_ *)CONCAT13((a->fields).value,a._0_3_);
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
    pVVar4 = pIVar2->rgctx_data[7].rgctxDataDummy;
    if ((pVVar4->_1).initialized_and_no_error == 0) {
      pVVar4 = (ValueType__Class *)func_?(pVVar4);
    }
    uStack_5 = (undefined1)b;
    VStack_6.monitor = (MonitorData *)0xffffffff;
    VStack_6.klass = pVVar4;
    bVar7 = mscorlib.dll::System::ValueType::ValueType_Equals(&VStack_6,obj,(MethodInfo *)0x0);
    return bVar7 == 0;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar7 = (*pcVar8)();
  return bVar7;
}

