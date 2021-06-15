
/* Void Initialize() */

void Assembly-CSharp.dll::AdOfferGold::AdOfferGold_Initialize(AdOfferGold *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__AdOfferGold__RewardAvailable_bool_,
             MethodInfo__System__Action<bool>__Action_System__Object__void__);
  AdRequestHandler::AdRequestHandler_GetGoldAdAvailable
            ((Action_1_Boolean_ *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void OnClick() */

void Assembly-CSharp.dll::AdOfferGold::AdOfferGold_OnClick(AdOfferGold *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,MethodInfo__AdOfferGold__OnTryClickGoldAd_bool_,
               MethodInfo__System__Action<bool>__Action_System__Object__void__);
    AdRequestHandler::AdRequestHandler_GetGoldAdAvailable
              ((Action_1_Boolean_ *)this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnShownGoldAd(Boolean) */

void Assembly-CSharp.dll::AdOfferGold::AdOfferGold_OnShownGoldAd
               (bool shouldReward,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (shouldReward != 0) {
    args = (Object__Array *)func_?(TypeInfo__System__Object,0);
    if ((((uint)(TypeInfo__BrowserComm__ToJavaScript->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_started == 0)) {
      func_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
              (StringLiteral_refreshCredentials,args,(MethodInfo *)0x0);
    text = TM::TM__(StringLiteral_Thank_you_for_watching__Enjoy_yo,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?();
    }
    NotificationController::NotificationController_PushNotification
              (text,(Sprite *)0x0,5,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_State_notification__This_should_,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Not_implemented,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnTryClickGoldAd(Boolean) */

void Assembly-CSharp.dll::AdOfferGold::AdOfferGold_OnTryClickGoldAd
               (AdOfferGold *this,bool available,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (available != 0) {
    if (TypeInfo__AdOfferGold->static_fields->__f__mg_cache0 == (Action_1_Boolean_ *)0x0) {
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<bool>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)0x0,MethodInfo__AdOfferGold__OnShownGoldAd_bool_,
                 MethodInfo__System__Action<bool>__Action_System__Object__void__);
      TypeInfo__AdOfferGold->static_fields->__f__mg_cache0 = (Action_1_Boolean_ *)pUVar1;
    }
    pAVar2 = TypeInfo__AdOfferGold->static_fields->__f__mg_cache0;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback = pAVar2;
    functionName = StringLiteral_showGoldVideoAd;
    if (TypeInfo__AdRequestHandler->static_fields->__f__mg_cache3 == (Action_2_Boolean_String_ *)0x0
       ) {
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<bool,_System::String>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)0x0,
                 MethodInfo__AdRequestHandler__ShowGoldVideoAdCallback_bool__System__String_,
                 MethodInfo__System__Action<bool,_System::String>__Action_System__Object__void__);
      TypeInfo__AdRequestHandler->static_fields->__f__mg_cache3 = (Action_2_Boolean_String_ *)pUVar1
      ;
    }
    callback = TypeInfo__AdRequestHandler->static_fields->__f__mg_cache3;
    if ((((uint)(TypeInfo__BrowserComm__ToJavaScript->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_started == 0)) {
      func_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
              (functionName,callback,(MethodInfo *)0x0);
  }
  return;
}

