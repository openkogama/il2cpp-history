
/* Void Clicked() */

void Assembly-CSharp.dll::FirstTimeButtonClicked::FirstTimeButtonClicked_Clicked
               (FirstTimeButtonClicked *this,MethodInfo *method)

{
  (this->fields).buttonHasBeenClicked = 1;
  if ((this->fields).isReady == 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).firstTimeActivatableElementBase;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pFVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pFVar1 = (this->fields).firstTimeActivatableElementBase;
    if (pFVar1 == (FirstTimeActivatableElementBase *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar2 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                      ((pFVar1->fields)._.firstTimeEvent,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pFVar1 = (this->fields).firstTimeActivatableElementBase;
      if (pFVar1 == (FirstTimeActivatableElementBase *)0x0) goto code_?;
      FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                ((pFVar1->fields)._.firstTimeEvent,(MethodInfo *)0x0);
    }
  }
  FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
            ((this->fields)._.firstTimeEvent,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)this,(MethodInfo *)0x0);
  return;
}


/* Void FirstTimeStateReceiver(FirstTimeState, FirstTimeEvent) */

void Assembly-CSharp.dll::FirstTimeButtonClicked::FirstTimeButtonClicked_FirstTimeStateReceiver
               (FirstTimeButtonClicked *this,FirstTimeState *firstTimeState,
               FirstTimeEvent__Enum latestFirstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    ((this->fields)._.firstTimeEvent,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    (this->fields).isReady = 1;
    if ((this->fields).buttonHasBeenClicked != 0) {
      FirstTimeButtonClicked_HandleFirstTimeEvent(this,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)this,(MethodInfo *)0x0);
  }
  return;
}


/* Void HandleFirstTimeEvent() */

void Assembly-CSharp.dll::FirstTimeButtonClicked::FirstTimeButtonClicked_HandleFirstTimeEvent
               (FirstTimeButtonClicked *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).firstTimeActivatableElementBase;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pFVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pFVar1 = (this->fields).firstTimeActivatableElementBase;
    if (pFVar1 == (FirstTimeActivatableElementBase *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar2 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                      ((pFVar1->fields)._.firstTimeEvent,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pFVar1 = (this->fields).firstTimeActivatableElementBase;
      if (pFVar1 == (FirstTimeActivatableElementBase *)0x0) goto code_?;
      FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                ((pFVar1->fields)._.firstTimeEvent,(MethodInfo *)0x0);
    }
  }
  FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
            ((this->fields)._.firstTimeEvent,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)this,(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeButtonClicked::FirstTimeButtonClicked_OnDestroy
               (FirstTimeButtonClicked *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                   );
    func_?(&MethodInfo__FirstTimeButtonClicked__Clicked__);
    func_?(&
                    MethodInfo__FirstTimeButtonClicked__FirstTimeStateReceiver_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_01 = (Action_2_Object_Int32Enum_ *)
            func_?(
                           TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                           );
  mscorlib.dll::System::Action`2[Object,Int32Enum]::Action_2_Object_Int32Enum___ctor
            (this_01,(Object *)this,
             MethodInfo__FirstTimeButtonClicked__FirstTimeStateReceiver_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
             ,(MethodInfo *)0x0);
  FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
            ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
              *)this_01,(MethodInfo *)0x0);
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    this_00 = (UnityEvent *)(pBVar1->fields).m_OnClick;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__FirstTimeButtonClicked__Clicked__,
               (MethodInfo *)0x0);
    if (this_00 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_RemoveListener
                (this_00,(UnityAction *)this_02,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::FirstTimeButtonClicked::FirstTimeButtonClicked_Start
               (FirstTimeButtonClicked *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                   );
    func_?(&MethodInfo__FirstTimeButtonClicked__Clicked__);
    func_?(&
                    MethodInfo__FirstTimeButtonClicked__FirstTimeStateReceiver_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).button;
  if (pBVar1 != (Button *)0x0) {
    this_00 = (UnityEvent *)(pBVar1->fields).m_OnClick;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__FirstTimeButtonClicked__Clicked__,
               (MethodInfo *)0x0);
    if (this_00 != (UnityEvent *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                (this_00,(UnityAction *)this_01,(MethodInfo *)0x0);
      this_02 = (Action_2_Object_Int32Enum_ *)
                func_?(
                               TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                               );
      mscorlib.dll::System::Action`2[Object,Int32Enum]::Action_2_Object_Int32Enum___ctor
                (this_02,(Object *)this,
                 MethodInfo__FirstTimeButtonClicked__FirstTimeStateReceiver_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                 ,(MethodInfo *)0x0);
      FirstTimeEventManager::FirstTimeEventManager_SubscribeToFirstTimeState
                ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                  *)this_02,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

