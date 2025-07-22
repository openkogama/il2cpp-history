
/* Void KillSelf() */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_KillSelf
               (GameEventManager_AvatarCommandsPlayModeManager *this,MethodInfo *method)

{
  if ((this->fields).OnKillSelf != (Action *)0x0) {
    pAVar1 = (this->fields).OnKillSelf;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void MoveBodyToSafeSpot(Int32) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_MoveBodyToSafeSpot
               (GameEventManager_AvatarCommandsPlayModeManager *this,int32_t index,
               MethodInfo *method)

{
  if ((this->fields).OnMoveBodyToSafeSpot != (Action_1_Int32_ *)0x0) {
    pAVar1 = (this->fields).OnMoveBodyToSafeSpot;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,index,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void RemoveFromGame() */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_RemoveFromGame
               (GameEventManager_AvatarCommandsPlayModeManager *this,MethodInfo *method)

{
  if ((this->fields).OnRemoveFromGame != (Action *)0x0) {
    pAVar1 = (this->fields).OnRemoveFromGame;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void Respawn() */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_Respawn
               (GameEventManager_AvatarCommandsPlayModeManager *this,MethodInfo *method)

{
  if ((this->fields).OnRespawn != (Action *)0x0) {
    pAVar1 = (this->fields).OnRespawn;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void ReviveTimeElapsed() */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_ReviveTimeElapsed
               (GameEventManager_AvatarCommandsPlayModeManager *this,MethodInfo *method)

{
  if ((this->fields).OnReviveTimeElapsed != (Action *)0x0) {
    pAVar1 = (this->fields).OnReviveTimeElapsed;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void SetIntermediateDebriefing(WinningConditionType) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_SetIntermediateDebriefing
               (GameEventManager_AvatarCommandsPlayModeManager *this,
               WinningConditionType__Enum winningConditionType,MethodInfo *method)

{
  if ((this->fields).OnWinningConditionIntermediateDebriefing !=
      (Action_1_WinningConditionType_ *)0x0) {
    pAVar1 = (this->fields).OnWinningConditionIntermediateDebriefing;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,winningConditionType,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void SetToDeadMode() */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_SetToDeadMode
               (GameEventManager_AvatarCommandsPlayModeManager *this,MethodInfo *method)

{
  if ((this->fields).OnSetToDeadMode != (Action *)0x0) {
    pAVar1 = (this->fields).OnSetToDeadMode;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void SpawnAsGhost() */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_SpawnAsGhost
               (GameEventManager_AvatarCommandsPlayModeManager *this,MethodInfo *method)

{
  if ((this->fields).OnSpawnAsGhost != (Action *)0x0) {
    pAVar1 = (this->fields).OnSpawnAsGhost;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void SpawnAtSafeSpot(Int32) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_SpawnAtSafeSpot
               (GameEventManager_AvatarCommandsPlayModeManager *this,int32_t safeSpotIndex,
               MethodInfo *method)

{
  if ((this->fields).OnSpawnAtSafeSpot != (Action_1_Int32_ *)0x0) {
    pAVar1 = (this->fields).OnSpawnAtSafeSpot;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,safeSpotIndex,(pAVar1->fields)._._.method);
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
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  a = (this->fields).OnEnterPlaymode;
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
    pAVar4 = (Action *)func_?(&(this->fields).OnEnterPlaymode,pDVar2,a);
    bVar5 = pAVar4 == a;
    a = pAVar4;
    if (bVar5) {
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
    func_?(&TypeInfo__System__Action);
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
    func_?(&TypeInfo__System__Action<int>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnMoveBodyToSafeSpot;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<int>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<int>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Int32_ *)func_?(&(this->fields).OnMoveBodyToSafeSpot,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
  return;
}


/* Void add_OnReadyScreenShot(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_add_OnReadyScreenShot
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  a = (this->fields).OnReadyScreenShot;
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
    pAVar4 = (Action *)func_?(&(this->fields).OnReadyScreenShot,pDVar2,a);
    bVar5 = pAVar4 == a;
    a = pAVar4;
    if (bVar5) {
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
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  a = (this->fields).OnRemoveFromGame;
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
    pAVar4 = (Action *)func_?(&(this->fields).OnRemoveFromGame,pDVar2,a);
    bVar5 = pAVar4 == a;
    a = pAVar4;
    if (bVar5) {
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
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  a = (this->fields).OnRespawn;
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
    pAVar4 = (Action *)func_?(&(this->fields).OnRespawn,pDVar2,a);
    bVar5 = pAVar4 == a;
    a = pAVar4;
    if (bVar5) {
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
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  a = (this->fields).OnReviveTimeElapsed;
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
    pAVar4 = (Action *)func_?(&(this->fields).OnReviveTimeElapsed,pDVar2,a);
    bVar5 = pAVar4 == a;
    a = pAVar4;
    if (bVar5) {
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
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  a = (this->fields).OnSetRespawnWhenPossible;
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
    pAVar4 = (Action *)func_?(&(this->fields).OnSetRespawnWhenPossible,pDVar2,a);
    bVar5 = pAVar4 == a;
    a = pAVar4;
    if (bVar5) {
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
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  a = (this->fields).OnSetToDeadMode;
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
    pAVar4 = (Action *)func_?(&(this->fields).OnSetToDeadMode,pDVar2,a);
    bVar5 = pAVar4 == a;
    a = pAVar4;
    if (bVar5) {
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
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  a = (this->fields).OnSetToSpawnPoint;
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
    pAVar4 = (Action *)func_?(&(this->fields).OnSetToSpawnPoint,pDVar2,a);
    bVar5 = pAVar4 == a;
    a = pAVar4;
    if (bVar5) {
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
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  a = (this->fields).OnSpawnAsGhost;
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
    pAVar4 = (Action *)func_?(&(this->fields).OnSpawnAsGhost,pDVar2,a);
    bVar5 = pAVar4 == a;
    a = pAVar4;
    if (bVar5) {
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
    func_?(&TypeInfo__System__Action<int>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnSpawnAtSafeSpot;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<int>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<int>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Int32_ *)func_?(&(this->fields).OnSpawnAtSafeSpot,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
  return;
}


/* Void add_OnWinningConditionIntermediateDebriefing(Action`1[WinningConditionType]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_add_OnWinningConditionIntermediateDebriefing
               (GameEventManager_AvatarCommandsPlayModeManager *this,
               Action_1_WinningConditionType_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<WinningConditionType>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnWinningConditionIntermediateDebriefing;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<WinningConditionType>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<WinningConditionType>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_WinningConditionType_ *)
             func_?(&(this->fields).OnWinningConditionIntermediateDebriefing,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
  return;
}


/* Void remove_OnEnterPlaymode(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_remove_OnEnterPlaymode
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  source = (this->fields).OnEnterPlaymode;
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
    pAVar4 = (Action *)func_?(&(this->fields).OnEnterPlaymode,pDVar2,source);
    bVar5 = pAVar4 == source;
    source = pAVar4;
    if (bVar5) {
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
    func_?(&TypeInfo__System__Action);
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
    func_?(&TypeInfo__System__Action<int>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnMoveBodyToSafeSpot;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<int>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<int>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Int32_ *)func_?(&(this->fields).OnMoveBodyToSafeSpot,iVar3,source);
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
}


/* Void remove_OnReadyScreenShot(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_remove_OnReadyScreenShot
               (GameEventManager_AvatarCommandsPlayModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  source = (this->fields).OnReadyScreenShot;
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
    pAVar4 = (Action *)func_?(&(this->fields).OnReadyScreenShot,pDVar2,source);
    bVar5 = pAVar4 == source;
    source = pAVar4;
    if (bVar5) {
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
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  source = (this->fields).OnRemoveFromGame;
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
    pAVar4 = (Action *)func_?(&(this->fields).OnRemoveFromGame,pDVar2,source);
    bVar5 = pAVar4 == source;
    source = pAVar4;
    if (bVar5) {
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
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  source = (this->fields).OnRespawn;
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
    pAVar4 = (Action *)func_?(&(this->fields).OnRespawn,pDVar2,source);
    bVar5 = pAVar4 == source;
    source = pAVar4;
    if (bVar5) {
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
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  source = (this->fields).OnReviveTimeElapsed;
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
    pAVar4 = (Action *)func_?(&(this->fields).OnReviveTimeElapsed,pDVar2,source);
    bVar5 = pAVar4 == source;
    source = pAVar4;
    if (bVar5) {
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
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  source = (this->fields).OnSetRespawnWhenPossible;
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
    pAVar4 = (Action *)func_?(&(this->fields).OnSetRespawnWhenPossible,pDVar2,source);
    bVar5 = pAVar4 == source;
    source = pAVar4;
    if (bVar5) {
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
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  source = (this->fields).OnSetToDeadMode;
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
    pAVar4 = (Action *)func_?(&(this->fields).OnSetToDeadMode,pDVar2,source);
    bVar5 = pAVar4 == source;
    source = pAVar4;
    if (bVar5) {
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
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  source = (this->fields).OnSetToSpawnPoint;
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
    pAVar4 = (Action *)func_?(&(this->fields).OnSetToSpawnPoint,pDVar2,source);
    bVar5 = pAVar4 == source;
    source = pAVar4;
    if (bVar5) {
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
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  source = (this->fields).OnSpawnAsGhost;
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
    pAVar4 = (Action *)func_?(&(this->fields).OnSpawnAsGhost,pDVar2,source);
    bVar5 = pAVar4 == source;
    source = pAVar4;
    if (bVar5) {
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
    func_?(&TypeInfo__System__Action<int>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnSpawnAtSafeSpot;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<int>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<int>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Int32_ *)func_?(&(this->fields).OnSpawnAtSafeSpot,iVar3,source);
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
}


/* Void remove_OnWinningConditionIntermediateDebriefing(Action`1[WinningConditionType]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_remove_OnWinningConditionIntermediateDebriefing
               (GameEventManager_AvatarCommandsPlayModeManager *this,
               Action_1_WinningConditionType_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<WinningConditionType>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnWinningConditionIntermediateDebriefing;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<WinningConditionType>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<WinningConditionType>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_WinningConditionType_ *)
             func_?(&(this->fields).OnWinningConditionIntermediateDebriefing,iVar3,source);
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
}

