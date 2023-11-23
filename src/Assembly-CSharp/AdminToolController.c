
/* MVPlayer GetPlayer(String) */

MVPlayer *
Assembly-CSharp.dll::AdminToolController::AdminToolController_GetPlayer
          (String *userName,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  pOStack_4 = (Object__Class *)0x0;
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar5 != (MVNetworkGame *)0x0) &&
     (this = (pMVar5->fields).playerContainer, this != (MVPlayerContainer *)0x0)) {
    this_00 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)MVPlayerContainer::MVPlayerContainer_get_Values(this,(MethodInfo *)0x0);
    if (this_00 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffd8,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                         );
      uStack_1 = 1;
      pMVar7 = (MVPlayer *)pDVar6->_currentValue;
      while( true ) {
        pMVar8 = pMVar7;
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                            *)&pOStack_4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&pOStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                     ,in_stack_10);
          *unaff_FS_OFFSET = uStack_3;
          return (MVPlayer *)0x0;
        }
        if ((pMVar8 == (MVPlayer *)0x0) ||
           (pUVar11 = (pMVar8->fields)._UserProfileData_k__BackingField,
           pUVar11 == (UserProfileData *)0x0)) break;
        pMVar7 = (MVPlayer *)userName;
        bVar9 = mscorlib.dll::System::String::String_op_Equality
                          ((pUVar11->fields).UserName,userName,(MethodInfo *)0x0);
        if (bVar9 != 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&pOStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                     ,in_stack_12);
          *unaff_FS_OFFSET = uStack_3;
          return pMVar8;
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pMVar7 = (MVPlayer *)(*pcVar13)();
  return pMVar7;
}


/* Void Initialize(String) */

