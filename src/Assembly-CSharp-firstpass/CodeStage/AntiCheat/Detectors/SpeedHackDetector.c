
/* Void Awake() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_Awake(SpeedHackDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->instancesInScene =
       TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->instancesInScene
       + 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).Init.method)
                    (this,TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->
                          static_fields->_Instance_k__BackingField,StringLiteral_Speed_Hack_Detector
                     ,(this->klass->vtable).DisposeInternal.methodPtr);
  if (cVar1 != '\0') {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
    _Instance_k__BackingField = this;
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::SceneManagement::Scene,_UnityEngine::SceneManagement::LoadSceneMode>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector__OnLevelWasLoadedNew_UnityEngine__SceneManagement__Scene__UnityEngine__SceneManagement__LoadSceneMode_
             ,
             MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::SceneManagement::Scene,_UnityEngine::SceneManagement::LoadSceneMode>__UnityAction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__SceneManagement__SceneManager->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
  SceneManager_add_sceneLoaded
            ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_
              *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void Dispose() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_Dispose(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
           _Instance_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      pIStack3 = (Il2CppMethodPointer)_UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
             _Instance_k__BackingField;
    if (pSVar1 == (SpeedHackDetector *)0x0) {
      pIStack3 = (Il2CppMethodPointer)0x0;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pSVar5 = pSVar1->klass;
    pIStack3 = (pSVar5->vtable).DetectorHasAdditionalCallbacks.methodPtr;
    (*(code *)(pSVar5->vtable).DisposeInternal.method)();
  }
  return;
}


/* Void DisposeInternal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_DisposeInternal(SpeedHackDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  x = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
      _Instance_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      uStack2 = _UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
    _Instance_k__BackingField = (SpeedHackDetector *)0x0;
  }
  return;
}


/* Void OnApplicationPause(Boolean) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_OnApplicationPause(SpeedHackDetector *this,bool pause,MethodInfo *method)

{
  if (pause == 0) {
    SpeedHackDetector_ResetStartTicks(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_OnDestroy(SpeedHackDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ActDetectorBase::ActDetectorBase_OnDestroy((ActDetectorBase *)this,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->instancesInScene =
       TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->instancesInScene
       + -1;
  return;
}


/* Void OnLevelLoadedCallback() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_OnLevelLoadedCallback(SpeedHackDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = (this->fields)._.keepAlive;
  if (TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->instancesInScene
      < 2) {
    if (bVar1 != 0) {
      return;
    }
  }
  else {
    if (bVar1 != 0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    x = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
        _Instance_k__BackingField;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)this,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
  }
  (*(code *)(this->klass->vtable).DisposeInternal.method)
            (this,(this->klass->vtable).DetectorHasAdditionalCallbacks.methodPtr);
  return;
}


/* Void PauseDetector() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_PauseDetector(SpeedHackDetector *this,MethodInfo *method)

{
  (this->fields)._.isRunning = 0;
  return;
}


/* Void ResetStartTicks() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_ResetStartTicks(SpeedHackDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  iStack_3 = 0;
  uStack_4 = 0;
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar5 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow(&DStack_6,(MethodInfo *)0x0);
  uStack_1 = (undefined4)(pDVar5->ticks)._ticks;
  uStack_2 = *(undefined4 *)((int)&(pDVar5->ticks)._ticks + 4);
  iStack_3 = pDVar5->kind;
  uStack_4 = *(undefined4 *)&pDVar5->field_0xc;
  iVar7 = func_?(&uStack_1,0);
  (this->fields).ticksOnStart = iVar7;
  iVar8 = mscorlib.dll::System::Environment::Environment_get_TickCount((MethodInfo *)0x0);
  uVar9 = *(undefined4 *)((int)&(this->fields).ticksOnStart + 4);
  uVar10 = (undefined4)(this->fields).ticksOnStart;
  (this->fields).vulnerableTicksOnStart = (longlong)iVar8 * 10000;
  *(undefined4 *)&(this->fields).prevTicks = uVar10;
  *(undefined4 *)((int)&(this->fields).prevTicks + 4) = uVar9;
  *(undefined4 *)&(this->fields).prevIntervalTicks = uVar10;
  *(undefined4 *)((int)&(this->fields).prevIntervalTicks + 4) = uVar9;
  return;
}


/* Void ResumeDetector() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_ResumeDetector(SpeedHackDetector *this,MethodInfo *method)

{
  if (((this->fields)._.detectionAction != (UnityAction *)0x0) ||
     ((this->fields)._.detectionEventHasListener != 0)) {
    (this->fields)._.isRunning = 1;
  }
  return;
}


/* Void StartDetection() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StartDetection(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
           _Instance_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral__ACTk__Speed_Hack_Detector__can_,(MethodInfo *)0x0);
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
           _Instance_k__BackingField;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar3 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
           _Instance_k__BackingField;
  if (pSVar3 != (SpeedHackDetector *)0x0) {
    checkInterval = (undefined *)(pSVar3->fields).interval;
    if (cRam_? == '\0') {
      checkInterval = &UNK_?;
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
        _Instance_k__BackingField != (SpeedHackDetector *)0x0) {
      if (cRam_? == '\0') {
        checkInterval = &UNK_?;
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pSVar3 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
               _Instance_k__BackingField;
      if ((pSVar3 != (SpeedHackDetector *)0x0) && (pSVar1 != (SpeedHackDetector *)0x0)) {
        SpeedHackDetector_StartDetectionInternal
                  (pSVar1,(UnityAction *)0x0,(float)checkInterval,0,(pSVar3->fields).coolDown,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StartDetectionAutomatically() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StartDetectionAutomatically(SpeedHackDetector *this,MethodInfo *method)

{
  SpeedHackDetector_StartDetectionInternal
            (this,(UnityAction *)0x0,(this->fields).interval,(this->fields).maxFalsePositives,
             (this->fields).coolDown,(MethodInfo *)0x0);
  return;
}


/* Void StartDetectionInternal(UnityAction, Single, Byte, Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StartDetectionInternal
               (SpeedHackDetector *this,UnityAction *callback,float checkInterval,
               uint8_t falsePositives,int32_t shotsTillCooldown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._.isRunning == 0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)this,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning_1
                ((Object *)StringLiteral__ACTk__Speed_Hack_Detector__disa,(Object_1 *)this,
                 (MethodInfo *)0x0);
      return;
    }
    bVar1 = (this->fields)._.detectionEventHasListener;
    if (callback == (UnityAction *)0x0) {
      if (bVar1 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning_1
                  ((Object *)StringLiteral__ACTk__Speed_Hack_Detector__was_,(Object_1 *)this,
                   (MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this,0,(MethodInfo *)0x0);
        return;
      }
    }
    else if (bVar1 != 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning_1
                ((Object *)StringLiteral__ACTk__Speed_Hack_Detector__has_,(Object_1 *)this,
                 (MethodInfo *)0x0);
    }
    (this->fields).maxFalsePositives = falsePositives;
    (this->fields)._.detectionAction = callback;
    (this->fields).interval = checkInterval;
    (this->fields).coolDown = shotsTillCooldown;
    SpeedHackDetector_ResetStartTicks(this,(MethodInfo *)0x0);
    (this->fields).currentFalsePositives = 0;
    (this->fields).currentCooldownShots = 0;
    (this->fields)._.isRunning = 1;
    (this->fields)._.started = 1;
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning_1
            ((Object *)StringLiteral__ACTk__Speed_Hack_Detector__alre,(Object_1 *)this,
             (MethodInfo *)0x0);
  return;
}


/* Void StartDetection(UnityAction) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StartDetection_1(UnityAction *callback,MethodInfo *method)

{
  pSVar1 = SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
  if (pSVar1 != (SpeedHackDetector *)0x0) {
    pSVar1 = SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)(pSVar1->fields).interval);
    if (pSVar1 != (SpeedHackDetector *)0x0) {
      pSVar1 = SpeedHackDetector_get_GetOrCreateInstance
                         ((MethodInfo *)(uint)(pSVar1->fields).maxFalsePositives);
      if (pSVar1 != (SpeedHackDetector *)0x0) {
        shotsTillCooldown = (pSVar1->fields).coolDown;
        checkInterval = &UNK_?;
        pSVar1 = SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
        if (pSVar1 != (SpeedHackDetector *)0x0) {
          SpeedHackDetector_StartDetectionInternal
                    (pSVar1,callback,(float)checkInterval,(uint8_t)shotsTillCooldown,
                     shotsTillCooldown,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StartDetection(UnityAction, Single) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StartDetection_2(UnityAction *callback,float interval,MethodInfo *method)

{
  pSVar1 = SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
  if (pSVar1 != (SpeedHackDetector *)0x0) {
    pSVar1 = SpeedHackDetector_get_GetOrCreateInstance
                       ((MethodInfo *)(uint)(pSVar1->fields).maxFalsePositives);
    if (pSVar1 != (SpeedHackDetector *)0x0) {
      shotsTillCooldown = (pSVar1->fields).coolDown;
      pSVar1 = SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
      if (pSVar1 != (SpeedHackDetector *)0x0) {
        SpeedHackDetector_StartDetectionInternal
                  (pSVar1,callback,interval,(uint8_t)shotsTillCooldown,shotsTillCooldown,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StartDetection(UnityAction, Single, Byte) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StartDetection_3
               (UnityAction *callback,float interval,uint8_t maxFalsePositives,MethodInfo *method)

{
  pSVar1 = SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
  if (pSVar1 != (SpeedHackDetector *)0x0) {
    shotsTillCooldown = (pSVar1->fields).coolDown;
    pSVar1 = SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
    if (pSVar1 != (SpeedHackDetector *)0x0) {
      SpeedHackDetector_StartDetectionInternal
                (pSVar1,callback,interval,maxFalsePositives,shotsTillCooldown,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StartDetection(UnityAction, Single, Byte, Int32) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StartDetection_4
               (UnityAction *callback,float interval,uint8_t maxFalsePositives,int32_t coolDown,
               MethodInfo *method)

{
  this = SpeedHackDetector_get_GetOrCreateInstance((MethodInfo *)0x0);
  if (this != (SpeedHackDetector *)0x0) {
    SpeedHackDetector_StartDetectionInternal
              (this,callback,interval,maxFalsePositives,coolDown,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StopDetection() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StopDetection(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
           _Instance_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      pIStack3 = (Il2CppMethodPointer)_UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
             _Instance_k__BackingField;
    if (pSVar1 == (SpeedHackDetector *)0x0) {
      pIStack3 = (Il2CppMethodPointer)0x0;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pSVar5 = pSVar1->klass;
    pIStack3 = (pSVar5->vtable).PauseDetector.methodPtr;
    (*(code *)(pSVar5->vtable).StopDetectionInternal.method)();
  }
  return;
}


/* Void StopDetectionInternal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StopDetectionInternal(SpeedHackDetector *this,MethodInfo *method)

{
  if ((this->fields)._.started != 0) {
    (this->fields)._.detectionAction = (UnityAction *)0x0;
    (this->fields)._.isRunning = 0;
    (this->fields)._.started = 0;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_Update(SpeedHackDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  iStack_3 = 0;
  uStack_4 = 0;
  if ((this->fields)._.isRunning != 0) {
    if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__DateTime);
    }
    pDVar5 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow
                       ((DateTime *)&stack0xffffffc4,(MethodInfo *)0x0);
    uStack_1 = (undefined4)(pDVar5->ticks)._ticks;
    uStack_2 = *(undefined4 *)((int)&(pDVar5->ticks)._ticks + 4);
    iStack_3 = pDVar5->kind;
    uStack_4 = *(undefined4 *)&pDVar5->field_0xc;
    iVar6 = func_?(&uStack_1,0);
    iStack_7 = (int)((ulonglong)iVar6 >> 0x20);
    uVar8 = (uint)iVar6;
    piVar9 = &(this->fields).prevTicks;
    if ((iStack_7 - *(int *)((int)&(this->fields).prevTicks + 4) == (uint)(uVar8 < (uint)*piVar9))
       && (uVar8 - (int)*piVar9 < 0x989681)) {
      uVar10 = 0;
      fVar11 = (this->fields).interval * _UNK_?;
      (this->fields).prevTicks = iVar6;
      lVar12 = func_?();
      piVar9 = &(this->fields).prevIntervalTicks;
      if (lVar12 <= CONCAT44((iStack_7 - *(int *)((int)&(this->fields).prevIntervalTicks + 4)) -
                             (uint)(uVar8 < (uint)*piVar9),uVar8 - (int)*piVar9)) {
        iVar13 = mscorlib.dll::System::Environment::Environment_get_TickCount((MethodInfo *)0x0);
        lVar12 = (longlong)iVar13 * 10000;
        uStack_14 = (undefined4)((ulonglong)lVar12 >> 0x20);
        uStack_15 = (undefined4)lVar12;
        uStack_16 = (undefined4)(this->fields).vulnerableTicksOnStart;
        uStack_17 = *(undefined4 *)((int)&(this->fields).vulnerableTicksOnStart + 4);
        uStack_18 = *(undefined4 *)((int)&(this->fields).ticksOnStart + 4);
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
          lVar12 = CONCAT44(uStack_14,uStack_15);
        }
        uStack_14 = (undefined4)((ulonglong)lVar12 >> 0x20);
        uStack_15 = (undefined4)lVar12;
        uVar19 = (this->fields).currentFalsePositives;
        func_?();
        if (_UNK_? <
            (float)(double)CONCAT44((uint)((ulonglong)(double)(float)(double)CONCAT44(uVar10,fVar11)
                                          >> 0x20) & _UNK_?,
                                    SUB84((double)(float)(double)CONCAT44(uVar10,fVar11),0) &
                                    _UNK_?)) {
          bVar20 = uVar19 + 1;
          (this->fields).currentFalsePositives = bVar20;
          if (bVar20 <= (this->fields).maxFalsePositives) {
            (this->fields).currentCooldownShots = 0;
            SpeedHackDetector_ResetStartTicks(this,(MethodInfo *)0x0);
            *(uint *)&(this->fields).prevIntervalTicks = uVar8;
            *(int *)((int)&(this->fields).prevIntervalTicks + 4) = iStack_7;
            return;
          }
          func_?(8);
        }
        else if (((uVar19 != 0) && (iVar21 = (this->fields).coolDown, 0 < iVar21)) &&
                (piVar22 = &(this->fields).currentCooldownShots, *piVar22 = *piVar22 + 1,
                iVar21 <= (this->fields).currentCooldownShots)) {
          (this->fields).currentFalsePositives = 0;
          *(uint *)&(this->fields).prevIntervalTicks = uVar8;
          *(int *)((int)&(this->fields).prevIntervalTicks + 4) = iStack_7;
          return;
        }
        *(uint *)&(this->fields).prevIntervalTicks = uVar8;
        *(int *)((int)&(this->fields).prevIntervalTicks + 4) = iStack_7;
        return;
      }
    }
    else {
      SpeedHackDetector_ResetStartTicks(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* SpeedHackDetector() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector__ctor(SpeedHackDetector *this,MethodInfo *method)

{
  (this->fields).interval = 1.0;
  (this->fields).maxFalsePositives = 3;
  (this->fields).coolDown = 0x1e;
  (this->fields)._.autoStart = 1;
  (this->fields)._.keepAlive = 1;
  (this->fields)._.autoDispose = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* SpeedHackDetector get_GetOrCreateInstance() */

