
/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_OnDestroy
               (AvatarBlobShadowController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVQualitySettings);
  }
  pMVar1 = TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__MVQualitySettings__OnQualityLevedChanged);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarBlobShadowController__OnQualityLevelChanged_int_,(MethodInfo *)0x0);
  pMStack2 =
       (MVQualitySettings_OnQualityLevedChanged *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pMVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pMVar1 = (MVQualitySettings_OnQualityLevedChanged *)0x0;
  if (pMStack2 != (MVQualitySettings_OnQualityLevedChanged *)0x0) {
    if (pMStack2->klass == TypeInfo__MVQualitySettings__OnQualityLevedChanged) {
      pMVar1 = pMStack2;
    }
    if (pMVar1 == (MVQualitySettings_OnQualityLevedChanged *)0x0) {
      pMStack3 = TypeInfo__MVQualitySettings__OnQualityLevedChanged;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged = pMVar1;
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_OnDisable
               (AvatarBlobShadowController *this,MethodInfo *method)

{
  this_00 = (this->fields).blobProjector;
  if (this_00 != (Projector *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_OnEnable
               (AvatarBlobShadowController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVQualitySettings);
  }
  level = MVQualitySettings::MVQualitySettings_get_CurrentLevel((MethodInfo *)0x0);
  AvatarBlobShadowController_OnQualityLevelChanged(this,level,(MethodInfo *)0x0);
  return;
}


/* Void OnQualityLevelChanged(Int32) */

void Assembly-CSharp.dll::AvatarBlobShadowController::
     AvatarBlobShadowController_OnQualityLevelChanged
               (AvatarBlobShadowController *this,int32_t level,MethodInfo *method)

{
  if (level != 0) {
    if (level == 1) {
      this = (AvatarBlobShadowController *)(this->fields).blobProjector;
      if (this == (AvatarBlobShadowController *)0x0) goto code_?;
      level = 0;
      goto UnityEngine_CoreModule_dll_UnityEngine_Behaviour_Behaviour_set_enabled;
    }
    if (level != 2) {
      return;
    }
  }
  this = (AvatarBlobShadowController *)(this->fields).blobProjector;
  if (this == (AvatarBlobShadowController *)0x0) {
code_?:
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  level = 1;
UnityEngine_CoreModule_dll_UnityEngine_Behaviour_Behaviour_set_enabled:
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)func_?(&UNK_?,unaff_EBP), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?,0,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(this,level);
  return;
}


/* Void ScaleShadow(Single) */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_ScaleShadow
               (AvatarBlobShadowController *this,float scale,MethodInfo *method)

{
  this_00 = (this->fields).blobProjector;
  if (this_00 != (Projector *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Projector::Projector_set_orthographicSize
              (this_00,(this->fields).baseScale * scale,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_Start
               (AvatarBlobShadowController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVQualitySettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVQualitySettings->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVQualitySettings);
  }
  pMVar1 = TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__MVQualitySettings__OnQualityLevedChanged);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarBlobShadowController__OnQualityLevelChanged_int_,(MethodInfo *)0x0);
  pMVar2 = (MVQualitySettings_OnQualityLevedChanged *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pMVar1 = (MVQualitySettings_OnQualityLevedChanged *)0x0;
  if (pMVar2 != (MVQualitySettings_OnQualityLevedChanged *)0x0) {
    if (pMVar2->klass == TypeInfo__MVQualitySettings__OnQualityLevedChanged) {
      pMVar1 = pMVar2;
    }
    if (pMVar1 == (MVQualitySettings_OnQualityLevedChanged *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged = pMVar1;
  level = MVQualitySettings::MVQualitySettings_get_CurrentLevel((MethodInfo *)0x0);
  AvatarBlobShadowController_OnQualityLevelChanged(this,level,(MethodInfo *)0x0);
  return;
}

