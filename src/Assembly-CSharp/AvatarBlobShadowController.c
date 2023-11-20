
/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_OnDestroy
               (AvatarBlobShadowController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AvatarBlobShadowController__OnQualityLevelChanged_int_);
    func_?(&TypeInfo__MVQualitySettings);
    func_?(&TypeInfo__MVQualitySettings__OnQualityLevedChanged);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVQualitySettings);
  }
  pMVar1 = TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged;
  this_00 = (UnityAction_1_System_Int32Enum_ *)
            func_?(TypeInfo__MVQualitySettings__OnQualityLevedChanged);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarBlobShadowController__OnQualityLevelChanged_int_,(MethodInfo *)0x0);
  pMStack2 =
       (MVQualitySettings_OnQualityLevedChanged *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pMVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pMStack2 == (MVQualitySettings_OnQualityLevedChanged *)0x0) {
    TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged =
         (MVQualitySettings_OnQualityLevedChanged *)0x0;
code_?:
    func_?();
    return;
  }
  pMVar1 = (MVQualitySettings_OnQualityLevedChanged *)0x0;
  if (pMStack2->klass == TypeInfo__MVQualitySettings__OnQualityLevedChanged) {
    pMVar1 = pMStack2;
  }
  if (pMVar1 == (MVQualitySettings_OnQualityLevedChanged *)0x0) {
    pMStack3 = TypeInfo__MVQualitySettings__OnQualityLevedChanged;
    func_?();
    pMStack2 = extraout_ECX;
    pMStack3 = extraout_EDX;
  }
  else {
    TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged = pMVar1;
    pMVar1 = (MVQualitySettings_OnQualityLevedChanged *)0x0;
    if (pMStack2->klass == TypeInfo__MVQualitySettings__OnQualityLevedChanged) {
      pMVar1 = pMStack2;
    }
    pMStack3 = TypeInfo__MVQualitySettings__OnQualityLevedChanged;
    if (pMVar1 != (MVQualitySettings_OnQualityLevedChanged *)0x0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_OnEnable
               (AvatarBlobShadowController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVQualitySettings);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
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
  puStack_1 = &stack0xfffffffc;
  if ((this->fields).forceHidden == 0) {
    if (level != 0) {
      if (level == 1) goto code_?;
      if (level != 2) {
        return;
      }
    }
    this = (AvatarBlobShadowController *)(this->fields).blobProjector;
    if (this == (AvatarBlobShadowController *)0x0) {
code_?:
      uVar2 = func_?(&puStack_3);
      func_?(uVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    level = 1;
  }
  else {
code_?:
    this = (AvatarBlobShadowController *)(this->fields).blobProjector;
    if (this == (AvatarBlobShadowController *)0x0) goto code_?;
    level = 0;
  }
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?();
  }
  puStack_1 = (undefined1 *)level;
  pAStack_5 = this;
  (*pcRam_?)();
  return;
}


/* Void ScaleShadow(Single) */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_ScaleShadow
               (AvatarBlobShadowController *this,float scale,MethodInfo *method)

{
  this_00 = (this->fields).blobProjector;
  if (this_00 != (Projector *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Projector::Projector_set_orthographicSize
              (this_00,scale,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_Start
               (AvatarBlobShadowController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AvatarBlobShadowController__OnQualityLevelChanged_int_);
    func_?(&TypeInfo__MVQualitySettings);
    func_?(&TypeInfo__MVQualitySettings__OnQualityLevedChanged);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVQualitySettings);
  }
  pMVar1 = TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged;
  this_00 = (UnityAction_1_System_Int32Enum_ *)
            func_?(TypeInfo__MVQualitySettings__OnQualityLevedChanged);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarBlobShadowController__OnQualityLevelChanged_int_,(MethodInfo *)0x0);
  pMVar1 = (MVQualitySettings_OnQualityLevedChanged *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pMVar1 == (MVQualitySettings_OnQualityLevedChanged *)0x0) {
    TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged =
         (MVQualitySettings_OnQualityLevedChanged *)0x0;
code_?:
    func_?();
    level = MVQualitySettings::MVQualitySettings_get_CurrentLevel((MethodInfo *)0x0);
    AvatarBlobShadowController_OnQualityLevelChanged(this,level,(MethodInfo *)0x0);
    (this->fields).forceHidden = 0;
    return;
  }
  pMVar2 = (MVQualitySettings_OnQualityLevedChanged *)0x0;
  if (pMVar1->klass == TypeInfo__MVQualitySettings__OnQualityLevedChanged) {
    pMVar2 = pMVar1;
  }
  if (pMVar2 == (MVQualitySettings_OnQualityLevedChanged *)0x0) {
    func_?();
  }
  else {
    TypeInfo__MVQualitySettings->static_fields->onQualityLevelChanged = pMVar2;
    pMVar2 = (MVQualitySettings_OnQualityLevedChanged *)0x0;
    if (pMVar1->klass == TypeInfo__MVQualitySettings__OnQualityLevedChanged) {
      pMVar2 = pMVar1;
    }
    if (pMVar2 != (MVQualitySettings_OnQualityLevedChanged *)0x0) goto code_?;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_ForceHidden(Boolean) */

void Assembly-CSharp.dll::AvatarBlobShadowController::AvatarBlobShadowController_set_ForceHidden
               (AvatarBlobShadowController *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVQualitySettings);
    cRam_? = '\x01';
  }
  (this->fields).forceHidden = value;
  if ((TypeInfo__MVQualitySettings->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVQualitySettings);
  }
  level = MVQualitySettings::MVQualitySettings_get_CurrentLevel((MethodInfo *)0x0);
  AvatarBlobShadowController_OnQualityLevelChanged(this,level,(MethodInfo *)0x0);
  return;
}

