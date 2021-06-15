
/* Void Destroy() */

void Assembly-CSharp.dll::XPProgress::XPProgress_Destroy(XPProgress *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__XPProgress__XPLimitsCallback_UnityEngine__Networking__UnityWebRequest_,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  return;
}


/* Void OnXPLevelLimitsUpdated(XPLevelLimits) */

void Assembly-CSharp.dll::XPProgress::XPProgress_OnXPLevelLimitsUpdated
               (XPProgress *this,XPLevelLimits *xpLevelLimits,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)xpLevelLimits,(MethodInfo *)0x0);
  pXVar1 = (this->fields).xpProgressData;
  if (pXVar1 != (XPProgressData *)0x0) {
    (pXVar1->fields).xpLevelLimits = xpLevelLimits;
    this_00 = (this->fields).OnXPProgressData;
    if (this_00 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
      XPProgress+OnXPProgressDataDelegate::XPProgress_OnXPProgressDataDelegate_Invoke
                (this_00,(this->fields).xpProgressData,(MethodInfo *)0x0);
    }
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update(Int32, XPRewardType, Int32, Int32) */

void Assembly-CSharp.dll::XPProgress::XPProgress_Update
               (XPProgress *this,int32_t currentPlayerXP,XPRewardType__Enum xpId,int32_t XPdelta,
               int32_t memberCount,MethodInfo *method)

{
  pXVar1 = (this->fields).xpProgressData;
  if (pXVar1 != (XPProgressData *)0x0) {
    (pXVar1->fields).xpId = (undefined1)xpId;
    pXVar1 = (this->fields).xpProgressData;
    if (pXVar1 != (XPProgressData *)0x0) {
      (pXVar1->fields).playerCurrentXP = currentPlayerXP;
      pXVar1 = (this->fields).xpProgressData;
      if (pXVar1 != (XPProgressData *)0x0) {
        (pXVar1->fields).xpDelta = XPdelta;
        pXVar1 = (this->fields).xpProgressData;
        if (pXVar1 != (XPProgressData *)0x0) {
          (pXVar1->fields).memberCount = memberCount;
          this_00 = (this->fields).OnXPProgressData;
          if (this_00 != (XPProgress_OnXPProgressDataDelegate *)0x0) {
            XPProgress+OnXPProgressDataDelegate::XPProgress_OnXPProgressDataDelegate_Invoke
                      (this_00,(this->fields).xpProgressData,(MethodInfo *)0x0);
          }
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


/* Void UpdateLevel(Int32) */

void Assembly-CSharp.dll::XPProgress::XPProgress_UpdateLevel
               (XPProgress *this,int32_t level,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  object = this;
  pXVar1 = (this->fields).xpProgressData;
  if ((pXVar1 != (XPProgressData *)0x0) &&
     (this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)(pXVar1->fields).xpLevelLimits,
     this_00 !=
     (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
      *)0x0)) {
    pOVar2 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       (this_00,(MethodInfo *)0x0);
    iVar3 = level;
    if (pOVar2 != (Object *)level) {
      if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__Common__Urls);
      }
      pSVar4 = MVCommon.dll::MV::Common::Urls::Urls_get_XPLimit((MethodInfo *)0x0);
      this = (XPProgress *)iVar3;
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&this);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat
                         ((Object *)pSVar4,pOVar2,(MethodInfo *)0x0);
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)object,
                 MethodInfo__XPProgress__XPLimitsCallback_UnityEngine__Networking__UnityWebRequest_,
                 MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                );
      this_02 = (GetRequest *)func_?(TypeInfo__GetRequest);
      GetRequest::GetRequest__ctor
                (this_02,pSVar4,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                 WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_02,(MethodInfo *)0x0);
    }
    return;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void XPLimitsCallback(UnityWebRequest) */

void Assembly-CSharp.dll::XPProgress::XPProgress_XPLimitsCallback
               (XPProgress *this,UnityWebRequest *result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (result != (UnityWebRequest *)0x0) {
    message = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
              UnityWebRequest_GetUrl(result,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0)
    ;
    this_00 = (ActDetectorBase *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)result,
                         (MethodInfo *)0x0);
    if (this_00 != (ActDetectorBase *)0x0) {
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ActDetectorBase::
      ActDetectorBase_OnApplicationQuit(this_00,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__Newtonsoft__Json__JsonConvert->vtable).Equals.methodPtr & 0x2000000) !=
           0) && ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_started == 0)) {
        func_?();
      }
      message_00 = Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_43
                             (value,
                              XPLevelLimits_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<XPLevelLimits>_System__String_
                             );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message_00,(MethodInfo *)0x0);
      if (_UNK_? != (XPProgressData *)0x0) {
        (_UNK_?->fields).xpLevelLimits = message_00;
        if (_UNK_? != (XPProgress_OnXPProgressDataDelegate *)0x0) {
          XPProgress+OnXPProgressDataDelegate::XPProgress_OnXPProgressDataDelegate_Invoke
                    (_UNK_?,_UNK_?,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* XPProgress(MVLocalPlayer, InitialLevelData) */

void Assembly-CSharp.dll::XPProgress::XPProgress__ctor
               (XPProgress *this,MVLocalPlayer *player,InitialLevelData *initialLevelData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if (initialLevelData != (InitialLevelData *)0x0) {
    iVar1 = (initialLevelData->fields).XP;
    pXVar2 = (initialLevelData->fields).XPLevelLimits;
    this_00 = (ScaleAnimationBase *)func_?(TypeInfo__XPProgressData);
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
    (this_00->fields)._._._._.m_CachedPtr = pXVar2;
    (this_00->fields).state = iVar1;
    (this->fields).xpProgressData = (XPProgressData *)this_00;
    if (player != (MVLocalPlayer *)0x0) {
      pUVar3 = (player->fields)._.OnLevelChanged;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,MethodInfo__XPProgress__UpdateLevel_int_,
                 MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                );
      pUStack4 =
           (UnityAction_1_System_Int32_ *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar3,(Delegate *)this_01,(MethodInfo *)0x0);
      pUVar3 = (UnityAction_1_System_Int32_ *)0x0;
      if (pUStack4 == (UnityAction_1_System_Int32_ *)0x0) {
code_?:
        (player->fields)._.OnLevelChanged = pUVar3;
        return;
      }
      if (pUStack4->klass == TypeInfo__UnityEngine__Events__UnityAction<int>) {
        pUVar3 = pUStack4;
      }
      pUStack5 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      if (pUVar3 != (UnityAction_1_System_Int32_ *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?(0);
  pUStack4 = extraout_ECX;
  pUStack5 = extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

