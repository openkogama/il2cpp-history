
/* Void ActivateBoost(BoostType) */

void Assembly-CSharp.dll::BoostController::BoostController_ActivateBoost
               (BoostController *this,BoostType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BoostController);
    func_?(&TypeInfo__BoostType);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__set_Item_BoostType__Boost_
                   );
    func_?(&StringLiteral_Boost__);
    func_?(&StringLiteral___Active_boosts__);
    func_?(&StringLiteral_Trying_to_activate_boost__but_bo);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).activeBoosts;
  if (pDVar1 != (Dictionary_2_BoostType_Boost_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,type,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).activeBoosts;
      if ((TypeInfo__BoostController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BoostController);
      }
      this_00 = TypeInfo__BoostController->static_fields->boosts;
      if (this_00 != (Dictionary_2_BoostType_Boost_ *)0x0) {
        value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,type,
                           MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                          );
        if (pDVar1 != (Dictionary_2_BoostType_Boost_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__set_Item
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,type,value,
                     MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__set_Item_BoostType__Boost_
                    );
          BoostController_BoostUpdated(this,type,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pSVar3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0)
      ;
      pDVar1 = (this->fields).activeBoosts;
      if (pDVar1 != (Dictionary_2_BoostType_Boost_ *)0x0) {
        str3 = (String *)(*(code *)(pDVar1->klass->vtable).ToString.method)();
        pSVar3 = mscorlib.dll::System::String::String_Concat_5
                           (StringLiteral_Boost__,pSVar3,StringLiteral___Active_boosts__,str3,
                            (MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)pSVar3,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Trying_to_activate_boost__but_bo,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AllowBoost(BoostType, Boolean) */

void Assembly-CSharp.dll::BoostController::BoostController_AllowBoost
               (BoostController *this,BoostType__Enum boost,bool allowed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BoostController);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__BoostController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BoostController);
  }
  pDVar1 = TypeInfo__BoostController->static_fields->boosts;
  if (pDVar1 != (Dictionary_2_BoostType_Boost_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,boost,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                      );
    if (bVar2 != 0) {
      if ((TypeInfo__BoostController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BoostController);
      }
      pDVar1 = TypeInfo__BoostController->static_fields->boosts;
      if ((pDVar1 == (Dictionary_2_BoostType_Boost_ *)0x0) ||
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,boost,
                              MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                             ), pOVar3 == (Object *)0x0)) goto code_?;
      *(bool *)&pOVar3[3].klass = allowed;
    }
    pDVar1 = (this->fields).activeBoosts;
    if (pDVar1 != (Dictionary_2_BoostType_Boost_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,boost,
                         MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                        );
      if (bVar2 == 0) {
        return;
      }
      pDVar1 = (this->fields).activeBoosts;
      if ((pDVar1 != (Dictionary_2_BoostType_Boost_ *)0x0) &&
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,boost,
                              MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                             ), pOVar3 != (Object *)0x0)) {
        *(bool *)&pOVar3[3].klass = allowed;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void BoostUpdated(BoostType) */

void Assembly-CSharp.dll::BoostController::BoostController_BoostUpdated
               (BoostController *this,BoostType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).onBoostTypeUpdate;
  if (pDVar1 != (Dictionary_2_BoostType_System_Action_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,type,
                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                       );
    if (pOVar2 == (Object *)0x0) {
code_?:
      pAVar3 = (this->fields).BoostCountChanged;
      if (pAVar3 != (Action *)0x0) {
        (*(pAVar3->fields)._._.invoke_impl)();
      }
      return;
    }
    pDVar1 = (this->fields).onBoostTypeUpdate;
    if (pDVar1 != (Dictionary_2_BoostType_System_Action_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,type,
                          MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                         );
      if (pOVar2 != (Object *)0x0) {
        (*(code *)pOVar2[1].monitor)();
        goto code_?;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Dictionary`2[TKey,TValue]+ValueCollection[BoostType,Boost] GetActiveBoosts() */

Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *
Assembly-CSharp.dll::BoostController::BoostController_GetActiveBoosts
          (BoostController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).activeBoosts;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                       (this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                       );
    return (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)pDVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pDVar5 = (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)(*pcVar4)();
  return pDVar5;
}


/* Dictionary`2[TKey,TValue]+ValueCollection[BoostType,Boost] GetAllBoosts() */

Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *
Assembly-CSharp.dll::BoostController::BoostController_GetAllBoosts
          (BoostController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__BoostController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)TypeInfo__BoostController->static_fields->boosts;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                       (this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                       );
    return (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)pDVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pDVar5 = (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)(*pcVar4)();
  return pDVar5;
}


/* Boolean HasAvailableBoosts() */

bool Assembly-CSharp.dll::BoostController::BoostController_HasAvailableBoosts
               (BoostController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                   );
    func_?(&
                    MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = (MVGameOptionDataObject *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                        (this_00,
                         MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                        );
    pMVar4 = this_01;
    this_02 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)BoostController_GetAllBoosts(this,(MethodInfo *)0x0);
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
      StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)&stack0xffffffc8,this_02,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                );
      uStack_1 = 1;
      method_00.rgctx_data = ((Il2CppRGCTXData *)&stack0xffffffb8).rgctx_data;
      while( true ) {
        this_04 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                   *)&stack0xffffffb8;
        bVar5 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (this_04,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                          );
        if (bVar5 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffb8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                     ,(MethodInfo *)method_00.methodMetadataHandle);
          *unaff_FS_OFFSET = uStack_3;
          return 0;
        }
        if ((this_01 == (MVGameOptionDataObject *)0x0) ||
           (method_00.methodMetadataHandle =
                 (Il2CppMetadataMethodDefinitionHandle)
                 MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                           (this_01,(MethodInfo *)0x0),
           method_00.rgctx_data == (Il2CppRGCTXData *)0x0)) break;
        this_03 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                  GameBoosterSettings::GameBoosterSettingsManager::
                  GameBoosterSettingsManager_get_ActiveSettingsList
                            ((GameBoosterSettingsManager *)method_00.methodMetadataHandle,
                             (MethodInfo *)0x0);
        index = 0;
        this_01 = pMVar4;
        while( true ) {
          if (this_03 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          goto code_?;
          pMVar4 = this_01;
          if ((this_03->fields)._size <= index) break;
          if (this_04 ==
              (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
               *)0x0) goto code_?;
          method_01 = (MethodInfo *)this_04->_currentValue;
          RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_03,index,
                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                            );
          if (RVar6 == (RegexCharClass_SingleRange)0x0) goto code_?;
          method_00.rgctx_data = (Il2CppRGCTXData *)0x0;
          bVar5 = mscorlib.dll::System::String::String_op_Equality
                            ((String *)method_01,*(String **)((int)RVar6 + 0xc),(MethodInfo *)0x0);
          if (bVar5 != 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&stack0xffffffb8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                       ,method_01);
            *unaff_FS_OFFSET = uStack_3;
            return 1;
          }
          index = index + 1;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* Boolean IsBoostActive(BoostType) */

bool Assembly-CSharp.dll::BoostController::BoostController_IsBoostActive
               (BoostController *this,BoostType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).activeBoosts;
  if (this_00 != (Dictionary_2_BoostType_Boost_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)this_00,type,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void RemoveAllBoosts() */

void Assembly-CSharp.dll::BoostController::BoostController_RemoveAllBoosts
               (BoostController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Remove_BoostType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                   );
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
    func_?(&MethodInfo__System__Collections__Generic__List<Boost>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<Boost>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).activeBoosts;
  if ((this_00 !=
       (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0) &&
     (this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                          ),
     this_02 !=
     (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
      *)0x0)) {
    method_00 = (MethodInfo *)&UNK_?;
    pDVar4 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
             StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)&stack0xffffffd4,this_02,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                       );
    item = pDVar4->_currentValue;
    uStack_1 = 1;
    while (bVar5 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                   UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                               *)&stack0xffffffc4,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                             ), bVar5 != 0) {
      pLVar6 = (this->fields).removeList;
      if (pLVar6 == (List_1_Boost_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar6,item,
                 MethodInfo__System__Collections__Generic__List<Boost>__Add_Boost_);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffc4,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    pLVar6 = (this->fields).removeList;
    iVar7 = 0;
    if (pLVar6 != (List_1_Boost_ *)0x0) {
      while (iVar7 < (pLVar6->fields)._size) {
        this_01 = (this->fields).activeBoosts;
        pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).removeList;
        if (((pLVar8 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
            (RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar8,iVar7,
                                MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_
                               ), RVar9 == (RegexCharClass_SingleRange)0x0)) ||
           (this_01 == (Dictionary_2_BoostType_Boost_ *)0x0)) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__Remove
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,
                   *(Int32Enum__Enum *)((int)RVar9 + 8),
                   MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Remove_BoostType_
                  );
        pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).removeList;
        if ((pLVar8 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar8,iVar7,
                               MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_)
           , RVar9 == (RegexCharClass_SingleRange)0x0)) goto code_?;
        BoostController_BoostUpdated(this,*(BoostType__Enum *)((int)RVar9 + 8),(MethodInfo *)0x0);
        pLVar6 = (this->fields).removeList;
        iVar7 = iVar7 + 1;
        if (pLVar6 == (List_1_Boost_ *)0x0) goto code_?;
      }
      pLVar6 = (this->fields).removeList;
      if (pLVar6 != (List_1_Boost_ *)0x0) {
        iVar7 = (pLVar6->fields)._size;
        piVar10 = &(pLVar6->fields)._version;
        *piVar10 = *piVar10 + 1;
        (pLVar6->fields)._size = 0;
        if (0 < iVar7) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar6->fields)._items,0,iVar7,(MethodInfo *)0x0);
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  uVar11 = func_?();
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SubscribeToBoostChanged(BoostType, Action) */

