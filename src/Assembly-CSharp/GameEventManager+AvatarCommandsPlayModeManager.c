
/* Void MoveBodyToSafeSpot(Int32) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_MoveBodyToSafeSpot
               (GameEventManager_AvatarCommandsPlayModeManager *this,int32_t index,
               MethodInfo *method)

{
  pAVar1 = (this->fields).OnMoveBodyToSafeSpot;
  if (pAVar1 != (Action_1_Int32_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,index,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void ReviveTimeElapsed() */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_ReviveTimeElapsed
               (GameEventManager_AvatarCommandsPlayModeManager *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnReviveTimeElapsed;
  if (pAVar1 != (Action *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void SetToDeadMode() */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsPlayModeManager::
     GameEventManager_AvatarCommandsPlayModeManager_SetToDeadMode
               (GameEventManager_AvatarCommandsPlayModeManager *this,MethodInfo *method)

{
  pAVar1 = (this->fields).OnSetToDeadMode;
  if (pAVar1 != (Action *)0x0) {
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
  pAVar1 = (this->fields).OnSpawnAsGhost;
  if (pAVar1 != (Action *)0x0) {
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
  pAVar1 = (this->fields).OnSpawnAtSafeSpot;
  if (pAVar1 != (Action_1_Int32_ *)0x0) {
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
  ppAVar1 = &(this->fields).OnMoveBodyToSafeSpot;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<int>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__Action<int>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_Int32_ *)func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
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
    func_?(&TypeInfo__System__Action);
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
    func_?(&TypeInfo__System__Action);
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
    func_?(&TypeInfo__System__Action);
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
    func_?(&TypeInfo__System__Action);
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
    func_?(&TypeInfo__System__Action);
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
    func_?(&TypeInfo__System__Action);
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
    func_?(&TypeInfo__System__Action);
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
    func_?(&TypeInfo__System__Action<int>);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSpawnAtSafeSpot;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<int>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__Action<int>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_Int32_ *)func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
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
  ppAVar1 = &(this->fields).OnWinningConditionIntermediateDebriefing;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<WinningConditionType>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__Action<WinningConditionType>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_WinningConditionType_ *)func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
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
  ppAVar1 = &(this->fields).OnMoveBodyToSafeSpot;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<int>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__Action<int>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_Int32_ *)func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
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
    func_?(&TypeInfo__System__Action);
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
    func_?(&TypeInfo__System__Action);
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
    func_?(&TypeInfo__System__Action);
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
    func_?(&TypeInfo__System__Action);
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
    func_?(&TypeInfo__System__Action);
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
    func_?(&TypeInfo__System__Action);
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
    func_?(&TypeInfo__System__Action);
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
    func_?(&TypeInfo__System__Action<int>);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSpawnAtSafeSpot;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<int>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__Action<int>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_Int32_ *)func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
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
  ppAVar1 = &(this->fields).OnWinningConditionIntermediateDebriefing;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<WinningConditionType>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__Action<WinningConditionType>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_WinningConditionType_ *)func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
  return;
}

