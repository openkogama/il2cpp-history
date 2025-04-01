
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
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
  pDStack_5 = boosts;
  puVar6 = &stack0xffffff9c;
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
    puVar6 = puStack_4;
  }
  puStack_4 = puVar6;
  DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_7._index = 0;
  DStack_7._version = 0;
  DStack_7._currentValue = (Object *)0x0;
  this_01 = (MethodInfo *)func_?(TypeInfo__System__Collections__Generic__List<Boost>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<Boost>__List__);
  iStack_8 = 0;
  pMStack_9 = this_01;
  if (boostController != (BoostController *)0x0) {
    while ((pLVar10 = (boostController->fields).boostPriorityList, pLVar10 != (List_1_BoostType_ *)0x0
           && (pDStack_5 != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0))) {
      method_00 = (MethodInfo *)auStack_11;
      if ((pLVar10->fields)._size <= iStack_8) {
        method_01 = 
        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
        ;
        pDVar12 = mscorlib.dll::System::Collections::Generic::
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
        DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar12->_dictionary;
        DStack_7._index = pDVar12->_index;
        DStack_7._version = pDVar12->_version;
        DStack_7._currentValue = pDVar12->_currentValue;
        uStack_1 = 4;
        pOStack_13 = (Object *)(auStack_11 + 0x10);
        while( true ) {
          bVar14 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                              *)(auStack_11 + 0x10),
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                            );
          if (bVar14 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)(auStack_11 + 0x10),
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                       ,method_01);
            *unaff_FS_OFFSET = uStack_3;
            return (List_1_Boost_ *)this_01;
          }
          _Stack_28 = (_union_154)DStack_7._currentValue;
          bVar15 = false;
          iStack_8 = 0;
          if (this_01 == (MethodInfo *)0x0) break;
          for (; iStack_8 < (int)this_01->name; iStack_8 = iStack_8 + 1) {
            RVar16 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               this_01,iStack_8,
                               MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_)
            ;
            if (RVar16 == (RegexCharClass_SingleRange)0x0) goto code_?;
            if (_Stack_28.rgctx_data == (Il2CppRGCTXData *)0x0) goto code_?;
            if (*(void **)((int)RVar16 + 8) == _Stack_28.rgctx_data[2].rgctxDataDummy) {
              bVar15 = true;
            }
          }
          if (!bVar15) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_01,(Object *)_Stack_28.methodMetadataHandle,
                       MethodInfo__System__Collections__Generic__List<Boost>__Add_Boost_);
          }
        }
        break;
      }
      pDVar12 = mscorlib.dll::System::Collections::Generic::
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
      DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar12->_dictionary;
      DStack_7._index = pDVar12->_index;
      DStack_7._version = pDVar12->_version;
      DStack_7._currentValue = pDVar12->_currentValue;
      uStack_1 = 1;
      pOStack_13 = (Object *)(auStack_11 + 0x10);
      while( true ) {
        bVar14 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                            *)(auStack_11 + 0x10),
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                          );
        if (bVar14 == 0) break;
        _Stack_28.rgctx_data = (Il2CppRGCTXData *)DStack_7._currentValue;
        if ((Il2CppRGCTXData *)DStack_7._currentValue == (Il2CppRGCTXData *)0x0)
        goto code_?;
        RStack_17 = (RegexCharClass_SingleRange)
                    ((Il2CppRGCTXData *)((int)DStack_7._currentValue + 8))->rgctxDataDummy;
        if ((boostController == (BoostController *)0x0) ||
           (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                      (boostController->fields).boostPriorityList,
           this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
        goto code_?;
        RVar16 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,iStack_8,
                           MethodInfo__System__Collections__Generic__List<BoostType>__get_Item_int_)
        ;
        if (RStack_17 == RVar16) {
          if (this_01 == (MethodInfo *)0x0) goto code_?;
          method_00 = this_01;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_01,(Object *)_Stack_28.methodMetadataHandle,
                     MethodInfo__System__Collections__Generic__List<Boost>__Add_Boost_);
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)(auStack_11 + 0x10),
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                 ,method_00);
      iStack_8 = iStack_8 + 1;
      uStack_1 = 0xffffffff;
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  pLVar19 = (List_1_Boost_ *)(*pcVar18)();
  return pLVar19;
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
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_00 != (MVNetworkGame *)0x0) &&
      (pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar1 != (MVLocalPlayer *)0x0)) &&
     (pBVar2 = (pMVar1->fields).boostController, pBVar2 != (BoostController *)0x0)) {
    boosts = BoostController::BoostController_GetAllBoosts(pBVar2,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_01 != (MVWorldObjectClientManager *)0x0) &&
        (this_02 = (MVGameOptionDataObject *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                             (this_01,
                              MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                             ), this_02 != (MVGameOptionDataObject *)0x0)) &&
       (this_03 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                            (this_02,(MethodInfo *)0x0),
       this_03 != (GameBoosterSettingsManager *)0x0)) {
      this_04 = (MethodInfo *)
                MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                GameBoosterSettings::GameBoosterSettingsManager::
                GameBoosterSettingsManager_get_ActiveSettingsList(this_03,(MethodInfo *)0x0);
      pBVar2 = (BoostController *)
               BoostMenuController_GetSortedBoosts
                         ((BoostMenuController *)this_04,boosts,pBVar2,(MethodInfo *)0x0);
      index_00 = 0;
      if (pBVar2 != (BoostController *)0x0) {
        while( true ) {
          if ((int)(pBVar2->fields).onBoostTypeUpdate <= index_00) {
            layoutRoot = (this->fields).boostItemsContent;
            if ((TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__UI__LayoutRebuilder);
            }
            UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
            LayoutRebuilder_ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__BoostMenuController___FixContentPivot_d__9);
              cRam_? = '\x01';
            }
            method_00 = TypeInfo__BoostMenuController___FixContentPivot_d__9;
            value = (Object *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
            value[1].klass = (Object__Class *)0x0;
            value[2].klass = (Object__Class *)this;
            func_?(value + 2,this);
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_StartCoroutine_Auto
                      ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
            return;
          }
          index = 0;
          if (this_04 == (MethodInfo *)0x0) break;
          for (; index < (int)this_04->name; index = index + 1) {
            this_06 = pBVar2;
            this_04 = MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_;
            RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               pBVar2,index_00,
                               MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_)
            ;
            if (RVar3 == (RegexCharClass_SingleRange)0x0) goto code_?;
            if (*(char *)((int)RVar3 + 0x18) != '\0') {
              this = (BoostMenuController *)&UNK_?;
              pBVar4 = pBVar2;
              RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)pBVar2,index_00,
                                 MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_
                                );
              if (RVar3 == (RegexCharClass_SingleRange)0x0) goto code_?;
              a = *(String **)((int)RVar3 + 0xc);
              this_04 = (MethodInfo *)this;
              RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)this,index,
                                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                                );
              if (RVar3 == (RegexCharClass_SingleRange)0x0) goto code_?;
              bVar5 = mscorlib.dll::System::String::String_op_Equality
                                (a,*(String **)((int)RVar3 + 0xc),(MethodInfo *)0x0);
              if (bVar5 != 0) {
                original = ((MethodInfo *)this)->klass;
                parent = (Transform *)((MethodInfo *)this)->parameters;
                pBVar2 = pBVar4;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                  pBVar2 = pBVar4;
                }
                this_05 = (BoostMenuItem *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                    ((Object *)original,parent,0,
                                     BoostMenuItem_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuItem>_BoostMenuItem__UnityEngine__Transform__bool_
                                    );
                RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)pBVar2,index_00,
                                   MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_
                                  );
                RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)pBVar2,index_00,
                                   MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_
                                  );
                if ((RVar6 == (RegexCharClass_SingleRange)0x0) ||
                   (bVar5 = BoostController::BoostController_IsBoostActive
                                      (this_06,*(BoostType__Enum *)((int)RVar6 + 8),
                                       (MethodInfo *)0x0), this_05 == (BoostMenuItem *)0x0))
                goto code_?;
                BoostMenuItem::BoostMenuItem_Initialize
                          (this_05,(Boost *)RVar3,bVar5,(MethodInfo *)0x0);
              }
            }
          }
          index_00 = index_00 + 1;
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
        func_?();
      }
      object = TypeInfo__BoostMenuController____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
      EStack_1.monitor = (MonitorData *)&UNK_?;
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
code_?:
    if ((this->fields).boostUnlockedCallback != (Action_1_Boolean_ *)0x0) {
      pAVar2 = (this->fields).boostUnlockedCallback;
      pvStack3 = (pAVar2->fields)._._.method;
      uStack4 = _adWasSuccessful;
      (*(pAVar2->fields)._._.invoke_impl)();
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
      EStack_1.klass = (Enum__Class *)TypeInfo__BoostType;
      EStack_1.monitor = (MonitorData *)0xffffffff;
      pSVar6 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Ad_RewardRequest_Booster_,pSVar6,(MethodInfo *)0x0);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
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
        func_?();
      }
      object = TypeInfo__BoostMenuController____c->static_fields->__9;
      callbackFunction = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)func_?();
      EStack_1.monitor = (MonitorData *)&UNK_?;
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
code_?:
    if ((this->fields).boostUnlockedCallback != (Action_1_Boolean_ *)0x0) {
      pAVar2 = (this->fields).boostUnlockedCallback;
      pvStack3 = (pAVar2->fields)._._.method;
      uStack4 = (uint)(obj == RewardedAdResult__Enum_RewardUnlocked);
      (*(pAVar2->fields)._._.invoke_impl)();
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
      EStack_1.klass = (Enum__Class *)TypeInfo__BoostType;
      EStack_1.monitor = (MonitorData *)0xffffffff;
      pSVar6 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_1,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Ad_RewardRequest_Booster_,pSVar6,(MethodInfo *)0x0);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
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
  (this->fields).boostUnlockedCallback = OnUnlockedCallback;
  func_?(&(this->fields).boostUnlockedCallback,OnUnlockedCallback);
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
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
  if (pIVar1 != (IAdManager *)0x0) {
    cVar2 = func_?(4,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1);
    if (cVar2 == '\0') {
      BoostMenuController_OnAdFinished(this,0,(MethodInfo *)0x0);
      return;
    }
    pIVar1 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    this_00 = (UnityAction_1_System_Int32Enum_ *)
              func_?(
                             TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_00,(Object *)this,
               MethodInfo__BoostMenuController__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
               ,(MethodInfo *)0x0);
    if (pIVar1 != (IAdManager *)0x0) {
      func_?(6,TypeInfo__Assets__Scripts__AdIntegration__IAdManager,pIVar1,this_00,1);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

