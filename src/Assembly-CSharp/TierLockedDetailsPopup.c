
/* String GetHeaderText() */

String * Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_GetHeaderText
                   (TierLockedDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Game_Tier__0___Locked,(MethodInfo *)0x0);
  uStack_2 = (uint)(this->fields).tierToPurchase;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&uStack_2);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Format(pSVar1,arg0,(MethodInfo *)0x0);
  return pSVar1;
}


/* String GetLockedButtonText() */

String * Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_GetLockedButtonText
                   (TierLockedDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TierLockedDetailsPopup_GetLockedTier(this,(MethodInfo *)0x0);
  pSVar1 = TM::TM__(StringLiteral_GO_TO_TIER__0_,(MethodInfo *)0x0);
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar1 = mscorlib.dll::System::String::String_Format(pSVar1,arg0,(MethodInfo *)0x0);
  return pSVar1;
}


/* String GetLockedDescription() */

String * Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_GetLockedDescription
                   (TierLockedDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = this;
  GVar2 = TierLockedDetailsPopup_GetLockedTier(this,(MethodInfo *)0x0);
  pTVar3 = (TierLockedDetailsPopup *)(GVar2 & 0xff);
  if ((int)((uint)(pTVar1->fields).tierToPurchase - (int)pTVar3) < 2) {
    pSVar4 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
    this = pTVar3;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&this);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar4 = mscorlib.dll::System::String::String_Format(pSVar4,pOVar5,(MethodInfo *)0x0);
    return pSVar4;
  }
  pSVar4 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__and_,(MethodInfo *)0x0);
  this = pTVar3;
  pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&this);
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar4 = mscorlib.dll::System::String::String_Format_1(pSVar4,pOVar5,arg1,(MethodInfo *)0x0);
  return pSVar4;
}


/* GamePassTier GetLockedTier() */

GamePassTier__Enum
Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_GetLockedTier
          (TierLockedDetailsPopup *this,MethodInfo *method)

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
    return CONCAT31((int3)((uint)pPVar1 >> 8),(pPVar1->fields).gamePassTier + 1);
  }
  func_?();
  pcVar2 = (code *)swi(3);
  GVar3 = (*pcVar2)();
  return GVar3;
}


/* Void Initialize(GamePassTier, UnityAction) */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_Initialize
               (TierLockedDetailsPopup *this,GamePassTier__Enum tierToPurchase,
               UnityAction *OnPurchaseSuccessful,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).tierText;
  (this->fields).onPurchaseSuccessful = OnPurchaseSuccessful;
  (this->fields).tierToPurchase = (undefined1)tierToPurchase;
  uVar2 = func_?(&stack0xfffffff8,0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,uVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    TierLockedDetailsPopup_UpdateLockedText(this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    bVar3 = GamePassesManager::GamePassesManager_get_GamePassesActive((MethodInfo *)0x0);
    if (bVar3 != 0) {
      TierLockedDetailsPopup_UpdateTierProgressBar(this,(MethodInfo *)0x0);
    }
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_OnEnable
               (TierLockedDetailsPopup *this,MethodInfo *method)

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
    if ((byte)((this->fields).tierToPurchase - 1) <= (pPVar1->fields).gamePassTier) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__TierLockedDetailsPopup->static_fields->__f__am_cache0 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                    );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,(Object *)0x0,
                   MethodInfo__TierLockedDetailsPopup___OnEnable_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__TierLockedDetailsPopup->static_fields->__f__am_cache0 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__TierLockedDetailsPopup->static_fields->__f__am_cache0;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      TierLockedDetailsPopup_ShowPurchasePopup(this,(MethodInfo *)0x0);
      return;
    }
    TierLockedDetailsPopup_UpdateLockedText(this,(MethodInfo *)0x0);
    TierLockedDetailsPopup_UpdateTierProgressBar(this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Int32 ReduceGamePointsWithPreviousTierRequirements(GamePassTier, Int32,
   Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierState]) */