SpeedHackDetector *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
SpeedHackDetector_get_GetOrCreateInstance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
           _Instance_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pGVar3 = TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->
             detectorsContainer;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pGVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar3 = (GameObject *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (pGVar3,StringLiteral_Anti_Cheat_Toolkit_Detectors,(MethodInfo *)0x0);
      TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->detectorsContainer
           = pGVar3;
    }
    pGVar3 = TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->
             detectorsContainer;
    if (pGVar3 == (GameObject *)0x0) {
      func_?(0);
      pcVar4 = (code *)swi(3);
      pSVar1 = (SpeedHackDetector *)(*pcVar4)();
      return pSVar1;
    }
    pSVar1 = (SpeedHackDetector *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       (pGVar3,
                        CodeStage__AntiCheat__Detectors__SpeedHackDetector_MethodInfo__UnityEngine__GameObject__AddComponent<CodeStage::AntiCheat::Detectors::SpeedHackDetector>__
                       );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
    _Instance_k__BackingField = pSVar1;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  return TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
         _Instance_k__BackingField;
}


/* SpeedHackDetector get_Instance() */

SpeedHackDetector *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
SpeedHackDetector_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  return TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
         _Instance_k__BackingField;
}


/* Void set_Instance(SpeedHackDetector) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_set_Instance(SpeedHackDetector *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
  _Instance_k__BackingField = value;
  return;
}

