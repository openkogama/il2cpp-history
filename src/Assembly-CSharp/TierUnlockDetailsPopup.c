
/* Void HandleSuccessfulPurchase() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_HandleSuccessfulPurchase
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__GamePassTier);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_Purchase_Tier_GoldSpent);
    func_?(&StringLiteral_Purchase_Tier);
    func_?(&StringLiteral_Purchase_Tier_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_Purchase_Tier,1,(MethodInfo *)0x0);
  EStack_1.klass = (Enum__Class *)TypeInfo__MV__Common__GamePassTier;
  EStack_1.monitor = (MonitorData *)0xffffffff;
  uStack_2 = (this->fields).tierToPurchase;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Purchase_Tier_,pSVar3,(MethodInfo *)0x0);
  StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_Purchase_Tier_GoldSpent,(this->fields).price,(MethodInfo *)0x0);
  TierUnlockDetailsPopup_ShowTierUnlock(this,1,0,(MethodInfo *)0x0);
  pUVar4 = (this->fields).OnPurchaseSuccessful;
  if (pUVar4 != (UnityAction *)0x0) {
    puStack5 = (pUVar4->fields)._._.method;
    pvStack6 = (pUVar4->fields)._._.method_code;
    (*(pUVar4->fields)._._.invoke_impl)();
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(GamePassTier, Int32, UnityAction) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_Initialize
               (TierUnlockDetailsPopup *this,GamePassTier__Enum tierToPurchase,int32_t price,
               UnityAction *OnPurchaseSuccessful,MethodInfo *method)

{
  GVar1 = tierToPurchase;
  this_02 = this;
  (this->fields).price = price;
  (this->fields).OnPurchaseSuccessful = OnPurchaseSuccessful;
  (this->fields).tierToPurchase = (undefined1)tierToPurchase;
  func_?(&(this->fields).OnPurchaseSuccessful,OnPurchaseSuccessful);
  pTVar2 = (this_02->fields).tierText;
  this = (TierUnlockDetailsPopup *)(GVar1 & 0xff);
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,pSVar3,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar2 = (this_02->fields).priceText;
    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&price,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      (*(code *)(pTVar2->klass->vtable).set_text.method)
                (pTVar2,pSVar3,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      bVar4 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
      this_00 = (this_02->fields).freeTryButton;
      (this_02->fields).isSubscribed = bVar4;
      if (bVar4 == 0) {
        bVar4 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0);
        tierToPurchase = CONCAT31(tierToPurchase._1_3_,bVar4);
      }
      else {
        tierToPurchase = CONCAT31(tierToPurchase._1_3_,1);
      }
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,(bool)tierToPurchase,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
          TierUnlockDetailsPopup_UpdateTierProgressBar(this_02,(MethodInfo *)0x0);
        }
        this_01 = (this_02->fields).buttonIcon;
        if ((this_02->fields).isSubscribed == 0) {
          pTVar5 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
          if (pTVar5 == (TogglePreviewState *)0x0) goto code_?;
          value = (pTVar5->fields).freeTry == 0;
        }
        else {
          value = true;
        }
        if (this_01 != (Image *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this_01,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnClickFreeTryAd() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_OnClickFreeTryAd
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   );
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup____c___ShowAd_b__27_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierUnlockDetailsPopup____c);
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    bVar2 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (pTVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__27_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__TierUnlockDetailsPopup____c___ShowAd_b__27_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__27_0 = callbackFunction;
        func_?(&TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__27_0,
                        callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
    if (pTVar1 != (TogglePreviewState *)0x0) {
      if ((pTVar1->fields).freeTry == 0) {
        pIVar3 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)this,
                   MethodInfo__TierUnlockDetailsPopup__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar3 != (IAdManager *)0x0) {
          puStack4 = (undefined *)0x6;
          func_?(6);
          return;
        }
      }
      else {
        TierUnlockDetailsPopup_PreviewTier(this,(MethodInfo *)0x0);
        pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar1 != (TogglePreviewState *)0x0) {
          (pTVar1->fields).freeTry = 0;
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


/* Void OnClickFreeTrySubscriber() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_OnClickFreeTrySubscriber
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__);
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup____c___PreviewTier_b__29_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup____c___PreviewTier_b__29_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierUnlockDetailsPopup____c);
    cRam_? = '\x01';
  }
  this_00 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (this_00 == (TogglePreviewState *)0x0) {
code_?:
    func_?();
  }
  else {
    bVar1 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__TierUnlockDetailsPopup____c);
      }
      pEVar3 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_1;
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__TierUnlockDetailsPopup____c);
        }
        pTVar4 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pTVar4,
                   MethodInfo__TierUnlockDetailsPopup____c___PreviewTier_b__29_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_1 = pEVar3;
        func_?(&TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_1,pEVar3);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
              (this_01,(MethodInfo *)0x0);
    pAVar5 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,
               MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pAVar5 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pGVar6 = pGVar2;
      if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar3 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_0;
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pGVar2 = pGVar6;
        if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          pGVar2 = pGVar6;
        }
        pTVar4 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pTVar4,
                   MethodInfo__TierUnlockDetailsPopup____c___PreviewTier_b__29_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_0 = pEVar3;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      (this->fields).isWaitingForFreeTryTier = 1;
      return;
    }
    pAVar7 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar5;
    }
    if (pAVar7 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar7;
    pAVar7 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar5;
    }
    if (pAVar7 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_OnDestroy
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAStack2 =
       (Action *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAStack2 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
    func_?();
    return;
  }
  pAVar1 = (Action *)0x0;
  if (pAStack2->klass == TypeInfo__System__Action) {
    pAVar1 = pAStack2;
  }
  if (pAVar1 == (Action *)0x0) {
    pAStack3 = TypeInfo__System__Action;
    func_?();
    pAStack2 = extraout_ECX;
    pAStack3 = extraout_EDX;
  }
  else {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar1;
    pAVar1 = (Action *)0x0;
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar1 = pAStack2;
    }
    pAStack3 = TypeInfo__System__Action;
    if (pAVar1 != (Action *)0x0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_OnEnable
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    if ((pMVar1->fields).playerPlanetData != (PlayerPlanetData *)0x0) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if ((pMVar1 == (MVLocalPlayer *)0x0) ||
         (pPVar2 = (pMVar1->fields).playerPlanetData, pPVar2 == (PlayerPlanetData *)0x0))
      goto code_?;
      if (((this->fields).tierToPurchase <= (pPVar2->fields).gamePassTier) &&
         ((this->fields).OnPurchaseSuccessful != (UnityAction *)0x0)) {
        (*(((this->fields).OnPurchaseSuccessful)->fields)._._.invoke_impl)();
      }
    }
    return;
  }
code_?:
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_OnPlayerPlanetDataUpdated
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__);
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup____c___OnPlayerPlanetDataUpdated_b__30_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup____c___OnPlayerPlanetDataUpdated_b__30_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierUnlockDetailsPopup____c);
    cRam_? = '\x01';
  }
  if ((this->fields).isWaitingForFreeTryTier != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TierUnlockDetailsPopup____c);
    }
    pEVar2 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__30_0;
    if (pEVar2 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__TierUnlockDetailsPopup____c);
      }
      pTVar3 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
      pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)pTVar3,
                 MethodInfo__TierUnlockDetailsPopup____c___OnPlayerPlanetDataUpdated_b__30_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__30_0 = pEVar2;
      func_?(&TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__30_0,pEVar2);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    (this->fields).isWaitingForFreeTryTier = 0;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar4 == (PlayerPlanetData *)0x0) {
    func_?();
  }
  else {
    if ((pPVar4->fields).previewGamePassTier < (this->fields).tierToPurchase) {
      return;
    }
    pAVar5 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar5 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar2 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__30_1;
      if (pEVar2 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pTVar3 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
        pEVar2 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)pTVar3,
                   MethodInfo__TierUnlockDetailsPopup____c___OnPlayerPlanetDataUpdated_b__30_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__30_1 = pEVar2;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar2,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      TierUnlockDetailsPopup_ShowTierUnlock(this,0,1,(MethodInfo *)0x0);
      return;
    }
    pAVar6 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar5;
    }
    if (pAVar6 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar6;
    pAVar6 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar6 = pAVar5;
    }
    if (pAVar6 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void PreviewTier() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_PreviewTier
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__);
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup____c___PreviewTier_b__29_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup____c___PreviewTier_b__29_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierUnlockDetailsPopup____c);
    cRam_? = '\x01';
  }
  this_00 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (this_00 == (TogglePreviewState *)0x0) {
code_?:
    func_?();
  }
  else {
    bVar1 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__TierUnlockDetailsPopup____c);
      }
      pEVar3 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_1;
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__TierUnlockDetailsPopup____c);
        }
        pTVar4 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pTVar4,
                   MethodInfo__TierUnlockDetailsPopup____c___PreviewTier_b__29_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_1 = pEVar3;
        func_?(&TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_1,pEVar3);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
              (this_01,(MethodInfo *)0x0);
    pAVar5 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,
               MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar5,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pAVar5 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
code_?:
      func_?();
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      pGVar6 = pGVar2;
      if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEVar3 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_0;
      if (pEVar3 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pGVar2 = pGVar6;
        if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
          pGVar2 = pGVar6;
        }
        pTVar4 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
        pEVar3 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar3,(Object *)pTVar4,
                   MethodInfo__TierUnlockDetailsPopup____c___PreviewTier_b__29_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__29_0 = pEVar3;
        func_?();
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      (this->fields).isWaitingForFreeTryTier = 1;
      return;
    }
    pAVar7 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar5;
    }
    if (pAVar7 == (Action *)0x0) goto code_?;
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar7;
    pAVar7 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar7 = pAVar5;
    }
    if (pAVar7 != (Action *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ProductPurchaseResponseHandler(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::
     TierUnlockDetailsPopup_ProductPurchaseResponseHandler
               (TierUnlockDetailsPopup *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup____c___ProductPurchaseResponseHandler_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup____c___ProductPurchaseResponseHandler_b__22_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup____c__DisplayClass22_0___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierUnlockDetailsPopup____c__DisplayClass22_0);
    func_?(&TypeInfo__TierUnlockDetailsPopup____c);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierUnlockDetailsPopup____c__DisplayClass22_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].monitor = (MonitorData *)this;
    value[1].klass = (Object__Class *)returnCode;
    func_?(&value[1].monitor,this);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pAVar2 = (pMVar1->fields).PurchaseProductResponseHandler;
      this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
                func_?(
                               TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
      UnityAction_2_System_Int32_System_Int32___ctor
                (this_00,(Object *)this,
                 MethodInfo__TierUnlockDetailsPopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pDVar3 == (Delegate *)0x0) {
        (pMVar1->fields).PurchaseProductResponseHandler =
             (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             0x0;
        this_01 = (TierUnlockDetailsPopup *)0x0;
      }
      else {
        pAVar2 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  *)func_?();
        if (pAVar2 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                       *)0x0) {
          func_?();
          goto code_?;
        }
        (pMVar1->fields).PurchaseProductResponseHandler = pAVar2;
        this_01 = (TierUnlockDetailsPopup *)func_?();
        if (this_01 == (TierUnlockDetailsPopup *)0x0) goto code_?;
      }
      func_?();
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_01,(MethodInfo *)0x0);
      if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__TierUnlockDetailsPopup____c);
      }
      pEVar5 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__22_0;
      if (pEVar5 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__TierUnlockDetailsPopup____c);
        }
        pTVar6 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
        pEVar5 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar5,(Object *)pTVar6,
                   MethodInfo__TierUnlockDetailsPopup____c___ProductPurchaseResponseHandler_b__22_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__22_0 = pEVar5;
        func_?(&TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__22_0,pEVar5);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar4,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar5,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_01,(MethodInfo *)0x0);
      if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__TierUnlockDetailsPopup____c);
      }
      pEVar5 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__22_1;
      if (pEVar5 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__TierUnlockDetailsPopup____c);
        }
        pTVar6 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
        pEVar5 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)pEVar5,(Object *)pTVar6,
                   MethodInfo__TierUnlockDetailsPopup____c___ProductPurchaseResponseHandler_b__22_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__22_1 = pEVar5;
        func_?(&TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__22_1,pEVar5);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar4,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar5,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if (value[1].klass != (Object__Class *)0x0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__TierUnlockDetailsPopup____c__DisplayClass22_0___ProductPurchaseResponseHandler_b__2_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar4,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        return;
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MV__Common__GamePassTier);
        func_?(&TypeInfo__StatHatWrapper);
        func_?(&StringLiteral_Purchase_Tier_GoldSpent);
        func_?(&StringLiteral_Purchase_Tier);
        func_?(&StringLiteral_Purchase_Tier_);
        cRam_? = '\x01';
      }
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__StatHatWrapper);
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_Purchase_Tier,1,(MethodInfo *)0x0);
      EStack_7.klass = (Enum__Class *)TypeInfo__MV__Common__GamePassTier;
      uStack_8 = (this_01->fields).tierToPurchase;
      EStack_7.monitor = (MonitorData *)0xffffffff;
      pSVar9 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_7,(MethodInfo *)0x0);
      pSVar9 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Purchase_Tier_,pSVar9,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Count(pSVar9,1,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Count
                (StringLiteral_Purchase_Tier_GoldSpent,(this_01->fields).price,(MethodInfo *)0x0);
      TierUnlockDetailsPopup_ShowTierUnlock(this_01,1,0,(MethodInfo *)0x0);
      pUVar10 = (this_01->fields).OnPurchaseSuccessful;
      if (pUVar10 != (UnityAction *)0x0) {
        (*(pUVar10->fields)._._.invoke_impl)
                  ((pUVar10->fields)._._.method_code,(pUVar10->fields)._._.method);
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Purchase() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_Purchase
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    TierPurchaseNotEnoughGoldErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchaseNotEnoughGoldErrorPopup>_TierPurchaseNotEnoughGoldErrorPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup____c___Purchase_b__17_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup____c___Purchase_b__17_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup____c__DisplayClass17_0___Purchase_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierUnlockDetailsPopup____c__DisplayClass17_0);
    func_?(&TypeInfo__TierUnlockDetailsPopup____c);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar2 != (PlayerPlanetData *)0x0) {
        if ((pPVar2->fields).gamePassTier == (this->fields).tierToPurchase) {
          return;
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                    (pMVar3,(uint)(this->fields).tierToPurchase,(MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          callbackFunction = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__17_2;
          if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pTVar4 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
            callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                       (Object *)pTVar4,
                       MethodInfo__TierUnlockDetailsPopup____c___Purchase_b__17_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__17_2 = callbackFunction;
            func_?();
          }
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
    else {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_00 != (MVNetworkGame *)0x0) {
        method_00 = (MethodInfo *)&UNK_?;
        pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
        if ((pMVar5 != (MVLocalPlayer *)0x0) &&
           (pUVar6 = (pMVar5->fields)._._UserProfileData_k__BackingField,
           pUVar6 != (UserProfileData *)0x0)) {
          if ((pUVar6->fields).Gold < (this->fields).price) {
            value = (Object *)
                    func_?(TypeInfo__TierUnlockDetailsPopup____c__DisplayClass17_0);
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      (value,ExceptionArgument__Enum_obj,method_00);
            original = (this->fields).tierPurchaseGoldErrorPopupPrefab;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pOVar7 = (Object__Class *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)original,
                                 TierPurchaseNotEnoughGoldErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchaseNotEnoughGoldErrorPopup>_TierPurchaseNotEnoughGoldErrorPopup_
                                );
            if (value != (Object *)0x0) {
              value[1].klass = pOVar7;
              func_?(value + 1,pOVar7);
              IVar8.m_value =
                   (int32_t)UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
              callbackFunction_00 =
                   (ExecuteEvents_EventFunction_1_System_Object_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                         MethodInfo__TierUnlockDetailsPopup____c__DisplayClass17_0___Purchase_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        ((GameObject *)IVar8.m_value,(BaseEventData *)0x0,callbackFunction_00,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              if (value[1].klass != (Object__Class *)0x0) {
                pIVar9 = ((value[1].klass)->_0).byval_arg.data.array;
                pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                                    ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
                if (pIVar9 != (Il2CppArrayType *)0x0) {
                  pIVar11 = pIVar9->etype;
                  uVar12._0_2_ = pIVar11[99].attrs;
                  uVar12._2_1_ = pIVar11[99].type;
                  uVar12._3_1_ = pIVar11[99].field_0x7;
                  (*(code *)pIVar11[99].data)(pIVar9,pSVar10,uVar12);
                  return;
                }
              }
            }
          }
          else {
            IVar8.m_value =
                 (int32_t)UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
            IVar13.m_value = IVar8.m_value;
            if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
              IVar13.m_value = (int32_t)&UNK_?;
              func_?();
            }
            callbackFunction_01 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__17_0;
            if (callbackFunction_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
              IVar8.m_value = IVar13.m_value;
              if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__TierUnlockDetailsPopup____c);
                IVar8.m_value = IVar13.m_value;
              }
              pTVar4 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
              callbackFunction_01 =
                   (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                  );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_01,
                         (Object *)pTVar4,
                         MethodInfo__TierUnlockDetailsPopup____c___Purchase_b__17_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__17_0 = callbackFunction_01;
              func_?(&TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__17_0,
                              callbackFunction_01);
            }
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      ((GameObject *)IVar8.m_value,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_01,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                      );
            IVar8.m_value =
                 (int32_t)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((MVNetworkGame *)IVar8.m_value != (MVNetworkGame *)0x0) {
              pAVar14 = (((MVNetworkGame *)IVar8.m_value)->fields).PurchaseProductResponseHandler;
              this_01 = (UnityAction_2_System_Int32_System_Int32_ *)
                        func_?(
                                       TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                       );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::
              Int32]::UnityAction_2_System_Int32_System_Int32___ctor
                        (this_01,(Object *)this,
                         MethodInfo__TierUnlockDetailsPopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                         ,(MethodInfo *)0x0);
              pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar14,(Delegate *)this_01,(MethodInfo *)0x0);
              if (pDVar15 == (Delegate *)0x0) {
                *(Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  **)(IVar8.m_value + 0xbc) =
                     (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                      *)0x0;
              }
              else {
                pAVar14 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                           *)func_?();
                if (pAVar14 ==
                    (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0) {
                  func_?();
                  goto code_?;
                }
                *(Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                  **)(IVar8.m_value + 0xbc) = pAVar14;
                iVar16 = func_?();
                if (iVar16 == 0) goto code_?;
              }
              func_?();
              pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                 ((MethodInfo *)0x0);
              if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
                MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseTier
                          (pMVar3,(uint)(this->fields).tierToPurchase,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Int32 ReduceGamePointsWithPreviousTierRequirements(GamePassTier, Int32,
   Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierState]) */