int32_t Assembly-CSharp.dll::TierLockedDetailsPopup::
        TierLockedDetailsPopup_ReduceGamePointsWithPreviousTierRequirements
                  (TierLockedDetailsPopup *this,GamePassTier__Enum gamePassTierToDisplay,
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


/* Void ShowLockedTier() */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_ShowLockedTier
               (TierLockedDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierLockedDetailsPopup___ShowLockedTier_c__AnonStorey1;
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
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pGVar1;
    TierLockedDetailsPopup_GetLockedTier(this,(MethodInfo *)0x0);
    if (pGVar1 != (GamePassesShop *)0x0) {
      GamePassesShop::GamePassesShop_Initialize(pGVar1,GamePassTier__Enum_Tier0,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this_00,
                 MethodInfo__TierLockedDetailsPopup___ShowLockedTier_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
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


/* Void ShowPurchasePopup() */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_ShowPurchasePopup
               (TierLockedDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierLockedDetailsPopup___ShowPurchasePopup_c__AnonStorey2;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      method_01 = (GamePassTier__Enum)(pPVar1->fields).gamePassTier;
      this_02 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,method_01,(MethodInfo *)method_01);
      if (this_02 !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_02,
                            CONCAT31((int3)(method_01 >> 8),(this->fields).tierToPurchase),
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar2 != (Object *)0x0) {
          pTVar3 = (this->fields).tierUnlockDetailsPrefab;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          pXVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                             ((XpBoostParticlePreviewer *)pTVar3,
                              TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                             );
          if (this_01 != (ScaleAnimationBase *)0x0) {
            (this_01->fields)._._._._.m_CachedPtr = pXVar4;
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                             ((Component_1 *)this,(MethodInfo *)0x0);
            this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_03,(Object *)this_01,
                       MethodInfo__TierLockedDetailsPopup___ShowPurchasePopup_c__AnonStorey2____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,
                       MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                      );
            if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                        methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
              func_?();
            }
            price = &UNK_?;
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy_63
                      (root,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pTVar3 = (this_01->fields)._._._._.m_CachedPtr;
            if (pTVar3 != (TierUnlockDetailsPopup *)0x0) {
              TierUnlockDetailsPopup::TierUnlockDetailsPopup_Initialize
                        (pTVar3,(uint)(this->fields).tierToPurchase,(int32_t)price,
                         (this->fields).onPurchaseSuccessful,(MethodInfo *)0x0);
              return;
            }
          }
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

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_ShowTier
               (TierLockedDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierLockedDetailsPopup___ShowTier_c__AnonStorey0;
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
               MethodInfo__TierLockedDetailsPopup___ShowTier_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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


/* Void UpdateLockedText() */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_UpdateLockedText
               (TierLockedDetailsPopup *this,MethodInfo *method)

{
  this_00 = this;
  pTVar1 = (this->fields).headerText;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar2 = TM::TM__(StringLiteral_Game_Tier__0___Locked,(MethodInfo *)0x0);
  this = (TierLockedDetailsPopup *)(uint)(this_00->fields).tierToPurchase;
  pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  mscorlib.dll::System::String::String_Format(pSVar2,pOVar3,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
    pTVar1 = (this_00->fields).lockedButtonText;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    GVar4 = TierLockedDetailsPopup_GetLockedTier(this_00,(MethodInfo *)0x0);
    TM::TM__(StringLiteral_GO_TO_TIER__0_,(MethodInfo *)0x0);
    pSVar2 = (String *)&this;
    this = (TierLockedDetailsPopup *)(GVar4 & 0xff);
    pOVar3 = (Object *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    mscorlib.dll::System::String::String_Format(pSVar2,pOVar3,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
      pTVar1 = (this_00->fields).lockedDescriptionText;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      GVar4 = TierLockedDetailsPopup_GetLockedTier(this_00,(MethodInfo *)0x0);
      if ((int)((uint)(this_00->fields).tierToPurchase - (int)(GVar4 & 0xff)) < 2) {
        pSVar2 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
        this = (TierLockedDetailsPopup *)(GVar4 & 0xff);
        pOVar3 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        mscorlib.dll::System::String::String_Format(pSVar2,pOVar3,(MethodInfo *)0x0);
      }
      else {
        pSVar2 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__and_,(MethodInfo *)0x0);
        this = (TierLockedDetailsPopup *)func_?();
        pOVar3 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        mscorlib.dll::System::String::String_Format_1
                  (pSVar2,(Object *)this,pOVar3,(MethodInfo *)0x0);
      }
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateTierProgressBar() */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_UpdateTierProgressBar
               (TierLockedDetailsPopup *this,MethodInfo *method)

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
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      playerGamePassTier =
           (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
           CONCAT31((int3)((uint)unaff_EBX >> 8),(pPVar1->fields).gamePassTier);
      this_02 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,(GamePassTier__Enum)playerGamePassTier,
                           (MethodInfo *)0x0);
      bVar2 = (this->fields).tierToPurchase;
      if (cRam_? == '\0') {
        uVar3 = _UNK_?;
        func_?();
        bVar2 = (byte)((uint)uVar3 >> 0x18);
        cRam_? = '\x01';
      }
      key = (GamePassTier__Enum)bVar2;
      while (key = key - GamePassTier__Enum_Tier1, 0 < (int)key) {
        if ((this_02 ==
             (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
             0x0) || (playerGamePassTier = this_02,
                     pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                              GamePassTier,System::Object]::
                              Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                        ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)
                                         this_02,key,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                        ), pOVar4 == (Object *)0x0)) goto code_?;
      }
      if (this_02 !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        key_00 = (Object__Class *)
                 CONCAT31((int3)((uint)playerGamePassTier >> 8),(this->fields).tierToPurchase);
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_02,
                            (GamePassTier__Enum)key_00,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar4 != (Object *)0x0) {
          pOVar5 = pOVar4[3].klass;
          if ((int)pOVar5 < (int)key_00) {
            key_00 = pOVar5;
          }
          this_01 = (this->fields).tierProgressBar;
          if (this_01 != (ProgressBar *)0x0) {
            ProgressBar::ProgressBar_set_Progress
                      (this_01,(float)(int)key_00 / (float)(int)pOVar5,(MethodInfo *)0x0);
            pOVar4 = (Object *)func_?();
            arg2 = (Object *)func_?();
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            mscorlib.dll::System::String::String_Concat_1
                      (pOVar4,(Object *)StringLiteral____,arg2,(MethodInfo *)0x0);
            pTVar6 = (this->fields).progressText;
            if (pTVar6 != (Text *)0x0) {
              (*(code *)(pTVar6->klass->vtable).set_text.method)();
              return;
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


/* Void <OnEnable>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup__OnEnable_m__0
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

