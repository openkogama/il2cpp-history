
/* Void NotifyKilled(Int32, Int32, PlayerKilledByType) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataReceiver::SpawnRoleDataReceiver_NotifyKilled
               (SpawnRoleDataReceiver *this,int32_t localPlayerActorNr,int32_t dmgDealerActorNr,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if ((this->fields).OnKilled != (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
    pAVar1 = (this->fields).OnKilled;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)((pAVar1->fields)._._.method_code);
    return;
  }
  return;
}


/* Void NotifySuicide() */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataReceiver::SpawnRoleDataReceiver_NotifySuicide
               (SpawnRoleDataReceiver *this,MethodInfo *method)

{
  if ((this->fields).OnSuicide != (Action *)0x0) {
    pAVar1 = (this->fields).OnSuicide;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* SpawnRoleDataReceiver() */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataReceiver::SpawnRoleDataReceiver__ctor
               (SpawnRoleDataReceiver *this,MethodInfo *method)

{
  (this->fields).isActive = 1;
  return;
}


/* Void add_OnKilled(Action`3[Int32,Int32,MV.Common.PlayerKilledByType]) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataReceiver::SpawnRoleDataReceiver_add_OnKilled
               (SpawnRoleDataReceiver *this,
               Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnKilled;
  a = (this->fields).OnKilled;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0;
    }
    else {
      pAVar4 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
               FUN_?(pDVar2,
                             TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
      if (pAVar4 == (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
  } while (bVar7);
  return;
}


/* Void add_OnSuicide(Action) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataReceiver::SpawnRoleDataReceiver_add_OnSuicide
               (SpawnRoleDataReceiver *this,Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSuicide;
  a = (this->fields).OnSuicide;
  do {
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = (Action *)0x0;
    if (pAVar2 != (Action *)0x0) {
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar2;
      }
      if (pAVar3 == (Action *)0x0) {
        FUN_?(pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pAVar2 = *ppAVar1;
    bVar5 = a == pAVar2;
    if (bVar5) {
      *ppAVar1 = pAVar3;
      pAVar2 = a;
    }
    UNLOCK();
    pAVar3 = a;
    if (!bVar5) {
      pAVar3 = pAVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pAVar3 != a;
    a = pAVar3;
  } while (bVar5);
  return;
}


/* Void remove_OnKilled(Action`3[Int32,Int32,MV.Common.PlayerKilledByType]) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataReceiver::SpawnRoleDataReceiver_remove_OnKilled
               (SpawnRoleDataReceiver *this,
               Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnKilled;
  source = (this->fields).OnKilled;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0;
    }
    else {
      pAVar4 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
               FUN_?(pDVar2,
                             TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
      if (pAVar4 == (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}


/* Void remove_OnSuicide(Action) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataReceiver::SpawnRoleDataReceiver_remove_OnSuicide
               (SpawnRoleDataReceiver *this,Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSuicide;
  source = (this->fields).OnSuicide;
  do {
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = (Action *)0x0;
    if (pAVar2 != (Action *)0x0) {
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar2;
      }
      if (pAVar3 == (Action *)0x0) {
        FUN_?(pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pAVar2 = *ppAVar1;
    bVar5 = source == pAVar2;
    if (bVar5) {
      *ppAVar1 = pAVar3;
      pAVar2 = source;
    }
    UNLOCK();
    pAVar3 = source;
    if (!bVar5) {
      pAVar3 = pAVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pAVar3 != source;
    source = pAVar3;
  } while (bVar5);
  return;
}

