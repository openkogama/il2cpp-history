
/* IEnumerator FixContentPivot() */

IEnumerator *
Assembly-CSharp.dll::BoostMenuController::BoostMenuController_FixContentPivot
          (BoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BoostMenuController___FixContentPivot_d__9);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__BoostMenuController___FixContentPivot_d__9;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* List`1[Boost] GetSortedBoosts(Dictionary`2[TKey,TValue]+ValueCollection[BoostType,Boost],
   BoostController) */

List_1_Boost_ *
Assembly-CSharp.dll::BoostMenuController::BoostMenuController_GetSortedBoosts
          (BoostMenuController *this,
          Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *boosts,
          BoostController *boostController,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  _Stack_28.methodMetadataHandle = (Il2CppMetadataMethodDefinitionHandle)boosts;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<Boost>__Add_Boost_);
    func_?(&MethodInfo__System__Collections__Generic__List<Boost>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<BoostType>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<Boost>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<BoostType>__get_Item_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<Boost>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  this_01 = (MethodInfo *)func_?(TypeInfo__System__Collections__Generic__List<Boost>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<Boost>__List__);
  iStack_7 = 0;
  _Var9 = (_union_154)boosts;
  pMStack_8 = this_01;
  while( true ) {
    if (((boostController == (BoostController *)0x0) ||
        (pLVar9 = (boostController->fields).boostPriorityList, pLVar9 == (List_1_BoostType_ *)0x0))
       || (_Var9.rgctx_data == (Il2CppRGCTXData *)0x0)) break;
    method_00 = (MethodInfo *)&stack0xffffffa8;
    if ((pLVar9->fields)._size <= iStack_7) {
      pDVar10 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)method_00,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)boosts,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                         );
      _Stack_38.genericMethod = (Il2CppGenericMethod *)0x0;
      DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar10->_dictionary;
      DStack_6._index = pDVar10->_index;
      DStack_6._version = pDVar10->_version;
      DStack_6._currentValue = pDVar10->_currentValue;
      uStack_1 = 4;
      pDStack_11 = &DStack_6;
      do {
        bVar12 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                          );
        if (bVar12 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&DStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                     ,in_stack_13);
          *unaff_FS_OFFSET = uStack_3;
          return (List_1_Boost_ *)this_01;
        }
        bVar14 = false;
        _Stack_28 = (_union_154)DStack_6._currentValue;
        iStack_7 = 0;
        while( true ) {
          if (this_01 == (MethodInfo *)0x0) goto code_?;
          if ((int)this_01->name <= iStack_7) break;
          RVar15 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             this_01,iStack_7,
                             MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_);
          if (RVar15 == (RegexCharClass_SingleRange)0x0) goto code_?;
          if (_Stack_28.rgctx_data == (Il2CppRGCTXData *)0x0) goto code_?;
          if (*(Dictionary_2_BoostType_Boost_ **)((int)RVar15 + 8) ==
              _Stack_28.rgctx_data[2].rgctxDataDummy) {
            bVar14 = true;
          }
          iStack_7 = iStack_7 + 1;
        }
        if (!bVar14) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_01,(Object *)_Stack_28.methodMetadataHandle,
                     MethodInfo__System__Collections__Generic__List<Boost>__Add_Boost_);
        }
      } while( true );
    }
    pDVar10 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
             StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)method_00,
                        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)boosts,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                       );
    _Stack_38.genericMethod = (Il2CppGenericMethod *)0x0;
    DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar10->_dictionary;
    DStack_6._index = pDVar10->_index;
    DStack_6._version = pDVar10->_version;
    DStack_6._currentValue = pDVar10->_currentValue;
    uStack_1 = 1;
    pDStack_11 = &DStack_6;
    while( true ) {
      bVar12 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
              UInt32,System::Object]::
              Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                        );
      if (bVar12 == 0) break;
      _Stack_24.rgctx_data = (Il2CppRGCTXData *)DStack_6._currentValue;
      if ((Il2CppRGCTXData *)DStack_6._currentValue == (Il2CppRGCTXData *)0x0)
      goto code_?;
      RStack_16 = (RegexCharClass_SingleRange)
                  ((Il2CppRGCTXData *)((int)DStack_6._currentValue + 8))->rgctxDataDummy;
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (boostController->fields).boostPriorityList;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      RVar15 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,iStack_7,
                         MethodInfo__System__Collections__Generic__List<BoostType>__get_Item_int_);
      if (RStack_16 == RVar15) {
        if (this_01 == (MethodInfo *)0x0) goto code_?;
        method_00 = this_01;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_01,(Object *)_Stack_24.methodMetadataHandle,
                   MethodInfo__System__Collections__Generic__List<Boost>__Add_Boost_);
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
               ,method_00);
    iStack_7 = iStack_7 + 1;
    uStack_1 = 0xffffffff;
    _Var9 = _Stack_28;
  }
