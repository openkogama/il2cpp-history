
/* Void Initialize() */

void Assembly-CSharp.dll::AdOfferGold::AdOfferGold_Initialize(AdOfferGold *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&MethodInfo__AdOfferGold__RewardAvailable_bool_);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_ByteEnum_ *)func_?(TypeInfo__System__Action<bool>);
  if (this_00 != (UnityAction_1_System_ByteEnum_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (this_00,(Object *)this,MethodInfo__AdOfferGold__RewardAvailable_bool_,
               (MethodInfo *)0x0);
    AdRequestHandler::AdRequestHandler_GetGoldAdAvailable
              ((Action_1_Boolean_ *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnClick() */

void Assembly-CSharp.dll::AdOfferGold::AdOfferGold_OnClick(AdOfferGold *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&MethodInfo__AdOfferGold__OnTryClickGoldAd_bool_);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    this_01 = (UnityAction_1_System_ByteEnum_ *)func_?(TypeInfo__System__Action<bool>);
    if (this_01 != (UnityAction_1_System_ByteEnum_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
      UnityAction_1_System_ByteEnum___ctor
                (this_01,(Object *)this,MethodInfo__AdOfferGold__OnTryClickGoldAd_bool_,
                 (MethodInfo *)0x0);
      AdRequestHandler::AdRequestHandler_GetGoldAdAvailable
                ((Action_1_Boolean_ *)this_01,(MethodInfo *)0x0);
      return;
    }
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
    func_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__NotificationController);
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    func_?(&StringLiteral_Not_implemented);
    func_?(&StringLiteral_refreshCredentials);
    func_?(&StringLiteral_State_notification__This_should_);
    func_?(&StringLiteral_Thank_you_for_watching__Enjoy_yo);
    cRam_? = '\x01';
  }
  pMVar1 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
  if (shouldReward != 0) {
    iVar2 = *(int *)(System__Object__MethodInfo__System__Array__Empty<System::Object>______->
                    field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar2 + 0xba) & 1) == 0) {
      iVar2 = func_?(iVar2);
    }
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_?(iVar2);
    }
    iVar2 = *(int *)(pMVar1->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar2 + 0xba) & 1) == 0) {
      iVar2 = func_?(iVar2);
    }
    args = (Object__Array *)**(undefined4 **)(iVar2 + 0x5c);
    if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
              (StringLiteral_refreshCredentials,args,(MethodInfo *)0x0);
    text = TM::TM__(StringLiteral_Thank_you_for_watching__Enjoy_yo,(MethodInfo *)0x0);
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    NotificationController::NotificationController_PushNotification
              (text,(Sprite *)0x0,5,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&MethodInfo__AdOfferGold__OnShownGoldAd_bool_);
    cRam_? = '\x01';
  }
  if (available == 0) {
    return;
  }
  this_00 = (UnityAction_1_System_ByteEnum_ *)func_?(TypeInfo__System__Action<bool>);
  if (this_00 != (UnityAction_1_System_ByteEnum_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
    UnityAction_1_System_ByteEnum___ctor
              (this_00,(Object *)0x0,MethodInfo__AdOfferGold__OnShownGoldAd_bool_,(MethodInfo *)0x0)
    ;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?(&TypeInfo__AdRequestHandler);
      func_?(&TypeInfo__BrowserComm__ToJavaScript);
      func_?(&StringLiteral_showGoldVideoAd);
      cRam_? = '\x01';
    }
    TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback = (Action_1_Boolean_ *)this_00;
    func_?();
    this_01 = (UnityAction_2_System_Boolean_System_Object_ *)
              func_?(TypeInfo__System__Action<bool,_System::String>);
    if (this_01 != (UnityAction_2_System_Boolean_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]
      ::UnityAction_2_System_Boolean_System_Object___ctor
                (this_01,(Object *)0x0,
                 MethodInfo__AdRequestHandler__ShowGoldVideoAdCallback_bool__System__String_,
                 (MethodInfo *)0x0);
      if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
                (StringLiteral_showGoldVideoAd,(Action_2_Boolean_String_ *)this_01,(MethodInfo *)0x0
                );
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

