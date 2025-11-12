
/* Void ActivateBar() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ActivateBar
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).lockedTierIcon;
  if ((this_00 != (Image *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar2 != (GameSessionData *)0x0) {
      if ((pGVar2->fields).gameMode != 0) {
        pGVar1 = (this->fields).unlockedText;
        if (pGVar1 == (GameObject *)0x0) goto code_?;
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar1,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          pGVar1 = (this->fields).unlockedText;
          if (pGVar1 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,1,(MethodInfo *)0x0);
        }
      }
      pTVar4 = (this->fields).progressHeader;
      if (pTVar4 != (Text *)0x0) {
        (*(pTVar4->klass->vtable).set_text.methodPtr)();
        pPVar5 = (this->fields).progressBar;
        if (pPVar5 != (ProgressBar *)0x0) {
          pSVar6 = (pPVar5->fields).progressBar;
          (pPVar5->fields).progress = 1.0;
          if (pSVar6 != (Scrollbar *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                      (pSVar6,_UNK_?,(MethodInfo *)0x0);
            pPVar5 = (this->fields).disabledProgressBar;
            if (pPVar5 != (ProgressBar *)0x0) {
              pSVar6 = (pPVar5->fields).progressBar;
              (pPVar5->fields).progress = 1.0;
              if (pSVar6 != (Scrollbar *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                          (pSVar6,_UNK_?,(MethodInfo *)0x0);
                pGVar1 = (this->fields).purchaseButtonObject;
                if (pGVar1 != (GameObject *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar7 = (pGVar1->fields)._.m_CachedPtr;
                  if (pvVar7 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                  cVar10 = (*pcRam_?)(pvVar7);
                  if (cVar10 != '\0') {
                    pGVar1 = (this->fields).purchaseButtonObject;
                    if (pGVar1 == (GameObject *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar1,0,(MethodInfo *)0x0);
                  }
                  pGVar1 = (this->fields).freeTryUI;
                  if (pGVar1 != (GameObject *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar7 = (pGVar1->fields)._.m_CachedPtr;
                    if (pvVar7 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    pcVar8 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                      uVar9 = func_?(&UNK_?);
                      FUN_?(uVar9,0);
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    pcRam_? = pcVar8;
                    cVar10 = (*pcRam_?)(pvVar7);
                    if (cVar10 != '\0') {
                      pGVar1 = (this->fields).freeTryUI;
                      if (pGVar1 == (GameObject *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar1,0,(MethodInfo *)0x0);
                    }
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
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void AddTierContent(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_AddTierContent
               (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  GamePassesShop_CreateSpawnRoleContent
            (this,(uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  GamePassesXpRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesXpRewardInfo>_GamePassesXpRewardInfo__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tierListContainer;
  pGVar1 = (this->fields).xpRewardInfoPrefab;
  if (this_00 != (RectTransform *)0x0) {
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pGVar1 = (GamePassesXpRewardInfo *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pGVar1,parent,0,
                        GamePassesXpRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesXpRewardInfo>_GamePassesXpRewardInfo__UnityEngine__Transform__bool_
                       );
    if (pGVar1 != (GamePassesXpRewardInfo *)0x0) {
      GamePassesXpRewardInfo::GamePassesXpRewardInfo_Initialize
                (pGVar1,gamePassTierToDisplay & 0xff,(MethodInfo *)0x0);
      pGVar2 = (this->fields).contentCuller;
      if (pGVar2 != (GamePassesShopContentCuller *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
                        ,pGVar1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar3 = 
        MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
        ;
        pLVar4 = (pGVar2->fields).gamePassShopContentList;
        if (pLVar4 != (List_1_IGamePassShopContent_ *)0x0) {
          piVar5 = &(pLVar4->fields)._version;
          *piVar5 = *piVar5 + 1;
          pIVar6 = (pLVar4->fields)._items;
          if (pIVar6 != (IGamePassShopContent__Array *)0x0) {
            uVar7 = (pLVar4->fields)._size;
            if (uVar7 < (uint)pIVar6->max_length) {
              (pLVar4->fields)._size = uVar7 + 1;
            }
            else {
              uVar7 = (pLVar4->fields)._size;
              FUN_?(pLVar4,uVar7 + 1,
                            (pMVar3->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                            rgctxDataDummy,pIVar6,unaff_RDI);
              pIVar6 = (pLVar4->fields)._items;
              (pLVar4->fields)._size = uVar7 + 1;
              if (pIVar6 == (IGamePassShopContent__Array *)0x0) {
                FUN_?();
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            if ((uint)pIVar6->max_length <= uVar7) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            bVar9 = iRam_? != 0;
            pIVar6->vector[(int)uVar7] = (IGamePassShopContent *)pGVar1;
            if (bVar9) {
              uVar7 = (uint)((ulonglong)(pIVar6->vector + (int)uVar7) >> 0xc);
              puVar10 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar11 = *puVar10;
                LOCK();
                uVar12 = *puVar10;
                if (uVar11 == uVar12) {
                  *puVar10 = uVar11 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (uVar11 != uVar12);
            }
            return;
          }
        }
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Int32 CalculateTotalSpawnRoleCost(MVAvatarSpawnRoleCreator) */

