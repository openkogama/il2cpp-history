
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
    uVar2 = (uint)(byte)((pPVar1->fields).gamePassTier + 1);
    uStack_3 = uVar2;
    if ((int)((this->fields).tierToPurchase - uVar2) < 2) {
      pSVar4 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
      pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&uStack_3);
      pSVar4 = mscorlib.dll::System::String::String_Format(pSVar4,pOVar5,(MethodInfo *)0x0);
      return pSVar4;
    }
    pSVar4 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__and_,(MethodInfo *)0x0);
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&uStack_3);
    iStack_6 = uVar2 + 1;
    arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    pSVar4 = mscorlib.dll::System::String::String_Format_1(pSVar4,pOVar5,arg1,(MethodInfo *)0x0);
    return pSVar4;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar7)();
  return pSVar4;
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
  ppUVar2 = &(this->fields).onPurchaseSuccessful;
  *ppUVar2 = OnPurchaseSuccessful;
  (this->fields).tierToPurchase = (undefined1)tierToPurchase;
  func_?(ppUVar2,OnPurchaseSuccessful);
  pTVar3 = (this->fields).tierText;
  tierToPurchase = GVar1 & 0xff;
  pSVar4 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&tierToPurchase,(MethodInfo *)0x0);
  if (pTVar3 != (Text *)0x0) {
    (*(code *)(pTVar3->klass->vtable).set_text.method)
              (pTVar3,pSVar4,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    if ((byte)((this->fields).tierToPurchase - 1) <= (pPVar1->fields).gamePassTier) {
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
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__TierLockedDetailsPopup____c___OnEnable_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__TierLockedDetailsPopup____c->static_fields->__9__20_0 = callbackFunction;
        func_?(&TypeInfo__TierLockedDetailsPopup____c->static_fields->__9__20_0,
                        callbackFunction);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
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
    TierLockedDetailsPopup_UpdateLockedText(this,(MethodInfo *)0x0);
    TierLockedDetailsPopup_UpdateTierProgressBar(this,(MethodInfo *)0x0);
    return;
  }
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
  key = gamePassTierToDisplay & 0xff;
  while( true ) {
    key = key - 1;
    if ((int)key < 1) {
      return gamePoints;
    }
    if ((gameTierShopStatus ==
         (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
       || (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)gameTierShopStatus,key
                               ,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                              ), pOVar1 == (Object *)0x0)) break;
    gamePoints = gamePoints - (int)pOVar1[3].klass;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
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
  method_00 = TypeInfo__TierLockedDetailsPopup____c__DisplayClass12_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
    pOVar2 = value + 1;
    pOVar2->klass = pOVar1;
    func_?(pOVar2,pOVar1);
    pOVar1 = pOVar2->klass;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar3 != (PlayerPlanetData *)0x0) && (pOVar1 != (Object__Class *)0x0)) {
      GamePassesShop::GamePassesShop_Initialize
                ((GamePassesShop *)pOVar1,(uint)(byte)((pPVar3->fields).gamePassTier + 1),
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
                 MethodInfo__TierLockedDetailsPopup____c__DisplayClass12_0___ShowLockedTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  method_00 = TypeInfo__TierLockedDetailsPopup____c__DisplayClass21_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
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
      this_03 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,playerGamePassTier,(MethodInfo *)0x0);
      if (this_03 !=
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      {
        IStack_3.m_value = (int32_t)&UNK_?;
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_03,
                            CONCAT31((int3)(playerGamePassTier >> 8),(this->fields).tierToPurchase),
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar4 != (Object *)0x0) {
          IStack_3.m_value = (int32_t)pOVar4[2].klass;
          original = (this->fields).tierUnlockDetailsPrefab;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pOVar5 = (Object__Class *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             ((Object *)original,
                              TierUnlockDetailsPopup_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockDetailsPopup>_TierUnlockDetailsPopup_
                             );
          if (value != (Object *)0x0) {
            pOVar4 = value + 1;
            pOVar4->klass = pOVar5;
            func_?(pOVar4,pOVar5);
            root.m_value = (int32_t)UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_System_Object_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                       MethodInfo__TierLockedDetailsPopup____c__DisplayClass21_0___ShowPurchasePopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      ((GameObject *)root.m_value,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pOVar5 = pOVar4->klass;
            bVar6 = (this->fields).tierToPurchase;
            pUVar7 = (this->fields).onPurchaseSuccessful;
            if (pOVar5 != (Object__Class *)0x0) {
              (pOVar5->_0).klass = (Il2CppClass *)IStack_3.m_value;
              ppUVar8 = (UnityAction **)&(pOVar5->_0).fields;
              *(byte *)&(pOVar5->_0).interopData = bVar6;
              *ppUVar8 = pUVar7;
              func_?(ppUVar8,pUVar7);
              pTVar9 = (Text *)(pOVar5->_0).byval_arg.data.array;
              IStack_3.m_value = (int32_t)bVar6;
              pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
              if (pTVar9 != (Text *)0x0) {
                (*(code *)(pTVar9->klass->vtable).set_text.method)
                          (pTVar9,pSVar10,
                           (pTVar9->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                pTVar9 = *(Text **)&(pOVar5->_0).byval_arg.attrs;
                pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                                    ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
                if (pTVar9 != (Text *)0x0) {
                  (*(code *)(pTVar9->klass->vtable).set_text.method)
                            (pTVar9,pSVar10,
                             (pTVar9->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                  bVar11 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
                  this_01 = (pOVar5->_0).castClass;
                  *(bool *)((int)&(pOVar5->_0).events + 1) = bVar11;
                  if (bVar11 == 0) {
                    bVar11 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled
                                      ((MethodInfo *)0x0);
                  }
                  else {
                    bVar11 = 1;
                  }
                  if (this_01 != (Il2CppClass *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              ((GameObject *)this_01,bVar11,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    if (TypeInfo__GamePassesManager->static_fields->
                        _GamePassesActive_k__BackingField != 0) {
                      TierUnlockDetailsPopup::TierUnlockDetailsPopup_UpdateTierProgressBar
                                ((TierUnlockDetailsPopup *)pOVar5,(MethodInfo *)0x0);
                    }
                    this_02 = (Image *)(pOVar5->_0).typeMetadataHandle;
                    if (*(bool *)((int)&(pOVar5->_0).events + 1) == 0) {
                      pTVar12 = GamePassesManager::GamePassesManager_get_TogglePreviewState
                                          ((MethodInfo *)0x0);
                      if (pTVar12 == (TogglePreviewState *)0x0) goto code_?;
                      value_00 = (pTVar12->fields).freeTry == 0;
                    }
                    else {
                      value_00 = true;
                    }
                    if (this_02 != (Image *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                ((Behaviour *)this_02,value_00,(MethodInfo *)0x0);
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
  method_00 = TypeInfo__TierLockedDetailsPopup____c__DisplayClass11_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
    pOVar2 = value + 1;
    pOVar2->klass = pOVar1;
    func_?(pOVar2,pOVar1);
    if (pOVar2->klass != (Object__Class *)0x0) {
      GamePassesShop::GamePassesShop_Initialize
                ((GamePassesShop *)pOVar2->klass,(uint)(this->fields).tierToPurchase,
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
                 MethodInfo__TierLockedDetailsPopup____c__DisplayClass11_0___ShowTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  mscorlib.dll::System::String::String_Format(pSVar3,pOVar4,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2);
    pTVar2 = (pTVar1->fields).lockedButtonText;
    if (cRam_? == '\0') {
      func_?();
      func_?();
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
      pOVar4 = (Object *)func_?();
      mscorlib.dll::System::String::String_Format(pSVar3,pOVar4,(MethodInfo *)0x0);
      if (pTVar2 != (Text *)0x0) {
        (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2);
        pTVar2 = (pTVar1->fields).lockedDescriptionText;
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?(&StringLiteral_You_need_to_unlock_Tier__0__befo);
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar5 != (PlayerPlanetData *)0x0) {
          this = (TierLockedDetailsPopup *)(uint)(byte)((pPVar5->fields).gamePassTier + 1);
          if ((int)((uint)(pTVar1->fields).tierToPurchase - (int)this) < 2) {
            pSVar3 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__befo,(MethodInfo *)0x0);
            pOVar4 = (Object *)func_?();
            mscorlib.dll::System::String::String_Format(pSVar3,pOVar4,(MethodInfo *)0x0);
          }
          else {
            pSVar3 = TM::TM__(StringLiteral_You_need_to_unlock_Tier__0__and_,(MethodInfo *)0x0);
            pOVar4 = (Object *)func_?();
            arg1 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
            mscorlib.dll::System::String::String_Format_1(pSVar3,pOVar4,arg1,(MethodInfo *)0x0);
          }
          if (pTVar2 != (Text *)0x0) {
            (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
      key = (ByteEnum__Enum)uStack_5;
      while (key = key - 1, 0 < (int)key) {
        if ((this_02 ==
             (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
             0x0) || (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               ByteEnum,System::Object]::
                               Dictionary_2_System_ByteEnum_System_Object__get_Item
                                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,key
                                          ,
                                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                         ), pOVar6 == (Object *)0x0)) goto code_?;
        playerGamePoints = (Object__Class *)((int)playerGamePoints - (int)pOVar6[3].klass);
      }
      if ((float)(int)playerGamePoints < 0.0) {
        playerGamePoints = (Object__Class *)0x0;
      }
      IStack_1.m_value = (int32_t)playerGamePoints;
      if ((this_02 !=
           (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0
          ) && (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         ByteEnum,System::Object]::
                         Dictionary_2_System_ByteEnum_System_Object__get_Item
                                   ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,
                                    CONCAT31((int3)((uint)playerGamePassTier >> 8),
                                             (this->fields).tierToPurchase),
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                   ), pOVar6 != (Object *)0x0)) {
        IStack_2.m_value = (int32_t)pOVar6[3].klass;
        if (IStack_2.m_value < IStack_1.m_value) {
          IStack_1.m_value = IStack_2.m_value;
        }
        this_01 = (ProgressBarAndroid *)(this->fields).tierProgressBar;
        if (this_01 != (ProgressBarAndroid *)0x0) {
          ProgressBarAndroid::ProgressBarAndroid_set_Progress
                    (this_01,(float)IStack_1.m_value / (float)IStack_2.m_value,(MethodInfo *)0x0);
          str0 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
          str2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
          pSStack7 =
               mscorlib.dll::System::String::String_Concat_4
                         (str0,::StringLiteral____,str2,(MethodInfo *)0x0);
          pTStack8 = (this->fields).progressText;
          if (pTStack8 != (Text *)0x0) {
            pIStack9 =
                 (pTStack8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
            (*(code *)(pTStack8->klass->vtable).set_text.method)();
            return;
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

