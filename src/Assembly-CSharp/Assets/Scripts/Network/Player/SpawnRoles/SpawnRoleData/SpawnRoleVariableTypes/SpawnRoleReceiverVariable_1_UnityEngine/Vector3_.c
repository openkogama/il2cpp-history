
/* Void OnChange(Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
     SpawnRoleReceiverVariable_1_UnityEngine_Vector3__OnChange
               (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *this,Vector3 newValue,
               MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariableExternal;
  if (pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x1c);
    (*(code *)*puVar2)(pSVar1,newValue._0_8_,newValue.z,puVar2);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  if (this != (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
    (this->fields).subscribableVariableExternal = subscribableVariableExternal;
    if (subscribableVariableExternal != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
      puVar1 = (undefined8 *)(**(code **)**(undefined4 **)(method->name + 0x60))();
      uVar2 = *puVar1;
      uVar3 = *(undefined4 *)(puVar1 + 1);
      iVar4 = *(int *)(*(int *)(method->name + 0x60) + 4);
      if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
        func_?(iVar4);
      }
      pSVar5 = (SubscribableVariable_1_UnityEngine_Vector3_ *)func_?(iVar4);
      puVar6 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
      (*(code *)*puVar6)(pSVar5,uVar2,uVar3,puVar6);
      (this->fields).subscribableVariable = pSVar5;
      iVar4 = *(int *)(*(int *)(method->name + 0x60) + 0x10);
      if ((*(byte *)(iVar4 + 0xbe) & 1) == 0) {
        func_?(iVar4);
      }
      uVar3 = func_?(iVar4);
      puVar6 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x14);
      (*(code *)*puVar6)(uVar3,this,*(undefined4 *)(*(int *)(method->name + 0x60) + 0xc),puVar6);
      if (pSVar5 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
        (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x18))();
        (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
        return;
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Vector3 get_Value() */

Vector3 * Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
          SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
          SpawnRoleReceiverVariable_1_UnityEngine_Vector3__get_Value
                    (Vector3 *__return_storage_ptr__,
                    SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *this,MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
    puVar2 = (undefined8 *)
             (**(code **)**(undefined4 **)(method->name + 0x60))
                       (auStack_3,pSVar1,(undefined4 *)**(undefined4 **)(method->name + 0x60));
    uVar4 = *puVar2;
    fVar5 = *(float *)(puVar2 + 1);
    __return_storage_ptr__->x = (float)(int)uVar4;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar4 >> 0x20);
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar6)();
  return pVVar7;
}


/* Void set_Value(Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Vector3]::
     SpawnRoleReceiverVariable_1_UnityEngine_Vector3__set_Value
               (SpawnRoleReceiverVariable_1_UnityEngine_Vector3_ *this,Vector3 value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).spawnRoleDataReceiver;
  if (this_00 != (SpawnRoleDataReceiver *)0x0) {
    bVar1 = Mediator::SpawnRoleDataReceiver::SpawnRoleDataReceiver_get_IsActive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
    pSVar2 = (this->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0) {
      puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x1c);
      (*(code *)*puVar3)(pSVar2,value._0_8_,value.z,puVar3);
      return;
    }
  }
  func_?();
code_?:
  this_01 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_01,StringLiteral_SpawnRole_receiver_not_active__P,(MethodInfo *)0x0);
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

