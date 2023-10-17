
/* IEnumerator FixContentPivot() */

IEnumerator *
Assembly-CSharp.dll::BoostMenuController::BoostMenuController_FixContentPivot
          (BoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BoostMenuController___FixContentPivot_d__9);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__BoostMenuController___FixContentPivot_d__9);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
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
  DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_7._index = 0;
  DStack_7._version = 0;
  DStack_7._currentValue = (Object *)0x0;
  pMVar8 = (MethodInfo *)func_?(TypeInfo__System__Collections__Generic__List<Boost>);
  pMStack_9 = pMVar8;
  if (pMVar8 != (MethodInfo *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pMVar8,
               MethodInfo__System__Collections__Generic__List<Boost>__List__);
    uStack_10 = 0;
    pMStack_11 = pMVar8;
    if (boostController != (BoostController *)0x0) {
      while ((pLVar12 = (boostController->fields).boostPriorityList,
             pLVar12 != (List_1_BoostType_ *)0x0 &&
             (pDStack_5 != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0))) {
        if ((pLVar12->fields)._size <= (int)uStack_10) {
          pMVar8 = 
          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
          ;
          pDVar13 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                   Regex+CachedCodeEntryKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)&stack0xffffffa8,
                              (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                               *)boosts,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                             );
          uStack_14 = 0;
          DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar13->_dictionary;
          DStack_7._index = pDVar13->_index;
          DStack_7._version = pDVar13->_version;
          DStack_7._currentValue = pDVar13->_currentValue;
          uStack_1 = 4;
          pDStack_15 = &DStack_7;
          do {
            bVar16 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    Object,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              (&DStack_7,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                              );
            if (bVar16 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)&DStack_7,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                         ,pMVar8);
              *unaff_FS_OFFSET = uStack_3;
              return (List_1_Boost_ *)pMStack_9;
            }
            RStack_17 = (RegexCharClass_SingleRange)DStack_7._currentValue;
            uStack_10 = (uint)extraout_var << 8;
            index = 0;
            while( true ) {
              if ((int)pMStack_9->name <= index) break;
              RVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)pMStack_9,index,
                                 MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_
                                );
              if (RVar18 == (RegexCharClass_SingleRange)0x0) goto code_?;
              if (RStack_17 == (RegexCharClass_SingleRange)0x0) goto code_?;
              uStack_10 = uStack_10 & 0xff;
              if (*(int *)((int)RVar18 + 8) == *(int *)((int)RStack_17 + 8)) {
                uStack_10 = 1;
              }
              index = index + 1;
            }
            if ((char)uStack_10 == '\0') {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)pMStack_9,(Object *)RStack_17,
                         MethodInfo__System__Collections__Generic__List<Boost>__Add_Boost_);
            }
          } while( true );
        }
        pDVar13 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                 Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                             *)&stack0xffffffa8,
                            (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                             *)boosts,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                           );
        uStack_14 = 0;
        DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar13->_dictionary;
        DStack_7._index = pDVar13->_index;
        DStack_7._version = pDVar13->_version;
        DStack_7._currentValue = pDVar13->_currentValue;
        uStack_1 = 1;
        pDStack_15 = &DStack_7;
        while( true ) {
          bVar16 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  Object,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            (&DStack_7,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                            );
          item = DStack_7._currentValue;
          if (bVar16 == 0) break;
          if ((RegexCharClass_SingleRange)DStack_7._currentValue == (RegexCharClass_SingleRange)0x0
             ) goto code_?;
          RStack_17 = *(RegexCharClass_SingleRange *)((int)DStack_7._currentValue + 8);
          if ((boostController == (BoostController *)0x0) ||
             (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        (boostController->fields).boostPriorityList,
             this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
          goto code_?;
          RVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,uStack_10,
                             MethodInfo__System__Collections__Generic__List<BoostType>__get_Item_int_
                            );
          if (RStack_17 == RVar18) {
            unaff_EBX = pMStack_9;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pMStack_9,item,
                       MethodInfo__System__Collections__Generic__List<Boost>__Add_Boost_);
          }
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&DStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                   ,unaff_EBX);
        uStack_10 = uStack_10 + 1;
        uStack_1 = 0xffffffff;
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
  pcVar19 = (code *)swi(3);
  pLVar20 = (List_1_Boost_ *)(*pcVar19)();
  return pLVar20;
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
      pMVar3 = (MethodInfo *)
               MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
               GameBoosterSettings::GameBoosterSettingsManager::
               GameBoosterSettingsManager_get_ActiveSettingsList(this_03,(MethodInfo *)0x0);
      pBVar2 = (BoostController *)
               BoostMenuController_GetSortedBoosts
                         ((BoostMenuController *)pMVar3,boosts,pBVar2,(MethodInfo *)0x0);
      index_00 = 0;
      if (pBVar2 != (BoostController *)0x0) {
        for (; index_00 < (int)(pBVar2->fields).onBoostTypeUpdate; index_00 = index_00 + 1) {
          index = 0;
          if (pMVar3 == (MethodInfo *)0x0) goto code_?;
          for (; index < (int)pMVar3->name; index = index + 1) {
            this_05 = pBVar2;
            pMVar3 = MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_;
            RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               pBVar2,index_00,
                               MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_)
            ;
            if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
            if (*(char *)((int)RVar4 + 0x18) != '\0') {
              this = (BoostMenuController *)&UNK_?;
              pBVar5 = pBVar2;
              RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)pBVar2,index_00,
                                 MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_
                                );
              if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
              a = *(String **)((int)RVar4 + 0xc);
              pMVar3 = (MethodInfo *)this;
              RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)this,index,
                                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                                );
              if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
              bVar6 = mscorlib.dll::System::String::String_op_Equality
                                (a,*(String **)((int)RVar4 + 8),(MethodInfo *)0x0);
              if (bVar6 != 0) {
                parent = (Transform *)((MethodInfo *)this)->return_type;
                pOVar7 = (Object *)((MethodInfo *)this)->name;
                pBVar2 = pBVar5;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                  pBVar2 = pBVar5;
                }
                this_04 = (BoostMenuItem *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                    (pOVar7,parent,0,
                                     BoostMenuItem_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuItem>_BoostMenuItem__UnityEngine__Transform__bool_
                                    );
                RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)pBVar2,index_00,
                                   MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_
                                  );
                RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)pBVar2,index_00,
                                   MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_
                                  );
                if ((RVar8 == (RegexCharClass_SingleRange)0x0) ||
                   (bVar6 = BoostController::BoostController_IsBoostActive
                                      (this_05,*(BoostType__Enum *)((int)RVar8 + 8),
                                       (MethodInfo *)0x0), this_04 == (BoostMenuItem *)0x0))
                goto code_?;
                BoostMenuItem::BoostMenuItem_Initialize
                          (this_04,(Boost *)RVar4,bVar6,(MethodInfo *)0x0);
              }
            }
          }
        }
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
        pMVar3 = (MethodInfo *)&UNK_?;
        pOVar7 = (Object *)func_?(TypeInfo__BoostMenuController___FixContentPivot_d__9);
        if (pOVar7 != (Object *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (pOVar7,ExceptionArgument__Enum_obj,pMVar3);
          pOVar7[1].klass = (Object__Class *)0x0;
          pOVar7[2].klass = (Object__Class *)this;
          func_?(pOVar7 + 2,this);
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                    ((MonoBehaviour *)this,(IEnumerator *)pOVar7,(MethodInfo *)0x0);
          return;
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
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__BoostMenuController____c___OnAdFinished_b__8_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__BoostMenuController____c->static_fields->__9__8_0 = callbackFunction;
      func_?(&TypeInfo__BoostMenuController____c->static_fields->__9__8_0);
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
      pAVar1 = (this->fields).boostUnlockedCallback;
      pvStack2 = (pAVar1->fields)._._.method;
      uStack3 = _adWasSuccessful;
      (*(pAVar1->fields)._._.invoke_impl)();
    }
    return;
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if ((pMVar4 != (MVLocalPlayer *)0x0) &&
       (this_00 = (pMVar4->fields).boostController, this_00 != (BoostController *)0x0)) {
      BoostController::BoostController_ActivateBoost
                (this_00,(this->fields).adRewardType,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffe8,(MethodInfo *)0x0)
      ;
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Ad_RewardRequest_Booster_,pSVar5,(MethodInfo *)0x0);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      _adWasSuccessful = 0;
      StatHatWrapper::StatHatWrapper_Count(pSVar5,1,(MethodInfo *)0x0);
      goto code_?;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::BoostMenuController::BoostMenuController_RewardedAdCallback
               (BoostMenuController *this,RewardedAdResult__Enum obj,MethodInfo *method)

{
  bVar1 = obj == RewardedAdResult__Enum_RewardUnlocked;
  obj = (RewardedAdResult__Enum)bVar1;
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
  if (!bVar1) {
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
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                          );
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__BoostMenuController____c___OnAdFinished_b__8_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__BoostMenuController____c->static_fields->__9__8_0 = callbackFunction;
      func_?(&TypeInfo__BoostMenuController____c->static_fields->__9__8_0);
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
      RStack4 = obj;
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
      pSVar6 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffe8,(MethodInfo *)0x0)
      ;
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Ad_RewardRequest_Booster_,pSVar6,(MethodInfo *)0x0);
      if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      obj = RewardedAdResult__Enum_ErrorClient;
      StatHatWrapper::StatHatWrapper_Count(pSVar6,1,(MethodInfo *)0x0);
      goto code_?;
    }
  }
code_?:
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
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
      (IEditModeUI *)0x0) {
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
      if (this_00 != (UnityAction_1_System_Int32Enum_ *)0x0) {
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
    }
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  BoostMenuController_OnAdFinished(this,1,(MethodInfo *)0x0);
  return;
}

