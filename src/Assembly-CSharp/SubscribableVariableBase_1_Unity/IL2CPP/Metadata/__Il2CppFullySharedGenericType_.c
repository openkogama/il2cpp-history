
/* Boolean Equals(SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Equals
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
               ,SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *other,MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[5].klass)->actualSize;
  pIVar3 = method->klass->rgctx_data[5].klass;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pIVar3);
  }
  func_?();
  func_?();
  uVar4 = func_?(other,pMVar1->klass->rgctx_data->klass->fields);
  func_?(&stack0xffffffe8,uVar4,uVar2);
  pSVar5 = (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           func_?(pMVar1->klass->rgctx_data[5].rgctxDataDummy,&stack0xffffffe8);
  uVar4 = func_?(this,pMVar1->klass->rgctx_data->klass->fields);
  pvVar6 = pMVar1->klass->rgctx_data[9].rgctxDataDummy;
  pIVar3 = pMVar1->klass->rgctx_data[5].klass;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    pIVar3 = (Il2CppClass *)func_?(pIVar3);
  }
  other = pSVar5;
  func_?(pIVar3,pvVar6,&stack0xffffffe8,uVar4,&other,(int)&method + 3);
  return method._3_1_;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Equals_1
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
               ,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)obj)
  {
    return 1;
  }
  left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
  {
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
    pIVar2 = (method->klass->rgctx_data[1].method)->methodPointer;
    pIVar3 = method->klass->rgctx_data->klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?();
    }
    if ((pIVar3->naturalAligment <= (obj->klass->_1).naturalAligment) &&
       ((obj->klass->_1).typeHierarchy[pIVar3->naturalAligment - 1] == pIVar3)) {
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

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__GetHashCode
                  (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                   *this,MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[5].klass)->actualSize;
  func_?();
  method = (MethodInfo *)
           (*(pMVar1->klass->rgctx_data[2].method)->methodPointer)
                     (pMVar1->klass->rgctx_data[2].rgctxDataDummy);
  uVar3 = func_?(this,pMVar1->klass->rgctx_data->klass->fields);
  func_?(&stack0xffffffec,uVar3,uVar2);
  pMVar4 = method;
  if (method != (MethodInfo *)0x0) {
    pMVar5 = (MethodInfo *)&stack0xffffffec;
    if (-1 < (int)(pMVar1->klass->rgctx_data[5].method)->return_type) {
      pMVar5 = unaff_EDI;
    }
    iVar6 = *(int *)(method->methodPointer + 0x10c);
    method = pMVar5;
    (**(code **)(iVar6 + 8))(*(undefined4 *)(iVar6 + 4),iVar6,pMVar4,&method,&pcStack_7);
    return (int32_t)pcStack_7;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  iVar9 = (*pcVar8)();
  return iVar9;
}


/* Void Notify() */

void Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Notify
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
               ,MethodInfo *method)

{
  pMVar1 = method;
  method = (MethodInfo *)(method->klass->rgctx_data[5].klass)->actualSize;
  func_?();
  piVar2 = (int *)func_?(this,pMVar1->klass->rgctx_data->klass->fields + 1);
  if (*piVar2 != 0) {
    puVar3 = (undefined4 *)func_?(this,pMVar1->klass->rgctx_data->klass->fields + 1);
    pvVar4 = (void *)*puVar3;
    uVar5 = func_?(this,pMVar1->klass->rgctx_data->klass->fields);
    func_?(&stack0xffffffec,uVar5,method);
    if (pvVar4 == (void *)0x0) {
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    method = (MethodInfo *)&stack0xffffffec;
    if (-1 < (int)(pMVar1->klass->rgctx_data[5].method)->return_type) {
      method = unaff_EDI;
    }
    pMVar7 = pMVar1->klass->rgctx_data[0xc].method;
    (*pMVar7->invoker_method)
              ((pMVar1->klass->rgctx_data[0xc].method)->methodPointer,pMVar7,pvVar4,&method,method);
  }
  return;
}


/* SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](__Il2CppFullySharedGenericType)
    */

void Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
               ,_Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  uVar1 = (method->klass->rgctx_data[5].klass)->actualSize;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  p_Var2 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(method->klass->rgctx_data[5].method)->return_type < 0) {
    p_Var2 = value;
  }
  func_?(&stack0xfffffff4,p_Var2,uVar1);
  func_?(this,method->klass->rgctx_data->klass->fields,&stack0xfffffff4,uVar1);
  return;
}


