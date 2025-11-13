
/* Int32 GetBoostEarning(ProjectEarningsReport) */

int32_t Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_GetBoostEarning
                  (BoostEditMenuItem *this,ProjectEarningsReport *projectEarningsReport,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar3 != (MVLocalPlayer *)0x0 && (projectEarningsReport != (ProjectEarningsReport *)0x0))
      && (this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                    (projectEarningsReport->fields).projectMemberEarningsReports,
         this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)))) {
    iVar4 = (pMVar3->fields)._._ProfileID_k__BackingField;
    iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_01,iVar4,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar5 < 0) {
      return 0;
    }
    pDVar6 = (projectEarningsReport->fields).projectMemberEarningsReports;
    if (((pDVar6 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                     *)0x0) &&
        (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,iVar4,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                             ), pOVar7 != (Object *)0x0)) &&
       ((pOVar7[1].klass != (Object__Class *)0x0 &&
        ((pBVar8 = (this->fields).boost, pBVar8 != (Boost *)0x0 &&
         (pDVar9 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)((pOVar7[1].klass)->_0).namespaze,
         pDVar9 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                    *)0x0)))))) {
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (pDVar9,(Object *)(pBVar8->fields)._BoostKey_k__BackingField,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__ContainsKey_System__String_
                         ->klass->rgctx_data[0x21].method);
      if (iVar5 < 0) {
        return 0;
      }
      pDVar6 = (projectEarningsReport->fields).projectMemberEarningsReports;
      if ((((pDVar6 != (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
                        *)0x0) &&
           (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar6,iVar4,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                                ), pOVar7 != (Object *)0x0)) &&
          (pOVar7[1].klass != (Object__Class *)0x0)) &&
         ((pBVar8 = (this->fields).boost, pBVar8 != (Boost *)0x0 &&
          (pDVar9 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)((pOVar7[1].klass)->_0).namespaze,
          pDVar9 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0)))) {
        key = (pBVar8->fields)._BoostKey_k__BackingField;
        uVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (pDVar9,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__get_Item_System__String_
                           ->klass->rgctx_data[0x21].method);
        if ((int)uVar10 < 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                    ((Object *)key,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          iVar4 = (*pcVar11)();
          return iVar4;
        }
        pDVar12 = (pDVar9->fields)._entries;
        if (pDVar12 == (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                       *)0x0) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          iVar4 = (*pcVar11)();
          return iVar4;
        }
        if ((uint)pDVar12->max_length <= uVar10) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          iVar4 = (*pcVar11)();
          return iVar4;
        }
        return pDVar12->vector[(int)uVar10].value.state;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  iVar4 = (*pcVar11)();
  return iVar4;
}


