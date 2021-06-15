
/* Void Continue() */

void Assembly-CSharp.dll::TouristPromotionCrey::TouristPromotionCrey_Continue
               (TouristPromotionCrey *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._.promotionShowsAd == 0) {
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count
              (StringLiteral_TouristPromotion_CreyGames_Conti,1,(MethodInfo *)0x0);
    (*(code *)(this->klass->vtable).OnContinueClicked.method)(this,this->klass[1]._0.image);
    return;
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_CreyGames_Conti,1,(MethodInfo *)0x0);
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__TouristPromotionCrey->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_ITouristAdController_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__TouristPromotionCrey___Continue_m__0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>__EventFunction_System__Object__void__
              );
    TypeInfo__TouristPromotionCrey->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_ITouristAdController_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__TouristPromotionCrey->static_fields->__f__am_cache0;
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


/* Void CreyRedirect() */

void Assembly-CSharp.dll::TouristPromotionCrey::TouristPromotionCrey_CreyRedirect
               (TouristPromotionCrey *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_CreyGames_Redir,1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pPVar1 != (PrefabPool *)0x0) {
    pMVar2 = PrefabPool::PrefabPool_get_MVCollectiblePrefab(pPVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVCollectibleObject *)0x0) {
      bVar3 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
              CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
                        ((CrossPlatformInputManager_VirtualAxis *)pMVar2,(MethodInfo *)0x0);
      pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pPVar1 != (PrefabPool *)0x0) {
        pMVar2 = PrefabPool::PrefabPool_get_MVCollectiblePrefab(pPVar1,(MethodInfo *)0x0);
        if (pMVar2 != (MVCollectibleObject *)0x0) {
          URL = (String *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar2,
                           (MethodInfo *)0x0);
          BrowserCommGotoRequests::BrowserCommGotoRequests_GotoURL
                    (URL,bVar3 == 0,0,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::TouristPromotionCrey::TouristPromotionCrey_Signup
               (TouristPromotionCrey *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_CreyGames_Signu,1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pPVar1 != (PrefabPool *)0x0) {
    pMVar2 = PrefabPool::PrefabPool_get_MVCollectiblePrefab(pPVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVCollectibleObject *)0x0) {
      bVar3 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
              CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
                        ((CrossPlatformInputManager_VirtualAxis *)pMVar2,(MethodInfo *)0x0);
      pPVar1 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pPVar1 != (PrefabPool *)0x0) {
        pMVar2 = PrefabPool::PrefabPool_get_MVCollectiblePrefab(pPVar1,(MethodInfo *)0x0);
        if (pMVar2 != (MVCollectibleObject *)0x0) {
          URL = (String *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pMVar2,
                           (MethodInfo *)0x0);
          BrowserCommGotoRequests::BrowserCommGotoRequests_GotoURL
                    (URL,bVar3 == 0,0,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::TouristPromotionCrey::TouristPromotionCrey_Start
               (TouristPromotionCrey *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).adContinueButton;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,(this->fields)._.promotionShowsAd,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    StatHatWrapper::StatHatWrapper_Count
              (StringLiteral_TouristPromotion_CreyGames,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Continue>m__0(ITouristAdController, BaseEventData) */

void Assembly-CSharp.dll::TouristPromotionCrey::TouristPromotionCrey__Continue_m__0
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

