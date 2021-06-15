
/* SpawnRoleReceiverVariable`1[MV.Common.GamePassTier](SubscribableVariable`1[MV.Common.GamePassTier],
   SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[MV::Common::GamePassTier]::
     SpawnRoleReceiverVariable_1_MV_Common_GamePassTier___ctor
               (SpawnRoleReceiverVariable_1_MV_Common_GamePassTier_ *this,
               SubscribableVariable_1_MV_Common_GamePassTier_ *subscribableVariableExternal,
               SpawnRoleDataReceiver *spawnRoleDataReceiver,MethodInfo *method)

{
  pSVar1 = this;
  if (this != (SpawnRoleReceiverVariable_1_MV_Common_GamePassTier_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
    (this->fields).subscribableVariableExternal = subscribableVariableExternal;
    if (subscribableVariableExternal != (SubscribableVariable_1_MV_Common_GamePassTier_ *)0x0) {
      bVar2 = (**(code **)**(undefined4 **)(method->name + 0x60))
                        (subscribableVariableExternal,
                         (undefined4 *)**(undefined4 **)(method->name + 0x60));
      this = (SpawnRoleReceiverVariable_1_MV_Common_GamePassTier_ *)(uint)bVar2;
      iVar3 = *(int *)(*(int *)(method->name + 0x60) + 4);
      if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
        func_?(iVar3);
      }
      pSVar4 = (SubscribableVariable_1_MV_Common_GamePassTier_ *)func_?(iVar3);
      puVar5 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
      (*(code *)*puVar5)(pSVar4,this,puVar5);
      (pSVar1->fields).subscribableVariable = pSVar4;
      iVar3 = *(int *)(*(int *)(method->name + 0x60) + 0x10);
      if ((*(byte *)(iVar3 + 0xbe) & 1) == 0) {
        func_?(iVar3);
      }
      uVar6 = func_?(iVar3);
      puVar5 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x14);
      (*(code *)*puVar5)(uVar6,pSVar1,*(undefined4 *)(*(int *)(method->name + 0x60) + 0xc),puVar5);
      if (pSVar4 != (SubscribableVariable_1_MV_Common_GamePassTier_ *)0x0) {
        puVar5 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x18);
        (*(code *)*puVar5)(pSVar4,uVar6,puVar5);
        (pSVar1->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
        return;
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void set_Value(GamePassTier) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[MV::Common::GamePassTier]::
     SpawnRoleReceiverVariable_1_MV_Common_GamePassTier__set_Value
               (SpawnRoleReceiverVariable_1_MV_Common_GamePassTier_ *this,GamePassTier__Enum value,
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
    if ((this->fields).subscribableVariable != (SubscribableVariable_1_MV_Common_GamePassTier_ *)0x0
       ) {
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