void Assembly-CSharp.dll::BoostController::BoostController_SubscribeToBoostChanged
               (BoostController *this,BoostType__Enum type,Action *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__set_Item_BoostType__System__Action_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).onBoostTypeUpdate;
  if (this_00 != (Dictionary_2_BoostType_System_Action_ *)0x0) {
    pDVar1 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,type,
                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                       );
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       (pDVar1,(Delegate *)callback,(MethodInfo *)0x0);
    pDVar1 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
        pDVar1 = pDVar2;
      }
      if (pDVar1 == (Delegate *)0x0) goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__set_Item
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,(Int32Enum__Enum)pDVar1,
               (Object *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__set_Item_BoostType__System__Action_
              );
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean TryGetActiveBoost(BoostType, Boost ByRef) */

bool Assembly-CSharp.dll::BoostController::BoostController_TryGetActiveBoost
               (BoostController *this,BoostType__Enum type,Boost **boost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).activeBoosts;
  if (pDVar1 != (Dictionary_2_BoostType_Boost_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,type,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                      );
    if (bVar2 == 0) {
      *boost = (Boost *)0x0;
      func_?(boost);
      return 0;
    }
    pDVar1 = (this->fields).activeBoosts;
    if (pDVar1 != (Dictionary_2_BoostType_Boost_ *)0x0) {
      pBVar3 = (Boost *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,type,
                                   MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                                  );
      *boost = pBVar3;
      func_?(boost);
      return 1;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Boolean TryGetBoost(BoostType, Boost ByRef) */

bool Assembly-CSharp.dll::BoostController::BoostController_TryGetBoost
               (BoostController *this,BoostType__Enum type,Boost **boost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__BoostController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pDVar1 = TypeInfo__BoostController->static_fields->boosts;
  if (pDVar1 != (Dictionary_2_BoostType_Boost_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,type,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                      );
    if (bVar2 == 0) {
      *boost = (Boost *)0x0;
      func_?();
      return 0;
    }
    if ((TypeInfo__BoostController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pDVar1 = TypeInfo__BoostController->static_fields->boosts;
    if (pDVar1 != (Dictionary_2_BoostType_Boost_ *)0x0) {
      pBVar3 = (Boost *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,type,
                                   MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                                  );
      *boost = pBVar3;
      func_?();
      return 1;
    }
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Void UnSubscribeToBoostChanged(BoostType, Action) */

void Assembly-CSharp.dll::BoostController::BoostController_UnSubscribeToBoostChanged
               (BoostController *this,BoostType__Enum type,Action *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__set_Item_BoostType__System__Action_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).onBoostTypeUpdate;
  if (this_00 != (Dictionary_2_BoostType_System_Action_ *)0x0) {
    pDVar1 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,type,
                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__get_Item_BoostType_
                       );
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar1,(Delegate *)callback,(MethodInfo *)0x0);
    pDVar1 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
        pDVar1 = pDVar2;
      }
      if (pDVar1 == (Delegate *)0x0) goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__set_Item
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,(Int32Enum__Enum)pDVar1,
               (Object *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__set_Item_BoostType__System__Action_
              );
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* BoostController() */

void Assembly-CSharp.dll::BoostController::BoostController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BoostController);
    func_?(&TypeInfo__Boost);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>);
    func_?(&StringLiteral_JumpPower);
    func_?(&StringLiteral___0___Speed);
    func_?(&StringLiteral_X_ray_vision);
    func_?(&StringLiteral___0___Jump);
    func_?(&StringLiteral_Coins);
    func_?(&StringLiteral_XRayVision);
    func_?(&StringLiteral_Poison_Resist);
    func_?(&StringLiteral_Ammo);
    func_?(&StringLiteral_PoisonResist);
    func_?(&StringLiteral_Ammo_Percentage);
    func_?(&StringLiteral_Speed_Percentage);
    func_?(&StringLiteral_Speed);
    func_?(&StringLiteral___0___HP);
    func_?(&StringLiteral_Jump);
    func_?(&StringLiteral_Health);
    func_?(&StringLiteral_x2_Ammo);
    func_?(&StringLiteral_x2_Gamecoins);
    func_?(&StringLiteral_Jump_Percentage);
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_Coin_Percentage);
    func_?(&StringLiteral_HP_Percentage);
    func_?(&StringLiteral___0___Poison_Resist);
    func_?(&StringLiteral_GameCoinBoost);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         func_?(TypeInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Dictionary__);
  pSVar1 = TM::TM__(StringLiteral_X_ray_vision,(MethodInfo *)0x0);
  pSVar2 = TM::TM__(StringLiteral_X_ray_vision,(MethodInfo *)0x0);
  pBVar3 = TypeInfo__Boost;
  pOVar4 = (Object *)func_?();
  pSVar5 = ::StringLiteral__;
  pSVar6 = StringLiteral_XRayVision;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar4,ExceptionArgument__Enum_obj,(MethodInfo *)pBVar3);
  pOVar4[1].klass = (Object__Class *)0x4;
  pOVar4[1].monitor = (MonitorData *)pSVar6;
  func_?(&pOVar4[1].monitor,pSVar6);
  pOVar4[3].monitor = (MonitorData *)pSVar1;
  func_?(&pOVar4[3].monitor,pSVar1);
  pOVar4[2].klass = (Object__Class *)pSVar5;
  func_?(pOVar4 + 2,pSVar5);
  pOVar4[2].monitor = (MonitorData *)pSVar2;
  this_01 = (Dictionary_2_System_Int32Enum_System_Object_ *)&UNK_?;
  func_?(&pOVar4[2].monitor);
  *(undefined1 *)&pOVar4[3].klass = 1;
  if (this_01 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              (this_01,4,pOVar4,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
              );
    pSVar5 = TM::TM__(StringLiteral_x2_Ammo,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)TM::TM__(StringLiteral_Ammo_Percentage,(MethodInfo *)0x0);
    TM::TM__(StringLiteral_Ammo,(MethodInfo *)0x0);
    pBVar3 = TypeInfo__Boost;
    pOVar4 = (Object *)func_?();
    pSVar6 = StringLiteral_Ammo;
    puVar8 = &UNK_?;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar4,ExceptionArgument__Enum_obj,(MethodInfo *)pBVar3);
    *(undefined4 *)(puVar8 + 8) = 0;
    this_00 = (Dictionary_2_BoostType_Boost_ *)(puVar8 + 0xc);
    this_00->klass = (Dictionary_2_BoostType_Boost___Class *)pSVar6;
    pOVar4 = (Object *)&UNK_?;
    func_?(this_00,pSVar6);
    pMVar9 = (MonitorData *)&pOVar4[3].monitor;
    *(String **)pMVar9 = pSVar5;
    func_?(pMVar9,pSVar5);
    pOVar4[2].klass = pOVar7;
    pOStack10 = pOVar4 + 2;
    pOStack11 = pOVar7;
    func_?();
    pMStack12 = pMVar9;
    ppMStack13 = &pOVar4[2].monitor;
    *ppMStack13 = pMStack12;
    func_?();
    *(undefined1 *)&pOVar4[3].klass = 0;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,pOVar4,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
              );
    pSVar1 = TM::TM__(StringLiteral___0___Speed,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)TM::TM__(StringLiteral_Speed_Percentage,(MethodInfo *)0x0);
    pSVar5 = TM::TM__(StringLiteral_Speed,(MethodInfo *)0x0);
    pBVar3 = TypeInfo__Boost;
    pOVar4 = (Object *)func_?();
    pSVar6 = StringLiteral_Speed;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar4,ExceptionArgument__Enum_obj,(MethodInfo *)pBVar3);
    pOVar4[1].klass = (Object__Class *)0x1;
    pSStack14 = pSVar6;
    pOVar4[1].monitor = (MonitorData *)pSVar6;
    func_?();
    pOVar4[3].monitor = (MonitorData *)pSVar1;
    func_?();
    pOStack15 = pOVar4 + 2;
    pOStack15->klass = pOVar7;
    func_?();
    pSStack16 = pSVar5;
    ppMStack17 = &pOVar4[2].monitor;
    *ppMStack17 = (MonitorData *)pSStack16;
    func_?();
    *(undefined1 *)&pOVar4[3].klass = 1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,1,pOVar4,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
              );
    pSVar1 = TM::TM__(StringLiteral_x2_Gamecoins,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)TM::TM__(StringLiteral_Coin_Percentage,(MethodInfo *)0x0);
    pSVar5 = TM::TM__(StringLiteral_Coins,(MethodInfo *)0x0);
    pBVar3 = TypeInfo__Boost;
    pOVar4 = (Object *)func_?();
    pSVar6 = StringLiteral_GameCoinBoost;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar4,ExceptionArgument__Enum_obj,(MethodInfo *)pBVar3);
    pOVar4[1].klass = (Object__Class *)0x2;
    pOVar4[1].monitor = (MonitorData *)pSVar6;
    func_?();
    ppMStack18 = &pOVar4[3].monitor;
    *ppMStack18 = (MonitorData *)pSVar1;
    pSStack19 = pSVar1;
    func_?();
    pOStack20 = pOVar4 + 2;
    pOStack20->klass = pOVar7;
    pOStack21 = pOVar7;
    func_?();
    pSStack22 = pSVar5;
    pSStack14 = (String *)&pOVar4[2].monitor;
    *(String **)pSStack14 = pSStack22;
    func_?();
    *(undefined1 *)&pOVar4[3].klass = 0;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,2,pOVar4,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
              );
    pSVar1 = TM::TM__(StringLiteral___0___HP,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)TM::TM__(StringLiteral_HP_Percentage,(MethodInfo *)0x0);
    pSVar5 = TM::TM__(StringLiteral_Health,(MethodInfo *)0x0);
    pBVar3 = TypeInfo__Boost;
    pOVar4 = (Object *)func_?();
    pSVar6 = StringLiteral_Health;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar4,ExceptionArgument__Enum_obj,(MethodInfo *)pBVar3);
    pOVar4[1].klass = (Object__Class *)0x3;
    pOVar4[1].monitor = (MonitorData *)pSVar6;
    func_?();
    ppMStack23 = &pOVar4[3].monitor;
    *ppMStack23 = (MonitorData *)pSVar1;
    pSStack24 = pSVar1;
    func_?();
    pOStack25 = pOVar4 + 2;
    pOStack25->klass = pOVar7;
    pOStack26 = pOVar7;
    func_?();
    pSStack27 = pSVar5;
    pOVar4[2].monitor = (MonitorData *)pSStack27;
    func_?();
    *(undefined1 *)&pOVar4[3].klass = 1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,3,pOVar4,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
              );
    pSVar1 = TM::TM__(StringLiteral___0___Jump,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)TM::TM__(StringLiteral_Jump_Percentage,(MethodInfo *)0x0);
    pSVar5 = TM::TM__(StringLiteral_Jump,(MethodInfo *)0x0);
    pBVar3 = TypeInfo__Boost;
    pOVar4 = (Object *)func_?();
    pSVar6 = StringLiteral_JumpPower;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar4,ExceptionArgument__Enum_obj,(MethodInfo *)pBVar3);
    pOVar4[1].klass = (Object__Class *)0x5;
    pOVar4[1].monitor = (MonitorData *)pSVar6;
    func_?();
    ppMStack28 = &pOVar4[3].monitor;
    *ppMStack28 = (MonitorData *)pSVar1;
    func_?();
    pOVar4[2].klass = pOVar7;
    pOStack29 = pOVar4 + 2;
    pOStack30 = pOVar7;
    func_?();
    pSStack31 = pSVar5;
    ppMStack32 = &pOVar4[2].monitor;
    *ppMStack32 = (MonitorData *)pSStack31;
    func_?();
    *(undefined1 *)&pOVar4[3].klass = 1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,5,pOVar4,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
              );
    pSVar1 = TM::TM__(StringLiteral___0___Poison_Resist,(MethodInfo *)0x0);
    pOVar7 = (Object__Class *)TM::TM__(StringLiteral_Poison_Resist,(MethodInfo *)0x0);
    pSVar5 = TM::TM__(StringLiteral_Poison_Resist,(MethodInfo *)0x0);
    pBVar3 = TypeInfo__Boost;
    pOVar4 = (Object *)func_?();
    pSVar6 = StringLiteral_PoisonResist;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar4,ExceptionArgument__Enum_obj,(MethodInfo *)pBVar3);
    pOVar4[1].klass = (Object__Class *)0x6;
    ppMStack33 = &pOVar4[1].monitor;
    pSStack34 = pSVar6;
    *ppMStack33 = (MonitorData *)pSVar6;
    func_?();
    ppMStack35 = &pOVar4[3].monitor;
    *ppMStack35 = (MonitorData *)pSVar1;
    pSStack36 = pSVar1;
    func_?();
    pOStack37 = pOVar4 + 2;
    pOStack37->klass = pOVar7;
    pOStack38 = pOVar7;
    func_?();
    pSStack39 = pSVar5;
    ppMStack40 = &pOVar4[2].monitor;
    *ppMStack40 = (MonitorData *)pSStack39;
    func_?();
    *(undefined1 *)&pOVar4[3].klass = 1;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,6,pOVar4,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
              );
    TypeInfo__BoostController->static_fields->boosts = this_00;
    func_?();
    return;
  }
  func_?();
  pcVar41 = (code *)swi(3);
  (*pcVar41)();
  return;
}


