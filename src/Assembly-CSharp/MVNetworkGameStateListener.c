
/* Void ChangeState(MVGameStateType, Int32, Int32, Boolean) */

void Assembly-CSharp.dll::MVNetworkGameStateListener::MVNetworkGameStateListener_ChangeState
               (MVNetworkGameStateListener *this,MVGameStateType__Enum gameStateType,
               int32_t startTime,int32_t duration,bool fromGameSnapshot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).currentGameState = gameStateType;
  (this->fields).startTime = startTime;
  (this->fields).duration = duration;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    iVar1 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_01,(MethodInfo *)0x0);
    (this->fields).timeLeft = (startTime + duration) - iVar1;
    if ((fromGameSnapshot == 0) &&
       (this_00 = (EventHandler_1_InitializedGameQueryDataEventArgs_ *)
                  (this->fields).OnGameStateChanged,
       this_00 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0)) {
      e = (InitializedGameQueryDataEventArgs *)func_?(TypeInfo__GameStateChangeEventArgs);
      GameStateChangeEventArgs::GameStateChangeEventArgs__ctor
                ((GameStateChangeEventArgs *)e,(MethodInfo *)0x0);
      mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
      EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
                (this_00,(Object *)this,e,
                 MethodInfo__System__EventHandler<GameStateChangeEventArgs>__Invoke_System__Object__GameStateChangeEventArgs_
                );
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::MVNetworkGameStateListener::MVNetworkGameStateListener_Update
               (MVNetworkGameStateListener *this,MVNetworkGame *game,MethodInfo *method)

{
  if ((this->fields).currentGameState != 0) {
    if (0 < (this->fields).timeLeft) {
      iVar1 = (this->fields).duration;
      if (game == (MVNetworkGame *)0x0) {
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar3 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(game,(MethodInfo *)0x0);
      iVar1 = ((this->fields).startTime - iVar3) + iVar1;
      (this->fields).timeLeft = iVar1;
      if (-1 < iVar1) {
        return;
      }
    }
    (this->fields).timeLeft = 0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnGameStateChanged;
  a = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_GameStateChangeEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<GameStateChangeEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<GameStateChangeEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_GameStateChangeEventArgs_ *)func_?(ppEVar1,pDVar3,a);
    bVar6 = pEVar5 == a;
    a = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pGVar1 = InventoryItemPreviewer::InventoryItemPreviewer_get_PreviewGameObject
                       ((InventoryItemPreviewer *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      pvVar2 = pGVar1[1].fields._.m_CachedPtr;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      fVar3 = (float10)func_?((double)((int)pvVar2 / 1000));
      return (int)fVar3;
    }
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppEVar1 = &(this->fields).OnGameStateChanged;
  source = *ppEVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((EventHandler_1_GameStateChangeEventArgs___Class *)pDVar2->klass ==
          TypeInfo__System__EventHandler<GameStateChangeEventArgs>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__EventHandler<GameStateChangeEventArgs>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_GameStateChangeEventArgs_ *)func_?(ppEVar1,pDVar3,source);
    bVar6 = pEVar5 == source;
    source = pEVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

