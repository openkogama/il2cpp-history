
/* Void NotifyKilled(Int32, Int32, PlayerKilledByType) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataReceiver::SpawnRoleDataReceiver_NotifyKilled
               (SpawnRoleDataReceiver *this,int32_t localPlayerActorNr,int32_t dmgDealerActorNr,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).OnKilled;
  if (this_00 != (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)0x0) {
    System.Core.dll::System::Action`3[Int32,Int32,MV::Common::PlayerKilledByType]::
    Action_3_Int32_Int32_MV_Common_PlayerKilledByType__Invoke
              (this_00,localPlayerActorNr,dmgDealerActorNr,damageType,
               MethodInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>__Invoke_int__int__MV__Common__PlayerKilledByType_
              );
  }
  return;
}


/* Void NotifySuicide() */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataReceiver::SpawnRoleDataReceiver_NotifySuicide
               (SpawnRoleDataReceiver *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnSuicide;
  if (pAVar1 == (Action *)0x0) {
    return;
  }
  this_00 = (JumpState_OnWallJumpDelegate *)(pAVar1->fields)._.prev;
  if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
  }
  this_01 = (pAVar1->fields)._._.method;
  pcVar2 = (pAVar1->fields)._._.method_ptr;
  pOVar3 = (pAVar1->fields)._._.m_target;
  pOVar4 = pOVar3;
  method_00 = this_01;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar5 = func_?(this_01);
  if (cVar5 == '\0') {
    if ((char)this_01->iflags == '\0') {
      (*pcVar2)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar3 == (Object *)0x0 || (((pOVar3->klass->_1).token & 0x100) == 0)) &&
           ((pAVar1->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar5 = func_?(pOVar3);
    if (cVar5 != '\0') {
      return;
    }
    pMVar6 = this_01;
    cVar5 = func_?();
    pOVar7 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,pMVar6);
    cVar8 = func_?(pOVar7);
    if (cVar5 == '\0') {
      if (cVar8 != '\0') {
        pOVar4 = mscorlib.dll::System::Collections::Generic::
                  KeyValuePair`2[WinningConditionType,System::Object]::
                  KeyValuePair_2_WinningConditionType_System_Object__get_Value
                            ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00
                            );
        func_?(this_01->flags,pOVar4,pOVar3);
        return;
      }
      (*(code *)(&(pOVar3->klass->vtable).Equals)[this_01->flags].method)
                (pOVar3,(&(pOVar3->klass->vtable).Finalize)[this_01->flags].methodPtr);
      return;
    }
    uVar9 = (uint)this_01->flags;
    if (cVar8 == '\0') {
      puVar10 = (undefined4 *)
                func_?((&(pOVar3->klass->vtable).Finalize)[uVar9].methodPtr,this_01);
      (*(code *)*puVar10)(pOVar3,puVar10);
      return;
    }
    pOVar11 = pOVar3->klass;
    uVar12 = 0;
    uVar13._0_1_ = (pOVar11->_1).rank;
    uVar13._1_1_ = (pOVar11->_1).minimumAlignment;
    pMVar6 = this_01;
    if (uVar13 != 0) {
      do {
        if (pOVar11->interfaceOffsets[uVar12].interfaceType == (Il2CppClass *)this_01->name) {
          ppMVar14 = &(&(pOVar4->klass->vtable).Equals)
                      [(uint)method_00->flags + pOVar4->klass->interfaceOffsets[uVar12].offset].
                      method;
          goto code_?;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar13);
      uVar9 = (uint)method_00->flags;
      pMVar6 = method_00;
      pOVar3 = pOVar4;
    }
    pOVar4 = pOVar3;
    method_00 = pMVar6;
    ppMVar14 = (MethodInfo **)func_?(pOVar4,(Il2CppClass *)this_01->name,uVar9);
code_?:
    puVar10 = (undefined4 *)func_?(ppMVar14[1],method_00);
    (*(code *)*puVar10)(pOVar4,puVar10);
    return;
  }
  (*pcVar2)(pOVar3,this_01);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnKilled;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_3_Int32_Int32_MV_Common_PlayerKilledByType___Class *)pDVar2->klass ==
          TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)func_?(ppAVar1,pDVar3,a)
    ;
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnSuicide(Action) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataReceiver::SpawnRoleDataReceiver_add_OnSuicide
               (SpawnRoleDataReceiver *this,Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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


/* Boolean get_IsActive() */

bool Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataReceiver::SpawnRoleDataReceiver_get_IsActive
               (SpawnRoleDataReceiver *this,MethodInfo *method)

{
  return (this->fields).isActive;
}


/* Void remove_OnKilled(Action`3[Int32,Int32,MV.Common.PlayerKilledByType]) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataReceiver::SpawnRoleDataReceiver_remove_OnKilled
               (SpawnRoleDataReceiver *this,
               Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnKilled;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_3_Int32_Int32_MV_Common_PlayerKilledByType___Class *)pDVar2->klass ==
          TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_3_Int32_Int32_MV_Common_PlayerKilledByType_ *)
             func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnSuicide(Action) */

void Assembly-CSharp.dll::Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::Mediator::
     SpawnRoleDataReceiver::SpawnRoleDataReceiver_remove_OnSuicide
               (SpawnRoleDataReceiver *this,Action *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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

