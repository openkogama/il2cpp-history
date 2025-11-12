
/* Void ChangeState(MVGameStateType, Int32, Int32, Boolean) */

void Assembly-CSharp.dll::MVNetworkGameStateListener::MVNetworkGameStateListener_ChangeState
               (MVNetworkGameStateListener *this,MVGameStateType__Enum gameStateType,
               int32_t startTime,int32_t duration,bool fromGameSnapshot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameStateChangeEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).currentGameState = gameStateType;
  (this->fields).startTime = startTime;
  (this->fields).duration = duration;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar2->fields).game, this_00 != (MVNetworkGame *)0x0)) {
    iVar3 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    (this->fields).timeLeft = (startTime + duration) - iVar3;
    if ((fromGameSnapshot == 0) &&
       (pEVar4 = (this->fields).OnGameStateChanged,
       pEVar4 != (EventHandler_1_GameStateChangeEventArgs_ *)0x0)) {
      uVar5 = FUN_?(TypeInfo__GameStateChangeEventArgs);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventArgs);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
        FUN_?();
      }
      (*(pEVar4->fields)._._.invoke_impl)
                ((pEVar4->fields)._._.method_code,this,uVar5,(pEVar4->fields)._._.method);
    }
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkGameStateListener::MVNetworkGameStateListener_Update
               (MVNetworkGameStateListener *this,MVNetworkGame *game,MethodInfo *method)

{
  if ((this->fields).currentGameState != 0) {
    if ((this->fields).timeLeft < 1) {
      (this->fields).timeLeft = 0;
      return;
    }
    iVar1 = (this->fields).duration;
    if (game == (MVNetworkGame *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(game,(MethodInfo *)0x0);
    iVar1 = ((this->fields).startTime - iVar3) + iVar1;
    (this->fields).timeLeft = iVar1;
    if (iVar1 < 0) {
      (this->fields).timeLeft = 0;
    }
  }
  return;
}


/* Void add_OnGameStateChanged(EventHandler`1[GameStateChangeEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGameStateListener::
     MVNetworkGameStateListener_add_OnGameStateChanged
               (MVNetworkGameStateListener *this,EventHandler_1_GameStateChangeEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<GameStateChangeEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnGameStateChanged;
  a = (this->fields).OnGameStateChanged;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<GameStateChangeEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_GameStateChangeEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_GameStateChangeEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<GameStateChangeEventArgs>);
      if (pEVar4 == (EventHandler_1_GameStateChangeEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = a == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = a;
    }
    UNLOCK();
    pEVar4 = a;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
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
    bVar7 = pEVar4 != a;
    a = pEVar4;
  } while (bVar7);
  return;
}


/* Single get_CountdownInPercentage() */

float Assembly-CSharp.dll::MVNetworkGameStateListener::
      MVNetworkGameStateListener_get_CountdownInPercentage
                (MVNetworkGameStateListener *this,MethodInfo *method)

{
  return (float)(this->fields).timeLeft / (float)(this->fields).duration;
}


/* Int32 get_CountdownInSeconds() */

int32_t Assembly-CSharp.dll::MVNetworkGameStateListener::
        MVNetworkGameStateListener_get_CountdownInSeconds
                  (MVNetworkGameStateListener *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     ((pMVar2->fields)._NetworkGameStateListener_k__BackingField !=
      (MVNetworkGameStateListener *)0x0)) {
    fVar3 = (float)func_?();
    return (int)fVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void remove_OnGameStateChanged(EventHandler`1[GameStateChangeEventArgs]) */

void Assembly-CSharp.dll::MVNetworkGameStateListener::
     MVNetworkGameStateListener_remove_OnGameStateChanged
               (MVNetworkGameStateListener *this,EventHandler_1_GameStateChangeEventArgs_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<GameStateChangeEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnGameStateChanged;
  source = (this->fields).OnGameStateChanged;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar3 = TypeInfo__System__EventHandler<GameStateChangeEventArgs>;
    if (pDVar2 == (Delegate *)0x0) {
      pEVar4 = (EventHandler_1_GameStateChangeEventArgs_ *)0x0;
    }
    else {
      pEVar4 = (EventHandler_1_GameStateChangeEventArgs_ *)
               FUN_?(pDVar2,TypeInfo__System__EventHandler<GameStateChangeEventArgs>);
      if (pEVar4 == (EventHandler_1_GameStateChangeEventArgs_ *)0x0) {
        FUN_?(pDVar2,pEVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pEVar6 = *ppEVar1;
    bVar7 = source == pEVar6;
    if (bVar7) {
      *ppEVar1 = pEVar4;
      pEVar6 = source;
    }
    UNLOCK();
    pEVar4 = source;
    if (!bVar7) {
      pEVar4 = pEVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppEVar1 >> 0xc);
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
    bVar7 = pEVar4 != source;
    source = pEVar4;
  } while (bVar7);
  return;
}