void Assembly-CSharp.dll::AdminToolController::AdminToolController_Initialize
               (AdminToolController *this,String *playerNameString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__AdminToolController__OnDefaultBanDropdownChanged_int_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?(&
                    MethodInfo__UnityEngine__Events__UnityEvent<int>__AddListener_UnityEngine__Events__UnityAction<int>_
                   );
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playerName;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,playerNameString,
               (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pDVar2 = (this->fields).presetBansDropdown;
    if (pDVar2 != (Dropdown *)0x0) {
      this_00 = (UnityEvent_1_UnityEngine_Vector2_ *)(pDVar2->fields).m_OnValueChanged;
      this_02 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_02,(Object *)this,
                 MethodInfo__AdminToolController__OnDefaultBanDropdownChanged_int_,(MethodInfo *)0x0
                );
      if (this_00 != (UnityEvent_1_UnityEngine_Vector2_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent`1[UnityEngine::Vector2]::
        UnityEvent_1_UnityEngine_Vector2__AddListener
                  (this_00,(UnityAction_1_UnityEngine_Vector2_ *)this_02,
                   MethodInfo__UnityEngine__Events__UnityEvent<int>__AddListener_UnityEngine__Events__UnityAction<int>_
                  );
        this_01 = (this->fields).ownerKickButton;
        if (this_01 != (Button *)0x0) {
          this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_01,(MethodInfo *)0x0);
          MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
          if (this_03 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_03,MVar3 == MVGameMode__Enum_Edit,(MethodInfo *)0x0);
            AdminToolController_OnDefaultBanDropdownChanged(this,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean IsBanFieldsValid() */

bool Assembly-CSharp.dll::AdminToolController::AdminToolController_IsBanFieldsValid
               (AdminToolController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).reason;
  if (pIVar1 != (InputField *)0x0) {
    bVar2 = mscorlib.dll::System::String::String_op_Equality
                      ((pIVar1->fields).m_Text,::StringLiteral__,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pIVar1 = (this->fields).duration;
      if (pIVar1 == (InputField *)0x0) goto code_?;
      bVar2 = mscorlib.dll::System::Int32::Int32_TryParse
                        ((pIVar1->fields).m_Text,(int32_t *)&stack0xfffffff8,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        return 1;
      }
    }
    return 0;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void OnBanClicked() */

void Assembly-CSharp.dll::AdminToolController::AdminToolController_OnBanClicked
               (AdminToolController *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AdminToolController);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                   );
    func_?(&TypeInfo__System__String);
    func_?(&
                    MethodInfo__AdminToolController____c___OnBanClicked_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__AdminToolController____c___OnBanClicked_b__9_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AdminToolController____c);
    func_?(&StringLiteral_Expel);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral_Banning_);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral__for__);
    func_?(&StringLiteral_Invalid_admin_fields__Specify_re);
    func_?(&StringLiteral_Player_non_existant_in_game);
    cRam_? = '\x01';
  }
  pTVar1 = (this_01->fields).playerName;
  if (pTVar1 == (Text *)0x0) goto code_?;
  pSVar2 = (String *)
           (*(code *)(pTVar1->klass->vtable).get_text.method)
                     (pTVar1,(pTVar1->klass->vtable).set_text.methodPtr);
  if ((TypeInfo__AdminToolController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AdminToolController);
  }
  target = AdminToolController_GetPlayer(pSVar2,(MethodInfo *)0x0);
  if (target == (MVPlayer *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Player_non_existant_in_game,(MethodInfo *)0x0);
    return;
  }
  pDVar3 = (this_01->fields).banDurationMultiplier;
  if (pDVar3 == (Dropdown *)0x0) goto code_?;
  pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                      (pDVar3,(MethodInfo *)0x0);
  pDVar3 = (this_01->fields).banDurationMultiplier;
  if ((pDVar3 == (Dropdown *)0x0) ||
     (pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
  goto code_?;
  RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (pLVar4,(pDVar3->fields).m_Value,
                      MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                     );
  if (RVar5 == (RegexCharClass_SingleRange)0x0) goto code_?;
  bVar6 = mscorlib.dll::System::String::String_op_Equality
                    (*(String **)((int)RVar5 + 8),StringLiteral_Expel,(MethodInfo *)0x0);
  if (bVar6 != 0) {
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar7 == (MVNetworkGame *)0x0) ||
        (pIVar8 = (this_01->fields).reason, pIVar8 == (InputField *)0x0)) ||
       (pMVar9 = (pMVar7->fields).operationRequests,
       pMVar9 == (MVNetworkGame_OperationRequests *)0x0)) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Expel
              (pMVar9,target,(pIVar8->fields).m_Text,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_01,(MethodInfo *)0x0);
    if ((TypeInfo__AdminToolController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    callbackFunction = TypeInfo__AdminToolController____c->static_fields->__9__9_0;
    if (callbackFunction != (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) goto code_?;
    if ((TypeInfo__AdminToolController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pAVar10 = TypeInfo__AdminToolController____c->static_fields->__9;
    callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pAVar10,
               MethodInfo__AdminToolController____c___OnBanClicked_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AdminToolController____c->static_fields->__9__9_0 = callbackFunction;
    ppEVar11 = &TypeInfo__AdminToolController____c->static_fields->__9__9_0;
code_?:
    func_?(ppEVar11);
code_?:
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pIVar8 = (this_01->fields).reason;
  this = (AdminToolController *)0x0;
  if (pIVar8 == (InputField *)0x0) goto code_?;
  bVar6 = mscorlib.dll::System::String::String_op_Equality
                    ((pIVar8->fields).m_Text,::StringLiteral__,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    pIVar8 = (this_01->fields).duration;
    if (pIVar8 == (InputField *)0x0) goto code_?;
    bVar6 = mscorlib.dll::System::Int32::Int32_TryParse
                      ((pIVar8->fields).m_Text,(int32_t *)&this,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      pIVar8 = (this_01->fields).duration;
      if (pIVar8 == (InputField *)0x0) goto code_?;
      iVar12 = mscorlib.dll::System::Int32::Int32_Parse((pIVar8->fields).m_Text,(MethodInfo *)0x0);
      if ((TypeInfo__AdminToolController->_1).cctor_finished_or_no_cctor == 0) {
        this = (AdminToolController *)TypeInfo__AdminToolController;
        func_?();
      }
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                TypeInfo__AdminToolController->static_fields->durationMultiplier;
      pDVar3 = (this_01->fields).banDurationMultiplier;
      if (pDVar3 == (Dropdown *)0x0) goto code_?;
      pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                          (pDVar3,(MethodInfo *)0x0);
      pDVar3 = (this_01->fields).banDurationMultiplier;
      if ((pDVar3 == (Dropdown *)0x0) ||
         (pLVar4 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
      goto code_?;
      RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (pLVar4,(pDVar3->fields).m_Value,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                         );
      if ((RVar5 == (RegexCharClass_SingleRange)0x0) ||
         (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0))
      goto code_?;
      TVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         (this_00,*(Object **)((int)RVar5 + 8),
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                         );
      this = (AdminToolController *)(TVar13.m_Index * iVar12);
      target_00 = TypeInfo__System__String;
      values = (String__Array *)func_?();
      pSVar2 = StringLiteral_Banning_;
      if (values == (String__Array *)0x0) goto code_?;
      if (values->max_length != 0) {
        values->vector[0] = StringLiteral_Banning_;
        func_?(values->vector,pSVar2);
        pTVar1 = (this_01->fields).playerName;
        if (pTVar1 == (Text *)0x0) goto code_?;
        pSVar2 = (String *)
                 (*(code *)(pTVar1->klass->vtable).get_text.method)
                           (pTVar1,(pTVar1->klass->vtable).set_text.methodPtr);
        if (1 < values->max_length) {
          values->vector[1] = pSVar2;
          func_?(values->vector + 1,pSVar2);
          pSVar2 = ::StringLiteral___;
          if (2 < values->max_length) {
            values->vector[2] = ::StringLiteral___;
            func_?(values->vector + 2,pSVar2);
            pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                               ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
            if (3 < values->max_length) {
              values->vector[3] = pSVar2;
              func_?(values->vector + 3,pSVar2);
              pSVar2 = ::StringLiteral__;
              if (4 < values->max_length) {
                values->vector[4] = ::StringLiteral__;
                func_?(values->vector + 4,pSVar2);
                pDVar3 = (this_01->fields).banDurationMultiplier;
                if (pDVar3 == (Dropdown *)0x0) goto code_?;
                pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                                    (pDVar3,(MethodInfo *)0x0);
                pDVar3 = (this_01->fields).banDurationMultiplier;
                if ((pDVar3 == (Dropdown *)0x0) ||
                   (pLVar4 ==
                    (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
                goto code_?;
                RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (pLVar4,(pDVar3->fields).m_Value,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                                   );
                if (RVar5 == (RegexCharClass_SingleRange)0x0) goto code_?;
                pSVar2 = *(String **)((int)RVar5 + 8);
                if (5 < values->max_length) {
                  values->vector[5] = pSVar2;
                  func_?(values->vector + 5,pSVar2);
                  pSVar2 = StringLiteral__for__;
                  if (6 < values->max_length) {
                    values->vector[6] = StringLiteral__for__;
                    func_?(values->vector + 6,pSVar2);
                    pIVar8 = (this_01->fields).reason;
                    if (pIVar8 == (InputField *)0x0) goto code_?;
                    pSVar2 = (pIVar8->fields).m_Text;
                    if (7 < values->max_length) {
                      values->vector[7] = pSVar2;
                      func_?(values->vector + 7,pSVar2);
                      pSVar2 = mscorlib.dll::System::String::String_Concat_6
                                         (values,(MethodInfo *)0x0);
                      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__UnityEngine__Debug);
                      }
                      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                                ((Object *)pSVar2,(MethodInfo *)0x0);
                      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game
                                          ((MethodInfo *)0x0);
                      if (((pMVar7 == (MVNetworkGame *)0x0) ||
                          (pIVar8 = (this_01->fields).reason, pIVar8 == (InputField *)0x0)) ||
                         (pMVar9 = (pMVar7->fields).operationRequests,
                         pMVar9 == (MVNetworkGame_OperationRequests *)0x0)) goto code_?;
                      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Ban_1
                                (pMVar9,(int32_t)this,(MVPlayer *)target_00,(pIVar8->fields).m_Text,
                                 (MethodInfo *)0x0);
                      root = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0);
                      if ((TypeInfo__AdminToolController____c->_1).cctor_finished_or_no_cctor == 0)
                      {
                        func_?();
                      }
                      callbackFunction = TypeInfo__AdminToolController____c->static_fields->__9__9_1
                      ;
                      if (callbackFunction != (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
                      goto code_?;
                      if ((TypeInfo__AdminToolController____c->_1).cctor_finished_or_no_cctor == 0)
                      {
                        func_?();
                      }
                      pAVar10 = TypeInfo__AdminToolController____c->static_fields->__9;
                      callbackFunction =
                           (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                      Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                                 (Object *)pAVar10,
                                 MethodInfo__AdminToolController____c___OnBanClicked_b__9_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                 ,(MethodInfo *)0x0);
                      TypeInfo__AdminToolController____c->static_fields->__9__9_1 = callbackFunction
                      ;
                      ppEVar11 = &TypeInfo__AdminToolController____c->static_fields->__9__9_1;
                      goto code_?;
                    }
                  }
                }
              }
            }
          }
        }
      }
      func_?();
      goto code_?;
    }
  }
  pIVar8 = (this_01->fields).duration;
  if ((pIVar8 != (InputField *)0x0) &&
     (pIVar14 = (this_01->fields).reason, pIVar14 != (InputField *)0x0)) {
    pSVar2 = mscorlib.dll::System::String::String_Concat_4
                       ((pIVar8->fields).m_Text,::StringLiteral__,(pIVar14->fields).m_Text,
                        (MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Invalid_admin_fields__Specify_re,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnDefaultBanDropdownChanged(Int32) */

void Assembly-CSharp.dll::AdminToolController::AdminToolController_OnDefaultBanDropdownChanged
               (AdminToolController *this,int32_t option,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AdminToolController);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__get_Item_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).presetBansDropdown;
  if (((pDVar1 != (Dropdown *)0x0) &&
      (pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                          (pDVar1,(MethodInfo *)0x0),
      pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) &&
     (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar2,option,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                        ), RVar3 != (RegexCharClass_SingleRange)0x0)) {
    key = *(Object **)((int)RVar3 + 8);
    pIVar4 = (this->fields).reason;
    if ((TypeInfo__AdminToolController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pDVar5 = TypeInfo__AdminToolController->static_fields->defaultBanLookup;
    if (pDVar5 != (Dictionary_2_System_String_AdminToolController_DefaultBan_ *)0x0) {
      pAVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
               Object,AdminToolController+DefaultBan]::
               Dictionary_2_System_Object_AdminToolController_DefaultBan__get_Item
                         ((AdminToolController_DefaultBan *)&stack0xffffffe4,
                          (Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)pDVar5,key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__get_Item_System__String_
                         );
      value = pAVar6->BanReason;
      if (pIVar4 != (InputField *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                  (pIVar4,(String *)value,(MethodInfo *)0x0);
        pIVar4 = (this->fields).duration;
        pDVar5 = TypeInfo__AdminToolController->static_fields->defaultBanLookup;
        if (pDVar5 != (Dictionary_2_System_String_AdminToolController_DefaultBan_ *)0x0) {
          pAVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,AdminToolController+DefaultBan]::
                   Dictionary_2_System_Object_AdminToolController_DefaultBan__get_Item
                             ((AdminToolController_DefaultBan *)&stack0xffffffe4,
                              (Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)pDVar5,
                              key,
                              MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__get_Item_System__String_
                             );
          value_00 = pAVar6->BanDuration;
          if (pIVar4 != (InputField *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::InputField::InputField_set_text
                      (pIVar4,(String *)value_00,(MethodInfo *)0x0);
            pDVar5 = TypeInfo__AdminToolController->static_fields->defaultBanLookup;
            if (pDVar5 != (Dictionary_2_System_String_AdminToolController_DefaultBan_ *)0x0) {
              pAVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,AdminToolController+DefaultBan]::
                       Dictionary_2_System_Object_AdminToolController_DefaultBan__get_Item
                                 ((AdminToolController_DefaultBan *)&stack0xffffffe4,
                                  (Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)
                                  pDVar5,key,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__get_Item_System__String_
                                 );
              pDVar1 = (this->fields).banDurationMultiplier;
              index = 0;
              b = pAVar6->BanDurationFormat;
              while( true ) {
                if ((pDVar1 == (Dropdown *)0x0) ||
                   (pLVar7 = UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                                       (pDVar1,(MethodInfo *)0x0),
                   pLVar7 == (List_1_UnityEngine_UI_Dropdown_OptionData_ *)0x0))
                goto code_?;
                if ((pLVar7->fields)._size <= index) {
                  return;
                }
                pDVar1 = (this->fields).banDurationMultiplier;
                if (((pDVar1 == (Dropdown *)0x0) ||
                    (pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_get_options
                                        (pDVar1,(MethodInfo *)0x0),
                    pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              0x0)) ||
                   (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      (pLVar2,index,
                                       MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Dropdown::OptionData>__get_Item_int_
                                      ), RVar3 == (RegexCharClass_SingleRange)0x0))
                goto code_?;
                bVar8 = mscorlib.dll::System::String::String_op_Equality
                                  (*(String **)((int)RVar3 + 8),b,(MethodInfo *)0x0);
                pDVar1 = (this->fields).banDurationMultiplier;
                if (bVar8 != 0) break;
                index = index + 1;
              }
              if (pDVar1 != (Dropdown *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Dropdown::Dropdown_set_value
                          (pDVar1,index,(MethodInfo *)0x0);
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
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnKickClicked() */

void Assembly-CSharp.dll::AdminToolController::AdminToolController_OnKickClicked
               (AdminToolController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AdminToolController);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__AdminToolController____c___OnKickClicked_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AdminToolController____c);
    func_?(&StringLiteral__kicked_by_admin_);
    func_?(&StringLiteral_Player_non_existant_in_game);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playerName;
  if (pTVar1 != (Text *)0x0) {
    pSVar2 = (String *)
             (*(code *)(pTVar1->klass->vtable).get_text.method)
                       (pTVar1,(pTVar1->klass->vtable).set_text.methodPtr);
    if ((TypeInfo__AdminToolController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__AdminToolController);
    }
    target = AdminToolController_GetPlayer(pSVar2,(MethodInfo *)0x0);
    if (target == (MVPlayer *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Player_non_existant_in_game,(MethodInfo *)0x0);
      return;
    }
    pTVar1 = (this->fields).playerName;
    if (pTVar1 != (Text *)0x0) {
      pSVar2 = (String *)
               (*(code *)(pTVar1->klass->vtable).get_text.method)
                         (pTVar1,(pTVar1->klass->vtable).set_text.methodPtr);
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (pSVar2,StringLiteral__kicked_by_admin_,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar2,(MethodInfo *)0x0);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar3 != (MVNetworkGame *)0x0) &&
          (pIVar4 = (this->fields).reason, pIVar4 != (InputField *)0x0)) &&
         (this_00 = (pMVar3->fields).operationRequests,
         this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_Kick
                  (this_00,target,(pIVar4->fields).m_Text,(MethodInfo *)0x0);
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__AdminToolController____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        callbackFunction = TypeInfo__AdminToolController____c->static_fields->__9__10_0;
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__AdminToolController____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          object = TypeInfo__AdminToolController____c->static_fields->__9;
          callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object
                     ,
                     MethodInfo__AdminToolController____c___OnKickClicked_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__AdminToolController____c->static_fields->__9__10_0 = callbackFunction;
          func_?();
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnRevokeEditRightsClicked() */

void Assembly-CSharp.dll::AdminToolController::AdminToolController_OnRevokeEditRightsClicked
               (AdminToolController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AdminToolController);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Player_is_not_present_in_session);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).playerName;
  if (pTVar1 == (Text *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  userName = (String *)
             (*(code *)(pTVar1->klass->vtable).get_text.method)
                       (pTVar1,(pTVar1->klass->vtable).set_text.methodPtr);
  if ((TypeInfo__AdminToolController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AdminToolController);
  }
  player = AdminToolController_GetPlayer(userName,(MethodInfo *)0x0);
  if (player == (MVPlayer *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Player_is_not_present_in_session,(MethodInfo *)0x0);
    return;
  }
  OwnerOps::OwnerOps_RevokeEditRightsAndKick((MonoBehaviour *)this,player,(MethodInfo *)0x0);
  return;
}


/* AdminToolController() */

void Assembly-CSharp.dll::AdminToolController::AdminToolController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AdminToolController);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Add_System__String__AdminToolController__DefaultBan_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>);
    func_?(&StringLiteral_Hours);
    func_?(&StringLiteral__2);
    func_?(&StringLiteral_You_are_banned_for_inappropriate);
    func_?(&StringLiteral_Weeks);
    func_?(&StringLiteral_Admin_impersonation);
    func_?(&StringLiteral_You_are_banned_for_pretending_to);
    func_?(&StringLiteral_You_are_banned_for_sexual_behavi);
    func_?(&StringLiteral__7);
    func_?(&StringLiteral_Abusive_chat);
    func_?(&StringLiteral_Sexual_behavior);
    func_?(&StringLiteral_Days);
    func_?(&StringLiteral_Cheating);
    func_?(&StringLiteral_You_are_banned_for_cheating_);
    func_?(&StringLiteral__24);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         func_?(TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary__
            );
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
    Dictionary_2_System_Object_System_Int32__Add
              ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_Hours,1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
    Dictionary_2_System_Object_System_Int32__Add
              ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_Days,0x18,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
    Dictionary_2_System_Object_System_Int32__Add
              ((Dictionary_2_System_Object_System_Int32_ *)this,(Object *)StringLiteral_Weeks,0xa8,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
              );
    TypeInfo__AdminToolController->static_fields->durationMultiplier =
         (Dictionary_2_System_String_System_Int32_ *)this;
    func_?(TypeInfo__AdminToolController->static_fields,this);
    this_00 = (Dictionary_2_System_String_AdminToolController_DefaultBan_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>
                             );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Dictionary__
              );
    pSVar1 = StringLiteral__7;
    pSVar2 = StringLiteral_Days;
    func_?();
    puVar3 = &stack0xfffffff4;
    func_?();
    func_?();
    if (this_00 != (Dictionary_2_System_String_AdminToolController_DefaultBan_ *)0x0) {
      value_00.BanDuration = pSVar1;
      value_00.BanReason = (String *)puVar3;
      value_00.BanDurationFormat = pSVar2;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Object,AdminToolController+DefaultBan]::
      Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
                ((Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)this_00,
                 (Object *)StringLiteral_Cheating,value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Add_System__String__AdminToolController__DefaultBan_
                );
      pSVar1 = StringLiteral__24;
      pSVar2 = StringLiteral_Hours;
      pSVar4 = StringLiteral_You_are_banned_for_inappropriate;
      func_?(&stack0xffffffe4,StringLiteral_You_are_banned_for_inappropriate);
      func_?(&stack0xffffffe8,pSVar1);
      func_?(&stack0xffffffec,pSVar2);
      value_01.BanDuration = pSVar1;
      value_01.BanReason = pSVar4;
      value_01.BanDurationFormat = pSVar2;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Object,AdminToolController+DefaultBan]::
      Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
                ((Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)this_00,
                 (Object *)StringLiteral_Abusive_chat,value_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Add_System__String__AdminToolController__DefaultBan_
                );
      pSVar1 = StringLiteral__2;
      pSVar2 = StringLiteral_Weeks;
      puVar3 = &stack0xffffffd8;
      func_?();
      func_?();
      func_?(&stack0xffffffe0);
      value_02.BanDuration = pSVar1;
      value_02.BanReason = (String *)puVar3;
      value_02.BanDurationFormat = pSVar2;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Object,AdminToolController+DefaultBan]::
      Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
                ((Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)this_00,
                 (Object *)StringLiteral_Sexual_behavior,value_02,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Add_System__String__AdminToolController__DefaultBan_
                );
      pSVar1 = StringLiteral__2;
      pSVar2 = StringLiteral_Weeks;
      pSVar4 = StringLiteral_You_are_banned_for_pretending_to;
      func_?();
      func_?();
      pSStack5 = pSVar2;
      func_?();
      value.BanDuration = pSVar1;
      value.BanReason = pSVar4;
      value.BanDurationFormat = pSStack5;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Object,AdminToolController+DefaultBan]::
      Dictionary_2_System_Object_AdminToolController_DefaultBan__Add
                ((Dictionary_2_System_Object_AdminToolController_DefaultBan_ *)this_00,
                 (Object *)StringLiteral_Admin_impersonation,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_AdminToolController::DefaultBan>__Add_System__String__AdminToolController__DefaultBan_
                );
      TypeInfo__AdminToolController->static_fields->defaultBanLookup = this_00;
      pSStack5 = (String *)&TypeInfo__AdminToolController->static_fields->defaultBanLookup;
      func_?();
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

