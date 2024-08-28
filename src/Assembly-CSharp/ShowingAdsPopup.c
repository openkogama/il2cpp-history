
/* Void Initialize(Single, Action) */

void Assembly-CSharp.dll::ShowingAdsPopup::ShowingAdsPopup_Initialize
               (ShowingAdsPopup *this,float timeoutTime,Action *OnSkipPressed,MethodInfo *method)

{
  ppAVar1 = &(this->fields).skipAction;
  *ppAVar1 = OnSkipPressed;
  func_?(ppAVar1,OnSkipPressed);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).startTime = fVar2;
  (this->fields).timeoutTime = timeoutTime;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ShowingAdsPopup::ShowingAdsPopup_OnDestroy
               (ShowingAdsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MainCameraManager);
    func_?(&StringLiteral_Resuming_audio);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Resuming_audio,(MethodInfo *)0x0);
  value = (this->fields).previousMuteState;
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  MainCameraManager::MainCameraManager_set_Mute(value,(MethodInfo *)0x0);
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::ShowingAdsPopup::ShowingAdsPopup_OnEnable
               (ShowingAdsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MainCameraManager);
    func_?(&StringLiteral_Muting_audio);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MainCameraManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  (this->fields).previousMuteState = TypeInfo__MainCameraManager->static_fields->mute;
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Muting_audio,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__MainCameraManager->static_fields->mute = in_stack_1;
  if (TypeInfo__MainCameraManager->static_fields->mute == 0) {
    if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    value = TypeInfo__MainCameraManager->static_fields->baseVolume;
  }
  else {
    value = 0.0;
  }
  UnityEngine.AudioModule.dll::UnityEngine::AudioListener::AudioListener_set_volume
            (value,(MethodInfo *)0x0);
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pAVar2 = TypeInfo__MainCameraManager->static_fields->OnMuteChange;
  if (pAVar2 != (Action_1_Boolean_ *)0x0) {
    if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    (*(pAVar2->fields)._._.invoke_impl)((pAVar2->fields)._._.method_code);
  }
  return;
}


/* Void OnSkip() */

void Assembly-CSharp.dll::ShowingAdsPopup::ShowingAdsPopup_OnSkip
               (ShowingAdsPopup *this,MethodInfo *method)

{
  pAVar1 = (this->fields).skipAction;
  if (pAVar1 != (Action *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ShowingAdsPopup::ShowingAdsPopup_Update
               (ShowingAdsPopup *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar1 - (this->fields).startTime < (this->fields).timeoutTime) {
    return;
  }
  this_00 = (this->fields).button;
  if ((this_00 != (Button *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,1,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

