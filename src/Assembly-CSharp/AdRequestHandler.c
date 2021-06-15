
/* Void GetGoldAdAvailable(Action`1[Boolean]) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_GetGoldAdAvailable
               (Action_1_Boolean_ *OnAdAvailable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback = OnAdAvailable;
  functionName = StringLiteral_requestGoldVideoAd;
  if (TypeInfo__AdRequestHandler->static_fields->__f__mg_cache2 == (Action_2_Boolean_String_ *)0x0)
  {
    this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<bool,_System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this,(Object *)0x0,
               MethodInfo__AdRequestHandler__GoldAdAvailable_bool__System__String_,
               MethodInfo__System__Action<bool,_System::String>__Action_System__Object__void__);
    TypeInfo__AdRequestHandler->static_fields->__f__mg_cache2 = (Action_2_Boolean_String_ *)this;
  }
  callback = TypeInfo__AdRequestHandler->static_fields->__f__mg_cache2;
  if ((((uint)(TypeInfo__BrowserComm__ToJavaScript->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_started == 0)) {
    func_?(TypeInfo__BrowserComm__ToJavaScript);
  }
  BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
            (functionName,callback,(MethodInfo *)0x0);
  return;
}


/* Void GetHealthAdAvailable(Action`1[Boolean]) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_GetHealthAdAvailable
               (Action_1_Boolean_ *OnAdAvailable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__AdRequestHandler->static_fields->OnHealthAdAvailableCallback = OnAdAvailable;
  functionName = StringLiteral_requestVideoAd;
  if (TypeInfo__AdRequestHandler->static_fields->__f__mg_cache0 == (Action_2_Boolean_String_ *)0x0)
  {
    this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<bool,_System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this,(Object *)0x0,
               MethodInfo__AdRequestHandler__HealthAdAvailable_bool__System__String_,
               MethodInfo__System__Action<bool,_System::String>__Action_System__Object__void__);
    TypeInfo__AdRequestHandler->static_fields->__f__mg_cache0 = (Action_2_Boolean_String_ *)this;
  }
  callback = TypeInfo__AdRequestHandler->static_fields->__f__mg_cache0;
  if ((((uint)(TypeInfo__BrowserComm__ToJavaScript->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_started == 0)) {
    func_?(TypeInfo__BrowserComm__ToJavaScript);
  }
  BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
            (functionName,callback,(MethodInfo *)0x0);
  return;
}


/* Void GoldAdAvailable(Boolean, String) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_GoldAdAvailable
               (bool success,String *availableJsonString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (success == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Ad_not_available,(MethodInfo *)0x0);
  }
  else {
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    pXVar1 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                       (availableJsonString,
                        AdRequestHandler__Available_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::Available>_System__String_
                       );
    this = (Action_1_UIPushOption_ *)
           TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback;
    if (this != (Action_1_UIPushOption_ *)0x0) {
      if (pXVar1 != (XPLevelLimits *)0x0) {
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  (this,(uint)(byte)(pXVar1->fields)._PrevXP_k__BackingField,
                   MethodInfo__System__Action<bool>__Invoke_bool_);
        TypeInfo__AdRequestHandler->static_fields->OnGoldAdAvailableCallback =
             (Action_1_Boolean_ *)0x0;
        return;
      }
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (success == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Ad_not_available,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pXVar1 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                     (availableJsonString,
                      AdRequestHandler__Available_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::Available>_System__String_
                     );
  this = (Action_1_UIPushOption_ *)
         TypeInfo__AdRequestHandler->static_fields->OnHealthAdAvailableCallback;
  if ((pXVar1 != (XPLevelLimits *)0x0) && (this != (Action_1_UIPushOption_ *)0x0)) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this,(uint)(byte)(pXVar1->fields)._PrevXP_k__BackingField,
               MethodInfo__System__Action<bool>__Invoke_bool_);
    TypeInfo__AdRequestHandler->static_fields->OnHealthAdAvailableCallback =
         (Action_1_Boolean_ *)0x0;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowGoldVideoAd(Action`1[Boolean]) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_ShowGoldVideoAd
               (Action_1_Boolean_ *OnAdShown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback = OnAdShown;
  functionName = StringLiteral_showGoldVideoAd;
  if (TypeInfo__AdRequestHandler->static_fields->__f__mg_cache3 == (Action_2_Boolean_String_ *)0x0)
  {
    this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<bool,_System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this,(Object *)0x0,
               MethodInfo__AdRequestHandler__ShowGoldVideoAdCallback_bool__System__String_,
               MethodInfo__System__Action<bool,_System::String>__Action_System__Object__void__);
    TypeInfo__AdRequestHandler->static_fields->__f__mg_cache3 = (Action_2_Boolean_String_ *)this;
  }
  callback = TypeInfo__AdRequestHandler->static_fields->__f__mg_cache3;
  if ((((uint)(TypeInfo__BrowserComm__ToJavaScript->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_started == 0)) {
    func_?(TypeInfo__BrowserComm__ToJavaScript);
  }
  BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
            (functionName,callback,(MethodInfo *)0x0);
  return;
}


/* Void ShowGoldVideoAdCallback(Boolean, String) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_ShowGoldVideoAdCallback
               (bool success,String *showVideoJsonString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (success == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Ad_not_shown,(MethodInfo *)0x0);
  }
  else {
    if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0
        ) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
      func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
    }
    pXVar1 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                       (showVideoJsonString,
                        AdRequestHandler__ShouldReward_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::ShouldReward>_System__String_
                       );
    if (pXVar1 == (XPLevelLimits *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar3 = (char)(pXVar1->fields)._PrevXP_k__BackingField;
    if (cVar3 == '\0') {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_User_did_not_finish_watching_ad,(MethodInfo *)0x0);
      return;
    }
    this = (Action_1_UIPushOption_ *)
           TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback;
    if (this != (Action_1_UIPushOption_ *)0x0) {
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                (this,CONCAT31((int3)((uint)extraout_ECX >> 8),cVar3),
                 MethodInfo__System__Action<bool>__Invoke_bool_);
      TypeInfo__AdRequestHandler->static_fields->OnGoldAdShownCallback = (Action_1_Boolean_ *)0x0;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__AdRequestHandler->static_fields->OnHealthAdShownCallback = OnAdShown;
  functionName = StringLiteral_showVideoAd;
  if (TypeInfo__AdRequestHandler->static_fields->__f__mg_cache1 == (Action_2_Boolean_String_ *)0x0)
  {
    this = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<bool,_System::String>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this,(Object *)0x0,
               MethodInfo__AdRequestHandler__ShowHealthVideoAdCallback_bool__System__String_,
               MethodInfo__System__Action<bool,_System::String>__Action_System__Object__void__);
    TypeInfo__AdRequestHandler->static_fields->__f__mg_cache1 = (Action_2_Boolean_String_ *)this;
  }
  callback = TypeInfo__AdRequestHandler->static_fields->__f__mg_cache1;
  if ((((uint)(TypeInfo__BrowserComm__ToJavaScript->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_started == 0)) {
    func_?(TypeInfo__BrowserComm__ToJavaScript);
  }
  BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall_1
            (functionName,callback,(MethodInfo *)0x0);
  return;
}


/* Void ShowHealthVideoAdCallback(Boolean, String) */

void Assembly-CSharp.dll::AdRequestHandler::AdRequestHandler_ShowHealthVideoAdCallback
               (bool success,String *showVideoJsonString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (success == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Ad_not_shown,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pXVar1 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                     (showVideoJsonString,
                      AdRequestHandler__ShouldReward_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<AdRequestHandler::ShouldReward>_System__String_
                     );
  if (pXVar1 != (XPLevelLimits *)0x0) {
    cVar2 = (char)(pXVar1->fields)._PrevXP_k__BackingField;
    if (cVar2 == '\0') {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_User_did_not_finish_watching_ad,(MethodInfo *)0x0);
      return;
    }
    this = (Action_1_UIPushOption_ *)
           TypeInfo__AdRequestHandler->static_fields->OnHealthAdShownCallback;
    if (this != (Action_1_UIPushOption_ *)0x0) {
      mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                (this,CONCAT31((int3)((uint)extraout_ECX >> 8),cVar2),
                 MethodInfo__System__Action<bool>__Invoke_bool_);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

