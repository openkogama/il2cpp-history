
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
  pIVar2 = method->klass->rgctx_data[9].klass;
  uVar3 = pIVar2->actualSize;
  if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
    func_?(pIVar2);
  }
  func_?();
  func_?();
  func_?();
  func_?();
  func_?(&stack0xffffffe4,0,uVar3);
  pSVar4 = (this->fields).subscribableVariable;
  if (pSVar4 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pMVar5 = pMVar1->klass->rgctx_data[8].method;
    method = (MethodInfo *)&stack0xffffffe4;
    (*pMVar5->invoker_method)(pMVar5->methodPointer,pMVar5,pSVar4,&method,&stack0xffffffe4);
    func_?(&stack0xffffffe4,&stack0xffffffe4,uVar3);
    if ((other != (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) &&
       (pSVar4 = (other->fields).subscribableVariable,
       pSVar4 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0))
    {
      pMVar5 = pMVar1->klass->rgctx_data[8].method;
      method = (MethodInfo *)&stack0xffffffe4;
      (*pMVar5->invoker_method)(pMVar5->methodPointer,pMVar5,pSVar4,&method,&stack0xffffffe4);
      pSVar6 = (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
               func_?(pMVar1->klass->rgctx_data[9].rgctxDataDummy,&stack0xffffffe4);
      pIVar7 = pMVar1->klass->rgctx_data;
      pIVar2 = pIVar7[9].klass;
      pvVar8 = pIVar7[0x10].rgctxDataDummy;
      if (((uint)pIVar2->vtable[0].methodPtr & 0x100) == 0) {
        pIVar2 = (Il2CppClass *)func_?(pIVar2);
      }
      this = pSVar6;
      func_?(pIVar2,pvVar8,&stack0xffffffe4,&stack0xffffffe4,&this,(int)&method + 3);
      return method._3_1_;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
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

int32_t Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
        SpawnRoleVariableTypes::SpawnRoleVariable`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__GetHashCode
                  (SpawnRoleVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
                  MethodInfo *method)

{
  pMVar1 = method->klass->rgctx_data[3].method;
  cVar2 = (*pMVar1->methodPointer)((this->fields).subscribableVariable,0,pMVar1);
  if (cVar2 == '\0') {
    return 0;
  }
  pSVar3 = (this->fields).subscribableVariable;
  if (pSVar3 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    iVar4 = (*(code *)(pSVar3->klass->vtable).GetHashCode.method)
                      (pSVar3,(pSVar3->klass->vtable).ToString.methodPtr);
    return iVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
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
  pIVar2 = method->klass->rgctx_data[9].klass;
  method = (MethodInfo *)pIVar2->actualSize;
  func_?();
  pSVar3 = (this->fields).OnChange;
  if (pSVar3 != (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)0x0) {
    iVar4._0_2_ = (pIVar2->byval_arg).attrs;
    iVar4._2_1_ = (pIVar2->byval_arg).type;
    iVar4._3_1_ = (pIVar2->byval_arg).field_0x7;
    p_Var6 = (_Il2CppFullySharedGenericType *)&value;
    if (iVar4 < 0) {
      p_Var6 = value;
    }
    func_?(&stack0xffffffec,p_Var6,method);
    pIVar5 = pMVar1->klass->rgctx_data;
    method = (MethodInfo *)&stack0xffffffec;
    if (-1 < (int)(pIVar5[9].method)->return_type) {
      method = unaff_EDI;
    }
    pMVar1 = pIVar5[0xf].method;
    (*pMVar1->invoker_method)(pMVar1->methodPointer,pMVar1,pSVar3,&method,method);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)unaff_EDI);
  p_Var7 = (_Il2CppFullySharedGenericType *)&value;
  if ((int)(pMVar1->klass->rgctx_data[9].method)->return_type < 0) {
    p_Var7 = value;
  }
  func_?(&stack0xfffffff0,p_Var7,uVar2);
  if (((uint)(pMVar1->klass->rgctx_data[2].klass)->vtable[0].methodPtr & 0x100) == 0) {
    func_?();
  }
  p_Var8 = (_Il2CppFullySharedGenericType__Class *)&UNK_?;
  method = (MethodInfo *)func_?();
  pIVar3 = pMVar1->klass->rgctx_data;
  value = (_Il2CppFullySharedGenericType *)&stack0xfffffff0;
  if (-1 < (int)(pIVar3[9].method)->return_type) {
    value = (_Il2CppFullySharedGenericType *)p_Var8;
  }
  pMVar4 = pIVar3[10].method;
  (*pMVar4->invoker_method)(pMVar4->methodPointer,pMVar4,method,&value,value);
  (this->fields).subscribableVariable =
       (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)method;
  func_?();
  pSVar5 = (this->fields).subscribableVariable;
  value = (_Il2CppFullySharedGenericType *)pMVar1->klass->rgctx_data[0xc].klass;
  if (((uint)((Il2CppClass *)value)->vtable[0].methodPtr & 0x100) == 0) {
    value = (_Il2CppFullySharedGenericType *)func_?();
  }
  func_?();
  (*(pMVar1->klass->rgctx_data[0xd].method)->methodPointer)();
  if (pSVar5 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    value = (_Il2CppFullySharedGenericType *)pMVar1->klass->rgctx_data[0xe].method;
    (*(code *)((MethodInfo *)value)->methodPointer)();
    return;
  }
  value = (_Il2CppFullySharedGenericType *)&UNK_?;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  ppSVar1 = &(this->fields).OnChange;
  a = *ppSVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pIVar3 = method->klass->rgctx_data[6].klass;
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
    pSVar6 = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
              *)func_?(ppSVar1,iVar4,a);
    bVar7 = pSVar6 != a;
    a = pSVar6;
  } while (bVar7);
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
  iVar1 = *(int *)(*(int *)((int)in_stack_2 + 0x10) + 0x60);
  uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x84);
  func_?();
  pSVar4 = (this->fields).subscribableVariable;
  if (pSVar4 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    puVar5 = *(undefined4 **)(iVar1 + 0x20);
    in_stack_2 = &stack0xfffffff0;
    (*(code *)puVar5[2])(*puVar5,puVar5,pSVar4,&stack0x0000000c,&stack0xfffffff0);
    p_Var6 = (_Il2CppFullySharedGenericType *)func_?(method,&stack0xfffffff0,uVar3);
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
  ppSVar1 = &(this->fields).OnChange;
  source = *ppSVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pIVar3 = method->klass->rgctx_data[6].klass;
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
    pSVar6 = (SpawnRoleVariable_1_T_SubDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
              *)func_?(ppSVar1,iVar4,source);
    bVar7 = pSVar6 != source;
    source = pSVar6;
  } while (bVar7);
  return;
}

