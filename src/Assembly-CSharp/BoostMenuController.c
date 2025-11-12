
/* IEnumerator FixContentPivot() */

IEnumerator *
Assembly-CSharp.dll::BoostMenuController::BoostMenuController_FixContentPivot
          (BoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BoostMenuController___FixContentPivot_d__9);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__BoostMenuController___FixContentPivot_d__9);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* List`1[Boost] GetSortedBoosts(Dictionary`2[TKey,TValue]+ValueCollection[BoostType,Boost],
   BoostController) */

List_1_Boost_ *
Assembly-CSharp.dll::BoostMenuController::BoostMenuController_GetSortedBoosts
          (BoostMenuController *this,
          Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *boosts,
          BoostController *boostController,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<Boost>__Add_Boost_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Boost>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<BoostType>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Boost>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<BoostType>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<Boost>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  DStack_1._dictionary =
       (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
        *)0x0;
  DStack_1._index = 0;
  DStack_1._version = 0;
  DStack_1._currentValue = (Object *)0x0;
  pLVar2 = (List_1_Boost_ *)FUN_?(TypeInfo__System__Collections__Generic__List<Boost>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<Boost>__List__);
  iStack_3 = 0;
  pLStack_4 = pLVar2;
  if (boostController != (BoostController *)0x0) {
    while (iVar5 = iStack_3, pLVar6 = (boostController->fields).boostPriorityList,
          pLVar6 != (List_1_BoostType_ *)0x0) {
      if ((pLVar6->fields)._size <= iStack_3) {
        if (boosts != (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0) {
          pDStack_7 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)(boosts->fields)._dictionary;
          uStack_8 = 0;
          uStack_9 = 0;
          if (iRam_? != 0) {
            uVar10 = (uint)((ulonglong)&pDStack_7 >> 0xc);
            lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
            do {
              uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
              puVar13 = (ulonglong *)(lVar11 + 0xADDR);
              LOCK();
              bVar14 = uVar12 == *puVar13;
              if (bVar14) {
                *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
              }
              UNLOCK();
            } while (!bVar14);
          }
          if (pDStack_7 ==
              (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)0x0) {
            FUN_?();
            pcVar15 = (code *)swi(3);
            pLVar2 = (List_1_Boost_ *)(*pcVar15)();
            return pLVar2;
          }
          uVar10 = (pDStack_7->fields)._version;
          uStack_8 = (ulonglong)uVar10 << 0x20;
          uStack_9 = 0;
          DStack_1._8_8_ = (ulonglong)uVar10 << 0x20;
          DStack_1._currentValue = (Object *)0x0;
          uStack_16 = 0;
          pDStack_17 = &DStack_1;
          DStack_1._dictionary = pDStack_7;
          while( true ) {
            if (DStack_1._dictionary ==
                (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)0x0) goto code_?;
            if (DStack_1._version != ((DStack_1._dictionary)->fields)._version) break;
            uVar12 = DStack_1._8_8_ & 0xffffffff;
            do {
              if (DStack_1._dictionary ==
                  (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)0x0) goto code_?;
              uVar10 = (uint)uVar12;
              if ((uint)((DStack_1._dictionary)->fields)._count <= uVar10) {
                return pLVar2;
              }
              pDVar18 = ((DStack_1._dictionary)->fields)._entries;
              uVar12 = (ulonglong)(uVar10 + 1);
              DStack_1._index = uVar10 + 1;
              if (pDVar18 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object___Array
                             *)0x0) goto code_?;
              if ((uint)pDVar18->max_length <= uVar10) goto code_?;
            } while (pDVar18->vector[(int)uVar10].hashCode < 0);
            DStack_1._currentValue = pDVar18->vector[(int)uVar10].value;
            func_?();
            pOVar19 = DStack_1._currentValue;
            bVar14 = false;
            iVar5 = 0;
            if (pLVar2 == (List_1_Boost_ *)0x0) goto code_?;
            for (; iVar5 < (pLVar2->fields)._size; iVar5 = iVar5 + 1) {
              lVar11 = FUN_?(pLVar2,iVar5);
              if (lVar11 == 0) goto code_?;
              if ((Boost *)pOVar19 == (Boost *)0x0) goto code_?;
              if (*(int *)(lVar11 + 0x10) ==
                  ((Boost__Fields *)((longlong)pOVar19 + 0x10))->_Type_k__BackingField) {
                bVar14 = true;
              }
            }
            if (!bVar14) {
              FUN_?(pLVar2,pOVar19);
            }
          }
code_?:
          mscorlib.dll::System::ThrowHelper::
          ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                    ((MethodInfo *)0x0);
code_?:
          FUN_?();
          FUN_?();
          pcVar15 = (code *)swi(3);
          pLVar2 = (List_1_Boost_ *)(*pcVar15)();
          return pLVar2;
        }
        break;
      }
      if (boosts == (Dictionary_2_TKey_TValue_ValueCollection_BoostType_Boost_ *)0x0) break;
      pDStack_7 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)(boosts->fields)._dictionary;
      uStack_8 = 0;
      uStack_9 = 0;
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)&pDStack_7 >> 0xc);
        lVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
        do {
          uVar12 = *(ulonglong *)(lVar11 + 0xADDR);
          puVar13 = (ulonglong *)(lVar11 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      if (pDStack_7 ==
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
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
        goto code_?;
      }
      uStack_8 = (ulonglong)(uint)(pDStack_7->fields)._version << 0x20;
      uStack_9 = 0;
      DStack_1._index = (undefined4)uStack_8;
      DStack_1._version = uStack_8._4_4_;
      DStack_1._currentValue = (Object *)0x0;
      uStack_16 = 0;
      pDStack_17 = &DStack_1;
      DStack_1._dictionary = pDStack_7;
      while (bVar20 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[UnityEngine::
                     UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                     Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__MoveNext
                               (&DStack_1,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                               ), pOVar19 = DStack_1._currentValue, bVar20 != 0) {
        if ((Boost *)DStack_1._currentValue == (Boost *)0x0) goto code_?;
        RVar21 = (RegexCharClass_SingleRange)
                ((Boost__Fields *)((longlong)DStack_1._currentValue + 0x10))->_Type_k__BackingField
        ;
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (boostController->fields).boostPriorityList;
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        RVar22 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,iVar5,
                           MethodInfo__System__Collections__Generic__List<BoostType>__get_Item_int_)
        ;
        if (RVar21 == RVar22) {
          if (pLVar2 == (List_1_Boost_ *)0x0) goto code_?;
          FUN_?(pLVar2,pOVar19);
        }
      }
      iStack_3 = iVar5 + 1;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar15 = (code *)swi(3);
  pLVar2 = (List_1_Boost_ *)(*pcVar15)();
  return pLVar2;
}


/* Void Initialize() */

void Assembly-CSharp.dll::BoostMenuController::BoostMenuController_Initialize
               (BoostMenuController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__UI__LayoutRebuilder);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Boost>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::GameBoosterSettings::GameBoosterSettingTypes::GameBoosterSettingWithGoldSetting>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<Boost>__get_Item_int_);
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
                  BoostMenuItem_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuItem>_BoostMenuItem__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
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
     ((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar3 != (MVLocalPlayer *)0x0 &&
      (this_01 = (pMVar3->fields).boostController, this_01 != (BoostController *)0x0)))) {
    boosts = BoostController::BoostController_GetAllBoosts(this_01,(MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_02 != (MVWorldObjectClientManager *)0x0) &&
       ((this_03 = (MVGameOptionDataObject *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                             (this_02,
                              MVGameOptionDataObject_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVGameOptionDataObject>__
                             ), this_03 != (MVGameOptionDataObject *)0x0 &&
        (this_04 = MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
                             (this_03,(MethodInfo *)0x0),
        this_04 != (GameBoosterSettingsManager *)0x0)))) {
      pLVar4 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
               GameBoosterSettings::GameBoosterSettingsManager::
               GameBoosterSettingsManager_get_ActiveSettingsList(this_04,(MethodInfo *)0x0);
      pLVar5 = BoostMenuController_GetSortedBoosts(this,boosts,this_01,(MethodInfo *)0x0);
      iVar6 = 0;
      if (pLVar5 != (List_1_Boost_ *)0x0) {
        while( true ) {
          if ((pLVar5->fields)._size <= iVar6) {
            layoutRoot = (this->fields).boostItemsContent;
            if (*(int *)&(TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
            LayoutRebuilder_ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__BoostMenuController___FixContentPivot_d__9);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            lVar7 = FUN_?(TypeInfo__BoostMenuController___FixContentPivot_d__9);
            bVar8 = iRam_? != 0;
            *(undefined4 *)(lVar7 + 0x10) = 0;
            *(BoostMenuController **)(lVar7 + 0x20) = this;
            if (bVar8) {
              uVar9 = (uint)(lVar7 + 0x20U >> 0xc);
              puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar11 = *puVar10;
                LOCK();
                uVar12 = *puVar10;
                if (uVar11 == uVar12) {
                  *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
                }
                UNLOCK();
              } while (uVar11 != uVar12);
            }
            if (lVar7 == 0) {
              uVar13 = func_?(&TypeInfo__System__NullReferenceException);
              this_05 = (NullReferenceException *)func_?(uVar13);
              pSVar14 = (String *)func_?(&StringLiteral_routine_is_null);
              mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                        (this_05,pSVar14,(MethodInfo *)0x0);
              uVar13 = func_?(&
                                           MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                          );
              FUN_?(this_05,uVar13);
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            bVar16 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                    MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
            if (bVar16 == 0) {
              uVar13 = func_?(&TypeInfo__System__ArgumentException);
              this_06 = (InvalidEnumArgumentException *)func_?(uVar13);
              pSVar14 = (String *)
                        func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
              System.dll::System::ComponentModel::InvalidEnumArgumentException::
              InvalidEnumArgumentException__ctor_1(this_06,pSVar14,(MethodInfo *)0x0);
              uVar13 = func_?(&
                                           MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                          );
              FUN_?(this_06,uVar13);
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (this == (BoostMenuController *)0x0) {
              FUN_?();
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pvVar17 = (this->fields)._._._._.m_CachedPtr;
            if (pvVar17 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pcVar15 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
              uVar13 = func_?(&UNK_?);
              FUN_?(uVar13,0);
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pcRam_? = pcVar15;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar17,lVar7);
            return;
          }
          iVar18 = 0;
          if (pLVar4 == (List_1_MV_WorldObject_KogamaSettings_SpecializedSettingsTypes_GameBoosterSettings_GameBoosterSettingTypes_GameBoosterSettingWithGoldSetting_
                         *)0x0) break;
          for (; iVar18 < (pLVar4->fields)._size; iVar18 = iVar18 + 1) {
            lVar7 = FUN_?(pLVar5);
            if (lVar7 == 0) goto code_?;
            if (*(char *)(lVar7 + 0x30) != '\0') {
              lVar7 = FUN_?(pLVar5,iVar6);
              if (lVar7 == 0) goto code_?;
              lVar7 = *(longlong *)(lVar7 + 0x18);
              lVar19 = FUN_?(pLVar4,iVar18);
              if (lVar19 == 0) goto code_?;
              lVar19 = *(longlong *)(lVar19 + 0x18);
              if ((lVar7 == lVar19) ||
                 ((((lVar7 != 0 && (lVar19 != 0)) &&
                   (*(int *)(lVar7 + 0x10) == *(int *)(lVar19 + 0x10))) &&
                  (bVar16 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                     ((uint8_t *)(lVar7 + 0x14),(uint8_t *)(lVar19 + 0x14),
                                      (longlong)*(int *)(lVar7 + 0x10) * 2,(MethodInfo *)0x0),
                  bVar16 != 0)))) {
                pBVar20 = (this->fields).boostPrefab;
                parent = (Transform *)(this->fields).boostItemsContent;
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pBVar20 = (BoostMenuItem *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                    ((Object *)pBVar20,parent,0,
                                     BoostMenuItem_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuItem>_BoostMenuItem__UnityEngine__Transform__bool_
                                    );
                boost = (Boost *)FUN_?(pLVar5,iVar6);
                lVar7 = FUN_?(pLVar5,iVar6);
                if ((lVar7 == 0) ||
                   (bVar16 = BoostController::BoostController_IsBoostActive
                                      (this_01,*(BoostType__Enum *)(lVar7 + 0x10),(MethodInfo *)0x0
                                      ), pBVar20 == (BoostMenuItem *)0x0))
                goto code_?;
                BoostMenuItem::BoostMenuItem_Initialize(pBVar20,boost,bVar16,(MethodInfo *)0x0);
              }
            }
          }
          iVar6 = iVar6 + 1;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnAdFinished(Boolean) */

void Assembly-CSharp.dll::BoostMenuController::BoostMenuController_OnAdFinished
               (BoostMenuController *this,bool adWasSuccessful,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BoostType);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BoostMenuController____c___OnAdFinished_b__8_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BoostMenuController____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_RewardRequest_Booster_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (adWasSuccessful == 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__BoostMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BoostMenuController____c);
    }
    this_02 = TypeInfo__BoostMenuController____c->static_fields->__9__8_0;
    if (this_02 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__BoostMenuController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__BoostMenuController____c);
      }
      object = TypeInfo__BoostMenuController____c->static_fields->__9;
      this_02 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                 MethodInfo__BoostMenuController____c___OnAdFinished_b__8_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__BoostMenuController____c->static_fields->__9__8_0 = this_02;
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)&TypeInfo__BoostMenuController____c->static_fields->__9__8_0 >>
                       0xc);
        puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar3 = *puVar2;
          LOCK();
          uVar4 = *puVar2;
          if (uVar3 == uVar4) {
            *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (uVar3 != uVar4);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar5 == (MVGameControllerBase *)0x0) ||
         (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
        (this_00 = (pMVar6->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
       ((pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
        pMVar7 == (MVLocalPlayer *)0x0 ||
        (this_01 = (pMVar7->fields).boostController, this_01 == (BoostController *)0x0)))) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    BoostController::BoostController_ActivateBoost
              (this_01,(this->fields).adRewardType,(MethodInfo *)0x0);
    EStack_9.klass = (Enum__Class *)TypeInfo__BoostType;
    iStack_10 = (this->fields).adRewardType;
    EStack_9.monitor = (MonitorData *)0xffffffffffffffff;
    pSVar11 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_9,(MethodInfo *)0x0);
    pSVar11 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Ad_RewardRequest_Booster_,pSVar11,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar11,1,(MethodInfo *)0x0);
  }
  if ((this->fields).boostUnlockedCallback != (Action_1_Boolean_ *)0x0) {
    pAVar12 = (this->fields).boostUnlockedCallback;
    (*(pAVar12->fields)._._.invoke_impl)
              ((pAVar12->fields)._._.method_code,adWasSuccessful,(pAVar12->fields)._._.method);
  }
  return;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::BoostMenuController::BoostMenuController_RewardedAdCallback
               (BoostMenuController *this,RewardedAdResult__Enum obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BoostType);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BoostMenuController____c___OnAdFinished_b__8_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BoostMenuController____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_RewardRequest_Booster_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == RewardedAdResult__Enum_RewardUnlocked) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
         (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
        (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
       ((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
        pMVar3 == (MVLocalPlayer *)0x0 ||
        (this_01 = (pMVar3->fields).boostController, this_01 == (BoostController *)0x0)))) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    BoostController::BoostController_ActivateBoost
              (this_01,(this->fields).adRewardType,(MethodInfo *)0x0);
    EStack_5.klass = (Enum__Class *)TypeInfo__BoostType;
    iStack_6 = (this->fields).adRewardType;
    EStack_5.monitor = (MonitorData *)0xffffffffffffffff;
    pSVar7 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_5,(MethodInfo *)0x0);
    pSVar7 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_Ad_RewardRequest_Booster_,pSVar7,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar7,1,(MethodInfo *)0x0);
  }
  else {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__BoostMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BoostMenuController____c);
    }
    this_02 = TypeInfo__BoostMenuController____c->static_fields->__9__8_0;
    if (this_02 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__BoostMenuController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__BoostMenuController____c);
      }
      object = TypeInfo__BoostMenuController____c->static_fields->__9;
      this_02 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                 MethodInfo__BoostMenuController____c___OnAdFinished_b__8_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__BoostMenuController____c->static_fields->__9__8_0 = this_02;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&TypeInfo__BoostMenuController____c->static_fields->__9__8_0 >>
                       0xc);
        puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar9;
          LOCK();
          uVar11 = *puVar9;
          if (uVar10 == uVar11) {
            *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar11);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
  }
  if ((this->fields).boostUnlockedCallback != (Action_1_Boolean_ *)0x0) {
    pAVar12 = (this->fields).boostUnlockedCallback;
    (*(pAVar12->fields)._._.invoke_impl)
              ((pAVar12->fields)._._.method_code,obj == RewardedAdResult__Enum_RewardUnlocked,
               (pAVar12->fields)._._.method);
  }
  return;
}


