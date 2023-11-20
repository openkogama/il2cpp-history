
/* Void OnChange(Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
     SpawnRoleReceiverVariable_1_UnityEngine_Vector3__OnChange
               (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *this,Vector3 newValue,
               MethodInfo *method)

{
  this_00 = (this->fields).subscribableVariableExternal;
  if (this_00 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    SubscribableVariable`1[UnityEngine::Vector3]::
    SubscribableVariable_1_UnityEngine_Vector3__set_ValueSet
              (this_00,newValue,method->klass->rgctx_data[5].method);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).subscribableVariableExternal = subscribableVariableExternal;
  func_?(&(this->fields).subscribableVariableExternal,subscribableVariableExternal);
  if (subscribableVariableExternal != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    value = (subscribableVariableExternal->fields)._.value;
    pIVar1 = method->klass->rgctx_data[1].klass;
    if (((uint)pIVar1->vtable[0].methodPtr & 0x100) == 0) {
      pIVar1 = (Il2CppClass *)func_?(pIVar1);
    }
    this_01 = (SubscribableVariable_1_UnityEngine_Vector3_ *)func_?(pIVar1);
    SubscribableVariable`1[UnityEngine::Vector3]::SubscribableVariable_1_UnityEngine_Vector3___ctor
              (this_01,value,method->klass->rgctx_data[6].method);
    (this->fields).subscribableVariable = this_01;
    func_?(&(this->fields).subscribableVariable,this_01);
    this_00 = (SubscribableVariableBase_1_UnityEngine_Vector3_ *)(this->fields).subscribableVariable
    ;
    if (((uint)(method->klass->rgctx_data[8].klass)->vtable[0].methodPtr & 0x100) == 0) {
      func_?();
    }
    this_02 = (SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3_ *)func_?();
    SpawnRoleVariable`1[T]+SubDelegate[UnityEngine::Vector3]::
    SpawnRoleVariable_1_T_SubDelegate_UnityEngine_Vector3___ctor
              (this_02,(Object *)this,method->klass->rgctx_data[7].rgctxDataDummy,
               method->klass->rgctx_data[9].method);
    if (this_00 != (SubscribableVariableBase_1_UnityEngine_Vector3_ *)0x0) {
      SubscribableVariableBase`1[UnityEngine::Vector3]::
      SubscribableVariableBase_1_UnityEngine_Vector3__add_OnChange
                (this_00,(Action_1_UnityEngine_Vector3_ *)this_02,
                 method->klass->rgctx_data[10].method);
      (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
      func_?(&this->fields,spawnRoleDataReceiver);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    this_00 = (this->fields).subscribableVariable;
    if (this_00 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
      SubscribableVariable`1[UnityEngine::Vector3]::
      SubscribableVariable_1_UnityEngine_Vector3__set_ValueSet
                (this_00,value,method->klass->rgctx_data[5].method);
      return;
    }
  }
  func_?();
code_?:
  uVar2 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar2);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,message,method_00);
  func_?(this_01);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