/* BoostController() */

void Assembly-CSharp.dll::BoostController::BoostController__ctor
               (BoostController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>);
    func_?(&MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_);
    func_?(&MethodInfo__System__Collections__Generic__List<BoostType>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<Boost>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<Boost>);
    func_?(&TypeInfo__System__Collections__Generic__List<BoostType>);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Dictionary__
            );
  if (pDVar1 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,0,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,1,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,2,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,3,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,4,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,5,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__Add
              ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,6,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    (this->fields).onBoostTypeUpdate = (Dictionary_2_BoostType_System_Action_ *)pDVar1;
    func_?();
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)func_?()
    ;
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
               MethodInfo__System__Collections__Generic__List<BoostType>__List__);
    pMVar2 = MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      piVar3 = &(this_00->fields)._version;
      *piVar3 = *piVar3 + 1;
      pRVar4 = (this_00->fields)._items;
      if (pRVar4 != (RegexCharClass_SingleRange__Array *)0x0) {
        uVar5 = (this_00->fields)._size;
        if (uVar5 < pRVar4->max_length) {
          (this_00->fields)._size = uVar5 + 1;
          if (pRVar4->max_length <= uVar5) goto code_?;
          pRVar4->vector[uVar5].First = 3;
          pRVar4->vector[uVar5].Last = 0;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                    (this_00,(RegexCharClass_SingleRange)0x3,pMVar2->klass->rgctx_data[0xe].method);
        }
        pMVar2 = MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_;
        piVar3 = &(this_00->fields)._version;
        *piVar3 = *piVar3 + 1;
        pRVar4 = (this_00->fields)._items;
        if (pRVar4 != (RegexCharClass_SingleRange__Array *)0x0) {
          uVar5 = (this_00->fields)._size;
          if (uVar5 < pRVar4->max_length) {
            (this_00->fields)._size = uVar5 + 1;
            if (pRVar4->max_length <= uVar5) goto code_?;
            pRVar4->vector[uVar5].First = 1;
            pRVar4->vector[uVar5].Last = 0;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                      (this_00,(RegexCharClass_SingleRange)0x1,pMVar2->klass->rgctx_data[0xe].method
                      );
          }
          pMVar2 = MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_;
          piVar3 = &(this_00->fields)._version;
          *piVar3 = *piVar3 + 1;
          pRVar4 = (this_00->fields)._items;
          if (pRVar4 != (RegexCharClass_SingleRange__Array *)0x0) {
            uVar5 = (this_00->fields)._size;
            if (uVar5 < pRVar4->max_length) {
              (this_00->fields)._size = uVar5 + 1;
              if (pRVar4->max_length <= uVar5) goto code_?;
              pRVar4->vector[uVar5].First = 0;
              pRVar4->vector[uVar5].Last = 0;
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                        (this_00,(RegexCharClass_SingleRange)0x0,
                         pMVar2->klass->rgctx_data[0xe].method);
            }
            pMVar2 = MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_;
            piVar3 = &(this_00->fields)._version;
            *piVar3 = *piVar3 + 1;
            pRVar4 = (this_00->fields)._items;
            if (pRVar4 != (RegexCharClass_SingleRange__Array *)0x0) {
              uVar5 = (this_00->fields)._size;
              if (uVar5 < pRVar4->max_length) {
                (this_00->fields)._size = uVar5 + 1;
                if (pRVar4->max_length <= uVar5) goto code_?;
                pRVar4->vector[uVar5].First = 5;
                pRVar4->vector[uVar5].Last = 0;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                          (this_00,(RegexCharClass_SingleRange)0x5,
                           pMVar2->klass->rgctx_data[0xe].method);
              }
              pMVar2 = MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_;
              piVar3 = &(this_00->fields)._version;
              *piVar3 = *piVar3 + 1;
              pRVar4 = (this_00->fields)._items;
              if (pRVar4 != (RegexCharClass_SingleRange__Array *)0x0) {
                uVar5 = (this_00->fields)._size;
                if (uVar5 < pRVar4->max_length) {
                  (this_00->fields)._size = uVar5 + 1;
                  if (pRVar4->max_length <= uVar5) goto code_?;
                  pRVar4->vector[uVar5].First = 2;
                  pRVar4->vector[uVar5].Last = 0;
                }
                else {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                            (this_00,(RegexCharClass_SingleRange)0x2,
                             pMVar2->klass->rgctx_data[0xe].method);
                }
                pMVar2 = MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_;
                piVar3 = &(this_00->fields)._version;
                *piVar3 = *piVar3 + 1;
                pRVar4 = (this_00->fields)._items;
                if (pRVar4 != (RegexCharClass_SingleRange__Array *)0x0) {
                  uVar5 = (this_00->fields)._size;
                  if (uVar5 < pRVar4->max_length) {
                    (this_00->fields)._size = uVar5 + 1;
                    if (pRVar4->max_length <= uVar5) goto code_?;
                    pRVar4->vector[uVar5].First = 6;
                    pRVar4->vector[uVar5].Last = 0;
                  }
                  else {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                              (this_00,(RegexCharClass_SingleRange)0x6,
                               pMVar2->klass->rgctx_data[0xe].method);
                  }
                  pMVar2 = MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_
                  ;
                  piVar3 = &(this_00->fields)._version;
                  *piVar3 = *piVar3 + 1;
                  pRVar4 = (this_00->fields)._items;
                  if (pRVar4 != (RegexCharClass_SingleRange__Array *)0x0) {
                    uVar5 = (this_00->fields)._size;
                    if (pRVar4->max_length <= uVar5) {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                (this_00,(RegexCharClass_SingleRange)0x4,
                                 pMVar2->klass->rgctx_data[0xe].method);
code_?:
                      ppLVar6 = &(this->fields).boostPriorityList;
                      *ppLVar6 = (List_1_BoostType_ *)this_00;
                      func_?(ppLVar6,this_00);
                      pDVar1 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_
                                *)func_?(
                                                 TypeInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>
                                                 );
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,GamePassesHighScoreList+HighScoreListData]::
                      Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                                (pDVar1,
                                 MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Dictionary__
                                );
                      ppDVar7 = &(this->fields).activeBoosts;
                      *ppDVar7 = (Dictionary_2_BoostType_Boost_ *)pDVar1;
                      func_?(ppDVar7,pDVar1);
                      this_01 = (List_1_Boost_ *)
                                func_?(TypeInfo__System__Collections__Generic__List<Boost>)
                      ;
                      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::
                      Metadata::__Il2CppFullySharedGenericType]::
                      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                  *)this_01,
                                 MethodInfo__System__Collections__Generic__List<Boost>__List__);
                      pMVar2 = (MethodInfo *)&(this->fields).removeList;
                      *(List_1_Boost_ **)pMVar2 = this_01;
                      func_?(pMVar2,this_01);
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                ((Object *)this,ExceptionArgument__Enum_obj,pMVar2);
                      return;
                    }
                    (this_00->fields)._size = uVar5 + 1;
                    if (uVar5 < pRVar4->max_length) {
                      pRVar4->vector[uVar5].First = 4;
                      pRVar4->vector[uVar5].Last = 0;
                      goto code_?;
                    }
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

