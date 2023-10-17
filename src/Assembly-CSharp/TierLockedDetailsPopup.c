
/* String GetHeaderText() */

String * Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_GetHeaderText
                   (TierLockedDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_Game_Tier__0___Locked);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Game_Tier__0___Locked,(MethodInfo *)0x0);
  uStack_2 = (uint)(this->fields).tierToPurchase;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&uStack_2);
  pSVar1 = mscorlib.dll::System::String::String_Format(pSVar1,arg0,(MethodInfo *)0x0);
  return pSVar1;
}


/* String GetLockedButtonText() */

String * Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_GetLockedButtonText
                   (TierLockedDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_GO_TO_TIER__0_);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    uVar2 = (pPVar1->fields).gamePassTier;
    pSVar3 = TM::TM__(StringLiteral_GO_TO_TIER__0_,(MethodInfo *)0x0);
    uStack_4 = (uint)(byte)(uVar2 + 1);
    arg0 = (Object *)func_?(TypeInfo__System__Int32,&uStack_4);
    pSVar3 = mscorlib.dll::System::String::String_Format(pSVar3,arg0,(MethodInfo *)0x0);
    return pSVar3;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar5)();
  return pSVar3;
}


/* String GetLockedDescription() */

String * Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_GetLockedDescription
                   (TierLockedDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_You_need_to_unlock_Tier__0__and_);
    func_?(&StringLiteral_You_need_to_unlock_Tier__0__befo);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    bVar2 = (pPVar1->fields).gamePassTier + 1;
    uVar3 = (uint)bVar2;
    uStack_4 = uVar3;
    if ((int)((uint)(this->fields).tierToPurchase - (uint)bVar2) < 2) {
      pSVar5 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
      uStack_6 = uStack_4;
      pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&uStack_6);
      pSVar5 = mscorlib.dll::System::String::String_Format(pSVar5,pOVar7,(MethodInfo *)0x0);
      return pSVar5;
    }
    pSVar5 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__and_,(MethodInfo *)0x0);
    uStack_6 = uVar3;
    pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&uStack_6);
    uStack_4 = bVar2 + 1;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&uStack_4);
    pSVar5 = mscorlib.dll::System::String::String_Format_1(pSVar5,pOVar7,arg1,(MethodInfo *)0x0);
    return pSVar5;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pSVar5 = (String *)(*pcVar8)();
  return pSVar5;
}


/* GamePassTier GetLockedTier() */

GamePassTier__Enum
Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_GetLockedTier
          (TierLockedDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    return CONCAT31((int3)((uint)pPVar1 >> 8),(pPVar1->fields).gamePassTier + 1);
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  GVar5 = (*pcVar4)();
  return GVar5;
}


/* Void Initialize(GamePassTier, UnityAction) */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_Initialize
               (TierLockedDetailsPopup *this,GamePassTier__Enum tierToPurchase,
               UnityAction *OnPurchaseSuccessful,MethodInfo *method)

