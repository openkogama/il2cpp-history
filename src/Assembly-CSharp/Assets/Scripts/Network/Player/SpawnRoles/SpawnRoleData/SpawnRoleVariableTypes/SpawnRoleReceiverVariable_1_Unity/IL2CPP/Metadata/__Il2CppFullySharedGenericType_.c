
/* Void OnChange(__Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleReceiverVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__OnChange
               (SpawnRoleReceiverVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *newValue,MethodInfo *method)

{
  pIVar1 = method->klass->rgctx_data[4].klass;
  func_?();
  pSVar2 = (this->fields).subscribableVariableExternal;
  iVar3._0_2_ = (pIVar1->byval_arg).attrs;
  iVar3._2_1_ = (pIVar1->byval_arg).type;
  iVar3._3_1_ = (pIVar1->byval_arg).field_0x7;
  p_Var7 = (_Il2CppFullySharedGenericType *)&newValue;
  if (iVar3 < 0) {
    p_Var7 = newValue;
  }
  func_?(&stack0xfffffff4,p_Var7,pIVar1->actualSize);
  if (pSVar2 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pIVar4 = method->klass->rgctx_data;
    newValue = (_Il2CppFullySharedGenericType *)&stack0xfffffff4;
    if (-1 < (int)(pIVar4[4].method)->return_type) {
      newValue = unaff_EDI;
    }
    pMVar5 = pIVar4[5].method;
    (*pMVar5->invoker_method)(pMVar5->methodPointer,pMVar5,pSVar2,&newValue,newValue);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* SpawnRoleReceiverVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType](SubscribableVariable`1[Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType],
   SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleReceiverVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
               (SpawnRoleReceiverVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *subscribableVariableExternal,SpawnRoleDataReceiver *spawnRoleDataReceiver,
               MethodInfo *method)

{
  pMVar1 = method;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)unaff_EDI);
  ppSVar2 = &(this->fields).subscribableVariableExternal;
  *ppSVar2 = subscribableVariableExternal;
  func_?(ppSVar2,subscribableVariableExternal);
  pSVar3 = subscribableVariableExternal;
  if (subscribableVariableExternal !=
      (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pSVar4 = (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class *)
             &subscribableVariableExternal;
    pMVar5 = pMVar1->klass->rgctx_data[3].method;
    subscribableVariableExternal =
         (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
         &stack0xfffffff0;
    (*pMVar5->invoker_method)(pMVar5->methodPointer,pMVar5,pSVar3,(void **)pSVar4,&stack0xfffffff0);
    subscribableVariableExternal =
         (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
         pMVar1->klass->rgctx_data[1].klass;
    if (((uint)((Il2CppClass *)subscribableVariableExternal)->vtable[0].methodPtr & 0x100) == 0) {
      subscribableVariableExternal =
           (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           func_?();
    }
    method = (MethodInfo *)func_?();
    pIVar6 = pMVar1->klass->rgctx_data;
    subscribableVariableExternal =
         (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
         &stack0xfffffff0;
    if (-1 < (int)(pIVar6[4].method)->return_type) {
      subscribableVariableExternal =
           (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pSVar4;
    }
    pMVar5 = pIVar6[6].method;
    (*pMVar5->invoker_method)
              (pMVar5->methodPointer,pMVar5,method,&subscribableVariableExternal,
               subscribableVariableExternal);
    ppSVar2 = &(this->fields).subscribableVariable;
    subscribableVariableExternal =
         (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)method;
    *ppSVar2 = (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)method;
    func_?();
    subscribableVariableExternal = *ppSVar2;
    in_stack_7 = pMVar1->klass->rgctx_data[8].klass;
    if (((uint)in_stack_7->vtable[0].methodPtr & 0x100) == 0) {
      in_stack_8.dummy = &UNK_?;
      in_stack_7 = (Il2CppClass *)func_?();
    }
    in_stack_8.dummy = &UNK_?;
    spawnRoleDataReceiver = (SpawnRoleDataReceiver *)func_?();
    pIVar6 = pMVar1->klass->rgctx_data;
    in_stack_8 = (_union_86)((_union_86 *)(pIVar6 + 9))->type;
    in_stack_9 = pIVar6[7];
    method = (MethodInfo *)this;
    subscribableVariableExternal =
         (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)&UNK_?
    ;
    (*(code *)(in_stack_8.type)->data)();
    if (subscribableVariableExternal !=
        (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      (*(pMVar1->klass->rgctx_data[10].method)->methodPointer)(subscribableVariableExternal);
      (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
      func_?(&this->fields,spawnRoleDataReceiver);
      return;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* __Il2CppFullySharedGenericType get_Value() */

_Il2CppFullySharedGenericType *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[Unity::IL2CPP::Metadata::
__Il2CppFullySharedGenericType]::
SpawnRoleReceiverVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_Value
          (SpawnRoleReceiverVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *this,
          MethodInfo *method)

{
  iVar1 = *(int *)(*(int *)((int)in_stack_2 + 0x10) + 0x60);
  uVar3 = *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x84);
  func_?();
  pSVar4 = (this->fields).subscribableVariable;
  if (pSVar4 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    puVar5 = *(undefined4 **)(iVar1 + 0xc);
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


/* Void set_Value(__Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleReceiverVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__set_Value
               (SpawnRoleReceiverVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *value,MethodInfo *method)

{
  pMVar1 = method;
  pIVar2 = method->klass->rgctx_data[4].klass;
  method = (MethodInfo *)pIVar2->actualSize;
  func_?();
  pSVar3 = (this->fields).spawnRoleDataReceiver;
  if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
    if ((pSVar3->fields).isActive == 0) goto code_?;
    pSVar4 = (this->fields).subscribableVariable;
    iVar5._0_2_ = (pIVar2->byval_arg).attrs;
    iVar5._2_1_ = (pIVar2->byval_arg).type;
    iVar5._3_1_ = (pIVar2->byval_arg).field_0x7;
    p_Var8 = (_Il2CppFullySharedGenericType *)&value;
    if (iVar5 < 0) {
      p_Var8 = value;
    }
    func_?(&stack0xffffffec,p_Var8,method);
    if (pSVar4 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
    {
      pIVar6 = pMVar1->klass->rgctx_data;
      method = (MethodInfo *)&stack0xffffffec;
      if (-1 < (int)(pIVar6[4].method)->return_type) {
        method = unaff_EDI;
      }
      pMVar1 = pIVar6[5].method;
      (*pMVar1->invoker_method)(pMVar1->methodPointer,pMVar1,pSVar4,&method,method);
      return;
    }
  }
  func_?();
code_?:
  uVar7 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar7);
  pMVar1 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,pMVar1);
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

