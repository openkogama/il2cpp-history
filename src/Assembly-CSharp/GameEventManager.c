
/* Void NotifyFirstTimeEvent(FirstTimeEvent) */

void Assembly-CSharp.dll::GameEventManager::GameEventManager_NotifyFirstTimeEvent
               (GameEventManager *this,FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields).OnFirstTimeEvent;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,firstTimeEvent,
               MethodInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>__Invoke_MV__WorldObject__MetaData__FirstTimeEvent_
              );
  }
  return;
}


/* Void NotifyXPDeltaAmount(Int32) */

void Assembly-CSharp.dll::GameEventManager::GameEventManager_NotifyXPDeltaAmount
               (GameEventManager *this,int32_t xp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields).OnXPRewarded;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,xp,MethodInfo__System__Action<int>__Invoke_int_);
  }
  return;
}


/* GameEventManager() */

void Assembly-CSharp.dll::GameEventManager::GameEventManager__ctor
               (GameEventManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__GameEventManager__AvatarCommandsPlayModeManager;
  this_00 = (GameEventManager_AvatarCommandsPlayModeManager *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this_00,0.0,(MethodInfo *)method_01);
  (this->fields).AvatarCommandsPlayMode = this_00;
  pSVar1 = (ScaleAnimationBase *)
           func_?(TypeInfo__GameEventManager__AvatarCommandsBuildModeManager);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_02 = TypeInfo__GameEventManager_AvatarCommandsBuildModeManager__LaserCommandsManager;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_02);
  (pSVar1->fields).originalScale.y = (float)this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_02);
  (this->fields).AvatarCommandsBuildMode = (GameEventManager_AvatarCommandsBuildModeManager *)pSVar1
  ;
  pSVar1 = (ScaleAnimationBase *)func_?(TypeInfo__GameEventManager__GameStateManager);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>
  ;
  this_02 = (ReadOnlyCollection_1_UnityEngine_Vector2_ *)func_?();
  mscorlib.dll::System::Collections::ObjectModel::ReadOnlyCollection`1[UnityEngine::Vector2]::
  ReadOnlyCollection_1_UnityEngine_Vector2__System_Collections_Generic_IList_T__get_Item
            (this_02,0,
             MethodInfo__GameEventManager__GameEventSubscribableVariable<MV::Common::MVGameStateType>__GameEventSubscribableVariable_MV__Common__MVGameStateType_
            );
  (pSVar1->fields).originalScale.x = (float)this_02;
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)method_00);
  (this->fields).GameState = (GameEventManager_GameStateManager *)pSVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}


/* Void add_OnFirstTimeEvent(Action`1[MV.WorldObject.MetaData.FirstTimeEvent]) */

void Assembly-CSharp.dll::GameEventManager::GameEventManager_add_OnFirstTimeEvent
               (GameEventManager *this,Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnFirstTimeEvent;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_MV_WorldObject_MetaData_FirstTimeEvent___Class *)pDVar2->klass ==
          TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnXPRewarded(Action`1[Int32]) */

void Assembly-CSharp.dll::GameEventManager::GameEventManager_add_OnXPRewarded
               (GameEventManager *this,Action_1_Int32_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnXPRewarded;
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


/* Void remove_OnFirstTimeEvent(Action`1[MV.WorldObject.MetaData.FirstTimeEvent]) */

void Assembly-CSharp.dll::GameEventManager::GameEventManager_remove_OnFirstTimeEvent
               (GameEventManager *this,Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnFirstTimeEvent;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_MV_WorldObject_MetaData_FirstTimeEvent___Class *)pDVar2->klass ==
          TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeEvent>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)
             func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnXPRewarded(Action`1[Int32]) */

void Assembly-CSharp.dll::GameEventManager::GameEventManager_remove_OnXPRewarded
               (GameEventManager *this,Action_1_Int32_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnXPRewarded;
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

