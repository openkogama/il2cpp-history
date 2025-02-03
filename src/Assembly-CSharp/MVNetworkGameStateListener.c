
/* Void ChangeState(MVGameStateType, Int32, Int32, Boolean) */

void Assembly-CSharp.dll::MVNetworkGameStateListener::MVNetworkGameStateListener_ChangeState
               (MVNetworkGameStateListener *this,MVGameStateType__Enum gameStateType,
               int32_t startTime,int32_t duration,bool fromGameSnapshot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameStateChangeEventArgs);
    cRam_? = '\x01';
  }
  (this->fields).currentGameState = gameStateType;
  (this->fields).startTime = startTime;
  (this->fields).duration = duration;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    iVar1 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    (this->fields).timeLeft = (startTime + duration) - iVar1;
    if ((fromGameSnapshot == 0) &&
       (pEVar2 = (this->fields).OnGameStateChanged,
       pEVar2 != (EventHandler_1_GameStateChangeEventArgs_ *)0x0)) {
      this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
                func_?(TypeInfo__GameStateChangeEventArgs);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__EventArgs);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__EventArgs);
      }
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
      (*(pEVar2->fields)._._.invoke_impl)
                ((pEVar2->fields)._._.method_code,this,this_01,(pEVar2->fields)._._.method);
    }
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    func_?(&TypeInfo__System__EventHandler<GameStateChangeEventArgs>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnGameStateChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<GameStateChangeEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<GameStateChangeEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_GameStateChangeEventArgs_ *)
             func_?(&(this->fields).OnGameStateChanged,iVar3,a);
    bVar6 = pEVar5 != a;
    a = pEVar5;
  } while (bVar6);
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
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = (pMVar1->fields)._NetworkGameStateListener_k__BackingField,
     pMVar2 != (MVNetworkGameStateListener *)0x0)) {
    fVar3 = (float10)func_?((double)((pMVar2->fields).timeLeft / 1000));
    return (int)fVar3;
  }
  func_?();
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
    func_?(&TypeInfo__System__EventHandler<GameStateChangeEventArgs>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnGameStateChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pEVar2 = TypeInfo__System__EventHandler<GameStateChangeEventArgs>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__EventHandler<GameStateChangeEventArgs>);
      if (iVar3 == 0) {
        func_?(pDVar1,pEVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pEVar5 = (EventHandler_1_GameStateChangeEventArgs_ *)
             func_?(&(this->fields).OnGameStateChanged,iVar3,source);
    bVar6 = pEVar5 != source;
    source = pEVar5;
  } while (bVar6);
  return;
}