int32_t Assembly-CSharp.dll::GamePassesShop::GamePassesShop_CalculateTotalSpawnRoleCost
                  (GamePassesShop *this,MVAvatarSpawnRoleCreator *spawnRoleCreator,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((spawnRoleCreator != (MVAvatarSpawnRoleCreator *)0x0) &&
     (this_00 = MVAvatarSpawnRoleCreator::
                MVAvatarSpawnRoleCreator_get_AttributeSettingsManagerAvatar
                          (spawnRoleCreator,(MethodInfo *)0x0),
     this_00 != (AttributeSettingsManager *)0x0)) {
    pKVar1 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::SpecializedSettingsTypes::
             AttributeSettings::AttributeSettingsManager::AttributeSettingsManager_get_Settings
                       (this_00,(MethodInfo *)0x0);
    iVar2 = 0;
    if (pKVar1 != (KogamaSettingWrapperBase *)0x0) {
      bVar3 = (
              TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
              ->_1).naturalAligment;
      if (((pKVar1->klass->_1).naturalAligment < bVar3) ||
         ((pKVar1->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          (Il2CppClass *)
          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
         )) {
        FUN_?(pKVar1);
        pcVar4 = (code *)swi(3);
        iVar2 = (*pcVar4)();
        return iVar2;
      }
      iVar2 = 0;
      pKVar5 = pKVar1[1].klass;
      if (pKVar5 == (KogamaSettingWrapperBase__Class *)0x0) goto code_?;
      uStack_6 = 0;
      uStack_7 = 0;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&pKStack_9 >> 0xc);
        puVar10 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar10;
          LOCK();
          uVar12 = *puVar10;
          if (uVar11 == uVar12) {
            *puVar10 = uVar11 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar12);
      }
      uStack_13 = (ulonglong)*(uint *)&(pKVar5->_0).byval_arg.field_0xc;
      uStack_14 = 2;
      DStack_15._version = (undefined4)uStack_13;
      DStack_15._index = uStack_13._4_4_;
      DStack_15._current.key = (Object *)0x0;
      DStack_15._current.value = (Object *)0x0;
      DStack_15._getEnumeratorRetType = 2;
      DStack_15._36_4_ = 0;
      pKStack_9 = pKVar5;
      DStack_15._dictionary = (Dictionary_2_System_Object_System_Object_ *)pKVar5;
      while (bVar16 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                               (&DStack_15,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__MoveNext__
                               ),
            spawnRoleCreator = (MVAvatarSpawnRoleCreator *)DStack_15._current.value,
            unaff_RSI = 
            TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
            , bVar16 != 0) {
        if ((MVAvatarSpawnRoleCreator *)DStack_15._current.value == (MVAvatarSpawnRoleCreator *)0x0)
        goto code_?;
        lVar17 = FUN_?(DStack_15._current.value,
                               TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                              );
        unaff_R14 = 
        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
        ;
        uVar18 = extraout_XMM0_Da;
        if (lVar17 == 0) goto code_?;
        plVar19 = (longlong *)
                  FUN_?(spawnRoleCreator,
                                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                               );
        unaff_RSI = (IAttributeSetting__Class *)0x0;
        if (plVar19 == (longlong *)0x0) goto code_?;
        lVar17 = *plVar19;
        uVar20 = 0;
        if (*(ushort *)(lVar17 + 0x12e) != 0) {
          do {
            if (*(IAttributeSetting__Class **)
                 (*(longlong *)(lVar17 + 0xb0) + (ulonglong)uVar20 * 0x10) ==
                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
               ) {
              puVar21 = (undefined8 *)
                        ((longlong)
                         *(int *)(*(longlong *)(lVar17 + 0xb0) + 8 + (ulonglong)uVar20 * 0x10) *
                         0x10 + 0x138 + lVar17);
              goto code_?;
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < *(ushort *)(lVar17 + 0x12e));
        }
        puVar21 = (undefined8 *)
                  FUN_?(plVar19,
                                TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__AttributeSettings__AttributeSettingTypes__IAttributeSetting
                                ,0);
code_?:
        iVar22 = (*(code *)*puVar21)(plVar19,puVar21[1]);
        iVar2 = iVar2 + iVar22;
      }
    }
    return iVar2;
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  uVar18 = FUN_?(spawnRoleCreator,unaff_R14);
code_?:
  FUN_?(uVar18,unaff_RSI);
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar2 = (*pcVar4)();
  return iVar2;
}


/* Void CreateSpawnPointInfo(MVTeam) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_CreateSpawnPointInfo
               (GamePassesShop *this,MVTeam__Enum team,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  SpawnPointInfo_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointInfo>_SpawnPointInfo__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tierListContainer;
  original = (this->fields).spawnPointInfoPrefab;
  if (this_00 == (RectTransform *)0x0) goto code_?;
  parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this_00,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                      ((Object *)original,parent,0,
                       SpawnPointInfo_MethodInfo__UnityEngine__Object__Instantiate<SpawnPointInfo>_SpawnPointInfo__UnityEngine__Transform__bool_
                      );
  if (pOVar1 == (Object *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Styles);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  darkTeam = 0;
  if (team == MVTeam__Enum_None) {
code_?:
    darkTeam = 1;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar2 == (MVGameControllerBase *)0x0) ||
         (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
        (this_01 = (pMVar3->fields).teamManager, this_01 == (MVTeamManager *)0x0)) ||
       (pLVar4 = MVTeamManager::MVTeamManager_GetTeamList(this_01,(MethodInfo *)0x0),
       pLVar4 == (List_1_MV_WorldObject_MVTeam_ *)0x0)) goto code_?;
    if ((pLVar4->fields)._size < 2) goto code_?;
  }
  pOVar5 = pOVar1[2].klass;
  if (*(int *)&(TypeInfo__Styles->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar6 = Styles::Styles_GetTeamColor(&CStack_7,team,darkTeam,(MethodInfo *)0x0);
  if (pOVar5 != (Object__Class *)0x0) {
    pIVar8 = (pOVar5->_0).image;
    CStack_7.r = pCVar6->r;
    CStack_7.g = pCVar6->g;
    CStack_7.b = pCVar6->b;
    CStack_7.a = pCVar6->a;
    (**(code **)&pIVar8[9].customAttributeCount)(pOVar5,&CStack_7,pIVar8[9].metadataHandle);
    pGVar9 = (this->fields).contentCuller;
    if (pGVar9 != (GamePassesShopContentCuller *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
                      ,pOVar1,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar10 = 
      MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
      ;
      pLVar11 = (pGVar9->fields).gamePassShopContentList;
      if (pLVar11 != (List_1_IGamePassShopContent_ *)0x0) {
        piVar12 = &(pLVar11->fields)._version;
        *piVar12 = *piVar12 + 1;
        pIVar13 = (pLVar11->fields)._items;
        if (pIVar13 != (IGamePassShopContent__Array *)0x0) {
          uVar14 = (pLVar11->fields)._size;
          if (uVar14 < (uint)pIVar13->max_length) {
            (pLVar11->fields)._size = uVar14 + 1;
          }
          else {
            uVar14 = (pLVar11->fields)._size;
            FUN_?(pLVar11,uVar14 + 1,
                          (pMVar10->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                          rgctxDataDummy);
            pIVar13 = (pLVar11->fields)._items;
            (pLVar11->fields)._size = uVar14 + 1;
            if (pIVar13 == (IGamePassShopContent__Array *)0x0) {
              FUN_?();
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
          }
          if ((uint)pIVar13->max_length <= uVar14) {
            FUN_?();
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          bVar16 = iRam_? != 0;
          pIVar13->vector[(int)uVar14] = (IGamePassShopContent *)pOVar1;
          if (bVar16) {
            uVar14 = (uint)((ulonglong)(pIVar13->vector + (int)uVar14) >> 0xc);
            puVar17 = (ulonglong *)((ulonglong)((uVar14 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar18 = *puVar17;
              LOCK();
              uVar19 = *puVar17;
              if (uVar18 == uVar19) {
                *puVar17 = uVar18 | 1L << (uVar14 & 0x3f);
              }
              UNLOCK();
            } while (uVar18 != uVar19);
          }
          return;
        }
      }
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void CreateSpawnRoleContent(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_CreateSpawnRoleContent
               (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = GamePassesShop_GetSortedSpawnRoles
                     (this,(uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
  spawnRoleIndex = 0;
  if (pLVar1 != (List_1_MVAvatarSpawnRoleCreator_ *)0x0) {
    lVar2 = 0x20;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)spawnRoleIndex) {
        return;
      }
      if ((uint)(pLVar1->fields)._size <= spawnRoleIndex) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pMVar4 = (pLVar1->fields)._items;
      if (pMVar4 == (MVAvatarSpawnRoleCreator__Array *)0x0) break;
      if ((uint)pMVar4->max_length <= spawnRoleIndex) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(MVAvatarSpawnRoleCreator **)((longlong)pMVar4->vector + lVar2 + -0x20);
      if (cRam_? == '\0') {
        FUN_?(&
                      GamePassesSpawnRoleRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesSpawnRoleRewardInfo>_GamePassesSpawnRoleRewardInfo__UnityEngine__Transform__bool_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (this->fields).tierListContainer;
      pGVar5 = (this->fields).spawnRoleRewardInfoPrefab;
      if (this_01 == (RectTransform *)0x0) break;
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_01,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar5 = (GamePassesSpawnRoleRewardInfo *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)pGVar5,parent,0,
                          GamePassesSpawnRoleRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesSpawnRoleRewardInfo>_GamePassesSpawnRoleRewardInfo__UnityEngine__Transform__bool_
                         );
      if (this_00 == (MVAvatarSpawnRoleCreator *)0x0) break;
      pMVar6 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_AvatarPrototype
                         (this_00,(MethodInfo *)0x0);
      if ((pMVar6 == (MVPreviewAvatar *)0x0) || (pGVar5 == (GamePassesSpawnRoleRewardInfo *)0x0))
      break;
      in_stack_7 =
           CONCAT31((int3)(in_stack_7 >> 8),(char)gamePassTierToDisplay);
      GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Initialize
                (pGVar5,spawnRoleIndex,(pMVar6->fields)._._.gameObject,this_00,
                 in_stack_7,(MethodInfo *)0x0);
      this_02 = (this->fields).contentCuller;
      if (this_02 == (GamePassesShopContentCuller *)0x0) break;
      GamePassesShopContentCuller::GamePassesShopContentCuller_AddContentElement
                (this_02,(IGamePassShopContent *)pGVar5,(MethodInfo *)0x0);
      spawnRoleIndex = spawnRoleIndex + 1;
      lVar2 = lVar2 + 8;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CreateSpawnRoleInfo(Int32, MVAvatarSpawnRoleCreator, GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_CreateSpawnRoleInfo
               (GamePassesShop *this,int32_t spawnRoleIndex,MVAvatarSpawnRoleCreator *spawnRole,
               GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  GamePassesSpawnRoleRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesSpawnRoleRewardInfo>_GamePassesSpawnRoleRewardInfo__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tierListContainer;
  pGVar1 = (this->fields).spawnRoleRewardInfoPrefab;
  if (this_00 != (RectTransform *)0x0) {
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pGVar1 = (GamePassesSpawnRoleRewardInfo *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pGVar1,parent,0,
                        GamePassesSpawnRoleRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesSpawnRoleRewardInfo>_GamePassesSpawnRoleRewardInfo__UnityEngine__Transform__bool_
                       );
    if (((spawnRole != (MVAvatarSpawnRoleCreator *)0x0) &&
        (pMVar2 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_AvatarPrototype
                             (spawnRole,(MethodInfo *)0x0), pMVar2 != (MVPreviewAvatar *)0x0)) &&
       (pGVar1 != (GamePassesSpawnRoleRewardInfo *)0x0)) {
      GamePassesSpawnRoleRewardInfo::GamePassesSpawnRoleRewardInfo_Initialize
                (pGVar1,spawnRoleIndex,(pMVar2->fields)._._.gameObject,spawnRole,
                 CONCAT31((int3)((uint)in_stack_3 >> 8),(char)tier),(MethodInfo *)0x0
                );
      pGVar4 = (this->fields).contentCuller;
      if (pGVar4 != (GamePassesShopContentCuller *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
                        ,pGVar1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar5 = 
        MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
        ;
        pLVar6 = (pGVar4->fields).gamePassShopContentList;
        if (pLVar6 != (List_1_IGamePassShopContent_ *)0x0) {
          piVar7 = &(pLVar6->fields)._version;
          *piVar7 = *piVar7 + 1;
          pIVar8 = (pLVar6->fields)._items;
          if (pIVar8 != (IGamePassShopContent__Array *)0x0) {
            uVar9 = (pLVar6->fields)._size;
            if (uVar9 < (uint)pIVar8->max_length) {
              (pLVar6->fields)._size = uVar9 + 1;
            }
            else {
              uVar9 = (pLVar6->fields)._size;
              FUN_?(pLVar6,uVar9 + 1,
                            (pMVar5->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                            rgctxDataDummy,pIVar8,unaff_RDI);
              pIVar8 = (pLVar6->fields)._items;
              (pLVar6->fields)._size = uVar9 + 1;
              if (pIVar8 == (IGamePassShopContent__Array *)0x0) {
                FUN_?();
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            if ((uint)pIVar8->max_length <= uVar9) {
              FUN_?();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            bVar11 = iRam_? != 0;
            pIVar8->vector[(int)uVar9] = (IGamePassShopContent *)pGVar1;
            if (bVar11) {
              uVar9 = (uint)((ulonglong)(pIVar8->vector + (int)uVar9) >> 0xc);
              puVar12 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar13 = *puVar12;
                LOCK();
                uVar14 = *puVar12;
                if (uVar13 == uVar14) {
                  *puVar12 = uVar13 | 1L << (uVar9 & 0x3f);
                }
                UNLOCK();
              } while (uVar13 != uVar14);
            }
            return;
          }
        }
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void CreateUnlockedAccessItemsInfo(GamePassTier,
   Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_CreateUnlockedAccessItemsInfo
               (GamePassesShop *this,GamePassTier__Enum tier,
               Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *tierShopData
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TierUnlockedAccessItemsRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedAccessItemsRewardInfo>_TierUnlockedAccessItemsRewardInfo__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = GamePassesShop_SortOutNonAccessItemsInShopData(this,tierShopData,(MethodInfo *)0x0);
  if (pDVar1 != (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0) {
    if ((pDVar1->fields)._count - (pDVar1->fields)._freeCount < 1) {
      return;
    }
    this_00 = (this->fields).tierListContainer;
    original = (this->fields).tierUnlockedAccessItemsRewardInfoPrefab;
    if (this_00 != (RectTransform *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_02 = (TierUnlockedItemsRewardInfo *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)original,parent,0,
                           TierUnlockedAccessItemsRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedAccessItemsRewardInfo>_TierUnlockedAccessItemsRewardInfo__UnityEngine__Transform__bool_
                          );
      if (this_02 != (TierUnlockedItemsRewardInfo *)0x0) {
        bVar2 = iRam_? != 0;
        (this_02->fields).tier = (uint8_t)tier;
        (this_02->fields).tierShopData = pDVar1;
        if (bVar2) {
          uVar3 = (uint)((ulonglong)&(this_02->fields).tierShopData >> 0xc);
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
        TierUnlockedItemsRewardInfo::TierUnlockedItemsRewardInfo_ChangeBackground
                  (this_02,tier & 0xff,(MethodInfo *)0x0);
        TierUnlockedAccessItemsRewardInfo::TierUnlockedAccessItemsRewardInfo_UpdateItemAmountText
                  ((TierUnlockedAccessItemsRewardInfo *)this_02,(MethodInfo *)0x0);
        this_01 = (this->fields).contentCuller;
        if (this_01 != (GamePassesShopContentCuller *)0x0) {
          GamePassesShopContentCuller::GamePassesShopContentCuller_AddContentElement
                    (this_01,(IGamePassShopContent *)this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CreateUnlockedItemsInfo(GamePassTier,
   Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_CreateUnlockedItemsInfo
               (GamePassesShop *this,GamePassTier__Enum tier,
               Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *tierShopData
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TierUnlockedItemsRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemsRewardInfo>_TierUnlockedItemsRewardInfo__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = GamePassesShop_SortOutNonLootItemsInShopData(this,tierShopData,(MethodInfo *)0x0);
  if (pDVar1 != (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0) {
    if ((pDVar1->fields)._count - (pDVar1->fields)._freeCount < 1) {
      return;
    }
    this_00 = (this->fields).tierListContainer;
    pTVar2 = (this->fields).tierUnlockedItemsRewardInfoPrefab;
    if (this_00 != (RectTransform *)0x0) {
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pTVar2 = (TierUnlockedItemsRewardInfo *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)pTVar2,parent,0,
                          TierUnlockedItemsRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedItemsRewardInfo>_TierUnlockedItemsRewardInfo__UnityEngine__Transform__bool_
                         );
      if (pTVar2 != (TierUnlockedItemsRewardInfo *)0x0) {
        bVar3 = iRam_? != 0;
        (pTVar2->fields).tier = (uint8_t)tier;
        (pTVar2->fields).tierShopData = pDVar1;
        if (bVar3) {
          uVar4 = (uint)((ulonglong)&(pTVar2->fields).tierShopData >> 0xc);
          puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar6 = *puVar5;
            LOCK();
            uVar7 = *puVar5;
            if (uVar6 == uVar7) {
              *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (uVar6 != uVar7);
        }
        TierUnlockedItemsRewardInfo::TierUnlockedItemsRewardInfo_ChangeBackground
                  (pTVar2,tier & 0xff,(MethodInfo *)0x0);
        TierUnlockedItemsRewardInfo::TierUnlockedItemsRewardInfo_UpdateItemAmountText
                  (pTVar2,(MethodInfo *)0x0);
        this_01 = (this->fields).contentCuller;
        if (this_01 != (GamePassesShopContentCuller *)0x0) {
          GamePassesShopContentCuller::GamePassesShopContentCuller_AddContentElement
                    (this_01,(IGamePassShopContent *)pTVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void CreateXPRewardInfo(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_CreateXPRewardInfo
               (GamePassesShop *this,GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  GamePassesXpRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesXpRewardInfo>_GamePassesXpRewardInfo__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tierListContainer;
  pGVar1 = (this->fields).xpRewardInfoPrefab;
  if (this_00 != (RectTransform *)0x0) {
    parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pGVar1 = (GamePassesXpRewardInfo *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                       ((Object *)pGVar1,parent,0,
                        GamePassesXpRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesXpRewardInfo>_GamePassesXpRewardInfo__UnityEngine__Transform__bool_
                       );
    if (pGVar1 != (GamePassesXpRewardInfo *)0x0) {
      GamePassesXpRewardInfo::GamePassesXpRewardInfo_Initialize
                (pGVar1,tier & 0xff,(MethodInfo *)0x0);
      pGVar2 = (this->fields).contentCuller;
      if (pGVar2 != (GamePassesShopContentCuller *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
                        ,pGVar1,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar3 = 
        MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
        ;
        pLVar4 = (pGVar2->fields).gamePassShopContentList;
        if (pLVar4 != (List_1_IGamePassShopContent_ *)0x0) {
          piVar5 = &(pLVar4->fields)._version;
          *piVar5 = *piVar5 + 1;
          pIVar6 = (pLVar4->fields)._items;
          if (pIVar6 != (IGamePassShopContent__Array *)0x0) {
            uVar7 = (pLVar4->fields)._size;
            if (uVar7 < (uint)pIVar6->max_length) {
              (pLVar4->fields)._size = uVar7 + 1;
            }
            else {
              uVar7 = (pLVar4->fields)._size;
              FUN_?(pLVar4,uVar7 + 1,
                            (pMVar3->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                            rgctxDataDummy,pIVar6,unaff_RDI);
              pIVar6 = (pLVar4->fields)._items;
              (pLVar4->fields)._size = uVar7 + 1;
              if (pIVar6 == (IGamePassShopContent__Array *)0x0) {
                FUN_?();
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            if ((uint)pIVar6->max_length <= uVar7) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            bVar9 = iRam_? != 0;
            pIVar6->vector[(int)uVar7] = (IGamePassShopContent *)pGVar1;
            if (bVar9) {
              uVar7 = (uint)((ulonglong)(pIVar6->vector + (int)uVar7) >> 0xc);
              puVar10 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar11 = *puVar10;
                LOCK();
                uVar12 = *puVar10;
                if (uVar11 == uVar12) {
                  *puVar10 = uVar11 | 1L << (uVar7 & 0x3f);
                }
                UNLOCK();
              } while (uVar11 != uVar12);
            }
            return;
          }
        }
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void DeactivateBar() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_DeactivateBar
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Progress_Locked);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator ==
       (PlayerTierStateCalculator *)0x0) ||
     ((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator->fields).
      gamePassRewardsActivated == 0)) {
    pTVar1 = (this->fields).progressHeader;
    if (pTVar1 == (Text *)0x0) goto code_?;
    (*(pTVar1->klass->vtable).set_text.methodPtr)();
    pPVar2 = (this->fields).progressBar;
    if ((pPVar2 == (ProgressBar *)0x0) ||
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pPVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
    goto code_?;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pPVar2 = (this->fields).progressBar;
      if ((pPVar2 == (ProgressBar *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pPVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,0,(MethodInfo *)0x0);
    }
    pPVar2 = (this->fields).disabledProgressBar;
    if ((pPVar2 == (ProgressBar *)0x0) ||
       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pPVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
    goto code_?;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar3,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      pPVar2 = (this->fields).disabledProgressBar;
      if ((pPVar2 == (ProgressBar *)0x0) ||
         (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pPVar2,(MethodInfo *)0x0), pGVar3 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,1,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar5 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar5 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar5->fields).gameMode != 0) {
      pGVar3 = (this->fields).unlockedText;
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar3,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pGVar3 = (this->fields).unlockedText;
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
      }
    }
  }
  this_00 = (this->fields).lockedTierIcon;
  if ((this_00 != (Image *)0x0) &&
     (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar3 != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                    ,1,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar3 == (GameObject *)0x0) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pvVar7 = (pGVar3->fields)._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar3,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar7,1);
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void DelayedInitialize() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_DelayedInitialize
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePointAmountManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).crystalAmount;
  if (*(int *)&(TypeInfo__GamePointAmountManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = GamePointAmountManager::GamePointAmountManager_GetTotalGamePointAmount((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_2._pointer._value = (void *)0x0;
  RStack_2._length = 0;
  RStack_2._12_4_ = 0;
  pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                      (value,&RStack_2,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if (pTVar1 == (Text *)0x0) goto code_?;
  (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,pSVar3);
  GamePassesShop_UpdateProgressBar
            (this,(uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
  bVar4 = (this->fields).gamePassTierDisplayed;
  GamePassesShop_CreateSpawnRoleContent(this,(uint)bVar4,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  GamePassesXpRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesXpRewardInfo>_GamePassesXpRewardInfo__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tierListContainer;
  pGVar5 = (this->fields).xpRewardInfoPrefab;
  if (this_00 == (RectTransform *)0x0) goto code_?;
  parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this_00,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pGVar5 = (GamePassesXpRewardInfo *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                      ((Object *)pGVar5,parent,0,
                       GamePassesXpRewardInfo_MethodInfo__UnityEngine__Object__Instantiate<GamePassesXpRewardInfo>_GamePassesXpRewardInfo__UnityEngine__Transform__bool_
                      );
  if (pGVar5 == (GamePassesXpRewardInfo *)0x0) goto code_?;
  GamePassesXpRewardInfo::GamePassesXpRewardInfo_Initialize(pGVar5,(uint)bVar4,(MethodInfo *)0x0);
  pGVar6 = (this->fields).contentCuller;
  if (pGVar6 == (GamePassesShopContentCuller *)0x0) goto code_?;
  GamePassesShopContentCuller::GamePassesShopContentCuller_AddContentElement
            (pGVar6,(IGamePassShopContent *)pGVar5,(MethodInfo *)0x0);
  pGVar6 = (this->fields).contentCuller;
  if (pGVar6 == (GamePassesShopContentCuller *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar7 = (pGVar6->fields).gamePassShopContentList;
  if (pLVar7 == (List_1_IGamePassShopContent_ *)0x0) goto code_?;
  GamePassesShopContentCuller::GamePassesShopContentCuller_HideElements
            (pGVar6,0,(pLVar7->fields)._size,0,(MethodInfo *)0x0);
  GamePassesShopContentCuller::GamePassesShopContentCuller_ShowElements(pGVar6,0,(MethodInfo *)0x0);
  pGVar8 = (this->fields).purchaseButton;
  if (pGVar8 == (GamePassesPurchaseButton *)0x0) goto code_?;
  bVar9 = GamePassesPurchaseButton::GamePassesPurchaseButton_Initialize
                     (pGVar8,(uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar10 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar10 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar10->fields).gameMode == 0) {
    pGVar11 = (this->fields).purchaseButtonObject;
    if (pGVar11 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar11,0,(MethodInfo *)0x0);
    pGVar11 = (this->fields).freeTryUI;
    if (pGVar11 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar11,0,(MethodInfo *)0x0);
    GamePassesShop_UpdateTierCostTets(this,(MethodInfo *)0x0);
  }
  GamePassesShop_UpdateFreeTryUI(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar10 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar10 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar10->fields).gameMode == 0) {
    pGVar11 = (this->fields).editModeInformationObject;
    if (pGVar11 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar11,1,(MethodInfo *)0x0);
    pGVar11 = (this->fields).gameTierProgressObject;
    if (pGVar11 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar11,0,(MethodInfo *)0x0);
  }
  else {
    bVar4 = (this->fields).gamePassTierDisplayed;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__TierUnlockedPopupController);
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
    pGVar10 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar10 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar10->fields).gameMode != 0) {
      bVar12 = TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar13 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar13 == (PlayerPlanetData *)0x0) goto code_?;
      if ((bVar12 < (pPVar13->fields).gamePassTier) &&
         (TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown < bVar4)) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar13 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar13 == (PlayerPlanetData *)0x0) goto code_?;
        if (bVar4 <= (pPVar13->fields).gamePassTier) {
          GamePassesShop_ShowTierUnlockedPopup(this,0,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
    this_01 = (this->fields).embeddedPlayerConfig;
    if (this_01 == (EmbeddedPlayerConfig *)0x0) goto code_?;
    pEVar14 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                        (aEStack_15,this_01,(MethodInfo *)0x0);
    value_00 = true;
    uStack_16._0_1_ = pEVar14->integratedSdk;
    uStack_16._1_1_ = pEVar14->allowsFallbackAds;
    uStack_16._2_1_ = pEVar14->showPlayButtonAd;
    uStack_16._3_1_ = pEVar14->hideGoldShop;
    uStack_16._4_1_ = pEVar14->allowInHouseAds;
    uStack_16._5_1_ = pEVar14->removeFullscreenButton;
    uStack_16._6_1_ = pEVar14->hideSignUp;
    uStack_16._7_1_ = pEVar14->noPlayButtonVideoIcon;
    uVar17 = pEVar14->allowsOpenInNewTab;
    uVar18 = pEVar14->allowsRedirectToWebpage;
    uVar19 = pEVar14->allowsModals;
    uVar20 = CONCAT11(uVar19,uVar18);
    if ((bVar9 == 0) || (uStack_16._3_1_ != '\0')) {
code_?:
      uVar21 = 0;
    }
    else {
      pGVar8 = (this->fields).purchaseButton;
      if ((pGVar8 == (GamePassesPurchaseButton *)0x0) ||
         (pGVar11 = (pGVar8->fields).disabledPurchaseButton, pGVar11 == (GameObject *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar22 = (pGVar11->fields)._.m_CachedPtr;
      if (pvVar22 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar11,(MethodInfo *)0x0);
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
      pcVar23 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar23 = (code *)FUN_?(&UNK_?), pcVar23 == (code *)0x0)) {
        uVar24 = func_?(&UNK_?);
        FUN_?(uVar24,0);
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
      pcRam_? = pcVar23;
      cVar25 = (*pcRam_?)(pvVar22);
      if (cVar25 != '\0') goto code_?;
      if ((uVar19 == '\0') && (uVar17 == '\0')) {
        uVar21 = uVar20 & 0xff;
      }
      else {
        uVar21 = 1;
      }
    }
    pGVar11 = (this->fields).purchaseButtonObject;
    if (pGVar11 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar11,uVar21 != 0,(MethodInfo *)0x0);
    bVar9 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if ((uVar21 != 0 & bVar9) != 0) {
      GamePassesShop_ShowTouristInformationPopup(this,(MethodInfo *)0x0);
      return;
    }
    bVar9 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
    this_02 = (this->fields).buttonIcon;
    (this->fields).isSubscribed = bVar9;
    if (bVar9 == 0) {
      pTVar26 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
      if (pTVar26 == (TogglePreviewState *)0x0) goto code_?;
      value_00 = (pTVar26->fields).freeTry == 0;
    }
    if (this_02 == (Image *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_02,value_00,(MethodInfo *)0x0);
  }
  this_03 = (this->fields).statusFooterObject;
  if ((this_03 != (GamePassesShopStatusFooter *)0x0) &&
     (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_03,(MethodInfo *)0x0), pGVar11 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar11,0,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void Exit() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_Exit
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  MethodInfo__GamePassesShop____c___Exit_b__87_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesShop____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__GamePassesShop____c);
  }
  this_01 = TypeInfo__GamePassesShop____c->static_fields->__9__87_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesShop____c);
    }
    object = TypeInfo__GamePassesShop____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__GamePassesShop____c___Exit_b__87_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesShop____c->static_fields->__9__87_0 = this_01;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__GamePassesShop____c->static_fields->__9__87_0 >> 0xc);
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
  pMVar6 = 
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
    if ((pMVar6->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar7 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar8 = (longlong)(pLVar7->fields)._size;
    uVar2 = 0;
    if (0 < lVar8) {
      lVar9 = 0;
      lVar10 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar7 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar7 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar7->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar12 = (pLVar7->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar12->vector + lVar10 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar6->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar9 < lVar8);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* List`1[MVAvatarSpawnRoleCreator] GetSortedSpawnRoles(GamePassTier) */

List_1_MVAvatarSpawnRoleCreator_ *
Assembly-CSharp.dll::GamePassesShop::GamePassesShop_GetSortedSpawnRoles
          (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__Add_MVAvatarSpawnRoleCreator_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__Insert_int__MVAvatarSpawnRoleCreator_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__List__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarSpawnRoleCreator);
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
      ((pMVar2->fields).worldNetwork != (WorldNetwork *)0x0)) &&
     (this_00 = (MVWorldObjectClientManager *)
                (((pMVar2->fields).worldNetwork)->fields)._.worldObjectClientManager,
     this_00 != (MVWorldObjectClientManager *)0x0)) {
    pLVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                        (this_00,WorldObjectType__Enum_AvatarSpawnRoleCreator,(MethodInfo *)0x0);
    this_01 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__List__);
    pLVar4 = (List_1_MVAvatarSpawnRoleCreator_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar4,
               MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__List__);
    uVar5 = 0;
    if (pLVar3 != (List_1_MVWorldObjectClient_ *)0x0) {
      lVar6 = 0x20;
      pMVar7 = TypeInfo__MVAvatarSpawnRoleCreator;
      for (; (int)uVar5 < (pLVar3->fields)._size; uVar5 = uVar5 + 1) {
        if ((uint)(pLVar3->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          pLVar4 = (List_1_MVAvatarSpawnRoleCreator_ *)(*pcVar8)();
          return pLVar4;
        }
        pMVar9 = (pLVar3->fields)._items;
        if (pMVar9 == (MVWorldObjectClient__Array *)0x0) goto code_?;
        if ((uint)pMVar9->max_length <= uVar5) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          pLVar4 = (List_1_MVAvatarSpawnRoleCreator_ *)(*pcVar8)();
          return pLVar4;
        }
        plVar10 = *(longlong **)((longlong)pMVar9->vector + lVar6 + -0x20);
        if (plVar10 != (longlong *)0x0) {
          lVar11 = *plVar10;
          bVar12 = (pMVar7->_1).naturalAligment;
          if ((bVar12 <= *(byte *)(lVar11 + 0x130)) &&
             (*(MVAvatarSpawnRoleCreator__Class **)
               (*(longlong *)(lVar11 + 200) + -8 + (ulonglong)bVar12 * 8) == pMVar7)) {
            pMVar13 = (MVAvatarSpawnRoleCreator *)FUN_?(pLVar3,uVar5);
            if (pMVar13 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
            bVar12 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
            if (((pMVar13->klass->_1).naturalAligment < bVar12) ||
               ((MVAvatarSpawnRoleCreator__Class *)
                (pMVar13->klass->_1).typeHierarchy[(ulonglong)bVar12 - 1] !=
                TypeInfo__MVAvatarSpawnRoleCreator)) {
              FUN_?(pMVar13,TypeInfo__MVAvatarSpawnRoleCreator);
              pcVar8 = (code *)swi(3);
              pLVar4 = (List_1_MVAvatarSpawnRoleCreator_ *)(*pcVar8)();
              return pLVar4;
            }
            GVar14 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Tier
                              (pMVar13,(MethodInfo *)0x0);
            pMVar7 = TypeInfo__MVAvatarSpawnRoleCreator;
            if ((char)GVar14 == (char)gamePassTierToDisplay) {
              plVar10 = (longlong *)FUN_?(pLVar3,uVar5);
              if (this_01 ==
                  (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
              goto code_?;
              if (plVar10 != (longlong *)0x0) {
                bVar12 = (TypeInfo__MVAvatarSpawnRoleCreator->_1).naturalAligment;
                if ((*(byte *)(*plVar10 + 0x130) < bVar12) ||
                   (*(MVAvatarSpawnRoleCreator__Class **)
                     (*(longlong *)(*plVar10 + 200) + -8 + (ulonglong)bVar12 * 8) !=
                    TypeInfo__MVAvatarSpawnRoleCreator)) {
                  FUN_?(plVar10);
                  pcVar8 = (code *)swi(3);
                  pLVar4 = (List_1_MVAvatarSpawnRoleCreator_ *)(*pcVar8)();
                  return pLVar4;
                }
              }
              FUN_?(this_01,plVar10);
              pMVar7 = TypeInfo__MVAvatarSpawnRoleCreator;
            }
          }
        }
        lVar6 = lVar6 + 8;
      }
      iVar15 = 0;
      if (this_01 != (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
code_?:
        do {
          if ((this_01->fields)._size <= iVar15) {
            return pLVar4;
          }
          index = 0;
          if (pLVar4 == (List_1_MVAvatarSpawnRoleCreator_ *)0x0) break;
          for (; index < (pLVar4->fields)._size; index = index + 1) {
            pMVar13 = (MVAvatarSpawnRoleCreator *)FUN_?(this_01);
            if (pMVar13 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
            MVar16 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                              (pMVar13,(MethodInfo *)0x0);
            pMVar13 = (MVAvatarSpawnRoleCreator *)FUN_?(pLVar4);
            if (pMVar13 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
            MVar17 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                              (pMVar13,(MethodInfo *)0x0);
            if ((int)MVar16 < (int)MVar17) {
code_?:
              item = (Object *)FUN_?(this_01,iVar15);
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Insert
                        ((List_1_System_Object_ *)pLVar4,index,item,
                         MethodInfo__System__Collections__Generic__List<MVAvatarSpawnRoleCreator>__Insert_int__MVAvatarSpawnRoleCreator_
                        );
              iVar15 = iVar15 + 1;
              goto code_?;
            }
            pMVar13 = (MVAvatarSpawnRoleCreator *)FUN_?(this_01);
            if (pMVar13 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
            MVar16 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                              (pMVar13,(MethodInfo *)0x0);
            pMVar13 = (MVAvatarSpawnRoleCreator *)FUN_?(pLVar4);
            if (pMVar13 == (MVAvatarSpawnRoleCreator *)0x0) goto code_?;
            MVar17 = MVAvatarSpawnRoleCreator::MVAvatarSpawnRoleCreator_get_Team
                              (pMVar13,(MethodInfo *)0x0);
            if (MVar16 == MVar17) {
              pMVar13 = (MVAvatarSpawnRoleCreator *)FUN_?(this_01,iVar15);
              iVar18 = GamePassesShop_CalculateTotalSpawnRoleCost(this,pMVar13,(MethodInfo *)0x0);
              pMVar13 = (MVAvatarSpawnRoleCreator *)FUN_?(pLVar4,index);
              iVar19 = GamePassesShop_CalculateTotalSpawnRoleCost(this,pMVar13,(MethodInfo *)0x0);
              if (iVar19 < iVar18) goto code_?;
            }
          }
          uVar20 = FUN_?(this_01);
          FUN_?(pLVar4,uVar20);
          iVar15 = iVar15 + 1;
        } while( true );
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  pLVar4 = (List_1_MVAvatarSpawnRoleCreator_ *)(*pcVar8)();
  return pLVar4;
}


/* TierLockState GetTierLockState(GamePassTier) */

TierLockState__Enum
Assembly-CSharp.dll::GamePassesShop::GamePassesShop_GetTierLockState
          (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      bVar2 = (pPVar1->fields).gamePassTier;
      if (this_00 != (PlayerTierStateCalculator *)0x0) {
        if ((this_00->fields).gamePointVelocityIsZero == 0) {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                              (this_00,playerGamePoints,(uint)bVar2,(MethodInfo *)0x0);
        }
        else {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                              (this_00,(uint)bVar2,(MethodInfo *)0x0);
        }
        if (this_01 !=
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) {
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                              gamePassTierToDisplay & 0xff,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar3 != (Object *)0x0) {
            return *(TierLockState__Enum *)&pOVar3[1].klass;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  TVar5 = (*pcVar4)();
  return TVar5;
}


/* Int32 GetTotalGamePointRequirementForTier(GamePassTier) */

int32_t Assembly-CSharp.dll::GamePassesShop::GamePassesShop_GetTotalGamePointRequirementForTier
                  (GamePassesShop *this,GamePassTier__Enum tier,MethodInfo *method)

{
  BVar1 = tier & 0xff;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 != (PlayerPlanetData *)0x0) {
    iVar3 = (pPVar2->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar2 != (PlayerPlanetData *)0x0) {
      this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      bVar4 = (pPVar2->fields).gamePassTier;
      if (this_00 != (PlayerTierStateCalculator *)0x0) {
        if ((this_00->fields).gamePointVelocityIsZero == 0) {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                              (this_00,iVar3,(uint)bVar4,(MethodInfo *)0x0);
        }
        else {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                              (this_00,(uint)bVar4,(MethodInfo *)0x0);
        }
        iVar3 = 0;
        if ((char)tier != '\0') {
          if (this_01 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) goto DAT_?;
          do {
            pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,BVar1 & 0xff,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar5 == (Object *)0x0) goto DAT_?;
            iVar3 = iVar3 + *(int *)&pOVar5[2].klass;
            BVar1 = BVar1 - 1;
          } while (0 < (int)BVar1);
        }
        return iVar3;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar3 = (*pcVar6)();
  return iVar3;
}


/* Void HandleEditModeUI() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_HandleEditModeUI
               (GamePassesShop *this,MethodInfo *method)

{
  pGVar1 = (this->fields).editModeInformationObject;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).gameTierProgressObject;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      this_00 = (this->fields).statusFooterObject;
      if ((this_00 != (GamePassesShopStatusFooter *)0x0) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar1 == (GameObject *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pvVar3 = (pGVar1->fields)._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar3,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandlePurchase() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_HandlePurchase
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      bVar2 = (pPVar1->fields).gamePassTier;
      if (this_00 != (PlayerTierStateCalculator *)0x0) {
        if ((this_00->fields).gamePointVelocityIsZero == 0) {
          this_03 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                              (this_00,playerGamePoints,(uint)bVar2,(MethodInfo *)0x0);
        }
        else {
          this_03 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                              (this_00,(uint)bVar2,(MethodInfo *)0x0);
        }
        if ((this_03 !=
             (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
             0x0) && (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                ByteEnum,System::Object]::
                                Dictionary_2_System_ByteEnum_System_Object__get_Item
                                          ((Dictionary_2_System_ByteEnum_System_Object_ *)this_03,
                                           (uint)(this->fields).gamePassTierDisplayed,
                                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                          ), pOVar3 != (Object *)0x0)) {
          iVar4 = *(int *)&pOVar3[1].monitor;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((((pMVar5 != (MVGameControllerBase *)0x0) &&
               (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
              (this_01 = (pMVar6->fields).playerContainer, this_01 != (MVPlayerContainer *)0x0)) &&
             ((pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                   (this_01,(MethodInfo *)0x0), pMVar7 != (MVLocalPlayer *)0x0 &&
              (pUVar8 = (pMVar7->fields)._._UserProfileData_k__BackingField,
              pUVar8 != (UserProfileData *)0x0)))) {
            if (iVar4 <= (pUVar8->fields).Gold) {
              if (cRam_? == '\0') {
                FUN_?(&
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              ,iVar4,0);
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
                FUN_?(&MethodInfo__GamePassesShop__OnSuccessfulPurchase__);
                LOCK();
                UNLOCK();
                FUN_?(&
                              TierPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchasePopup>_TierPurchasePopup_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__GamePassesShop____c__DisplayClass75_0___ShowPurchaseConfirmPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__GamePassesShop____c__DisplayClass75_0);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pOVar3 = (Object *)FUN_?(TypeInfo__GamePassesShop____c__DisplayClass75_0);
              original_00 = (this->fields).tierPurchasePopupPrefab;
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              pOVar9 = (Object__Class *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)original_00,
                                   TierPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchasePopup>_TierPurchasePopup_
                                  );
              if (pOVar3 != (Object *)0x0) {
                bVar10 = iRam_? != 0;
                pOVar3[1].klass = pOVar9;
                if (bVar10) {
                  uVar11 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
                  lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
                    puVar14 = (ulonglong *)(lVar12 + 0xADDR);
                    LOCK();
                    bVar10 = uVar13 == *puVar14;
                    if (bVar10) {
                      *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar10);
                }
                pGVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                pEVar16 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                          FUN_?(
                                       TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                       );
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System
                ::Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                          (pEVar16,pOVar3,
                           MethodInfo__GamePassesShop____c__DisplayClass75_0___ShowPurchaseConfirmPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar15,(BaseEventData *)0x0,pEVar16,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                pOVar9 = pOVar3[1].klass;
                bVar2 = (this->fields).gamePassTierDisplayed;
                this_02 = (NavMesh_OnNavMeshPreUpdate *)
                          FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_02,(Object *)this,MethodInfo__GamePassesShop__OnSuccessfulPurchase__
                           ,(MethodInfo *)0x0);
                if (pOVar9 != (Object__Class *)0x0) {
                  bVar10 = iRam_? != 0;
                  *(byte *)&(pOVar9->_0).this_arg.data = bVar2;
                  *(int *)((longlong)&(pOVar9->_0).this_arg.data + 4) = iVar4;
                  *(NavMesh_OnNavMeshPreUpdate **)&(pOVar9->_0).this_arg.attrs = this_02;
                  if (bVar10) {
                    uVar11 = (uint)((ulonglong)&(pOVar9->_0).this_arg.attrs >> 0xc);
                    lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
                      puVar14 = (ulonglong *)(lVar12 + 0xADDR);
                      LOCK();
                      bVar10 = uVar13 == *puVar14;
                      if (bVar10) {
                        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar10);
                  }
                  pIVar17 = (pOVar9->_0).byval_arg.data.array;
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__System__Number);
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->
                       klass->field_0x135 & 1) == 0) {
                    FUN_?();
                  }
                  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  RStack_18._pointer._value = (void *)0x0;
                  RStack_18._length = 0;
                  RStack_18._12_4_ = 0;
                  pSVar19 = mscorlib.dll::System::Number::Number_FormatInt32
                                      ((uint)bVar2,&RStack_18,(IFormatProvider *)0x0,
                                       (MethodInfo *)0x0);
                  if (pIVar17 != (Il2CppArrayType *)0x0) {
                    (**(code **)&pIVar17->etype[0x5e].attrs)
                              (pIVar17,pSVar19,pIVar17->etype[0x5f].data.dummy);
                    plVar20 = *(longlong **)&(pOVar9->_0).byval_arg.attrs;
                    pSVar19 = mscorlib.dll::System::Int32::Int32_ToString
                                        ((Int32 *)&stack0x00000008,(MethodInfo *)0x0);
                    if (plVar20 != (longlong *)0x0) {
                      UNRECOVERED_JUMPTABLE = *(code **)(*plVar20 + 0x5e8);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*UNRECOVERED_JUMPTABLE)
                                (plVar20,pSVar19,*(undefined8 *)(*plVar20 + 0x5f0),
                                 UNRECOVERED_JUMPTABLE);
                      return;
                    }
                  }
                }
              }
              FUN_?();
              UNRECOVERED_JUMPTABLE = (code *)swi(3);
              (*UNRECOVERED_JUMPTABLE)();
              return;
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pGVar21 = TypeInfo__MVGameControllerBase->static_fields->
                      _GameSessionData_k__BackingField;
            if (pGVar21 != (GameSessionData *)0x0) {
              if ((pGVar21->fields).profileID < 1) {
                pEVar22 = (this->fields).embeddedPlayerConfig;
                if (pEVar22 == (EmbeddedPlayerConfig *)0x0) goto code_?;
                pEVar23 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                                    ((EmbeddedSiteConfigData *)&stack0xffffffffffffffe0,pEVar22,
                                     (MethodInfo *)0x0);
                uStack_24._0_1_ = pEVar23->integratedSdk;
                uStack_24._1_1_ = pEVar23->allowsFallbackAds;
                uStack_24._2_1_ = pEVar23->showPlayButtonAd;
                uStack_24._3_1_ = pEVar23->hideGoldShop;
                uStack_24._4_1_ = pEVar23->allowInHouseAds;
                uStack_24._5_1_ = pEVar23->removeFullscreenButton;
                uStack_24._6_1_ = pEVar23->hideSignUp;
                uStack_24._7_1_ = pEVar23->noPlayButtonVideoIcon;
                if (uStack_24._6_1_ == '\0') {
                  if (cRam_? == '\0') {
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
                                  GamePassesTouristInformationPopup_MethodInfo__UnityEngine__Object__Instantiate<GamePassesTouristInformationPopup>_GamePassesTouristInformationPopup_
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&TypeInfo__UnityEngine__Object);
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  MethodInfo__GamePassesShop____c__DisplayClass74_0___ShowTouristInformationPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&TypeInfo__GamePassesShop____c__DisplayClass74_0);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pEVar22 = (this->fields).embeddedPlayerConfig;
                  if (pEVar22 == (EmbeddedPlayerConfig *)0x0) {
code_?:
                    FUN_?();
                    UNRECOVERED_JUMPTABLE = (code *)swi(3);
                    (*UNRECOVERED_JUMPTABLE)();
                    return;
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Debug);
                    LOCK();
                    UNLOCK();
                    FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if ((pEVar22->fields).initialized == 0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                              ((Object *)StringLiteral_Embedded_site_data_not_initializ,
                               (MethodInfo *)0x0);
                    uStack_25 = *(undefined8 *)&(pEVar22->fields).kogamaDefaultData.integratedSdk;
                  }
                  else {
                    uStack_25 = *(undefined8 *)&(pEVar22->fields).currentSite.integratedSdk;
                  }
                  if (SUB81(uStack_25,6) == 0) {
                    pOVar3 = (Object *)
                              FUN_?(TypeInfo__GamePassesShop____c__DisplayClass74_0);
                    original = (this->fields).touristInformationPopupPrefab;
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    pOVar9 = (Object__Class *)
                              UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_Instantiate_4
                                        ((Object *)original,
                                         GamePassesTouristInformationPopup_MethodInfo__UnityEngine__Object__Instantiate<GamePassesTouristInformationPopup>_GamePassesTouristInformationPopup_
                                        );
                    if (pOVar3 == (Object *)0x0) goto code_?;
                    bVar10 = iRam_? != 0;
                    pOVar3[1].klass = pOVar9;
                    if (bVar10) {
                      uVar11 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
                      puVar14 = (ulonglong *)
                               ((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
                      do {
                        uVar26 = *puVar14;
                        LOCK();
                        uVar13 = *puVar14;
                        if (uVar26 == uVar13) {
                          *puVar14 = uVar26 | 1L << (uVar11 & 0x3f);
                        }
                        UNLOCK();
                      } while (uVar26 != uVar13);
                    }
                    pGVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                    pEVar16 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                              FUN_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                           );
                    UnityEngine.UI.dll::UnityEngine::EventSystems::
                    ExecuteEvents+EventFunction`1[System::Object]::
                    ExecuteEvents_EventFunction_1_System_Object___ctor
                              (pEVar16,pOVar3,
                               MethodInfo__GamePassesShop____c__DisplayClass74_0___ShowTouristInformationPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                               ,(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                        == 0) {
                      FUN_?();
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy
                              (pGVar15,(BaseEventData *)0x0,pEVar16,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                              );
                  }
                  return;
                }
              }
              else {
                GamePassesShop_ShowPurchaseGoldErrorPopup(this,(MethodInfo *)0x0);
              }
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void HandlePurchaseButtonVisibility(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_HandlePurchaseButtonVisibility
               (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,
                  CONCAT44(in_register_00000014,gamePassTierToDisplay));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      return;
    }
    pGVar2 = (this->fields).purchaseButtonObject;
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
      pGVar2 = (this->fields).freeTryUI;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                        ,0);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__System__TimeSpan);
          LOCK();
          UNLOCK();
          FUN_?(&StringLiteral__min_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pTVar3 = (this->fields).unlockPriceText;
        pPVar4 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
        if ((pPVar4 != (PlayerTierStateCalculator *)0x0) &&
           (pDVar5 = (pPVar4->fields).progressionThresholds,
           pDVar5 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                      *)0x0)) {
          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,
                              (uint)(this->fields).gamePassTierDisplayed,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar6 != (Object *)0x0) {
            pSVar7 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)(pOVar6 + 1),(MethodInfo *)0x0);
            if (pTVar3 != (Text *)0x0) {
              (*(pTVar3->klass->vtable).set_text.methodPtr)
                        (pTVar3,pSVar7,(pTVar3->klass->vtable).set_text.method);
              pPVar4 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
              if ((pPVar4 != (PlayerTierStateCalculator *)0x0) &&
                 (pDVar5 = (pPVar4->fields).progressionThresholds,
                 pDVar5 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                            *)0x0)) {
                pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         ByteEnum,System::Object]::
                         Dictionary_2_System_ByteEnum_System_Object__get_Item
                                   ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,
                                    (uint)(this->fields).gamePassTierDisplayed,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                   );
                if (pOVar6 != (Object *)0x0) {
                  if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  lVar8 = (longlong)pOVar6[1].monitor / 600000000;
                  lVar9 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar8),8) + lVar8;
                  pPVar4 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
                  if ((pPVar4 != (PlayerTierStateCalculator *)0x0) &&
                     (pDVar5 = (pPVar4->fields).progressionThresholds,
                     pDVar5 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                                *)0x0)) {
                    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             ByteEnum,System::Object]::
                             Dictionary_2_System_ByteEnum_System_Object__get_Item
                                       ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,
                                        (uint)(this->fields).gamePassTierDisplayed,
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                       );
                    if (pOVar6 != (Object *)0x0) {
                      lVar10 = (longlong)pOVar6[1].monitor / 36000000000;
                      iVar11 = FUN_?((float)((int)lVar10 + (int)(lVar10 / 0x18) * -0x18) *
                                            _UNK_?);
                      pTVar3 = (this->fields).unlockTimeText;
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__System__Number);
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->
                           klass->field_0x135 & 1) == 0) {
                        FUN_?();
                      }
                      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      aRStack_12[0]._pointer._value = (void *)0x0;
                      aRStack_12[0]._length = 0;
                      aRStack_12[0]._12_4_ = 0;
                      pSVar7 = mscorlib.dll::System::Number::Number_FormatInt32
                                          ((int)lVar8 +
                                           ((int)(lVar9 >> 5) - (int)(lVar9 >> 0x3f)) * -0x3c +
                                           iVar11,aRStack_12,(IFormatProvider *)0x0,(MethodInfo *)0x0
                                          );
                      pSVar7 = mscorlib.dll::System::String::String_Concat_4
                                          (pSVar7,StringLiteral__min_,(MethodInfo *)0x0);
                      if (pTVar3 != (Text *)0x0) {
                        UNRECOVERED_JUMPTABLE = (pTVar3->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*UNRECOVERED_JUMPTABLE)
                                  (pTVar3,pSVar7,(pTVar3->klass->vtable).set_text.method,
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
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Initialize(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_Initialize
               (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Game_Tier_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  pTVar2 = (this->fields).headerText;
  (this->fields).delayedInit = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_3[0]._pointer._value = (void *)0x0;
  aRStack_3[0]._length = 0;
  aRStack_3[0]._12_4_ = 0;
  pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                     (gamePassTierToDisplay & 0xff,aRStack_3,(IFormatProvider *)0x0,
                      (MethodInfo *)0x0);
  pSVar4 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Game_Tier_,pSVar4,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    (*(pTVar2->klass->vtable).set_text.methodPtr)
              (pTVar2,pSVar4,(pTVar2->klass->vtable).set_text.method);
    (this->fields).gamePassTierDisplayed = (uint8_t)gamePassTierToDisplay;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean IsProgressBarEnabled() */

bool Assembly-CSharp.dll::GamePassesShop::GamePassesShop_IsProgressBarEnabled
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator ==
      (PlayerTierStateCalculator *)0x0) {
    return 0;
  }
  return (TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator->fields).
         gamePassRewardsActivated;
}


/* Boolean IsTierItemALootItem(MVWorldObjectClient) */

bool Assembly-CSharp.dll::GamePassesShop::GamePassesShop_IsTierItemALootItem
               (GamePassesShop *this,MVWorldObjectClient *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPickupItemBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (item != (MVWorldObjectClient *)0x0) {
    pMVar1 = item->klass;
    bVar2 = (TypeInfo__MVPickupItemBase->_1).naturalAligment;
    if ((bVar2 <= (pMVar1->_1).naturalAligment) &&
       ((MVPickupItemBase__Class *)(pMVar1->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
        TypeInfo__MVPickupItemBase)) {
      return 1;
    }
    bVar2 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
    if (((pMVar1->_1).naturalAligment < bVar2) ||
       (bVar3 = true,
       (MVWorldObjectSpawnerVehicle__Class *)(pMVar1->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
       TypeInfo__MVWorldObjectSpawnerVehicle)) {
      bVar3 = false;
    }
    pMVar4 = (MVWorldObjectClient *)0x0;
    if (bVar3) {
      pMVar4 = item;
    }
    return pMVar4 != (MVWorldObjectClient *)0x0;
  }
  return 0;
}


/* Boolean IsTierItemAnAccessItem(MVWorldObjectDocumentationType, MVWorldObjectClient) */

bool Assembly-CSharp.dll::GamePassesShop::GamePassesShop_IsTierItemAnAccessItem
               (GamePassesShop *this,MVWorldObjectDocumentationType__Enum worldObjectType,
               MVWorldObjectClient *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVTeleporter);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((worldObjectType != MVWorldObjectDocumentationType__Enum_Lever) &&
     (worldObjectType != MVWorldObjectDocumentationType__Enum_PressurePlate)) {
    pMVar1 = (MVWorldObjectClient *)0x0;
    if (item != (MVWorldObjectClient *)0x0) {
      bVar2 = (TypeInfo__MVTeleporter->_1).naturalAligment;
      if (((item->klass->_1).naturalAligment < bVar2) ||
         (bVar3 = true,
         (MVTeleporter__Class *)(item->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
         TypeInfo__MVTeleporter)) {
        bVar3 = false;
      }
      if (bVar3) {
        pMVar1 = item;
      }
    }
    return pMVar1 != (MVWorldObjectClient *)0x0;
  }
  return 1;
}


/* Void OnButtonPress() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnButtonPress
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    iVar2 = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      bVar4 = (pPVar1->fields).gamePassTier;
      if (pPVar3 != (PlayerTierStateCalculator *)0x0) {
        if ((pPVar3->fields).gamePointVelocityIsZero == 0) {
          pDVar5 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                              (pPVar3,iVar2,(uint)bVar4,(MethodInfo *)0x0);
        }
        else {
          pDVar5 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                              (pPVar3,(uint)bVar4,(MethodInfo *)0x0);
        }
        if (pDVar5 !=
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) {
          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,
                               (uint)(this->fields).gamePassTierDisplayed,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                              );
          if (pOVar6 != (Object *)0x0) {
            iVar7 = *(int *)&pOVar6[1].klass;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
                (IEditModeUI *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
                  (IEditModeUI *)0x0) goto code_?;
              cVar8 = FUN_?(1);
              if (cVar8 != '\0') {
                GamePassesShop_TestTier(this,(MethodInfo *)0x0);
                return;
              }
            }
            if (iVar7 != 1) {
              return;
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                            ,0);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__GamePassesManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__GamePassesManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
            if (pPVar1 != (PlayerPlanetData *)0x0) {
              iVar2 = (pPVar1->fields).progressionGamePoints;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__GamePassesManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
              if (pPVar1 != (PlayerPlanetData *)0x0) {
                pPVar3 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
                bVar4 = (pPVar1->fields).gamePassTier;
                if (pPVar3 != (PlayerTierStateCalculator *)0x0) {
                  if ((pPVar3->fields).gamePointVelocityIsZero == 0) {
                    pDVar5 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                              PlayerTierStateCalculator::
                              PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                                        (pPVar3,iVar2,(uint)bVar4,(MethodInfo *)0x0);
                  }
                  else {
                    pDVar5 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                              PlayerTierStateCalculator::
                              PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                                        (pPVar3,(uint)bVar4,(MethodInfo *)0x0);
                  }
                  if ((pDVar5 !=
                       (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                        *)0x0) &&
                     (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                ByteEnum,System::Object]::
                                Dictionary_2_System_ByteEnum_System_Object__get_Item
                                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,
                                           (uint)(this->fields).gamePassTierDisplayed,
                                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                          ), pOVar6 != (Object *)0x0)) {
                    iVar7 = *(int *)&pOVar6[1].monitor;
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__MVGameControllerBase);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
                    if ((((pMVar9 != (MVGameControllerBase *)0x0) &&
                         (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
                        (this_00 = (pMVar10->fields).playerContainer,
                        this_00 != (MVPlayerContainer *)0x0)) &&
                       ((pMVar11 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                             (this_00,(MethodInfo *)0x0),
                        pMVar11 != (MVLocalPlayer *)0x0 &&
                        (pUVar12 = (pMVar11->fields)._._UserProfileData_k__BackingField,
                        pUVar12 != (UserProfileData *)0x0)))) {
                      if (iVar7 <= (pUVar12->fields).Gold) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                        ,iVar7,0);
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
                          FUN_?(&MethodInfo__GamePassesShop__OnSuccessfulPurchase__);
                          LOCK();
                          UNLOCK();
                          FUN_?(&
                                        TierPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchasePopup>_TierPurchasePopup_
                                       );
                          LOCK();
                          UNLOCK();
                          FUN_?(&TypeInfo__UnityEngine__Object);
                          LOCK();
                          UNLOCK();
                          FUN_?(&
                                        MethodInfo__GamePassesShop____c__DisplayClass75_0___ShowPurchaseConfirmPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                       );
                          LOCK();
                          UNLOCK();
                          FUN_?(&TypeInfo__GamePassesShop____c__DisplayClass75_0);
                          LOCK();
                          UNLOCK();
                          FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pOVar6 = (Object *)
                                  FUN_?(TypeInfo__GamePassesShop____c__DisplayClass75_0);
                        original_00 = (this->fields).tierPurchasePopupPrefab;
                        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        pOVar13 = (Object__Class *)
                                  UnityEngine.CoreModule.dll::UnityEngine::Object::
                                  Object_1_Instantiate_4
                                            ((Object *)original_00,
                                             TierPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchasePopup>_TierPurchasePopup_
                                            );
                        if (pOVar6 != (Object *)0x0) {
                          bVar14 = iRam_? != 0;
                          pOVar6[1].klass = pOVar13;
                          if (bVar14) {
                            uVar15 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
                            lVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar17 = *(ulonglong *)(lVar16 + 0xADDR);
                              puVar18 = (ulonglong *)(lVar16 + 0xADDR);
                              LOCK();
                              bVar14 = uVar17 == *puVar18;
                              if (bVar14) {
                                *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar14);
                          }
                          pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                          pEVar20 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                    FUN_?(
                                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                                 );
                          UnityEngine.UI.dll::UnityEngine::EventSystems::
                          ExecuteEvents+EventFunction`1[System::Object]::
                          ExecuteEvents_EventFunction_1_System_Object___ctor
                                    (pEVar20,pOVar6,
                                     MethodInfo__GamePassesShop____c__DisplayClass75_0___ShowPurchaseConfirmPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                     ,(MethodInfo *)0x0);
                          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                                       field_0x1c == 0) {
                            FUN_?();
                          }
                          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                          ExecuteEvents_ExecuteHierarchy
                                    (pGVar19,(BaseEventData *)0x0,pEVar20,
                                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                                    );
                          pOVar13 = pOVar6[1].klass;
                          bVar4 = (this->fields).gamePassTierDisplayed;
                          this_01 = (NavMesh_OnNavMeshPreUpdate *)
                                    FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                          NavMesh_OnNavMeshPreUpdate__ctor
                                    (this_01,(Object *)this,
                                     MethodInfo__GamePassesShop__OnSuccessfulPurchase__,
                                     (MethodInfo *)0x0);
                          if (pOVar13 != (Object__Class *)0x0) {
                            bVar14 = iRam_? != 0;
                            *(byte *)&(pOVar13->_0).this_arg.data = bVar4;
                            *(int *)((longlong)&(pOVar13->_0).this_arg.data + 4) = iVar7;
                            *(NavMesh_OnNavMeshPreUpdate **)&(pOVar13->_0).this_arg.attrs = this_01;
                            if (bVar14) {
                              uVar15 = (uint)((ulonglong)&(pOVar13->_0).this_arg.attrs >> 0xc);
                              lVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
                              do {
                                uVar17 = *(ulonglong *)(lVar16 + 0xADDR);
                                puVar18 = (ulonglong *)(lVar16 + 0xADDR);
                                LOCK();
                                bVar14 = uVar17 == *puVar18;
                                if (bVar14) {
                                  *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
                                }
                                UNLOCK();
                              } while (!bVar14);
                            }
                            pIVar21 = (pOVar13->_0).byval_arg.data.array;
                            if (cRam_? == '\0') {
                              FUN_?(&TypeInfo__System__Number);
                              LOCK();
                              UNLOCK();
                              FUN_?(&
                                            MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                 ->klass->field_0x135 & 1) == 0) {
                              FUN_?();
                            }
                            if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            auStack_22 = (undefined1  [8])0x0;
                            puStack_23 = (undefined *)0x0;
                            pSVar24 = mscorlib.dll::System::Number::Number_FormatInt32
                                                ((uint)bVar4,(ReadOnlySpan_1_Char_ *)auStack_22,
                                                 (IFormatProvider *)0x0,(MethodInfo *)0x0);
                            if (pIVar21 != (Il2CppArrayType *)0x0) {
                              (**(code **)&pIVar21->etype[0x5e].attrs)
                                        (pIVar21,pSVar24,pIVar21->etype[0x5f].data.dummy);
                              plVar25 = *(longlong **)&(pOVar13->_0).byval_arg.attrs;
                              pSVar24 = mscorlib.dll::System::Int32::Int32_ToString
                                                  ((Int32 *)&stack0x00000008,(MethodInfo *)0x0);
                              if (plVar25 != (longlong *)0x0) {
                                UNRECOVERED_JUMPTABLE = *(code **)(*plVar25 + 0x5e8);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                (*UNRECOVERED_JUMPTABLE)
                                          (plVar25,pSVar24,*(undefined8 *)(*plVar25 + 0x5f0),
                                           UNRECOVERED_JUMPTABLE);
                                return;
                              }
                            }
                          }
                        }
                        FUN_?();
                        UNRECOVERED_JUMPTABLE = (code *)swi(3);
                        (*UNRECOVERED_JUMPTABLE)();
                        return;
                      }
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pGVar26 = TypeInfo__MVGameControllerBase->static_fields->
                                _GameSessionData_k__BackingField;
                      if (pGVar26 != (GameSessionData *)0x0) {
                        if ((pGVar26->fields).profileID < 1) {
                          pEVar27 = (this->fields).embeddedPlayerConfig;
                          if (pEVar27 == (EmbeddedPlayerConfig *)0x0) goto code_?;
                          pEVar28 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                                              ((EmbeddedSiteConfigData *)&stack0xffffffffffffffe0,
                                               pEVar27,(MethodInfo *)0x0);
                          uStack_29._0_1_ = pEVar28->integratedSdk;
                          uStack_29._1_1_ = pEVar28->allowsFallbackAds;
                          uStack_29._2_1_ = pEVar28->showPlayButtonAd;
                          uStack_29._3_1_ = pEVar28->hideGoldShop;
                          uStack_29._4_1_ = pEVar28->allowInHouseAds;
                          uStack_29._5_1_ = pEVar28->removeFullscreenButton;
                          uStack_29._6_1_ = pEVar28->hideSignUp;
                          uStack_29._7_1_ = pEVar28->noPlayButtonVideoIcon;
                          if (uStack_29._6_1_ == '\0') {
                            if (cRam_? == '\0') {
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
                                            GamePassesTouristInformationPopup_MethodInfo__UnityEngine__Object__Instantiate<GamePassesTouristInformationPopup>_GamePassesTouristInformationPopup_
                                           );
                              LOCK();
                              UNLOCK();
                              FUN_?(&TypeInfo__UnityEngine__Object);
                              LOCK();
                              UNLOCK();
                              FUN_?(&
                                            MethodInfo__GamePassesShop____c__DisplayClass74_0___ShowTouristInformationPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                           );
                              LOCK();
                              UNLOCK();
                              FUN_?(&TypeInfo__GamePassesShop____c__DisplayClass74_0);
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pEVar27 = (this->fields).embeddedPlayerConfig;
                            if (pEVar27 != (EmbeddedPlayerConfig *)0x0) {
                              if (cRam_? == '\0') {
                                FUN_?(&TypeInfo__UnityEngine__Debug);
                                LOCK();
                                UNLOCK();
                                FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              if ((pEVar27->fields).initialized == 0) {
                                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                                          ((Object *)StringLiteral_Embedded_site_data_not_initializ,
                                           (MethodInfo *)0x0);
                                uStack_30 = *(undefined8 *)
                                             &(pEVar27->fields).kogamaDefaultData.integratedSdk;
                              }
                              else {
                                uStack_30 = *(undefined8 *)
                                             &(pEVar27->fields).currentSite.integratedSdk;
                              }
                              if (SUB81(uStack_30,6) == 0) {
                                pOVar6 = (Object *)
                                          FUN_?(
                                                  TypeInfo__GamePassesShop____c__DisplayClass74_0);
                                original = (this->fields).touristInformationPopupPrefab;
                                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                pOVar13 = (Object__Class *)
                                          UnityEngine.CoreModule.dll::UnityEngine::Object::
                                          Object_1_Instantiate_4
                                                    ((Object *)original,
                                                                                                          
                                                  GamePassesTouristInformationPopup_MethodInfo__UnityEngine__Object__Instantiate<GamePassesTouristInformationPopup>_GamePassesTouristInformationPopup_
                                                  );
                                if (pOVar6 == (Object *)0x0) goto code_?;
                                bVar14 = iRam_? != 0;
                                pOVar6[1].klass = pOVar13;
                                if (bVar14) {
                                  uVar15 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
                                  puVar18 = (ulonglong *)
                                           ((ulonglong)((uVar15 & 0x1fffff) >> 6) * 8 + 0xADDR)
                                  ;
                                  do {
                                    uVar31 = *puVar18;
                                    LOCK();
                                    uVar17 = *puVar18;
                                    if (uVar31 == uVar17) {
                                      *puVar18 = uVar31 | 1L << (uVar15 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (uVar31 != uVar17);
                                }
                                pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_gameObject
                                                    ((Component *)this,(MethodInfo *)0x0);
                                pEVar20 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                                          FUN_?(
                                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                                  );
                                UnityEngine.UI.dll::UnityEngine::EventSystems::
                                ExecuteEvents+EventFunction`1[System::Object]::
                                ExecuteEvents_EventFunction_1_System_Object___ctor
                                          (pEVar20,pOVar6,
                                           MethodInfo__GamePassesShop____c__DisplayClass74_0___ShowTouristInformationPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                                           ,(MethodInfo *)0x0);
                                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1
                                             ).field_0x1c == 0) {
                                  FUN_?();
                                }
                                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                                ExecuteEvents_ExecuteHierarchy
                                          (pGVar19,(BaseEventData *)0x0,pEVar20,
                                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                                          );
                              }
                              return;
                            }
code_?:
                            FUN_?();
                            UNRECOVERED_JUMPTABLE = (code *)swi(3);
                            (*UNRECOVERED_JUMPTABLE)();
                            return;
                          }
                        }
                        else {
                          GamePassesShop_ShowPurchaseGoldErrorPopup(this,(MethodInfo *)0x0);
                        }
                        return;
                      }
                    }
                  }
                }
              }
            }
code_?:
            FUN_?();
            UNRECOVERED_JUMPTABLE = (code *)swi(3);
            (*UNRECOVERED_JUMPTABLE)();
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void OnClickFreeTryAd() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnClickFreeTryAd
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
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
    FUN_?(&
                  MethodInfo__GamePassesShop__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesShop____c___ShowAd_b__83_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    if (((pTVar1->fields).previewTier == 0) && ((pTVar1->fields).currentTier == 3)) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePassesShop____c);
      }
      this_01 = TypeInfo__GamePassesShop____c->static_fields->__9__83_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__GamePassesShop____c);
        }
        object = TypeInfo__GamePassesShop____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__GamePassesShop____c___ShowAd_b__83_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesShop____c->static_fields->__9__83_0 = this_01;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&TypeInfo__GamePassesShop____c->static_fields->__9__83_0 >> 0xc
                         );
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
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar7 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
        if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar7);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar2,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar9 = (longlong)(pLVar8->fields)._size;
        uVar3 = 0;
        if (0 < lVar9) {
          lVar10 = 0;
          lVar11 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar8 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar8->fields)._size <= uVar3) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar13 = (pLVar8->fields)._items;
            if (pTVar13 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar13->max_length <= uVar3) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar2,(BaseEventData *)0x0,
                               (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                               (pMVar7->field7_0x38).rgctx_data[1].method);
            if (bVar14 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar3 = uVar3 + 1;
            lVar10 = lVar10 + 1;
            lVar11 = lVar11 + 8;
          } while (lVar10 < lVar9);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
    if (pTVar1 != (TogglePreviewState *)0x0) {
      if ((pTVar1->fields).freeTry == 0) {
        pIVar15 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        this_02 = (UnityAction_1_System_Int32Enum_ *)
                  FUN_?(
                               TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_02,(Object *)this,
                   MethodInfo__GamePassesShop__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar15 != (IAdManager *)0x0) {
          FUN_?();
          return;
        }
      }
      else {
        GamePassesShop_PreviewTier(this,(MethodInfo *)0x0);
        pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar1 != (TogglePreviewState *)0x0) {
          (pTVar1->fields).freeTry = 0;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnClickFreeTrySubcribed() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnClickFreeTrySubcribed
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
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
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesShop__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesShop____c___PreviewTier_b__85_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesShop____c___PreviewTier_b__85_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 == (TogglePreviewState *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((pTVar1->fields).previewTier == 0) && ((pTVar1->fields).currentTier == 3)) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesShop____c);
    }
    pEVar4 = TypeInfo__GamePassesShop____c->static_fields->__9__85_1;
    if (pEVar4 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePassesShop____c);
      }
      pGVar5 = TypeInfo__GamePassesShop____c->static_fields->__9;
      pEVar4 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,(Object *)pGVar5,
                 MethodInfo__GamePassesShop____c___PreviewTier_b__85_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GamePassesShop____c->static_fields->__9__85_1 = pEVar4;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&TypeInfo__GamePassesShop____c->static_fields->__9__85_1 >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
  }
  else {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto DAT_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
              (this_00,(MethodInfo *)0x0);
    pAVar11 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__GamePassesShop__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar11 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar11,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar11 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar12 = (Action *)0x0;
      if (pAVar11->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar11;
      }
      if (pAVar12 == (Action *)0x0) {
        FUN_?(pAVar11,TypeInfo__System__Action);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar12;
      pAVar12 = (Action *)0x0;
      if (pAVar11->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar11;
      }
      if (pAVar12 == (Action *)0x0) {
        FUN_?(pAVar11,TypeInfo__System__Action);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)
                      &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc)
      ;
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesShop____c);
    }
    pEVar4 = TypeInfo__GamePassesShop____c->static_fields->__9__85_0;
    if (pEVar4 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePassesShop____c);
      }
      pGVar5 = TypeInfo__GamePassesShop____c->static_fields->__9;
      pEVar4 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,(Object *)pGVar5,
                 MethodInfo__GamePassesShop____c___PreviewTier_b__85_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GamePassesShop____c->static_fields->__9__85_0 = pEVar4;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&TypeInfo__GamePassesShop____c->static_fields->__9__85_0 >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    (this->fields).isWaitingForFreeTryTier = 1;
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnDestroy
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassProgressionController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesShop__UpdateTierCostTets__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesShop__UpdateUI__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,MethodInfo__GamePassesShop__UpdateUI__,(MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAVar3 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
  }
  else {
    pAVar4 = pAVar1;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?(pAVar3,TypeInfo__System__Action);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar4;
    pAVar4 = pAVar1;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?(pAVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated
                  >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  pAVar3 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,MethodInfo__GamePassesShop__UpdateTierCostTets__,
             (MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar3,(Delegate *)pNVar2,(MethodInfo *)0x0);
  if (pAVar3 == (Action *)0x0) {
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
         (Action *)0x0;
  }
  else {
    pAVar4 = pAVar1;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?(pAVar3,TypeInfo__System__Action);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar4;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 == (Action *)0x0) {
      FUN_?(pAVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)
                   &TypeInfo__GamePassProgressionController->static_fields->
                    OnGamePassesProgressionUpdate >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnPlayerPlanetDataUpdated
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
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
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesShop__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesShop____c___OnPlayerPlanetDataUpdated_b__86_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesShop____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isWaitingForFreeTryTier != 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesShop____c);
    }
    this_00 = TypeInfo__GamePassesShop____c->static_fields->__9__86_0;
    if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePassesShop____c);
      }
      object = TypeInfo__GamePassesShop____c->static_fields->__9;
      this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                 MethodInfo__GamePassesShop____c___OnPlayerPlanetDataUpdated_b__86_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GamePassesShop____c->static_fields->__9__86_0 = this_00;
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)&TypeInfo__GamePassesShop____c->static_fields->__9__86_0 >> 0xc);
        lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
        do {
          uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
          puVar4 = (ulonglong *)(lVar2 + 0xADDR);
          LOCK();
          bVar5 = uVar3 == *puVar4;
          if (bVar5) {
            *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    (this->fields).isWaitingForFreeTryTier = 0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar6 == (PlayerPlanetData *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->fields).gamePassTierDisplayed <= (pPVar6->fields).previewGamePassTier) &&
     ((this->fields).haveShownFreeTryUnlock == 0)) {
    pAVar8 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__GamePassesShop__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar8 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar8,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar8 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar9 = (Action *)0x0;
      if (pAVar8->klass == TypeInfo__System__Action) {
        pAVar9 = pAVar8;
      }
      if (pAVar9 == (Action *)0x0) {
        FUN_?(pAVar8,TypeInfo__System__Action);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar9;
      pAVar9 = (Action *)0x0;
      if (pAVar8->klass == TypeInfo__System__Action) {
        pAVar9 = pAVar8;
      }
      if (pAVar9 == (Action *)0x0) {
        FUN_?(pAVar8,TypeInfo__System__Action);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)
                     &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    GamePassesShop_ShowTierUnlockedPopup(this,0,1,(MethodInfo *)0x0);
    (this->fields).haveShownFreeTryUnlock = 1;
  }
  return;
}


/* Void OnSuccessfulPurchase() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnSuccessfulPurchase
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  GamePassesShop_ShowTierUnlockedPopup(this,1,0,(MethodInfo *)0x0);
  pGVar1 = (this->fields).purchaseButtonObject;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields).freeTryUI;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pPVar2 = (this->fields).progressBar;
      if (pPVar2 != (ProgressBar *)0x0) {
        pSVar3 = (pPVar2->fields).progressBar;
        (pPVar2->fields).progress = 1.0;
        value = _UNK_?;
        if (pSVar3 != (Scrollbar *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                    (pSVar3,_UNK_?,(MethodInfo *)0x0);
          pPVar2 = (this->fields).disabledProgressBar;
          if (pPVar2 != (ProgressBar *)0x0) {
            pSVar3 = (pPVar2->fields).progressBar;
            (pPVar2->fields).progress = 1.0;
            if (pSVar3 != (Scrollbar *)0x0) {
              UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                        (pSVar3,value,(MethodInfo *)0x0);
              GamePassesShop_ActivateBar(this,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__GamePassesManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
              if (pPVar4 != (PlayerPlanetData *)0x0) {
                pPVar5 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
                bVar6 = (pPVar4->fields).gamePassTier;
                if (pPVar5 != (PlayerTierStateCalculator *)0x0) {
                  if ((pPVar5->fields).gamePointVelocityIsZero == 0) {
                    pDVar7 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                              PlayerTierStateCalculator::
                              PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                                        (pPVar5,0,(uint)bVar6,(MethodInfo *)0x0);
                  }
                  else {
                    pDVar7 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                              PlayerTierStateCalculator::
                              PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                                        (pPVar5,(uint)bVar6,(MethodInfo *)0x0);
                  }
                  if (pDVar7 !=
                      (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                       *)0x0) {
                    pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              ByteEnum,System::Object]::
                              Dictionary_2_System_ByteEnum_System_Object__get_Item
                                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7,
                                         (uint)(this->fields).gamePassTierDisplayed,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                        );
                    if (pOVar8 != (Object *)0x0) {
                      iVar9 = *(int32_t *)&pOVar8[2].klass;
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__System__Number);
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->
                           klass->field_0x135 & 1) == 0) {
                        FUN_?();
                      }
                      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      aRStack_10[0]._pointer._value = (void *)0x0;
                      aRStack_10[0]._length = 0;
                      aRStack_10[0]._12_4_ = 0;
                      pSVar11 = mscorlib.dll::System::Number::Number_FormatInt32
                                          (iVar9,aRStack_10,(IFormatProvider *)0x0,(MethodInfo *)0x0
                                          );
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__System__Number);
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->
                           klass->field_0x135 & 1) == 0) {
                        FUN_?();
                      }
                      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      aRStack_10[0]._pointer._value = (void *)0x0;
                      aRStack_10[0]._length = 0;
                      aRStack_10[0]._12_4_ = 0;
                      str2 = mscorlib.dll::System::Number::Number_FormatInt32
                                       (iVar9,aRStack_10,(IFormatProvider *)0x0,(MethodInfo *)0x0);
                      pSVar11 = mscorlib.dll::System::String::String_Concat_5
                                          (pSVar11,::StringLiteral____,str2,(MethodInfo *)0x0);
                      pTVar12 = (this->fields).progressText;
                      if (pTVar12 != (Text *)0x0) {
                        (*(pTVar12->klass->vtable).set_text.methodPtr)
                                  (pTVar12,pSVar11,(pTVar12->klass->vtable).set_text.method);
                        bVar6 = (this->fields).gamePassTierDisplayed;
                        BVar13 = (ByteEnum__Enum)bVar6;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                       );
                          LOCK();
                          UNLOCK();
                          FUN_?(&TypeInfo__GamePassesManager);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__GamePassesManager);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                        if (pPVar4 != (PlayerPlanetData *)0x0) {
                          iVar9 = (pPVar4->fields).progressionGamePoints;
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__GamePassesManager);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
                          if (pPVar4 != (PlayerPlanetData *)0x0) {
                            pPVar5 = TypeInfo__GamePassesManager->static_fields->
                                     playerTierStateCalculator;
                            bVar14 = (pPVar4->fields).gamePassTier;
                            if (pPVar5 != (PlayerTierStateCalculator *)0x0) {
                              if ((pPVar5->fields).gamePointVelocityIsZero == 0) {
                                pDVar7 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                                          PlayerTierStateCalculator::
                                          PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                                                    (pPVar5,iVar9,(uint)bVar14,(MethodInfo *)0x0);
                              }
                              else {
                                pDVar7 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                                          PlayerTierStateCalculator::
                                          PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                                                    (pPVar5,(uint)bVar14,(MethodInfo *)0x0);
                              }
                              iVar15 = 0;
                              if (bVar6 != 0) {
                                if (pDVar7 ==
                                    (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                                     *)0x0) goto code_?;
                                do {
                                  pOVar8 = mscorlib.dll::System::Collections::Generic::
                                            Dictionary`2[System::ByteEnum,System::Object]::
                                            Dictionary_2_System_ByteEnum_System_Object__get_Item
                                                      ((Dictionary_2_System_ByteEnum_System_Object_
                                                        *)pDVar7,BVar13 & 0xff,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                                  );
                                  if (pOVar8 == (Object *)0x0) goto code_?;
                                  iVar15 = iVar15 + *(int *)&pOVar8[2].klass;
                                  BVar13 = BVar13 - 1;
                                } while (0 < (int)BVar13);
                              }
                              if (cRam_? == '\0') {
                                FUN_?(&TypeInfo__GamePointGainEffectManager,0);
                                LOCK();
                                UNLOCK();
                                cRam_? = '\x01';
                              }
                              TypeInfo__GamePointGainEffectManager->static_fields->
                              progressBarGamePointAmountShown = iVar15;
                              if (TypeInfo__GamePointGainEffectManager->static_fields->
                                  OnGamePointGainEffectShown != (Action_1_Int32_ *)0x0) {
                                pAVar16 = TypeInfo__GamePointGainEffectManager->static_fields->
                                          OnGamePointGainEffectShown;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                (*(pAVar16->fields)._._.invoke_impl)
                                          ((pAVar16->fields)._._.method_code,iVar15,
                                           (pAVar16->fields)._._.method);
                                return;
                              }
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
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnTestTierPress() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_OnTestTierPress
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    bVar2 = (pPVar1->fields).gamePassTier;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      if (this_00 != (PlayerTierStateCalculator *)0x0) {
        if ((this_00->fields).gamePointVelocityIsZero == 0) {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                              (this_00,(pPVar1->fields).progressionGamePoints,(uint)bVar2,
                               (MethodInfo *)0x0);
        }
        else {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                              (this_00,(uint)bVar2,(MethodInfo *)0x0);
        }
        iVar3 = 0;
        BVar4 = 1;
        iVar5 = 0;
        if ((this->fields).gamePassTierDisplayed != 0) {
          do {
            if (BVar4 == (this->fields).gamePassTierDisplayed) {
              if (this_01 ==
                  (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                   *)0x0) goto code_?;
            }
            else {
              if ((this_01 ==
                   (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                    *)0x0) ||
                 (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           ByteEnum,System::Object]::
                           Dictionary_2_System_ByteEnum_System_Object__get_Item
                                     ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                      BVar4 & 0xff,
                                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                     ), pOVar6 == (Object *)0x0)) goto code_?;
              iVar5 = iVar5 + *(int *)&pOVar6[2].klass;
            }
            pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,BVar4 & 0xff
                                ,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar6 == (Object *)0x0) goto code_?;
            iVar3 = iVar3 + *(int *)&pOVar6[2].klass;
            BVar4 = BVar4 + 1;
          } while ((int)BVar4 <= (int)(uint)(this->fields).gamePassTierDisplayed);
        }
        if (bVar2 == (this->fields).gamePassTierDisplayed) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar7 == (MVGameControllerBase *)0x0) ||
              (pMVar8 = (pMVar7->fields).game, pMVar8 == (MVNetworkGame *)0x0)) ||
             (pMVar9 = (pMVar8->fields).operationRequests,
             pMVar9 == (MVNetworkGame_OperationRequests *)0x0)) goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                    (pMVar9,GamePassTier__Enum_Tier0,(MethodInfo *)0x0);
          (this->fields).newGamePointValue = iVar5;
        }
        else {
          bVar10 = cRam_? == '\0';
          (this->fields).newGamePointValue = iVar3;
          if (bVar10) {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar7 == (MVGameControllerBase *)0x0) ||
              (pMVar8 = (pMVar7->fields).game, pMVar8 == (MVNetworkGame *)0x0)) ||
             (pMVar9 = (pMVar8->fields).operationRequests,
             pMVar9 == (MVNetworkGame_OperationRequests *)0x0)) goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                    (pMVar9,(uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
        }
        pcVar11 = pcRam_?;
        (this->fields).shouldLerp = 1;
        pcVar12 = pcRam_?;
        if ((pcVar11 == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar12 = pcVar11,
           pcVar11 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar12;
        fVar14 = (float)(*pcVar11)();
        pPVar15 = (this->fields).progressBar;
        (this->fields).lerpStartTime = fVar14;
        if (pPVar15 != (ProgressBar *)0x0) {
          iVar16 = FUN_?((float)(iVar3 - iVar5) * (pPVar15->fields).progress + (float)iVar5
                               );
          (this->fields).oldGamePointValue = iVar16;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void PreviewTier() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_PreviewTier
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
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
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesShop__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesShop____c___PreviewTier_b__85_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesShop____c___PreviewTier_b__85_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 == (TogglePreviewState *)0x0) {
DAT_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((pTVar1->fields).previewTier == 0) && ((pTVar1->fields).currentTier == 3)) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesShop____c);
    }
    pEVar4 = TypeInfo__GamePassesShop____c->static_fields->__9__85_1;
    if (pEVar4 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePassesShop____c);
      }
      pGVar5 = TypeInfo__GamePassesShop____c->static_fields->__9;
      pEVar4 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,(Object *)pGVar5,
                 MethodInfo__GamePassesShop____c___PreviewTier_b__85_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GamePassesShop____c->static_fields->__9__85_1 = pEVar4;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&TypeInfo__GamePassesShop____c->static_fields->__9__85_1 >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
  }
  else {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) goto DAT_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TogglePreviewTier
              (this_00,(MethodInfo *)0x0);
    pAVar11 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__GamePassesShop__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar11 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar11,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar11 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar12 = (Action *)0x0;
      if (pAVar11->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar11;
      }
      if (pAVar12 == (Action *)0x0) {
        FUN_?(pAVar11,TypeInfo__System__Action);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar12;
      pAVar12 = (Action *)0x0;
      if (pAVar11->klass == TypeInfo__System__Action) {
        pAVar12 = pAVar11;
      }
      if (pAVar12 == (Action *)0x0) {
        FUN_?(pAVar11,TypeInfo__System__Action);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)
                      &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc)
      ;
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesShop____c);
    }
    pEVar4 = TypeInfo__GamePassesShop____c->static_fields->__9__85_0;
    if (pEVar4 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePassesShop____c);
      }
      pGVar5 = TypeInfo__GamePassesShop____c->static_fields->__9;
      pEVar4 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
               FUN_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,(Object *)pGVar5,
                 MethodInfo__GamePassesShop____c___PreviewTier_b__85_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GamePassesShop____c->static_fields->__9__85_0 = pEVar4;
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&TypeInfo__GamePassesShop____c->static_fields->__9__85_0 >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)pEVar4,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    (this->fields).isWaitingForFreeTryTier = 1;
  }
  return;
}


/* Int32 ReduceGamePointsWithPreviousTierRequirements(GamePassTier, Int32,
   Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierState]) */

int32_t Assembly-CSharp.dll::GamePassesShop::
        GamePassesShop_ReduceGamePointsWithPreviousTierRequirements
                  (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,int32_t gamePoints,
                  Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                  *gameTierShopStatus,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  BVar1 = (gamePassTierToDisplay & 0xff) - 1;
  if (0 < (int)BVar1) {
    if (gameTierShopStatus ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    do {
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)gameTierShopStatus,
                          BVar1 & 0xff,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar4 == (Object *)0x0) goto code_?;
      gamePoints = gamePoints - *(int *)&pOVar4[2].klass;
      BVar1 = BVar1 - 1;
    } while (0 < (int)BVar1);
  }
  return gamePoints;
}


/* Void RewardedAdCallback(RewardedAdResult) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_RewardedAdCallback
               (GamePassesShop *this,RewardedAdResult__Enum result,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&
                  MethodInfo__GamePassesShop____c___RewardedAdCallback_b__84_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesShop____c___RewardedAdCallback_b__84_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesShop____c);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
code_?:
    GamePassesShop_PreviewTier(this,(MethodInfo *)0x0);
    return;
  }
  if ((result == RewardedAdResult__Enum_ErrorClient) ||
     (result == RewardedAdResult__Enum_ErrorInternal)) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesShop____c);
    }
    this_01 = TypeInfo__GamePassesShop____c->static_fields->__9__84_1;
    if (this_01 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
    goto code_?;
    if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesShop____c);
    }
    pGVar2 = TypeInfo__GamePassesShop____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pGVar2,
               MethodInfo__GamePassesShop____c___RewardedAdCallback_b__84_1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesShop____c->static_fields->__9__84_1 = this_01;
    ppEVar3 = &TypeInfo__GamePassesShop____c->static_fields->__9__84_1;
  }
  else {
    if (result == RewardedAdResult__Enum_ErrorTimeout) {
      return;
    }
    if (result == RewardedAdResult__Enum_RewardUnlocked) goto code_?;
    if (result != RewardedAdResult__Enum_RewardNotUnlocked) {
      return;
    }
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesShop____c);
    }
    this_01 = TypeInfo__GamePassesShop____c->static_fields->__9__84_0;
    if (this_01 != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
    goto code_?;
    if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesShop____c);
    }
    pGVar2 = TypeInfo__GamePassesShop____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pGVar2,
               MethodInfo__GamePassesShop____c___RewardedAdCallback_b__84_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__GamePassesShop____c->static_fields->__9__84_0 = this_01;
    ppEVar3 = &TypeInfo__GamePassesShop____c->static_fields->__9__84_0;
  }
  func_?(ppEVar3);
code_?:
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar4 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
    if ((pMVar4->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar5 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar5 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar6 = (longlong)(pLVar5->fields)._size;
    uVar7 = 0;
    if (0 < lVar6) {
      lVar8 = 0;
      lVar9 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar5 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar5 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar5->fields)._size <= uVar7) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar11 = (pLVar5->fields)._items;
        if (pTVar11 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar11->max_length <= uVar7) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar11->vector + lVar9 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar12 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar4->field7_0x38).rgctx_data[1].method);
        if (bVar12 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 1;
        lVar9 = lVar9 + 8;
      } while (lVar8 < lVar6);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean ShouldShowTierReward(GamePassTier) */

bool Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShouldShowTierReward
               (GamePassesShop *this,GamePassTier__Enum tierToShow,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TierUnlockedPopupController);
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
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return 0;
    }
    bVar2 = TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar3 != (PlayerPlanetData *)0x0) {
      if ((pPVar3->fields).gamePassTier <= bVar2) {
        return 0;
      }
      if ((byte)tierToShow <=
          TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown) {
        return 0;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        return (byte)tierToShow <= (pPVar3->fields).gamePassTier;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void ShowAd() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShowAd
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>);
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
    FUN_?(&
                  MethodInfo__GamePassesShop__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__AdIntegration__IAdManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesShop____c___ShowAd_b__83_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
  if (pTVar1 != (TogglePreviewState *)0x0) {
    if (((pTVar1->fields).previewTier == 0) && ((pTVar1->fields).currentTier == 3)) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePassesShop____c);
      }
      this_01 = TypeInfo__GamePassesShop____c->static_fields->__9__83_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__GamePassesShop____c);
        }
        object = TypeInfo__GamePassesShop____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__GamePassesShop____c___ShowAd_b__83_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__GamePassesShop____c->static_fields->__9__83_0 = this_01;
        if (iRam_? != 0) {
          uVar3 = (uint)((ulonglong)&TypeInfo__GamePassesShop____c->static_fields->__9__83_0 >> 0xc
                         );
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
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar7 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
        if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar7);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar2,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar9 = (longlong)(pLVar8->fields)._size;
        uVar3 = 0;
        if (0 < lVar9) {
          lVar10 = 0;
          lVar11 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar8 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar8->fields)._size <= uVar3) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pTVar13 = (pLVar8->fields)._items;
            if (pTVar13 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar13->max_length <= uVar3) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
            if (this_00 == (Component *)0x0) goto code_?;
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0);
            bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_Execute_18
                              (pGVar2,(BaseEventData *)0x0,
                               (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                               (pMVar7->field7_0x38).rgctx_data[1].method);
            if (bVar14 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_00,(MethodInfo *)0x0);
              return;
            }
            uVar3 = uVar3 + 1;
            lVar10 = lVar10 + 1;
            lVar11 = lVar11 + 8;
          } while (lVar10 < lVar9);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
    if (pTVar1 != (TogglePreviewState *)0x0) {
      if ((pTVar1->fields).freeTry == 0) {
        pIVar15 = MVGameControllerBase::MVGameControllerBase_get_AdManager((MethodInfo *)0x0);
        this_02 = (UnityAction_1_System_Int32Enum_ *)
                  FUN_?(
                               TypeInfo__System__Action<Assets::Scripts::AdIntegration::RewardedAdResult>
                               );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_02,(Object *)this,
                   MethodInfo__GamePassesShop__RewardedAdCallback_Assets__Scripts__AdIntegration__RewardedAdResult_
                   ,(MethodInfo *)0x0);
        if (pIVar15 != (IAdManager *)0x0) {
          FUN_?();
          return;
        }
      }
      else {
        GamePassesShop_PreviewTier(this,(MethodInfo *)0x0);
        pTVar1 = GamePassesManager::GamePassesManager_get_TogglePreviewState((MethodInfo *)0x0);
        if (pTVar1 != (TogglePreviewState *)0x0) {
          (pTVar1->fields).freeTry = 0;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ShowGamePassShopInformationPopup() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShowGamePassShopInformationPopup
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesShop____c__DisplayClass92_0___ShowGamePassShopInformationPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesShop____c__DisplayClass92_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__GamePassesShop____c__DisplayClass92_0);
  pGVar1 = (this->fields).gamePassesShopInformationPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar2 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar1,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = iRam_? != 0;
  object[1].klass = pOVar2;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)(object + 1) >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__GamePassesShop____c__DisplayClass92_0___ShowGamePassShopInformationPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
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
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar11 = (longlong)(pLVar10->fields)._size;
    uVar5 = 0;
    if (0 < lVar11) {
      lVar12 = 0;
      lVar13 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar14 = (pLVar10->fields)._items;
        if (pTVar14 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar14->max_length <= uVar5) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar14->vector + lVar13 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_01,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar15 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 8;
      } while (lVar12 < lVar11);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowPurchaseConfirmPopup(Int32) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShowPurchaseConfirmPopup
               (GamePassesShop *this,int32_t price,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&MethodInfo__GamePassesShop__OnSuccessfulPurchase__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TierPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchasePopup>_TierPurchasePopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesShop____c__DisplayClass75_0___ShowPurchaseConfirmPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesShop____c__DisplayClass75_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__GamePassesShop____c__DisplayClass75_0);
  original = (this->fields).tierPurchasePopupPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      TierPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchasePopup>_TierPurchasePopup_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__GamePassesShop____c__DisplayClass75_0___ShowPurchaseConfirmPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pOVar1 = object[1].klass;
    bVar7 = (this->fields).gamePassTierDisplayed;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__GamePassesShop__OnSuccessfulPurchase__,
               (MethodInfo *)0x0);
    if (pOVar1 != (Object__Class *)0x0) {
      bVar2 = iRam_? != 0;
      *(byte *)&(pOVar1->_0).this_arg.data = bVar7;
      *(int32_t *)((longlong)&(pOVar1->_0).this_arg.data + 4) = price;
      *(NavMesh_OnNavMeshPreUpdate **)&(pOVar1->_0).this_arg.attrs = this_01;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(pOVar1->_0).this_arg.attrs >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pIVar8 = (pOVar1->_0).byval_arg.data.array;
      aIStackX_8[0].m_value = price;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_9[0]._pointer._value = (void *)0x0;
      aRStack_9[0]._length = 0;
      aRStack_9[0]._12_4_ = 0;
      pSVar10 = mscorlib.dll::System::Number::Number_FormatInt32
                         ((uint)bVar7,aRStack_9,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      if (pIVar8 != (Il2CppArrayType *)0x0) {
        (**(code **)&pIVar8->etype[0x5e].attrs)(pIVar8,pSVar10,pIVar8->etype[0x5f].data.dummy);
        plVar11 = *(longlong **)&(pOVar1->_0).byval_arg.attrs;
        pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
        if (plVar11 != (longlong *)0x0) {
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar11 + 0x5e8);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)
                    (plVar11,pSVar10,*(undefined8 *)(*plVar11 + 0x5f0),UNRECOVERED_JUMPTABLE);
          return;
        }
      }
    }
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void ShowPurchaseGoldErrorPopup() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShowPurchaseGoldErrorPopup
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  TierPurchaseNotEnoughGoldErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchaseNotEnoughGoldErrorPopup>_TierPurchaseNotEnoughGoldErrorPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesShop____c__DisplayClass76_0___ShowPurchaseGoldErrorPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesShop____c__DisplayClass76_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__GamePassesShop____c__DisplayClass76_0);
  original = (this->fields).tierPurchaseGoldErrorPopupPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      TierPurchaseNotEnoughGoldErrorPopup_MethodInfo__UnityEngine__Object__Instantiate<TierPurchaseNotEnoughGoldErrorPopup>_TierPurchaseNotEnoughGoldErrorPopup_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__GamePassesShop____c__DisplayClass76_0___ShowPurchaseGoldErrorPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (object[1].klass != (Object__Class *)0x0) {
      bVar7 = (this->fields).gamePassTierDisplayed;
      pIVar8 = ((object[1].klass)->_0).byval_arg.data.array;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_9[0]._pointer._value = (void *)0x0;
      aRStack_9[0]._length = 0;
      aRStack_9[0]._12_4_ = 0;
      pSVar10 = mscorlib.dll::System::Number::Number_FormatInt32
                         ((uint)bVar7,aRStack_9,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      if (pIVar8 == (Il2CppArrayType *)0x0) {
        FUN_?();
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)&pIVar8->etype[0x5e].attrs;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(pIVar8,pSVar10,pIVar8->etype[0x5f].data.dummy,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void ShowTierUnlockedPopup(Boolean, Boolean) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShowTierUnlockedPopup
               (GamePassesShop *this,bool wasPurchased,bool wasTempUnlocked,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesShop____c__DisplayClass73_0___ShowTierUnlockedPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesShop____c__DisplayClass73_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__GamePassesShop____c__DisplayClass73_0);
  original = (this->fields).TierUnlockedPopupControllerPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      TierUnlockedPopupController_MethodInfo__UnityEngine__Object__Instantiate<TierUnlockedPopupController>_TierUnlockedPopupController_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__GamePassesShop____c__DisplayClass73_0___ShowTierUnlockedPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (object[1].klass != (Object__Class *)0x0) {
      TierUnlockedPopupController::TierUnlockedPopupController_Initialize
                ((TierUnlockedPopupController *)object[1].klass,
                 (uint)(this->fields).gamePassTierDisplayed,wasPurchased,wasTempUnlocked,
                 (MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ShowTouristInformationPopup() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_ShowTouristInformationPopup
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
                  GamePassesTouristInformationPopup_MethodInfo__UnityEngine__Object__Instantiate<GamePassesTouristInformationPopup>_GamePassesTouristInformationPopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesShop____c__DisplayClass74_0___ShowTouristInformationPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesShop____c__DisplayClass74_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).embeddedPlayerConfig;
  if (pEVar1 == (EmbeddedPlayerConfig *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pEVar1->fields).initialized == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
    uVar3 = (pEVar1->fields).kogamaDefaultData.hideSignUp;
    cVar4 = uVar3;
  }
  else {
    cVar4 = (pEVar1->fields).currentSite.hideSignUp;
  }
  if (cVar4 == '\0') {
    object = (Object *)FUN_?(TypeInfo__GamePassesShop____c__DisplayClass74_0);
    original = (this->fields).touristInformationPopupPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar5 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        GamePassesTouristInformationPopup_MethodInfo__UnityEngine__Object__Instantiate<GamePassesTouristInformationPopup>_GamePassesTouristInformationPopup_
                       );
    if (object == (Object *)0x0) goto code_?;
    bVar6 = iRam_? != 0;
    object[1].klass = pOVar5;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)(object + 1) >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__GamePassesShop____c__DisplayClass74_0___ShowTouristInformationPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  return;
}


/* Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]
   SortOutNonAccessItemsInShopData(Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]])
    */

Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::GamePassesShop::GamePassesShop_SortOutNonAccessItemsInShopData
          (GamePassesShop *this,
          Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *tierShopData,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
            );
  if (tierShopData == (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0
     ) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
    FUN_?();
    pcVar1 = (code *)swi(3);
    pDVar2 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)(*pcVar1)()
    ;
    return pDVar2;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&pDStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  uStack_8 = (ulonglong)(uint)(tierShopData->fields)._version;
  uStack_9 = 2;
  uStack_10 = 0;
  uStack_11 = 0;
  DStack_12._version = (undefined4)uStack_8;
  DStack_12._index = uStack_8._4_4_;
  DStack_12._current.key = 0;
  DStack_12._current._4_4_ = 0;
  DStack_12._current.value = (Object *)0x0;
  DStack_12._getEnumeratorRetType = 2;
  DStack_12._36_4_ = 0;
  pDStack_4 = tierShopData;
  DStack_12._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)tierShopData;
code_?:
  bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System::
          UInt32,System::Object]::
          Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                    (&DStack_12,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                    );
  value = DStack_12._current.value;
  if (bVar13 == 0) {
    return (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)this_00;
  }
  key = DStack_12._current.key;
  if (DStack_12._current.value != (Object *)0x0) {
    if (*(int *)&DStack_12._current.value[1].monitor != 0) {
      pOVar14 = DStack_12._current.value[1].klass;
      if (pOVar14 != (Object__Class *)0x0) {
        if (*(int *)&(pOVar14->_0).namespaze != 0) {
          pIVar15 = (pOVar14->_0).byval_arg.data.array;
          if (cRam_? == '\0') {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((key != 0x41) && (key != 0x3b)) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
    goto code_?;
  }
  goto code_?;
code_?:
  if (pIVar15 == (Il2CppArrayType *)0x0) {
    pIVar16 = (Il2CppArrayType *)0x0;
  }
  else {
    bVar17 = (TypeInfo__MVTeleporter->_1).naturalAligment;
    if ((*(byte *)&pIVar15->etype[0x13].data < bVar17) ||
       (*(MVTeleporter__Class **)
         (*(longlong *)&pIVar15->etype[0xc].attrs + -8 + (ulonglong)bVar17 * 8) !=
        TypeInfo__MVTeleporter)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    pIVar16 = (Il2CppArrayType *)0x0;
    if (bVar18) {
      pIVar16 = pIVar15;
    }
  }
  if (pIVar16 != (Il2CppArrayType *)0x0) {
code_?:
    if (this_00 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
    goto code_?;
    in_R9D = CONCAT31((int3)(in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,value,in_R9D,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
               ->klass->rgctx_data[0x22].method);
  }
  goto code_?;
}


/* Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]
   SortOutNonLootItemsInShopData(Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]])
    */

Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::GamePassesShop::GamePassesShop_SortOutNonLootItemsInShopData
          (GamePassesShop *this,
          Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *tierShopData,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
            );
  if (tierShopData == (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0
     ) {
    FUN_?();
  }
  else {
    uStack_1 = 0;
    uStack_2 = 0;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pDStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (ulonglong)(uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    uStack_8 = (ulonglong)(uint)(tierShopData->fields)._version;
    uStack_9 = 2;
    DStack_10._version = (undefined4)uStack_8;
    DStack_10._index = uStack_8._4_4_;
    DStack_10._current.key = 0;
    DStack_10._current._4_4_ = 0;
    DStack_10._current.value = (Object *)0x0;
    DStack_10._getEnumeratorRetType = 2;
    DStack_10._36_4_ = 0;
    pDStack_4 = tierShopData;
    DStack_10._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)tierShopData;
    while( true ) {
      do {
        do {
          bVar11 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            (&DStack_10,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__MoveNext__
                            );
          value = DStack_10._current.value;
          if (bVar11 == 0) {
            return (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                   this_00;
          }
          key = DStack_10._current.key;
          if (DStack_10._current.value == (Object *)0x0) goto code_?;
        } while (*(int *)&DStack_10._current.value[1].monitor < 1);
        item = (MVWorldObjectClient *)FUN_?(DStack_10._current.value,0);
        bVar11 = GamePassesShop_IsTierItemALootItem(this,item,(MethodInfo *)0x0);
      } while (bVar11 == 0);
      if (this_00 == (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0
         ) break;
      in_R9D = CONCAT31((int3)(in_R9D >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,value,in_R9D,
                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                 ->klass->rgctx_data[0x22].method);
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  pDVar13 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)(*pcVar12)();
  return pDVar13;
}


/* Void Start() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_Start
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassProgressionController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesShop__UpdateTierCostTets__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesShop__UpdateUI__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__UI__LayoutRebuilder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,MethodInfo__GamePassesShop__UpdateUI__,(MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAVar3 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
  }
  else {
    pAVar4 = pAVar1;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?(pAVar3,TypeInfo__System__Action);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar4;
    pAVar4 = pAVar1;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?(pAVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)
                    &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  pAVar3 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,MethodInfo__GamePassesShop__UpdateTierCostTets__,
             (MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar3,(Delegate *)pNVar2,(MethodInfo *)0x0);
  if (pAVar3 == (Action *)0x0) {
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
         (Action *)0x0;
  }
  else {
    pAVar4 = pAVar1;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?(pAVar3,TypeInfo__System__Action);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar4;
    pAVar4 = pAVar1;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?(pAVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)
                    &TypeInfo__GamePassProgressionController->static_fields->
                     OnGamePassesProgressionUpdate >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  pAVar3 = (Action *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pAVar3 != (Action *)0x0) {
    if (pAVar3->klass == (Action__Class *)TypeInfo__UnityEngine__RectTransform) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 == (Action *)0x0) {
      FUN_?(pAVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::LayoutRebuilder_ForceRebuildLayoutImmediate
            ((RectTransform *)pAVar1,(MethodInfo *)0x0);
  UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::LayoutRebuilder_ForceRebuildLayoutImmediate
            ((this->fields).tierListContainer,(MethodInfo *)0x0);
  pRVar11 = (this->fields).tierList;
  if (pRVar11 != (RectTransform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar12 = (pRVar11->fields)._._._.m_CachedPtr;
    if (pvVar12 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar11,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar12);
    pRVar11 = (this->fields).tierListContainer;
    if (pRVar11 != (RectTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_14 = 0;
      uStack_15 = 0;
      pvVar12 = (pRVar11->fields)._._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar11,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar12,&uStack_14);
      if ((float)uStack_15 < 0.0) {
        pRVar11 = (this->fields).tierListContainer;
        if (pRVar11 == (RectTransform *)0x0) goto code_?;
        value.y = _UNK_?;
        value.x = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                  (pRVar11,value,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void TestTier() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_TestTier
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    bVar2 = (pPVar1->fields).gamePassTier;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      if (this_00 != (PlayerTierStateCalculator *)0x0) {
        if ((this_00->fields).gamePointVelocityIsZero == 0) {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                              (this_00,(pPVar1->fields).progressionGamePoints,(uint)bVar2,
                               (MethodInfo *)0x0);
        }
        else {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                              (this_00,(uint)bVar2,(MethodInfo *)0x0);
        }
        iVar3 = 0;
        BVar4 = 1;
        iVar5 = 0;
        if ((this->fields).gamePassTierDisplayed != 0) {
          do {
            if (BVar4 == (this->fields).gamePassTierDisplayed) {
              if (this_01 ==
                  (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                   *)0x0) goto code_?;
            }
            else {
              if ((this_01 ==
                   (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                    *)0x0) ||
                 (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           ByteEnum,System::Object]::
                           Dictionary_2_System_ByteEnum_System_Object__get_Item
                                     ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                      BVar4 & 0xff,
                                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                     ), pOVar6 == (Object *)0x0)) goto code_?;
              iVar5 = iVar5 + *(int *)&pOVar6[2].klass;
            }
            pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,BVar4 & 0xff
                                ,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar6 == (Object *)0x0) goto code_?;
            iVar3 = iVar3 + *(int *)&pOVar6[2].klass;
            BVar4 = BVar4 + 1;
          } while ((int)BVar4 <= (int)(uint)(this->fields).gamePassTierDisplayed);
        }
        if (bVar2 == (this->fields).gamePassTierDisplayed) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar7 == (MVGameControllerBase *)0x0) ||
              (pMVar8 = (pMVar7->fields).game, pMVar8 == (MVNetworkGame *)0x0)) ||
             (pMVar9 = (pMVar8->fields).operationRequests,
             pMVar9 == (MVNetworkGame_OperationRequests *)0x0)) goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                    (pMVar9,GamePassTier__Enum_Tier0,(MethodInfo *)0x0);
          (this->fields).newGamePointValue = iVar5;
        }
        else {
          bVar10 = cRam_? == '\0';
          (this->fields).newGamePointValue = iVar3;
          if (bVar10) {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar7 == (MVGameControllerBase *)0x0) ||
              (pMVar8 = (pMVar7->fields).game, pMVar8 == (MVNetworkGame *)0x0)) ||
             (pMVar9 = (pMVar8->fields).operationRequests,
             pMVar9 == (MVNetworkGame_OperationRequests *)0x0)) goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetTier
                    (pMVar9,(uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
        }
        pcVar11 = pcRam_?;
        (this->fields).shouldLerp = 1;
        pcVar12 = pcRam_?;
        if ((pcVar11 == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar12 = pcVar11,
           pcVar11 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar12;
        fVar14 = (float)(*pcVar11)();
        pPVar15 = (this->fields).progressBar;
        (this->fields).lerpStartTime = fVar14;
        if (pPVar15 != (ProgressBar *)0x0) {
          iVar16 = FUN_?((float)(iVar3 - iVar5) * (pPVar15->fields).progress + (float)iVar5
                               );
          (this->fields).oldGamePointValue = iVar16;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_Update
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).shouldLerp != 0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    fVar3 = fVar3 - (this->fields).lerpStartTime;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar4 != (PlayerPlanetData *)0x0) {
      playerGamePoints = (pPVar4->fields).progressionGamePoints;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar4 != (PlayerPlanetData *)0x0) {
        this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
        bVar5 = (pPVar4->fields).gamePassTier;
        if (this_00 != (PlayerTierStateCalculator *)0x0) {
          if ((this_00->fields).gamePointVelocityIsZero == 0) {
            this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator
                      ::PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                                (this_00,playerGamePoints,(uint)bVar5,(MethodInfo *)0x0);
          }
          else {
            this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator
                      ::PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                                (this_00,(uint)bVar5,(MethodInfo *)0x0);
          }
          if ((this_01 !=
               (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *
               )0x0) &&
             (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                   (uint)(this->fields).gamePassTierDisplayed,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                  ), pOVar6 != (Object *)0x0)) {
            value = *(int *)&pOVar6[2].klass;
            bVar5 = (this->fields).gamePassTierDisplayed;
            iVar7 = (this->fields).oldGamePointValue;
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            BVar8 = (ByteEnum__Enum)bVar5;
            while (BVar8 = BVar8 - 1, 0 < (int)BVar8) {
              pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                   BVar8 & 0xff,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                  );
              if (pOVar6 == (Object *)0x0) goto code_?;
              iVar7 = iVar7 - *(int *)&pOVar6[2].klass;
            }
            bVar5 = (this->fields).gamePassTierDisplayed;
            iVar9 = (this->fields).newGamePointValue;
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            BVar8 = (ByteEnum__Enum)bVar5;
            fVar10 = _UNK_?;
            while (BVar8 = BVar8 - 1, _UNK_? = fVar10, 0 < (int)BVar8) {
              pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                   BVar8 & 0xff,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                  );
              if (pOVar6 == (Object *)0x0) goto code_?;
              iVar9 = iVar9 - *(int *)&pOVar6[2].klass;
              fVar10 = _UNK_?;
            }
            if (fVar3 < 0.0) {
              fVar11 = 0.0;
            }
            else {
              fVar11 = fVar10;
              if (fVar3 <= fVar10) {
                fVar11 = fVar3;
              }
            }
            pPVar12 = (this->fields).progressBar;
            fVar11 = ((float)iVar9 / (float)value - (float)iVar7 / (float)value) * fVar11 +
                     (float)iVar7 / (float)value;
            if (pPVar12 != (ProgressBar *)0x0) {
              if (fVar11 < 0.0) {
                fVar13 = 0.0;
              }
              else {
                fVar13 = fVar10;
                if (fVar11 <= fVar10) {
                  fVar13 = fVar11;
                }
              }
              pSVar14 = (pPVar12->fields).progressBar;
              (pPVar12->fields).progress = fVar13;
              if (pSVar14 != (Scrollbar *)0x0) {
                UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                          (pSVar14,fVar13,(MethodInfo *)0x0);
                pPVar12 = (this->fields).disabledProgressBar;
                if (pPVar12 != (ProgressBar *)0x0) {
                  if (fVar11 < 0.0) {
                    fVar13 = 0.0;
                  }
                  else {
                    fVar13 = fVar10;
                    if (fVar11 <= fVar10) {
                      fVar13 = fVar11;
                    }
                  }
                  pSVar14 = (pPVar12->fields).progressBar;
                  (pPVar12->fields).progress = fVar13;
                  if (pSVar14 != (Scrollbar *)0x0) {
                    UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                              (pSVar14,fVar13,(MethodInfo *)0x0);
                    if (fVar10 <= fVar11) {
                      GamePassesShop_ActivateBar(this,(MethodInfo *)0x0);
                    }
                    else {
                      GamePassesShop_DeactivateBar(this,(MethodInfo *)0x0);
                    }
                    pPVar12 = (this->fields).progressBar;
                    if (pPVar12 != (ProgressBar *)0x0) {
                      fVar13 = (float)func_?((float)value * (pPVar12->fields).progress);
                      if (cRam_? == '\0') {
                        FUN_?();
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      info = mscorlib.dll::System::Globalization::NumberFormatInfo::
                             NumberFormatInfo_get_CurrentInfo((MethodInfo *)0x0);
                      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      str0 = mscorlib.dll::System::Number::Number_FormatSingle
                                       (fVar13,(String *)0x0,info,(MethodInfo *)0x0);
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__System__Number);
                        LOCK();
                        UNLOCK();
                        FUN_?(&
                                      MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->
                           klass->field_0x135 & 1) == 0) {
                        FUN_?();
                      }
                      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      aRStack_15[0]._pointer._value = (void *)0x0;
                      aRStack_15[0]._length = 0;
                      aRStack_15[0]._12_4_ = 0;
                      str2 = mscorlib.dll::System::Number::Number_FormatInt32
                                       (value,aRStack_15,(IFormatProvider *)0x0,(MethodInfo *)0x0);
                      mscorlib.dll::System::String::String_Concat_5
                                (str0,::StringLiteral____,str2,(MethodInfo *)0x0);
                      pTVar16 = (this->fields).progressText;
                      if (pTVar16 != (Text *)0x0) {
                        (*(pTVar16->klass->vtable).set_text.methodPtr)();
                        pPVar12 = (this->fields).disabledProgressBar;
                        if (fVar3 < 0.0) {
                          fVar13 = 0.0;
                        }
                        else {
                          fVar13 = fVar10;
                          if (fVar3 <= fVar10) {
                            fVar13 = fVar3;
                          }
                        }
                        if (pPVar12 != (ProgressBar *)0x0) {
                          fVar13 = ((float)iVar9 / (float)value - (float)iVar7 / (float)value) *
                                   fVar13 + (float)iVar7 / (float)value;
                          if (fVar13 < 0.0) {
                            fVar13 = 0.0;
                          }
                          else if (fVar10 < fVar13) {
                            fVar13 = fVar10;
                          }
                          (pPVar12->fields).progress = fVar13;
                          pSVar14 = (pPVar12->fields).progressBar;
                          if (pSVar14 != (Scrollbar *)0x0) {
                            UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                                      (pSVar14,fVar13,(MethodInfo *)0x0);
                            pGVar17 = (this->fields).progressBarDivider;
                            if (pGVar17 != (GameObject *)0x0) {
                              bVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_get_activeSelf(pGVar17,(MethodInfo *)0x0);
                              if ((bVar18 == 0) && (0.0 < fVar11)) {
                                pGVar17 = (this->fields).progressBarDivider;
                                if (pGVar17 == (GameObject *)0x0) goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar17,1,(MethodInfo *)0x0);
                              }
                              if (fVar10 < fVar3) {
                                (this->fields).shouldLerp = 0;
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
          }
        }
      }
    }
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
code_?:
  if ((this->fields).delayedInit != 0) {
    GamePassesShop_DelayedInitialize(this,(MethodInfo *)0x0);
    (this->fields).delayedInit = 0;
  }
  return;
}


/* Void UpdateFreeTryUI() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_UpdateFreeTryUI
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if ((pPVar1 == (PlayerPlanetData *)0x0) ||
     (pGVar2 = (this->fields).purchaseButton, pGVar2 == (GamePassesPurchaseButton *)0x0))
  goto code_?;
  pGVar3 = (pGVar2->fields).freeTryButton;
  bVar4 = (this->fields).gamePassTierDisplayed;
  bVar5 = (pPVar1->fields).previewGamePassTier;
  if (pGVar3 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar3,bVar5 != bVar4,(MethodInfo *)0x0);
  pGVar3 = (pGVar2->fields).freeTryActivated;
  if (pGVar3 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar3,bVar5 == bVar4,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
  this_00 = (this->fields).lockedTierIcon;
  bVar4 = (pPVar1->fields).gamePassTier;
  if (this_00 == (Image *)0x0) goto code_?;
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0);
  bVar6 = 0;
  if (bVar5 < (this->fields).gamePassTierDisplayed) {
    value = bVar4 < (this->fields).gamePassTierDisplayed;
  }
  else {
    value = false;
  }
  if (pGVar3 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar3,value,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar7 == (GameSessionData *)0x0) goto code_?;
  iVar8 = (pGVar7->fields).gameMode;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar9 == (MVGameControllerBase *)0x0) ||
      (pMVar10 = (pMVar9->fields).game, pMVar10 == (MVNetworkGame *)0x0)) ||
     (this_01 = (pMVar10->fields)._GameTierShopRepository_k__BackingField,
     this_01 == (GameTierShopRepository *)0x0)) goto code_?;
  pDVar11 = GameTierShopRepository::GameTierShopRepository_GetTierItemData
                      (this_01,(uint)(this->fields).gamePassTierDisplayed,(MethodInfo *)0x0);
  if (((bVar4 < 3) && ((this->fields).gamePassTierDisplayed == (uint8_t)(bVar4 + 1))) &&
     (pDVar11 != (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0 &&
      iVar8 != 0)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVClientSettings);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVClientSettings->static_fields->flags & 0x4000000U) != 0) {
      bVar12 = MVClientSettings::MVClientSettings_get_IsSubscriber((MethodInfo *)0x0);
      bVar6 = 1;
      if (bVar12 == 0) goto code_?;
    }
    bVar6 = (this->fields).isSubscribed;
  }
code_?:
  pGVar3 = (this->fields).freeTryUI;
  if (pGVar3 != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                    ,bVar6 != 0,0,in_R9,unaff_RSI);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar3 == (GameObject *)0x0) {
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pvVar14 = (pGVar3->fields)._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar3,(MethodInfo *)0x0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pcVar13 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pcRam_? = pcVar13;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar14,bVar6 != 0);
    return;
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateHighestTierRewardShown(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_UpdateHighestTierRewardShown
               (GamePassTier__Enum newHighestTierRewardShown,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesShop);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TierUnlockedPopupController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesShop->static_fields->haveInitializedHighestTierRewardShown == 0) {
    TypeInfo__TierUnlockedPopupController->static_fields->HighestTierRewardShown =
         (uint8_t)newHighestTierRewardShown;
    TypeInfo__GamePassesShop->static_fields->haveInitializedHighestTierRewardShown = 1;
  }
  return;
}


/* Void UpdateProgressBar(GamePassTier) */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_UpdateProgressBar
               (GamePassesShop *this,GamePassTier__Enum gamePassTierToDisplay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Progress_Locked);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unlock_Progress);
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
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      return;
    }
    pTVar2 = (this->fields).gameTierIconText;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_3[0]._pointer._value = (void *)0x0;
    aRStack_3[0]._length = 0;
    aRStack_3[0]._12_4_ = 0;
    pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                        (gamePassTierToDisplay & 0xff,aRStack_3,(IFormatProvider *)0x0,
                         (MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      (*(pTVar2->klass->vtable).set_text.methodPtr)
                (pTVar2,pSVar4,(pTVar2->klass->vtable).set_text.method);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator ==
            (PlayerTierStateCalculator *)0x0) ||
          ((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator->fields).
           gamePassRewardsActivated == 0)) ||
         (bVar5 = GamePassProgressionController::
                  GamePassProgressionController_get_IsProgressionEnabled((MethodInfo *)0x0),
         bVar5 == 0)) {
        pTVar2 = (this->fields).progressHeader;
        if (pTVar2 == (Text *)0x0) goto code_?;
        (*(pTVar2->klass->vtable).set_text.methodPtr)();
        pPVar6 = (this->fields).progressBar;
        if ((pPVar6 == (ProgressBar *)0x0) ||
           (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pPVar6,(MethodInfo *)0x0),
           pGVar7 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar7,0,(MethodInfo *)0x0);
        pPVar6 = (this->fields).disabledProgressBar;
        if ((pPVar6 == (ProgressBar *)0x0) ||
           (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pPVar6,(MethodInfo *)0x0),
           pGVar7 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar7,1,(MethodInfo *)0x0);
        pTVar2 = (this->fields).progressText;
        if ((pTVar2 == (Text *)0x0) ||
           (pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pTVar2,(MethodInfo *)0x0),
           pGVar7 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar7,0,(MethodInfo *)0x0);
      }
      else {
        pTVar2 = (this->fields).progressHeader;
        if (pTVar2 == (Text *)0x0) goto code_?;
        (*(pTVar2->klass->vtable).set_text.methodPtr)
                  (pTVar2,StringLiteral_Unlock_Progress,(pTVar2->klass->vtable).set_text.method);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar8 != (PlayerPlanetData *)0x0) {
        playerGamePoints = (pPVar8->fields).progressionGamePoints;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar8 != (PlayerPlanetData *)0x0) {
          this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
          bVar9 = (pPVar8->fields).gamePassTier;
          if (this_00 != (PlayerTierStateCalculator *)0x0) {
            if ((this_00->fields).gamePointVelocityIsZero == 0) {
              this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                        PlayerTierStateCalculator::
                        PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                                  (this_00,playerGamePoints,(uint)bVar9,(MethodInfo *)0x0);
            }
            else {
              this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                        PlayerTierStateCalculator::
                        PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                                  (this_00,(uint)bVar9,(MethodInfo *)0x0);
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__GamePassesManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0)
            {
              if (this_01 ==
                  (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                   *)0x0) goto code_?;
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              BVar10 = (gamePassTierToDisplay & 0xff) - 1;
              if (0 < (int)BVar10) {
                if (this_01 ==
                    (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                     *)0x0) goto code_?;
                do {
                  pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            ByteEnum,System::Object]::
                            Dictionary_2_System_ByteEnum_System_Object__get_Item
                                      ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                       BVar10 & 0xff,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                      );
                  if (pOVar11 == (Object *)0x0) goto code_?;
                  playerGamePoints = playerGamePoints - *(int *)&pOVar11[2].klass;
                  BVar10 = BVar10 - 1;
                } while (0 < (int)BVar10);
              }
              if ((float)playerGamePoints < 0.0) {
                playerGamePoints = 0;
              }
              if ((this_01 ==
                   (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                    *)0x0) ||
                 (pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            ByteEnum,System::Object]::
                            Dictionary_2_System_ByteEnum_System_Object__get_Item
                                      ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                       gamePassTierToDisplay & 0xff,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                      ), fVar12 = _UNK_?, pOVar11 == (Object *)0x0))
              goto code_?;
              aIStack_13[0].m_value = *(int32_t *)&pOVar11[2].klass;
              aIStackX_20[0].m_value = playerGamePoints;
              if (aIStack_13[0].m_value < playerGamePoints) {
                aIStackX_20[0].m_value = aIStack_13[0].m_value;
              }
              pPVar6 = (this->fields).progressBar;
              value_00 = (float)aIStackX_20[0].m_value / (float)aIStack_13[0].m_value;
              if (pPVar6 == (ProgressBar *)0x0) goto code_?;
              if (value_00 < 0.0) {
                value = 0.0;
              }
              else {
                value = _UNK_?;
                if (value_00 <= _UNK_?) {
                  value = value_00;
                }
              }
              pSVar14 = (pPVar6->fields).progressBar;
              (pPVar6->fields).progress = value;
              if (pSVar14 == (Scrollbar *)0x0) goto code_?;
              UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                        (pSVar14,value,(MethodInfo *)0x0);
              pPVar6 = (this->fields).disabledProgressBar;
              if (pPVar6 == (ProgressBar *)0x0) goto code_?;
              if (value_00 < 0.0) {
                value_00 = 0.0;
              }
              else if (fVar12 < value_00) {
                value_00 = fVar12;
              }
              pSVar14 = (pPVar6->fields).progressBar;
              (pPVar6->fields).progress = value_00;
              if (pSVar14 == (Scrollbar *)0x0) goto code_?;
              UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                        (pSVar14,value_00,(MethodInfo *)0x0);
              pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_20,(MethodInfo *)0x0);
              str2 = mscorlib.dll::System::Int32::Int32_ToString(aIStack_13,(MethodInfo *)0x0);
              mscorlib.dll::System::String::String_Concat_5
                        (pSVar4,::StringLiteral____,str2,(MethodInfo *)0x0);
              pTVar2 = (this->fields).progressText;
              if (pTVar2 == (Text *)0x0) goto code_?;
              (*(pTVar2->klass->vtable).set_text.methodPtr)();
              pGVar7 = (this->fields).progressBarDivider;
              if (pGVar7 == (GameObject *)0x0) goto code_?;
              bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                                (pGVar7,(MethodInfo *)0x0);
              if (bVar5 != 0) {
                pPVar6 = (this->fields).progressBar;
                if (pPVar6 == (ProgressBar *)0x0) goto code_?;
                if ((pPVar6->fields).progress <= 0.0) {
                  pGVar7 = (this->fields).progressBarDivider;
                  if (pGVar7 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar7,0,(MethodInfo *)0x0);
                }
              }
            }
            pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                 gamePassTierToDisplay & 0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                );
            if (pOVar11 != (Object *)0x0) {
              if (*(int *)&pOVar11[1].klass != 0) {
                return;
              }
              GamePassesShop_ActivateBar(this,(MethodInfo *)0x0);
              return;
            }
          }
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


/* Void UpdateTierCostTets() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_UpdateTierCostTets
               (GamePassesShop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__TimeSpan);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__min_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).unlockPriceText;
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
  if ((pPVar2 != (PlayerTierStateCalculator *)0x0) &&
     (pDVar3 = (pPVar2->fields).progressionThresholds,
     pDVar3 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                *)0x0)) {
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,
                        (uint)(this->fields).gamePassTierDisplayed,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                       );
    if (pOVar4 != (Object *)0x0) {
      pSVar5 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)(pOVar4 + 1),(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        (*(pTVar1->klass->vtable).set_text.methodPtr)
                  (pTVar1,pSVar5,(pTVar1->klass->vtable).set_text.method);
        pPVar2 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
        if ((pPVar2 != (PlayerTierStateCalculator *)0x0) &&
           (pDVar3 = (pPVar2->fields).progressionThresholds,
           pDVar3 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                      *)0x0)) {
          pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,
                              (uint)(this->fields).gamePassTierDisplayed,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar4 != (Object *)0x0) {
            if (*(int *)&(TypeInfo__System__TimeSpan->_1).field_0x1c == 0) {
              FUN_?();
            }
            lVar6 = (longlong)pOVar4[1].monitor / 600000000;
            lVar7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar6),8) + lVar6;
            pPVar2 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
            if ((pPVar2 != (PlayerTierStateCalculator *)0x0) &&
               (pDVar3 = (pPVar2->fields).progressionThresholds,
               pDVar3 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierThresholds_
                          *)0x0)) {
              pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       ByteEnum,System::Object]::
                       Dictionary_2_System_ByteEnum_System_Object__get_Item
                                 ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,
                                  (uint)(this->fields).gamePassTierDisplayed,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierThresholds>__get_Item_MV__Common__GamePassTier_
                                 );
              if (pOVar4 != (Object *)0x0) {
                lVar8 = (longlong)pOVar4[1].monitor / 36000000000;
                iVar9 = FUN_?((float)((int)lVar8 + (int)(lVar8 / 0x18) * -0x18) *
                                      _UNK_?);
                pTVar1 = (this->fields).unlockTimeText;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Number);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass
                     ->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                  FUN_?();
                }
                aRStack_10[0]._pointer._value = (void *)0x0;
                aRStack_10[0]._length = 0;
                aRStack_10[0]._12_4_ = 0;
                pSVar5 = mscorlib.dll::System::Number::Number_FormatInt32
                                   ((int)lVar6 +
                                    ((int)(lVar7 >> 5) - (int)(lVar7 >> 0x3f)) * -0x3c + iVar9,
                                    aRStack_10,(IFormatProvider *)0x0,(MethodInfo *)0x0);
                pSVar5 = mscorlib.dll::System::String::String_Concat_4
                                   (pSVar5,StringLiteral__min_,(MethodInfo *)0x0);
                if (pTVar1 != (Text *)0x0) {
                  UNRECOVERED_JUMPTABLE = (pTVar1->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*UNRECOVERED_JUMPTABLE)
                            (pTVar1,pSVar5,(pTVar1->klass->vtable).set_text.method,
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
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void UpdateUI() */

void Assembly-CSharp.dll::GamePassesShop::GamePassesShop_UpdateUI
               (GamePassesShop *this,MethodInfo *method)

{
  GamePassesShop_UpdateTierCostTets(this,(MethodInfo *)0x0);
  GamePassesShop_UpdateFreeTryUI(this,(MethodInfo *)0x0);
  if ((this->fields).isWaitingForFreeTryTier == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
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
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesShop__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GamePassesShop____c___OnPlayerPlanetDataUpdated_b__86_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesShop____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isWaitingForFreeTryTier != 0) {
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__GamePassesShop____c);
    }
    this_00 = TypeInfo__GamePassesShop____c->static_fields->__9__86_0;
    if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__GamePassesShop____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__GamePassesShop____c);
      }
      object = TypeInfo__GamePassesShop____c->static_fields->__9;
      this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                 MethodInfo__GamePassesShop____c___OnPlayerPlanetDataUpdated_b__86_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GamePassesShop____c->static_fields->__9__86_0 = this_00;
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)&TypeInfo__GamePassesShop____c->static_fields->__9__86_0 >> 0xc);
        lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
        do {
          uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
          puVar4 = (ulonglong *)(lVar2 + 0xADDR);
          LOCK();
          bVar5 = uVar3 == *puVar4;
          if (bVar5) {
            *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    (this->fields).isWaitingForFreeTryTier = 0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar6 == (PlayerPlanetData *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((this->fields).gamePassTierDisplayed <= (pPVar6->fields).previewGamePassTier) &&
     ((this->fields).haveShownFreeTryUnlock == 0)) {
    pAVar8 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__GamePassesShop__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar8 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar8,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pAVar8 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar9 = (Action *)0x0;
      if (pAVar8->klass == TypeInfo__System__Action) {
        pAVar9 = pAVar8;
      }
      if (pAVar9 == (Action *)0x0) {
        FUN_?(pAVar8,TypeInfo__System__Action);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar9;
      pAVar9 = (Action *)0x0;
      if (pAVar8->klass == TypeInfo__System__Action) {
        pAVar9 = pAVar8;
      }
      if (pAVar9 == (Action *)0x0) {
        FUN_?(pAVar8,TypeInfo__System__Action);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)
                     &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    GamePassesShop_ShowTierUnlockedPopup(this,0,1,(MethodInfo *)0x0);
    (this->fields).haveShownFreeTryUnlock = 1;
  }
  return;
}

