
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESLeaveCubeTutorial::ESLeaveCubeTutorial_Enter
               (ESLeaveCubeTutorial *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._.logger;
  iStack_2 = (this->fields)._.stateType;
  pOVar3 = (Object *)func_?(TypeInfo__EditorEvent,&iStack_2);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSStack_4 = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_Enter_,pOVar3,(MethodInfo *)0x0);
  if (pIVar1 != (ILogger_1 *)0x0) {
    pIVar5 = pIVar1->klass;
    uVar6 = 0;
    uVar7._0_1_ = (pIVar5->_1).rank;
    uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
    if (uVar7 != 0) {
      do {
        if (pIVar5->interfaceOffsets[uVar6].interfaceType == (Il2CppClass *)TypeInfo__ILogger) {
          ppMVar8 = &(&pIVar1->klass->vtable)[pIVar5->interfaceOffsets[uVar6].offset].Log.method;
          goto code_?;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
    ppMVar8 = (MethodInfo **)func_?(pIVar1,TypeInfo__ILogger,0);
code_?:
    (*(code *)*ppMVar8)(pIVar1,pSStack_4,ppMVar8[1]);
    uStack_9 = 0x2f;
    pOVar3 = (Object *)func_?(TypeInfo__EditorEvent,&uStack_9);
    if (e != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar3,(MethodInfo *)0x0);
      this_00 = (e->fields).weCamera;
      if (this_00 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_00,0,(MethodInfo *)0x0);
        this_01 = (e->fields).cubeModelingStateMachine;
        uStack_10 = 0;
        pOVar3 = (Object *)func_?(TypeInfo__CubeModelingEvent,&uStack_10);
        if (this_01 != (CubeModelingStateMachine *)0x0) {
          FSMEntity::FSMEntity_set_Event((FSMEntity *)this_01,pOVar3,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pGVar11 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if ((pGVar11 != (GameEventManager *)0x0) &&
             (this_02 = (pGVar11->fields).AvatarCommandsBuildMode,
             this_02 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
            GameEventManager+AvatarCommandsBuildModeManager::
            GameEventManager_AvatarCommandsBuildModeManager_EnterBuildStateEvent
                      (this_02,(this->fields)._.stateType,(Object *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* ESLeaveCubeTutorial() */

void Assembly-CSharp.dll::ESLeaveCubeTutorial::ESLeaveCubeTutorial__ctor
               (ESLeaveCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  (this->fields)._.tintedWo = pWVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__LoggerManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LoggerManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LoggerManager);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if (this_00 != (LoggerManager *)0x0) {
    pIVar2 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
    (this->fields)._.logger = pIVar2;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