{
  GVar1 = tierToPurchase;
  (this->fields).onPurchaseSuccessful = OnPurchaseSuccessful;
  (this->fields).tierToPurchase = (undefined1)tierToPurchase;
  func_?(&(this->fields).onPurchaseSuccessful,OnPurchaseSuccessful);
  pTVar2 = (this->fields).tierText;
  tierToPurchase = GVar1 & 0xff;
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&tierToPurchase,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    (*(pTVar2->klass->vtable).set_text.methodPtr)
              (pTVar2,pSVar3,(pTVar2->klass->vtable).set_text.method);
    TierLockedDetailsPopup_UpdateLockedText(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
      TierLockedDetailsPopup_UpdateTierProgressBar(this,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_OnEnable
               (TierLockedDetailsPopup *this,MethodInfo *method)

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
                    MethodInfo__TierLockedDetailsPopup____c___OnEnable_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierLockedDetailsPopup____c);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    if ((pPVar1->fields).gamePassTier < (byte)((this->fields).tierToPurchase - 1)) {
      TierLockedDetailsPopup_UpdateLockedText(this,(MethodInfo *)0x0);
      TierLockedDetailsPopup_UpdateTierProgressBar(this,(MethodInfo *)0x0);
      return;
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__TierLockedDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__TierLockedDetailsPopup____c);
    }
    callbackFunction = TypeInfo__TierLockedDetailsPopup____c->static_fields->__9__20_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__TierLockedDetailsPopup____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__TierLockedDetailsPopup____c);
      }
      object = TypeInfo__TierLockedDetailsPopup____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__TierLockedDetailsPopup____c___OnEnable_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TierLockedDetailsPopup____c->static_fields->__9__20_0 = callbackFunction;
      func_?(&TypeInfo__TierLockedDetailsPopup____c->static_fields->__9__20_0,
                      callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    TierLockedDetailsPopup_ShowPurchasePopup(this,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
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


/* Void ShowLockedTier() */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_ShowLockedTier
               (TierLockedDetailsPopup *this,MethodInfo *method)

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
                    MethodInfo__TierLockedDetailsPopup____c__DisplayClass12_0___ShowLockedTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierLockedDetailsPopup____c__DisplayClass12_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__TierLockedDetailsPopup____c__DisplayClass12_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    original = (this->fields).gamePassesShopPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                       );
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    pOVar1 = value[1].klass;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar2 != (PlayerPlanetData *)0x0) && (pOVar1 != (Object__Class *)0x0)) {
      GamePassesShop::GamePassesShop_Initialize
                ((GamePassesShop *)pOVar1,(uint)(byte)((pPVar2->fields).gamePassTier + 1),
                 (MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      callbackFunction =
           (ExecuteEvents_EventFunction_1_System_Object_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__TierLockedDetailsPopup____c__DisplayClass12_0___ShowLockedTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowPurchasePopup() */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_ShowPurchasePopup
               (TierLockedDetailsPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&
                    TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__TierLockedDetailsPopup____c__DisplayClass21_0___ShowPurchasePopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierLockedDetailsPopup____c__DisplayClass21_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__TierLockedDetailsPopup____c__DisplayClass21_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      playerGamePoints = (pPVar1->fields).progressionGamePoints;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if ((pPVar1 != (PlayerPlanetData *)0x0) &&
         (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
         this_00 != (PlayerTierStateCalculator *)0x0)) {
        playerGamePassTier =
             CONCAT31((int3)((uint)in_stack_2 >> 8),(pPVar1->fields).gamePassTier);
        this_02 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                  PlayerTierStateCalculator_GetTierPricingState
                            (this_00,playerGamePoints,playerGamePassTier,(MethodInfo *)0x0);
        if (this_02 !=
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) {
          IStack_3.m_value = (int32_t)&UNK_?;
          pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,
                              CONCAT31((int3)(playerGamePassTier >> 8),(this->fields).tierToPurchase
                                      ),
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar4 != (Object *)0x0) {
            original = (this->fields).tierUnlockDetailsPrefab;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pOVar5 = (Object__Class *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                               ((Object *)original,
                                TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                               );
            value[1].klass = pOVar5;
            func_?();
            IVar6.m_value = (int32_t)&UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
            root = (GameObject *)&UNK_?;
            callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
            if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                         MethodInfo__TierLockedDetailsPopup____c__DisplayClass21_0___ShowPurchasePopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (root,(BaseEventData *)0x0,callbackFunction,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              pOVar5 = value[1].klass;
              uVar7 = (this->fields).tierToPurchase;
              pIVar8 = (Il2CppClass *)(this->fields).onPurchaseSuccessful;
              if (pOVar5 != (Object__Class *)0x0) {
                (pOVar5->_0).klass = pIVar8;
                *(uint8_t *)&(pOVar5->_0).typeMetadataHandle = uVar7;
                (pOVar5->_0).interopData = (Il2CppInteropData *)IVar6.m_value;
                IStack_3.m_value = IVar6.m_value;
                func_?(&(pOVar5->_0).klass,pIVar8);
                pTVar9 = (Text *)(pOVar5->_0).namespaze;
                pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                                   ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
                if (pTVar9 != (Text *)0x0) {
                  (*(pTVar9->klass->vtable).set_text.methodPtr)
                            (pTVar9,pSVar10,(pTVar9->klass->vtable).set_text.method);
                  pTVar9 = (Text *)(pOVar5->_0).byval_arg.data.array;
                  pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0)
                  ;
                  if (pTVar9 != (Text *)0x0) {
                    (*(pTVar9->klass->vtable).set_text.methodPtr)
                              (pTVar9,pSVar10,(pTVar9->klass->vtable).set_text.method);
                    bVar11 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
                    pIVar8 = (pOVar5->_0).element_class;
                    *(bool *)((int)&(pOVar5->_0).fields + 1) = bVar11;
                    if (bVar11 == 0) {
                      bVar11 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled
                                        ((MethodInfo *)0x0);
                    }
                    else {
                      bVar11 = 1;
                    }
                    if (pIVar8 != (Il2CppClass *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                ((GameObject *)pIVar8,bVar11,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        func_?();
                        cRam_? = '\x01';
                      }
                      if (TypeInfo__GamePassesManager->static_fields->
                          _GamePassesActive_k__BackingField != 0) {
                        TierUnlockDetailsPopup::TierUnlockDetailsPopup_UpdateTierProgressBar
                                  ((TierUnlockDetailsPopup *)pOVar5,(MethodInfo *)0x0);
                      }
                      this_01 = (Image *)(pOVar5->_0).generic_class;
                      if (*(bool *)((int)&(pOVar5->_0).fields + 1) == 0) {
                        pTVar12 = GamePassesManager::GamePassesManager_get_TogglePreviewState
                                            ((MethodInfo *)0x0);
                        if (pTVar12 == (TogglePreviewState *)0x0) goto code_?;
                        value_00 = (pTVar12->fields).freeTry == 0;
                      }
                      else {
                        value_00 = true;
                      }
                      if (this_01 != (Image *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                  ((Behaviour *)this_01,value_00,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void ShowTier() */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_ShowTier
               (TierLockedDetailsPopup *this,MethodInfo *method)

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
                    MethodInfo__TierLockedDetailsPopup____c__DisplayClass11_0___ShowTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__TierLockedDetailsPopup____c__DisplayClass11_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__TierLockedDetailsPopup____c__DisplayClass11_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    original = (this->fields).gamePassesShopPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        GamePassesShop_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShop>_GamePassesShop_
                       );
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
      if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__TierLockedDetailsPopup____c__DisplayClass11_0___ShowTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateLockedText() */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_UpdateLockedText
               (TierLockedDetailsPopup *this,MethodInfo *method)

{
  pTVar1 = this;
  pTVar2 = (this->fields).headerText;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_Game_Tier__0___Locked);
    cRam_? = '\x01';
  }
  pSVar3 = TM::TM__(StringLiteral_Game_Tier__0___Locked,(MethodInfo *)0x0);
  this = (TierLockedDetailsPopup *)(uint)(pTVar1->fields).tierToPurchase;
  pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&this);
  pSVar3 = mscorlib.dll::System::String::String_Format(pSVar3,pOVar4,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2,pSVar3);
    pTVar2 = (pTVar1->fields).lockedButtonText;
    if (cRam_? == '\0') {
      func_?();
      func_?(&StringLiteral_GO_TO_TIER__0_);
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar5 != (PlayerPlanetData *)0x0) {
      uVar6 = (pPVar5->fields).gamePassTier;
      pSVar3 = TM::TM__(StringLiteral_GO_TO_TIER__0_,(MethodInfo *)0x0);
      this = (TierLockedDetailsPopup *)(uint)(byte)(uVar6 + 1);
      pOVar4 = (Object *)func_?(TypeInfo__System__Int32);
      pSVar3 = mscorlib.dll::System::String::String_Format(pSVar3,pOVar4,(MethodInfo *)0x0);
      if (pTVar2 != (Text *)0x0) {
        (*(pTVar2->klass->vtable).set_text.methodPtr)(pTVar2,pSVar3);
        if (cRam_? == '\0') {
          func_?();
          func_?(&StringLiteral_You_need_to_unlock_Tier__0__and_);
          func_?(&StringLiteral_You_need_to_unlock_Tier__0__befo);
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar5 != (PlayerPlanetData *)0x0) {
          bVar7 = (pPVar5->fields).gamePassTier + 1;
          pTVar8 = (TierLockedDetailsPopup *)(uint)bVar7;
          this = pTVar8;
          if ((int)((uint)(pTVar1->fields).tierToPurchase - (uint)bVar7) < 2) {
            pSVar3 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
            pIVar9 = TypeInfo__System__Int32;
            pOVar4 = (Object *)func_?();
            pSVar3 = mscorlib.dll::System::String::String_Format(pSVar3,pOVar4,(MethodInfo *)0x0);
          }
          else {
            pSVar3 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__and_,(MethodInfo *)0x0);
            this = pTVar8;
            pIVar9 = TypeInfo__System__Int32;
            pOVar4 = (Object *)func_?();
            arg1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
            pSVar3 = mscorlib.dll::System::String::String_Format_1
                               (pSVar3,pOVar4,arg1,(MethodInfo *)0x0);
          }
          if (pIVar9 != (Int32__Class *)0x0) {
            (**(code **)&(pIVar9->_0).image[0x11].dynamic)(pIVar9,pSVar3);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateTierProgressBar() */

void Assembly-CSharp.dll::TierLockedDetailsPopup::TierLockedDetailsPopup_UpdateTierProgressBar
               (TierLockedDetailsPopup *this,MethodInfo *method)

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
  IStack_2.m_value = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar3 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (Object__Class *)(pPVar3->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar3 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      playerGamePassTier =
           (MethodInfo **)
           CONCAT31((int3)((uint)in_stack_4 >> 8),(pPVar3->fields).gamePassTier);
      this_02 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,(int32_t)playerGamePoints,(GamePassTier__Enum)playerGamePassTier,
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
          playerGamePoints = (Object__Class *)((int)playerGamePoints - (int)pOVar6[3].klass);
          key = key - 1;
        } while (0 < (int)key);
      }
      if ((float)(int)playerGamePoints < 0.0) {
        playerGamePoints = (Object__Class *)0x0;
      }
      IStack_1.m_value = (int32_t)playerGamePoints;
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
          IStack_2.m_value = (int32_t)pOVar6[3].klass;
          if (IStack_2.m_value < IStack_1.m_value) {
            IStack_1.m_value = IStack_2.m_value;
          }
          this_01 = (ProgressBarAndroid *)(this->fields).tierProgressBar;
          if (this_01 != (ProgressBarAndroid *)0x0) {
            ProgressBarAndroid::ProgressBarAndroid_set_Progress
                      (this_01,(float)IStack_1.m_value / (float)IStack_2.m_value,(MethodInfo *)0x0)
            ;
            str0 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
            str2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
            pSStack7 =
                 mscorlib.dll::System::String::String_Concat_4
                           (str0,::StringLiteral____,str2,(MethodInfo *)0x0);
            pTStack8 = (this->fields).progressText;
            if (pTStack8 != (Text *)0x0) {
              pMStack9 = (pTStack8->klass->vtable).set_text.method;
              (*(pTStack8->klass->vtable).set_text.methodPtr)();
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

