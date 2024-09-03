
/* Void OnChange(Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
     SpawnRoleReceiverVariable_1_UnityEngine_Vector3__OnChange
               (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *this,Vector3 newValue,
               MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariableExternal;
  if (pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    pAVar2 = (pSVar1->fields)._.OnChange;
    (pSVar1->fields)._.value.x = newValue.x;
    (pSVar1->fields)._.value.y = newValue.y;
    (pSVar1->fields)._.value.z = newValue.z;
    if (pAVar2 != (Action_1_UnityEngine_Vector3_ *)0x0) {
      pAVar2 = (pSVar1->fields)._.OnChange;
      (*(pAVar2->fields)._._.invoke_impl)((pAVar2->fields)._._.method_code,newValue._0_8_);
    }
    return;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* SpawnRoleReceiverVariable`1[UnityEngine.Vector3](SubscribableVariable`1[UnityEngine.Vector3],
   SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
     SpawnRoleReceiverVariable_1_UnityEngine_Vector3___ctor
               (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *this,
               SubscribableVariable_1_UnityEngine_Vector3_ *subscribableVariableExternal,
               SpawnRoleDataReceiver *spawnRoleDataReceiver,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).subscribableVariableExternal = subscribableVariableExternal;
  func_?(&(this->fields).subscribableVariableExternal,subscribableVariableExternal);
  if (subscribableVariableExternal != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    fVar1 = (subscribableVariableExternal->fields)._.value.z;
    uVar2._0_4_ = (subscribableVariableExternal->fields)._.value.x;
    uStack_3 = (subscribableVariableExternal->fields)._.value.y;
    method_00 = method->klass->rgctx_data[1].method;
    if ((method_00[3].slot & 0x100) == 0) {
      method_00 = (MethodInfo *)func_?(method_00);
    }
    pSVar4 = (SubscribableVariable_1_UnityEngine_Vector3_ *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)pSVar4,ExceptionArgument__Enum_obj,method_00);
    uStack_3 = (undefined4)((ulonglong)uVar2 >> 0x20);
    (pSVar4->fields)._.value.x = (float)(undefined4)uVar2;
    (pSVar4->fields)._.value.y = (float)uStack_3;
    (pSVar4->fields)._.value.z = fVar1;
    (this->fields).subscribableVariable = pSVar4;
    func_?(&(this->fields).subscribableVariable,pSVar4);
    pSVar4 = (this->fields).subscribableVariable;
    pIVar5 = method->klass->rgctx_data[8].klass;
    if (((uint)pIVar5->vtable[0].methodPtr & 0x100) == 0) {
      pIVar5 = (Il2CppClass *)func_?(pIVar5);
    }
    this_00 = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)func_?(pIVar5);
    SpawnRoleVariable`1[T]+SubDelegate[UnityEngine::Vector3]::
    SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3___ctor
              (this_00,(Object *)this,method->klass->rgctx_data[7].rgctxDataDummy,
               method->klass->rgctx_data[9].method);
    if (pSVar4 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
      func_?(pSVar4,this_00,method->klass->rgctx_data[10].rgctxDataDummy);
      (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
      func_?(&this->fields,spawnRoleDataReceiver);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Vector3 get_Value() */

Vector3 * Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
          SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
          SpawnRoleReceiverVariable_1_UnityEngine_Vector3__get_Value
                    (Vector3 *__return_storage_ptr__,
                    SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pSVar2 = (this->fields).subscribableVariable;
  if (pSVar2 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    fVar3 = (pSVar2->fields)._.value.y;
    fVar4 = (pSVar2->fields)._.value.z;
    __return_storage_ptr__->x = (pSVar2->fields)._.value.x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
}


/* Void set_Value(Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
     SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
               (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *this,Vector3 value,
               MethodInfo *method)

{
  pSVar1 = (this->fields).spawnRoleDataReceiver;
  if (pSVar1 != (SpawnRoleDataReceiver *)0x0) {
    if ((pSVar1->fields).isActive == 0) goto code_?;
    pSVar2 = (this->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
      pAVar3 = (pSVar2->fields)._.OnChange;
      (pSVar2->fields)._.value.x = value.x;
      (pSVar2->fields)._.value.y = value.y;
      (pSVar2->fields)._.value.z = value.z;
      if (pAVar3 != (Action_1_UnityEngine_Vector3_ *)0x0) {
        pAVar3 = (pSVar2->fields)._.OnChange;
        (*(pAVar3->fields)._._.invoke_impl)
                  ((pAVar3->fields)._._.method_code,value._0_8_,value.z,(pAVar3->fields)._._.method)
        ;
      }
      return;
    }
  }
  func_?();
code_?:
  uVar4 = func_?(&TypeInfo__System__Exception);
  this_00 = (Exception *)func_?(uVar4);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  func_?(this_00);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

