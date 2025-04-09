
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
  method_00 = TypeInfo__GameEventManager__AvatarCommandsPlayModeManager;
  value = (GameEventManager_AvatarCommandsPlayModeManager *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  ppGVar1 = &(this->fields).AvatarCommandsPlayMode;
  *ppGVar1 = value;
  func_?(ppGVar1,value);
  value_00 = (GameEventManager_AvatarCommandsBuildModeManager *)
             func_?(TypeInfo__GameEventManager__AvatarCommandsBuildModeManager);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameEventManager_AvatarCommandsBuildModeManager__LaserCommandsManager
                   );
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__GameEventManager_AvatarCommandsBuildModeManager__LaserCommandsManager;
  value_01 = (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
             func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value_01,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  pMVar2 = (MethodInfo *)&(value_00->fields).LaserCommands;
  *(GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager **)pMVar2 = value_01;
  func_?(pMVar2,value_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value_00,ExceptionArgument__Enum_obj,pMVar2);
  ppGVar3 = &(this->fields).AvatarCommandsBuildMode;
  *ppGVar3 = value_00;
  func_?(ppGVar3,value_00);
  value_02 = (GameEventManager_GameStateManager *)
             func_?(TypeInfo__GameEventManager__GameStateManager);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (GameEventManager_GameEventSubscribableVariable_1_System_Int32Enum_ *)func_?();
  GameEventManager+GameEventSubscribableVariable`1[System::Int32Enum]::
  GameEventManager_GameEventSubscribableVariable_1_System_Int32Enum___ctor
            (this_00,0,
             MethodInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>__GameEventSubscribableVariable_MV__Common__MVGameStateType_
            );
  pMVar2 = (MethodInfo *)&(value_02->fields).gameStateType;
  *(GameEventManager_GameEventSubscribableVariable_1_System_Int32Enum_ **)pMVar2 = this_00;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value_02,ExceptionArgument__Enum_obj,pMVar2);
  pMVar2 = (MethodInfo *)&(this->fields).GameState;
  *(GameEventManager_GameStateManager **)pMVar2 = value_02;
  func_?(pMVar2,value_02);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,pMVar2);
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
  ppAVar1 = &(this->fields).OnFirstTimeEvent;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,
                              TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
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
  ppAVar1 = &(this->fields).OnXPRewarded;
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


/* Void remove_OnFirstTimeEvent(Action`1[MV.WorldObject.MetaData.FirstTimeEvent]) */

void Assembly-CSharp.dll::GameEventManager::GameEventManager_remove_OnFirstTimeEvent
               (GameEventManager *this,Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnFirstTimeEvent;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,
                              TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
             func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
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
  ppAVar1 = &(this->fields).OnXPRewarded;
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

