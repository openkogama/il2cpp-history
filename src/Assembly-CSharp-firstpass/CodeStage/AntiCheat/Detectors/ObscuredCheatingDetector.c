
/* Void Awake() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
     ObscuredCheatingDetector_Awake(ObscuredCheatingDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
  instancesInScene =
       TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
       instancesInScene + 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = (*(code *)(this->klass->vtable).Init.method)
                    (this,TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->
                          static_fields->_Instance_k__BackingField,
                     StringLiteral_Obscured_Cheating_Detector,
                     (this->klass->vtable).DisposeInternal.methodPtr);
  if (cVar1 != '\0') {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
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
             MethodInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector__OnLevelWasLoadedNew_UnityEngine__SceneManagement__Scene__UnityEngine__SceneManagement__LoadSceneMode_
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

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
     ObscuredCheatingDetector_Dispose(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
           _Instance_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pOVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      pIStack3 = (Il2CppMethodPointer)_UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pOVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar1 == (ObscuredCheatingDetector *)0x0) {
      pIStack3 = (Il2CppMethodPointer)0x0;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pOVar5 = pOVar1->klass;
    pIStack3 = (pOVar5->vtable).DetectorHasAdditionalCallbacks.methodPtr;
    (*(code *)(pOVar5->vtable).DisposeInternal.method)();
  }
  return;
}


/* Void DisposeInternal() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
     ObscuredCheatingDetector_DisposeInternal(ObscuredCheatingDetector *this,MethodInfo *method)

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
  x = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
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
    TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
    _Instance_k__BackingField = (ObscuredCheatingDetector *)0x0;
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
     ObscuredCheatingDetector_OnDestroy(ObscuredCheatingDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ActDetectorBase::ActDetectorBase_OnDestroy((ActDetectorBase *)this,(MethodInfo *)0x0);
  TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
  instancesInScene =
       TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
       instancesInScene + -1;
  return;
}


/* Void OnLevelLoadedCallback() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
     ObscuredCheatingDetector_OnLevelLoadedCallback
               (ObscuredCheatingDetector *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = (this->fields)._.keepAlive;
  if (TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
      instancesInScene < 2) {
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
    x = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
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


/* Void StartDetection() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
     ObscuredCheatingDetector_StartDetection(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
           _Instance_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pOVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral__ACTk__Obscured_Cheating_Detecto,(MethodInfo *)0x0);
    return;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
           _Instance_k__BackingField;
  if (pOVar1 != (ObscuredCheatingDetector *)0x0) {
    ObscuredCheatingDetector_StartDetectionInternal(pOVar1,(UnityAction *)0x0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartDetectionAutomatically() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
     ObscuredCheatingDetector_StartDetectionAutomatically
               (ObscuredCheatingDetector *this,MethodInfo *method)

{
  ObscuredCheatingDetector_StartDetectionInternal(this,(UnityAction *)0x0,(MethodInfo *)0x0);
  return;
}


/* Void StartDetectionInternal(UnityAction) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
     ObscuredCheatingDetector_StartDetectionInternal
               (ObscuredCheatingDetector *this,UnityAction *callback,MethodInfo *method)

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
                ((Object *)StringLiteral__ACTk__Obscured_Cheating_Detecto,(Object_1 *)this,
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
                  ((Object *)StringLiteral__ACTk__Obscured_Cheating_Detecto,(Object_1 *)this,
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
                ((Object *)StringLiteral__ACTk__Obscured_Cheating_Detecto,(Object_1 *)this,
                 (MethodInfo *)0x0);
      (this->fields)._.detectionAction = callback;
      (this->fields)._.isRunning = 1;
      (this->fields)._.started = 1;
      return;
    }
    (this->fields)._.detectionAction = callback;
    (this->fields)._.isRunning = 1;
    (this->fields)._.started = 1;
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning_1
            ((Object *)StringLiteral__ACTk__Obscured_Cheating_Detecto,(Object_1 *)this,
             (MethodInfo *)0x0);
  return;
}


/* Void StartDetection(UnityAction) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
     ObscuredCheatingDetector_StartDetection_1(UnityAction *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
           _Instance_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pOVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
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
    if (pGVar3 == (GameObject *)0x0) goto code_?;
    pOVar1 = (ObscuredCheatingDetector *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       (pGVar3,
                        CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector_MethodInfo__UnityEngine__GameObject__AddComponent<CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector>__
                       );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
    _Instance_k__BackingField = pOVar1;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
           _Instance_k__BackingField;
  if (pOVar1 != (ObscuredCheatingDetector *)0x0) {
    ObscuredCheatingDetector_StartDetectionInternal(pOVar1,(UnityAction *)0x0,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StopDetection() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
     ObscuredCheatingDetector_StopDetection(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
           _Instance_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pOVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      pIStack3 = (Il2CppMethodPointer)_UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pOVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
             _Instance_k__BackingField;
    if (pOVar1 == (ObscuredCheatingDetector *)0x0) {
      pIStack3 = (Il2CppMethodPointer)0x0;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pOVar5 = pOVar1->klass;
    pIStack3 = (pOVar5->vtable).PauseDetector.methodPtr;
    (*(code *)(pOVar5->vtable).StopDetectionInternal.method)();
  }
  return;
}


/* ObscuredCheatingDetector() */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
     ObscuredCheatingDetector__ctor(ObscuredCheatingDetector *this,MethodInfo *method)

{
  (this->fields).floatEpsilon = 0.0001;
  (this->fields).vector2Epsilon = 0.1;
  (this->fields).vector3Epsilon = 0.1;
  (this->fields).quaternionEpsilon = 0.1;
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


/* ObscuredCheatingDetector get_GetOrCreateInstance() */

ObscuredCheatingDetector *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
ObscuredCheatingDetector_get_GetOrCreateInstance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
           _Instance_k__BackingField;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pOVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
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
      pOVar1 = (ObscuredCheatingDetector *)(*pcVar4)();
      return pOVar1;
    }
    pOVar1 = (ObscuredCheatingDetector *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                       (pGVar3,
                        CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector_MethodInfo__UnityEngine__GameObject__AddComponent<CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector>__
                       );
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
    _Instance_k__BackingField = pOVar1;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  return TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
         _Instance_k__BackingField;
}


/* ObscuredCheatingDetector get_Instance() */

ObscuredCheatingDetector *
Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
ObscuredCheatingDetector_get_Instance(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  return TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
         _Instance_k__BackingField;
}


/* Boolean get_IsRunning() */

bool Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
     ObscuredCheatingDetector_get_IsRunning(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
      _Instance_k__BackingField == (ObscuredCheatingDetector *)0x0) {
    return 0;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
           _Instance_k__BackingField;
  if (pOVar1 != (ObscuredCheatingDetector *)0x0) {
    return (pOVar1->fields)._.isRunning != 0;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void set_Instance(ObscuredCheatingDetector) */

void Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
     ObscuredCheatingDetector_set_Instance(ObscuredCheatingDetector *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__CodeStage__AntiCheat__Detectors__ObscuredCheatingDetector->static_fields->
  _Instance_k__BackingField = value;
  return;
}

