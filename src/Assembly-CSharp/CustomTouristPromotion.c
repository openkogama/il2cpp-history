
/* Void Continue() */

void Assembly-CSharp.dll::CustomTouristPromotion::CustomTouristPromotion_Continue
               (CustomTouristPromotion *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._.promotionShowsAd == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Custom_promotion__Continue___wit,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count
              (StringLiteral_TouristPromotion_Custom_Continue,1,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).OnContinueClicked.method)(this,this->klass[1]._0.image);
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Custom_promotion__Continue___wit,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_Custom_Continue,1,(MethodInfo *)0x0);
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__CustomTouristPromotion->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_ITouristAdController_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__CustomTouristPromotion___Continue_m__0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>__EventFunction_System__Object__void__
              );
    TypeInfo__CustomTouristPromotion->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_ITouristAdController_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__CustomTouristPromotion->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
            );
  return;
}


/* Void CustomRedirect() */

void Assembly-CSharp.dll::CustomTouristPromotion::CustomTouristPromotion_CustomRedirect
               (CustomTouristPromotion *this,MethodInfo *method)

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
            ((Object *)StringLiteral_Custom_promotion__CustomRedirect,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_Custom_Redirect,1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pPVar1 != (PrefabPool *)0x0) {
    pMVar2 = PrefabPool::PrefabPool_get_MVCollectibleFantaPrefab(pPVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVCollectibleObject *)0x0) {
      cVar3 = *(char *)&(pMVar2->fields).handler;
      pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pPVar1 != (PrefabPool *)0x0) {
        pMVar2 = PrefabPool::PrefabPool_get_MVCollectibleFantaPrefab(pPVar1,(MethodInfo *)0x0);
        if (pMVar2 != (MVCollectibleObject *)0x0) {
          BrowserCommGotoRequests::BrowserCommGotoRequests_GotoURL
                    ((String *)(pMVar2->fields)._.meshRenderers,cVar3 == '\0',0,(MethodInfo *)0x0);
          return;
        }
      }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Custom_promotion__Signup__,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_Custom_Signup,1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pPVar1 != (PrefabPool *)0x0) {
    pMVar2 = PrefabPool::PrefabPool_get_MVCollectibleFantaPrefab(pPVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVCollectibleObject *)0x0) {
      cVar3 = *(char *)&(pMVar2->fields).handler;
      pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pPVar1 != (PrefabPool *)0x0) {
        pMVar2 = PrefabPool::PrefabPool_get_MVCollectibleFantaPrefab(pPVar1,(MethodInfo *)0x0);
        if (pMVar2 != (MVCollectibleObject *)0x0) {
          BrowserCommGotoRequests::BrowserCommGotoRequests_GotoURL
                    ((String *)(pMVar2->fields)._.meshRenderers,cVar3 == '\0',0,(MethodInfo *)0x0);
          return;
        }
      }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Custom_promotion__Start__,(MethodInfo *)0x0);
  this_00 = (this->fields).adContinueButton;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,(this->fields)._.promotionShowsAd,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar1 = MVCommon.dll::MV::Common::Urls::Urls_get_StreamingAssets((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_01 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (PrefabPool *)0x0) {
      pMVar2 = PrefabPool::PrefabPool_get_MVCollectibleFantaPrefab(this_01,(MethodInfo *)0x0);
      if (pMVar2 != (MVCollectibleObject *)0x0) {
        str1 = (String *)(pMVar2->fields)._.mainCollider;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar1 = mscorlib.dll::System::String::String_Concat_2(pSVar1,str1,(MethodInfo *)0x0);
        this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_02,(Object *)this,
                   MethodInfo__CustomTouristPromotion__StreamingAssetCallback_UnityEngine__Networking__UnityWebRequest_
                   ,
                   MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
                  );
        this_03 = (AssetBundleRequest *)func_?();
        AssetBundleRequest::AssetBundleRequest__ctor
                  (this_03,pSVar1,(Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_02,
                   WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
          func_?();
        }
        AsyncWWWManager::AsyncWWWManager_WWWRequest((AsyncWebRequest *)this_03,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
          func_?();
        }
        StatHatWrapper::StatHatWrapper_Count
                  (StringLiteral_TouristPromotion_Custom,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StreamingAssetCallback(UnityWebRequest) */

void Assembly-CSharp.dll::CustomTouristPromotion::CustomTouristPromotion_StreamingAssetCallback
               (CustomTouristPromotion *this,UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    bVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_isNetworkError(www,(MethodInfo *)0x0);
    if ((bVar1 != 0) ||
       (bVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
                UnityWebRequest_get_isHttpError(www,(MethodInfo *)0x0), bVar1 != 0)) {
      pSVar2 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
               UnityWebRequest_get_error(www,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar2 = mscorlib.dll::System::String::String_Concat_2
                         (StringLiteral_PNG_get_request_callback_failed_,pSVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar2,(MethodInfo *)0x0);
      return;
    }
    this_01 = (PlayButtonMobile *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)www,
                         (MethodInfo *)0x0);
    if (this_01 != (PlayButtonMobile *)0x0) {
      PlayButtonMobile::PlayButtonMobile_OnCountdownEnd(this_01,(MethodInfo *)0x0);
      this_02 = (Texture2D *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Texture2D::Texture2D__ctor_2
                (this_02,2,2,(MethodInfo *)0x0);
      UnityEngine.ImageConversionModule.dll::UnityEngine::ImageConversion::
      ImageConversion_LoadImage_1(this_02,data,(MethodInfo *)0x0);
      this_00 = (this->fields).graphics;
      if (this_02 != (Texture2D *)0x0) {
        (*(code *)(this_02->klass->vtable).get_width.method)();
        (*(code *)(this_02->klass->vtable).get_height.method)(this_02);
        func_?(&stack0xffffffe4,0,0);
        pivot.x = 0.0;
        pivot.y = 0.0;
        uVar3 = 0;
        uVar4 = 0x3f000000;
        uVar5 = 0x3f000000;
        func_?(&stack0xfffffff4);
        rect.m_YMin = (float)uVar4;
        rect.m_XMin = (float)uVar5;
        rect.m_Width = (float)uVar3;
        rect.m_Height = 0.0;
        value = UnityEngine.CoreModule.dll::UnityEngine::Sprite::Sprite_Create_5
                          (this_02,rect,pivot,(MethodInfo *)0x0);
        if (this_00 != (Image *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite
                    (this_00,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <Continue>m__0(ITouristAdController, BaseEventData) */

void Assembly-CSharp.dll::CustomTouristPromotion::CustomTouristPromotion__Continue_m__0
               (ITouristAdController *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (ITouristAdController *)0x0) {
    func_?(0,TypeInfo__ITouristAdController,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

