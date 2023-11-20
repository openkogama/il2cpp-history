
/* Void OnChange(__Il2CppFullySharedGenericType) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[Unity::IL2CPP::Metadata::
     __Il2CppFullySharedGenericType]::
     SpawnRoleReceiverVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__OnChange
               (SpawnRoleReceiverVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                *this,_Il2CppFullySharedGenericType *newValue,MethodInfo *method)

{
  pMVar1 = method;
  uVar2 = (method->klass->rgctx_data[4].klass)->actualSize;
  func_?();
  method = (MethodInfo *)(this->fields).subscribableVariableExternal;
  p_Var5 = (_Il2CppFullySharedGenericType *)&newValue;
  if ((int)(pMVar1->klass->rgctx_data[4].method)->return_type < 0) {
    p_Var5 = newValue;
  }
  func_?(&stack0xfffffff0,p_Var5,uVar2);
  if (method != (MethodInfo *)0x0) {
    newValue = (_Il2CppFullySharedGenericType *)&stack0xfffffff0;
    if (-1 < (int)(pMVar1->klass->rgctx_data[4].method)->return_type) {
      newValue = unaff_EDI;
    }
    pMVar3 = pMVar1->klass->rgctx_data[5].method;
    (*pMVar3->invoker_method)
              ((pMVar1->klass->rgctx_data[5].method)->methodPointer,pMVar3,method,&newValue,newValue
              );
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  (this->fields).subscribableVariableExternal = subscribableVariableExternal;
  func_?(&(this->fields).subscribableVariableExternal,subscribableVariableExternal);
  pSVar2 = subscribableVariableExternal;
  if (subscribableVariableExternal !=
      (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    pMVar3 = pMVar1->klass->rgctx_data[3].method;
    pSVar4 = (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___Class *)
             &subscribableVariableExternal;
    subscribableVariableExternal =
         (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
         &stack0xfffffff0;
    (*pMVar3->invoker_method)
              ((pMVar1->klass->rgctx_data[3].method)->methodPointer,pMVar3,pSVar2,(void **)pSVar4,
               &stack0xfffffff0);
    subscribableVariableExternal =
         (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
         pMVar1->klass->rgctx_data[1].klass;
    if (((uint)((Il2CppClass *)subscribableVariableExternal)->vtable[0].methodPtr & 0x100) == 0) {
      subscribableVariableExternal =
           (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
           func_?();
    }
    method = (MethodInfo *)func_?();
    subscribableVariableExternal =
         (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
         &stack0xfffffff0;
    if (-1 < (int)(pMVar1->klass->rgctx_data[4].method)->return_type) {
      subscribableVariableExternal =
           (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pSVar4;
    }
    pMVar3 = pMVar1->klass->rgctx_data[6].method;
    (*pMVar3->invoker_method)
              ((pMVar1->klass->rgctx_data[6].method)->methodPointer,pMVar3,method,
               &subscribableVariableExternal,subscribableVariableExternal);
    subscribableVariableExternal =
         (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)method;
    (this->fields).subscribableVariable =
         (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)method;
    func_?();
    subscribableVariableExternal = (this->fields).subscribableVariable;
    in_stack_5 = pMVar1->klass->rgctx_data[8].klass;
    if (((uint)in_stack_5->vtable[0].methodPtr & 0x100) == 0) {
      in_stack_6.dummy = &UNK_?;
      in_stack_5 = (Il2CppClass *)func_?();
    }
    in_stack_6.dummy = &UNK_?;
    spawnRoleDataReceiver = (SpawnRoleDataReceiver *)func_?();
    in_stack_6 = (_union_86)((_union_86 *)(pMVar1->klass->rgctx_data + 9))->type;
    in_stack_7 = pMVar1->klass->rgctx_data[7];
    method = (MethodInfo *)this;
    subscribableVariableExternal =
         (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)&UNK_?
    ;
    (*(code *)(in_stack_6.type)->data)();
    if (subscribableVariableExternal !=
        (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
      (*(pMVar1->klass->rgctx_data[10].method)->methodPointer)(subscribableVariableExternal);
      (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
      func_?(&this->fields,spawnRoleDataReceiver);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  uVar1 = *(undefined4 *)
           (*(int *)(*(int *)(*(int *)((int)in_stack_2 + 0x10) + 0x60) + 0x10) + 0x84);
  func_?();
  pSVar3 = (this->fields).subscribableVariable;
  if (pSVar3 != (SubscribableVariable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    iVar4 = *(int *)(*(int *)(*(int *)((int)in_stack_2 + 0x10) + 0x60) + 0xc);
    piVar5 = (int *)((int)in_stack_2 + 0x10);
    in_stack_2 = &stack0xfffffff0;
    (**(code **)(iVar4 + 8))
              (**(undefined4 **)(*(int *)(*piVar5 + 0x60) + 0xc),iVar4,pSVar3,&stack0x0000000c,
               &stack0xfffffff0);
    p_Var6 = (_Il2CppFullySharedGenericType *)func_?(method,&stack0xfffffff0,uVar1);
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
  uVar2 = (method->klass->rgctx_data[4].klass)->actualSize;
  func_?();
  pSVar3 = (this->fields).spawnRoleDataReceiver;
  if (pSVar3 != (SpawnRoleDataReceiver *)0x0) {
    if ((pSVar3->fields).isActive == 0) goto code_?;
    method = (MethodInfo *)(this->fields).subscribableVariable;
    p_Var7 = (_Il2CppFullySharedGenericType *)&value;
    if ((int)(pMVar1->klass->rgctx_data[4].method)->return_type < 0) {
      p_Var7 = value;
    }
    func_?(&stack0xfffffff0,p_Var7,uVar2);
    pMVar4 = method;
    if (method != (MethodInfo *)0x0) {
      method = (MethodInfo *)&stack0xfffffff0;
      if (-1 < (int)(pMVar1->klass->rgctx_data[4].method)->return_type) {
        method = unaff_EDI;
      }
      pMVar5 = pMVar1->klass->rgctx_data[5].method;
      (*pMVar5->invoker_method)
                ((pMVar1->klass->rgctx_data[5].method)->methodPointer,pMVar5,pMVar4,&method,method);
      return;
    }
  }
  func_?();
code_?:
  uVar6 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar6);
  pMVar1 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,pMVar1);
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

