
/* Void <GetSpawnTransform>b__141_0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c::MVAvatarLocal_c__GetSpawnTransform_b__141_0
               (MVAvatarLocal_c *this,SpawnRoleDataReceiver *receiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
  ;
  if ((receiver == (SpawnRoleDataReceiver *)0x0) ||
     (pSVar2 = (receiver->fields).lastRespawnType,
     pSVar2 == (SpawnRoleReceiverVariable_1_LastRespawnType_ *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar4 = (pSVar2->fields).spawnRoleDataReceiver;
  if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
    if ((pSVar4->fields).isActive == 0) {
      uVar5 = func_?(&TypeInfo__System__Exception);
      this_00 = (Exception *)func_?(uVar5);
      message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
      FUN_?(this_00,pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar6 = (pSVar2->fields).subscribableVariable;
    if (pSVar6 != (SubscribableVariable_1_LastRespawnType_ *)0x0) {
      pAVar7 = (pSVar6->fields)._.OnChange;
      (pSVar6->fields)._.value = 3;
      if (pAVar7 != (Action_1_LastRespawnType_ *)0x0) {
        pAVar7 = (pSVar6->fields)._.OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pAVar7->fields)._._.invoke_impl)
                  ((pAVar7->fields)._._.method_code,3,(pAVar7->fields)._._.method);
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


/* Void <GetSpawnTransform>b__141_1(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c::MVAvatarLocal_c__GetSpawnTransform_b__141_1
               (MVAvatarLocal_c *this,SpawnRoleDataReceiver *receiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<LastRespawnType>__set_Value_LastRespawnType_
  ;
  if ((receiver == (SpawnRoleDataReceiver *)0x0) ||
     (pSVar2 = (receiver->fields).lastRespawnType,
     pSVar2 == (SpawnRoleReceiverVariable_1_LastRespawnType_ *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar4 = (pSVar2->fields).spawnRoleDataReceiver;
  if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
    if ((pSVar4->fields).isActive == 0) {
      uVar5 = func_?(&TypeInfo__System__Exception);
      this_00 = (Exception *)func_?(uVar5);
      message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
      FUN_?(this_00,pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar6 = (pSVar2->fields).subscribableVariable;
    if (pSVar6 != (SubscribableVariable_1_LastRespawnType_ *)0x0) {
      pAVar7 = (pSVar6->fields)._.OnChange;
      (pSVar6->fields)._.value = 2;
      if (pAVar7 != (Action_1_LastRespawnType_ *)0x0) {
        pAVar7 = (pSVar6->fields)._.OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pAVar7->fields)._._.invoke_impl)
                  ((pAVar7->fields)._._.method_code,2,(pAVar7->fields)._._.method);
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


/* Void <LeaveVehicle>b__83_0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c::MVAvatarLocal_c__LeaveVehicle_b__83_0
               (MVAvatarLocal_c *this,SpawnRoleDataReceiver *receiver,MethodInfo *method)

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
     (pSVar2 = (receiver->fields).isInVehicle,
     pSVar2 == (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar4 = (pSVar2->fields).spawnRoleDataReceiver;
  if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
    if ((pSVar4->fields).isActive == 0) {
      uVar5 = func_?(&TypeInfo__System__Exception);
      this_00 = (Exception *)func_?(uVar5);
      message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
      FUN_?(this_00,pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar6 = (pSVar2->fields).subscribableVariable;
    if (pSVar6 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
      pAVar7 = (pSVar6->fields)._.OnChange;
      (pSVar6->fields)._.value = 0;
      if (pAVar7 != (Action_1_Boolean_ *)0x0) {
        pAVar7 = (pSVar6->fields)._.OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pAVar7->fields)._._.invoke_impl)
                  ((pAVar7->fields)._._.method_code,0,(pAVar7->fields)._._.method);
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


/* Void <OnCheckpointReachedResetRevive>b__142_0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c::
     MVAvatarLocal_c__OnCheckpointReachedResetRevive_b__142_0
               (MVAvatarLocal_c *this,SpawnRoleDataReceiver *receiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleReceiverVariable<ReviveState>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((((receiver != (SpawnRoleDataReceiver *)0x0) &&
       (pSVar1 = (receiver->fields).reviveState,
       pSVar1 != (SpawnRoleReceiverVariable_1_ReviveState_ *)0x0)) &&
      (pSVar2 = (pSVar1->fields).subscribableVariable,
      pSVar2 != (SubscribableVariable_1_ReviveState_ *)0x0)) &&
     (pRVar3 = (pSVar2->fields)._.value, pRVar3 != (ReviveState *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<SafeSpotData>__Clear__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar4 = (pRVar3->fields).safePositions;
    (pRVar3->fields).currentPreviewedSafePosition = 0;
    if (pLVar4 != (List_1_SafeSpotData_ *)0x0) {
      piVar5 = &(pLVar4->fields)._version;
      *piVar5 = *piVar5 + 1;
      (pLVar4->fields)._size = 0;
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <OnEnterVehicle>b__87_0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c::MVAvatarLocal_c__OnEnterVehicle_b__87_0
               (MVAvatarLocal_c *this,SpawnRoleDataReceiver *receiver,MethodInfo *method)

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
     (pSVar2 = (receiver->fields).isInVehicle,
     pSVar2 == (SpawnRoleReceiverVariable_1_System_Boolean_ *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pSVar4 = (pSVar2->fields).spawnRoleDataReceiver;
  if (pSVar4 != (SpawnRoleDataReceiver *)0x0) {
    if ((pSVar4->fields).isActive == 0) {
      uVar5 = func_?(&TypeInfo__System__Exception);
      this_00 = (Exception *)func_?(uVar5);
      message = (String *)func_?(&StringLiteral_SpawnRole_receiver_not_active__P);
      mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,(MethodInfo *)0x0);
      FUN_?(this_00,pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar6 = (pSVar2->fields).subscribableVariable;
    if (pSVar6 != (SubscribableVariable_1_System_Boolean_ *)0x0) {
      pAVar7 = (pSVar6->fields)._.OnChange;
      (pSVar6->fields)._.value = 1;
      if (pAVar7 != (Action_1_Boolean_ *)0x0) {
        pAVar7 = (pSVar6->fields)._.OnChange;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pAVar7->fields)._._.invoke_impl)
                  ((pAVar7->fields)._._.method_code,1,(pAVar7->fields)._._.method);
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


/* Void <Suicide>b__129_0(SpawnRoleDataReceiver) */

void Assembly-CSharp.dll::MVAvatarLocal+<>c::MVAvatarLocal_c__Suicide_b__129_0
               (MVAvatarLocal_c *this,SpawnRoleDataReceiver *receiver,MethodInfo *method)

{
  if (receiver == (SpawnRoleDataReceiver *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((receiver->fields).OnSuicide != (Action *)0x0) {
    pAVar2 = (receiver->fields).OnSuicide;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,(pAVar2->fields)._._.method);
    return;
  }
  return;
}


/* MVAvatarLocal+<>c() */

void Assembly-CSharp.dll::MVAvatarLocal+<>c::MVAvatarLocal_c__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVAvatarLocal____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVAvatarLocal_c *)FUN_?(TypeInfo__MVAvatarLocal____c);
  TypeInfo__MVAvatarLocal____c->static_fields->__9 = pMVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__MVAvatarLocal____c->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

