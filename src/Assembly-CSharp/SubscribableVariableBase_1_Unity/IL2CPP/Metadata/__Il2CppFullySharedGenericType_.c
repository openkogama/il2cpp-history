
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
  pIVar2 = method->klass->rgctx_data[5].klass;
  uVar3 = pIVar2->actualSize;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pIVar2);
  }
  func_?();
  func_?();
  uVar4 = func_?(other,pMVar1->klass->rgctx_data->klass->fields);
  func_?(&stack0xffffffec,uVar4,uVar3);
  pSVar5 = (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           func_?(pMVar1->klass->rgctx_data[5].rgctxDataDummy,&stack0xffffffec);
  uVar4 = func_?(this,pMVar1->klass->rgctx_data->klass->fields);
  pIVar6 = pMVar1->klass->rgctx_data;
  pIVar2 = pIVar6[5].klass;
  pvVar7 = pIVar6[9].rgctxDataDummy;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  other = pSVar5;
  func_?(pIVar2,pvVar7,&stack0xffffffec,uVar4,&other,(int)&method + 3);
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
    pIVar2 = method->klass->rgctx_data;
    IVar3 = pIVar2[1];
    pIVar4 = pIVar2->klass;
    if (((uint)pIVar4->vtable[0].methodPtr & 0x100) == 0) {
      pIVar4 = (Il2CppClass *)func_?();
    }
    if ((pIVar4->naturalAligment <= (obj->klass->_1).naturalAligment) &&
       ((obj->klass->_1).typeHierarchy[pIVar4->naturalAligment - 1] == pIVar4)) {
      bVar1 = (*(code *)IVar3)();
      return bVar1;
    }
    func_?();
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar1 = (*pcVar5)();
  return bVar1;
}


/* Int32 GetHashCode() */

int32_t Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__GetHashCode
                  (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                   *this,MethodInfo *method)

{
  pIVar1 = method->klass->rgctx_data;
  uVar2 = (pIVar1[5].klass)->actualSize;
  func_?();
  pMVar3 = pIVar1[2].method;
  piVar4 = (int *)(*pMVar3->methodPointer)(pMVar3);
  uVar5 = func_?(this,method->klass->rgctx_data->klass->fields);
  func_?(&stack0xffffffec,uVar5,uVar2);
  if (piVar4 != (int *)0x0) {
    ppIVar6 = &method->klass;
    method = (MethodInfo *)&stack0xffffffec;
    if (-1 < (int)((*ppIVar6)->rgctx_data[5].method)->return_type) {
      method = unaff_EDI;
    }
    iVar7 = *(int *)(*piVar4 + 0x10c);
    (**(code **)(iVar7 + 8))(*(undefined4 *)(iVar7 + 4),iVar7,piVar4,&method,&pcStack_8);
    return (int32_t)pcStack_8;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  iVar10 = (*pcVar9)();
  return iVar10;
}


/* Void Notify() */

void Assembly-CSharp.dll::SubscribableVariableBase`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Notify
               (SubscribableVariableBase_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this
               ,MethodInfo *method)

{
  pMVar1 = method;
  pIVar2 = method->klass->rgctx_data;
  method = (MethodInfo *)(pIVar2[5].klass)->actualSize;
  func_?();
  piVar3 = (int *)func_?(this,pIVar2->klass->fields + 1);
  if (*piVar3 != 0) {
    puVar4 = (undefined4 *)func_?(this,pMVar1->klass->rgctx_data->klass->fields + 1);
    pvVar5 = (void *)*puVar4;
    uVar6 = func_?(this,pMVar1->klass->rgctx_data->klass->fields);
    func_?(&stack0xffffffec,uVar6,method);
    if (pvVar5 == (void *)0x0) {
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pIVar2 = pMVar1->klass->rgctx_data;
    method = (MethodInfo *)&stack0xffffffec;
    if (-1 < (int)(pIVar2[5].method)->return_type) {
      method = unaff_EDI;
    }
    pMVar1 = pIVar2[0xc].method;
    (*pMVar1->invoker_method)(pMVar1->methodPointer,pMVar1,pvVar5,&method,method);
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
  piVar1 = *(int **)(*(int *)(in_stack_2 + 0x10) + 0x60);
  uVar3 = *(undefined4 *)(piVar1[5] + 0x84);
  func_?();
  uVar4 = func_?(this,*(undefined4 *)(*piVar1 + 0x40));
  func_?(&stack0xfffffff0,uVar4,uVar3);
  p_Var4 = (_Il2CppFullySharedGenericType *)func_?(method,&stack0xfffffff0,uVar3);
  return p_Var4;
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

