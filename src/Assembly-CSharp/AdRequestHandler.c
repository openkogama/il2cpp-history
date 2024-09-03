
/* Void GetGoldAdAvailable(Action`1[Boolean]) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_GetGoldAdAvailable
               (Action_1_Boolean_ *OnAdAvailable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool,_System::String>);
    func_?(&MethodInfo__AdRequestHandler__GoldAdAvailable_bool__System__String_);
    func_?(&TypeInfo__AdRequestHandler);
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    func_?(&StringLiteral_requestGoldVideoAd);
    cRam_? = '\x01';
  }
  TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback = OnAdAvailable;
  func_?(&TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback,
                  OnAdAvailable);
  this = (UnityAction_2_System_Int32_System_Int32_ *)
         func_?(TypeInfo__System__Action<bool,_System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this,(Object *)0x0,MethodInfo__AdRequestHandler__GoldAdAvailable_bool__System__String_,
             (MethodInfo *)0x0);
  if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
            (StringLiteral_requestGoldVideoAd,(Action_2_Boolean_String_ *)this,(MethodInfo *)0x0);
  return;
}


/* Void GetHealthAdAvailable(Action`1[Boolean]) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_GetHealthAdAvailable
               (Action_1_Boolean_ *OnAdAvailable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool,_System::String>);
    func_?(&MethodInfo__AdRequestHandler__HealthAdAvailable_bool__System__String_);
    func_?(&TypeInfo__AdRequestHandler);
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    func_?(&StringLiteral_requestVideoAd);
    cRam_? = '\x01';
  }
  TypeInfo__AdRequestHandler->static_fields->OnHealthAdAvailableCallback = OnAdAvailable;
  func_?(TypeInfo__AdRequestHandler->static_fields,OnAdAvailable);
  this = (UnityAction_2_System_Int32_System_Int32_ *)
         func_?(TypeInfo__System__Action<bool,_System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this,(Object *)0x0,
             MethodInfo__AdRequestHandler__HealthAdAvailable_bool__System__String_,(MethodInfo *)0x0
            );
  if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
            (StringLiteral_requestVideoAd,(Action_2_Boolean_String_ *)this,(MethodInfo *)0x0);
  return;
}


/* Void GoldAdAvailable(Boolean, String) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_GoldAdAvailable
               (bool success,String *availableJsonString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    AdRequestHandler__Available_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::Available>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&StringLiteral_Ad_not_available);
    cRam_? = '\x01';
  }
  if (success == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Ad_not_available,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar1 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       (availableJsonString,
                        AdRequestHandler__Available_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::Available>_System__String_
                       );
    if (TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback !=
        (Action_1_Boolean_ *)0x0) {
      if (pOVar1 != (Object *)0x0) {
        (*(TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback->fields)._._.
          invoke_impl)();
        TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback =
             (Action_1_Boolean_ *)0x0;
        func_?(&TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback,0);
        return;
      }
      uVar2 = func_?(&stack0xfffffff8);
      func_?(uVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}


/* Void HealthAdAvailable(Boolean, String) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_HealthAdAvailable
               (bool success,String *availableJsonString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    AdRequestHandler__Available_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::Available>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&StringLiteral_Ad_not_available);
    cRam_? = '\x01';
  }
  if (success == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Ad_not_available,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar1 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (availableJsonString,
                      AdRequestHandler__Available_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::Available>_System__String_
                     );
  pAVar2 = TypeInfo__AdRequestHandler->static_fields->OnHealthAdAvailableCallback;
  if ((pOVar1 != (Object *)0x0) && (pAVar2 != (Action_1_Boolean_ *)0x0)) {
    (*(pAVar2->fields)._._.invoke_impl)();
    TypeInfo__AdRequestHandler->static_fields->OnHealthAdAvailableCallback =
         (Action_1_Boolean_ *)0x0;
    func_?(TypeInfo__AdRequestHandler->static_fields,0);
    return;
  }
  uVar3 = func_?(&stack0xfffffff8);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowGoldVideoAd(Action`1[Boolean]) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_ShowGoldVideoAd
               (Action_1_Boolean_ *OnAdShown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool,_System::String>);
    func_?(&MethodInfo__AdRequestHandler__ShowGoldVideoAdCallback_bool__System__String_);
    func_?(&TypeInfo__AdRequestHandler);
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    func_?(&StringLiteral_showGoldVideoAd);
    cRam_? = '\x01';
  }
  TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback = OnAdShown;
  func_?(&TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback,OnAdShown);
  this = (UnityAction_2_System_Int32_System_Int32_ *)
         func_?(TypeInfo__System__Action<bool,_System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this,(Object *)0x0,
             MethodInfo__AdRequestHandler__ShowGoldVideoAdCallback_bool__System__String_,
             (MethodInfo *)0x0);
  if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
            (StringLiteral_showGoldVideoAd,(Action_2_Boolean_String_ *)this,(MethodInfo *)0x0);
  return;
}


/* Void ShowGoldVideoAdCallback(Boolean, String) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_ShowGoldVideoAdCallback
               (bool success,String *showVideoJsonString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    AdRequestHandler__ShouldReward_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::ShouldReward>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&StringLiteral_Ad_not_shown);
    func_?(&StringLiteral_User_did_not_finish_watching_ad);
    cRam_? = '\x01';
  }
  if (success == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Ad_not_shown,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar1 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                       (showVideoJsonString,
                        AdRequestHandler__ShouldReward_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::ShouldReward>_System__String_
                       );
    if (pOVar1 == (Object *)0x0) {
      uVar2 = func_?(&stack0xfffffff8);
      func_?(uVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)&pOVar1[1].klass == '\0') {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_User_did_not_finish_watching_ad,(MethodInfo *)0x0);
      return;
    }
    if (TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback != (Action_1_Boolean_ *)0x0
       ) {
      (*(TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback->fields)._._.invoke_impl)
                ();
      TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback = (Action_1_Boolean_ *)0x0;
      func_?(&TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback,0);
      return;
    }
  }
  return;
}


/* Void ShowHealthVideoAd(Action`1[Boolean]) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_ShowHealthVideoAd
               (Action_1_Boolean_ *OnAdShown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool,_System::String>);
    func_?(&MethodInfo__AdRequestHandler__ShowHealthVideoAdCallback_bool__System__String_);
    func_?(&TypeInfo__AdRequestHandler);
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    func_?(&StringLiteral_showVideoAd);
    cRam_? = '\x01';
  }
  TypeInfo__AdRequestHandler->static_fields->OnHealthAdShownCallback = OnAdShown;
  func_?(&TypeInfo__AdRequestHandler->static_fields->OnHealthAdShownCallback,OnAdShown);
  this = (UnityAction_2_System_Int32_System_Int32_ *)
         func_?(TypeInfo__System__Action<bool,_System::String>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this,(Object *)0x0,
             MethodInfo__AdRequestHandler__ShowHealthVideoAdCallback_bool__System__String_,
             (MethodInfo *)0x0);
  if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
            (StringLiteral_showVideoAd,(Action_2_Boolean_String_ *)this,(MethodInfo *)0x0);
  return;
}


/* Void ShowHealthVideoAdCallback(Boolean, String) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_ShowHealthVideoAdCallback
               (bool success,String *showVideoJsonString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    AdRequestHandler__ShouldReward_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::ShouldReward>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&StringLiteral_Ad_not_shown);
    func_?(&StringLiteral_User_did_not_finish_watching_ad);
    cRam_? = '\x01';
  }
  if (success == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Ad_not_shown,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pOVar1 = Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (showVideoJsonString,
                      AdRequestHandler__ShouldReward_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::ShouldReward>_System__String_
                     );
  if (pOVar1 != (Object *)0x0) {
    if (*(char *)&pOVar1[1].klass == '\0') {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_User_did_not_finish_watching_ad,(MethodInfo *)0x0);
      return;
    }
    pAVar2 = TypeInfo__AdRequestHandler->static_fields->OnHealthAdShownCallback;
    if (pAVar2 != (Action_1_Boolean_ *)0x0) {
      (*(pAVar2->fields)._._.invoke_impl)();
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff8);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