/* Void Initialize(Boost) */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_Initialize
               (BoostEditMenuItem *this,Boost *boost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BoostEditMenuItem::BoosterDef>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BoostEditMenuItem::BoosterDef>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_N0);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).boost = boost;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).boost >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  pTVar6 = (this->fields).boostDescription;
  if (boost != (Boost *)0x0) {
    pSVar7 = (boost->fields).description;
    pOVar8 = Boost::Boost_get_Value(boost,(MethodInfo *)0x0);
    PStack_9._arg0 = (Object *)0x0;
    PStack_9._arg1 = (Object *)0x0;
    PStack_9._arg2 = (Object *)0x0;
    PStack_9._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_9,pOVar8,(MethodInfo *)0x0);
    PStack_10._arg0 = PStack_9._arg0;
    PStack_10._arg1 = PStack_9._arg1;
    PStack_10._arg2 = PStack_9._arg2;
    PStack_10._args = PStack_9._args;
    pSVar7 = mscorlib.dll::System::String::String_FormatHelper
                        ((IFormatProvider *)0x0,pSVar7,&PStack_10,(MethodInfo *)0x0);
    if (pTVar6 != (Text *)0x0) {
      (*(pTVar6->klass->vtable).set_text.methodPtr)
                (pTVar6,pSVar7,(pTVar6->klass->vtable).set_text.method);
      pTVar11 = (this->fields).activeToggleButton;
      if (pTVar11 != (ToggleButtonAnimation *)0x0) {
        ToggleButtonAnimation::ToggleButtonAnimation_Initialize(pTVar11,(MethodInfo *)0x0);
        this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (((this_00 != (MVWorldObjectClientManager *)0x0) &&
            (this_01 = (MVGameOptionDataObject *)
                       MVWorldObjectClientManager::
                       MVWorldObjectClientManager_GetSingletonWorldObject
                                 (this_00,
                                  MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                                 ), this_01 != (MVGameOptionDataObject *)0x0)) &&
           (pGVar12 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                                (this_01,(MethodInfo *)0x0),
           pGVar12 != (GameBoosterSettingsManager *)0x0)) {
          pLVar13 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                    GameBoosterSettings::GameBoosterSettingsManager::
                    GameBoosterSettingsManager_get_ActiveSettingsList(pGVar12,(MethodInfo *)0x0);
          pGVar12 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                              (this_01,(MethodInfo *)0x0);
          if (pGVar12 != (GameBoosterSettingsManager *)0x0) {
            pLVar14 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                      GameBoosterSettings::GameBoosterSettingsManager::
                      GameBoosterSettingsManager_get_InactiveGameBoosterSettingsList
                                (pGVar12,(MethodInfo *)0x0);
            uVar2 = 0;
            if (pLVar13 !=
                (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
                 *)0x0) {
              lVar15 = 0x20;
              lVar16 = 0x20;
              for (; (int)uVar2 < (pLVar13->fields)._size; uVar2 = uVar2 + 1) {
                if ((uint)(pLVar13->fields)._size <= uVar2) goto code_?;
                pGVar17 = (pLVar13->fields)._items;
                if (pGVar17 == (GameBoosterSettingWithGoldSetting__Array *)0x0)
                goto code_?;
                if ((uint)pGVar17->max_length <= uVar2) goto code_?;
                lVar18 = *(longlong *)((longlong)pGVar17->vector + lVar16 + -0x20);
                if (lVar18 == 0) goto code_?;
                pSVar7 = *(String **)(lVar18 + 0x18);
                pSVar19 = (boost->fields)._BoostKey_k__BackingField;
                if ((pSVar7 == pSVar19) ||
                   (((pSVar7 != (String *)0x0 && (pSVar19 != (String *)0x0)) &&
                    (((pSVar7->fields)._stringLength == (pSVar19->fields)._stringLength &&
                     (bVar20 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                         ((uint8_t *)&(pSVar7->fields)._firstChar,
                                          (uint8_t *)&(pSVar19->fields)._firstChar,
                                          (longlong)(pSVar7->fields)._stringLength * 2,
                                          (MethodInfo *)0x0), bVar20 != 0)))))) {
                  pTVar11 = (this->fields).activeToggleButton;
                  (this->fields).isActive = 1;
                  if (pTVar11 == (ToggleButtonAnimation *)0x0) goto code_?;
                  ToggleButtonAnimation::ToggleButtonAnimation_SetToggleOnWithoutInterpolation
                            (pTVar11,(MethodInfo *)0x0);
                  pGVar21 = (GameBoosterSettingWithGoldSetting *)FUN_?(pLVar13);
                  (this->fields).boosterSetting = pGVar21;
                  func_?(&(this->fields).boosterSetting);
                }
                lVar16 = lVar16 + 8;
              }
              uVar2 = 0;
              if (pLVar14 !=
                  (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
                   *)0x0) {
                lVar16 = 0x20;
                for (; (int)uVar2 < (pLVar14->fields)._size; uVar2 = uVar2 + 1) {
                  if ((uint)(pLVar14->fields)._size <= uVar2) goto code_?;
                  pGVar17 = (pLVar14->fields)._items;
                  if (pGVar17 == (GameBoosterSettingWithGoldSetting__Array *)0x0)
                  goto code_?;
                  if ((uint)pGVar17->max_length <= uVar2) goto code_?;
                  lVar18 = *(longlong *)((longlong)pGVar17->vector + lVar16 + -0x20);
                  if (lVar18 == 0) goto code_?;
                  pSVar7 = *(String **)(lVar18 + 0x18);
                  pSVar19 = (boost->fields)._BoostKey_k__BackingField;
                  if ((pSVar7 == pSVar19) ||
                     (((pSVar7 != (String *)0x0 && (pSVar19 != (String *)0x0)) &&
                      (((pSVar7->fields)._stringLength == (pSVar19->fields)._stringLength &&
                       (bVar20 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                           ((uint8_t *)&(pSVar7->fields)._firstChar,
                                            (uint8_t *)&(pSVar19->fields)._firstChar,
                                            (longlong)(pSVar7->fields)._stringLength * 2,
                                            (MethodInfo *)0x0), bVar20 != 0)))))) {
                    pTVar11 = (this->fields).activeToggleButton;
                    (this->fields).isActive = 0;
                    if (pTVar11 == (ToggleButtonAnimation *)0x0) goto code_?;
                    ToggleButtonAnimation::ToggleButtonAnimation_SetToggleOffWithoutInterpolation
                              (pTVar11,(MethodInfo *)0x0);
                    pGVar21 = (GameBoosterSettingWithGoldSetting *)FUN_?(pLVar14);
                    (this->fields).boosterSetting = pGVar21;
                    func_?();
                  }
                  lVar16 = lVar16 + 8;
                }
                pLVar22 = (this->fields).boosterList;
                uVar2 = 0;
                if (pLVar22 != (List_1_BoostEditMenuItem_BoosterDef_ *)0x0) {
                  for (; (int)uVar2 < (pLVar22->fields)._size; uVar2 = uVar2 + 1) {
                    if ((uint)(pLVar22->fields)._size <= uVar2) goto code_?;
                    pBVar23 = (pLVar22->fields)._items;
                    if (pBVar23 == (BoostEditMenuItem_BoosterDef__Array *)0x0)
                    goto code_?;
                    if ((uint)pBVar23->max_length <= uVar2) goto code_?;
                    if (*(int *)((longlong)
                                 &((BoostEditMenuItem_BoosterDef__Array *)(pBVar23->vector + -2))->
                                  klass + lVar15) == (boost->fields)._Type_k__BackingField) {
                      if ((uint)(pLVar22->fields)._size <= uVar2) {
code_?:
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                        pcVar24 = (code *)swi(3);
                        (*pcVar24)();
                        return;
                      }
                      pBVar23 = (pLVar22->fields)._items;
                      if (pBVar23 == (BoostEditMenuItem_BoosterDef__Array *)0x0)
                      goto code_?;
                      if ((uint)pBVar23->max_length <= uVar2) {
code_?:
                        FUN_?();
                        pcVar24 = (code *)swi(3);
                        (*pcVar24)();
                        return;
                      }
                      pGVar25 = pBVar23->vector[(int)uVar2].iconPrefab;
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      pGVar25 = (GameObject *)
                                UnityEngine.CoreModule.dll::UnityEngine::Object::
                                Object_1_Instantiate_4
                                          ((Object *)pGVar25,
                                           UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                          );
                      if ((pGVar25 == (GameObject *)0x0) ||
                         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar25,(MethodInfo *)0x0),
                         this_02 == (Transform *)0x0)) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                                (this_02,(Transform *)(this->fields).boostTypeImageParent,0,
                                 (MethodInfo *)0x0);
                      break;
                    }
                    lVar15 = lVar15 + 0x10;
                  }
                  pGVar21 = (this->fields).boosterSetting;
                  if ((pGVar21 != (GameBoosterSettingWithGoldSetting *)0x0) &&
                     (pKVar26 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::
                                SpecializedSettingsTypes::GameBoosterSettings::
                                GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
                                GameBoosterSettingWithGoldSetting_get_GoldPrice
                                          (pGVar21,(MethodInfo *)0x0),
                     pKVar26 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0)) {
                    value = FUN_?(pKVar26,
                                          MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__get_NumericValue__
                                         );
                    pSVar7 = StringLiteral_N0;
                    pTVar6 = (this->fields).goldPriceText;
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__System__Number);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (pSVar7 == (String *)0x0) {
                      pOVar8 = (Object *)0x0;
                      pOVar27 = (Object *)0x0;
                    }
                    else {
                      pOVar8 = (Object *)&(pSVar7->fields)._firstChar;
                      PStack_9._arg1 = (Object *)(ulonglong)(uint)(pSVar7->fields)._stringLength;
                      pOVar27 = PStack_9._arg1;
                      PStack_9._arg0 = pOVar8;
                    }
                    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    PStack_9._arg0 = pOVar8;
                    PStack_9._arg1 = pOVar27;
                    pSVar7 = mscorlib.dll::System::Number::Number_FormatInt32
                                        (value,(ReadOnlySpan_1_Char_ *)&PStack_9,
                                         (IFormatProvider *)0x0,(MethodInfo *)0x0);
                    if ((pSVar7 != (String *)0x0) &&
                       (pSVar7 = mscorlib.dll::System::String::String_Replace_1
                                            (pSVar7,::StringLiteral__,::StringLiteral__,
                                             (MethodInfo *)0x0), pTVar6 != (Text *)0x0)) {
                      UNRECOVERED_JUMPTABLE = (pTVar6->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*UNRECOVERED_JUMPTABLE)
                                (pTVar6,pSVar7,(pTVar6->klass->vtable).set_text.method,
                                 UNRECOVERED_JUMPTABLE);
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
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void OnActiveToggle() */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_OnActiveToggle
               (BoostEditMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pOVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                       (this_01,
                        MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                       );
    if (pOVar1 != (Object *)0x0) {
      this_00 = (SettingsManager *)pOVar1[0x14].monitor;
      if ((this->fields).isActive == 0) {
        if (this_00 == (SettingsManager *)0x0) goto code_?;
        MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
        SettingsManager::SettingsManager_UpdateSetting
                  (this_00,(KogamaSettingWrapperBase *)(this->fields).boosterSetting,
                   (MethodInfo *)0x0);
      }
      else {
        if (this_00 == (SettingsManager *)0x0) goto code_?;
        MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
        SettingsManager::SettingsManager_RemoveSetting
                  (this_00,(KogamaSettingWrapperBase *)(this->fields).boosterSetting,
                   (MethodInfo *)0x0);
      }
      if ((SettingsManager *)pOVar1[0x14].monitor != (SettingsManager *)0x0) {
        MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
        SettingsManager::SettingsManager_Submit
                  ((SettingsManager *)pOVar1[0x14].monitor,(MethodInfo *)0x0);
        MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PruneEmptyDictionaries
                  ((Dictionary_2_System_Object_System_Object_ *)pOVar1[7].klass,(MethodInfo *)0x0);
        (this->fields).isActive = (this->fields).isActive == 0;
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnBoostSettingChange(Object) */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_OnBoostSettingChange
               (BoostEditMenuItem *this,Object *newValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>__set_NumericValue_float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__set_NumericValue_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pOVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                     (this_01,
                      MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                     );
  pGVar2 = (this->fields).boosterSetting;
  if (pGVar2 == (GameBoosterSettingWithGoldSetting *)0x0) goto code_?;
  pKVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
           GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
           GameBoosterSettingWithGoldSetting_get_Setting(pGVar2,(MethodInfo *)0x0);
  if (pKVar3 == (KogamaSettingValueWrapperBase *)0x0) {
    pGVar2 = (this->fields).boosterSetting;
code_?:
    if (pGVar2 == (GameBoosterSettingWithGoldSetting *)0x0) goto code_?;
    pKVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
             GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
             GameBoosterSettingWithGoldSetting_get_Setting(pGVar2,(MethodInfo *)0x0);
    if (pKVar3 != (KogamaSettingValueWrapperBase *)0x0) {
      bVar4 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
              ->_1).naturalAligment;
      if ((bVar4 <= (pKVar3->klass->_1).naturalAligment) &&
         ((pKVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
         )) {
        pGVar2 = (this->fields).boosterSetting;
        if (pGVar2 == (GameBoosterSettingWithGoldSetting *)0x0) goto code_?;
        pKVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                 GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
                 GameBoosterSettingWithGoldSetting_get_Setting(pGVar2,(MethodInfo *)0x0);
        if (pKVar3 == (KogamaSettingValueWrapperBase *)0x0) goto code_?;
        bVar4 = (
                TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                ->_1).naturalAligment;
        if (((pKVar3->klass->_1).naturalAligment < bVar4) ||
           ((pKVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
            (Il2CppClass *)
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
           )) {
          FUN_?(pKVar3,
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                       );
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (newValue == (Object *)0x0) goto code_?;
        if ((newValue->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(newValue);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (pKVar3[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0)
        goto code_?;
        FUN_?(pKVar3[1].klass,*(undefined4 *)&newValue[1].klass);
        goto code_?;
      }
    }
  }
  else {
    bVar4 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
            ->_1).naturalAligment;
    if (((pKVar3->klass->_1).naturalAligment < bVar4) ||
       (bVar6 = true,
       (pKVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
       (Il2CppClass *)
       TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       )) {
      bVar6 = false;
    }
    pGVar2 = (this->fields).boosterSetting;
    pKVar7 = (KogamaSettingValueWrapperBase *)0x0;
    if (bVar6) {
      pKVar7 = pKVar3;
    }
    if (pKVar7 == (KogamaSettingValueWrapperBase *)0x0) goto code_?;
    if (pGVar2 == (GameBoosterSettingWithGoldSetting *)0x0) goto code_?;
    pKVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
             GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
             GameBoosterSettingWithGoldSetting_get_Setting(pGVar2,(MethodInfo *)0x0);
    if (pKVar3 == (KogamaSettingValueWrapperBase *)0x0) goto code_?;
    bVar4 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
            ->_1).naturalAligment;
    if (((pKVar3->klass->_1).naturalAligment < bVar4) ||
       ((pKVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       )) {
      FUN_?(pKVar3,
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                   );
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (newValue == (Object *)0x0) goto code_?;
    if ((newValue->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(newValue);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (pKVar3[1].klass == (KogamaSettingValueWrapperBase__Class *)0x0) goto code_?;
    FUN_?(pKVar3[1].klass,*(undefined4 *)&newValue[1].klass);
code_?:
    if ((pOVar1 == (Object *)0x0) ||
       ((SettingsManager *)pOVar1[0x14].monitor == (SettingsManager *)0x0))
    goto code_?;
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsManager
    ::SettingsManager_UpdateSetting
              ((SettingsManager *)pOVar1[0x14].monitor,
               (KogamaSettingWrapperBase *)(this->fields).boosterSetting,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).boost;
  pTVar8 = (this->fields).boostDescription;
  if (this_00 != (Boost *)0x0) {
    pSVar9 = (this_00->fields).description;
    pOVar1 = Boost::Boost_get_Value(this_00,(MethodInfo *)0x0);
    PStack_10._arg0 = (Object *)0x0;
    PStack_10._arg1 = (Object *)0x0;
    PStack_10._arg2 = (Object *)0x0;
    PStack_10._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_10,pOVar1,(MethodInfo *)0x0);
    PStack_11._arg0 = PStack_10._arg0;
    PStack_11._arg1 = PStack_10._arg1;
    PStack_11._arg2 = PStack_10._arg2;
    PStack_11._args = PStack_10._args;
    pSVar9 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar9,&PStack_11,(MethodInfo *)0x0);
    if (pTVar8 != (Text *)0x0) {
      (*(pTVar8->klass->vtable).set_text.methodPtr)
                (pTVar8,pSVar9,(pTVar8->klass->vtable).set_text.method);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnPriceSettingChanged(Int32) */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_OnPriceSettingChanged
               (BoostEditMenuItem *this,int32_t newPrice,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>__set_NumericValue_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_N0);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pOVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                       (this_01,
                        MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                       );
    this_00 = (this->fields).boosterSetting;
    if (this_00 != (GameBoosterSettingWithGoldSetting *)0x0) {
      pKVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
               GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
               GameBoosterSettingWithGoldSetting_get_GoldPrice(this_00,(MethodInfo *)0x0);
      if ((pKVar2 != (KogamaSettingNumericBase_1_System_Int32_ *)0x0) &&
         (pKVar3 = (pKVar2->fields).KogamaSettingNumeric,
         pKVar3 != (KogamaSettingNumeric_1_System_Int32_ *)0x0)) {
        FUN_?(pKVar3,newPrice);
        if ((pOVar1 != (Object *)0x0) &&
           ((SettingsManager *)pOVar1[0x14].monitor != (SettingsManager *)0x0)) {
          MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
          SettingsManager::SettingsManager_UpdateSetting
                    ((SettingsManager *)pOVar1[0x14].monitor,
                     (KogamaSettingWrapperBase *)(this->fields).boosterSetting,(MethodInfo *)0x0);
          pSVar4 = StringLiteral_N0;
          pTVar5 = (this->fields).goldPriceText;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pSVar4 == (String *)0x0) {
            puVar6 = (uint16_t *)0x0;
            iVar7 = 0;
          }
          else {
            aRStack_8[0]._pointer._value = &(pSVar4->fields)._firstChar;
            aRStack_8[0]._12_4_ = 0;
            iVar7 = (pSVar4->fields)._stringLength;
            aRStack_8[0]._length = iVar7;
            puVar6 = aRStack_8[0]._pointer._value;
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          aRStack_8[0]._12_4_ = 0;
          aRStack_8[0]._pointer._value = puVar6;
          aRStack_8[0]._length = iVar7;
          pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                             (newPrice,aRStack_8,(IFormatProvider *)0x0,(MethodInfo *)0x0);
          if (pSVar4 != (String *)0x0) {
            pSVar4 = mscorlib.dll::System::String::String_Replace_1
                               (pSVar4,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
            if (pTVar5 != (Text *)0x0) {
              UNRECOVERED_JUMPTABLE = (pTVar5->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)
                        (pTVar5,pSVar4,(pTVar5->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE
                        );
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnSubmitData() */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_OnSubmitData
               (BoostEditMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pOVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                       (this_01,
                        MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                       );
    if ((pOVar1 != (Object *)0x0) &&
       ((SettingsManager *)pOVar1[0x14].monitor != (SettingsManager *)0x0)) {
      MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::
      SettingsManager::SettingsManager_Submit
                ((SettingsManager *)pOVar1[0x14].monitor,(MethodInfo *)0x0);
      this_00 = pOVar1[7].klass;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                      ,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      LStack_2._list = (List_1_System_Object_ *)0x0;
      LStack_2._index = 0;
      LStack_2._version = 0;
      LStack_2._current = (Object *)0x0;
      this_02 = (List_1_System_Object_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
                 MethodInfo__System__Collections__Generic__List<System::String>__List__);
      if (this_00 != (Object__Class *)0x0) {
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
          lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
          in_R8 = (MethodInfo *)(ulonglong)(uVar3 & 0x3f);
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << (longlong)in_R8;
            }
            UNLOCK();
          } while (!bVar8);
        }
        pDStack_9 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                     (ulonglong)*(uint *)&(this_00->_0).byval_arg.field_0xc;
        uStack_10 = 2;
        uStack_11 = 0;
        uStack_12 = 0;
        DStack_13._8_8_ = pDStack_9;
        DStack_13._current.key = (Object *)0x0;
        DStack_13._current.value = (Object *)0x0;
        DStack_13._getEnumeratorRetType = 2;
        DStack_13._36_4_ = 0;
        uStack_4 = 0;
        pDStack_9 = &DStack_13;
        DStack_13._dictionary = (Dictionary_2_System_Object_System_Object_ *)this_00;
        while (bVar14 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                       Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                 (&DStack_13,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                 ), pOVar1 = DStack_13._current.key, bVar14 != 0) {
          in_R8 = (MethodInfo *)DStack_13._current.value;
          if ((MethodInfo *)DStack_13._current.value != (MethodInfo *)0x0) {
            pIVar15 = (Il2CppMethodPointer)(DStack_13._current.value)->klass;
            cVar16 = (code)(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          ->_1).naturalAligment;
            if ((((byte)cVar16 <= (byte)pIVar15[0x130]) &&
                (*(Dictionary_2_System_Object_System_Object___Class **)
                  (*(longlong *)(pIVar15 + 200) + -8 + (ulonglong)(byte)cVar16 * 8) ==
                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)
                ) && ((MethodInfo *)DStack_13._current.value != (MethodInfo *)0x0)) {
              cVar16 = (code)(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            ->_1).naturalAligment;
              if (((byte)pIVar15[0x130] < (byte)cVar16) ||
                 (*(Dictionary_2_System_Object_System_Object___Class **)
                   (*(longlong *)(pIVar15 + 200) + -8 + (ulonglong)(byte)cVar16 * 8) !=
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 )) goto code_?;
              bVar14 = MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PruneEmptyDictionaries
                                ((Dictionary_2_System_Object_System_Object_ *)
                                 DStack_13._current.value,(MethodInfo *)0x0);
              if (bVar14 != 0) {
                if (this_02 == (List_1_System_Object_ *)0x0) goto code_?;
                if (pOVar1 != (Object *)0x0) {
                  pOVar17 = (Object *)0x0;
                  if (pOVar1->klass == pORam0000000182db2520) {
                    pOVar17 = pOVar1;
                  }
                  if (pOVar17 == (Object *)0x0) goto code_?;
                }
                in_R8 = 
                MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
                FUN_?(this_02);
              }
            }
          }
        }
        if (this_02 != (List_1_System_Object_ *)0x0) {
          if (iRam_? != 0) {
            uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
            lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
              puVar7 = (ulonglong *)(lVar5 + 0xADDR);
              LOCK();
              bVar8 = uVar6 == *puVar7;
              if (bVar8) {
                *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          pDStack_9 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                       ((ulonglong)(uint)(this_02->fields)._version << 0x20);
          uStack_11 = 0;
          LStack_2._8_8_ = pDStack_9;
          LStack_2._current = (Object *)0x0;
          uStack_4 = 0;
          pDStack_9 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                       &LStack_2;
          LStack_2._list = this_02;
          while (bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                         Object]::List_1_T_Enumerator_System_Object__MoveNext
                                   (&LStack_2,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                                   ), bVar14 != 0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Remove
                      ((Dictionary_2_System_Object_System_Object_ *)this_00,LStack_2._current,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                      );
          }
          return;
        }
      }
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?(in_R8);
      FUN_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void ShowEditPopup() */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_ShowEditPopup
               (BoostEditMenuItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__BoostEditMenuItem__OnBoostSettingChange_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BoostEditMenuItem__OnPriceSettingChanged_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BoostEditMenuItem__OnSubmitData__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  BoostEditFloatPopup_MethodInfo__UnityEngine__Object__Instantiate<BoostEditFloatPopup>_BoostEditFloatPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  BoostEditIntPopup_MethodInfo__UnityEngine__Object__Instantiate<BoostEditIntPopup>_BoostEditIntPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  BoostEditPopup_MethodInfo__UnityEngine__Object__Instantiate<BoostEditPopup>_BoostEditPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BoostEditMenuItem____c__DisplayClass14_0___ShowEditPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BoostEditMenuItem____c__DisplayClass14_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BoostEditMenuItem____c__DisplayClass14_1___ShowEditPopup_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BoostEditMenuItem____c__DisplayClass14_1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BoostEditMenuItem____c__DisplayClass14_2___ShowEditPopup_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BoostEditMenuItem____c__DisplayClass14_2);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<System::Object>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).boosterSetting;
  if (pGVar1 == (GameBoosterSettingWithGoldSetting *)0x0) goto code_?;
  pKVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
            GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
            GameBoosterSettingWithGoldSetting_get_Setting(pGVar1,(MethodInfo *)0x0);
  if (pKVar2 != (KogamaSettingValueWrapperBase *)0x0) {
    bVar3 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
            ->_1).naturalAligment;
    if ((bVar3 <= (pKVar2->klass->_1).naturalAligment) &&
       ((pKVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<int>
       )) {
      object = (Object *)FUN_?(TypeInfo__BoostEditMenuItem____c__DisplayClass14_0);
      original = (this->fields).boostEditIntPopupPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar4 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           BoostEditIntPopup_MethodInfo__UnityEngine__Object__Instantiate<BoostEditIntPopup>_BoostEditIntPopup_
                          );
      if (object != (Object *)0x0) {
        bVar5 = iRam_? != 0;
        object[1].klass = pOVar4;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)(object + 1) >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        pOVar4 = object[1].klass;
        pBVar10 = (this->fields).boost;
        pGVar1 = (this->fields).boosterSetting;
        pUVar11 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction<System::Object>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (pUVar11,(Object *)this,
                   MethodInfo__BoostEditMenuItem__OnBoostSettingChange_System__Object_,
                   (MethodInfo *)0x0);
        uVar12 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
        FUN_?(uVar12,this,MethodInfo__BoostEditMenuItem__OnPriceSettingChanged_int_);
        pNVar13 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar13,(Object *)this,MethodInfo__BoostEditMenuItem__OnSubmitData__,
                   (MethodInfo *)0x0);
        if (pOVar4 == (Object__Class *)0x0) goto code_?;
        pIVar14 = (pOVar4->_0).image;
        uVar15._0_4_ = pIVar14[5].typeCount;
        uVar15._4_4_ = pIVar14[5].exportedTypeCount;
        (*(code *)pIVar14[5].assembly)(pOVar4,pBVar10,pGVar1,pUVar11,uVar12,pNVar13,uVar15);
        pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        pMVar17 = 
        MethodInfo__BoostEditMenuItem____c__DisplayClass14_0___ShowEditPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
        ;
        goto code_?;
      }
      goto code_?;
    }
  }
  pGVar1 = (this->fields).boosterSetting;
  if (pGVar1 == (GameBoosterSettingWithGoldSetting *)0x0) goto code_?;
  pKVar2 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
            GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting::
            GameBoosterSettingWithGoldSetting_get_Setting(pGVar1,(MethodInfo *)0x0);
  if (pKVar2 != (KogamaSettingValueWrapperBase *)0x0) {
    bVar3 = (
            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
            ->_1).naturalAligment;
    if ((bVar3 <= (pKVar2->klass->_1).naturalAligment) &&
       ((pKVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
        (Il2CppClass *)
        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingNumericBase<float>
       )) {
      object = (Object *)FUN_?(TypeInfo__BoostEditMenuItem____c__DisplayClass14_1);
      original_00 = (this->fields).boostEditFloatPopupPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar4 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original_00,
                           BoostEditFloatPopup_MethodInfo__UnityEngine__Object__Instantiate<BoostEditFloatPopup>_BoostEditFloatPopup_
                          );
      if (object != (Object *)0x0) {
        bVar5 = iRam_? != 0;
        object[1].klass = pOVar4;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)(object + 1) >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar5 = uVar8 == *puVar9;
            if (bVar5) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        pOVar4 = object[1].klass;
        pBVar10 = (this->fields).boost;
        pGVar1 = (this->fields).boosterSetting;
        pUVar11 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction<System::Object>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (pUVar11,(Object *)this,
                   MethodInfo__BoostEditMenuItem__OnBoostSettingChange_System__Object_,
                   (MethodInfo *)0x0);
        uVar12 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
        FUN_?(uVar12,this,MethodInfo__BoostEditMenuItem__OnPriceSettingChanged_int_);
        pNVar13 = (NavMesh_OnNavMeshPreUpdate *)
                  FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar13,(Object *)this,MethodInfo__BoostEditMenuItem__OnSubmitData__,
                   (MethodInfo *)0x0);
        if (pOVar4 == (Object__Class *)0x0) goto code_?;
        pIVar14 = (pOVar4->_0).image;
        uVar18._0_4_ = pIVar14[5].typeCount;
        uVar18._4_4_ = pIVar14[5].exportedTypeCount;
        (*(code *)pIVar14[5].assembly)(pOVar4,pBVar10,pGVar1,pUVar11,uVar12,pNVar13,uVar18);
        pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        pMVar17 = 
        MethodInfo__BoostEditMenuItem____c__DisplayClass14_1___ShowEditPopup_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
        ;
        goto code_?;
      }
      goto code_?;
    }
  }
  object = (Object *)FUN_?(TypeInfo__BoostEditMenuItem____c__DisplayClass14_2);
  original_01 = (this->fields).boostEditPopupPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar4 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original_01,
                       BoostEditPopup_MethodInfo__UnityEngine__Object__Instantiate<BoostEditPopup>_BoostEditPopup_
                      );
  if (object != (Object *)0x0) {
    bVar5 = iRam_? != 0;
    object[1].klass = pOVar4;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pOVar4 = object[1].klass;
    pBVar10 = (this->fields).boost;
    pGVar1 = (this->fields).boosterSetting;
    pUVar11 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction<System::Object>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (pUVar11,(Object *)this,
               MethodInfo__BoostEditMenuItem__OnBoostSettingChange_System__Object_,(MethodInfo *)0x0
              );
    uVar12 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    FUN_?(uVar12,this,MethodInfo__BoostEditMenuItem__OnPriceSettingChanged_int_);
    pNVar13 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar13,(Object *)this,MethodInfo__BoostEditMenuItem__OnSubmitData__,
               (MethodInfo *)0x0);
    if (pOVar4 != (Object__Class *)0x0) {
      pIVar14 = (pOVar4->_0).image;
      uVar19._0_4_ = pIVar14[5].typeCount;
      uVar19._4_4_ = pIVar14[5].exportedTypeCount;
      (*(code *)pIVar14[5].assembly)(pOVar4,pBVar10,pGVar1,pUVar11,uVar12,pNVar13,uVar19);
      pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      pMVar17 = 
      MethodInfo__BoostEditMenuItem____c__DisplayClass14_2___ShowEditPopup_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
      ;
code_?:
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor(this_01,object,pMVar17,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar17 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar17->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar17);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar16,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar20 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                s_InternalTransformList;
      if (pLVar20 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar7 = (longlong)(pLVar20->fields)._size;
        uVar6 = 0;
        if (0 < lVar7) {
          lVar21 = 0;
          lVar22 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar20 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                      s_InternalTransformList;
            if (pLVar20 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar20->fields)._size <= uVar6) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar23 = (code *)swi(3);
              (*pcVar23)();
              return;
            }
            pTVar24 = (pLVar20->fields)._items;
            if (pTVar24 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar24->max_length <= uVar6) {
              FUN_?();
              pcVar23 = (code *)swi(3);
              (*pcVar23)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar24->vector + lVar22 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar25 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                     ExecuteEvents_Execute_18
                               (pGVar16,(BaseEventData *)0x0,this_01,
                                (pMVar17->field7_0x38).rgctx_data[1].method);
            if (bVar25 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar6 = uVar6 + 1;
            lVar21 = lVar21 + 1;
            lVar22 = lVar22 + 8;
          } while (lVar21 < lVar7);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void UpdateEarningsText(ProjectEarningsReport) */

void Assembly-CSharp.dll::BoostEditMenuItem::BoostEditMenuItem_UpdateEarningsText
               (BoostEditMenuItem *this,ProjectEarningsReport *projectEarningsReport,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_N0);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (pMVar3 != (MVLocalPlayer *)0x0) {
      value = BoostEditMenuItem_GetBoostEarning(this,projectEarningsReport,(MethodInfo *)0x0);
      pSVar4 = StringLiteral_N0;
      pTVar5 = (this->fields).earningsAmountText;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pSVar4 == (String *)0x0) {
        puVar6 = (uint16_t *)0x0;
        iVar7 = 0;
      }
      else {
        aRStack_8[0]._pointer._value = &(pSVar4->fields)._firstChar;
        aRStack_8[0]._12_4_ = 0;
        iVar7 = (pSVar4->fields)._stringLength;
        aRStack_8[0]._length = iVar7;
        puVar6 = aRStack_8[0]._pointer._value;
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_8[0]._12_4_ = 0;
      aRStack_8[0]._pointer._value = puVar6;
      aRStack_8[0]._length = iVar7;
      pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                         (value,aRStack_8,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      if (pSVar4 != (String *)0x0) {
        pSVar4 = mscorlib.dll::System::String::String_Replace_1
                           (pSVar4,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
        if (pTVar5 != (Text *)0x0) {
          UNRECOVERED_JUMPTABLE = (pTVar5->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)
                    (pTVar5,pSVar4,(pTVar5->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

