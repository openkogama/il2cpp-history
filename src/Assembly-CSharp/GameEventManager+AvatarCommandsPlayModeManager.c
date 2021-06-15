
/* Void KillSelf() */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_KillSelf
               (GameEventManager_AvatarCommandsPlayModeManager *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnKillSelf;
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


/* Void MoveBodyToSafeSpot(Int32) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_MoveBodyToSafeSpot
               (GameEventManager_AvatarCommandsPlayModeManager *this,int32_t index,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields).OnMoveBodyToSafeSpot;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,index,MethodInfo__System__Action<int>__Invoke_int_);
  }
  return;
}


/* Void RemoveFromGame() */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_RemoveFromGame
               (GameEventManager_AvatarCommandsPlayModeManager *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnRemoveFromGame;
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


/* Void Respawn() */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_Respawn
               (GameEventManager_AvatarCommandsPlayModeManager *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnRespawn;
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


/* Void ReviveTimeElapsed() */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_ReviveTimeElapsed
               (GameEventManager_AvatarCommandsPlayModeManager *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnReviveTimeElapsed;
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


/* Void SetIntermediateDebriefing(WinningConditionType) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_SetIntermediateDebriefing
               (GameEventManager_AvatarCommandsPlayModeManager *this,
               WinningConditionType__Enum winningConditionType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields).OnWinningConditionIntermediateDebriefing;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,winningConditionType,
               MethodInfo__System__Action<WinningConditionType>__Invoke_WinningConditionType_);
  }
  return;
}


/* Void SetToDeadMode() */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_SetToDeadMode
               (GameEventManager_AvatarCommandsPlayModeManager *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnSetToDeadMode;
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


/* Void SpawnAsGhost() */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_SpawnAsGhost
               (GameEventManager_AvatarCommandsPlayModeManager *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnSpawnAsGhost;
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


/* Void SpawnAtSafeSpot(Int32) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_SpawnAtSafeSpot
               (GameEventManager_AvatarCommandsPlayModeManager *this,int32_t safeSpotIndex,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields).OnSpawnAtSafeSpot;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,safeSpotIndex,MethodInfo__System__Action<int>__Invoke_int_);
  }
  return;
}


/* Void add_OnEnterPlaymode(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_add_OnEnterPlaymode
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnEnterPlaymode;
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


/* Void add_OnKillSelf(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_add_OnKillSelf
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  a = (this->fields).OnKillSelf;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar1->klass == TypeInfo__System__Action) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pAVar4 = (Action *)func_?(&this->fields,pDVar2,a);
    bVar5 = pAVar4 == a;
    a = pAVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void add_OnMoveBodyToSafeSpot(Action`1[Int32]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_add_OnMoveBodyToSafeSpot
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action_1_Int32_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnMoveBodyToSafeSpot;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_Int32___Class *)pDVar2->klass == TypeInfo__System__Action<int>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<int>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Int32_ *)func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnReadyScreenShot(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_add_OnReadyScreenShot
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnReadyScreenShot;
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


/* Void add_OnRemoveFromGame(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_add_OnRemoveFromGame
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnRemoveFromGame;
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


/* Void add_OnRespawn(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_add_OnRespawn
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnRespawn;
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


/* Void add_OnReviveTimeElapsed(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_add_OnReviveTimeElapsed
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnReviveTimeElapsed;
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


/* Void add_OnSetRespawnWhenPossible(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_add_OnSetRespawnWhenPossible
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSetRespawnWhenPossible;
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


/* Void add_OnSetToDeadMode(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_add_OnSetToDeadMode
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSetToDeadMode;
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


/* Void add_OnSetToSpawnPoint(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_add_OnSetToSpawnPoint
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSetToSpawnPoint;
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


/* Void add_OnSpawnAsGhost(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_add_OnSpawnAsGhost
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSpawnAsGhost;
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


/* Void add_OnSpawnAtSafeSpot(Action`1[Int32]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_add_OnSpawnAtSafeSpot
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action_1_Int32_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSpawnAtSafeSpot;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_Int32___Class *)pDVar2->klass == TypeInfo__System__Action<int>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<int>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Int32_ *)func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnWinningConditionIntermediateDebriefing(Action`1[WinningConditionType]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_add_OnWinningConditionIntermediateDebriefing
               (GameEventManager_AvatarCommandsPlayModeManager *this,
               Action_1_WinningConditionType_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnWinningConditionIntermediateDebriefing;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_WinningConditionType___Class *)pDVar2->klass ==
          TypeInfo__System__Action<WinningConditionType>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<WinningConditionType>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_WinningConditionType_ *)func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnEnterPlaymode(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_remove_OnEnterPlaymode
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnEnterPlaymode;
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


/* Void remove_OnKillSelf(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_remove_OnKillSelf
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source = (this->fields).OnKillSelf;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar1->klass == TypeInfo__System__Action) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pAVar4 = (Action *)func_?(&this->fields,pDVar2,source);
    bVar5 = pAVar4 == source;
    source = pAVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_OnMoveBodyToSafeSpot(Action`1[Int32]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_remove_OnMoveBodyToSafeSpot
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action_1_Int32_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnMoveBodyToSafeSpot;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_Int32___Class *)pDVar2->klass == TypeInfo__System__Action<int>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<int>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Int32_ *)func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnReadyScreenShot(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_remove_OnReadyScreenShot
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnReadyScreenShot;
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


/* Void remove_OnRemoveFromGame(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_remove_OnRemoveFromGame
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnRemoveFromGame;
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


/* Void remove_OnRespawn(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_remove_OnRespawn
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnRespawn;
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


/* Void remove_OnReviveTimeElapsed(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_remove_OnReviveTimeElapsed
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnReviveTimeElapsed;
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


/* Void remove_OnSetRespawnWhenPossible(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_remove_OnSetRespawnWhenPossible
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSetRespawnWhenPossible;
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


/* Void remove_OnSetToDeadMode(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_remove_OnSetToDeadMode
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSetToDeadMode;
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


/* Void remove_OnSetToSpawnPoint(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_remove_OnSetToSpawnPoint
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSetToSpawnPoint;
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


/* Void remove_OnSpawnAsGhost(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_remove_OnSpawnAsGhost
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSpawnAsGhost;
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


/* Void remove_OnSpawnAtSafeSpot(Action`1[Int32]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_remove_OnSpawnAtSafeSpot
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action_1_Int32_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSpawnAtSafeSpot;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_Int32___Class *)pDVar2->klass == TypeInfo__System__Action<int>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<int>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Int32_ *)func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnWinningConditionIntermediateDebriefing(Action`1[WinningConditionType]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_remove_OnWinningConditionIntermediateDebriefing
               (GameEventManager_AvatarCommandsPlayModeManager *this,
               Action_1_WinningConditionType_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnWinningConditionIntermediateDebriefing;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_WinningConditionType___Class *)pDVar2->klass ==
          TypeInfo__System__Action<WinningConditionType>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<WinningConditionType>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_WinningConditionType_ *)func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

