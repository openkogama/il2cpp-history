
/* Void NotifyFirstTimeEvent(FirstTimeEvent) */

void Assembly-CSharp.dll::GameEventManager::GameEventManager_NotifyFirstTimeEvent
               (GameEventManager *this,FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if ((this->fields).OnFirstTimeEvent != (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0) {
    pAVar1 = (this->fields).OnFirstTimeEvent;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,firstTimeEvent,(pAVar1->fields)._._.method);
  }
  return;
}


/* GameEventManager() */

void Assembly-CSharp.dll::GameEventManager::GameEventManager__ctor
               (GameEventManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameEventManager__AvatarCommandsBuildModeManager);
    func_?(&TypeInfo__GameEventManager__AvatarCommandsPlayModeManager);
    func_?(&TypeInfo__GameEventManager__GameStateManager);
    cRam_? = '\x01';
  }
  value = (GameEventManager_AvatarCommandsPlayModeManager *)
          func_?(TypeInfo__GameEventManager__AvatarCommandsPlayModeManager);
  if (value != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
    (this->fields).AvatarCommandsPlayMode = value;
    func_?(&(this->fields).AvatarCommandsPlayMode,value);
    value_00 = (GameEventManager_AvatarCommandsBuildModeManager *)
               func_?(TypeInfo__GameEventManager__AvatarCommandsBuildModeManager);
    if (value_00 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        TypeInfo__GameEventManager_AvatarCommandsBuildModeManager__LaserCommandsManager
                       );
        cRam_? = '\x01';
      }
      value_01 = (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
                 func_?(
                                TypeInfo__GameEventManager_AvatarCommandsBuildModeManager__LaserCommandsManager
                                );
      if (value_01 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)value_01,ExceptionArgument__Enum_obj,unaff_EDI);
        pMVar1 = (MethodInfo *)&(value_00->fields).LaserCommands;
        (value_00->fields).LaserCommands = value_01;
        func_?(pMVar1,value_01);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)value_00,ExceptionArgument__Enum_obj,pMVar1);
        (this->fields).AvatarCommandsBuildMode = value_00;
        func_?(&(this->fields).AvatarCommandsBuildMode,value_00);
        value_02 = (GameEventManager_GameStateManager *)
                   func_?(TypeInfo__GameEventManager__GameStateManager);
        if (value_02 != (GameEventManager_GameStateManager *)0x0) {
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>__GameEventSubscribableVariable_MV__Common__MVGameStateType_
                           );
            func_?(&
                            TypeInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>
                           );
            cRam_? = '\x01';
          }
          this_00 = (SubscribableVariable_1_System_Object_ *)
                    func_?(
                                   TypeInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>
                                   );
          if (this_00 != (SubscribableVariable_1_System_Object_ *)0x0) {
            SubscribableVariable`1[System::Object]::SubscribableVariable_1_System_Object___ctor
                      (this_00,(Object *)0x0,
                       MethodInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>__GameEventSubscribableVariable_MV__Common__MVGameStateType_
                      );
            pMVar1 = (MethodInfo *)&(value_02->fields).gameStateType;
            (value_02->fields).gameStateType =
                 (GameEventManager_GameEventSubscribableVariable_1_MV_Common_MVGameStateType_ *)
                 this_00;
            func_?(pMVar1,this_00);
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)value_02,ExceptionArgument__Enum_obj,pMVar1);
            pMVar1 = (MethodInfo *)&(this->fields).GameState;
            (this->fields).GameState = value_02;
            func_?(pMVar1,value_02);
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)this,ExceptionArgument__Enum_obj,pMVar1);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void add_OnFirstTimeEvent(Action`1[MV.WorldObject.MetaData.FirstTimeEvent]) */

void Assembly-CSharp.dll::GameEventManager::GameEventManager_add_OnFirstTimeEvent
               (GameEventManager *this,Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnFirstTimeEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,
                              TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
             func_?(&(this->fields).OnFirstTimeEvent,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
  return;
}


/* Void add_OnXPRewarded(Action`1[Int32]) */

void Assembly-CSharp.dll::GameEventManager::GameEventManager_add_OnXPRewarded
               (GameEventManager *this,Action_1_Int32_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnXPRewarded;
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
    pAVar5 = (Action_1_Int32_ *)func_?(&(this->fields).OnXPRewarded,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
  return;
}


/* Void remove_OnFirstTimeEvent(Action`1[MV.WorldObject.MetaData.FirstTimeEvent]) */

void Assembly-CSharp.dll::GameEventManager::GameEventManager_remove_OnFirstTimeEvent
               (GameEventManager *this,Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnFirstTimeEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,
                              TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
             func_?(&(this->fields).OnFirstTimeEvent,iVar3,source);
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
}


/* Void remove_OnXPRewarded(Action`1[Int32]) */

void Assembly-CSharp.dll::GameEventManager::GameEventManager_remove_OnXPRewarded
               (GameEventManager *this,Action_1_Int32_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnXPRewarded;
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
    pAVar5 = (Action_1_Int32_ *)func_?(&(this->fields).OnXPRewarded,iVar3,source);
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
}

