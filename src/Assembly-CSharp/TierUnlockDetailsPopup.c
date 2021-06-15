
/* Void FreeTryTier() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_FreeTryTier
               (TierUnlockDetailsPopup *this,MethodInfo *method)

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
      if (TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache4 ==
          (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__TierUnlockDetailsPopup___ShowAd_m__4_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache4 =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache4;
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
                  (pUVar3,unaff_EBX,
                   MethodInfo__TierUnlockDetailsPopup__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)pUVar3);
        if (pIVar4 != (IAdManager *)0x0) {
          pIVar5 = pIVar4->klass;
          uVar6 = 0;
          uVar7._0_1_ = (pIVar5->_1).rank;
          uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
          if (uVar7 != 0) {
            do {
              if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
                  (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                ppMVar8 = &(&(pIVar4->klass->vtable).RequestRewardedAd)
                           [pIVar5->interfaceOffsets[uVar6].offset].method;
                goto code_?;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar7);
          }
          ppMVar8 = (MethodInfo **)func_?();
code_?:
          (*(code *)*ppMVar8)();
          return;
        }
      }
      else {
        TierUnlockDetailsPopup_PreviewTier((TierUnlockDetailsPopup *)0x0,(MethodInfo *)0x0);
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void HandleSuccessfulPurchase() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_HandleSuccessfulPurchase
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__StatHatWrapper);
  }
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_Purchase_Tier,1,(MethodInfo *)0x0);
  arg1 = (Object *)func_?(TypeInfo__MV__Common__GamePassTier,&stack0xfffffffb);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  key = mscorlib.dll::System::String::String_Concat
                  ((Object *)StringLiteral_Purchase_Tier_,arg1,(MethodInfo *)0x0);
  StatHatWrapper::StatHatWrapper_Count(key,1,(MethodInfo *)0x0);
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_Purchase_Tier_GoldSpent,(this->fields).price,(MethodInfo *)0x0);
  TierUnlockDetailsPopup_ShowTierUnlock(this,1,0,(MethodInfo *)0x0);
  this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).OnPurchaseSuccessful;
  if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize(GamePassTier, Int32, UnityAction) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_Initialize
               (TierUnlockDetailsPopup *this,GamePassTier__Enum tierToPurchase,int32_t price,
               UnityAction *OnPurchaseSuccessful,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).tierText;
  (this->fields).price = price;
  (this->fields).OnPurchaseSuccessful = OnPurchaseSuccessful;
  GStack_2 = tierToPurchase & 0xff;
  (this->fields).tierToPurchase = (undefined1)tierToPurchase;
  uVar3 = func_?(&GStack_2,0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,uVar3,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar1 = (this->fields).priceText;
    uVar3 = func_?(&price,0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,uVar3,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      this_00 = (this->fields).freeTryButton;
      if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVClientSettings);
      }
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                        ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)0x0,in_stack_5);
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,bVar4,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__GamePassesManager);
        }
        bVar4 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
        if (bVar4 != 0) {
          TierUnlockDetailsPopup_UpdateTierProgressBar(this,(MethodInfo *)0x0);
        }
        this_01 = (this->fields).buttonAdImage;
        if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__GamePassesManager);
        }
        this_02 = (GoldRewardManager *)
                  GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (this_02 != (GoldRewardManager *)0x0) {
          bVar4 = GoldRewardManager::GoldRewardManager_get_IsGoldRewardDone
                            (this_02,(MethodInfo *)0x0);
          if (this_01 != (Image *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)this_01,bVar4 == 0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_OnDestroy
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAStack2 =
       (Action *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAStack2 != (Action *)0x0) {
    if (pAStack2->klass == TypeInfo__System__Action) {
      pAVar1 = pAStack2;
    }
    if (pAVar1 == (Action *)0x0) {
      pAStack3 = TypeInfo__System__Action;
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar1;
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_OnEnable
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pAVar1 = (AvatarUIHandlerRemote *)
           MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pAVar1 != (AvatarUIHandlerRemote *)0x0) {
    pSVar2 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar(pAVar1,(MethodInfo *)0x0);
    if (pSVar2 == (ShieldBar *)0x0) {
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pAVar1 = (AvatarUIHandlerRemote *)
             MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pAVar1 != (AvatarUIHandlerRemote *)0x0) &&
       (pSVar2 = AvatarUIHandlerRemote::AvatarUIHandlerRemote_get_ShieldBar
                           (pAVar1,(MethodInfo *)0x0), pSVar2 != (ShieldBar *)0x0)) {
      if (*(byte *)&pSVar2[1].monitor < *(byte *)&(pAVar1->fields).avatarName) {
        return;
      }
      if ((pAVar1->fields).shieldBarRenderer == (Renderer *)0x0) {
        return;
      }
      if (*(AvatarMotor_OnActiveBounceDelegate **)(in_stack_3 + 0x2c) !=
          (AvatarMotor_OnActiveBounceDelegate *)0x0) {
        AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                  (*(AvatarMotor_OnActiveBounceDelegate **)(in_stack_3 + 0x2c),
                   in_stack_4);
      }
      pcVar5 = *(code **)(in_stack_3 + 8);
      method_00 = *(KeyValuePair_2_WinningConditionType_System_Object_ **)(in_stack_3 + 0x14)
      ;
      piVar6 = *(int **)(in_stack_3 + 0x10);
      if ((short)method_00[5].key == -1) {
        func_?();
      }
      cVar7 = func_?();
      if (cVar7 == '\0') {
        if (*(char *)((int)&method_00[5].key + 2) == '\0') {
          (*pcVar5)();
          return;
        }
      }
      else if (((short)method_00[5].key != -1) &&
              (((piVar6 == (int *)0x0 || ((*(uint *)(*piVar6 + 0xa0) & 0x100) == 0)) &&
               (*(int *)(in_stack_3 + 0xc) != 0)))) {
        cVar7 = func_?();
        if (cVar7 != '\0') {
          return;
        }
        cVar7 = func_?();
        mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
        Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                  (method_00,(MethodInfo *)method_00);
        cVar8 = func_?();
        if (cVar7 != '\0') {
          if (cVar8 != '\0') {
            func_?();
            return;
          }
          func_?();
          return;
        }
        if (cVar8 != '\0') {
          mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System::
          Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value(method_00,unaff_EBX)
          ;
          func_?();
          return;
        }
        func_?();
        return;
      }
      (*pcVar5)();
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_OnPlayerPlanetDataUpdated
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isWaitingForFreeTryTier != 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache9 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__TierUnlockDetailsPopup___OnPlayerPlanetDataUpdated_m__9_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache9 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
    }
    pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
             TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache9;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar1,(BaseEventData *)0x0,pEVar3,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    (this->fields).isWaitingForFreeTryTier = 0;
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  pPVar4 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar4 != (PlayerPlanetData *)0x0) {
    if ((this->fields).tierToPurchase <= (pPVar4->fields).previewGamePassTier) {
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?();
      }
      pAVar5 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,
                 MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0);
      pAVar6 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar5,(Delegate *)pUVar2,(MethodInfo *)0x0);
      pAVar5 = (Action *)0x0;
      if (pAVar6 != (Action *)0x0) {
        if (pAVar6->klass == TypeInfo__System__Action) {
          pAVar5 = pAVar6;
        }
        if (pAVar5 == (Action *)0x0) goto code_?;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar5;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cacheA ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)0x0,
                   MethodInfo__TierUnlockDetailsPopup___OnPlayerPlanetDataUpdated_m__A_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cacheA =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
      }
      pEVar3 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cacheA;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar1,(BaseEventData *)0x0,pEVar3,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      TierUnlockDetailsPopup_ShowTierUnlock(this,0,1,(MethodInfo *)0x0);
    }
    return;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  this_01 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (this_01 != (TogglePreviewState *)0x0) {
    bVar1 = Assets::Scripts::GamePasses::TogglePreviewState::TogglePreviewState_get_CanToggle
                      (this_01,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache8 ==
          (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__TierUnlockDetailsPopup___PreviewTier_m__8_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache8 =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
      }
      pEVar4 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache8;
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
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
                (this_02,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?();
      }
      this_00 = TypeInfo__System__Action;
      pAVar5 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this_00,
                 MethodInfo__TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated__,(MethodInfo *)0x0);
      pAVar6 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar5,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pAVar5 = (Action *)0x0;
      if (pAVar6 == (Action *)0x0) {
code_?:
        TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar5;
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_00,(MethodInfo *)0x0);
        if (TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache7 ==
            (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
          pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar3,(Object *)0x0,
                     MethodInfo__TierUnlockDetailsPopup___PreviewTier_m__7_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,
                     MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                    );
          TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache7 =
               (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
        }
        pEVar4 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                 TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache7;
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
        *(undefined1 *)&(this_00->_0).fields = 1;
        return;
      }
      if (pAVar6->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar6;
      }
      if (pAVar5 != (Action *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ProductPurchaseResponseHandler(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::
     TierUnlockDetailsPopup_ProductPurchaseResponseHandler
               (TierUnlockDetailsPopup *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierUnlockDetailsPopup___ProductPurchaseResponseHandler_c__AnonStorey2;
  pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  object = pUVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)pUVar1,0.0,(MethodInfo *)method_00);
  if (pUVar1 != (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)0x0) {
    (((Component_1__Fields *)&(pUVar1->fields)._._.method_ptr)->_).m_CachedPtr = (void *)returnCode;
    (pUVar1->fields)._._.invoke_impl = this;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      pAVar3 = (pMVar2->fields).PurchaseProductResponseHandler;
      pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar1,(Object *)this,
                 MethodInfo__TierUnlockDetailsPopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,
                 MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
                );
      pAVar4 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pAVar3,(Delegate *)pUVar1,(MethodInfo *)0x0);
      pAVar3 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)0x0;
      if (pAVar4 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0) {
        if (pAVar4->klass ==
            TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
           ) {
          pAVar3 = pAVar4;
        }
        if (pAVar3 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                       *)0x0) goto code_?;
      }
      (pMVar2->fields).PurchaseProductResponseHandler = pAVar3;
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache2 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        object = pUVar1;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar1,(Object *)0x0,
                   MethodInfo__TierUnlockDetailsPopup___ProductPurchaseResponseHandler_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache2 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar1;
      }
      pEVar6 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache2;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar5,(BaseEventData *)0x0,pEVar6,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache3 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar1,(Object *)0x0,
                   MethodInfo__TierUnlockDetailsPopup___ProductPurchaseResponseHandler_m__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache3 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar1;
      }
      pEVar6 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache3;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar5,(BaseEventData *)0x0,pEVar6,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if ((((Component_1__Fields *)&(object->fields)._._.method_ptr)->_).m_CachedPtr != (void *)0x0)
      {
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar1,(Object *)object,
                   MethodInfo__TierUnlockDetailsPopup___ProductPurchaseResponseHandler_c__AnonStorey2____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar5,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar1,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        return;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      StatHatWrapper::StatHatWrapper_Count(StringLiteral_Purchase_Tier,1,(MethodInfo *)0x0);
      arg1 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      key = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_Purchase_Tier_,arg1,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Count(key,1,(MethodInfo *)0x0);
      StatHatWrapper::StatHatWrapper_Count
                (StringLiteral_Purchase_Tier_GoldSpent,(this->fields).price,(MethodInfo *)0x0);
      TierUnlockDetailsPopup_ShowTierUnlock(this,1,0,(MethodInfo *)0x0);
      this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).OnPurchaseSuccessful;
      if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
        AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                  (this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Purchase() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_Purchase
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__GamePassesManager);
      }
      pPVar2 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar2 != (PlayerPlanetData *)0x0) {
        if ((pPVar2->fields).gamePassTier == (this->fields).tierToPurchase) {
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0)
        ;
        if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                    (pMVar3,(uint)(this->fields).tierToPurchase,(MethodInfo *)0x0);
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache1 ==
              (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)0x0,
                       MethodInfo__TierUnlockDetailsPopup___Purchase_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache1 =
                 (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar5;
          }
          pEVar6 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                   TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache1;
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar4,(BaseEventData *)0x0,pEVar6,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar7 != (MVNetworkGame *)0x0) &&
          (this_00 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar7,(MethodInfo *)0x0),
          this_00 != (MVLocalPlayer *)0x0)) &&
         (iVar8 = GamePointGainEffect::GamePointGainEffect_get_ID
                             ((GamePointGainEffect *)this_00,(MethodInfo *)0x0), iVar8 != 0)) {
        if (*(int *)(iVar8 + 0x10) < (int)unaff_EBX[4].fields._.m_CachedPtr) {
          this_01 = (ScaleAnimationBase *)func_?();
          ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,in_stack_9);
          pXVar10 = (XpBoostParticlePreviewer *)unaff_EBX[3].monitor;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          pXVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                              (pXVar10,
                               TierPurchaseNotEnoughGoldErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchaseNotEnoughGoldErrorPopup>_TierPurchaseNotEnoughGoldErrorPopup_
                              );
          if (this_01 != (ScaleAnimationBase *)0x0) {
            (this_01->fields)._._._._.m_CachedPtr = pXVar10;
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               (unaff_EBX,(MethodInfo *)0x0);
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                       );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)this_01,
                       MethodInfo__TierUnlockDetailsPopup___Purchase_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (pGVar4,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pvVar11 = (this_01->fields)._._._._.m_CachedPtr;
            if (pvVar11 != (void *)0x0) {
              piVar12 = *(int **)((int)pvVar11 + 0xc);
              uVar13 = func_?(&stack0xfffffff8,0);
              if (piVar12 != (int *)0x0) {
                (**(code **)(*piVar12 + 0x308))(piVar12,uVar13,*(undefined4 *)(*piVar12 + 0x30c));
                return;
              }
            }
          }
        }
        else {
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             (unaff_EBX,(MethodInfo *)0x0);
          if (TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache0 ==
              (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)0x0,
                       MethodInfo__TierUnlockDetailsPopup___Purchase_m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                      );
            TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache0 =
                 (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar5;
          }
          pEVar6 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
                   TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache0;
          if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr
               & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy_63
                    (pGVar4,(BaseEventData *)0x0,pEVar6,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar7 != (MVNetworkGame *)0x0) {
            pAVar14 = (pMVar7->fields).PurchaseProductResponseHandler;
            pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(
                                       TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                                       );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar5,(Object *)unaff_EBX,
                       MethodInfo__TierUnlockDetailsPopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                       ,
                       MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
                      );
            pAVar15 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                       *)mscorlib.dll::System::Delegate::Delegate_Combine
                                   ((Delegate *)pAVar14,(Delegate *)pUVar5,(MethodInfo *)0x0);
            pAVar14 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                       *)0x0;
            if (pAVar15 !=
                (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                 *)0x0) {
              if (pAVar15->klass ==
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 ) {
                pAVar14 = pAVar15;
              }
              if (pAVar14 ==
                  (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)0x0) {
                func_?(pAVar15,
                                TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                               );
                goto code_?;
              }
            }
            (pMVar7->fields).PurchaseProductResponseHandler = pAVar14;
            pMVar3 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                               ((MethodInfo *)0x0);
            if (pMVar3 != (MVNetworkGame_OperationRequests *)0x0) {
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseTier
                        (pMVar3,(uint)*(byte *)&unaff_EBX[4].monitor,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = gamePassTierToDisplay & 0xff;
  while( true ) {
    key = key - GamePassTier__Enum_Tier1;
    if ((int)key < 1) {
      return gamePoints;
    }
    if ((gameTierShopStatus ==
         (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
       || (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                    GamePassTier,System::Object]::
                    Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                              ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)
                               gameTierShopStatus,key,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                              ), pOVar1 == (Object *)0x0)) break;
    gamePoints = gamePoints - (int)pOVar1[3].klass;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_RewardedAdCallback
               (TierUnlockDetailsPopup *this,RewardedAdResult__Enum result,MethodInfo *method)

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
    if (TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache6 ==
        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__TierUnlockDetailsPopup___RewardedAdCallback_m__6_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache6 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar2;
    }
    callbackFunction = TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache6;
    break;
  case RewardedAdResult__Enum_ErrorTimeout:
    goto code_?;
  default:
    TierUnlockDetailsPopup_PreviewTier(this,(MethodInfo *)0x0);
    return;
  case RewardedAdResult__Enum_RewardNotUnlocked:
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache5 ==
        (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)0x0,
                 MethodInfo__TierUnlockDetailsPopup___RewardedAdCallback_m__5_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                );
      TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache5 =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar2;
    }
    callbackFunction = TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache5;
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

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_ShowAd
               (TierUnlockDetailsPopup *this,MethodInfo *method)

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
      if (TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache4 ==
          (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__TierUnlockDetailsPopup___ShowAd_m__4_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache4 =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar3;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__TierUnlockDetailsPopup->static_fields->__f__am_cache4;
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
                  (pUVar3,unaff_EBX,
                   MethodInfo__TierUnlockDetailsPopup__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)pUVar3);
        if (pIVar4 != (IAdManager *)0x0) {
          pIVar5 = pIVar4->klass;
          uVar6 = 0;
          uVar7._0_1_ = (pIVar5->_1).rank;
          uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
          if (uVar7 != 0) {
            do {
              if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
                  (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
                ppMVar8 = &(&(pIVar4->klass->vtable).RequestRewardedAd)
                           [pIVar5->interfaceOffsets[uVar6].offset].method;
                goto code_?;
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar7);
          }
          ppMVar8 = (MethodInfo **)func_?();
code_?:
          (*(code *)*ppMVar8)();
          return;
        }
      }
      else {
        TierUnlockDetailsPopup_PreviewTier((TierUnlockDetailsPopup *)0x0,(MethodInfo *)0x0);
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ShowTier() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_ShowTier
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierUnlockDetailsPopup___ShowTier_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  pGVar1 = (this->fields).gamePassesShopPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar1 = (GamePassesShop *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pGVar1,
                      GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                     );
  if ((this_00 != (ScaleAnimationBase *)0x0) &&
     ((this_00->fields)._._._._.m_CachedPtr = pGVar1, pGVar1 != (GamePassesShop *)0x0)) {
    GamePassesShop::GamePassesShop_Initialize
              (pGVar1,(uint)(this->fields).tierToPurchase,(MethodInfo *)0x0);
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
               MethodInfo__TierUnlockDetailsPopup___ShowTier_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierUnlockDetailsPopup___ShowTierUnlock_c__AnonStorey3;
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
               MethodInfo__TierUnlockDetailsPopup___ShowTierUnlock_c__AnonStorey3____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
                (pTVar1,(uint)(this->fields).tierToPurchase,wasPurchased,wasTempUnlocked,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateTierProgressBar() */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup_UpdateTierProgressBar
               (TierUnlockDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (Object__Class *)(pPVar1->fields).progressionGamePoints;
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      playerGamePassTier =
           CONCAT31((int3)((uint)in_stack_2 >> 8),(pPVar1->fields).gamePassTier);
      this_03 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,(int32_t)playerGamePoints,playerGamePassTier,(MethodInfo *)0x0);
      bVar3 = (this->fields).tierToPurchase;
      if (cRam_? == '\0') {
        uVar4 = _UNK_?;
        func_?();
        bVar3 = (byte)((uint)uVar4 >> 0x18);
        cRam_? = '\x01';
      }
      key = (GamePassTier__Enum)bVar3;
      while (key = key - GamePassTier__Enum_Tier1, 0 < (int)key) {
        if ((this_03 ==
             (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
             0x0) || (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                               GamePassTier,System::Object]::
                               Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                         ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)
                                          this_03,key,
                                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                         ), pOVar5 == (Object *)0x0)) goto code_?;
        playerGamePoints = (Object__Class *)((int)playerGamePoints - (int)pOVar5[3].klass);
      }
      if ((float)(int)playerGamePoints < 0.0) {
        playerGamePoints = (Object__Class *)0x0;
      }
      if ((this_03 !=
           (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0
          ) && (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                         GamePassTier,System::Object]::
                         Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                   ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_03,
                                    CONCAT31((int3)(playerGamePassTier >> 8),
                                             (this->fields).tierToPurchase),
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                   ), pOVar5 != (Object *)0x0)) {
        pOVar6 = pOVar5[3].klass;
        if ((int)pOVar6 < (int)playerGamePoints) {
          playerGamePoints = pOVar6;
        }
        this_01 = (this->fields).tierProgressBar;
        if (this_01 != (ProgressBar *)0x0) {
          ProgressBar::ProgressBar_set_Progress
                    (this_01,(float)(int)playerGamePoints / (float)(int)pOVar6,(MethodInfo *)0x0);
          pOVar5 = (Object *)func_?();
          arg2 = (Object *)func_?(TypeInfo__System__Int32);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar7 = mscorlib.dll::System::String::String_Concat_1
                             (pOVar5,(Object *)StringLiteral____,arg2,(MethodInfo *)0x0);
          pTVar8 = (this->fields).progressText;
          if (pTVar8 != (Text *)0x0) {
            (*(code *)(pTVar8->klass->vtable).set_text.method)
                      (pTVar8,pSVar7,
                       (pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            pGVar9 = (this->fields).progressBarDivider;
            if (pGVar9 != (GameObject *)0x0) {
              bVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                                (pGVar9,(MethodInfo *)0x0);
              if (bVar10 != 0) {
                this_02 = (ProgressBarAndroid *)(this->fields).tierProgressBar;
                if (this_02 == (ProgressBarAndroid *)0x0) goto code_?;
                fVar11 = ProgressBarAndroid::ProgressBarAndroid_get_Progress
                                  (this_02,(MethodInfo *)0x0);
                if (fVar11 <= 0.0) {
                  pGVar9 = (this->fields).progressBarDivider;
                  if (pGVar9 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar9,0,(MethodInfo *)0x0);
                }
              }
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void <OnPlayerPlanetDataUpdated>m__9(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::
     TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated_m__9
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


/* Void <OnPlayerPlanetDataUpdated>m__A(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::
     TierUnlockDetailsPopup__OnPlayerPlanetDataUpdated_m__A
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


/* Void <PreviewTier>m__7(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup__PreviewTier_m__7
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


/* Void <PreviewTier>m__8(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup__PreviewTier_m__8
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


/* Void <ProductPurchaseResponseHandler>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::
     TierUnlockDetailsPopup__ProductPurchaseResponseHandler_m__2
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


/* Void <ProductPurchaseResponseHandler>m__3(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::
     TierUnlockDetailsPopup__ProductPurchaseResponseHandler_m__3
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


/* Void <Purchase>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup__Purchase_m__0
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


/* Void <Purchase>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup__Purchase_m__1
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


/* Void <RewardedAdCallback>m__5(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup__RewardedAdCallback_m__5
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


/* Void <RewardedAdCallback>m__6(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup__RewardedAdCallback_m__6
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
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__Assets__Scripts__AdIntegration__IAdManager) {
          ppMVar5 = &(&(pIVar1->klass->vtable).get_RewardedAdNotAvailableText)
                     [pIVar2->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar5 = (MethodInfo **)
              func_?(pIVar1,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,0);
code_?:
    uVar6 = (*(code *)*ppMVar5)(pIVar1,ppMVar5[1]);
    pSVar7 = TM::TM__(StringLiteral_No_Ad_Available,(MethodInfo *)0x0);
    if (x != (IModalPopupCreator *)0x0) {
      func_?(4,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,x,uVar6,pSVar7);
      return;
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <ShowAd>m__4(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::TierUnlockDetailsPopup::TierUnlockDetailsPopup__ShowAd_m__4
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

