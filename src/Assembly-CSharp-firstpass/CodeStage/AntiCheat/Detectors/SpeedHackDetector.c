
/* Void Awake() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_Awake(SpeedHackDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__SceneManagement__SceneManager);
    func_?(&
                    MethodInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector__OnLevelWasLoadedNew_UnityEngine__SceneManagement__Scene__UnityEngine__SceneManagement__LoadSceneMode_
                   );
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::SceneManagement::Scene,_UnityEngine::SceneManagement::LoadSceneMode>
                   );
    func_?(&StringLiteral_Speed_Hack_Detector);
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->instancesInScene =
       TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->instancesInScene
       + 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).Init.methodPtr)
                    (this,TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->
                          static_fields->_Instance_k__BackingField,StringLiteral_Speed_Hack_Detector
                     ,(this->klass->vtable).Init.method);
  if (cVar1 != '\0') {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
    _Instance_k__BackingField = this;
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
                     _Instance_k__BackingField,this);
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::SceneManagement::Scene,_UnityEngine::SceneManagement::LoadSceneMode>
                           );
  if (this_00 != (UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,System::Int32Enum]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector__OnLevelWasLoadedNew_UnityEngine__SceneManagement__Scene__UnityEngine__SceneManagement__LoadSceneMode_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__SceneManagement__SceneManager->_1).cctor_finished_or_no_cctor == 0)
    {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::SceneManagement::SceneManager::
    SceneManager_add_sceneLoaded
              ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_LoadSceneMode_
                *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Dispose() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_Dispose(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
           _Instance_k__BackingField;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      ppSStack3 = &TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector;
      func_?();
      cRam_? = '\x01';
    }
    pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
             _Instance_k__BackingField;
    if (pSVar1 == (SpeedHackDetector *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pSVar5 = pSVar1->klass;
    ppSStack3 = (SpeedHackDetector__Class **)(pSVar5->vtable).DisposeInternal.method;
    (*(pSVar5->vtable).DisposeInternal.methodPtr)();
  }
  return;
}


/* Void DisposeInternal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_DisposeInternal(SpeedHackDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ActDetectorBase::ActDetectorBase_DisposeInternal((ActDetectorBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  x = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
      _Instance_k__BackingField;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      ppSStack2 = &TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector;
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
    _Instance_k__BackingField = (SpeedHackDetector *)0x0;
    func_?();
    return;
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
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
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
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
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
      func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
      cRam_? = '\x01';
    }
    x = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
        _Instance_k__BackingField;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)this,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
  }
  (*(this->klass->vtable).DisposeInternal.methodPtr)
            (this,(this->klass->vtable).DisposeInternal.method);
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
    func_?(&TypeInfo__System__DateTime);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  DStack_1 = mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
  iVar2 = mscorlib.dll::System::DateTime::DateTime_get_Ticks(&DStack_1,(MethodInfo *)0x0);
  (this->fields).ticksOnStart = iVar2;
  iVar3 = mscorlib.dll::System::Environment::Environment_get_TickCount((MethodInfo *)0x0);
  uVar4 = *(undefined4 *)((int)&(this->fields).ticksOnStart + 4);
  uVar5 = (undefined4)(this->fields).ticksOnStart;
  (this->fields).vulnerableTicksOnStart = (longlong)iVar3 * 10000;
  *(undefined4 *)&(this->fields).prevTicks = uVar5;
  *(undefined4 *)((int)&(this->fields).prevTicks + 4) = uVar4;
  *(undefined4 *)&(this->fields).prevIntervalTicks = uVar5;
  *(undefined4 *)((int)&(this->fields).prevIntervalTicks + 4) = uVar4;
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral__ACTk__Speed_Hack_Detector__can_);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
           _Instance_k__BackingField;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral__ACTk__Speed_Hack_Detector__can_,(MethodInfo *)0x0);
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
           _Instance_k__BackingField;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    cRam_? = '\x01';
  }
  pSVar3 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
           _Instance_k__BackingField;
  if (pSVar3 != (SpeedHackDetector *)0x0) {
    checkInterval = (undefined *)(pSVar3->fields).interval;
    if (cRam_? == '\0') {
      checkInterval = &UNK_?;
      func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
      cRam_? = '\x01';
    }
    if (TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
        _Instance_k__BackingField != (SpeedHackDetector *)0x0) {
      if (cRam_? == '\0') {
        checkInterval = &UNK_?;
        func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
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
  func_?();
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral__ACTk__Speed_Hack_Detector__disa);
    func_?(&StringLiteral__ACTk__Speed_Hack_Detector__alre);
    func_?(&StringLiteral__ACTk__Speed_Hack_Detector__has_);
    func_?(&StringLiteral__ACTk__Speed_Hack_Detector__was_);
    cRam_? = '\x01';
  }
  if ((this->fields)._.isRunning == 0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)this,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
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
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
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
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning_1
                ((Object *)StringLiteral__ACTk__Speed_Hack_Detector__has_,(Object_1 *)this,
                 (MethodInfo *)0x0);
    }
    (this->fields)._.detectionAction = callback;
    func_?(&(this->fields)._.detectionAction,callback);
    (this->fields).maxFalsePositives = falsePositives;
    (this->fields).interval = checkInterval;
    (this->fields).coolDown = shotsTillCooldown;
    SpeedHackDetector_ResetStartTicks(this,(MethodInfo *)0x0);
    (this->fields).currentFalsePositives = 0;
    (this->fields).currentCooldownShots = 0;
    (this->fields)._.isRunning = 1;
    (this->fields)._.started = 1;
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
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
  func_?();
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
  func_?();
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
  func_?();
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
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StopDetection() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StopDetection(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
           _Instance_k__BackingField;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      ppSStack3 = &TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector;
      func_?();
      cRam_? = '\x01';
    }
    pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
             _Instance_k__BackingField;
    if (pSVar1 == (SpeedHackDetector *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pSVar5 = pSVar1->klass;
    ppSStack3 = (SpeedHackDetector__Class **)(pSVar5->vtable).StopDetectionInternal.method;
    (*(pSVar5->vtable).StopDetectionInternal.methodPtr)();
  }
  return;
}


/* Void StopDetectionInternal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::SpeedHackDetector::
     SpeedHackDetector_StopDetectionInternal(SpeedHackDetector *this,MethodInfo *method)

{
  if ((this->fields)._.started != 0) {
    (this->fields)._.detectionAction = (UnityAction *)0x0;
    func_?(&(this->fields)._.detectionAction,0);
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
    func_?(&TypeInfo__System__DateTime);
    cRam_? = '\x01';
  }
  if ((this->fields)._.isRunning != 0) {
    if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__DateTime);
    }
    mscorlib.dll::System::DateTime::DateTime_get_UtcNow((MethodInfo *)0x0);
    iVar1 = mscorlib.dll::System::DateTime::DateTime_get_Ticks
                       ((DateTime *)&stack0xffffffec,(MethodInfo *)0x0);
    iVar2 = (int)((ulonglong)iVar1 >> 0x20);
    uVar3 = (uint)iVar1;
    piVar4 = &(this->fields).prevTicks;
    if ((iVar2 - *(int *)((int)&(this->fields).prevTicks + 4) == (uint)(uVar3 < (uint)*piVar4)) &&
       (uVar3 - (int)*piVar4 < 0x989681)) {
      fVar5 = (this->fields).interval * _UNK_?;
      piVar4 = &(this->fields).prevIntervalTicks;
      iVar6 = *piVar4;
      iVar7 = *piVar4;
      (this->fields).prevTicks = iVar1;
      iVar8 = *(int *)((int)&(this->fields).prevIntervalTicks + 4);
      dVar9 = (double)fVar5;
      lVar10 = func_?();
      if (lVar10 <= CONCAT44((iVar2 - iVar8) - (uint)(uVar3 < (uint)iVar6),uVar3 - (int)iVar7)) {
        mscorlib.dll::System::Environment::Environment_get_TickCount((MethodInfo *)0x0);
        uVar11 = (this->fields).currentFalsePositives;
        func_?();
        if (_UNK_? < (float)((uint)(float)dVar9 & _UNK_?)) {
          bVar12 = uVar11 + 1;
          (this->fields).currentFalsePositives = bVar12;
          if (bVar12 <= (this->fields).maxFalsePositives) {
            (this->fields).currentCooldownShots = 0;
            SpeedHackDetector_ResetStartTicks(this,(MethodInfo *)0x0);
            (this->fields).prevIntervalTicks = iVar1;
            return;
          }
          func_?();
        }
        else if (((uVar11 != 0) && (0 < (this->fields).coolDown)) &&
                (iVar8 = (this->fields).currentCooldownShots + 1,
                (this->fields).currentCooldownShots = iVar8, (this->fields).coolDown <= iVar8)) {
          *(uint *)&(this->fields).prevIntervalTicks = uVar3;
          (this->fields).currentFalsePositives = 0;
          *(int *)((int)&(this->fields).prevIntervalTicks + 4) = iVar2;
          return;
        }
        (this->fields).prevIntervalTicks = iVar1;
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
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase);
    func_?(&
                    CodeStage__AntiCheat__Detectors__SpeedHackDetector_MethodInfo__UnityEngine__GameObject__AddComponent<CodeStage::AntiCheat::Detectors::SpeedHackDetector>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Anti_Cheat_Toolkit_Detectors);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    cRam_? = '\x01';
  }
  pSVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
           _Instance_k__BackingField;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pSVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pGVar3 = TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->
             detectorsContainer;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pGVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar3 = (GameObject *)func_?();
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (pGVar3,StringLiteral_Anti_Cheat_Toolkit_Detectors,(MethodInfo *)0x0);
      TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->detectorsContainer
           = pGVar3;
      func_?();
    }
    pGVar3 = TypeInfo__CodeStage__AntiCheat__Detectors__ActDetectorBase->static_fields->
             detectorsContainer;
    if (pGVar3 == (GameObject *)0x0) {
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      pSVar1 = (SpeedHackDetector *)(*pcVar4)();
      return pSVar1;
    }
    pSVar1 = (SpeedHackDetector *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (pGVar3,
                        CodeStage__AntiCheat__Detectors__SpeedHackDetector_MethodInfo__UnityEngine__GameObject__AddComponent<CodeStage::AntiCheat::Detectors::SpeedHackDetector>__
                       );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
    _Instance_k__BackingField = pSVar1;
    func_?();
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
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
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
    func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector);
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
  _Instance_k__BackingField = value;
  func_?(&TypeInfo__CodeStage__AntiCheat__Detectors__SpeedHackDetector->static_fields->
                   _Instance_k__BackingField,unaff_EBP);
  return;
}

