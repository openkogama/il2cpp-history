
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).activeBoosts;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)type,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                      );
    if (bVar1 == 0) {
      this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).activeBoosts;
      if ((TypeInfo__BoostController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BoostController);
      }
      pDVar2 = TypeInfo__BoostController->static_fields->boosts;
      if (pDVar2 != (Dictionary_2_BoostType_Boost_ *)0x0) {
        value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,type,
                           MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                          );
        if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (this_01,(Object *)type,value,
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
      pDVar2 = (this->fields).activeBoosts;
      if (pDVar2 != (Dictionary_2_BoostType_Boost_ *)0x0) {
        str3 = (String *)(*(pDVar2->klass->vtable).ToString.methodPtr)();
        pSVar3 = mscorlib.dll::System::String::String_Concat_5
                           (StringLiteral_Boost__,pSVar3,StringLiteral___Active_boosts__,str3,
                            (MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)pSVar3,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
  pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
           TypeInfo__BoostController->static_fields->boosts;
  if (pDVar1 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (pDVar1,(Object *)boost,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                      );
    if (bVar2 != 0) {
      if ((TypeInfo__BoostController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__BoostController);
      }
      pDVar3 = TypeInfo__BoostController->static_fields->boosts;
      if ((pDVar3 == (Dictionary_2_BoostType_Boost_ *)0x0) ||
         (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,boost,
                              MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                             ), pOVar4 == (Object *)0x0)) goto code_?;
      *(bool *)&pOVar4[3].klass = allowed;
    }
    pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).activeBoosts;
    if (pDVar1 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (pDVar1,(Object *)boost,
                         MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                        );
      if (bVar2 == 0) {
        return;
      }
      pDVar3 = (this->fields).activeBoosts;
      if ((pDVar3 != (Dictionary_2_BoostType_Boost_ *)0x0) &&
         (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,boost,
                              MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                             ), pOVar4 != (Object *)0x0)) {
        *(bool *)&pOVar4[3].klass = allowed;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
      if ((this->fields).BoostCountChanged != (Action *)0x0) {
        pAVar3 = (this->fields).BoostCountChanged;
        (*(pAVar3->fields)._._.invoke_impl)((pAVar3->fields)._._.method_code);
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
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).activeBoosts;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
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
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            TypeInfo__BoostController->static_fields->boosts;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
             RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
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
    this_02 = (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
               *)BoostController_GetAllBoosts(this,(MethodInfo *)0x0);
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[System::
      Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)&stack0xffffffc8,this_02,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                );
      uStack_1 = 1;
      method_00.rgctx_data = ((Il2CppRGCTXData *)&stack0xffffffb8).rgctx_data;
      while( true ) {
        this_04 = (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                   *)&stack0xffffffb8;
        bVar5 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (this_04,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                          );
        if (bVar5 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
        if (this_03 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        break;
        for (; pMVar4 = this_01, index < (this_03->fields)._size; index = index + 1) {
          if (this_04 ==
              (Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
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
                            ((String *)method_01,*(String **)((int)RVar6 + 8),(MethodInfo *)0x0);
          if (bVar5 != 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&stack0xffffffb8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                       ,method_01);
            *unaff_FS_OFFSET = uStack_3;
            return 1;
          }
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).activeBoosts;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)type,
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
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).activeBoosts;
  if ((this_00 !=
       (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
     && (this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                   RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                   Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                             (this_00,
                              MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                             ),
        this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
         *)0x0)) {
    method_00 = (MethodInfo *)&UNK_?;
    pDVar4 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
             Regex+CachedCodeEntryKey,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)&stack0xffffffd4,this_02,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                       );
    item = pDVar4->_currentValue;
    uStack_1 = 1;
    while (bVar5 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                   Object,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).onBoostTypeUpdate;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
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
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)pDVar1,(Object *)pDVar1,
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).activeBoosts;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)type,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                      );
    if (bVar1 == 0) {
      *boost = (Boost *)0x0;
      func_?(boost);
      return 0;
    }
    this_01 = (this->fields).activeBoosts;
    if (this_01 != (Dictionary_2_BoostType_Boost_ *)0x0) {
      pBVar2 = (Boost *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,type,
                                   MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                                  );
      *boost = pBVar2;
      func_?(boost);
      return 1;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            TypeInfo__BoostController->static_fields->boosts;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)type,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                      );
    if (bVar1 == 0) {
      *boost = (Boost *)0x0;
      func_?();
      return 0;
    }
    if ((TypeInfo__BoostController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_01 = TypeInfo__BoostController->static_fields->boosts;
    if (this_01 != (Dictionary_2_BoostType_Boost_ *)0x0) {
      pBVar2 = (Boost *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,type,
                                   MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                                  );
      *boost = pBVar2;
      func_?();
      return 1;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).onBoostTypeUpdate;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
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
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)pDVar1,(Object *)pDVar1,
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
  this = (Dictionary_2_System_Object_System_Object_ *)
         func_?(TypeInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>);
  if (this != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Dictionary__)
    ;
    pSVar1 = TM::TM__(StringLiteral_X_ray_vision,(MethodInfo *)0x0);
    pSVar2 = TM::TM__(StringLiteral_X_ray_vision,(MethodInfo *)0x0);
    pOVar3 = (Object *)func_?(TypeInfo__Boost);
    pSVar4 = StringLiteral_XRayVision;
    pSVar5 = ::StringLiteral__;
    if (pOVar3 != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (pOVar3,ExceptionArgument__Enum_obj,unaff_EDI);
      pOVar3[1].monitor = (MonitorData *)pSVar4;
      pOVar3[1].klass = (Object__Class *)0x4;
      func_?(&pOVar3[1].monitor,pSVar4);
      pOVar3[3].monitor = (MonitorData *)pSVar1;
      func_?(&pOVar3[3].monitor,pSVar1);
      pOVar3[2].klass = (Object__Class *)pSVar5;
      func_?(pOVar3 + 2,pSVar5);
      pOVar3[2].monitor = (MonitorData *)pSVar2;
      func_?(&pOVar3[2].monitor,pSVar2);
      *(undefined1 *)&pOVar3[3].klass = 1;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this,(Object *)0x4,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
                );
      pSVar4 = TM::TM__(StringLiteral_x2_Ammo,(MethodInfo *)0x0);
      pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Ammo_Percentage,(MethodInfo *)0x0);
      pSVar1 = TM::TM__(StringLiteral_Ammo,(MethodInfo *)0x0);
      pOVar3 = (Object *)func_?();
      pSVar5 = StringLiteral_Ammo;
      if (pOVar3 != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (pOVar3,ExceptionArgument__Enum_obj,unaff_EDI);
        pOVar3[1].klass = (Object__Class *)0x0;
        pOVar3[1].monitor = (MonitorData *)pSVar5;
        func_?(&pOVar3[1].monitor,pSVar5);
        pOVar3[3].monitor = (MonitorData *)pSVar4;
        func_?(&pOVar3[3].monitor,pSVar4);
        pOVar3[2].klass = pOVar6;
        func_?(pOVar3 + 2,pOVar6);
        pOVar3[2].monitor = (MonitorData *)pSVar1;
        func_?(&pOVar3[2].monitor,pSVar1);
        *(undefined1 *)&pOVar3[3].klass = 0;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this,(Object *)0x0,pOVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
                  );
        pSVar4 = TM::TM__(StringLiteral___0___Speed,(MethodInfo *)0x0);
        pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Speed_Percentage,(MethodInfo *)0x0);
        pSVar1 = TM::TM__(StringLiteral_Speed,(MethodInfo *)0x0);
        pOVar3 = (Object *)func_?();
        pSVar5 = StringLiteral_Speed;
        if (pOVar3 != (Object *)0x0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    (pOVar3,ExceptionArgument__Enum_obj,unaff_EDI);
          pOVar3[1].klass = (Object__Class *)0x1;
          pOVar3[1].monitor = (MonitorData *)pSVar5;
          func_?(&pOVar3[1].monitor,pSVar5);
          pOVar3[3].monitor = (MonitorData *)pSVar4;
          func_?(&pOVar3[3].monitor,pSVar4);
          pOVar3[2].klass = pOVar6;
          func_?(pOVar3 + 2,pOVar6);
          pOVar3[2].monitor = (MonitorData *)pSVar1;
          func_?(&pOVar3[2].monitor,pSVar1);
          *(undefined1 *)&pOVar3[3].klass = 1;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this,(Object *)0x1,pOVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
                    );
          pSVar4 = TM::TM__(StringLiteral_x2_Gamecoins,(MethodInfo *)0x0);
          pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Coin_Percentage,(MethodInfo *)0x0);
          pSVar1 = TM::TM__(StringLiteral_Coins,(MethodInfo *)0x0);
          pOVar3 = (Object *)func_?();
          pSVar5 = StringLiteral_GameCoinBoost;
          if (pOVar3 != (Object *)0x0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (pOVar3,ExceptionArgument__Enum_obj,unaff_EDI);
            pOVar3[1].klass = (Object__Class *)0x2;
            pOVar3[1].monitor = (MonitorData *)pSVar5;
            func_?(&pOVar3[1].monitor,pSVar5);
            pOVar3[3].monitor = (MonitorData *)pSVar4;
            func_?(&pOVar3[3].monitor,pSVar4);
            pOVar3[2].klass = pOVar6;
            func_?(pOVar3 + 2,pOVar6);
            pOVar3[2].monitor = (MonitorData *)pSVar1;
            func_?(&pOVar3[2].monitor,pSVar1);
            *(undefined1 *)&pOVar3[3].klass = 0;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (this,(Object *)0x2,pOVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
                      );
            pSVar4 = TM::TM__(StringLiteral___0___HP,(MethodInfo *)0x0);
            pOVar6 = (Object__Class *)TM::TM__(StringLiteral_HP_Percentage,(MethodInfo *)0x0);
            pSVar1 = TM::TM__(StringLiteral_Health,(MethodInfo *)0x0);
            pOVar3 = (Object *)func_?();
            pSVar5 = StringLiteral_Health;
            if (pOVar3 != (Object *)0x0) {
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        (pOVar3,ExceptionArgument__Enum_obj,unaff_EDI);
              pOVar3[1].klass = (Object__Class *)0x3;
              pOVar3[1].monitor = (MonitorData *)pSVar5;
              func_?(&pOVar3[1].monitor,pSVar5);
              pOVar3[3].monitor = (MonitorData *)pSVar4;
              func_?(&pOVar3[3].monitor,pSVar4);
              pOVar3[2].klass = pOVar6;
              func_?(pOVar3 + 2,pOVar6);
              pOVar3[2].monitor = (MonitorData *)pSVar1;
              func_?(&pOVar3[2].monitor,pSVar1);
              *(undefined1 *)&pOVar3[3].klass = 1;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (this,(Object *)0x3,pOVar3,
                         MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
                        );
              pSVar4 = TM::TM__(StringLiteral___0___Jump,(MethodInfo *)0x0);
              pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Jump_Percentage,(MethodInfo *)0x0);
              pSVar1 = TM::TM__(StringLiteral_Jump,(MethodInfo *)0x0);
              pOVar3 = (Object *)func_?();
              pSVar5 = StringLiteral_JumpPower;
              if (pOVar3 != (Object *)0x0) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          (pOVar3,ExceptionArgument__Enum_obj,unaff_EDI);
                pOVar3[1].klass = (Object__Class *)0x5;
                pOVar3[1].monitor = (MonitorData *)pSVar5;
                func_?(&pOVar3[1].monitor,pSVar5);
                pOVar3[3].monitor = (MonitorData *)pSVar4;
                func_?(&pOVar3[3].monitor,pSVar4);
                pOVar3[2].klass = pOVar6;
                func_?(pOVar3 + 2,pOVar6);
                pOVar3[2].monitor = (MonitorData *)pSVar1;
                func_?(&pOVar3[2].monitor,pSVar1);
                *(undefined1 *)&pOVar3[3].klass = 1;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (this,(Object *)0x5,pOVar3,
                           MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
                          );
                pSVar4 = TM::TM__(StringLiteral___0___Poison_Resist,(MethodInfo *)0x0);
                pOVar6 = (Object__Class *)TM::TM__(StringLiteral_Poison_Resist,(MethodInfo *)0x0);
                pSVar1 = TM::TM__(StringLiteral_Poison_Resist,(MethodInfo *)0x0);
                pOVar3 = (Object *)func_?();
                pSVar5 = StringLiteral_PoisonResist;
                if (pOVar3 != (Object *)0x0) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                            (pOVar3,ExceptionArgument__Enum_obj,unaff_EDI);
                  pOVar3[1].klass = (Object__Class *)0x6;
                  pOVar3[1].monitor = (MonitorData *)pSVar5;
                  func_?(&pOVar3[1].monitor,pSVar5);
                  pOVar3[3].monitor = (MonitorData *)pSVar4;
                  func_?(&pOVar3[3].monitor,pSVar4);
                  pOVar3[2].klass = pOVar6;
                  func_?(pOVar3 + 2,pOVar6);
                  pOVar3[2].monitor = (MonitorData *)pSVar1;
                  func_?(&pOVar3[2].monitor,pSVar1);
                  *(undefined1 *)&pOVar3[3].klass = 1;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__Add
                            (this,(Object *)0x6,pOVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Add_BoostType__Boost_
                            );
                  TypeInfo__BoostController->static_fields->boosts =
                       (Dictionary_2_BoostType_Boost_ *)this;
                  func_?(TypeInfo__BoostController->static_fields,this);
                  return;
                }
              }
            }
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
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>
                           );
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Dictionary__
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x0,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x1,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x2,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x3,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x4,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x5,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)0x6,(Object *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_System::Action>__Add_BoostType__System__Action_
              );
    (this->fields).onBoostTypeUpdate = (Dictionary_2_BoostType_System_Action_ *)this_00;
    func_?();
    this_01 = (List_1_BoostType_ *)func_?();
    if (this_01 != (List_1_BoostType_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<BoostType>__List__);
      func_?(this_01,3,
                      MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_);
      func_?(this_01,1,
                      MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_);
      func_?(this_01,0,
                      MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_);
      func_?(this_01,5,
                      MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_);
      func_?(this_01,2,
                      MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_);
      func_?(this_01,6,
                      MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_);
      func_?(this_01,4,
                      MethodInfo__System__Collections__Generic__List<BoostType>__Add_BoostType_);
      (this->fields).boostPriorityList = this_01;
      func_?(&(this->fields).boostPriorityList,this_01);
      this_02 = (Dictionary_2_BoostType_Boost_ *)
                func_?(TypeInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>
                               );
      if (this_02 != (Dictionary_2_BoostType_Boost_ *)0x0) {
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__Dictionary__
                  );
        (this->fields).activeBoosts = this_02;
        func_?(&(this->fields).activeBoosts,this_02);
        this_03 = (List_1_Boost_ *)
                  func_?(TypeInfo__System__Collections__Generic__List<Boost>);
        if (this_03 != (List_1_Boost_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
          LowLevelList_1_System_Object___ctor
                    ((LowLevelList_1_System_Object_ *)this_03,
                     MethodInfo__System__Collections__Generic__List<Boost>__List__);
          method_00 = (MethodInfo *)&(this->fields).removeList;
          (this->fields).removeList = this_03;
          func_?(method_00,this_03);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)this,ExceptionArgument__Enum_obj,method_00);
          return;
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

