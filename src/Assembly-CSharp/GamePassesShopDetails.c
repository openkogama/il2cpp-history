
/* Void Exit() */

void Assembly-CSharp.dll::GamePassesShopDetails::GamePassesShopDetails_Exit
               (GamePassesShopDetails *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__GamePassesShopDetails->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,
               MethodInfo__GamePassesShopDetails___Exit_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__GamePassesShopDetails->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)this_00;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__GamePassesShopDetails->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void InstantiateGamePassesShop(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShopDetails::GamePassesShopDetails_InstantiateGamePassesShop
               (GamePassesShopDetails *this,GamePassTier__Enum tierToShow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesShopDetails___InstantiateGamePassesShop_c__AnonStorey0;
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
    GamePassesShop::GamePassesShop_Initialize(pGVar1,tierToShow,(MethodInfo *)0x0);
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
               MethodInfo__GamePassesShopDetails___InstantiateGamePassesShop_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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


/* Void OnTier1ShopPressed() */

void Assembly-CSharp.dll::GamePassesShopDetails::GamePassesShopDetails_OnTier1ShopPressed
               (GamePassesShopDetails *this,MethodInfo *method)

{
  GamePassesShopDetails_InstantiateGamePassesShop(this,GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
  return;
}


/* Void OnTier2ShopPressed() */

void Assembly-CSharp.dll::GamePassesShopDetails::GamePassesShopDetails_OnTier2ShopPressed
               (GamePassesShopDetails *this,MethodInfo *method)

{
  GamePassesShopDetails_InstantiateGamePassesShop(this,GamePassTier__Enum_Tier2,(MethodInfo *)0x0);
  return;
}


/* Void OnTier3ShopPressed() */

void Assembly-CSharp.dll::GamePassesShopDetails::GamePassesShopDetails_OnTier3ShopPressed
               (GamePassesShopDetails *this,MethodInfo *method)

{
  GamePassesShopDetails_InstantiateGamePassesShop(this,GamePassTier__Enum_Tier3,(MethodInfo *)0x0);
  return;
}


/* Void OnTierDetailEnter(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShopDetails::GamePassesShopDetails_OnTierDetailEnter
               (GamePassesShopDetails *this,GamePassTier__Enum tierEntered,MethodInfo *method)

{
  (this->fields).currentFocusedTier = (undefined1)tierEntered;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).interpolationStartTime = fVar1;
  return;
}


/* Void OnTierDetailExit(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShopDetails::GamePassesShopDetails_OnTierDetailExit
               (GamePassesShopDetails *this,GamePassTier__Enum tierExited,MethodInfo *method)

{
  (this->fields).currentFocusedTier = 0;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).interpolationStartTime = fVar1;
  return;
}


/* Void ResetHighlightEffects() */

void Assembly-CSharp.dll::GamePassesShopDetails::GamePassesShopDetails_ResetHighlightEffects
               (GamePassesShopDetails *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).tierOutlineList;
  (this->fields).currentFocusedTier = 0;
  (this->fields).interpolationStartTime = 0.0;
  while (pLVar1 != (List_1_UnityEngine_CanvasGroup_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::CanvasGroup>__get_Count__
                       );
    if ((int)pOVar2 <= index) {
      return;
    }
    pLVar1 = (this->fields).tierOutlineList;
    if ((pLVar1 == (List_1_UnityEngine_CanvasGroup_ *)0x0) ||
       (this_00 = (CanvasGroup *)
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::CanvasGroup>__get_Item_int_
                            ), this_00 == (CanvasGroup *)0x0)) break;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    index = index + 1;
    pLVar1 = (this->fields).tierOutlineList;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowHighScore() */

void Assembly-CSharp.dll::GamePassesShopDetails::GamePassesShopDetails_ShowHighScore
               (GamePassesShopDetails *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesShopDetails___ShowHighScore_c__AnonStorey1;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  original = (this->fields).highScoreListPrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)original,
                      GamePassesHighScoreList_MethodInfo__UnityEngine__Object__Instantiate<GamePassesHighScoreList>_GamePassesHighScoreList_
                     );
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = pXVar1;
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
               MethodInfo__GamePassesShopDetails___ShowHighScore_c__AnonStorey1____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GamePassesShopDetails::GamePassesShopDetails_Update
               (GamePassesShopDetails *this,MethodInfo *method)

{
  pGVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pGVar3 = (GamePassesShopDetails *)(fVar2 - (this->fields).interpolationStartTime);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (fVar2 + _UNK_? < (float)pGVar3) {
    return;
  }
  index = 0;
  pLVar4 = (this->fields).tierOutlineList;
  this = pGVar3;
  while (pLVar4 != (List_1_UnityEngine_CanvasGroup_ *)0x0) {
    pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::CanvasGroup>__get_Count__
                       );
    if ((int)pOVar5 <= index) {
      return;
    }
    uVar6 = (uint)(pGVar1->fields).currentFocusedTier;
    pLVar4 = (pGVar1->fields).tierOutlineList;
    if (index == uVar6 - 1) {
      if (pLVar4 == (List_1_UnityEngine_CanvasGroup_ *)0x0) break;
      pCVar7 = (CanvasGroup *)
               mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar4,uVar6 - 1,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::CanvasGroup>__get_Item_int_
                         );
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                        (0.0,1.0,(float)this + (float)this,(MethodInfo *)0x0);
      if (pCVar7 == (CanvasGroup *)0x0) break;
code_?:
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar7,fVar2,(MethodInfo *)0x0);
    }
    else {
      if ((pLVar4 == (List_1_UnityEngine_CanvasGroup_ *)0x0) ||
         (pCVar7 = (CanvasGroup *)
                   mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar4,index,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::CanvasGroup>__get_Item_int_
                             ), pCVar7 == (CanvasGroup *)0x0)) break;
      fVar2 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                        (pCVar7,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        this = (GamePassesShopDetails *)&UNK_?;
        func_?();
      }
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                        (fVar2,0.0,(float)this + (float)this,(MethodInfo *)0x0);
      pLVar4 = (pGVar1->fields).tierOutlineList;
      if ((pLVar4 == (List_1_UnityEngine_CanvasGroup_ *)0x0) ||
         (pCVar7 = (CanvasGroup *)
                   mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar4,index,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::CanvasGroup>__get_Item_int_
                             ), pCVar7 == (CanvasGroup *)0x0)) break;
      fVar8 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                        (pCVar7,(MethodInfo *)0x0);
      if (fVar2 < fVar8) {
        pLVar4 = (pGVar1->fields).tierOutlineList;
        if ((pLVar4 != (List_1_UnityEngine_CanvasGroup_ *)0x0) &&
           (pCVar7 = (CanvasGroup *)
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar4,index
                                ,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::CanvasGroup>__get_Item_int_
                               ), pCVar7 != (CanvasGroup *)0x0)) goto code_?;
        break;
      }
    }
    index = index + 1;
    pLVar4 = (pGVar1->fields).tierOutlineList;
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void <Exit>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::GamePassesShopDetails::GamePassesShopDetails__Exit_m__0
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

