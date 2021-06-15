
/* Void OnChange(Single) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
     SpawnRoleReceiverVariable_1_System_Single__OnChange
               (SpawnRoleReceiverVariable_1_System_Single_ *this,float newValue,MethodInfo *method)

{
  pSVar1 = (this->fields).subscribableVariableExternal;
  if (pSVar1 != (SubscribableVariable_1_System_Single_ *)0x0) {
    puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x1c);
    (*(code *)*puVar2)(pSVar1,newValue,puVar2);
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* SpawnRoleReceiverVariable`1[System.Single](SubscribableVariable`1[System.Single],
   SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
     SpawnRoleReceiverVariable_1_System_Single___ctor
               (SpawnRoleReceiverVariable_1_System_Single_ *this,
               SubscribableVariable_1_System_Single_ *subscribableVariableExternal,
               SpawnRoleDataReceiver *spawnRoleDataReceiver,MethodInfo *method)

{
  if (this != (SpawnRoleReceiverVariable_1_System_Single_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
    (this->fields).subscribableVariableExternal = subscribableVariableExternal;
    if (subscribableVariableExternal != (SubscribableVariable_1_System_Single_ *)0x0) {
      fVar1 = (float10)(**(code **)**(undefined4 **)(method->name + 0x60))
                                 (subscribableVariableExternal,
                                  (undefined4 *)**(undefined4 **)(method->name + 0x60));
      iVar2 = *(int *)(*(int *)(method->name + 0x60) + 4);
      if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
        func_?(iVar2);
      }
      pSVar3 = (SubscribableVariable_1_System_Single_ *)func_?(iVar2);
      puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
      (*(code *)*puVar4)(pSVar3,(float)fVar1,puVar4);
      (this->fields).subscribableVariable = pSVar3;
      iVar2 = *(int *)(*(int *)(method->name + 0x60) + 0x10);
      if ((*(byte *)(iVar2 + 0xbe) & 1) == 0) {
        func_?(iVar2);
      }
      uVar5 = func_?(iVar2);
      puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x14);
      (*(code *)*puVar4)(uVar5,this,*(undefined4 *)(*(int *)(method->name + 0x60) + 0xc),puVar4);
      if (pSVar3 != (SubscribableVariable_1_System_Single_ *)0x0) {
        puVar4 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0x18);
        (*(code *)*puVar4)(pSVar3,uVar5,puVar4);
        (this->fields).spawnRoleDataReceiver = spawnRoleDataReceiver;
        return;
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Single get_Value() */

float Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
      SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
      SpawnRoleReceiverVariable_1_System_Single__get_Value
                (SpawnRoleReceiverVariable_1_System_Single_ *this,MethodInfo *method)

{
  if ((this->fields).subscribableVariable != (SubscribableVariable_1_System_Single_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float10)(**(code **)**(undefined4 **)(method->name + 0x60))();
    return (float)fVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  fVar1 = (float10)(*pcVar2)();
  return (float)fVar1;
}


/* Void set_Value(Single) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
     SpawnRoleVariableTypes::SpawnRoleReceiverVariable`1[System::Single]::
     SpawnRoleReceiverVariable_1_System_Single__set_Value
               (SpawnRoleReceiverVariable_1_System_Single_ *this,float value,MethodInfo *method)

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
    if (pSVar2 != (SubscribableVariable_1_System_Single_ *)0x0) {
      (*(code *)**(undefined4 **)(*(int *)(method->name + 0x60) + 0x1c))(pSVar2,value);
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

