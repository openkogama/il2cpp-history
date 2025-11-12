
/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostEditMenu::BoostEditMenu_OnDestroy
               (BoostEditMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BoostEditMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesProjectEarningsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__BoostEditMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar3 = 
  TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
  ;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
         (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
  }
  else {
    pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
             FUN_?(pDVar2,
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                          );
    if (pAVar1 == (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                  0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
    pAVar3 = 
    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
    ;
    lVar5 = FUN_?(pDVar2,
                          TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                         );
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__GamePassesProjectEarningsManager->static_fields >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}


/* Void OnProjectEarningsUpdatedCallback(ProjectEarningsReport) */

void Assembly-CSharp.dll::BoostEditMenu::BoostEditMenu_OnProjectEarningsUpdatedCallback
               (BoostEditMenu *this,ProjectEarningsReport *projectEarningsReport,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BoostEditMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesProjectEarningsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_01 = (UnityAction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__BoostEditMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_01,(MethodInfo *)0x0);
  pAVar3 = 
  TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
  ;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
         (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
  }
  else {
    pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
             FUN_?(pDVar2,
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                          );
    if (pAVar1 == (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                  0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
    pAVar3 = 
    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
    ;
    lVar5 = FUN_?(pDVar2,
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                          );
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__GamePassesProjectEarningsManager->static_fields >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__get_Item_int_)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar10 = (this->fields).boostItems;
  uVar6 = 0;
  if (pLVar10 != (List_1_BoostEditMenuItem_ *)0x0) {
    lVar5 = 0x20;
    do {
      if ((pLVar10->fields)._size <= (int)uVar6) {
        return;
      }
      if (pLVar10 == (List_1_BoostEditMenuItem_ *)0x0) break;
      if ((uint)(pLVar10->fields)._size <= uVar6) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pBVar11 = (pLVar10->fields)._items;
      if (pBVar11 == (BoostEditMenuItem__Array *)0x0) break;
      if ((uint)pBVar11->max_length <= uVar6) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = *(BoostEditMenuItem **)((longlong)pBVar11->vector + lVar5 + -0x20);
      if (this_00 == (BoostEditMenuItem *)0x0) break;
      BoostEditMenuItem::BoostEditMenuItem_UpdateEarningsText
                (this_00,projectEarningsReport,(MethodInfo *)0x0);
      pLVar10 = (this->fields).boostItems;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (pLVar10 != (List_1_BoostEditMenuItem_ *)0x0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoostEditMenu::BoostEditMenu_Start(BoostEditMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BoostEditMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesProjectEarningsManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__UI__LayoutRebuilder);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__AddRange_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__Add_BoostEditMenuItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  BoostEditMenuItem_MethodInfo__UnityEngine__Object__Instantiate<BoostEditMenuItem>_BoostEditMenuItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_03 != (MVWorldObjectClientManager *)0x0) {
    this_04 = (MVGameOptionDataObject *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                        (this_03,
                         MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                        );
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
         pMVar3 != (MVLocalPlayer *)0x0 &&
         (this_01 = (pMVar3->fields).boostController, this_01 != (BoostController *)0x0)) &&
        (pDVar4 = BoostController::BoostController_GetAllBoosts(this_01,(MethodInfo *)0x0),
        pDVar4 != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0)))) {
      pDStack_5 = (pDVar4->fields)._dictionary;
      uStack_6 = 0;
      uStack_7 = 0;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&pDStack_5 >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      if (pDStack_5 == (Dictionary_2_BoostType_Boost_ *)0x0) {
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uStack_6 = (ulonglong)(uint)(pDStack_5->fields)._version << 0x20;
      uStack_7 = 0;
      uStack_14 = uStack_6;
      pBStack_15 = (Boost *)0x0;
      uStack_16 = 0;
      ppDStack_17 = &pDStack_18;
      pDStack_18 = pDStack_5;
      while (pDStack_18 != (Dictionary_2_BoostType_Boost_ *)0x0) {
        if (uStack_14._4_4_ != (pDStack_18->fields)._version) goto code_?;
        uVar9 = uStack_14 & 0xffffffff;
        do {
          if (pDStack_18 == (Dictionary_2_BoostType_Boost_ *)0x0) goto code_?;
          uVar8 = (uint)uVar9;
          if ((uint)(pDStack_18->fields)._count <= uVar8) {
            uStack_14 = CONCAT44(uStack_14._4_4_,(pDStack_18->fields)._count + 1);
            pBStack_15 = (Boost *)0x0;
            pRVar19 = (this->fields).boostItemsContent;
            if (*(int *)&(TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
            LayoutRebuilder_ForceRebuildLayoutImmediate(pRVar19,(MethodInfo *)0x0);
            pRVar19 = (this->fields).boostItemsScrollRect;
            if (pRVar19 == (RectTransform *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pDStack_5 = (Dictionary_2_BoostType_Boost_ *)0x0;
            uStack_6 = 0;
            if ((pRVar19->fields)._._._.m_CachedPtr == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar19,(MethodInfo *)0x0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pcVar13 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
              uVar20 = func_?(&UNK_?);
              FUN_?(uVar20,0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pcRam_? = pcVar13;
            (*pcRam_?)();
            pRVar19 = (this->fields).boostItemsContent;
            if (pRVar19 == (RectTransform *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_16 = 0;
            ppDStack_17 = (Dictionary_2_BoostType_Boost_ **)0x0;
            pvVar21 = (pRVar19->fields)._._._.m_CachedPtr;
            if (pvVar21 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar19,(MethodInfo *)0x0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pcVar13 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
              uVar20 = func_?(&UNK_?);
              FUN_?(uVar20,0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pcRam_? = pcVar13;
            (*pcRam_?)(pvVar21,&uStack_16);
            if ((float)uStack_6 < ppDStack_17._0_4_) {
              pRVar19 = (this->fields).boostItemsContent;
              if (pRVar19 == (RectTransform *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                        (pRVar19,(Vector2)((ulonglong)_UNK_? << 0x20),(MethodInfo *)0x0);
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__GamePassesProjectEarningsManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            projectEarningsReport =
                 TypeInfo__GamePassesProjectEarningsManager->static_fields->projectEarningReport;
            if (projectEarningsReport == (ProjectEarningsReport *)0x0) {
              pAVar22 = TypeInfo__GamePassesProjectEarningsManager->static_fields->
                        OnEarningsDataUpdated;
              this_07 = (UnityAction_1_System_Object_ *)
                        FUN_?(
                                     TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                                     );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
              UnityAction_1_System_Object___ctor
                        (this_07,(Object *)this,
                         MethodInfo__BoostEditMenu__OnProjectEarningsUpdatedCallback_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                         ,(MethodInfo *)0x0);
              pDVar23 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar22,(Delegate *)this_07,(MethodInfo *)0x0);
              pAVar24 = 
              TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
              ;
              if (pDVar23 == (Delegate *)0x0) {
                TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
                     (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_
                      *)0x0;
              }
              else {
                pAVar22 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_
                           *)FUN_?(pDVar23,
                                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                                          );
                if (pAVar22 ==
                    (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_
                     *)0x0) {
                  FUN_?(pDVar23,pAVar24);
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
                     pAVar22;
                pAVar24 = 
                TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                ;
                lVar25 = FUN_?(pDVar23,
                                       TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                                      );
                if (lVar25 == 0) {
                  FUN_?(pDVar23,pAVar24);
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar8 = (uint)((ulonglong)TypeInfo__GamePassesProjectEarningsManager->static_fields
                               >> 0xc);
                uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                do {
                  uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                  puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                  LOCK();
                  bVar12 = uVar10 == *puVar11;
                  if (bVar12) {
                    *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar12);
              }
            }
            else {
              BoostEditMenu_UpdateEarningsData(this,projectEarningsReport,(MethodInfo *)0x0);
            }
            return;
          }
          pDVar26 = (pDStack_18->fields)._entries;
          uVar9 = (ulonglong)(uVar8 + 1);
          uStack_14 = CONCAT44(uStack_14._4_4_,uVar8 + 1);
          if (pDVar26 == (Dictionary_2_TKey_TValue_Entry_BoostType_Boost___Array *)0x0)
          goto code_?;
          if ((uint)pDVar26->max_length <= uVar8) goto code_?;
        } while (pDVar26->vector[(int)uVar8].hashCode < 0);
        pBStack_15 = pDVar26->vector[(int)uVar8].value;
        func_?();
        boost = pBStack_15;
        if (this_04 == (MVGameOptionDataObject *)0x0) goto code_?;
        pGVar27 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                            (this_04,(MethodInfo *)0x0);
        if (pGVar27 == (GameBoosterSettingsManager *)0x0) goto code_?;
        this_05 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                  GameBoosterSettings::GameBoosterSettingsManager::
                  GameBoosterSettingsManager_get_ActiveSettingsList(pGVar27,(MethodInfo *)0x0);
        pGVar27 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                            (this_04,(MethodInfo *)0x0);
        if (pGVar27 == (GameBoosterSettingsManager *)0x0) goto code_?;
        collection = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
                     GameBoosterSettings::GameBoosterSettingsManager::
                     GameBoosterSettingsManager_get_InactiveGameBoosterSettingsList
                               (pGVar27,(MethodInfo *)0x0);
        if (this_05 ==
            (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
             *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__InsertRange
                  ((List_1_System_Object_ *)this_05,(this_05->fields)._size,
                   (IEnumerable_1_System_Object_ *)collection,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__AddRange_System__Collections__Generic__IEnumerable<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>_
                   ->klass->rgctx_data[0x12].method);
        for (iVar28 = 0; iVar28 < (this_05->fields)._size; iVar28 = iVar28 + 1) {
          if (boost == (Boost *)0x0) goto code_?;
          pSVar29 = (boost->fields)._BoostKey_k__BackingField;
          lVar25 = FUN_?(this_05,iVar28);
          if (lVar25 == 0) goto code_?;
          pSVar30 = *(String **)(lVar25 + 0x18);
          if ((pSVar29 == pSVar30) ||
             ((((pSVar29 != (String *)0x0 && (pSVar30 != (String *)0x0)) &&
               ((pSVar29->fields)._stringLength == (pSVar30->fields)._stringLength)) &&
              (bVar31 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                  ((uint8_t *)&(pSVar29->fields)._firstChar,
                                   (uint8_t *)&(pSVar30->fields)._firstChar,
                                   (longlong)(pSVar29->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar31 != 0)))) {
            pBVar32 = (this->fields).boostPrefab;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            pBVar32 = (BoostEditMenuItem *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)pBVar32,
                                 BoostEditMenuItem_MethodInfo__UnityEngine__Object__Instantiate<BoostEditMenuItem>_BoostEditMenuItem_
                                );
            if (pBVar32 == (BoostEditMenuItem *)0x0) goto code_?;
            this_06 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pBVar32,(MethodInfo *)0x0);
            if (this_06 == (Transform *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (this_06,(Transform *)(this->fields).boostItemsContent,0,(MethodInfo *)0x0);
            BoostEditMenuItem::BoostEditMenuItem_Initialize(pBVar32,boost,(MethodInfo *)0x0);
            this_02 = (this->fields).boostItems;
            if (this_02 == (List_1_BoostEditMenuItem_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_02,(Object *)pBVar32,
                       MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__Add_BoostEditMenuItem_
                      );
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateEarningsData(ProjectEarningsReport) */

void Assembly-CSharp.dll::BoostEditMenu::BoostEditMenu_UpdateEarningsData
               (BoostEditMenu *this,ProjectEarningsReport *projectEarningsReport,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__get_Item_int_)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).boostItems;
  uVar2 = 0;
  if (pLVar1 != (List_1_BoostEditMenuItem_ *)0x0) {
    lVar3 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      if (pLVar1 == (List_1_BoostEditMenuItem_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pBVar5 = (pLVar1->fields)._items;
      if (pBVar5 == (BoostEditMenuItem__Array *)0x0) break;
      if ((uint)pBVar5->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = *(BoostEditMenuItem **)((longlong)pBVar5->vector + lVar3 + -0x20);
      if (this_00 == (BoostEditMenuItem *)0x0) break;
      BoostEditMenuItem::BoostEditMenuItem_UpdateEarningsText
                (this_00,projectEarningsReport,(MethodInfo *)0x0);
      pLVar1 = (this->fields).boostItems;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (pLVar1 != (List_1_BoostEditMenuItem_ *)0x0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* BoostEditMenu() */

void Assembly-CSharp.dll::BoostEditMenu::BoostEditMenu__ctor(BoostEditMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<BoostEditMenuItem>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_BoostEditMenuItem_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<BoostEditMenuItem>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<BoostEditMenuItem>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).boostItems = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).boostItems >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