int32_t Assembly-CSharp.dll::TierUnlockDetailsPopup::
        TierUnlockDetailsPopup_ReduceGamePointsWithPreviousTierRequirements
                  (TierUnlockDetailsPopup *this,GamePassTier__Enum gamePassTierToDisplay,
                  int32_t gamePoints,
                  Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                  *gameTierShopStatus,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    cRam_? = '\x01';
  }
  key = (gamePassTierToDisplay & 0xff) - 1;
  if (0 < (int)key) {
    if (gameTierShopStatus ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    do {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)gameTierShopStatus,key,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar3 == (Object *)0x0) goto code_?;
      gamePoints = gamePoints - (int)pOVar3[3].klass;
      key = key - 1;
    } while (0 < (int)key);
  }
  return gamePoints;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_RewardedAdCallback
               (TierUnlockDetailsPopup *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup____c___RewardedAdCallback_b__28_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup____c___RewardedAdCallback_b__28_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierUnlockDetailsPopup____c);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  RVar1 = RewardedAdResult__Enum_RewardUnlocked;
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
      (IEditModeUI *)0x0) {
    RVar1 = result;
  }
  switch(RVar1) {
  case RewardedAdResult__Enum_ErrorClient:
  case RewardedAdResult__Enum_ErrorInternal:
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TierUnlockDetailsPopup____c);
    }
    callbackFunction = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__28_1;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__TierUnlockDetailsPopup____c);
      }
      pTVar2 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pTVar2,
                 MethodInfo__TierUnlockDetailsPopup____c___RewardedAdCallback_b__28_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__28_1 = callbackFunction;
      ppEVar3 = &TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__28_1;
