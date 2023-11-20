
/* Boolean Equals(SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Equals
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *other,
               MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[9].klass)->actualSize;
  pIVar3 = method->klass->rgctx_data[9].klass;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pIVar3);
  }
  func_?();
  func_?();
  method = (MethodInfo *)&stack0xffffffe8;
  func_?();
  func_?();
  func_?(&stack0xffffffe8,0,uVar2);
  pSVar4 = (this->fields).subscribableVariable;
  if (pSVar4 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pMVar5 = pMVar1->klass->rgctx_data[8].method;
    this = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)method;
    (*pMVar5->invoker_method)
              ((pMVar1->klass->rgctx_data[8].method)->methodPointer,pMVar5,pSVar4,&this,method);
    func_?(&stack0xffffffe8,method,uVar2);
    if ((other != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) &&
       (pSVar4 = (other->fields).subscribableVariable,
       pSVar4 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0))
    {
      pMVar5 = pMVar1->klass->rgctx_data[8].method;
      method = (MethodInfo *)&stack0xffffffe8;
      (*pMVar5->invoker_method)
                ((pMVar1->klass->rgctx_data[8].method)->methodPointer,pMVar5,pSVar4,&method,
                 &stack0xffffffe8);
      pSVar6 = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               func_?(pMVar1->klass->rgctx_data[9].rgctxDataDummy,&stack0xffffffe8);
      pvVar7 = pMVar1->klass->rgctx_data[0x10].rgctxDataDummy;
      pIVar3 = pMVar1->klass->rgctx_data[9].klass;
      if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
        pIVar3 = (Il2CppClass *)func_?(pIVar3);
      }
      this = pSVar6;
      func_?(pIVar3,pvVar7,&stack0xffffffe8,&stack0xffffffe8,&this,(int)&method + 3);
      return method._3_1_;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Boolean Equals(Object) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Equals_1
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 0;
  }
  if (this == (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)obj) {
    return 1;
  }
  left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(obj,(MethodInfo *)0x0);
  if (this != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
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

int32_t Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
        SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__GetHashCode
                  (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                  MethodInfo *method)

{
  cVar1 = (*(method->klass->rgctx_data[3].method)->methodPointer)
                    ((this->fields).subscribableVariable,0,
                     method->klass->rgctx_data[3].rgctxDataDummy);
  if (cVar1 == '\0') {
    return 0;
  }
  pSVar2 = (this->fields).subscribableVariable;
  if (pSVar2 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    iVar3 = (*(code *)(pSVar2->klass->vtable).GetHashCode.method)
                      (pSVar2,(pSVar2->klass->vtable).ToString.methodPtr);
    return iVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  iVar3 = (*pcVar4)();
  return iVar3;
}


/* Void SubscribableVariableOnOnChange(__Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__SubscribableVariableOnOnChange
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[9].klass)->actualSize;
  func_?();
  if ((this->fields).OnChange !=
      (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
  {
    pSVar3 = (this->fields).OnChange;
    p_Var5 = (_Il2CppFullySharedGenericType *)&value;
    if ((int)(pMVar1->klass->rgctx_data[9].method)->return_type < 0) {
      p_Var5 = value;
    }
    func_?(&stack0xfffffff0,p_Var5,uVar2);
    method = (MethodInfo *)&stack0xfffffff0;
    if (-1 < (int)(pMVar1->klass->rgctx_data[9].method)->return_type) {
      method = unaff_EDI;
    }
    pMVar4 = pMVar1->klass->rgctx_data[0xf].method;
    (*pMVar4->invoker_method)
              ((pMVar1->klass->rgctx_data[0xf].method)->methodPointer,pMVar4,pSVar3,&method,method);
  }
  return;
}


/* SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](__Il2CppFullySharedGenericType)
    */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               _Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[9].klass)->actualSize;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)unaff_EDI);
  p_Var6 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(pMVar1->klass->rgctx_data[9].method)->return_type < 0) {
    p_Var6 = value;
  }
  func_?(&stack0xfffffff0,p_Var6,uVar2);
  if (((uint)(pMVar1->klass->rgctx_data[2].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?();
  }
  p_Var7 = (_Il2CppFullySharedGenericType__Class *)&UNK_?;
  pSVar3 = (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           func_?();
  value = (_Il2CppFullySharedGenericType *)&stack0xfffffff0;
  if (-1 < (int)(pMVar1->klass->rgctx_data[9].method)->return_type) {
    value = (_Il2CppFullySharedGenericType *)p_Var7;
  }
  pMVar4 = pMVar1->klass->rgctx_data[10].method;
  (*pMVar4->invoker_method)
            ((pMVar1->klass->rgctx_data[10].method)->methodPointer,pMVar4,pSVar3,&value,value);
  (this->fields).subscribableVariable = pSVar3;
  func_?();
  pSVar3 = (this->fields).subscribableVariable;
  value = (_Il2CppFullySharedGenericType *)pMVar1->klass->rgctx_data[0xc].klass;
  if (((uint)((Il2CppClass *)value)->vtable[0].methodPtr & 0x100) == 0) {
    value = (_Il2CppFullySharedGenericType *)func_?();
  }
  func_?();
  (*(pMVar1->klass->rgctx_data[0xd].method)->methodPointer)();
  if (pSVar3 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    value = (_Il2CppFullySharedGenericType *)pMVar1->klass->rgctx_data[0xe].method;
    (*(code *)((MethodInfo *)value)->methodPointer)();
    return;
  }
  value = (_Il2CppFullySharedGenericType *)&UNK_?;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void 
   add_OnChange(SpawnRoleVariable`1[T]+SubDelegate[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__add_OnChange
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *value,MethodInfo *method)

{
  a = (this->fields).OnChange;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pIVar2 = method->klass->rgctx_data[6].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    if (pDVar1 == (Delegate *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = func_?(pDVar1,pIVar2);
      if (iVar3 == 0) {
        func_?(pDVar1,pIVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pSVar5 = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
              *)func_?(&(this->fields).OnChange,iVar3,a);
    bVar6 = pSVar5 != a;
    a = pSVar5;
  } while (bVar6);
  return;
}


/* __Il2CppFullySharedGenericType get_Value() */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
::SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Value
          (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  uVar1 = *(undefined4 *)
           (*(int *)(*(int *)(*(int *)((int)in_stack_2 + 0x10) + 0x60) + 0x24) + 0x84);
  func_?();
  pSVar3 = (this->fields).subscribableVariable;
  if (pSVar3 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    iVar4 = *(int *)(*(int *)(*(int *)((int)in_stack_2 + 0x10) + 0x60) + 0x20);
    piVar5 = (int *)((int)in_stack_2 + 0x10);
    in_stack_2 = &stack0xfffffff0;
    (**(code **)(iVar4 + 8))
              (**(undefined4 **)(*(int *)(*piVar5 + 0x60) + 0x20),iVar4,pSVar3,&stack0x0000000c,
               &stack0xfffffff0);
    p_Var6 = (_Il2CppFullySharedGenericType *)func_?(method,&stack0xfffffff0,uVar1);
    return p_Var6;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  p_Var6 = (_Il2CppFullySharedGenericType *)(*pcVar6)();
  return p_Var6;
}


/* Boolean op_Equality(__Il2CppFullySharedGenericType,
   SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Equality
               (_Il2CppFullySharedGenericType *b,
               SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               MethodInfo *method)

{
  pMVar1 = method;
  pIVar2 = method->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  if (((uint)(pIVar2->rgctx_data[9].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pIVar2->rgctx_data[9].klass);
  }
  func_?();
  if (((uint)pMVar1->klass->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pMVar1->klass);
  }
  func_?();
  if ((a != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) &&
     (pSVar3 = (a->fields).subscribableVariable,
     pSVar3 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)) {
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    method = pIVar2->rgctx_data[8].method;
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    ppIVar4 = &method->invoker_method;
    pMVar5 = method;
    method = (MethodInfo *)&stack0xffffffec;
    (**ppIVar4)((pIVar2->rgctx_data[8].method)->methodPointer,pMVar5,pSVar3,&method,&stack0xffffffec
               );
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    method = (MethodInfo *)func_?(pIVar2->rgctx_data[9].rgctxDataDummy,&stack0xffffffec);
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar6 = pMVar1->klass;
    p_Var10 = (_Il2CppFullySharedGenericType *)&b;
    if ((int)(pIVar2->rgctx_data[9].method)->return_type < 0) {
      p_Var10 = b;
    }
    if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
      pIVar6 = (Il2CppClass *)func_?(pIVar6);
    }
    pvVar7 = pIVar6->rgctx_data[0x10].rgctxDataDummy;
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[9].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    a = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)method;
    func_?(pIVar2,pvVar7,&stack0xffffffec,p_Var10,&a,(int)&method + 3);
    return method._3_1_;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Boolean op_Equality(SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   __Il2CppFullySharedGenericType) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Equality_1
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               _Il2CppFullySharedGenericType *b,MethodInfo *method)

{
  pMVar1 = method;
  pIVar2 = method->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  if (((uint)(pIVar2->rgctx_data[9].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pIVar2->rgctx_data[9].klass);
  }
  func_?();
  if (((uint)pMVar1->klass->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pMVar1->klass);
  }
  func_?();
  if ((a != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) &&
     (pSVar3 = (a->fields).subscribableVariable,
     pSVar3 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)) {
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    method = pIVar2->rgctx_data[8].method;
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    ppIVar4 = &method->invoker_method;
    pMVar5 = method;
    method = (MethodInfo *)&stack0xffffffec;
    (**ppIVar4)((pIVar2->rgctx_data[8].method)->methodPointer,pMVar5,pSVar3,&method,&stack0xffffffec
               );
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    method = (MethodInfo *)func_?(pIVar2->rgctx_data[9].rgctxDataDummy,&stack0xffffffec);
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar6 = pMVar1->klass;
    p_Var10 = (_Il2CppFullySharedGenericType *)&b;
    if ((int)(pIVar2->rgctx_data[9].method)->return_type < 0) {
      p_Var10 = b;
    }
    if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
      pIVar6 = (Il2CppClass *)func_?(pIVar6);
    }
    pvVar7 = pIVar6->rgctx_data[0x10].rgctxDataDummy;
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[9].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    a = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)method;
    func_?(pIVar2,pvVar7,&stack0xffffffec,p_Var10,&a,(int)&method + 3);
    return method._3_1_;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Boolean op_Equality(SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Equality_2
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *b,
               MethodInfo *method)

{
  pMVar1 = method;
  pIVar2 = method->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  uVar3 = (pIVar2->rgctx_data[9].klass)->actualSize;
  pIVar2 = pMVar1->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  if (((uint)(pIVar2->rgctx_data[9].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pIVar2->rgctx_data[9].klass);
  }
  func_?();
  func_?();
  method = (MethodInfo *)&stack0xffffffe4;
  func_?();
  func_?();
  func_?(&stack0xffffffe4,0,uVar3);
  if ((a != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) &&
     (pSVar4 = (a->fields).subscribableVariable,
     pSVar4 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)) {
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    a = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
        pIVar2->rgctx_data[8].method;
    pIVar2 = pMVar1->klass;
    pMVar5 = (MethodInfo *)a;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
      pMVar5 = (MethodInfo *)a;
    }
    a = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)method;
    (*(code *)((SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Fields *)
              &pMVar5->invoker_method)->subscribableVariable)
              ((pIVar2->rgctx_data[8].method)->methodPointer,pMVar5,pSVar4,&a,method);
    func_?(&stack0xffffffe4,method,uVar3);
    if ((b != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) &&
       (pSVar4 = (b->fields).subscribableVariable,
       pSVar4 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0))
    {
      pIVar2 = pMVar1->klass;
      if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pMVar5 = pIVar2->rgctx_data[8].method;
      pIVar2 = pMVar1->klass;
      if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      method = (MethodInfo *)&stack0xffffffe4;
      (*pMVar5->invoker_method)
                ((pIVar2->rgctx_data[8].method)->methodPointer,pMVar5,pSVar4,&method,
                 &stack0xffffffe4);
      pIVar2 = pMVar1->klass;
      if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pSVar6 = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               func_?(pIVar2->rgctx_data[9].rgctxDataDummy,&stack0xffffffe4);
      pIVar2 = pMVar1->klass;
      if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pvVar7 = pIVar2->rgctx_data[0x10].rgctxDataDummy;
      pIVar2 = pMVar1->klass;
      if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      pIVar2 = pIVar2->rgctx_data[9].klass;
      if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      a = pSVar6;
      func_?(pIVar2,pvVar7,&stack0xffffffe4,&stack0xffffffe4,&a,(int)&method + 3);
      return method._3_1_;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* __Il2CppFullySharedGenericType
   op_Implicit(SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
::SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Implicit
          (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *s,
          MethodInfo *method)

{
  iVar1 = (int)in_stack_2;
  iVar3 = *(int *)((int)in_stack_2 + 0x10);
  if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = func_?(iVar3);
  }
  uVar4 = *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x60) + 0x24) + 0x84);
  func_?();
  if ((s != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) &&
     (pSVar5 = (s->fields).subscribableVariable,
     pSVar5 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)) {
    iVar3 = *(int *)((int)in_stack_2 + 0x10);
    in_stack_2 = &stack0xffffffec;
    if ((*(byte *)(iVar3 + 0xbd) & 1) == 0) {
      in_stack_2 = &stack0xffffffec;
      iVar3 = func_?(iVar3);
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 0x20);
    iVar1 = *(int *)(iVar1 + 0x10);
    if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_?(iVar1);
    }
    puVar6 = in_stack_2;
    (**(code **)(iVar3 + 8))
              (**(undefined4 **)(*(int *)(iVar1 + 0x60) + 0x20),iVar3,pSVar5,&stack0x0000000c,
               in_stack_2);
    p_Var7 = (_Il2CppFullySharedGenericType *)func_?(method,puVar6,uVar4);
    return p_Var7;
  }
  in_stack_2 = &stack0xffffffec;
  func_?();
  pcVar7 = (code *)swi(3);
  p_Var7 = (_Il2CppFullySharedGenericType *)(*pcVar7)();
  return p_Var7;
}


/* Boolean op_Inequality(__Il2CppFullySharedGenericType,
   SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Inequality
               (_Il2CppFullySharedGenericType *b,
               SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               MethodInfo *method)

{
  pMVar1 = method;
  pIVar2 = method->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  if (((uint)(pIVar2->rgctx_data[9].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pIVar2->rgctx_data[9].klass);
  }
  func_?();
  if (((uint)pMVar1->klass->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pMVar1->klass);
  }
  func_?();
  if ((a != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) &&
     (pSVar3 = (a->fields).subscribableVariable,
     pSVar3 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)) {
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    method = pIVar2->rgctx_data[8].method;
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    ppIVar4 = &method->invoker_method;
    pMVar5 = method;
    method = (MethodInfo *)&stack0xffffffec;
    (**ppIVar4)((pIVar2->rgctx_data[8].method)->methodPointer,pMVar5,pSVar3,&method,&stack0xffffffec
               );
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    method = (MethodInfo *)func_?(pIVar2->rgctx_data[9].rgctxDataDummy,&stack0xffffffec);
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar6 = pMVar1->klass;
    p_Var10 = (_Il2CppFullySharedGenericType *)&b;
    if ((int)(pIVar2->rgctx_data[9].method)->return_type < 0) {
      p_Var10 = b;
    }
    if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
      pIVar6 = (Il2CppClass *)func_?(pIVar6);
    }
    pvVar7 = pIVar6->rgctx_data[0x10].rgctxDataDummy;
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[9].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    a = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)method;
    func_?(pIVar2,pvVar7,&stack0xffffffec,p_Var10,&a,(int)&method + 3);
    return method._3_1_ == '\0';
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   __Il2CppFullySharedGenericType) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Inequality_1
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               _Il2CppFullySharedGenericType *b,MethodInfo *method)

{
  pMVar1 = method;
  pIVar2 = method->klass;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    pIVar2 = (Il2CppClass *)func_?(pIVar2);
  }
  if (((uint)(pIVar2->rgctx_data[9].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pIVar2->rgctx_data[9].klass);
  }
  func_?();
  if (((uint)pMVar1->klass->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pMVar1->klass);
  }
  func_?();
  if ((a != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) &&
     (pSVar3 = (a->fields).subscribableVariable,
     pSVar3 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)) {
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    method = pIVar2->rgctx_data[8].method;
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    ppIVar4 = &method->invoker_method;
    pMVar5 = method;
    method = (MethodInfo *)&stack0xffffffec;
    (**ppIVar4)((pIVar2->rgctx_data[8].method)->methodPointer,pMVar5,pSVar3,&method,&stack0xffffffec
               );
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    method = (MethodInfo *)func_?(pIVar2->rgctx_data[9].rgctxDataDummy,&stack0xffffffec);
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar6 = pMVar1->klass;
    p_Var10 = (_Il2CppFullySharedGenericType *)&b;
    if ((int)(pIVar2->rgctx_data[9].method)->return_type < 0) {
      p_Var10 = b;
    }
    if (((uint)pIVar6->vtable[0].methodPtr & 0x100) == 0) {
      pIVar6 = (Il2CppClass *)func_?(pIVar6);
    }
    pvVar7 = pIVar6->rgctx_data[0x10].rgctxDataDummy;
    pIVar2 = pMVar1->klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    pIVar2 = pIVar2->rgctx_data[9].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    a = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)method;
    func_?(pIVar2,pvVar7,&stack0xffffffec,p_Var10,&a,(int)&method + 3);
    return method._3_1_ == '\0';
  }
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Boolean op_Inequality(SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   SpawnRoleVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType]) */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__op_Inequality_2
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *a,
               SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *b,
               MethodInfo *method)

{
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  pIVar2 = (pIVar1->rgctx_data[0x11].method)->methodPointer;
  pIVar1 = method->klass;
  if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
    pIVar1 = (Il2CppClass *)func_?(pIVar1);
  }
  cVar3 = (*pIVar2)(a,b,pIVar1->rgctx_data[0x11].rgctxDataDummy);
  return cVar3 == '\0';
}


/* Void 
   remove_OnChange(SpawnRoleVariable`1[T]+SubDelegate[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType])
    */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__remove_OnChange
               (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
               SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *value,MethodInfo *method)

{
  source = (this->fields).OnChange;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pIVar2 = method->klass->rgctx_data[6].klass;
    if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
      pIVar2 = (Il2CppClass *)func_?(pIVar2);
    }
    if (pDVar1 == (Delegate *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = func_?(pDVar1,pIVar2);
      if (iVar3 == 0) {
        func_?(pDVar1,pIVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pSVar5 = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
              *)func_?(&(this->fields).OnChange,iVar3,source);
    bVar6 = pSVar5 != source;
    source = pSVar5;
  } while (bVar6);
  return;
}