/* Void TryShowAd(BoostType, Action`1[Boolean]) */

void Assembly-CSharp.dll::BoostMenuController::BoostMenuController_TryShowAd
               (BoostMenuController *this,BoostType__Enum type,Action_1_Boolean_ *OnUnlockedCallback
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BoostMenuController__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).boostUnlockedCallback = OnUnlockedCallback;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).boostUnlockedCallback >> 0xc);
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
  bVar1 = cRam_? == '\0';
  (this->fields).adRewardType = type;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
      (IEditModeUI *)0x0) {
    pIVar6 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
    if (pIVar6 != (IAdManager *)0x0) {
      cVar7 = FUN_?();
      if (cVar7 == '\0') {
        cVar7 = '\0';
        goto code_?;
      }
      pIVar6 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
      this_02 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(
                             TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_02,(Object *)this,
                 MethodInfo__BoostMenuController__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 ,(MethodInfo *)0x0);
      if (pIVar6 != (IAdManager *)0x0) {
        iStack_8 = 1;
        FUN_?();
        return;
      }
    }
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  cVar7 = '\x01';
code_?:
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BoostType);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BoostMenuController____c___OnAdFinished_b__8_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BoostMenuController____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_RewardRequest_Booster_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cVar7 == '\0') {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__BoostMenuController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__BoostMenuController____c);
    }
    this_03 = TypeInfo__BoostMenuController____c->static_fields->__9__8_0;
    if (this_03 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__BoostMenuController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__BoostMenuController____c);
      }
      object = TypeInfo__BoostMenuController____c->static_fields->__9;
      this_03 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)object,
                 MethodInfo__BoostMenuController____c___OnAdFinished_b__8_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__BoostMenuController____c->static_fields->__9__8_0 = this_03;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&TypeInfo__BoostMenuController____c->static_fields->__9__8_0 >>
                       0xc);
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
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar10 == (MVGameControllerBase *)0x0) ||
         (pMVar11 = (pMVar10->fields).game, pMVar11 == (MVNetworkGame *)0x0)) ||
        (this_00 = (pMVar11->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
       ((pMVar12 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
        pMVar12 == (MVLocalPlayer *)0x0 ||
        (this_01 = (pMVar12->fields).boostController, this_01 == (BoostController *)0x0)))) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    BoostController::BoostController_ActivateBoost
              (this_01,(this->fields).adRewardType,(MethodInfo *)0x0);
    EStack_13.klass = (Enum__Class *)TypeInfo__BoostType;
    iStack_8 = (this->fields).adRewardType;
    EStack_13.monitor = (MonitorData *)0xffffffffffffffff;
    pSVar14 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
    pSVar14 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_Ad_RewardRequest_Booster_,pSVar14,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    StatHatWrapper::StatHatWrapper_Count(pSVar14,1,(MethodInfo *)0x0);
  }
  if ((this->fields).boostUnlockedCallback != (Action_1_Boolean_ *)0x0) {
    pAVar15 = (this->fields).boostUnlockedCallback;
    (*(pAVar15->fields)._._.invoke_impl)
              ((pAVar15->fields)._._.method_code,cVar7,(pAVar15->fields)._._.method);
  }
  return;
}

