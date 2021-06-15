
/* Void OnEnable() */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler_OnEnable
               (GamePassesProgressBarFreeTryHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).buttonAdImages;
  if (pLVar1 != (List_1_UnityEngine_UI_Image_ *)0x0) {
    while( true ) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Count__
                         );
      if ((int)pOVar2 <= index) {
        return;
      }
      pLVar1 = (this->fields).buttonAdImages;
      if (pLVar1 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
      this_00 = (Behaviour *)
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                          );
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = (GoldRewardManager *)
                GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
      if ((this_01 == (GoldRewardManager *)0x0) ||
         (bVar3 = GoldRewardManager::GoldRewardManager_get_IsGoldRewardDone
                            (this_01,(MethodInfo *)0x0), this_00 == (Behaviour *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                (this_00,bVar3 == 0,(MethodInfo *)0x0);
      pLVar1 = (this->fields).buttonAdImages;
      index = index + 1;
      if (pLVar1 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnFreeTryTier(Int32) */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler_OnFreeTryTier
               (GamePassesProgressBarFreeTryHandler *this,int32_t tierToTry,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesProgressBarFreeTryHandler___OnFreeTryTier_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pGVar1 = (this->fields).gamePassesShopPrefab;
  (this->fields).tierToTry = (uint8_t)tierToTry;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pGVar1,
                      GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                     );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pXVar2;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__GamePassesProgressBarFreeTryHandler___OnFreeTryTier_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pGVar1 = (this_00->fields)._._._._.m_CachedPtr;
    if (pGVar1 != (GamePassesShop *)0x0) {
      GamePassesShop::GamePassesShop_Initialize
                (pGVar1,(uint)(this->fields).tierToTry,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler_OnPlayerPlanetDataUpdated
               (GamePassesProgressBarFreeTryHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isWaitingForFreeTryTier != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__GamePassesProgressBarFreeTryHandler->static_fields->__f__am_cache5 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__GamePassesProgressBarFreeTryHandler___OnPlayerPlanetDataUpdated_m__5_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__GamePassesProgressBarFreeTryHandler->static_fields->__f__am_cache5 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__GamePassesProgressBarFreeTryHandler->static_fields->__f__am_cache5;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    (this->fields).isWaitingForFreeTryTier = 0;
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar3 != (PlayerPlanetData *)0x0) {
    if ((pPVar3->fields).previewGamePassTier < (this->fields).tierToTry) {
      return;
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?();
    }
    pAVar4 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__GamePassesProgressBarFreeTryHandler__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    method_00 = (MethodInfo *)&UNK_?;
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar4,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pAVar4 = (Action *)0x0;
    if (pAVar5 != (Action *)0x0) {
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAVar4 = pAVar5;
      }
      if (pAVar4 == (Action *)0x0) goto code_?;
    }
    bVar6 = cRam_? == '\0';
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar4;
    if (bVar6) {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
    pTVar7 = (this->fields).TierUnlockedPopupControllerPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       ((XpBoostParticlePreviewer *)pTVar7,
                        TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                       );
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields)._._._._.m_CachedPtr = pXVar8;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this_00,
                 MethodInfo__GamePassesProgressBarFreeTryHandler___ShowTierUnlock_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2
                 ,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pTVar7 = (this_00->fields)._._._._.m_CachedPtr;
      if (pTVar7 != (TierUnlockedPopupController *)0x0) {
        TierUnlockedPopupController::TierUnlockedPopupController_Initialize
                  (pTVar7,(uint)(this->fields).tierToTry,0,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void PreviewTier() */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler_PreviewTier
               (GamePassesProgressBarFreeTryHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  this_02 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (this_02 != (TogglePreviewState *)0x0) {
    bVar1 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (this_02,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__GamePassesProgressBarFreeTryHandler->static_fields->__f__am_cache4 ==
          (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__GamePassesProgressBarFreeTryHandler___PreviewTier_m__4_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        TypeInfo__GamePassesProgressBarFreeTryHandler->static_fields->__f__am_cache4 =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
      }
      pEVar4 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__GamePassesProgressBarFreeTryHandler->static_fields->__f__am_cache4;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar2,(BaseEventData *)0x0,pEVar4,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
                (this_03,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = TypeInfo__System__Action;
      pAVar5 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this_01,
                 MethodInfo__GamePassesProgressBarFreeTryHandler__OnPlayerPlanetDataUpdated__,
                 (MethodInfo *)0x0);
      pAVar6 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar5,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pAVar5 = (Action *)0x0;
      if (pAVar6 != (Action *)0x0) {
        if (pAVar6->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar6;
        }
        if (pAVar5 == (Action *)0x0) goto code_?;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar5;
      this_00 = (GameTierProgressBar *)(this_01->_0).namespaze;
      if (this_00 != (GameTierProgressBar *)0x0) {
        GameTierProgressBar::GameTierProgressBar_DeactivateFreeTryBubble(this_00,(MethodInfo *)0x0);
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_01,(MethodInfo *)0x0);
        if (TypeInfo__GamePassesProgressBarFreeTryHandler->static_fields->__f__am_cache3 ==
            (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)0x0,
                     MethodInfo__GamePassesProgressBarFreeTryHandler___PreviewTier_m__3_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                    );
          TypeInfo__GamePassesProgressBarFreeTryHandler->static_fields->__f__am_cache3 =
               (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
        }
        pEVar4 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__GamePassesProgressBarFreeTryHandler->static_fields->__f__am_cache3;
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar2,(BaseEventData *)0x0,pEVar4,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        *(undefined1 *)((int)&(this_01->_0).this_arg.attrs + 1) = 1;
        return;
      }
    }
  }
  pAVar6 = (Action *)func_?();
code_?:
  func_?(pAVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler_RewardedAdCallback
               (GamePassesProgressBarFreeTryHandler *this,RewardedAdResult__Enum result,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if ((pIVar1 == (IEditModeUI *)0x0) && (RewardedAdResult__Enum_RewardNotUnlocked < result)) {
    return;
  }
  switch(result) {
  case RewardedAdResult__Enum_ErrorClient:
  case RewardedAdResult__Enum_ErrorInternal:
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__GamePassesProgressBarFreeTryHandler->static_fields->__f__am_cache2 ==
        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__GamePassesProgressBarFreeTryHandler___RewardedAdCallback_m__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      TypeInfo__GamePassesProgressBarFreeTryHandler->static_fields->__f__am_cache2 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar2;
    }
    callbackFunction = TypeInfo__GamePassesProgressBarFreeTryHandler->static_fields->__f__am_cache2;
    break;
  case RewardedAdResult__Enum_ErrorTimeout:
    goto code_?;
  default:
    GamePassesProgressBarFreeTryHandler_PreviewTier(this,(MethodInfo *)0x0);
    return;
  case RewardedAdResult__Enum_RewardNotUnlocked:
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__GamePassesProgressBarFreeTryHandler->static_fields->__f__am_cache1 ==
        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__GamePassesProgressBarFreeTryHandler___RewardedAdCallback_m__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      TypeInfo__GamePassesProgressBarFreeTryHandler->static_fields->__f__am_cache1 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar2;
    }
    callbackFunction = TypeInfo__GamePassesProgressBarFreeTryHandler->static_fields->__f__am_cache1;
  }
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
code_?:
  return;
}


/* Void ShowAd() */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler_ShowAd
               (GamePassesProgressBarFreeTryHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    bVar2 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (pTVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__GamePassesProgressBarFreeTryHandler->static_fields->__f__am_cache0 ==
          (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__GamePassesProgressBarFreeTryHandler___ShowAd_m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        TypeInfo__GamePassesProgressBarFreeTryHandler->static_fields->__f__am_cache0 =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__GamePassesProgressBarFreeTryHandler->static_fields->__f__am_cache0;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    this_00 = (GoldRewardManager *)
              GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
    if (this_00 != (GoldRewardManager *)0x0) {
      bVar2 = GoldRewardManager::GoldRewardManager_get_IsGoldRewardDone(this_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pIVar4 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)&UNK_?,
                   MethodInfo__GamePassesProgressBarFreeTryHandler__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,
                   MethodInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>__Action_System__Object__void__
                  );
        if (pIVar4 != (IAdManager *)0x0) {
          func_?();
          return;
        }
      }
      else {
        GamePassesProgressBarFreeTryHandler_PreviewTier(this,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?();
        }
        pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar1 != (TogglePreviewState *)0x0) {
          Assets::Scripts::GamePasses::TogglePreviewState::
          TogglePreviewState_set_FreeTryWithoutAdAvailable(pTVar1,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ShowTierUnlock(Boolean, Boolean) */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler_ShowTierUnlock
               (GamePassesProgressBarFreeTryHandler *this,bool wasPurchased,bool wasTempUnlocked,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesProgressBarFreeTryHandler___ShowTierUnlock_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pTVar1 = (this->fields).TierUnlockedPopupControllerPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pTVar1,
                      TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                     );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pXVar2;
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this_00,
               MethodInfo__GamePassesProgressBarFreeTryHandler___ShowTierUnlock_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pTVar1 = (this_00->fields)._._._._.m_CachedPtr;
    if (pTVar1 != (TierUnlockedPopupController *)0x0) {
      TierUnlockedPopupController::TierUnlockedPopupController_Initialize
                (pTVar1,(uint)(this->fields).tierToTry,wasPurchased,wasTempUnlocked,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <OnPlayerPlanetDataUpdated>m__5(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler__OnPlayerPlanetDataUpdated_m__5
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <PreviewTier>m__3(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler__PreviewTier_m__3
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <PreviewTier>m__4(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler__PreviewTier_m__4
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Free_try_cannot_be_activated_at_,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_An_error_occurred,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <RewardedAdCallback>m__1(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler__RewardedAdCallback_m__1
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_The_video_was_canceled__Your_Fre,(MethodInfo *)0x0);
  TM::TM__(StringLiteral_Video_canceled,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <RewardedAdCallback>m__2(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler__RewardedAdCallback_m__2
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (pIVar1 != (IAdManager *)0x0) {
    uVar2 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1);
    pSVar3 = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,uVar2,pSVar3);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <ShowAd>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GamePassesProgressBarFreeTryHandler::
     GamePassesProgressBarFreeTryHandler__ShowAd_m__0
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (pIVar1 != (IAdManager *)0x0) {
    uVar2 = func_?(0,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1);
    pSVar3 = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,uVar2,pSVar3);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