code_?:
      func_?(ppEVar3,callbackFunction);
    }
    break;
  case RewardedAdResult__Enum_ErrorTimeout:
    goto code_?;
  case RewardedAdResult__Enum_RewardUnlocked:
    TierUnlockDetailsPopup_PreviewTier(this,(MethodInfo *)0x0);
    return;
  case RewardedAdResult__Enum_RewardNotUnlocked:
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TierUnlockDetailsPopup____c);
    }
    callbackFunction = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__28_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__TierUnlockDetailsPopup____c);
      }
      pTVar2 = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pTVar2,
                 MethodInfo__TierUnlockDetailsPopup____c___RewardedAdCallback_b__28_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__28_0 = callbackFunction;
      ppEVar3 = &TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__28_0;
      goto code_?;
    }
    break;
  default:
    goto code_?;
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
code_?:
code_?:
  return;
}


/* Void ShowAd() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_ShowAd
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   );
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup____c___ShowAd_b__27_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierUnlockDetailsPopup____c);
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    bVar2 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (pTVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__27_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__TierUnlockDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__TierUnlockDetailsPopup____c___ShowAd_b__27_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__27_0 = callbackFunction;
        func_?(&TypeInfo__TierUnlockDetailsPopup____c->static_fields->__9__27_0,
                        callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
    if (pTVar1 != (TogglePreviewState *)0x0) {
      if ((pTVar1->fields).freeTry == 0) {
        pIVar3 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        this_00 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_00,(Object *)this,
                   MethodInfo__TierUnlockDetailsPopup__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar3 != (IAdManager *)0x0) {
          puStack4 = (undefined *)0x6;
          func_?(6);
          return;
        }
      }
      else {
        TierUnlockDetailsPopup_PreviewTier(this,(MethodInfo *)0x0);
        pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar1 != (TogglePreviewState *)0x0) {
          (pTVar1->fields).freeTry = 0;
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


/* Void ShowTier() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_ShowTier
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup____c__DisplayClass16_0___ShowTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierUnlockDetailsPopup____c__DisplayClass16_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierUnlockDetailsPopup____c__DisplayClass16_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).gamePassesShopPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    if (value[1].klass != (Object__Class *)0x0) {
      GamePassesShop::GamePassesShop_Initialize
                ((GamePassesShop *)value[1].klass,(uint)(this->fields).tierToPurchase,
                 (MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                 MethodInfo__TierUnlockDetailsPopup____c__DisplayClass16_0___ShowTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowTierUnlock(Boolean, Boolean) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_ShowTierUnlock
               (TierUnlockDetailsPopup *this,bool wasPurchased,bool wasTempUnlocked,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__TierUnlockDetailsPopup____c__DisplayClass23_0___ShowTierUnlock_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierUnlockDetailsPopup____c__DisplayClass23_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierUnlockDetailsPopup____c__DisplayClass23_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).TierUnlockedPopupControllerPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                     );
  if (value != (Object *)0x0) {
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
               MethodInfo__TierUnlockDetailsPopup____c__DisplayClass23_0___ShowTierUnlock_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (value[1].klass != (Object__Class *)0x0) {
      TierUnlockedPopupController::TierUnlockedPopupController_Initialize
                ((TierUnlockedPopupController *)value[1].klass,(uint)(this->fields).tierToPurchase,
                 wasPurchased,wasTempUnlocked,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateTierProgressBar() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_UpdateTierProgressBar
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    func_?(&::StringLiteral____);
    cRam_? = '\x01';
  }
  IStack_1.m_value = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 != (PlayerPlanetData *)0x0) {
    pOVar3 = (Object__Class *)(pPVar2->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar2 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      playerGamePassTier =
           (MethodInfo **)
           CONCAT31((int3)((uint)in_stack_4 >> 8),(pPVar2->fields).gamePassTier);
      this_02 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,(int32_t)pOVar3,(GamePassTier__Enum)playerGamePassTier,
                           (MethodInfo *)0x0);
      uStack_5 = (this->fields).tierToPurchase;
      if (cRam_? == '\0') {
        playerGamePassTier =
             &
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
        ;
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                       );
        cRam_? = '\x01';
      }
      key = uStack_5 - 1;
      if (0 < (int)key) {
        if (this_02 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) goto code_?;
        do {
          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,key,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar6 == (Object *)0x0) goto code_?;
          pOVar3 = (Object__Class *)((int)pOVar3 - (int)pOVar6[3].klass);
          key = key - 1;
        } while (0 < (int)key);
      }
      IStack_1.m_value = (int32_t)pOVar3;
      if ((float)(int)pOVar3 < 0.0) {
        IStack_1.m_value = 0;
      }
      if (this_02 !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,
                            CONCAT31((int3)((uint)playerGamePassTier >> 8),
                                     (this->fields).tierToPurchase),
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 != (Object *)0x0) {
          pOVar3 = pOVar6[3].klass;
          if ((int)pOVar3 < IStack_1.m_value) {
            IStack_1.m_value = (int32_t)pOVar3;
          }
          this_01 = (ProgressBarAndroid *)(this->fields).tierProgressBar;
          if (this_01 != (ProgressBarAndroid *)0x0) {
            ProgressBarAndroid::ProgressBarAndroid_set_Progress
                      (this_01,(float)IStack_1.m_value / (float)(int)pOVar3,(MethodInfo *)0x0);
            str0 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
            str2 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
            mscorlib.dll::System::String::String_Concat_4
                      (str0,::StringLiteral____,str2,(MethodInfo *)0x0);
            pTVar7 = (this->fields).progressText;
            if (pTVar7 != (Text *)0x0) {
              (*(code *)(pTVar7->klass->vtable).set_text.method)();
              pGVar8 = (this->fields).progressBarDivider;
              if (pGVar8 != (GameObject *)0x0) {
                bVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_activeSelf(pGVar8,(MethodInfo *)0x0);
                if (bVar9 != 0) {
                  pPVar10 = (this->fields).tierProgressBar;
                  if (pPVar10 == (ProgressBar *)0x0) goto code_?;
                  if ((pPVar10->fields).progress <= 0.0) {
                    pGVar8 = (this->fields).progressBarDivider;
                    if (pGVar8 == (GameObject *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar8,0,(MethodInfo *)0x0);
                  }
                }
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

