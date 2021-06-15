
/* Void ChangeUrl(String) */

void Assembly-CSharp.dll::SoundViewItem::SoundViewItem_ChangeUrl
               (SoundViewItem *this,String *url,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SoundViewItem___ChangeUrl_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = url;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__SoundViewItem___ChangeUrl_c__AnonStorey0____m__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize(SoundTabInfo, String, UnityAction`1[System.String]) */

void Assembly-CSharp.dll::SoundViewItem::SoundViewItem_Initialize
               (SoundViewItem *this,SoundTabInfo *info,String *originalUrl,
               UnityAction_1_System_String_ *setNewOriginalUrl,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).setNewOriginalUrl = setNewOriginalUrl;
  (this->fields).tabInfo = info;
  pGVar1 = (this->fields).loadingWheel;
  (this->fields).originalUrl = originalUrl;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pIVar2 = (this->fields).soundImage;
    if (pIVar2 != (Image *)0x0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pIVar2,(MethodInfo *)0x0);
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,0,(MethodInfo *)0x0);
        pTVar3 = (this->fields).title;
        TM::TM__(StringLiteral_Loading___,(MethodInfo *)0x0);
        if (pTVar3 != (Text *)0x0) {
          (*(code *)(pTVar3->klass->vtable).set_text.method)();
          this_00 = (this->fields).toolTip;
          pSVar4 = TM::TM__(StringLiteral_Loading___,(MethodInfo *)0x0);
          if (this_00 != (ToolTip *)0x0) {
            ToolTip::ToolTip_SetText(this_00,pSVar4,(MethodInfo *)0x0);
            pSVar5 = (this->fields).tabInfo;
            if (pSVar5 != (SoundTabInfo *)0x0) {
              pSVar4 = (pSVar5->fields).url;
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?();
              }
              bVar6 = mscorlib.dll::System::String::String_op_Equality
                                (pSVar4,originalUrl,(MethodInfo *)0x0);
              if (bVar6 != 0) {
                pIVar2 = (this->fields).selectedImage;
                if (pIVar2 == (Image *)0x0) goto code_?;
                pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)pIVar2,(MethodInfo *)0x0);
                if (pGVar1 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,1,(MethodInfo *)0x0);
              }
              if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
                func_?();
              }
              pSVar4 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
              pSVar5 = (this->fields).tabInfo;
              if (pSVar5 != (SoundTabInfo *)0x0) {
                str1 = (pSVar5->fields).url;
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?();
                }
                pSVar4 = mscorlib.dll::System::String::String_Concat_2
                                   (pSVar4,str1,(MethodInfo *)0x0);
                pSVar4 = StreamingAsset::StreamingAsset_DBUrlToServerUrl(pSVar4,(MethodInfo *)0x0);
                this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?();
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (this_01,(Object *)this,
                           MethodInfo__SoundViewItem__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                           ,
                           MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                          );
                this_02 = (AssetBundleRequest *)func_?();
                AssetBundleRequest::AssetBundleRequest__ctor
                          (this_02,pSVar4,
                           (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                           WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
                  func_?();
                }
                AsyncWWWManager::AsyncWWWManager_WWWRequest
                          ((AsyncWebRequest *)this_02,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnClick() */

void Assembly-CSharp.dll::SoundViewItem::SoundViewItem_OnClick
               (SoundViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).tabInfo;
  if ((pSVar1 != (SoundTabInfo *)0x0) && ((this->fields).doneLoading != 0)) {
    (this->fields).originalUrl = (pSVar1->fields).url;
    this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
              (this->fields).setNewOriginalUrl;
    if (this_00 !=
        (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
      mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
      String,System::Object]]::
      Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                (this_00,(Dictionary_2_System_String_System_Object_ *)(pSVar1->fields).url,
                 MethodInfo__UnityEngine__Events__UnityAction<System::String>__Invoke_System__String_
                );
      pSVar1 = (this->fields).tabInfo;
      if (pSVar1 != (SoundTabInfo *)0x0) {
        SoundViewItem_ChangeUrl(this,(pSVar1->fields).url,(MethodInfo *)0x0);
        return;
      }
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SoundViewItem::SoundViewItem_OnDestroy
               (SoundViewItem *this,MethodInfo *method)

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
             MethodInfo__SoundViewItem__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
             ,
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


/* Void OnDownloadFinished(UnityWebRequest) */

void Assembly-CSharp.dll::SoundViewItem::SoundViewItem_OnDownloadFinished
               (SoundViewItem *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (www == (UnityWebRequest *)0x0) {
    pSVar1 = StringLiteral_Error_loading_sound__download_un;
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
      pSVar1 = StringLiteral_Error_loading_sound__download_un;
    }
  }
  else {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar2 = mscorlib.dll::System::String::String_IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      this_00 = (this->fields).buttonComponent;
      if (this_00 != (Button *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                  ((Selectable *)this_00,1,(MethodInfo *)0x0);
        pGVar3 = (this->fields).loadingWheel;
        if (pGVar3 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,0,(MethodInfo *)0x0);
          this_01 = (this->fields).soundImage;
          if ((this_01 != (Image *)0x0) &&
             (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_01,(MethodInfo *)0x0),
             pGVar3 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar3,1,(MethodInfo *)0x0);
            pSVar4 = (this->fields).tabInfo;
            if ((pSVar4 != (SoundTabInfo *)0x0) &&
               (pTVar5 = (this->fields).toolTip, pTVar5 != (ToolTip *)0x0)) {
              ToolTip::ToolTip_SetText(pTVar5,(pSVar4->fields).name,(MethodInfo *)0x0);
              pSVar4 = (this->fields).tabInfo;
              if ((pSVar4 != (SoundTabInfo *)0x0) &&
                 (pTStack6 = (this->fields).title, pTStack6 != (Text *)0x0)) {
                pIStack7 =
                     (pTStack6->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
                pSStack8 = (pSVar4->fields).name;
                (*(code *)(pTStack6->klass->vtable).set_text.method)();
                (this->fields).doneLoading = 1;
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    this = (SoundViewItem *)
           UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
           UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_error_from_www_in_SoundViewItem_,(String *)this,
                        (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)pSVar1,(MethodInfo *)0x0);
  pTVar9 = (this->fields).title;
  TM::TM__(StringLiteral_Download_failed,(MethodInfo *)0x0);
  if (pTVar9 != (Text *)0x0) {
    (*(code *)(pTVar9->klass->vtable).set_text.method)();
    pTVar5 = (this->fields).toolTip;
    pSVar1 = TM::TM__(StringLiteral_Sound_failed_to_download_,(MethodInfo *)0x0);
    if (pTVar5 != (ToolTip *)0x0) {
      ToolTip::ToolTip_SetText(pTVar5,pSVar1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::SoundViewItem::SoundViewItem_OnPointerEnter
               (SoundViewItem *this,PointerEventData *eventData,MethodInfo *method)

{
  pSVar1 = (this->fields).tabInfo;
  if ((pSVar1 != (SoundTabInfo *)0x0) && ((this->fields).doneLoading != 0)) {
    SoundViewItem_ChangeUrl(this,(pSVar1->fields).url,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::SoundViewItem::SoundViewItem_OnPointerExit
               (SoundViewItem *this,PointerEventData *eventData,MethodInfo *method)

{
  SoundViewItem_ChangeUrl(this,(this->fields).originalUrl,(MethodInfo *)0x0);
  return;
}


/* Void UnsubscribePendingDownloads() */

void Assembly-CSharp.dll::SoundViewItem::SoundViewItem_UnsubscribePendingDownloads
               (SoundViewItem *this,MethodInfo *method)

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
             MethodInfo__SoundViewItem__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
             ,
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

