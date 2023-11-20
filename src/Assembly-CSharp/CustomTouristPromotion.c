
/* Void Continue() */

void Assembly-CSharp.dll::CustomTouristPromotion::CustomTouristPromotion_Continue
               (CustomTouristPromotion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&
                    MethodInfo__CustomTouristPromotion____c___Continue_b__4_0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__CustomTouristPromotion____c);
    func_?(&StringLiteral_Custom_promotion__Continue___wit);
    func_?(&StringLiteral_TouristPromotion_Custom_Continue);
    func_?(&StringLiteral_TouristPromotion_Custom_Continue);
    func_?(&StringLiteral_Custom_promotion__Continue___wit);
    cRam_? = '\x01';
  }
  if ((this->fields)._.promotionShowsAd == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_Custom_promotion__Continue___wit,(MethodInfo *)0x0);
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count
              (StringLiteral_TouristPromotion_Custom_Continue,1,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).OnContinueClicked.method)(this,this->klass[1]._0.image);
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Custom_promotion__Continue___wit,(MethodInfo *)0x0);
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_Custom_Continue,1,(MethodInfo *)0x0);
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__CustomTouristPromotion____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  callbackFunction = TypeInfo__CustomTouristPromotion____c->static_fields->__9__4_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_ITouristAdController_ *)0x0) {
    if ((TypeInfo__CustomTouristPromotion____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    object = TypeInfo__CustomTouristPromotion____c->static_fields->__9;
    callbackFunction = (ExecuteEvents_EventFunction_1_ITouristAdController_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__CustomTouristPromotion____c___Continue_b__4_0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__CustomTouristPromotion____c->static_fields->__9__4_0 = callbackFunction;
    func_?();
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
            );
  return;
}


/* Void CustomRedirect() */

void Assembly-CSharp.dll::CustomTouristPromotion::CustomTouristPromotion_CustomRedirect
               (CustomTouristPromotion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_TouristPromotion_Custom_Redirect);
    func_?(&StringLiteral_Custom_promotion__CustomRedirect);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Custom_promotion__CustomRedirect,(MethodInfo *)0x0);
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_Custom_Redirect,1,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pCVar2 = (pMVar1->fields)._CustomTouristPromotionSettings_k__BackingField,
     pCVar2 != (CustomTouristPromotionSettings *)0x0)) {
    bVar3 = (pCVar2->fields)._Redirect_k__BackingField;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pCVar2 = (pMVar1->fields)._CustomTouristPromotionSettings_k__BackingField,
       pCVar2 != (CustomTouristPromotionSettings *)0x0)) {
      BrowserCommGotoRequests::BrowserCommGotoRequests_GotoURL
                ((pCVar2->fields)._URL_k__BackingField,bVar3 == 0,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Signup() */

void Assembly-CSharp.dll::CustomTouristPromotion::CustomTouristPromotion_Signup
               (CustomTouristPromotion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_TouristPromotion_Custom_Signup);
    func_?(&StringLiteral_Custom_promotion__Signup__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Custom_promotion__Signup__,(MethodInfo *)0x0);
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_Custom_Signup,1,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pCVar2 = (pMVar1->fields)._CustomTouristPromotionSettings_k__BackingField,
     pCVar2 != (CustomTouristPromotionSettings *)0x0)) {
    bVar3 = (pCVar2->fields)._Redirect_k__BackingField;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (pCVar2 = (pMVar1->fields)._CustomTouristPromotionSettings_k__BackingField,
       pCVar2 != (CustomTouristPromotionSettings *)0x0)) {
      BrowserCommGotoRequests::BrowserCommGotoRequests_GotoURL
                ((pCVar2->fields)._URL_k__BackingField,bVar3 == 0,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::CustomTouristPromotion::CustomTouristPromotion_Start
               (CustomTouristPromotion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__CachedGetRequest);
    func_?(&
                    MethodInfo__CustomTouristPromotion__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                   );
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&TypeInfo__MV__Common__Urls);
    func_?(&StringLiteral_TouristPromotion_Custom);
    func_?(&StringLiteral_Custom_promotion__Start__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Custom_promotion__Start__,(MethodInfo *)0x0);
  this_00 = (this->fields).adContinueButton;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,(this->fields)._.promotionShowsAd,(MethodInfo *)0x0);
    if ((TypeInfo__MV__Common__Urls->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar1 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pCVar3 = (pMVar2->fields)._CustomTouristPromotionSettings_k__BackingField,
       pCVar3 != (CustomTouristPromotionSettings *)0x0)) {
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar1,(pCVar3->fields)._AssetURL_k__BackingField,(MethodInfo *)0x0);
      this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?();
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_01,(Object *)this,
                 MethodInfo__CustomTouristPromotion__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      this_02 = (AssetBundleRequest *)func_?();
      AssetBundleRequest::AssetBundleRequest__ctor
                (this_02,pSVar1,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,
                 WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_02,(MethodInfo *)0x0);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count
                (StringLiteral_TouristPromotion_Custom,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StreamingAssetCallback(UnityWebRequest) */

void Assembly-CSharp.dll::CustomTouristPromotion::CustomTouristPromotion_StreamingAssetCallback
               (CustomTouristPromotion *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Texture2D);
    func_?(&StringLiteral_PNG_get_request_callback_failed_);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    UVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_result(www,(MethodInfo *)0x0);
    if (UVar1 != UnityWebRequest_Result__Enum_ConnectionError) {
      UVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
              UnityWebRequest_get_result(www,(MethodInfo *)0x0);
      if (UVar1 != UnityWebRequest_Result__Enum_ProtocolError) {
        this_01 = System.dll::System::Net::WebCompletionSource`1[Unity::IL2CPP::Metadata::
                  __Il2CppFullySharedGenericType]::
                  WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__get_CurrentResult
                            ((WebCompletionSource_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                              *)www,(MethodInfo *)0x0);
        if (this_01 !=
            (WebCompletionSource_1_T_Result_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
            0x0) {
          data = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::DownloadHandler::
                 DownloadHandler_get_data((DownloadHandler *)this_01,(MethodInfo *)0x0);
          this_02 = (Texture2D *)func_?(TypeInfo__UnityEngine__Texture2D);
          UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_4
                    (this_02,2,2,(MethodInfo *)0x0);
          UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
          ImageConversion_LoadImage_1(this_02,data,(MethodInfo *)0x0);
          this_00 = (this->fields).graphics;
          if (this_02 != (Texture2D *)0x0) {
            iVar2 = (*(code *)(this_02->klass->vtable).get_width.method)
                              (this_02,(this_02->klass->vtable).set_width.methodPtr);
            pIVar3 = (this_02->klass->vtable).set_height.methodPtr;
            fVar4 = (float)iVar2;
            pTVar5 = this_02;
            iVar2 = (*(code *)(this_02->klass->vtable).get_height.method)();
            rect.m_YMin = (float)pIVar3;
            rect.m_XMin = (float)pTVar5;
            rect.m_Width = fVar4;
            rect.m_Height = (float)iVar2;
            value = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_6
                              (this_02,rect,(Vector2)0x3f0000003f000000,(MethodInfo *)0x0);
            if (this_00 != (Image *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                        (this_00,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
        func_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pSVar7 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
             UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    pSVar7 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_PNG_get_request_callback_failed_,pSVar7,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)pSVar7,(MethodInfo *)0x0);
  }
  return;
}

