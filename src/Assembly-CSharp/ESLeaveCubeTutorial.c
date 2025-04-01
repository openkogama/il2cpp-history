
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESLeaveCubeTutorial::ESLeaveCubeTutorial_Enter
               (ESLeaveCubeTutorial *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelingEvent);
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
  this_03 = e;
  ESStateBase::ESStateBase_Enter((ESStateBase *)this,e,(MethodInfo *)0x0);
  e = (EditorStateMachine *)0x2f;
  pOVar1 = (Object *)func_?(TypeInfo__EditorEvent,&e);
  if (this_03 != (EditorStateMachine *)0x0) {
    FSMEntity::FSMEntity_set_Event((FSMEntity *)this_03,pOVar1,(MethodInfo *)0x0);
    this_00 = (this_03->fields).weCamera;
    if (this_00 != (MainCameraManager *)0x0) {
      MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_00,0,(MethodInfo *)0x0);
      this_01 = (this_03->fields).cubeModelingStateMachine;
      pOVar1 = (Object *)func_?();
      if (this_01 != (CubeModelingStateMachine *)0x0) {
        FSMEntity::FSMEntity_set_Event((FSMEntity *)this_01,pOVar1,(MethodInfo *)0x0);
        pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if ((pGVar2 != (GameEventManager *)0x0) &&
           (this_02 = (pGVar2->fields).AvatarCommandsBuildMode,
           this_02 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
          GameEventManager+AvatarCommandsBuildModeManager::
          GameEventManager_AvatarCommandsBuildModeManager_EnterBuildStateEvent
                    (this_02,(this->fields)._.stateType,(Object *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* ESLeaveCubeTutorial() */

void Assembly-CSharp.dll::ESLeaveCubeTutorial::ESLeaveCubeTutorial__ctor
               (ESLeaveCubeTutorial *this,MethodInfo *method)

{
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  ppWVar2 = &(this->fields)._.tintedWo;
  *ppWVar2 = pWVar1;
  func_?(ppWVar2,&stack0xfffffffc,&UNK_?,ppWVar2,pWVar1);
  return;
}