code_?:
  func_?();
  func_?();
  func_?();
  pcVar17 = (code *)swi(3);
  pLVar18 = (List_1_Boost_ *)(*pcVar17)();
  return pLVar18;
}


/* Void Initialize() */

void Assembly-CSharp.dll::BoostMenuController::BoostMenuController_Initialize
               (BoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__UI__LayoutRebuilder);
    func_?(&MethodInfo__System__Collections__Generic__List<Boost>__get_Count__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                   );
    func_?(&
                    MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                   );
    func_?(&
                    BoostMenuItem_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuItem>_BoostMenuItem__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (pMVar1 != (MVLocalPlayer *)0x0) {
      this_00 = (pMVar1->fields).boostController;
      if (this_00 != (BoostController *)0x0) {
        boosts = BoostController::BoostController_GetAllBoosts(this_00,(MethodInfo *)0x0);
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_02 != (MVWorldObjectClientManager *)0x0) {
          pBVar2 = (BoostMenuController *)&UNK_?;
          this_03 = (MVGameOptionDataObject *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                              (this_02,
                               MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                              );
          if (this_03 != (MVGameOptionDataObject *)0x0) {
            this_04 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                                (this_03,(MethodInfo *)0x0);
            if (this_04 != (GameBoosterSettingsManager *)0x0) {
              this_05 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes
                        ::GameBoosterSettings::GameBoosterSettingsManager::
                        GameBoosterSettingsManager_get_ActiveSettingsList(this_04,(MethodInfo *)0x0)
              ;
              this_06 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        BoostMenuController_GetSortedBoosts
                                  (unaff_EBX,boosts,this_00,(MethodInfo *)0x0);
              index_00 = 0;
              this = unaff_EBX;
              this_07 = this_06;
              if (this_06 !=
                  (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                do {
                  if ((this_06->fields)._size <= index_00) {
                    layoutRoot = (this->fields).boostItemsContent;
                    if ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).cctor_finished_or_no_cctor
                        == 0) {
                      func_?();
                    }
                    UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
                    LayoutRebuilder_ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    method_00 = TypeInfo__BoostMenuController___FixContentPivot_d__9;
                    value = (Object *)func_?();
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                    value[1].klass = (Object__Class *)0x0;
                    value[2].klass = (Object__Class *)this;
                    func_?();
                    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                    MonoBehaviour_StartCoroutine_Auto
                              ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
                    return;
                  }
                  index = 0;
                  while( true ) {
                    if (this_05 ==
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                    goto code_?;
                    if ((this_05->fields)._size <= index) break;
                    RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                      (this_06,index_00,
                                       MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_
                                      );
                    if (RVar3 == (RegexCharClass_SingleRange)0x0) goto code_?;
                    this_06 = this_07;
                    if (*(char *)((int)RVar3 + 0x18) != '\0') {
                      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                              RegularExpressions::RegexCharClass+SingleRange]::
                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                        (this_07,index_00,
                                         MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_
                                        );
                      if (RVar3 == (RegexCharClass_SingleRange)0x0) goto code_?;
                      a = *(String **)((int)RVar3 + 0xc);
                      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                              RegularExpressions::RegexCharClass+SingleRange]::
                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                        (this_05,index,
                                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                                        );
                      if (RVar3 == (RegexCharClass_SingleRange)0x0) goto code_?;
                      bVar4 = mscorlib.dll::System::String::String_op_Equality
                                        (a,*(String **)((int)RVar3 + 0xc),(MethodInfo *)0x0);
                      this_06 = this_07;
                      if (bVar4 != 0) {
                        pBVar5 = (this->fields).boostPrefab;
                        parent = (Transform *)(this->fields).boostItemsContent;
                        this = pBVar2;
                        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                          this = pBVar2;
                          this_06 = this_07;
                        }
                        pBVar5 = (BoostMenuItem *)
                                 UnityEngine.CoreModule.dll::UnityEngine::Object::
                                 Object_1_Instantiate_6
                                           ((Object *)pBVar5,parent,0,
                                            BoostMenuItem_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuItem>_BoostMenuItem__UnityEngine__Transform__bool_
                                           );
                        RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                RegularExpressions::RegexCharClass+SingleRange]::
                                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                          (this_06,index_00,
                                           MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_
                                          );
                        RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                RegularExpressions::RegexCharClass+SingleRange]::
                                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                          (this_06,index_00,
                                           MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_
                                          );
                        if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
                        pBVar2 = this;
                        bVar4 = BoostController::BoostController_IsBoostActive
                                          ((BoostController *)this,
                                           *(BoostType__Enum *)((int)RVar6 + 8),(MethodInfo *)0x0);
                        if (pBVar5 == (BoostMenuItem *)0x0) goto code_?;
                        BoostMenuItem::BoostMenuItem_Initialize
                                  (pBVar5,(Boost *)RVar3,bVar4,(MethodInfo *)0x0);
                      }
                    }
                    index = index + 1;
                    this_07 = this_06;
                  }
                  index_00 = index_00 + 1;
                } while( true );
              }
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


/* Void OnAdFinished(Boolean) */

void Assembly-CSharp.dll::BoostMenuController::BoostMenuController_OnAdFinished
               (BoostMenuController *this,bool adWasSuccessful,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BoostType);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&
                    MethodInfo__BoostMenuController____c___OnAdFinished_b__8_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BoostMenuController____c);
    func_?(&StringLiteral_Ad_RewardRequest_Booster_);
    cRam_? = '\x01';
  }
  if (adWasSuccessful == 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__BoostMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BoostMenuController____c);
    }
    callbackFunction = TypeInfo__BoostMenuController____c->static_fields->__9__8_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__BoostMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BoostMenuController____c);
      }
      object = TypeInfo__BoostMenuController____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__BoostMenuController____c___OnAdFinished_b__8_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__BoostMenuController____c->static_fields->__9__8_0 = callbackFunction;
      root = (GameObject *)&UNK_?;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    _adWasSuccessful = unaff_EDI;
