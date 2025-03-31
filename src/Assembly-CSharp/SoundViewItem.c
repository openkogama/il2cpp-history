
/* Void ChangeUrl(String) */

void Assembly-CSharp.dll::SoundViewItem::SoundViewItem_ChangeUrl
               (SoundViewItem *this,String *url,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSettingChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__SoundViewItem____c__DisplayClass17_0___ChangeUrl_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SoundViewItem____c__DisplayClass17_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SoundViewItem____c__DisplayClass17_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)url;
    func_?(value + 1,url);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSettingChanged>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__SoundViewItem____c__DisplayClass17_0___ChangeUrl_b__0_UnityEngine__EventSystems__IHandleSettingChanged__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
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
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__CachedAssetBundleRequest);
    func_?(&
                    MethodInfo__SoundViewItem__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__StreamingAsset);
    func_?(&StringLiteral_Loading___);
    cRam_? = '\x01';
  }
  (this->fields).setNewOriginalUrl = setNewOriginalUrl;
  func_?(&(this->fields).setNewOriginalUrl,setNewOriginalUrl);
  (this->fields).originalUrl = originalUrl;
  func_?(&(this->fields).originalUrl,originalUrl);
  (this->fields).tabInfo = info;
  func_?(&(this->fields).tabInfo,info);
  pGVar1 = (this->fields).loadingWheel;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pIVar2 = (this->fields).soundImage;
    if (pIVar2 != (Image *)0x0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pIVar2,(MethodInfo *)0x0);
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
              bVar6 = mscorlib.dll::System::String::String_op_Equality
                                ((pSVar5->fields).url,originalUrl,(MethodInfo *)0x0);
              if (bVar6 != 0) {
                pIVar2 = (this->fields).selectedImage;
                if (pIVar2 == (Image *)0x0) goto code_?;
                pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pIVar2,(MethodInfo *)0x0);
                if (pGVar1 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar1,1,(MethodInfo *)0x0);
              }
              if ((TypeInfo__StreamingAsset->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pSVar4 = StreamingAsset::StreamingAsset_get_AssetBundleUrl((MethodInfo *)0x0);
              pSVar5 = (this->fields).tabInfo;
              if (pSVar5 != (SoundTabInfo *)0x0) {
                pSVar4 = mscorlib.dll::System::String::String_Concat_3
                                   (pSVar4,(pSVar5->fields).url,(MethodInfo *)0x0);
                pSVar4 = StreamingAsset::StreamingAsset_DBUrlToServerUrl(pSVar4,(MethodInfo *)0x0);
                this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                           *)func_?();
                DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
                Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
                __Il2CppFullySharedGenericType]::
                DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                          (this_01,(Object *)this,
                           MethodInfo__SoundViewItem__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                           ,(MethodInfo *)0x0);
                this_02 = (AssetBundleRequest *)func_?();
                AssetBundleRequest::AssetBundleRequest__ctor
                          (this_02,pSVar4,
                           (Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                           WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
                if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
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
  if (((this->fields).tabInfo != (SoundTabInfo *)0x0) && ((this->fields).doneLoading != 0)) {
    pSVar1 = (((this->fields).tabInfo)->fields).url;
    (this->fields).originalUrl = pSVar1;
    func_?(&(this->fields).originalUrl,pSVar1);
    pSVar2 = (this->fields).tabInfo;
    if ((pSVar2 != (SoundTabInfo *)0x0) &&
       (pUVar3 = (this->fields).setNewOriginalUrl, pUVar3 != (UnityAction_1_System_String_ *)0x0)) {
      (*(pUVar3->fields)._._.invoke_impl)
                ((pUVar3->fields)._._.method_code,(pSVar2->fields).url,(pUVar3->fields)._._.method);
      pSVar2 = (this->fields).tabInfo;
      if (pSVar2 != (SoundTabInfo *)0x0) {
        SoundViewItem_ChangeUrl(this,(pSVar2->fields).url,(MethodInfo *)0x0);
        return;
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SoundViewItem::SoundViewItem_OnDestroy
               (SoundViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__SoundViewItem__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__SoundViewItem__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Download_failed);
    func_?(&StringLiteral_Error_loading_sound__download_un);
    func_?(&StringLiteral_error_from_www_in_SoundViewItem_);
    func_?(&StringLiteral_Sound_failed_to_download_);
    cRam_? = '\x01';
  }
  if (www == (UnityWebRequest *)0x0) {
    pSVar1 = StringLiteral_Error_loading_sound__download_un;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
      pSVar1 = StringLiteral_Error_loading_sound__download_un;
    }
  }
  else {
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
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
             (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_01,(MethodInfo *)0x0),
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
    pSVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_error_from_www_in_SoundViewItem_,pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
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
  if (((this->fields).tabInfo != (SoundTabInfo *)0x0) && ((this->fields).doneLoading != 0)) {
    SoundViewItem_ChangeUrl(this,(((this->fields).tabInfo)->fields).url,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&
                    MethodInfo__SoundViewItem__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
                   );
    cRam_? = '\x01';
  }
  this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(Object *)this,
             MethodInfo__SoundViewItem__OnDownloadFinished_UnityEngine__Networking__UnityWebRequest_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
  return;
}

