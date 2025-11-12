
/* Void <OnSeatedChanged>b__0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c__DisplayClass95_0::
     MVAvatarLocal_c_DisplayClass95_0__OnSeatedChanged_b__0
               (MVAvatarLocal_c_DisplayClass95_0 *this,SpawnRoleDataReceiver *receiver,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<bool>__set_Value_bool_
  ;
  if ((receiver == (SpawnRoleDataReceiver *)0x0) ||
     (pSVar2 = (receiver->fields).isSeated,
     pSVar2 == (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = (this->fields).isSeated;
  pSVar5 = (pSVar2->fields).spawnRoleDataReceiver;
  if (pSVar5 != (SpawnRoleDataReceiver *)0x0) {
    if ((pSVar5->fields).isActive == 0) {
      uVar6 = func_?(&TypeInfo__System__Exception);
      this_00 = (Exception *)func_?(uVar6);
      message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
      FUN_?(this_00,pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar7 = (pSVar2->fields).subscribableVariable;
    if (pSVar7 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
      pAVar8 = (pSVar7->fields)._.OnChange;
      (pSVar7->fields)._.value = bVar4;
      if (pAVar8 != (Action_1_Boolean_ *)0x0) {
        pAVar8 = (pSVar7->fields)._.OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pAVar8->fields)._._.invoke_impl)
                  ((pAVar8->fields)._._.method_code,bVar4,(pAVar8->fields)._._.method);
        return;
      }
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

