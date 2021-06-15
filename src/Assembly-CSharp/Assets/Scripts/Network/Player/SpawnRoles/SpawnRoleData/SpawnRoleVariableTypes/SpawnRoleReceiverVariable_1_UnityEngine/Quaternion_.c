
/* Void OnChange(Quaternion) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
     SpawnRoleReceiverVariable_1_UnityEngine_Quaternion__OnChange
               (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *this,Quaternion newValue,
               MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariableExternal;
  if (pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x1c);
    (*(code *)*puVar2)(pSVar1,newValue.x,newValue.y,newValue.z,newValue.w,puVar2);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* SpawnRoleReceiverVariable`1[UnityEngine.Quaternion](SubscribableVariable`1[UnityEngine.Quaternion],
   SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
     SpawnRoleReceiverVariable_1_UnityEngine_Quaternion___ctor
               (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *this,
               SubscribableVariable_1_UnityEngine_Quaternion_ *subscribableVariableExternal,
               SpawnRoleDataReceiver *spawnRoleDataReceiver,MethodInfo *method)

{
  if (this != (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
    (this->fields).subscribableVariableExternal = subscribableVariableExternal;
    if (subscribableVariableExternal != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
      puVar1 = (undefined4 *)
               (**(code **)**(undefined4 **)(method->name + 0x60))
                         (&uStack_2,subscribableVariableExternal,
                          (undefined4 *)**(undefined4 **)(method->name + 0x60));
      uStack_2 = *puVar1;
      uStack_3 = puVar1[1];
      uStack_4 = puVar1[2];
      uStack_5 = puVar1[3];
      iVar6 = *(int *)(*(int *)(method->name + 0x60) + 4);
      if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
        func_?(iVar6);
      }
      pSVar7 = (SubscribableVariable_1_UnityEngine_Quaternion_ *)func_?(iVar6);
      puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
      (*(code *)*puVar1)(pSVar7,uStack_2,uStack_3,uStack_4,uStack_5,puVar1);
      (this->fields).subscribableVariable = pSVar7;
      iVar6 = *(int *)(*(int *)(method->name + 0x60) + 0x10);
      if ((*(byte *)(iVar6 + 0xbe) & 1) == 0) {
        func_?(iVar6);
      }
      uVar8 = func_?(iVar6);
      puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x14);
      (*(code *)*puVar1)(uVar8,this,*(undefined4 *)(*(int *)(method->name + 0x60) + 0xc),puVar1);
      if (pSVar7 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
        puVar1 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x18);
        (*(code *)*puVar1)(pSVar7,uVar8,puVar1);
        (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
        return;
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Quaternion get_Value() */

Quaternion *
Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
SpawnRoleReceiverVariable_1_UnityEngine_Quaternion__get_Value
          (Quaternion *__return_storage_ptr__,
          SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *this,MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariable;
  if (pSVar1 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
    pfVar2 = (float *)(**(code **)**(undefined4 **)(method->name + 0x60))
                                (auStack_3,pSVar1,
                                 (undefined4 *)**(undefined4 **)(method->name + 0x60));
    fVar4 = pfVar2[1];
    fVar5 = pfVar2[2];
    fVar6 = pfVar2[3];
    __return_storage_ptr__->x = *pfVar2;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    __return_storage_ptr__->w = fVar6;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pQVar8 = (Quaternion *)(*pcVar7)();
  return pQVar8;
}


/* Void set_Value(Quaternion) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[UnityEngine::Quaternion]::
     SpawnRoleReceiverVariable_1_UnityEngine_Quaternion__set_Value
               (SpawnRoleReceiverVariable_1_UnityEngine_Quaternion_ *this,Quaternion value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).spawnRoleDataReceiver;
  if (this_00 != (SpawnRoleDataReceiver *)0x0) {
    bVar1 = Mediator::SpawnRoleDataReceiver::SpawnRoleDataReceiver_get_IsActive
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
    pSVar2 = (this->fields).subscribableVariable;
    if (pSVar2 != (SubscribableVariable_1_UnityEngine_Quaternion_ *)0x0) {
      puVar3 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x1c);
      (*(code *)*puVar3)(pSVar2,value.x,value.y,value.z,value.w,puVar3);
      return;
    }
  }
  func_?(0);
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