/* Void add_OnChange(Action`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__add_OnChange
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
               ,Action_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *value,
               MethodInfo *method)

{
  puVar1 = (undefined4 *)func_?(this,method->klass->rgctx_data->klass->fields + 1);
  a = (Delegate *)*puVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine(a,(Delegate *)value,(MethodInfo *)0x0)
    ;
    pIVar3 = method->klass->rgctx_data[7].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    if (pDVar2 == (Delegate *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = func_?(pDVar2,pIVar3);
      if (iVar4 == 0) {
        func_?(pDVar2,pIVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar6 = func_?(this,method->klass->rgctx_data->klass->fields + 1);
    pDVar2 = (Delegate *)func_?(uVar6,iVar4,a);
    bVar7 = pDVar2 != a;
    a = pDVar2;
  } while (bVar7);
  return;
}


/* __Il2CppFullySharedGenericType get_Value() */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType]::
SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Value
          (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  uVar1 = *(undefined4 *)
           (*(int *)(*(int *)(*(int *)(in_stack_2 + 0x10) + 0x60) + 0x14) + 0x84);
  func_?();
  uVar3 = func_?(this,*(undefined4 *)
                                (**(int **)(*(int *)(in_stack_2 + 0x10) + 0x60) + 0x40));
  func_?(&stack0xfffffff0,uVar3,uVar1);
  p_Var3 = (_Il2CppFullySharedGenericType *)func_?(method,&stack0xfffffff0,uVar1);
  return p_Var3;
}


