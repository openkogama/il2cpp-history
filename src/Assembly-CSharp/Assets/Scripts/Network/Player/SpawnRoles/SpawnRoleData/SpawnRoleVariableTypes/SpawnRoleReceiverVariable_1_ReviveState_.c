
/* SpawnRoleReceiverVariable`1[ReviveState](SubscribableVariable`1[ReviveState],
   SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[ReviveState]::
     SpawnRoleReceiverVariable_1_ReviveState___ctor
               (SpawnRoleReceiverVariable_1_ReviveState_ *this,
               SubscribableVariable_1_ReviveState_ *subscribableVariableExternal,
               SpawnRoleDataReceiver *spawnRoleDataReceiver,MethodInfo *method)

{
  if (this != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
    (this->fields).subscribableVariableExternal = subscribableVariableExternal;
    if (subscribableVariableExternal != (SubscribableVariable_1_ReviveState_ *)0x0) {
      uVar1 = (**(code **)**(undefined4 **)(method->name + 0x60))
                        (subscribableVariableExternal,
                         (undefined4 *)**(undefined4 **)(method->name + 0x60));
      iVar2 = *(int *)(*(int *)(method->name + 0x60) + 4);
      if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
        func_?(iVar2);
      }
      pSVar3 = (SubscribableVariable_1_ReviveState_ *)func_?(iVar2);
      puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
      (*(code *)*puVar4)(pSVar3,uVar1,puVar4);
      (this->fields).subscribableVariable = pSVar3;
      iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x10);
      if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
        func_?(iVar2);
      }
      uVar1 = func_?(iVar2);
      puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x14);
      (*(code *)*puVar4)(uVar1,this,*(undefined4 *)(*(int *)(method->name + 0x60) + 0xc),puVar4);
      if (pSVar3 != (SubscribableVariable_1_ReviveState_ *)0x0) {
        puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x18);
        (*(code *)*puVar4)(pSVar3,uVar1,puVar4);
        (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
        return;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_Value(ReviveState) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[ReviveState]::
     SpawnRoleReceiverVariable_1_ReviveState__set_Value
               (SpawnRoleReceiverVariable_1_ReviveState_ *this,ReviveState *value,MethodInfo *method
               )

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
    if ((this->fields).subscribableVariable != (SubscribableVariable_1_ReviveState_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x1c))();
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
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