code_?:
    pAVar1 = (this->fields).boostUnlockedCallback;
    if (pAVar1 != (Action_1_Boolean_ *)0x0) {
      pvStack2 = (pAVar1->fields)._._.method;
      uStack3 = _adWasSuccessful;
      pvStack4 = (pAVar1->fields)._._.method_code;
      (*(pAVar1->fields)._._.invoke_impl)();
    }
    return;
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if ((pMVar5 != (MVLocalPlayer *)0x0) &&
       (this_00 = (pMVar5->fields).boostController, this_00 != (BoostController *)0x0)) {
      BoostController::BoostController_ActivateBoost
                (this_00,(this->fields).adRewardType,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffec,(MethodInfo *)0x0)
      ;
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Ad_RewardRequest_Booster_,pSVar6,(MethodInfo *)0x0);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _adWasSuccessful = 1;
      StatHatWrapper::StatHatWrapper_Count(pSVar6,1,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::BoostMenuController::BoostMenuController_RewardedAdCallback
               (BoostMenuController *this,RewardedAdResult__Enum obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BoostType);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&
                    MethodInfo__BoostMenuController____c___OnAdFinished_b__8_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__BoostMenuController____c);
    func_?(&StringLiteral_Ad_RewardRequest_Booster_);
    cRam_? = '\x01';
  }
  if (obj != RewardedAdResult__Enum_RewardUnlocked) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__BoostMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BoostMenuController____c);
    }
    callbackFunction = TypeInfo__BoostMenuController____c->static_fields->__9__8_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if ((TypeInfo__BoostMenuController____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BoostMenuController____c);
      }
      object = TypeInfo__BoostMenuController____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__BoostMenuController____c___OnAdFinished_b__8_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__BoostMenuController____c->static_fields->__9__8_0 = callbackFunction;
      root = (GameObject *)&UNK_?;
      func_?();
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    obj = unaff_EDI;
code_?:
    pAVar1 = (this->fields).boostUnlockedCallback;
    if (pAVar1 != (Action_1_Boolean_ *)0x0) {
      pvStack2 = (pAVar1->fields)._._.method;
      RStack3 = obj;
      pvStack4 = (pAVar1->fields)._._.method_code;
      (*(pAVar1->fields)._._.invoke_impl)();
    }
    return;
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar5 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if ((pMVar5 != (MVLocalPlayer *)0x0) &&
       (this_00 = (pMVar5->fields).boostController, this_00 != (BoostController *)0x0)) {
      BoostController::BoostController_ActivateBoost
                (this_00,(this->fields).adRewardType,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffec,(MethodInfo *)0x0)
      ;
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Ad_RewardRequest_Booster_,pSVar6,(MethodInfo *)0x0);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      obj = RewardedAdResult__Enum_ErrorInternal;
      StatHatWrapper::StatHatWrapper_Count(pSVar6,1,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void TryShowAd(BoostType, Action`1[Boolean]) */

void Assembly-CSharp.dll::BoostMenuController::BoostMenuController_TryShowAd
               (BoostMenuController *this,BoostType__Enum type,Action_1_Boolean_ *OnUnlockedCallback
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    func_?(&
                    MethodInfo__BoostMenuController__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   );
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).boostUnlockedCallback;
  *ppAVar1 = OnUnlockedCallback;
  func_?(ppAVar1,OnUnlockedCallback);
  (this->fields).adRewardType = type;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    BoostMenuController_OnAdFinished(this,1,(MethodInfo *)0x0);
    return;
  }
  pIVar2 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (pIVar2 != (IAdManager *)0x0) {
    cVar3 = func_?(4,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar2);
    if (cVar3 == '\0') {
      BoostMenuController_OnAdFinished(this,0,(MethodInfo *)0x0);
      return;
    }
    pIVar2 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              func_?(
                             TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__BoostMenuController__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
               ,(MethodInfo *)0x0);
    if (pIVar2 != (IAdManager *)0x0) {
      func_?(6,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar2,this_00,1);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