/* Boolean op_Equality(__Il2CppFullySharedGenericType,
   SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Equality
               (_Il2CppFullySharedGenericType *b,
               SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               MethodInfo *method)

{
  pMVar1 = method;
  pIVar2 = method->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  uVar3 = (pIVar2->rgctx_data[5].klass)->actualSize;
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  if (((uint)(pIVar2->rgctx_data[5].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pIVar2->rgctx_data[5].klass);
  }
  func_?();
  func_?();
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  uVar4 = func_?(a,pIVar2->rgctx_data->klass->fields);
  func_?(&stack0xffffffec,uVar4,uVar3);
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  method = (MethodInfo *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,&stack0xffffffec);
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pIVar5 = pMVar1->klass;
  p_Var7 = (_Il2CppFullySharedGenericType *)&b;
  if ((int)(pIVar2->rgctx_data[5].method)->return_type < 0) {
    p_Var7 = b;
  }
  if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
    pIVar5 = (Il2CppClass *)func_?(pIVar5);
  }
  pvVar6 = pIVar5->rgctx_data[9].rgctxDataDummy;
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data[5].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  a = (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)method;
  func_?(pIVar2,pvVar6,&stack0xffffffec,p_Var7,&a,(int)&method + 3);
  return method._3_1_;
}


/* Boolean
   op_Equality(SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   __Il2CppFullySharedGenericType) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Equality_1
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               _Il2CppFullySharedGenericType *b,MethodInfo *method)

{
  pMVar1 = method;
  pIVar2 = method->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  uVar3 = (pIVar2->rgctx_data[5].klass)->actualSize;
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  if (((uint)(pIVar2->rgctx_data[5].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pIVar2->rgctx_data[5].klass);
  }
  func_?();
  func_?();
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  uVar4 = func_?(a,pIVar2->rgctx_data->klass->fields);
  func_?(&stack0xffffffec,uVar4,uVar3);
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  method = (MethodInfo *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,&stack0xffffffec);
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pIVar5 = pMVar1->klass;
  p_Var7 = (_Il2CppFullySharedGenericType *)&b;
  if ((int)(pIVar2->rgctx_data[5].method)->return_type < 0) {
    p_Var7 = b;
  }
  if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
    pIVar5 = (Il2CppClass *)func_?(pIVar5);
  }
  pvVar6 = pIVar5->rgctx_data[9].rgctxDataDummy;
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data[5].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  a = (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)method;
  func_?(pIVar2,pvVar6,&stack0xffffffec,p_Var7,&a,(int)&method + 3);
  return method._3_1_;
}


/* Boolean
   op_Equality(SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Equality_2
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *b,
               MethodInfo *method)

{
  pMVar1 = method;
  pIVar2 = method->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  uVar3 = (pIVar2->rgctx_data[5].klass)->actualSize;
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  if (((uint)(pIVar2->rgctx_data[5].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pIVar2->rgctx_data[5].klass);
  }
  func_?();
  func_?();
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  uVar4 = func_?(b,pIVar2->rgctx_data->klass->fields);
  func_?(&stack0xffffffec,uVar4,uVar3);
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  method = (MethodInfo *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,&stack0xffffffec);
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  uVar4 = func_?(a,pIVar2->rgctx_data->klass->fields);
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pvVar5 = pIVar2->rgctx_data[9].rgctxDataDummy;
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data[5].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  b = (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)method;
  func_?(pIVar2,pvVar5,&stack0xffffffec,uVar4,&b,(int)&method + 3);
  return method._3_1_;
}


/* __Il2CppFullySharedGenericType
   op_Implicit(SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType]::
SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Implicit
          (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *s,
          MethodInfo *method)

{
  iVar1 = *(int *)(in_stack_2 + 0x10);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_?(iVar1);
  }
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x60) + 0x14) + 0x84);
  func_?();
  iVar1 = *(int *)(in_stack_2 + 0x10);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_?(iVar1);
  }
  uVar4 = func_?(s,*(undefined4 *)(**(int **)(iVar1 + 0x60) + 0x40));
  func_?(&stack0xfffffff0,uVar4,uVar3);
  p_Var4 = (_Il2CppFullySharedGenericType *)func_?(method,&stack0xfffffff0,uVar3);
  return p_Var4;
}


/* Boolean op_Inequality(__Il2CppFullySharedGenericType,
   SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Inequality
               (_Il2CppFullySharedGenericType *b,
               SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               MethodInfo *method)

{
  pMVar1 = method;
  pIVar2 = method->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  uVar3 = (pIVar2->rgctx_data[5].klass)->actualSize;
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  if (((uint)(pIVar2->rgctx_data[5].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pIVar2->rgctx_data[5].klass);
  }
  func_?();
  func_?();
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  uVar4 = func_?(a,pIVar2->rgctx_data->klass->fields);
  func_?(&stack0xffffffec,uVar4,uVar3);
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  method = (MethodInfo *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,&stack0xffffffec);
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pIVar5 = pMVar1->klass;
  p_Var7 = (_Il2CppFullySharedGenericType *)&b;
  if ((int)(pIVar2->rgctx_data[5].method)->return_type < 0) {
    p_Var7 = b;
  }
  if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
    pIVar5 = (Il2CppClass *)func_?(pIVar5);
  }
  pvVar6 = pIVar5->rgctx_data[9].rgctxDataDummy;
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data[5].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  a = (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)method;
  func_?(pIVar2,pvVar6,&stack0xffffffec,p_Var7,&a,(int)&method + 3);
  return method._3_1_ == '\0';
}


/* Boolean
   op_Inequality(SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   __Il2CppFullySharedGenericType) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Inequality_1
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               _Il2CppFullySharedGenericType *b,MethodInfo *method)

{
  pMVar1 = method;
  pIVar2 = method->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  uVar3 = (pIVar2->rgctx_data[5].klass)->actualSize;
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  if (((uint)(pIVar2->rgctx_data[5].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pIVar2->rgctx_data[5].klass);
  }
  func_?();
  func_?();
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  uVar4 = func_?(a,pIVar2->rgctx_data->klass->fields);
  func_?(&stack0xffffffec,uVar4,uVar3);
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  method = (MethodInfo *)func_?(pIVar2->rgctx_data[5].rgctxDataDummy,&stack0xffffffec);
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pIVar5 = pMVar1->klass;
  p_Var7 = (_Il2CppFullySharedGenericType *)&b;
  if ((int)(pIVar2->rgctx_data[5].method)->return_type < 0) {
    p_Var7 = b;
  }
  if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
    pIVar5 = (Il2CppClass *)func_?(pIVar5);
  }
  pvVar6 = pIVar5->rgctx_data[9].rgctxDataDummy;
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data[5].klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  a = (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)method;
  func_?(pIVar2,pvVar6,&stack0xffffffec,p_Var7,&a,(int)&method + 3);
  return method._3_1_ == '\0';
}


/* Boolean
   op_Inequality(SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   SubscribableVariableBase`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

bool Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Inequality_2
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *b,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pIVar2 = (pIVar1->rgctx_data[10].method)->methodPointer;
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  cVar3 = (*pIVar2)(a,b,pIVar1->rgctx_data[10].rgctxDataDummy);
  return cVar3 == '\0';
}


/* Void remove_OnChange(Action`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

void Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__remove_OnChange
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
               ,Action_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *value,
               MethodInfo *method)

{
  puVar1 = (undefined4 *)func_?(this,method->klass->rgctx_data->klass->fields + 1);
  source = (Delegate *)*puVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (source,(Delegate *)value,(MethodInfo *)0x0);
    pIVar3 = method->klass->rgctx_data[7].klass;
    if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
      pIVar3 = (Il2CppClass *)func_?(pIVar3);
    }
    if (pDVar2 == (Delegate *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = func_?(pDVar2,pIVar3);
      if (iVar4 == 0) {
        func_?(pDVar2,pIVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar6 = func_?(this,method->klass->rgctx_data->klass->fields + 1);
    pDVar2 = (Delegate *)func_?(uVar6,iVar4,source);
    bVar7 = pDVar2 != source;
    source = pDVar2;
  } while (bVar7);
  return;
}

