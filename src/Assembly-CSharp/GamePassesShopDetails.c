
/* Void Exit() */

void Assembly-CSharp.dll::GamePassesShopDetails::GamePassesShopDetails_Exit
               (GamePassesShopDetails *this,MethodInfo *method)

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
                    MethodInfo__GamePassesShopDetails____c___Exit_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesShopDetails____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__GamePassesShopDetails____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GamePassesShopDetails____c);
  }
  callbackFunction = TypeInfo__GamePassesShopDetails____c->static_fields->__9__10_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__GamePassesShopDetails____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GamePassesShopDetails____c);
    }
    object = TypeInfo__GamePassesShopDetails____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__GamePassesShopDetails____c___Exit_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesShopDetails____c->static_fields->__9__10_0 = callbackFunction;
    func_?(&TypeInfo__GamePassesShopDetails____c->static_fields->__9__10_0,callbackFunction
                   );
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void InstantiateGamePassesShop(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShopDetails::GamePassesShopDetails_InstantiateGamePassesShop
               (GamePassesShopDetails *this,GamePassTier__Enum tierToShow,MethodInfo *method)

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
                    MethodInfo__GamePassesShopDetails____c__DisplayClass9_0___InstantiateGamePassesShop_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesShopDetails____c__DisplayClass9_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesShopDetails____c__DisplayClass9_0;
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
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    if (value[1].klass != (Object__Class *)0x0) {
      GamePassesShop::GamePassesShop_Initialize
                ((GamePassesShop *)value[1].klass,tierToShow,(MethodInfo *)0x0);
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
                 MethodInfo__GamePassesShopDetails____c__DisplayClass9_0___InstantiateGamePassesShop_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::CanvasGroup>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::CanvasGroup>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).tierOutlineList;
  (this->fields).currentFocusedTier = 0;
  (this->fields).interpolationStartTime = 0.0;
  while (pLVar1 != (List_1_UnityEngine_CanvasGroup_ *)0x0) {
    if ((pLVar1->fields)._size <= index) {
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).tierOutlineList;
    if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (this_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::CanvasGroup>__get_Item_int_
                            ), this_01 == (RegexCharClass_SingleRange)0x0)) break;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              ((CanvasGroup *)this_01,0.0,(MethodInfo *)0x0);
    index = index + 1;
    pLVar1 = (this->fields).tierOutlineList;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowHighScore() */

void Assembly-CSharp.dll::GamePassesShopDetails::GamePassesShopDetails_ShowHighScore
               (GamePassesShopDetails *this,MethodInfo *method)

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
                    GamePassesHighScoreList_MethodInfo__UnityEngine__Object__Instantiate<GamePassesHighScoreList>_GamePassesHighScoreList_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GamePassesShopDetails____c__DisplayClass16_0___ShowHighScore_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GamePassesShopDetails____c__DisplayClass16_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GamePassesShopDetails____c__DisplayClass16_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).highScoreListPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GamePassesHighScoreList_MethodInfo__UnityEngine__Object__Instantiate<GamePassesHighScoreList>_GamePassesHighScoreList_
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
               MethodInfo__GamePassesShopDetails____c__DisplayClass16_0___ShowHighScore_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::CanvasGroup>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::CanvasGroup>__get_Item_int_
                   );
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
    if ((pLVar4->fields)._size <= index) {
      return;
    }
    pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (pGVar1->fields).tierOutlineList;
    if (index == (pGVar1->fields).currentFocusedTier - 1) {
      if (pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
      method_00 = (MethodInfo *)&UNK_?;
      RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar5,(pGVar1->fields).currentFocusedTier - 1,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::CanvasGroup>__get_Item_int_
                        );
      if (RVar6 == (RegexCharClass_SingleRange)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                ((float)this + (float)this,(MethodInfo *)0x0);
code_?:
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                ((CanvasGroup *)RVar6,in_stack_7,method_00);
    }
    else {
      if (pLVar5 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
      method_00 = (MethodInfo *)&UNK_?;
      RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar5,index,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::CanvasGroup>__get_Item_int_
                        );
      if (RVar6 == (RegexCharClass_SingleRange)0x0) break;
      fVar2 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                        ((CanvasGroup *)RVar6,(MethodInfo *)0x0);
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                        ((float)this + (float)this,(MethodInfo *)0x0);
      this = (GamePassesShopDetails *)(pGVar1->fields).tierOutlineList;
      fVar2 = fVar8 * (0.0 - fVar2) + fVar2;
      if ((this == (GamePassesShopDetails *)0x0) ||
         (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             this,index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::CanvasGroup>__get_Item_int_
                            ), RVar6 == (RegexCharClass_SingleRange)0x0)) break;
      fVar8 = UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_get_alpha
                        ((CanvasGroup *)RVar6,(MethodInfo *)0x0);
      if (fVar2 < fVar8) {
        pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (pGVar1->fields).tierOutlineList;
        if ((pLVar5 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
           (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar5,index,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::CanvasGroup>__get_Item_int_
                              ), RVar6 != (RegexCharClass_SingleRange)0x0)) goto code_?;
        break;
      }
    }
    index = index + 1;
    pLVar4 = (pGVar1->fields).tierOutlineList;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

