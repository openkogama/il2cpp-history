
/* Void NotifyKilled(Int32, Int32, PlayerKilledByType) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataReceiver::SpawnRoleDataReceiver_NotifyKilled
               (SpawnRoleDataReceiver *this,int32_t localPlayerActorNr,int32_t dmgDealerActorNr,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  pAVar1 = (this->fields).OnKilled;
  if (pAVar1 != (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,localPlayerActorNr,dmgDealerActorNr,damageType,
               (pAVar1->fields)._._.method);
  }
  return;
}


/* Void NotifySuicide() */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataReceiver::SpawnRoleDataReceiver_NotifySuicide
               (SpawnRoleDataReceiver *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnSuicide;
  if (pAVar1 != (Action *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
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
    func_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnKilled;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,
                              TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
  return;
}


/* Void add_OnSuicide(Action) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataReceiver::SpawnRoleDataReceiver_add_OnSuicide
               (SpawnRoleDataReceiver *this,Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSuicide;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action *)func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnKilled(Action`3[Int32,Int32,MV.Common.PlayerKilledByType]) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataReceiver::SpawnRoleDataReceiver_remove_OnKilled
               (SpawnRoleDataReceiver *this,
               Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnKilled;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,
                              TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
             func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
  return;
}


/* Void remove_OnSuicide(Action) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataReceiver::SpawnRoleDataReceiver_remove_OnSuicide
               (SpawnRoleDataReceiver *this,Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSuicide;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action *)func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

