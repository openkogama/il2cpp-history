
/* Void ActivateBar(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_ActivateBar
               (GameTierProgressBar *this,int32_t barIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).tierProgressDataList;
  if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)barIndex) goto code_?;
    pGVar2 = (pLVar1->fields)._items;
    if (pGVar2 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
      if ((uint)pGVar2->max_length <= (uint)barIndex) goto code_?;
      pPVar3 = pGVar2->vector[barIndex].progressBar;
      if (pPVar3 != (ProgressBar *)0x0) {
        (pPVar3->fields).progress = 1.0;
        pSVar4 = (pPVar3->fields).progressBar;
        if (pSVar4 != (Scrollbar *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                    (pSVar4,_UNK_?,(MethodInfo *)0x0);
          pLVar1 = (this->fields).tierProgressDataList;
          if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            if ((uint)(pLVar1->fields)._size <= (uint)barIndex) goto code_?;
            pGVar2 = (pLVar1->fields)._items;
            if (pGVar2 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
              if ((uint)pGVar2->max_length <= (uint)barIndex) goto code_?;
              pPVar3 = pGVar2->vector[barIndex].disabledProgressBar;
              if (pPVar3 != (ProgressBar *)0x0) {
                (pPVar3->fields).progress = 1.0;
                pSVar4 = (pPVar3->fields).progressBar;
                if (pSVar4 != (Scrollbar *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                            (pSVar4,_UNK_?,(MethodInfo *)0x0);
                  pLVar1 = (this->fields).tierProgressDataList;
                  if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                    if ((uint)(pLVar1->fields)._size <= (uint)barIndex) {
code_?:
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    pGVar2 = (pLVar1->fields)._items;
                    if (pGVar2 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                      if ((uint)pGVar2->max_length <= (uint)barIndex) {
code_?:
                        FUN_?();
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      pGVar6 = pGVar2->vector[barIndex].tierIconTempUnlock;
                      if (pGVar6 != (GameObject *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if ((pGVar6->fields)._.m_CachedPtr == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pGVar6,(MethodInfo *)0x0);
                          pcVar5 = (code *)swi(3);
                          (*pcVar5)();
                          return;
                        }
                        pcVar5 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0))
                        {
                          uVar7 = func_?(&UNK_?);
                          FUN_?(uVar7,0);
                          pcVar5 = (code *)swi(3);
                          (*pcVar5)();
                          return;
                        }
                        pcRam_? = pcVar5;
                        cVar8 = (*pcRam_?)();
                        if (cVar8 == '\0') {
                          return;
                        }
                        pLVar1 = (this->fields).tierProgressDataList;
                        if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                          if ((uint)(pLVar1->fields)._size <= (uint)barIndex)
                          goto code_?;
                          pGVar2 = (pLVar1->fields)._items;
                          if (pGVar2 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                            if ((uint)pGVar2->max_length <= (uint)barIndex)
                            goto code_?;
                            pGVar6 = pGVar2->vector[barIndex].tierIconTempUnlock;
                            if (pGVar6 != (GameObject *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar6,0,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Int32 CalculateGamePointsFromTierProgress(Single, GamePassTier) */

int32_t Assembly-CSharp.dll::GameTierProgressBar::
        GameTierProgressBar_CalculateGamePointsFromTierProgress
                  (GameTierProgressBar *this,float totalProgressValue,
                  GamePassTier__Enum tierToCalculateTo,MethodInfo *method)

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
    iVar2 = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      bVar3 = (pPVar1->fields).gamePassTier;
      if (this_00 != (PlayerTierStateCalculator *)0x0) {
        if ((this_00->fields).gamePointVelocityIsZero == 0) {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                              (this_00,iVar2,(uint)bVar3,(MethodInfo *)0x0);
        }
        else {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                              (this_00,(uint)bVar3,(MethodInfo *)0x0);
        }
        fVar4 = _UNK_?;
        fVar5 = 0.0;
        if ((tierToCalculateTo & 0xff) != GamePassTier__Enum_Tier0) {
          BVar6 = 1;
          if (this_01 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) goto code_?;
          do {
            pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,BVar6 & 0xff,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar7 == (Object *)0x0) goto code_?;
            iVar8 = *(int *)&pOVar7[2].klass;
            pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,BVar6 & 0xff,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar7 == (Object *)0x0) goto code_?;
            fVar9 = (float)*(int *)&pOVar7[2].klass * totalProgressValue;
            if ((float)iVar8 < fVar9) {
              fVar9 = (float)iVar8;
            }
            if (fVar9 < 0.0) {
              fVar9 = 0.0;
            }
            BVar6 = BVar6 + 1;
            totalProgressValue = totalProgressValue + fVar4;
            fVar5 = fVar5 + fVar9;
          } while ((int)BVar6 <= (int)(tierToCalculateTo & 0xff));
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Math);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
          FUN_?();
        }
        dVar10 = (double)func_?((double)fVar5);
        return (int)dVar10;
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  iVar2 = (*pcVar11)();
  return iVar2;
}


/* Int32 CalculateGamePointsFromTotalProgress(Single) */

int32_t Assembly-CSharp.dll::GameTierProgressBar::
        GameTierProgressBar_CalculateGamePointsFromTotalProgress
                  (GameTierProgressBar *this,float totalProgressValue,MethodInfo *method)

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
    iVar2 = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      bVar3 = (pPVar1->fields).gamePassTier;
      if (this_00 != (PlayerTierStateCalculator *)0x0) {
        if ((this_00->fields).gamePointVelocityIsZero == 0) {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                              (this_00,iVar2,(uint)bVar3,(MethodInfo *)0x0);
        }
        else {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                              (this_00,(uint)bVar3,(MethodInfo *)0x0);
        }
        fVar4 = _UNK_?;
        fVar5 = 0.0;
        BVar6 = 1;
        if (this_01 !=
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) {
          while (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                     BVar6 & 0xff,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                    ), pOVar7 != (Object *)0x0) {
            iVar8 = *(int *)&pOVar7[2].klass;
            pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,BVar6 & 0xff,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar7 == (Object *)0x0) break;
            fVar9 = (float)*(int *)&pOVar7[2].klass * totalProgressValue;
            if ((float)iVar8 < fVar9) {
              fVar9 = (float)iVar8;
            }
            if (fVar9 < 0.0) {
              fVar9 = 0.0;
            }
            BVar6 = BVar6 + 1;
            totalProgressValue = totalProgressValue + fVar4;
            fVar5 = fVar5 + fVar9;
            if (3 < (int)BVar6) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Math);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
                FUN_?();
              }
              dVar10 = (double)func_?((double)fVar5);
              return (int)dVar10;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  iVar2 = (*pcVar11)();
  return iVar2;
}


/* Single CalculateTotalProgressValue(Int32) */

float Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_CalculateTotalProgressValue
                (GameTierProgressBar *this,int32_t gamePoints,MethodInfo *method)

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
        fVar3 = _UNK_?;
        fVar4 = 0.0;
        BVar5 = 1;
        if (this_01 !=
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) {
          while (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                     BVar5 & 0xff,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                    ), pOVar6 != (Object *)0x0) {
            iVar7 = *(int *)&pOVar6[2].klass;
            if (iVar7 < 1) {
              fVar4 = 0.0;
            }
            else {
              fVar8 = (float)gamePoints / (float)iVar7;
              fVar9 = fVar3;
              if ((fVar8 <= fVar3) && (fVar9 = fVar8, fVar8 < 0.0)) {
                fVar9 = 0.0;
              }
              fVar4 = fVar4 + fVar9;
              gamePoints = gamePoints - iVar7;
            }
            BVar5 = BVar5 + 1;
            if (3 < (int)BVar5) {
              return fVar4;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  fVar3 = (float)(*pcVar10)();
  return fVar3;
}


/* Boolean CanShowFreeTryBubble() */

bool Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_CanShowFreeTryBubble
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData == (PlayerPlanetData *)0x0) {
    return 0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    uVar2 = (pPVar1->fields).gamePassTier;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar3 != (GameSessionData *)0x0) {
      iVar4 = (pGVar3->fields).gameMode;
      if (uVar2 != 3) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
        if ((iVar4 != 0 && (pPVar1->fields).previewGamePassTier == 0) &&
           (bVar5 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0),
           bVar5 != 0)) {
          return 1;
        }
      }
      return 0;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Void CreateAvatarHeadImages() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_CreateAvatarHeadImages
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
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
    FUN_?(&StringLiteral__Color);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Avatar_Head_preview);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Head);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  GameTierProgressBar_DestroyHeadPreview(this,(MethodInfo *)0x0);
  pAVar1 = (this->fields).previewer;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  player = (MVPlayer *)
           AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
  ;
  pAVar1 = (AvatarPreviewer *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pAVar1,
                       AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                      );
  bVar2 = iRam_? != 0;
  (this->fields).headPreviewer = pAVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).headPreviewer >> 0xc);
    player = (MVPlayer *)(ulonglong)((uVar3 & 0x1fffff) >> 6);
    in_R8 = (MethodInfo *)(ulonglong)(uVar3 & 0x3f);
    do {
      uVar4 = *(ulonglong *)((longlong)player * 8 + 0xADDR);
      puVar5 = (ulonglong *)((longlong)player * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar4 == *puVar5;
      if (bVar2) {
        *puVar5 = uVar4 | 1L << (longlong)in_R8;
      }
      UNLOCK();
    } while (!bVar2);
  }
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,in_R8);
  if (extraout_RAX != 0) {
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((this_02 != (MVWorldObjectClientManager *)0x0) &&
        (this_03 = (MVBody *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                             (this_02,*(int32_t *)(extraout_RAX + 0xa8),
                              MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                             ), this_03 != (MVBody *)0x0)) &&
       (wo = MVBody::MVBody_GetBodyPart(this_03,StringLiteral_Head,(MethodInfo *)0x0),
       wo != (MVCubeModelInstance *)0x0)) {
      pGVar6 = (GameObject *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)(wo->fields)._._.gameObject,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                          );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_layer_parameter_constant_should_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uVar3 = 0x2000;
      uVar7 = 0;
      uVar4 = uVar7;
      do {
        uVar8 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar8;
        uVar3 = (int)uVar3 >> 1;
      } while ((uVar3 & 1) == 0);
      LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar6,uVar8,(MethodInfo *)0x0);
      pMVar9 = 
      UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
      ;
      if (pGVar6 != (GameObject *)0x0) {
        if ((
            UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                       );
        }
        p_Var12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentsInChildren_4
                            (pGVar6,0,((pMVar9->field7_0x38).rgctx_data)->method);
        if (p_Var12 != (_Il2CppFullySharedGenericType__Array *)0x0) {
          pp_Var24 = p_Var12->vector;
          uVar4 = uVar7;
          while (uVar3 = (uint)uVar4, (int)uVar3 < (int)p_Var12->max_length) {
            lVar10 = 0x20;
            uVar4 = uVar7;
            while( true ) {
              if ((uint)p_Var12->max_length <= uVar3) goto code_?;
              if (((Renderer *)*pp_Var24 == (Renderer *)0x0) ||
                 (pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                            Renderer_get_materials((Renderer *)*pp_Var24,(MethodInfo *)0x0),
                 pMVar11 == (Material__Array *)0x0)) goto code_?;
              uVar8 = (uint)uVar4;
              if ((int)pMVar11->max_length <= (int)uVar8) break;
              if ((uint)p_Var12->max_length <= uVar3) goto code_?;
              if (((Renderer *)*pp_Var24 == (Renderer *)0x0) ||
                 (pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                            Renderer_get_materials((Renderer *)*pp_Var24,(MethodInfo *)0x0),
                 pMVar11 == (Material__Array *)0x0)) goto code_?;
              if ((uint)pMVar11->max_length <= uVar8) goto code_?;
              pMVar12 = *(Material **)((longlong)pMVar11->vector + lVar10 + -0x20);
              if (pMVar12 == (Material *)0x0) goto code_?;
              nameID = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                 (StringLiteral__Color,(MethodInfo *)0x0);
              bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_HasProperty
                                (pMVar12,nameID,(MethodInfo *)0x0);
              if (bVar13 != 0) {
                if ((uint)p_Var12->max_length <= uVar3) goto code_?;
                if (((Renderer *)*pp_Var24 == (Renderer *)0x0) ||
                   (pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                              Renderer_get_materials((Renderer *)*pp_Var24,(MethodInfo *)0x0),
                   pMVar11 == (Material__Array *)0x0)) goto code_?;
                if ((uint)pMVar11->max_length <= uVar8) goto code_?;
                pMVar12 = *(Material **)((longlong)pMVar11->vector + lVar10 + -0x20);
                if (pMVar12 == (Material *)0x0) goto code_?;
                pCVar14 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                                    (&CStack_15,pMVar12,(MethodInfo *)0x0);
                lVar16._0_4_ = pCVar14->r;
                lVar16._4_4_ = pCVar14->g;
                fVar17 = pCVar14->b;
                if ((uint)p_Var12->max_length <= uVar3) goto code_?;
                if (((Renderer *)*pp_Var24 == (Renderer *)0x0) ||
                   (pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                              Renderer_get_materials((Renderer *)*pp_Var24,(MethodInfo *)0x0),
                   pMVar11 == (Material__Array *)0x0)) goto code_?;
                if ((uint)pMVar11->max_length <= uVar8) goto code_?;
                pMVar12 = *(Material **)((longlong)pMVar11->vector + lVar10 + -0x20);
                uStack_18 = 0x3f800000;
                VStack_19._0_8_ = lVar16;
                VStack_19.z = fVar17;
                if (pMVar12 == (Material *)0x0) goto code_?;
                aCStack_20[0]._8_8_ = CONCAT44(0x3f800000,fVar17);
                aCStack_20[0]._0_8_ = lVar16;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                          (pMVar12,aCStack_20,(MethodInfo *)0x0);
              }
              uVar4 = (ulonglong)(uVar8 + 1);
              lVar10 = lVar10 + 8;
            }
            pp_Var24 = pp_Var24 + 1;
            uVar4 = (ulonglong)(uVar3 + 1);
          }
          self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
                    (self,(String *)0x0,(MethodInfo *)0x0);
          if (self != (GameObject *)0x0) {
            pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (self,(MethodInfo *)0x0);
            bVar2 = iRam_? != 0;
            (this->fields).previewHeadRoot = pTVar21;
            if (bVar2) {
              uVar3 = (uint)((ulonglong)&(this->fields).previewHeadRoot >> 0xc);
              uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
              do {
                uVar22 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                puVar5 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                LOCK();
                bVar2 = uVar22 == *puVar5;
                if (bVar2) {
                  *puVar5 = uVar22 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar2);
            }
            pAVar1 = (this->fields).headPreviewer;
            if (pAVar1 != (AvatarPreviewer *)0x0) {
              CStack_15._0_8_ = ZEXT48(_UNK_?);
              aCStack_20[0]._0_8_ = CONCAT44(_UNK_?,_UNK_?);
              CStack_15.b = 0.0;
              aCStack_20[0].b = (float)_UNK_?;
              VStack_19.z = _UNK_?;
              VStack_19._0_8_ = (ulonglong)_UNK_? << 0x20;
              AvatarPreviewer::AvatarPreviewer_Initialize
                        (pAVar1,0x80,0x80,CameraClearFlags__Enum_Color,LayerFlags__Enum_Preview,
                         &VStack_19,(this->fields).previewHeadRoot,(Vector3 *)aCStack_20,
                         StringLiteral_Avatar_Head_preview,(MVWorldObjectClient *)wo,pGVar6,
                         (Vector3 *)&CStack_15,(MethodInfo *)0x0);
              pAVar1 = (this->fields).headPreviewer;
              if (((pAVar1 != (AvatarPreviewer *)0x0) &&
                  (this_00 = (pAVar1->fields).previewCam, this_00 != (Camera *)0x0)) &&
                 (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this_00,(MethodInfo *)0x0),
                 pTVar21 != (Transform *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                CStack_15.r = 0.0;
                CStack_15.g = 0.0;
                CStack_15.b = 0.0;
                pvVar23 = (pTVar21->fields)._._.m_CachedPtr;
                if (pvVar23 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar21,(MethodInfo *)0x0);
                  pcVar24 = (code *)swi(3);
                  (*pcVar24)();
                  return;
                }
                pcVar24 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0)) {
                  uVar25 = func_?(&UNK_?);
                  FUN_?(uVar25,0);
                  pcVar24 = (code *)swi(3);
                  (*pcVar24)();
                  return;
                }
                pcRam_? = pcVar24;
                (*pcRam_?)(pvVar23);
                VStack_19.z = CStack_15.b + 0.0;
                VStack_19._0_8_ = CONCAT44(CStack_15.g + _UNK_?,CStack_15.r + 0.0);
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar23 = (pTVar21->fields)._._.m_CachedPtr;
                if (pvVar23 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar21,(MethodInfo *)0x0);
                  pcVar24 = (code *)swi(3);
                  (*pcVar24)();
                  return;
                }
                pcVar24 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar24 = (code *)FUN_?(&UNK_?), pcVar24 == (code *)0x0)) {
                  uVar25 = func_?(&UNK_?);
                  FUN_?(uVar25,0);
                  pcVar24 = (code *)swi(3);
                  (*pcVar24)();
                  return;
                }
                pcRam_? = pcVar24;
                (*pcRam_?)(pvVar23);
                pAVar1 = (this->fields).headPreviewer;
                if (((pAVar1 == (AvatarPreviewer *)0x0) ||
                    (pGVar6 = (pAVar1->fields)._PreviewGameObject_k__BackingField,
                    pGVar6 == (GameObject *)0x0)) ||
                   (pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar6,(MethodInfo *)0x0),
                   pTVar21 == (Transform *)0x0)) {
                  FUN_?();
                  pcVar24 = (code *)swi(3);
                  (*pcVar24)();
                  return;
                }
                aCStack_20[0]._8_8_ = aCStack_20[0]._8_8_ & 0xffffffff00000000;
                aCStack_20[0]._0_8_ = (ulonglong)_UNK_? << 0x20;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate
                          (pTVar21,(Vector3 *)aCStack_20,Space__Enum_Self,(MethodInfo *)0x0);
                pLVar26 = (this->fields).tierProgressDataList;
                uVar4 = uVar7;
                if (pLVar26 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                  while( true ) {
                    uVar3 = (uint)uVar4;
                    if ((pLVar26->fields)._size <= (int)uVar3) {
                      return;
                    }
                    pLVar26 = (this->fields).tierProgressDataList;
                    if (pLVar26 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
                    if ((uint)(pLVar26->fields)._size <= uVar3) {
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                      pcVar24 = (code *)swi(3);
                      (*pcVar24)();
                      return;
                    }
                    pGVar27 = (pLVar26->fields)._items;
                    if (pGVar27 == (GameTierProgressBar_TierProgressData__Array *)0x0) break;
                    if ((uint)pGVar27->max_length <= uVar3) {
code_?:
                      FUN_?();
                      pcVar24 = (code *)swi(3);
                      (*pcVar24)();
                      return;
                    }
                    pAVar1 = (this->fields).headPreviewer;
                    this_01 = *(RawImage **)((longlong)&pGVar27->vector[0].avatarHeadImage + uVar7);
                    if ((pAVar1 == (AvatarPreviewer *)0x0) || (this_01 == (RawImage *)0x0)) break;
                    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                              (this_01,(Texture *)(pAVar1->fields).previewTexture,(MethodInfo *)0x0
                              );
                    pLVar26 = (this->fields).tierProgressDataList;
                    uVar4 = (ulonglong)(uVar3 + 1);
                    uVar7 = uVar7 + 0x90;
                    if (pLVar26 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
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


/* Void DeactivateBar(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_DeactivateBar
               (GameTierProgressBar *this,int32_t barIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).tierProgressDataList;
  if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)barIndex) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pGVar3 = (pLVar1->fields)._items;
    if (pGVar3 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
      if ((uint)pGVar3->max_length <= (uint)barIndex) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pPVar4 = pGVar3->vector[barIndex].progressBar;
      if (pPVar4 != (ProgressBar *)0x0) {
        (pPVar4->fields).progress = 0.0;
        pSVar5 = (pPVar4->fields).progressBar;
        if (pSVar5 != (Scrollbar *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                    (pSVar5,0.0,(MethodInfo *)0x0);
          pLVar1 = (this->fields).tierProgressDataList;
          if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            if ((uint)(pLVar1->fields)._size <= (uint)barIndex) goto code_?;
            pGVar3 = (pLVar1->fields)._items;
            if (pGVar3 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
              if ((uint)pGVar3->max_length <= (uint)barIndex) goto code_?;
              pPVar4 = pGVar3->vector[barIndex].disabledProgressBar;
              if (pPVar4 != (ProgressBar *)0x0) {
                (pPVar4->fields).progress = 0.0;
                pSVar5 = (pPVar4->fields).progressBar;
                if (pSVar5 != (Scrollbar *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<float>_System__Single___float_
                                  ,pGVar3,0);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  fVar6 = 0.0;
                  if (_UNK_? < 0.0) {
                    fVar6 = _UNK_?;
                  }
                  cVar7 = FUN_?(&(pSVar5->fields).m_Size,fVar6);
                  if (cVar7 != '\0') {
                    UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_UpdateVisuals
                              (pSVar5,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DeactivateFreeTryBubble() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_DeactivateFreeTryBubble
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
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
    pLVar2 = (this->fields).tierProgressDataList;
    bVar3 = (pPVar1->fields).gamePassTier;
    if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
      if ((uint)(pLVar2->fields)._size <= (uint)bVar3) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar5 = (pLVar2->fields)._items;
      if (pGVar5 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
        if ((uint)pGVar5->max_length <= (uint)bVar3) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = pGVar5->vector[bVar3].freeTryTextBubble;
        if ((this_00 != (GamePassesTextBubble *)0x0) &&
           (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                          ,0,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (obj == (GameObject *)0x0) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pvVar6 = (obj->fields)._.m_CachedPtr;
          if (pvVar6 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar6,0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DestroyHeadPreview() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_DestroyHeadPreview
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewHeadRoot;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar1 = (this->fields).previewHeadRoot;
      if (pTVar1 == (Transform *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pTVar1,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
      iVar3 = iRam_?;
      (this->fields).headPreviewer = (AvatarPreviewer *)0x0;
      if (iVar3 != 0) {
        uVar4 = (uint)((ulonglong)&(this->fields).headPreviewer >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
          iVar3 = iRam_?;
        } while (!bVar8);
      }
      (this->fields).previewHeadRoot = (Transform *)0x0;
      if (iVar3 != 0) {
        uVar4 = (uint)((ulonglong)&(this->fields).previewHeadRoot >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
  }
  return;
}


/* GamePassTier GetCurrentTier() */

GamePassTier__Enum
Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_GetCurrentTier
          (GameTierProgressBar *this,MethodInfo *method)

{
  uVar1 = FUN_?((this->fields).previousProgressValue);
  return CONCAT31((int3)((uint)uVar1 >> 8),(char)uVar1 + '\x01');
}


/* Single GetProgressBarPercentage(GamePassTier) */

float Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_GetProgressBarPercentage
                (GameTierProgressBar *this,GamePassTier__Enum tierToShowProgressFor,
                MethodInfo *method)

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
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        BVar3 = (tierToShowProgressFor & 0xff) - 1;
        if ((int)BVar3 < 1) {
          if (this_01 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) goto code_?;
        }
        else {
          if (this_01 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) goto code_?;
          do {
            pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,BVar3 & 0xff,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar4 == (Object *)0x0) goto code_?;
            playerGamePoints = playerGamePoints - *(int *)&pOVar4[2].klass;
            BVar3 = BVar3 - 1;
          } while (0 < (int)BVar3);
        }
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                            tierToShowProgressFor & 0xff,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar4 != (Object *)0x0) {
          fVar5 = (float)playerGamePoints / (float)*(int *)&pOVar4[2].klass;
          if (_UNK_? < fVar5) {
            fVar5 = _UNK_?;
          }
          return fVar5;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  fVar5 = (float)(*pcVar6)();
  return fVar5;
}


/* Void HandleDisabledProgressBarVisibility() */

void Assembly-CSharp.dll::GameTierProgressBar::
     GameTierProgressBar_HandleDisabledProgressBarVisibility
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
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
  barIndex = 0;
  do {
    bVar1 = GameTierProgressBar_IsTierUnlocked
                      (this,barIndex + GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      GameTierProgressBar_ActivateBar(this,barIndex,(MethodInfo *)0x0);
    }
    pLVar2 = (this->fields).tierProgressDataList;
    if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
    if ((uint)(pLVar2->fields)._size <= barIndex) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pLVar2->fields)._items == (GameTierProgressBar_TierProgressData__Array *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_?();
    if (pCStack_4 == (Component *)0x0) goto code_?;
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       (pCStack_4,(MethodInfo *)0x0);
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,0,(MethodInfo *)0x0);
    pLVar2 = (this->fields).tierProgressDataList;
    if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
    if ((uint)(pLVar2->fields)._size <= barIndex) goto code_?;
    if ((pLVar2->fields)._items == (GameTierProgressBar_TierProgressData__Array *)0x0)
    goto code_?;
    FUN_?();
    if (pCStack_6 == (Component *)0x0) goto code_?;
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       (pCStack_6,(MethodInfo *)0x0);
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar5,1,(MethodInfo *)0x0);
    iVar7 = barIndex + 2;
    barIndex = barIndex + 1;
    if (3 < iVar7) {
      return;
    }
  } while( true );
}


/* Void HandleFreeTryVisibility() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_HandleFreeTryVisibility
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = 0x90;
  uVar2 = 0;
  do {
    pLVar3 = (this->fields).tierProgressDataList;
    if (pLVar3 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
    if ((uint)(pLVar3->fields)._size <= uVar2) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pGVar5 = (pLVar3->fields)._items;
    if (pGVar5 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
    if ((uint)pGVar5->max_length <= uVar2) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar6 = *(longlong *)((longlong)pGVar5->vector + lVar1 + -0x18);
    if (lVar6 == 0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined1 *)(lVar6 + 0x30) = 1;
    pLVar3 = (this->fields).tierProgressDataList;
    if (pLVar3 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
    if ((uint)(pLVar3->fields)._size <= uVar2) goto code_?;
    pGVar5 = (pLVar3->fields)._items;
    if (pGVar5 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
    if ((uint)pGVar5->max_length <= uVar2) goto code_?;
    pOVar7 = *(Object **)((longlong)pGVar5->vector + lVar1 + -0x18);
    if (pOVar7 == (Object *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar8 = pOVar7[1].klass;
    if (pOVar8 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(pOVar7,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    gcHandlePtr = (void *)(*pcRam_?)(pOVar8);
    pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
             Unmarshal_UnmarshalUnityObject
                       (gcHandlePtr,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                       );
    if (pOVar7 == (Object *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pOVar7[1].klass == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(pOVar7,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)();
    uVar2 = uVar2 + 1;
    lVar1 = lVar1 + 0x90;
    if (0x1b0 < lVar1) {
      return;
    }
  } while( true );
}


/* Void HandleShowTips() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_HandleShowTips
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameTierProgressBar);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Progression_locked_while_the_gam);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Progression_is_disabled_in_stand);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Progression_is_disabled_in_build);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sign_up_to_be_able_to_save_progr);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__GameTierProgressBar->static_fields->haveShownTips = 1;
  bVar1 = GameTierProgressBar_ShowFreeTryTextBubble(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar2 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar2->fields).gameMode == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if ((pPVar3 == (PlayerPlanetData *)0x0) ||
         (pLVar4 = (this->fields).tierProgressDataList,
         pLVar4 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) goto code_?;
      uVar5 = (pPVar3->fields).gamePassTier - 1;
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      else if ((pLVar4->fields)._size < (int)uVar5) goto code_?;
      if ((uint)(pLVar4->fields)._size <= uVar5) goto code_?;
      pGVar6 = (pLVar4->fields)._items;
      if (pGVar6 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
      if ((uint)pGVar6->max_length <= uVar5) goto code_?;
      pGVar7 = pGVar6->vector[(int)uVar5].disabledBarTextBubble;
      if (pGVar7 == (GamePassesTextBubble *)0x0) goto code_?;
      GamePassesTextBubble::GamePassesTextBubble_Activate
                (pGVar7,StringLiteral_Progression_is_disabled_in_build,(MethodInfo *)0x0);
      pLVar4 = (this->fields).tierProgressDataList;
      if (pLVar4 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
      if ((uint)(pLVar4->fields)._size <= uVar5) goto code_?;
      pGVar6 = (pLVar4->fields)._items;
      if (pGVar6 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
      if ((uint)pGVar6->max_length <= uVar5) goto code_?;
      pGVar7 = pGVar6->vector[(int)uVar5].progressBarTextBubble;
      textBubbleText = StringLiteral_Progression_is_disabled_in_build;
    }
    else {
      bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
      if (bVar1 == 0) {
        lVar8 = FUN_?();
        if ((lVar8 == 0) ||
           (pLVar4 = (this->fields).tierProgressDataList,
           pLVar4 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0))
        goto code_?;
        uVar5 = *(byte *)(lVar8 + 0x28) - 1;
        if ((int)uVar5 < 0) {
          uVar5 = 0;
        }
        else if ((pLVar4->fields)._size < (int)uVar5) goto code_?;
        if ((uint)(pLVar4->fields)._size <= uVar5) goto code_?;
        pGVar6 = (pLVar4->fields)._items;
        if (pGVar6 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
        if ((uint)pGVar6->max_length <= uVar5) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pGVar7 = pGVar6->vector[(int)uVar5].disabledBarTextBubble;
        if (pGVar7 == (GamePassesTextBubble *)0x0) goto code_?;
        GamePassesTextBubble::GamePassesTextBubble_Activate
                  (pGVar7,StringLiteral_Progression_is_disabled_in_stand,(MethodInfo *)0x0);
        pLVar4 = (this->fields).tierProgressDataList;
        if (pLVar4 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
        goto code_?;
        if ((uint)(pLVar4->fields)._size <= uVar5) goto code_?;
        pGVar6 = (pLVar4->fields)._items;
        if (pGVar6 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
        if ((uint)pGVar6->max_length <= uVar5) goto code_?;
        pGVar7 = pGVar6->vector[(int)uVar5].progressBarTextBubble;
        textBubbleText = StringLiteral_Progression_is_disabled_in_stand;
      }
      else {
        if ((this->fields).hideSignUp != 0) {
          return;
        }
        pLVar4 = (this->fields).tierProgressDataList;
        if (pLVar4 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
        goto code_?;
        if ((pLVar4->fields)._size == 0) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pGVar6 = (pLVar4->fields)._items;
        if (pGVar6 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
        if ((int)pGVar6->max_length == 0) goto code_?;
        pGVar7 = pGVar6->vector[0].disabledBarTextBubble;
        if (pGVar7 == (GamePassesTextBubble *)0x0) goto code_?;
        GamePassesTextBubble::GamePassesTextBubble_Activate
                  (pGVar7,StringLiteral_Sign_up_to_be_able_to_save_progr,(MethodInfo *)0x0);
        pLVar4 = (this->fields).tierProgressDataList;
        if (pLVar4 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
        goto code_?;
        if ((pLVar4->fields)._size == 0) goto code_?;
        pGVar6 = (pLVar4->fields)._items;
        if (pGVar6 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
        if ((int)pGVar6->max_length == 0) goto code_?;
        pGVar7 = pGVar6->vector[0].progressBarTextBubble;
        textBubbleText = StringLiteral_Sign_up_to_be_able_to_save_progr;
      }
    }
    if (pGVar7 == (GamePassesTextBubble *)0x0) {
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    GamePassesTextBubble::GamePassesTextBubble_Activate(pGVar7,textBubbleText,(MethodInfo *)0x0);
  }
  return;
}


/* Void HandleUnlockedTiersProgressBars() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_HandleUnlockedTiersProgressBars
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = _UNK_?;
  barIndex = 0;
  do {
    bVar1 = GameTierProgressBar_IsTierUnlocked
                      (this,barIndex + GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pLVar2 = (this->fields).tierProgressDataList;
      if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
      if ((uint)(pLVar2->fields)._size <= barIndex) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pGVar4 = (pLVar2->fields)._items;
      if (pGVar4 == (GameTierProgressBar_TierProgressData__Array *)0x0) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FUN_?(pGVar4,apPStack_5);
      if (pPStack_6 == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPStack_6,value,(MethodInfo *)0x0);
      pLVar2 = (this->fields).tierProgressDataList;
      if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
      if ((uint)(pLVar2->fields)._size <= barIndex) goto code_?;
      pGVar4 = (pLVar2->fields)._items;
      if (pGVar4 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
      FUN_?(pGVar4,apPStack_5);
      if (apPStack_5[0] == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress(apPStack_5[0],value,(MethodInfo *)0x0);
      GameTierProgressBar_ActivateBar(this,barIndex,(MethodInfo *)0x0);
    }
    iVar7 = barIndex + 2;
    barIndex = barIndex + 1;
    if (3 < iVar7) {
      return;
    }
  } while( true );
}


/* Boolean HasAnyTempTier() */

bool Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_HasAnyTempTier
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    return (pPVar1->fields).previewGamePassTier != 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean HasTempTier(GamePassTier) */

bool Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_HasTempTier
               (GameTierProgressBar *this,GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return 0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    uVar2 = (pPVar1->fields).previewGamePassTier;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      if ((uint8_t)tier != uVar2) {
        return 0;
      }
      return (uint8_t)tier != (pPVar1->fields).gamePassTier;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_Initialize
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassProgressionController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePointGainEffectManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameTierProgressBar__HandleDisabledProgressBarVisibility__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameTierProgressBar__OnHaveShownGainEffect_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameTierProgressBar__OnHaveShownTierProgressBarGainEffect_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameTierProgressBar__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isInitialized == 0) {
    (this->fields).isInitialized = 1;
    pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,MethodInfo__GameTierProgressBar__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar1 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
    pAVar3 = (Action *)0x0;
    if (pAVar1 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar4 = pAVar3;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar4 = pAVar1;
      }
      if (pAVar4 == (Action *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar4;
      pAVar4 = pAVar3;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar4 = pAVar1;
      }
      if (pAVar4 == (Action *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)
                      &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc)
      ;
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
    pAVar1 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
    pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar2,(Object *)this,
               MethodInfo__GameTierProgressBar__HandleDisabledProgressBarVisibility__,
               (MethodInfo *)0x0);
    pAVar1 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
    if (pAVar1 == (Action *)0x0) {
      TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
           (Action *)0x0;
    }
    else {
      pAVar4 = pAVar3;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar4 = pAVar1;
      }
      if (pAVar4 == (Action *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
           pAVar4;
      pAVar4 = pAVar3;
      if (pAVar1->klass == TypeInfo__System__Action) {
        pAVar4 = pAVar1;
      }
      if (pAVar4 == (Action *)0x0) {
        FUN_?();
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
    pAVar11 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
    pDVar12 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(pDVar12,this);
    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar11,pDVar12,(MethodInfo *)0x0);
    pAVar13 = TypeInfo__System__Action<int>;
    if (pDVar12 == (Delegate *)0x0) {
      TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
           (Action_1_Int32_ *)0x0;
    }
    else {
      pAVar11 = (Action_1_Int32_ *)FUN_?(pDVar12,TypeInfo__System__Action<int>);
      if (pAVar11 == (Action_1_Int32_ *)0x0) {
        FUN_?(pDVar12,pAVar13);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar11;
      pAVar13 = TypeInfo__System__Action<int>;
      lVar14 = FUN_?(pDVar12,TypeInfo__System__Action<int>);
      if (lVar14 == 0) {
        FUN_?(pDVar12,pAVar13);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)TypeInfo__GamePointGainEffectManager->static_fields >> 0xc);
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
    pAVar11 = TypeInfo__GamePointGainEffectManager->static_fields->
              OnTierProgressBarGamePointGainEffectShown;
    pDVar12 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(pDVar12,this);
    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar11,pDVar12,(MethodInfo *)0x0);
    pAVar13 = TypeInfo__System__Action<int>;
    if (pDVar12 == (Delegate *)0x0) {
      TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown
           = (Action_1_Int32_ *)0x0;
    }
    else {
      pAVar11 = (Action_1_Int32_ *)FUN_?(pDVar12,TypeInfo__System__Action<int>);
      if (pAVar11 == (Action_1_Int32_ *)0x0) {
        FUN_?(pDVar12,pAVar13);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown
           = pAVar11;
      pAVar13 = TypeInfo__System__Action<int>;
      lVar14 = FUN_?(pDVar12);
      if (lVar14 == 0) {
        FUN_?(pDVar12,pAVar13);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)
                      &TypeInfo__GamePointGainEffectManager->static_fields->
                       OnTierProgressBarGamePointGainEffectShown >> 0xc);
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
    pEVar15 = (this->fields).embeddedPlayerConfig;
    if (pEVar15 == (EmbeddedPlayerConfig *)0x0) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
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
    if ((pEVar15->fields).initialized == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
      uVar16 = (pEVar15->fields).kogamaDefaultData.hideSignUp;
      bVar17 = uVar16;
    }
    else {
      bVar17 = (pEVar15->fields).currentSite.hideSignUp;
    }
    bVar10 = cRam_? == '\0';
    (this->fields).hideSignUp = bVar17;
    if (bVar10) {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar18 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar18 == (PlayerPlanetData *)0x0) goto code_?;
      playerGamePoints = (pPVar18->fields).progressionGamePoints;
      GameTierProgressBar_UpdateProgressBars(this,playerGamePoints,(MethodInfo *)0x0);
      GameTierProgressBar_UpdateDividerVisibility(this,playerGamePoints,(MethodInfo *)0x0);
      GameTierProgressBar_UpdateTempProgressVisibility(this,(MethodInfo *)0x0);
      GameTierProgressBar_UpdateTierIconHoverInput(this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                     );
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
      do {
        uVar6 = (uint)pAVar3;
        bVar17 = GameTierProgressBar_IsTierUnlocked
                          (this,uVar6 + GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
        if (bVar17 != 0) {
          GameTierProgressBar_ActivateBar(this,uVar6,(MethodInfo *)0x0);
        }
        pLVar19 = (this->fields).tierProgressDataList;
        if (pLVar19 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
        goto code_?;
        if ((uint)(pLVar19->fields)._size <= uVar6) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((((pLVar19->fields)._items == (GameTierProgressBar_TierProgressData__Array *)0x0) ||
            (FUN_?(), pCStack_20 == (Component *)0x0)) ||
           (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (pCStack_20,(MethodInfo *)0x0), pGVar21 == (GameObject *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar21,0,(MethodInfo *)0x0);
        pLVar19 = (this->fields).tierProgressDataList;
        if (pLVar19 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
        goto code_?;
        if ((uint)(pLVar19->fields)._size <= uVar6) goto code_?;
        if ((((pLVar19->fields)._items == (GameTierProgressBar_TierProgressData__Array *)0x0) ||
            (FUN_?(), pCStack_22 == (Component *)0x0)) ||
           (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (pCStack_22,(MethodInfo *)0x0), pGVar21 == (GameObject *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar21,1,(MethodInfo *)0x0);
        pAVar3 = (Action *)(ulonglong)(uVar6 + 1);
      } while ((int)(uVar6 + 2) < 4);
      GameTierProgressBar_HandleFreeTryVisibility(this,(MethodInfo *)0x0);
      fVar23 = GameTierProgressBar_CalculateTotalProgressValue
                         (this,playerGamePoints,(MethodInfo *)0x0);
      (this->fields).previousProgressValue = fVar23;
      (this->fields).interpolateTowardsProgressValue = fVar23;
      GameTierProgressBar_CreateAvatarHeadImages(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Boolean IsProgressBarEnabled() */

bool Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_IsProgressBarEnabled
               (GameTierProgressBar *this,MethodInfo *method)

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


/* Boolean IsTierUnlocked(GamePassTier) */

bool Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_IsTierUnlocked
               (GameTierProgressBar *this,GamePassTier__Enum tierToCheck,MethodInfo *method)

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
                              tierToCheck & 0xff,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                             );
          if (pOVar3 != (Object *)0x0) {
            return *(int *)&pOVar3[1].klass == 0;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void OnActiveProgressBarClicked(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnActiveProgressBarClicked
               (GameTierProgressBar *this,int32_t progressBarNumberPressed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                  ,CONCAT44(in_register_00000014,progressBarNumberPressed));
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
                  MethodInfo__GameTierProgressBar____c__DisplayClass25_0___OnActiveProgressBarClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameTierProgressBar____c__DisplayClass25_0);
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
  if (pGVar1 == (GameSessionData *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields).profileID < 1) {
    object = (Object *)FUN_?(TypeInfo__GameTierProgressBar____c__DisplayClass25_0);
    pGVar3 = (this->fields).touristInformationPopup;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar4 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pGVar3,
                        UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
    if (object == (Object *)0x0) goto code_?;
    bVar5 = iRam_? != 0;
    object[1].klass = pOVar4;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,object,
               MethodInfo__GameTierProgressBar____c__DisplayClass25_0___OnActiveProgressBarClicked_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnDestroy
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassProgressionController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePointGainEffectManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameTierProgressBar__HandleDisabledProgressBarVisibility__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameTierProgressBar__OnHaveShownGainEffect_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameTierProgressBar__OnHaveShownTierProgressBarGainEffect_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameTierProgressBar__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,MethodInfo__GameTierProgressBar__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
  }
  else {
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar3;
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 == (Action *)0x0) {
      FUN_?(pAVar1);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)
                    &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pAVar1 = TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate;
  pNVar2 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (pNVar2,(Object *)this,
             MethodInfo__GameTierProgressBar__HandleDisabledProgressBarVisibility__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pNVar2,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate =
         (Action *)0x0;
  }
  else {
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__GamePassProgressionController->static_fields->OnGamePassesProgressionUpdate = pAVar3;
    pAVar3 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar1;
    }
    if (pAVar3 == (Action *)0x0) {
      FUN_?(pAVar1);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)
                    &TypeInfo__GamePassProgressionController->static_fields->
                     OnGamePassesProgressionUpdate >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pAVar10 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
  pDVar11 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
  FUN_?(pDVar11,this);
  pDVar11 = mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pAVar10,pDVar11,(MethodInfo *)0x0);
  pAVar12 = TypeInfo__System__Action<int>;
  if (pDVar11 == (Delegate *)0x0) {
    TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
         (Action_1_Int32_ *)0x0;
  }
  else {
    pAVar10 = (Action_1_Int32_ *)FUN_?(pDVar11,TypeInfo__System__Action<int>);
    if (pAVar10 == (Action_1_Int32_ *)0x0) {
      FUN_?(pDVar11,pAVar12);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar10;
    pAVar12 = TypeInfo__System__Action<int>;
    lVar6 = FUN_?(pDVar11,TypeInfo__System__Action<int>);
    if (lVar6 == 0) {
      FUN_?(pDVar11,pAVar12);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)TypeInfo__GamePointGainEffectManager->static_fields >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pAVar10 = TypeInfo__GamePointGainEffectManager->static_fields->
            OnTierProgressBarGamePointGainEffectShown;
  pDVar11 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
  FUN_?(pDVar11,this);
  pDVar11 = mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pAVar10,pDVar11,(MethodInfo *)0x0);
  pAVar12 = TypeInfo__System__Action<int>;
  if (pDVar11 == (Delegate *)0x0) {
    TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown =
         (Action_1_Int32_ *)0x0;
  }
  else {
    pAVar10 = (Action_1_Int32_ *)FUN_?(pDVar11,TypeInfo__System__Action<int>);
    if (pAVar10 == (Action_1_Int32_ *)0x0) {
      FUN_?(pDVar11,pAVar12);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown =
         pAVar10;
    pAVar12 = TypeInfo__System__Action<int>;
    lVar6 = FUN_?(pDVar11);
    if (lVar6 == 0) {
      FUN_?(pDVar11,pAVar12);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)
                    &TypeInfo__GamePointGainEffectManager->static_fields->
                     OnTierProgressBarGamePointGainEffectShown >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar13 = (this->fields).previewHeadRoot;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar13 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar13->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar13 = (this->fields).previewHeadRoot;
      if (pTVar13 == (Transform *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pTVar13,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
      iVar14 = iRam_?;
      (this->fields).headPreviewer = (AvatarPreviewer *)0x0;
      if (iVar14 != 0) {
        uVar5 = (uint)((ulonglong)&(this->fields).headPreviewer >> 0xc);
        uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar15 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar15 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar15 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
          iVar14 = iRam_?;
        } while (!bVar9);
      }
      (this->fields).previewHeadRoot = (Transform *)0x0;
      if (iVar14 != 0) {
        uVar5 = (uint)((ulonglong)&(this->fields).previewHeadRoot >> 0xc);
        uVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar15 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar15 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar15 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
    }
  }
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnDisable
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField !=
      (GameSessionData *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 == (GameSessionData *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pGVar1->fields).gameMode != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator !=
           (PlayerTierStateCalculator *)0x0) &&
         ((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator->fields).
          gamePassRewardsActivated != 0)) {
        (this->fields).previousProgressValue = (this->fields).interpolateTowardsProgressValue;
        lVar3 = FUN_?();
        if (lVar3 == 0) goto code_?;
        playerGamePoints = *(int32_t *)(lVar3 + 0x18);
        GameTierProgressBar_UpdateProgressBars(this,playerGamePoints,(MethodInfo *)0x0);
        GameTierProgressBar_UpdateDividerVisibility(this,playerGamePoints,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnEnable
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameTierProgressBar);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ranku000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  bVar4 = cRam_? == '\0';
  (this->fields).interpolationStartTime = fVar3;
  if (bVar4) {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar5 == (PlayerPlanetData *)0x0) goto DAT_?;
    iVar6 = (pPVar5->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePointGainEffectManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (((iVar6 != TypeInfo__GamePointGainEffectManager->static_fields->
                   progressBarGamePointAmountShown) &&
        (TypeInfo__GameTierProgressBar->static_fields->haveShownTips != 0)) &&
       ((this->fields).hasShownRankTip == 0)) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar7 == (GameSessionData *)0x0) goto DAT_?;
      if (((pGVar7->fields).gameMode != 0) &&
         (bVar8 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession
                             ((MethodInfo *)0x0), bVar8 == 0)) {
        (this->fields).hasShownRankTip = 1;
        lVar9 = FUN_?();
        if (lVar9 == 0) {
DAT_?:
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = (this->fields).highScoreTipTextBubble;
        aIStackX_18[0].m_value = *(undefined4 *)(lVar9 + 0x14);
        pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
        pSVar10 = mscorlib.dll::System::String::String_Concat_4
                            (StringLiteral_Ranku000A,pSVar10,(MethodInfo *)0x0);
        if (this_00 == (GamePassesTextBubble *)0x0) goto DAT_?;
        GamePassesTextBubble::GamePassesTextBubble_Activate(this_00,pSVar10,(MethodInfo *)0x0);
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePointGainEffectManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown = iVar6;
    if (TypeInfo__GamePointGainEffectManager->static_fields->
        OnTierProgressBarGamePointGainEffectShown != (Action_1_Int32_ *)0x0) {
      pAVar11 = TypeInfo__GamePointGainEffectManager->static_fields->
               OnTierProgressBarGamePointGainEffectShown;
      (*(pAVar11->fields)._._.invoke_impl)((pAVar11->fields)._._.method_code);
    }
  }
  GameTierProgressBar_UpdateTempProgressVisibility(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
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
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return;
  }
  pLVar12 = (this->fields).tierProgressDataList;
  uVar13 = 0;
  uVar14 = uVar13;
  do {
    if (pLVar12 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar15 = (uint)uVar14;
    if ((pLVar12->fields)._size <= (int)uVar15) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar5 != (PlayerPlanetData *)0x0) {
        bVar16 = (pPVar5->fields).gamePassTier;
        if (bVar16 == 3) {
          return;
        }
        bVar8 = GameTierProgressBar_HasTempTier
                           (this,bVar16 + GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          return;
        }
        pLVar12 = (this->fields).tierProgressDataList;
        if (pLVar12 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
          if ((uint)(pLVar12->fields)._size <= (uint)bVar16) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pGVar17 = (pLVar12->fields)._items;
          if (pGVar17 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
            if ((uint)pGVar17->max_length <= (uint)bVar16) {
code_?:
              FUN_?();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pHVar18 = pGVar17->vector[bVar16].hoverInputHandler;
            if (pHVar18 != (HoverInputHandler *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__Add_HoverInputReceiver_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar19 = 
              MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__Add_HoverInputReceiver_
              ;
              pLVar20 = (List_1_System_Object_ *)(pHVar18->fields).hoverInputReceivers;
              if (pLVar20 != (List_1_System_Object_ *)0x0) {
                piVar21 = &(pLVar20->fields)._version;
                *piVar21 = *piVar21 + 1;
                pOVar22 = (pLVar20->fields)._items;
                if (pOVar22 != (Object__Array *)0x0) {
                  uVar15 = (pLVar20->fields)._size;
                  if ((uint)pOVar22->max_length <= uVar15) {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__AddWithResize
                              (pLVar20,(Object *)this,pMVar19->klass->rgctx_data[0xe].method);
                    return;
                  }
                  (pLVar20->fields)._size = uVar15 + 1;
                  FUN_?(pOVar22,(longlong)(int)uVar15,this);
                  return;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    pLVar12 = (this->fields).tierProgressDataList;
    if (pLVar12 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
    if ((uint)(pLVar12->fields)._size <= uVar15) goto code_?;
    pGVar17 = (pLVar12->fields)._items;
    if (pGVar17 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
    if ((uint)pGVar17->max_length <= uVar15) goto code_?;
    lVar9 = *(longlong *)((longlong)&pGVar17->vector[0].hoverInputHandler + uVar13);
    if (lVar9 == 0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__Remove_HoverInputReceiver_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar20 = *(List_1_System_Object_ **)(lVar9 + 0x20);
    if (pLVar20 == (List_1_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Remove
              (pLVar20,(Object *)this,
               MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__Remove_HoverInputReceiver_
              );
    pLVar12 = (this->fields).tierProgressDataList;
    uVar14 = (ulonglong)(uVar15 + 1);
    uVar13 = uVar13 + 0x90;
  } while( true );
}


/* Void OnHaveShownGainEffect(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnHaveShownGainEffect
               (GameTierProgressBar *this,int32_t newGamePointAmountShown,MethodInfo *method)

{
  fVar1 = GameTierProgressBar_CalculateTotalProgressValue
                     (this,newGamePointAmountShown,(MethodInfo *)0x0);
  (this->fields).previousProgressValue = fVar1;
  GameTierProgressBar_UpdateProgressBars(this,newGamePointAmountShown,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                  ,newGamePointAmountShown,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
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
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 != (PlayerPlanetData *)0x0) {
    this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    bVar3 = (pPVar2->fields).gamePassTier;
    if (this_00 != (PlayerTierStateCalculator *)0x0) {
      if ((this_00->fields).gamePointVelocityIsZero == 0) {
        this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                  PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                            (this_00,newGamePointAmountShown,(uint)bVar3,(MethodInfo *)0x0);
      }
      else {
        this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                  PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                            (this_00,(uint)bVar3,(MethodInfo *)0x0);
      }
      fVar1 = _UNK_?;
      bVar4 = false;
      uVar5 = 0;
      bVar3 = 1;
      do {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        BVar6 = bVar3 - 1;
        iVar7 = newGamePointAmountShown;
        if (0 < (int)BVar6) {
          if (this_01 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) break;
          do {
            pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,BVar6 & 0xff,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar8 == (Object *)0x0) goto DAT_?;
            iVar7 = iVar7 - *(int *)&pOVar8[2].klass;
            BVar6 = BVar6 - 1;
          } while (0 < (int)BVar6);
        }
        if ((this_01 ==
             (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
             0x0) || (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               ByteEnum,System::Object]::
                               Dictionary_2_System_ByteEnum_System_Object__get_Item
                                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                          (uint)bVar3,
                                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                         ), pOVar8 == (Object *)0x0)) break;
        fVar9 = (float)iVar7 / (float)*(int *)&pOVar8[2].klass;
        if ((fVar1 <= fVar9) ||
           ((((fVar1 <= fVar9 || (fVar9 <= 0.0)) || (bVar4)) ||
            (bVar10 = GameTierProgressBar_IsProgressBarEnabled(this,(MethodInfo *)0x0), bVar10 == 0)))
           ) {
          pLVar11 = (this->fields).tierProgressDataList;
          if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
          if ((uint)(pLVar11->fields)._size <= uVar5) goto code_?;
          if (((pLVar11->fields)._items == (GameTierProgressBar_TierProgressData__Array *)0x0) ||
             (FUN_?(), pGStack_12 == (GameObject *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGStack_12,0,(MethodInfo *)0x0);
          pLVar11 = (this->fields).tierProgressDataList;
          if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
          if ((uint)(pLVar11->fields)._size <= uVar5) goto code_?;
          if (((pLVar11->fields)._items == (GameTierProgressBar_TierProgressData__Array *)0x0) ||
             (FUN_?(), pGStack_13 == (GameObject *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGStack_13,0,(MethodInfo *)0x0);
          pLVar11 = (this->fields).tierProgressDataList;
          if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
          if ((uint)(pLVar11->fields)._size <= uVar5) goto code_?;
          if (((pLVar11->fields)._items == (GameTierProgressBar_TierProgressData__Array *)0x0) ||
             (FUN_?(), pGStack_14 == (GameObject *)0x0)) break;
          bVar10 = 0;
        }
        else {
          pLVar11 = (this->fields).tierProgressDataList;
          bVar4 = true;
          if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
          if ((uint)(pLVar11->fields)._size <= uVar5) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pGVar16 = (pLVar11->fields)._items;
          if ((pGVar16 == (GameTierProgressBar_TierProgressData__Array *)0x0) ||
             (FUN_?(pGVar16,auStack_17), pGStack_12 == (GameObject *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGStack_12,1,(MethodInfo *)0x0);
          pLVar11 = (this->fields).tierProgressDataList;
          if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
          if ((uint)(pLVar11->fields)._size <= uVar5) goto code_?;
          pGVar16 = (pLVar11->fields)._items;
          if ((pGVar16 == (GameTierProgressBar_TierProgressData__Array *)0x0) ||
             (FUN_?(pGVar16,auStack_17), pGStack_13 == (GameObject *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGStack_13,1,(MethodInfo *)0x0);
          pLVar11 = (this->fields).tierProgressDataList;
          if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
          if ((uint)(pLVar11->fields)._size <= uVar5) goto code_?;
          pGVar16 = (pLVar11->fields)._items;
          if ((pGVar16 == (GameTierProgressBar_TierProgressData__Array *)0x0) ||
             (FUN_?(pGVar16,auStack_17), pGStack_14 == (GameObject *)0x0)) break;
          bVar10 = 1;
        }
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGStack_14,bVar10,(MethodInfo *)0x0);
        bVar3 = bVar3 + 1;
        uVar5 = uVar5 + 1;
        if (2 < (int)uVar5) {
          return;
        }
      } while( true );
    }
  }
DAT_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnHaveShownTierProgressBarGainEffect(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::
     GameTierProgressBar_OnHaveShownTierProgressBarGainEffect
               (GameTierProgressBar *this,int32_t newGamePointAmountShown,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar4 = (*pcRam_?)(pvVar2);
  if (cVar4 == '\0') {
    fVar5 = GameTierProgressBar_CalculateTotalProgressValue
                      (this,newGamePointAmountShown,(MethodInfo *)0x0);
    (this->fields).previousProgressValue = fVar5;
    GameTierProgressBar_UpdateProgressBars(this,newGamePointAmountShown,(MethodInfo *)0x0);
    GameTierProgressBar_UpdateDividerVisibility(this,newGamePointAmountShown,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnHeadClick() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnHeadClick
               (GameTierProgressBar *this,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Crystals_to_go_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = FUN_?((this->fields).previousProgressValue);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar2 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar2->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar2 != (PlayerPlanetData *)0x0) {
      this_01 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      bVar3 = (pPVar2->fields).gamePassTier;
      if (this_01 != (PlayerTierStateCalculator *)0x0) {
        if ((this_01->fields).gamePointVelocityIsZero == 0) {
          this_02 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                              (this_01,playerGamePoints,(uint)bVar3,(MethodInfo *)0x0);
        }
        else {
          this_02 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                              (this_01,(uint)bVar3,(MethodInfo *)0x0);
        }
        if ((this_02 !=
             (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
             0x0) && (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                ByteEnum,System::Object]::
                                Dictionary_2_System_ByteEnum_System_Object__get_Item
                                          ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,
                                           uVar1 + 1,
                                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                          ), pOVar4 != (Object *)0x0)) {
          iVar5 = *(int *)&pOVar4[2].klass;
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          BVar6 = uVar1 + 1 & 0xff;
          while (BVar6 = BVar6 - 1, 0 < (int)BVar6) {
            pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,
                                 BVar6 & 0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                );
            if (pOVar4 == (Object *)0x0) goto code_?;
            playerGamePoints = playerGamePoints - *(int *)&pOVar4[2].klass;
          }
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
          aRStack_7[0]._pointer._value = (void *)0x0;
          aRStack_7[0]._length = 0;
          aRStack_7[0]._12_4_ = 0;
          pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                              (iVar5 - playerGamePoints,aRStack_7,(IFormatProvider *)0x0,
                               (MethodInfo *)0x0);
          pSVar8 = mscorlib.dll::System::String::String_Concat_4
                              (pSVar8,StringLiteral__Crystals_to_go_,(MethodInfo *)0x0);
          pLVar9 = (this->fields).tierProgressDataList;
          if (pLVar9 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            if ((uint)(pLVar9->fields)._size <= uVar1) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pGVar11 = (pLVar9->fields)._items;
            if (pGVar11 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
              if ((uint)pGVar11->max_length <= uVar1) {
                FUN_?();
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pGVar12 = pGVar11->vector[(int)uVar1].avatarHead;
              if (pGVar12 != (GamePassesTextBubble *)0x0) {
                pNVar13 = (pGVar12->fields).fader;
                if (pNVar13 != (NotificationFade *)0x0) {
                  this_00 = (pNVar13->fields).group;
                  (pNVar13->fields).playing = 1;
                  (pNVar13->fields).pauseAt = (pNVar13->fields).duration;
                  if (this_00 != (CanvasGroup *)0x0) {
                    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                              (this_00,0.0,(MethodInfo *)0x0);
                    (pNVar13->fields).currentTime = 0.0;
                    pTVar14 = (pGVar12->fields).text;
                    if (pTVar14 != (Text *)0x0) {
                      (*(pTVar14->klass->vtable).set_text.methodPtr)
                                (pTVar14,pSVar8,(pTVar14->klass->vtable).set_text.method);
                      (pGVar12->fields).isActive = 1;
                      return;
                    }
                  }
                }
                FUN_?();
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnHoverEnter() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnHoverEnter
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FREE_TRY);
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
    if (TypeInfo__GamePassesManager->static_fields->playerPlanetData == (PlayerPlanetData *)0x0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      uVar3 = (pPVar1->fields).gamePassTier;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar4 != (GameSessionData *)0x0) {
        iVar5 = (pGVar4->fields).gameMode;
        if (uVar3 == 3) {
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar1 != (PlayerPlanetData *)0x0) {
          if (iVar5 == 0 || (pPVar1->fields).previewGamePassTier != 0) {
            return;
          }
          bVar6 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0);
          if (bVar6 == 0) {
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar7 != (MVGameControllerBase *)0x0) &&
              (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
             (this_00 = (pMVar8->fields)._GameTierShopRepository_k__BackingField,
             this_00 != (GameTierShopRepository *)0x0)) {
            pDVar9 = GameTierShopRepository::GameTierShopRepository_GetTierItemData
                                (this_00,bVar2 + GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
            if (pDVar9 ==
                (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0) {
              return;
            }
            pLVar10 = (this->fields).tierProgressDataList;
            if (pLVar10 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              if ((uint)(pLVar10->fields)._size <= (uint)bVar2) {
code_?:
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pGVar12 = (pLVar10->fields)._items;
              if (pGVar12 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                if ((uint)pGVar12->max_length <= (uint)bVar2) {
code_?:
                  FUN_?();
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                uVar13 = (uint)bVar2;
                pGVar14 = pGVar12->vector[(int)uVar13].freeTryTextBubble;
                if (pGVar14 != (GamePassesTextBubble *)0x0) {
                  if ((pGVar14->fields).isActive != 0) {
                    return;
                  }
                  pLVar10 = (this->fields).tierProgressDataList;
                  if (pLVar10 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                    if ((uint)(pLVar10->fields)._size <= uVar13) goto code_?;
                    pGVar12 = (pLVar10->fields)._items;
                    if (pGVar12 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                      if ((uint)pGVar12->max_length <= uVar13) goto code_?;
                      pGVar14 = pGVar12->vector[(int)uVar13].freeTryTextBubble;
                      if ((pGVar14 != (GamePassesTextBubble *)0x0) &&
                         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_gameObject((Component *)pGVar14,(MethodInfo *)0x0)
                         , this_01 != (GameObject *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (this_01,1,(MethodInfo *)0x0);
                        pLVar10 = (this->fields).tierProgressDataList;
                        if (pLVar10 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                          if ((uint)(pLVar10->fields)._size <= (uint)bVar2)
                          goto code_?;
                          pGVar12 = (pLVar10->fields)._items;
                          if (pGVar12 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                            if ((uint)pGVar12->max_length <= (uint)bVar2) goto code_?;
                            pGVar14 = pGVar12->vector[bVar2].freeTryTextBubble;
                            textBubbleText = TM::TM__(StringLiteral_FREE_TRY,(MethodInfo *)0x0);
                            if (pGVar14 != (GamePassesTextBubble *)0x0) {
                              GamePassesTextBubble::GamePassesTextBubble_Activate
                                        (pGVar14,textBubbleText,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnInactiveProgressBarClicked(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnInactiveProgressBarClicked
               (GameTierProgressBar *this,int32_t progressBarNumberPressed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_Progression_is_disabled_in_Stand;
  pLVar2 = (this->fields).tierProgressDataList;
  if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    if ((uint)(pLVar2->fields)._size <= (uint)progressBarNumberPressed) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pGVar4 = (pLVar2->fields)._items;
    if (pGVar4 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
      if ((uint)pGVar4->max_length <= (uint)progressBarNumberPressed) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pGVar5 = pGVar4->vector[progressBarNumberPressed].disabledBarTextBubble;
      if (pGVar5 != (GamePassesTextBubble *)0x0) {
        pNVar6 = (pGVar5->fields).fader;
        if (pNVar6 != (NotificationFade *)0x0) {
          this_00 = (pNVar6->fields).group;
          (pNVar6->fields).playing = 1;
          (pNVar6->fields).pauseAt = (pNVar6->fields).duration;
          if (this_00 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (this_00,0.0,(MethodInfo *)0x0);
            (pNVar6->fields).currentTime = 0.0;
            pTVar7 = (pGVar5->fields).text;
            if (pTVar7 != (Text *)0x0) {
              (*(pTVar7->klass->vtable).set_text.methodPtr)
                        (pTVar7,pSVar1,(pTVar7->klass->vtable).set_text.method,in_R9,unaff_RDI);
              (pGVar5->fields).isActive = 1;
              return;
            }
          }
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_OnPlayerPlanetDataUpdated
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  GameTierProgressBar_UpdateTempProgressVisibility(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 == (GameSessionData *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pGVar1->fields).gameMode == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar3 == (PlayerPlanetData *)0x0) goto code_?;
    bVar4 = (pPVar3->fields).gamePassTier;
    iVar5 = 2;
    do {
      if ((int)(bVar4 - 1) < iVar5) {
        GameTierProgressBar_DeactivateBar(this,iVar5,(MethodInfo *)0x0);
      }
      else {
        GameTierProgressBar_ActivateBar(this,iVar5,(MethodInfo *)0x0);
      }
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  else {
    bVar6 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
    if (bVar6 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator !=
           (PlayerTierStateCalculator *)0x0) &&
         ((TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator->fields).
          gamePassRewardsActivated != 0)) {
        lVar7 = FUN_?();
        if (lVar7 != 0) {
          fVar8 = GameTierProgressBar_CalculateTotalProgressValue
                             (this,*(int32_t *)(lVar7 + 0x18),(MethodInfo *)0x0);
          (this->fields).interpolateTowardsProgressValue = fVar8;
          if ((this->fields).previousProgressValue != fVar8) {
            (this->fields).shouldInterpolate = 1;
          }
          if ((this->fields).tierProgressDataList !=
              (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            iVar5 = FUN_?();
            fVar9 = _UNK_?;
            fVar8 = _UNK_?;
            uVar10 = (ulonglong)iVar5;
            if (((this->fields).shouldInterpolate != 0) &&
               (fVar11 = (this->fields).interpolateTowardsProgressValue - (float)iVar5,
               0.0 < fVar11)) {
              lVar7 = uVar10 * 0x90;
              do {
                pLVar12 = (this->fields).tierProgressDataList;
                if (pLVar12 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
                goto code_?;
                uVar13 = (uint)uVar10;
                if ((uint)(pLVar12->fields)._size <= uVar13) goto code_?;
                pGVar14 = (pLVar12->fields)._items;
                if (pGVar14 == (GameTierProgressBar_TierProgressData__Array *)0x0)
                goto code_?;
                if ((uint)pGVar14->max_length <= uVar13) {
                  FUN_?();
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                lVar15 = *(longlong *)((longlong)&pGVar14->vector[0].endResultProgressBar + lVar7);
                if (fVar11 < 0.0) {
                  value = 0.0;
                }
                else {
                  value = fVar11;
                  if (fVar8 < fVar11) {
                    value = fVar8;
                  }
                }
                if (lVar15 == 0) goto code_?;
                if (value < 0.0) {
                  value = 0.0;
                }
                else if (fVar8 < value) {
                  value = fVar8;
                }
                *(float *)(lVar15 + 0x28) = value;
                if (*(Scrollbar **)(lVar15 + 0x20) == (Scrollbar *)0x0) goto code_?;
                UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                          (*(Scrollbar **)(lVar15 + 0x20),value,(MethodInfo *)0x0);
                fVar11 = fVar11 + fVar9;
                uVar10 = (ulonglong)(uVar13 + 1);
                lVar7 = lVar7 + 0x90;
              } while (0.0 < fVar11);
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__GamePassesManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
            if (pPVar3 != (PlayerPlanetData *)0x0) {
              GameTierProgressBar_UpdateProgressBars
                        (this,(pPVar3->fields).progressionGamePoints,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__GamePassesManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
              if (pPVar3 != (PlayerPlanetData *)0x0) {
                GameTierProgressBar_UpdateDividerVisibility
                          (this,(pPVar3->fields).progressionGamePoints,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto code_?;
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar8 = _UNK_?;
    uVar13 = 0;
    do {
      bVar6 = GameTierProgressBar_IsTierUnlocked
                        (this,uVar13 + GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        pLVar12 = (this->fields).tierProgressDataList;
        if (pLVar12 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
        goto code_?;
        if ((uint)(pLVar12->fields)._size <= uVar13) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pGVar14 = (pLVar12->fields)._items;
        if ((pGVar14 == (GameTierProgressBar_TierProgressData__Array *)0x0) ||
           (FUN_?(pGVar14,apPStack_16), pPStack_17 == (ProgressBarAndroid *)0x0))
        goto code_?;
        ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPStack_17,fVar8,(MethodInfo *)0x0);
        pLVar12 = (this->fields).tierProgressDataList;
        if (pLVar12 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
        goto code_?;
        if ((uint)(pLVar12->fields)._size <= uVar13) goto code_?;
        pGVar14 = (pLVar12->fields)._items;
        if ((pGVar14 == (GameTierProgressBar_TierProgressData__Array *)0x0) ||
           (FUN_?(pGVar14,apPStack_16), apPStack_16[0] == (ProgressBarAndroid *)0x0))
        goto code_?;
        ProgressBarAndroid::ProgressBarAndroid_set_Progress(apPStack_16[0],fVar8,(MethodInfo *)0x0)
        ;
        GameTierProgressBar_ActivateBar(this,uVar13,(MethodInfo *)0x0);
      }
      iVar5 = uVar13 + 2;
      uVar13 = uVar13 + 1;
    } while (iVar5 < 4);
  }
  return;
}


/* Int32 ReduceGamePointsWithPreviousTierRequirements(GamePassTier, Int32,
   Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierState]) */

int32_t Assembly-CSharp.dll::GameTierProgressBar::
        GameTierProgressBar_ReduceGamePointsWithPreviousTierRequirements
                  (GameTierProgressBar *this,GamePassTier__Enum gamePassTierToDisplay,
                  int32_t gamePoints,
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


/* Void ReplayGainEffect(Int32, Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_ReplayGainEffect
               (GameTierProgressBar *this,int32_t previousGamePointAmount,int32_t newGamePointAmount
               ,MethodInfo *method)

{
  GameTierProgressBar_UpdateProgressBars(this,previousGamePointAmount,(MethodInfo *)0x0);
  GameTierProgressBar_UpdateDividerVisibility(this,previousGamePointAmount,(MethodInfo *)0x0);
  fVar1 = GameTierProgressBar_CalculateTotalProgressValue
                    (this,previousGamePointAmount,(MethodInfo *)0x0);
  (this->fields).previousProgressValue = fVar1;
  fVar1 = GameTierProgressBar_CalculateTotalProgressValue(this,newGamePointAmount,(MethodInfo *)0x0)
  ;
  pcVar2 = pcRam_?;
  (this->fields).interpolateTowardsProgressValue = fVar1;
  pcVar3 = pcRam_?;
  if ((pcVar2 == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar2, pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar3;
  fVar1 = (float)(*pcVar2)();
  (this->fields).interpolationStartTime = fVar1;
  (this->fields).shouldInterpolate = 1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePointGainEffectManager,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown =
       newGamePointAmount;
  if (TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown
      == (Action_1_Int32_ *)0x0) {
    return;
  }
  pAVar5 = TypeInfo__GamePointGainEffectManager->static_fields->
           OnTierProgressBarGamePointGainEffectShown;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar5->fields)._._.invoke_impl)
            ((pAVar5->fields)._._.method_code,newGamePointAmount,(pAVar5->fields)._._.method);
  return;
}


/* IEnumerator ScaleAndFadeLockForTier(Int32) */

IEnumerator *
Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_ScaleAndFadeLockForTier
          (GameTierProgressBar *this,int32_t tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameTierProgressBar___ScaleAndFadeLockForTier_d__45);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__GameTierProgressBar___ScaleAndFadeLockForTier_d__45);
  bVar2 = iRam_? == 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    *(int32_t *)&pIVar1[2].monitor = tier;
    return pIVar1;
  }
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
  *(int32_t *)&pIVar1[2].monitor = tier;
  return pIVar1;
}


/* Void SetLockedStateForTier(Int32, Boolean) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_SetLockedStateForTier
               (GameTierProgressBar *this,int32_t tier,bool tierUnlocked,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  if (tierUnlocked != 0) {
    uVar1 = 0;
  }
  pLVar2 = (this->fields).tierProgressDataList;
  if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    if ((uint)(pLVar2->fields)._size <= (uint)tier) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pGVar4 = (pLVar2->fields)._items;
    if (pGVar4 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
      if ((uint)pGVar4->max_length <= (uint)tier) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      obj = pGVar4->vector[tier].LockedTierIcon;
      if (obj != (CanvasGroup *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                        ,pGVar4,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (CanvasGroup *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        OVar5.m_CachedPtr = (obj->fields)._._._.m_CachedPtr;
        if (OVar5.m_CachedPtr == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(OVar5.m_CachedPtr,uVar1);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean ShowFreeTryTextBubble() */

bool Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_ShowFreeTryTextBubble
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FREE_TRY);
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
    if (TypeInfo__GamePassesManager->static_fields->playerPlanetData == (PlayerPlanetData *)0x0) {
      return 0;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      uVar3 = (pPVar1->fields).gamePassTier;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar4 != (GameSessionData *)0x0) {
        iVar5 = (pGVar4->fields).gameMode;
        if (uVar3 == 3) {
          return 0;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar1 != (PlayerPlanetData *)0x0) {
          if (iVar5 == 0 || (pPVar1->fields).previewGamePassTier != 0) {
            return 0;
          }
          bVar6 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0);
          if (bVar6 == 0) {
            return 0;
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar7 != (MVGameControllerBase *)0x0) &&
              (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
             (this_00 = (pMVar8->fields)._GameTierShopRepository_k__BackingField,
             this_00 != (GameTierShopRepository *)0x0)) {
            pDVar9 = GameTierShopRepository::GameTierShopRepository_GetTierItemData
                                (this_00,bVar2 + GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
            if (pDVar9 ==
                (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0) {
              return 0;
            }
            pLVar10 = (this->fields).tierProgressDataList;
            if (pLVar10 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              if ((uint)(pLVar10->fields)._size <= (uint)bVar2) {
code_?:
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar11 = (code *)swi(3);
                bVar6 = (*pcVar11)();
                return bVar6;
              }
              pGVar12 = (pLVar10->fields)._items;
              if (pGVar12 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                if ((uint)pGVar12->max_length <= (uint)bVar2) {
code_?:
                  FUN_?();
                  pcVar11 = (code *)swi(3);
                  bVar6 = (*pcVar11)();
                  return bVar6;
                }
                uVar13 = (uint)bVar2;
                pGVar14 = pGVar12->vector[(int)uVar13].freeTryTextBubble;
                if (pGVar14 != (GamePassesTextBubble *)0x0) {
                  if ((pGVar14->fields).isActive != 0) {
                    return 1;
                  }
                  pLVar10 = (this->fields).tierProgressDataList;
                  if (pLVar10 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                    if ((uint)(pLVar10->fields)._size <= uVar13) goto code_?;
                    pGVar12 = (pLVar10->fields)._items;
                    if (pGVar12 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                      if ((uint)pGVar12->max_length <= uVar13) goto code_?;
                      pGVar14 = pGVar12->vector[(int)uVar13].freeTryTextBubble;
                      if ((pGVar14 != (GamePassesTextBubble *)0x0) &&
                         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_gameObject((Component *)pGVar14,(MethodInfo *)0x0)
                         , this_01 != (GameObject *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (this_01,1,(MethodInfo *)0x0);
                        pLVar10 = (this->fields).tierProgressDataList;
                        if (pLVar10 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                          if ((uint)(pLVar10->fields)._size <= (uint)bVar2)
                          goto code_?;
                          pGVar12 = (pLVar10->fields)._items;
                          if (pGVar12 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                            if ((uint)pGVar12->max_length <= (uint)bVar2) goto code_?;
                            pGVar14 = pGVar12->vector[bVar2].freeTryTextBubble;
                            textBubbleText = TM::TM__(StringLiteral_FREE_TRY,(MethodInfo *)0x0);
                            if (pGVar14 != (GamePassesTextBubble *)0x0) {
                              GamePassesTextBubble::GamePassesTextBubble_Activate
                                        (pGVar14,textBubbleText,(MethodInfo *)0x0);
                              return 1;
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
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar6 = (*pcVar11)();
  return bVar6;
}


/* Void Start() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_Start
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameTierProgressBar);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GameTierProgressBar->static_fields->haveShownTips != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameTierProgressBar);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Progression_locked_while_the_gam);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Progression_is_disabled_in_stand);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Progression_is_disabled_in_build);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Sign_up_to_be_able_to_save_progr);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__GameTierProgressBar->static_fields->haveShownTips = 1;
  bVar1 = GameTierProgressBar_ShowFreeTryTextBubble(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar2 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar2->fields).gameMode == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if ((pPVar3 == (PlayerPlanetData *)0x0) ||
         (pLVar4 = (this->fields).tierProgressDataList,
         pLVar4 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) goto code_?;
      uVar5 = (pPVar3->fields).gamePassTier - 1;
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      else if ((pLVar4->fields)._size < (int)uVar5) goto code_?;
      if ((uint)(pLVar4->fields)._size <= uVar5) goto code_?;
      pGVar6 = (pLVar4->fields)._items;
      if (pGVar6 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
      if ((uint)pGVar6->max_length <= uVar5) goto code_?;
      pGVar7 = pGVar6->vector[(int)uVar5].disabledBarTextBubble;
      if (pGVar7 == (GamePassesTextBubble *)0x0) goto code_?;
      GamePassesTextBubble::GamePassesTextBubble_Activate
                (pGVar7,StringLiteral_Progression_is_disabled_in_build,(MethodInfo *)0x0);
      pLVar4 = (this->fields).tierProgressDataList;
      if (pLVar4 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
      if ((uint)(pLVar4->fields)._size <= uVar5) goto code_?;
      pGVar6 = (pLVar4->fields)._items;
      if (pGVar6 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
      if ((uint)pGVar6->max_length <= uVar5) goto code_?;
      pGVar7 = pGVar6->vector[(int)uVar5].progressBarTextBubble;
      textBubbleText = StringLiteral_Progression_is_disabled_in_build;
    }
    else {
      bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
      if (bVar1 == 0) {
        lVar8 = FUN_?();
        if ((lVar8 == 0) ||
           (pLVar4 = (this->fields).tierProgressDataList,
           pLVar4 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0))
        goto code_?;
        uVar5 = *(byte *)(lVar8 + 0x28) - 1;
        if ((int)uVar5 < 0) {
          uVar5 = 0;
        }
        else if ((pLVar4->fields)._size < (int)uVar5) goto code_?;
        if ((uint)(pLVar4->fields)._size <= uVar5) goto code_?;
        pGVar6 = (pLVar4->fields)._items;
        if (pGVar6 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
        if ((uint)pGVar6->max_length <= uVar5) {
code_?:
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pGVar7 = pGVar6->vector[(int)uVar5].disabledBarTextBubble;
        if (pGVar7 == (GamePassesTextBubble *)0x0) goto code_?;
        GamePassesTextBubble::GamePassesTextBubble_Activate
                  (pGVar7,StringLiteral_Progression_is_disabled_in_stand,(MethodInfo *)0x0);
        pLVar4 = (this->fields).tierProgressDataList;
        if (pLVar4 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
        goto code_?;
        if ((uint)(pLVar4->fields)._size <= uVar5) goto code_?;
        pGVar6 = (pLVar4->fields)._items;
        if (pGVar6 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
        if ((uint)pGVar6->max_length <= uVar5) goto code_?;
        pGVar7 = pGVar6->vector[(int)uVar5].progressBarTextBubble;
        textBubbleText = StringLiteral_Progression_is_disabled_in_stand;
      }
      else {
        if ((this->fields).hideSignUp != 0) {
          return;
        }
        pLVar4 = (this->fields).tierProgressDataList;
        if (pLVar4 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
        goto code_?;
        if ((pLVar4->fields)._size == 0) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pGVar6 = (pLVar4->fields)._items;
        if (pGVar6 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
        if ((int)pGVar6->max_length == 0) goto code_?;
        pGVar7 = pGVar6->vector[0].disabledBarTextBubble;
        if (pGVar7 == (GamePassesTextBubble *)0x0) goto code_?;
        GamePassesTextBubble::GamePassesTextBubble_Activate
                  (pGVar7,StringLiteral_Sign_up_to_be_able_to_save_progr,(MethodInfo *)0x0);
        pLVar4 = (this->fields).tierProgressDataList;
        if (pLVar4 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
        goto code_?;
        if ((pLVar4->fields)._size == 0) goto code_?;
        pGVar6 = (pLVar4->fields)._items;
        if (pGVar6 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
        if ((int)pGVar6->max_length == 0) goto code_?;
        pGVar7 = pGVar6->vector[0].progressBarTextBubble;
        textBubbleText = StringLiteral_Sign_up_to_be_able_to_save_progr;
      }
    }
    if (pGVar7 == (GamePassesTextBubble *)0x0) {
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    GamePassesTextBubble::GamePassesTextBubble_Activate(pGVar7,textBubbleText,(MethodInfo *)0x0);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_Update
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).shouldInterpolate == 0) {
    return;
  }
  barIndex = FUN_?();
  value = _UNK_?;
  pLVar1 = (this->fields).tierProgressDataList;
  if (pLVar1 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto DAT_?;
  if ((int)barIndex < 0) {
    barIndex = 0;
  }
  else {
    uVar2 = (pLVar1->fields)._size - 1;
    if ((int)uVar2 < (int)barIndex) {
      barIndex = uVar2;
    }
  }
  fVar3 = (this->fields).previousProgressValue;
  fVar4 = (this->fields).interpolateTowardsProgressValue - (float)(int)barIndex;
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  else if (_UNK_? < fVar4) {
    fVar4 = _UNK_?;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(), pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  fVar7 = (float)(*pcRam_?)();
  fVar3 = fVar3 - (float)(int)barIndex;
  fVar3 = (fVar7 - (this->fields).interpolationStartTime) * _UNK_? * (fVar4 - fVar3) +
           fVar3;
  if ((this->fields).interpolateTowardsProgressValue - (float)(int)barIndex < fVar3) {
    (this->fields).shouldInterpolate = 0;
    fVar3 = (this->fields).interpolateTowardsProgressValue - (float)(int)barIndex;
  }
  if (value <= fVar3) {
    pLVar1 = (this->fields).tierProgressDataList;
    if (pLVar1 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto DAT_?;
    if ((uint)(pLVar1->fields)._size <= barIndex) goto code_?;
    pGVar8 = (pLVar1->fields)._items;
    if (pGVar8 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto DAT_?;
    if ((uint)pGVar8->max_length <= barIndex) goto code_?;
    pGVar9 = pGVar8->vector[(int)barIndex].avatarHeadUI;
    if (pGVar9 == (GameObject *)0x0) goto DAT_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar9,0,(MethodInfo *)0x0);
    pLVar1 = (this->fields).tierProgressDataList;
    if (pLVar1 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto DAT_?;
    if ((uint)(pLVar1->fields)._size <= barIndex) goto code_?;
    pGVar8 = (pLVar1->fields)._items;
    if (pGVar8 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto DAT_?;
    if ((uint)pGVar8->max_length <= barIndex) goto code_?;
    pGVar9 = pGVar8->vector[(int)barIndex].progressDivider;
    if (pGVar9 == (GameObject *)0x0) goto DAT_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar9,0,(MethodInfo *)0x0);
    pLVar1 = (this->fields).tierProgressDataList;
    if (pLVar1 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto DAT_?;
    if ((uint)(pLVar1->fields)._size <= barIndex) goto code_?;
    pGVar8 = (pLVar1->fields)._items;
    if (pGVar8 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto DAT_?;
    if ((uint)pGVar8->max_length <= barIndex) goto code_?;
    pGVar9 = pGVar8->vector[(int)barIndex].disabledProgressDivider;
    if (pGVar9 == (GameObject *)0x0) goto DAT_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar9,0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GameTierProgressBar___ScaleAndFadeLockForTier_d__45);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    routine = (IEnumerator *)
              FUN_?(TypeInfo__GameTierProgressBar___ScaleAndFadeLockForTier_d__45);
    bVar10 = iRam_? != 0;
    *(undefined4 *)&routine[1].klass = 0;
    routine[2].klass = (IEnumerator__Class *)this;
    if (bVar10) {
      uVar2 = (uint)((ulonglong)(routine + 2) >> 0xc);
      uVar11 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar12 == *puVar13;
        if (bVar10) {
          *puVar13 = uVar12 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    *(uint *)&routine[2].monitor = barIndex;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
    GameTierProgressBar_ActivateBar(this,barIndex,(MethodInfo *)0x0);
    pcVar5 = pcRam_?;
    uVar2 = barIndex + 1;
    (this->fields).previousProgressValue = (float)(int)uVar2;
    pcVar14 = pcRam_?;
    if ((pcVar5 == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(), pcVar14 = pcVar5, pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar14;
    fVar4 = (float)(*pcVar5)();
    pLVar1 = (this->fields).tierProgressDataList;
    (this->fields).interpolationStartTime = fVar4;
    if (pLVar1 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto DAT_?;
    uVar15 = (pLVar1->fields)._size;
    if ((int)uVar2 < (int)uVar15) {
      if (uVar15 <= uVar2) goto code_?;
      pGVar8 = (pLVar1->fields)._items;
      if (pGVar8 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto DAT_?;
      if ((uint)pGVar8->max_length <= barIndex + 1) goto code_?;
      pGVar9 = pGVar8->vector[(longlong)(int)barIndex + 1].avatarHeadUI;
      if (pGVar9 == (GameObject *)0x0) goto DAT_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar9,1,(MethodInfo *)0x0);
      pLVar1 = (this->fields).tierProgressDataList;
      if (pLVar1 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto DAT_?;
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pGVar8 = (pLVar1->fields)._items;
      if (pGVar8 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto DAT_?;
      if ((uint)pGVar8->max_length <= uVar2) goto code_?;
      pGVar9 = pGVar8->vector[(longlong)(int)barIndex + 1].progressDivider;
      if (pGVar9 == (GameObject *)0x0) goto DAT_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar9,1,(MethodInfo *)0x0);
      pLVar1 = (this->fields).tierProgressDataList;
      if (pLVar1 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto DAT_?;
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pGVar8 = (pLVar1->fields)._items;
      if (pGVar8 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto DAT_?;
      if ((uint)pGVar8->max_length <= uVar2) goto code_?;
      pGVar9 = pGVar8->vector[(int)uVar2].disabledProgressDivider;
      if (pGVar9 == (GameObject *)0x0) goto DAT_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar9,1,(MethodInfo *)0x0);
    }
  }
  pLVar1 = (this->fields).tierProgressDataList;
  if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= barIndex) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pGVar8 = (pLVar1->fields)._items;
    if (pGVar8 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
      if ((uint)pGVar8->max_length <= barIndex) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pPVar16 = pGVar8->vector[(int)barIndex].progressBar;
      if (pPVar16 != (ProgressBar *)0x0) {
        if (fVar3 < 0.0) {
          fVar4 = 0.0;
        }
        else {
          fVar4 = value;
          if (fVar3 <= value) {
            fVar4 = fVar3;
          }
        }
        (pPVar16->fields).progress = fVar4;
        pSVar17 = (pPVar16->fields).progressBar;
        if (pSVar17 != (Scrollbar *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                    (pSVar17,fVar4,(MethodInfo *)0x0);
          pLVar1 = (this->fields).tierProgressDataList;
          if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            if ((uint)(pLVar1->fields)._size <= barIndex) goto code_?;
            pGVar8 = (pLVar1->fields)._items;
            if (pGVar8 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
              if ((uint)pGVar8->max_length <= barIndex) goto code_?;
              pPVar16 = pGVar8->vector[(int)barIndex].disabledProgressBar;
              if (pPVar16 != (ProgressBar *)0x0) {
                if (fVar3 < 0.0) {
                  value = 0.0;
                }
                else if (fVar3 <= value) {
                  value = fVar3;
                }
                (pPVar16->fields).progress = value;
                pSVar17 = (pPVar16->fields).progressBar;
                if (pSVar17 != (Scrollbar *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                            (pSVar17,value,(MethodInfo *)0x0);
                  GameTierProgressBar_UpdateProgressText
                            (this,(float)(int)barIndex + fVar3,barIndex + GamePassTier__Enum_Tier1,
                             (MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateDividerVisibility(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_UpdateDividerVisibility
               (GameTierProgressBar *this,int32_t playerGamePoints,MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
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
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return;
  }
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
      fVar3 = _UNK_?;
      bVar4 = false;
      uVar5 = 0;
      bVar2 = 1;
      do {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        BVar6 = bVar2 - 1;
        iVar7 = playerGamePoints;
        if (0 < (int)BVar6) {
          if (this_01 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) break;
          do {
            pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,BVar6 & 0xff,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar8 == (Object *)0x0) goto DAT_?;
            iVar7 = iVar7 - *(int *)&pOVar8[2].klass;
            BVar6 = BVar6 - 1;
          } while (0 < (int)BVar6);
        }
        if ((this_01 ==
             (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
             0x0) || (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               ByteEnum,System::Object]::
                               Dictionary_2_System_ByteEnum_System_Object__get_Item
                                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                          (uint)bVar2,
                                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                         ), pOVar8 == (Object *)0x0)) break;
        fVar9 = (float)iVar7 / (float)*(int *)&pOVar8[2].klass;
        if ((fVar3 <= fVar9) ||
           ((((fVar3 <= fVar9 || (fVar9 <= 0.0)) || (bVar4)) ||
            (bVar10 = GameTierProgressBar_IsProgressBarEnabled(this,(MethodInfo *)0x0), bVar10 == 0)))
           ) {
          pLVar11 = (this->fields).tierProgressDataList;
          if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
          if ((uint)(pLVar11->fields)._size <= uVar5) goto code_?;
          if (((pLVar11->fields)._items == (GameTierProgressBar_TierProgressData__Array *)0x0) ||
             (FUN_?(), pGStack_12 == (GameObject *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGStack_12,0,(MethodInfo *)0x0);
          pLVar11 = (this->fields).tierProgressDataList;
          if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
          if ((uint)(pLVar11->fields)._size <= uVar5) goto code_?;
          if (((pLVar11->fields)._items == (GameTierProgressBar_TierProgressData__Array *)0x0) ||
             (FUN_?(), pGStack_13 == (GameObject *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGStack_13,0,(MethodInfo *)0x0);
          pLVar11 = (this->fields).tierProgressDataList;
          if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
          if ((uint)(pLVar11->fields)._size <= uVar5) goto code_?;
          if (((pLVar11->fields)._items == (GameTierProgressBar_TierProgressData__Array *)0x0) ||
             (FUN_?(), pGStack_14 == (GameObject *)0x0)) break;
          bVar10 = 0;
        }
        else {
          pLVar11 = (this->fields).tierProgressDataList;
          bVar4 = true;
          if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
          if ((uint)(pLVar11->fields)._size <= uVar5) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pGVar16 = (pLVar11->fields)._items;
          if ((pGVar16 == (GameTierProgressBar_TierProgressData__Array *)0x0) ||
             (FUN_?(pGVar16,auStack_17), pGStack_12 == (GameObject *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGStack_12,1,(MethodInfo *)0x0);
          pLVar11 = (this->fields).tierProgressDataList;
          if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
          if ((uint)(pLVar11->fields)._size <= uVar5) goto code_?;
          pGVar16 = (pLVar11->fields)._items;
          if ((pGVar16 == (GameTierProgressBar_TierProgressData__Array *)0x0) ||
             (FUN_?(pGVar16,auStack_17), pGStack_13 == (GameObject *)0x0)) break;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGStack_13,1,(MethodInfo *)0x0);
          pLVar11 = (this->fields).tierProgressDataList;
          if (pLVar11 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) break;
          if ((uint)(pLVar11->fields)._size <= uVar5) goto code_?;
          pGVar16 = (pLVar11->fields)._items;
          if ((pGVar16 == (GameTierProgressBar_TierProgressData__Array *)0x0) ||
             (FUN_?(pGVar16,auStack_17), pGStack_14 == (GameObject *)0x0)) break;
          bVar10 = 1;
        }
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGStack_14,bVar10,(MethodInfo *)0x0);
        bVar2 = bVar2 + 1;
        uVar5 = uVar5 + 1;
        if (2 < (int)uVar5) {
          return;
        }
      } while( true );
    }
  }
DAT_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void UpdateEditModeDisabledProgressBars() */

void Assembly-CSharp.dll::GameTierProgressBar::
     GameTierProgressBar_UpdateEditModeDisabledProgressBars
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    barIndex = 2;
    bVar2 = (pPVar1->fields).gamePassTier;
    do {
      if ((int)(bVar2 - 1) < barIndex) {
        GameTierProgressBar_DeactivateBar(this,barIndex,(MethodInfo *)0x0);
      }
      else {
        GameTierProgressBar_ActivateBar(this,barIndex,(MethodInfo *)0x0);
      }
      barIndex = barIndex + -1;
    } while (-1 < barIndex);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateProgressBar(GamePassTier, Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_UpdateProgressBar
               (GameTierProgressBar *this,GamePassTier__Enum progressBarToUpdate,
               int32_t playerGamePoints,MethodInfo *method)

{
  uVar1 = (ulonglong)(byte)progressBarToUpdate;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
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
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    pLVar2 = (this->fields).tierProgressDataList;
    if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
      if ((uint)(pLVar2->fields)._size <= (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
      goto code_?;
      pGVar3 = (pLVar2->fields)._items;
      if (pGVar3 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
        if ((uint)pGVar3->max_length <= (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
        goto code_?;
        lVar4 = *(longlong *)((longlong)pGVar3 + (uVar1 - 1) * 0x90 + 0x20);
        if (lVar4 != 0) {
          *(undefined4 *)(lVar4 + 0x28) = 0;
          if (*(Scrollbar **)(lVar4 + 0x20) != (Scrollbar *)0x0) {
            UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                      (*(Scrollbar **)(lVar4 + 0x20),0.0,(MethodInfo *)0x0);
            pLVar2 = (this->fields).tierProgressDataList;
            if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              if ((uint)(pLVar2->fields)._size <=
                  (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
              goto code_?;
              pGVar3 = (pLVar2->fields)._items;
              if (pGVar3 == (GameTierProgressBar_TierProgressData__Array *)0x0)
              goto code_?;
              if ((uint)pGVar3->max_length <=
                  (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
              goto code_?;
              plVar5 = *(longlong **)((longlong)pGVar3 + (uVar1 - 1) * 0x90 + 0x28);
              if (plVar5 != (longlong *)0x0) {
                (**(code **)(*plVar5 + 0x5e8))(plVar5,::StringLiteral__);
                pLVar2 = (this->fields).tierProgressDataList;
                if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                  if ((uint)(pLVar2->fields)._size <=
                      (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
                  goto code_?;
                  pGVar3 = (pLVar2->fields)._items;
                  if (pGVar3 == (GameTierProgressBar_TierProgressData__Array *)0x0)
                  goto code_?;
                  if ((uint)pGVar3->max_length <=
                      (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
                  goto code_?;
                  pPVar6 = pGVar3->vector[uVar1 - 1].disabledProgressBar;
                  if (pPVar6 != (ProgressBar *)0x0) {
                    pSVar7 = (pPVar6->fields).progressBar;
                    (pPVar6->fields).progress = 0.0;
                    if (pSVar7 != (Scrollbar *)0x0) {
                      UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                                (pSVar7,0.0,(MethodInfo *)0x0);
                      bVar8 = GameTierProgressBar_IsTierUnlocked
                                         (this,progressBarToUpdate & 0xff,(MethodInfo *)0x0);
                      GameTierProgressBar_SetLockedStateForTier
                                (this,(progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1,bVar8
                                 ,(MethodInfo *)0x0);
                      if (bVar8 == 0) {
                        return;
                      }
                      pLVar2 = (this->fields).tierProgressDataList;
                      if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                        if ((uint)(pLVar2->fields)._size <=
                            (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
                        goto code_?;
                        pGVar3 = (pLVar2->fields)._items;
                        if (pGVar3 == (GameTierProgressBar_TierProgressData__Array *)0x0)
                        goto code_?;
                        if ((uint)pGVar3->max_length <=
                            (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
                        goto code_?;
                        pPVar6 = pGVar3->vector[uVar1 - 1].disabledProgressBar;
                        if (pPVar6 != (ProgressBar *)0x0) {
                          pSVar7 = (pPVar6->fields).progressBar;
                          (pPVar6->fields).progress = 1.0;
                          fVar9 = _UNK_?;
                          if (pSVar7 != (Scrollbar *)0x0) {
                            UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                                      (pSVar7,_UNK_?,(MethodInfo *)0x0);
                            pLVar2 = (this->fields).tierProgressDataList;
                            if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                              if ((uint)(pLVar2->fields)._size <=
                                  (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
                              goto code_?;
                              pGVar3 = (pLVar2->fields)._items;
                              if (pGVar3 == (GameTierProgressBar_TierProgressData__Array *)0x0)
                              goto code_?;
                              if ((uint)pGVar3->max_length <=
                                  (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
                              goto code_?;
                              lVar4 = *(longlong *)((longlong)pGVar3 + (uVar1 - 1) * 0x90 + 0x20);
                              if (lVar4 != 0) {
                                *(undefined4 *)(lVar4 + 0x28) = 0x3f800000;
                                if (*(Scrollbar **)(lVar4 + 0x20) != (Scrollbar *)0x0) {
                                  UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                                            (*(Scrollbar **)(lVar4 + 0x20),fVar9,(MethodInfo *)0x0)
                                  ;
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
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar10 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar10 != (PlayerPlanetData *)0x0) {
      this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      bVar11 = (pPVar10->fields).gamePassTier;
      if (this_00 != (PlayerTierStateCalculator *)0x0) {
        if ((this_00->fields).gamePointVelocityIsZero == 0) {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                              (this_00,playerGamePoints,(uint)bVar11,(MethodInfo *)0x0);
        }
        else {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                              (this_00,(uint)bVar11,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        BVar12 = (progressBarToUpdate & 0xff) - 1;
        if ((int)BVar12 < 1) {
          if (this_01 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) goto code_?;
        }
        else {
          if (this_01 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) goto code_?;
          do {
            pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                 BVar12 & 0xff,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                );
            if (pOVar13 == (Object *)0x0) goto code_?;
            playerGamePoints = playerGamePoints - *(int *)&pOVar13[2].klass;
            BVar12 = BVar12 - 1;
          } while (0 < (int)BVar12);
        }
        pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                             progressBarToUpdate & 0xff,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                            );
        if (pOVar13 != (Object *)0x0) {
          iVar14 = *(int *)&pOVar13[2].klass;
          aIStack_15[0].m_value = iVar14;
          bVar8 = GameTierProgressBar_IsTierUnlocked
                             (this,progressBarToUpdate & 0xff,(MethodInfo *)0x0);
          if (iVar14 < 1) {
            pLVar2 = (this->fields).tierProgressDataList;
            if (bVar8 == 0) {
              if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                if ((uint)(pLVar2->fields)._size <=
                    (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
                goto code_?;
                pGVar3 = (pLVar2->fields)._items;
                if (pGVar3 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                  if ((uint)pGVar3->max_length <=
                      (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
                  goto code_?;
                  pPVar6 = pGVar3->vector[uVar1 - 1].disabledProgressBar;
                  if (pPVar6 != (ProgressBar *)0x0) {
                    pSVar7 = (pPVar6->fields).progressBar;
                    (pPVar6->fields).progress = 0.0;
                    if (pSVar7 != (Scrollbar *)0x0) {
                      UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                                (pSVar7,0.0,(MethodInfo *)0x0);
                      pLVar2 = (this->fields).tierProgressDataList;
                      if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                        if ((uint)(pLVar2->fields)._size <=
                            (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
                        goto code_?;
                        pGVar3 = (pLVar2->fields)._items;
                        if (pGVar3 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                          if ((uint)pGVar3->max_length <=
                              (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
                          goto code_?;
                          lVar4 = *(longlong *)((longlong)pGVar3 + (uVar1 - 1) * 0x90 + 0x20);
                          if (lVar4 != 0) {
                            *(undefined4 *)(lVar4 + 0x28) = 0;
                            if (*(Scrollbar **)(lVar4 + 0x20) != (Scrollbar *)0x0) {
                              UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                                        (*(Scrollbar **)(lVar4 + 0x20),0.0,(MethodInfo *)0x0);
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
            else if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              if ((uint)(pLVar2->fields)._size <=
                  (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1) {
code_?:
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              pGVar3 = (pLVar2->fields)._items;
              if (pGVar3 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                if ((uint)pGVar3->max_length <=
                    (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
                goto code_?;
                pPVar6 = pGVar3->vector[uVar1 - 1].disabledProgressBar;
                if (pPVar6 != (ProgressBar *)0x0) {
                  pSVar7 = (pPVar6->fields).progressBar;
                  (pPVar6->fields).progress = 1.0;
                  fVar9 = _UNK_?;
                  if (pSVar7 != (Scrollbar *)0x0) {
                    UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                              (pSVar7,_UNK_?,(MethodInfo *)0x0);
                    pLVar2 = (this->fields).tierProgressDataList;
                    if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                      if ((uint)(pLVar2->fields)._size <=
                          (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
                      goto code_?;
                      pGVar3 = (pLVar2->fields)._items;
                      if (pGVar3 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                        if ((uint)pGVar3->max_length <=
                            (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
                        goto code_?;
                        lVar4 = *(longlong *)((longlong)pGVar3 + (uVar1 - 1) * 0x90 + 0x20);
                        if (lVar4 != 0) {
                          *(undefined4 *)(lVar4 + 0x28) = 0x3f800000;
                          if (*(Scrollbar **)(lVar4 + 0x20) != (Scrollbar *)0x0) {
                            UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                                      (*(Scrollbar **)(lVar4 + 0x20),fVar9,(MethodInfo *)0x0);
                            GameTierProgressBar_SetLockedStateForTier
                                      (this,(progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1,
                                       bVar8,(MethodInfo *)0x0);
code_?:
                            GameTierProgressBar_ActivateBar
                                      (this,(progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1,
                                       (MethodInfo *)0x0);
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
          else {
            IStack_17.m_value = playerGamePoints;
            if (iVar14 < playerGamePoints) {
              IStack_17.m_value = iVar14;
            }
            fVar9 = (float)playerGamePoints / (float)iVar14;
            if (IStack_17.m_value < 0) {
              IStack_17.m_value = 0;
            }
            pSVar18 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_17,(MethodInfo *)0x0);
            str2 = mscorlib.dll::System::Int32::Int32_ToString(aIStack_15,(MethodInfo *)0x0);
            pSVar18 = mscorlib.dll::System::String::String_Concat_5
                                (pSVar18,::StringLiteral____,str2,(MethodInfo *)0x0);
            fVar19 = _UNK_?;
            pLVar2 = (this->fields).tierProgressDataList;
            if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
              if ((uint)(pLVar2->fields)._size <=
                  (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
              goto code_?;
              pGVar3 = (pLVar2->fields)._items;
              if (pGVar3 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                if ((uint)pGVar3->max_length <=
                    (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
                goto code_?;
                lVar4 = *(longlong *)((longlong)pGVar3 + (uVar1 - 1) * 0x90 + 0x20);
                if (lVar4 != 0) {
                  if (fVar9 < 0.0) {
                    fVar20 = 0.0;
                  }
                  else {
                    fVar20 = _UNK_?;
                    if (fVar9 <= _UNK_?) {
                      fVar20 = fVar9;
                    }
                  }
                  *(float *)(lVar4 + 0x28) = fVar20;
                  if (*(Scrollbar **)(lVar4 + 0x20) != (Scrollbar *)0x0) {
                    UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                              (*(Scrollbar **)(lVar4 + 0x20),fVar20,(MethodInfo *)0x0);
                    pLVar2 = (this->fields).tierProgressDataList;
                    if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                      if ((uint)(pLVar2->fields)._size <=
                          (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
                      goto code_?;
                      pGVar3 = (pLVar2->fields)._items;
                      if (pGVar3 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                        if ((uint)pGVar3->max_length <=
                            (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1) {
code_?:
                          FUN_?();
                          pcVar16 = (code *)swi(3);
                          (*pcVar16)();
                          return;
                        }
                        plVar5 = *(longlong **)((longlong)pGVar3 + (uVar1 - 1) * 0x90 + 0x28);
                        if (plVar5 != (longlong *)0x0) {
                          (**(code **)(*plVar5 + 0x5e8))(plVar5,pSVar18);
                          pLVar2 = (this->fields).tierProgressDataList;
                          if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                            if ((uint)(pLVar2->fields)._size <=
                                (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
                            goto code_?;
                            pGVar3 = (pLVar2->fields)._items;
                            if (pGVar3 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                              if ((uint)pGVar3->max_length <=
                                  (progressBarToUpdate & 0xff) - GamePassTier__Enum_Tier1)
                              goto code_?;
                              pPVar6 = pGVar3->vector[uVar1 - 1].disabledProgressBar;
                              if (pPVar6 != (ProgressBar *)0x0) {
                                fVar20 = 0.0;
                                if ((0.0 <= fVar9) && (fVar20 = fVar19, fVar9 <= fVar19)) {
                                  fVar20 = fVar9;
                                }
                                pSVar7 = (pPVar6->fields).progressBar;
                                (pPVar6->fields).progress = fVar20;
                                if (pSVar7 != (Scrollbar *)0x0) {
                                  UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                                            (pSVar7,fVar20,(MethodInfo *)0x0);
                                  GameTierProgressBar_SetLockedStateForTier
                                            (this,(progressBarToUpdate & 0xff) -
                                                  GamePassTier__Enum_Tier1,bVar8,(MethodInfo *)0x0)
                                  ;
                                  if (fVar9 < fVar19) {
                                    return;
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
      }
    }
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void UpdateProgressBars(Int32) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_UpdateProgressBars
               (GameTierProgressBar *this,int32_t playerGamePoints,MethodInfo *method)

{
  uVar1 = (ulonglong)(uint)playerGamePoints;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar2 = CONCAT71((int7)(uVar1 >> 8),1);
  GameTierProgressBar_UpdateProgressBar
            (this,(GamePassTier__Enum)uVar2,playerGamePoints,(MethodInfo *)0x0);
  uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
  GameTierProgressBar_UpdateProgressBar
            (this,(GamePassTier__Enum)uVar2,playerGamePoints,(MethodInfo *)0x0);
  GameTierProgressBar_UpdateProgressBar
            (this,(GamePassTier__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),3),playerGamePoints,
             (MethodInfo *)0x0);
  pLVar3 = (this->fields).gameMeterVisualEffects;
  uVar4 = 0;
  if (pLVar3 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) {
    lVar5 = 0x20;
    do {
      if ((pLVar3->fields)._size <= (int)uVar4) {
        return;
      }
      if (pLVar3 == (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0) break;
      if ((uint)(pLVar3->fields)._size <= uVar4) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pGVar7 = (pLVar3->fields)._items;
      if (pGVar7 == (GameMeterVisualEffect__Array *)0x0) break;
      if ((uint)pGVar7->max_length <= uVar4) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar8 = *(longlong **)((longlong)pGVar7->vector + lVar5 + -0x20);
      if (plVar8 == (longlong *)0x0) break;
      (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
      pLVar3 = (this->fields).gameMeterVisualEffects;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (pLVar3 != (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)0x0);
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateProgressText(Single, GamePassTier) */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_UpdateProgressText
               (GameTierProgressBar *this,float totalProgress,GamePassTier__Enum currentTier,
               MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = GameTierProgressBar_CalculateGamePointsFromTierProgress
                    (this,totalProgress,currentTier & 0xff,(MethodInfo *)0x0);
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
      this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      bVar3 = (pPVar1->fields).gamePassTier;
      if (this_00 != (PlayerTierStateCalculator *)0x0) {
        if ((this_00->fields).gamePointVelocityIsZero == 0) {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                              (this_00,iVar2,(uint)bVar3,(MethodInfo *)0x0);
        }
        else {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                              (this_00,(uint)bVar3,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        iVar4 = (int)((ulonglong)currentTier & 0xff);
        BVar5 = iVar4 - 1;
        if ((int)BVar5 < 1) {
          if (this_01 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) goto code_?;
        }
        else {
          if (this_01 ==
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) goto code_?;
          do {
            pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,BVar5 & 0xff
                                ,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
            if (pOVar6 == (Object *)0x0) goto code_?;
            value = value - *(int *)&pOVar6[2].klass;
            BVar5 = BVar5 - 1;
          } while (0 < (int)BVar5);
        }
        pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                            currentTier & 0xff,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                           );
        if (pOVar6 != (Object *)0x0) {
          iVar2 = *(int32_t *)&pOVar6[2].klass;
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
          aRStack_7[0]._pointer._value = (void *)0x0;
          aRStack_7[0]._length = 0;
          aRStack_7[0]._12_4_ = 0;
          pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                              (value,aRStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
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
          aRStack_7[0]._pointer._value = (void *)0x0;
          aRStack_7[0]._length = 0;
          aRStack_7[0]._12_4_ = 0;
          str2 = mscorlib.dll::System::Number::Number_FormatInt32
                           (iVar2,aRStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
          pSVar8 = mscorlib.dll::System::String::String_Concat_5
                              (pSVar8,::StringLiteral____,str2,(MethodInfo *)0x0);
          pLVar9 = (this->fields).tierProgressDataList;
          if (pLVar9 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            if ((uint)(pLVar9->fields)._size <= iVar4 - 1U) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pGVar11 = (pLVar9->fields)._items;
            if (pGVar11 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
              if ((uint)pGVar11->max_length <= iVar4 - 1U) {
                FUN_?();
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              plVar12 = *(longlong **)
                        ((longlong)pGVar11 + (((ulonglong)currentTier & 0xff) - 1) * 0x90 + 0x28);
              if (plVar12 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar12 + 0x5e8))(plVar12,pSVar8,*(undefined8 *)(*plVar12 + 0x5f0));
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateTempProgressVisibility() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_UpdateTempProgressVisibility
               (GameTierProgressBar *this,MethodInfo *method)

{
  uVar1 = CONCAT71((int7)((ulonglong)method >> 8),1);
  hasTempTeir = GameTierProgressBar_HasTempTier(this,(GamePassTier__Enum)uVar1,(MethodInfo *)0x0);
  uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
  hasTempTeir_00 = GameTierProgressBar_HasTempTier(this,(GamePassTier__Enum)uVar1,(MethodInfo *)0x0)
  ;
  value = GameTierProgressBar_HasTempTier
                    (this,(GamePassTier__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),3),
                     (MethodInfo *)0x0);
  GameTierProgressBar_UpdateTempProgressVisibilityForTier(this,0,hasTempTeir,(MethodInfo *)0x0);
  GameTierProgressBar_UpdateTempProgressVisibilityForTier(this,1,hasTempTeir_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                  ,2,value,0);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).tierProgressDataList;
  if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    if ((uint)(pLVar2->fields)._size < 3) goto code_?;
    pGVar3 = (pLVar2->fields)._items;
    if (pGVar3 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
      if ((uint)pGVar3->max_length < 3) goto code_?;
      pGVar4 = pGVar3->vector[2].tempProgress;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
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
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar4 != (GameObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar4->fields)._.m_CachedPtr != (void *)0x0) {
          pLVar2 = (this->fields).tierProgressDataList;
          if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
          goto code_?;
          if ((uint)(pLVar2->fields)._size < 3) goto code_?;
          pGVar3 = (pLVar2->fields)._items;
          if (pGVar3 == (GameTierProgressBar_TierProgressData__Array *)0x0)
          goto code_?;
          if ((uint)pGVar3->max_length < 3) goto code_?;
          pGVar4 = pGVar3->vector[2].tempProgress;
          if (pGVar4 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar4,value,(MethodInfo *)0x0);
        }
      }
      pLVar2 = (this->fields).tierProgressDataList;
      if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
        if ((uint)(pLVar2->fields)._size < 3) goto code_?;
        pGVar3 = (pLVar2->fields)._items;
        if (pGVar3 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
          if ((uint)pGVar3->max_length < 3) goto code_?;
          pGVar4 = pGVar3->vector[2].disabledTempProgress;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
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
          if (cRam_? == '\0') {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pGVar4 != (GameObject *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pGVar4->fields)._.m_CachedPtr != (void *)0x0) {
              pLVar2 = (this->fields).tierProgressDataList;
              if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
              goto code_?;
              if ((uint)(pLVar2->fields)._size < 3) goto code_?;
              pGVar3 = (pLVar2->fields)._items;
              if (pGVar3 == (GameTierProgressBar_TierProgressData__Array *)0x0)
              goto code_?;
              if ((uint)pGVar3->max_length < 3) goto code_?;
              pGVar4 = pGVar3->vector[2].disabledTempProgress;
              if (pGVar4 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,value,(MethodInfo *)0x0);
            }
          }
          pLVar2 = (this->fields).tierProgressDataList;
          if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            if ((uint)(pLVar2->fields)._size < 3) goto code_?;
            pGVar3 = (pLVar2->fields)._items;
            if (pGVar3 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
              if ((uint)pGVar3->max_length < 3) goto code_?;
              pGVar4 = pGVar3->vector[2].tierIconTempUnlock;
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
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
              if (cRam_? == '\0') {
                FUN_?();
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pGVar4 != (GameObject *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if ((pGVar4->fields)._.m_CachedPtr != (void *)0x0) {
                  pLVar2 = (this->fields).tierProgressDataList;
                  if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
                  goto code_?;
                  if ((uint)(pLVar2->fields)._size < 3) goto code_?;
                  pGVar3 = (pLVar2->fields)._items;
                  if (pGVar3 == (GameTierProgressBar_TierProgressData__Array *)0x0)
                  goto code_?;
                  if ((uint)pGVar3->max_length < 3) goto code_?;
                  pGVar4 = pGVar3->vector[2].tierIconTempUnlock;
                  if (pGVar4 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar4,value,(MethodInfo *)0x0);
                }
              }
              pLVar2 = (this->fields).tierProgressDataList;
              if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                if ((uint)(pLVar2->fields)._size < 3) goto code_?;
                pGVar3 = (pLVar2->fields)._items;
                if (pGVar3 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                  if ((uint)pGVar3->max_length < 3) goto code_?;
                  pGVar4 = pGVar3->vector[2].tierIconNumber;
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
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
                  if (cRam_? == '\0') {
                    FUN_?();
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (pGVar4 != (GameObject *)0x0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if ((pGVar4->fields)._.m_CachedPtr != (void *)0x0) {
                      pLVar2 = (this->fields).tierProgressDataList;
                      if (pLVar2 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
                      goto code_?;
                      if ((uint)(pLVar2->fields)._size < 3) goto code_?;
                      pGVar3 = (pLVar2->fields)._items;
                      if (pGVar3 == (GameTierProgressBar_TierProgressData__Array *)0x0)
                      goto code_?;
                      if ((uint)pGVar3->max_length < 3) goto code_?;
                      pGVar4 = pGVar3->vector[2].tierIconNumber;
                      if (pGVar4 == (GameObject *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar4,value ^ 1,(MethodInfo *)0x0);
                    }
                  }
                  pLVar2 = (this->fields).tierProgressDataList;
                  if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                    if ((uint)(pLVar2->fields)._size < 3) goto code_?;
                    pGVar3 = (pLVar2->fields)._items;
                    if (pGVar3 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                      if ((uint)pGVar3->max_length < 3) goto code_?;
                      pCVar5 = pGVar3->vector[2].LockedTierIcon;
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
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
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Object);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (pCVar5 != (CanvasGroup *)0x0) {
                        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        if ((pCVar5->fields)._._._.m_CachedPtr != (void *)0x0) {
                          pLVar2 = (this->fields).tierProgressDataList;
                          if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                            if ((uint)(pLVar2->fields)._size < 3) {
code_?:
                              mscorlib.dll::System::ThrowHelper::
                              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                                        ((MethodInfo *)0x0);
                              pcVar6 = (code *)swi(3);
                              (*pcVar6)();
                              return;
                            }
                            pGVar3 = (pLVar2->fields)._items;
                            if (pGVar3 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                              if ((uint)pGVar3->max_length < 3) {
code_?:
                                FUN_?();
                                pcVar6 = (code *)swi(3);
                                (*pcVar6)();
                                return;
                              }
                              pCVar5 = pGVar3->vector[2].LockedTierIcon;
                              if (pCVar5 != (CanvasGroup *)0x0) {
                                pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_gameObject
                                                   ((Component *)pCVar5,(MethodInfo *)0x0);
                                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                                  FUN_?();
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
                                if (cRam_? == '\0') {
                                  FUN_?(&TypeInfo__UnityEngine__Object);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                if (pGVar4 == (GameObject *)0x0) {
                                  return;
                                }
                                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                if ((pGVar4->fields)._.m_CachedPtr == (void *)0x0) {
                                  return;
                                }
                                pLVar2 = (this->fields).tierProgressDataList;
                                if (pLVar2 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                                  if ((uint)(pLVar2->fields)._size < 3) goto code_?;
                                  pGVar3 = (pLVar2->fields)._items;
                                  if (pGVar3 != (GameTierProgressBar_TierProgressData__Array *)0x0)
                                  {
                                    if ((uint)pGVar3->max_length < 3) goto code_?;
                                    pCVar5 = pGVar3->vector[2].LockedTierIcon;
                                    if ((pCVar5 != (CanvasGroup *)0x0) &&
                                       (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component
                                                 ::Component_get_gameObject
                                                           ((Component *)pCVar5,(MethodInfo *)0x0),
                                       pGVar4 != (GameObject *)0x0)) {
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_SetActive(pGVar4,value ^ 1,(MethodInfo *)0x0);
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          goto code_?;
                        }
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
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateTempProgressVisibilityForTier(Int32, Boolean) */

void Assembly-CSharp.dll::GameTierProgressBar::
     GameTierProgressBar_UpdateTempProgressVisibilityForTier
               (GameTierProgressBar *this,int32_t index,bool hasTempTeir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).tierProgressDataList;
  if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
    if ((uint)(pLVar1->fields)._size <= (uint)index) goto code_?;
    pGVar2 = (pLVar1->fields)._items;
    if (pGVar2 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
      if ((uint)pGVar2->max_length <= (uint)index) goto code_?;
      pGVar3 = pGVar2->vector[index].tempProgress;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
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
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar3 != (GameObject *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar3->fields)._.m_CachedPtr != (void *)0x0) {
          pLVar1 = (this->fields).tierProgressDataList;
          if (pLVar1 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
          goto code_?;
          if ((uint)(pLVar1->fields)._size <= (uint)index) goto code_?;
          pGVar2 = (pLVar1->fields)._items;
          if (pGVar2 == (GameTierProgressBar_TierProgressData__Array *)0x0)
          goto code_?;
          if ((uint)pGVar2->max_length <= (uint)index) goto code_?;
          pGVar3 = pGVar2->vector[index].tempProgress;
          if (pGVar3 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar3,hasTempTeir,(MethodInfo *)0x0);
        }
      }
      pLVar1 = (this->fields).tierProgressDataList;
      if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
        if ((uint)(pLVar1->fields)._size <= (uint)index) goto code_?;
        pGVar2 = (pLVar1->fields)._items;
        if (pGVar2 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
          if ((uint)pGVar2->max_length <= (uint)index) goto code_?;
          pGVar3 = pGVar2->vector[index].disabledTempProgress;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
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
          if (cRam_? == '\0') {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pGVar3 != (GameObject *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pGVar3->fields)._.m_CachedPtr != (void *)0x0) {
              pLVar1 = (this->fields).tierProgressDataList;
              if (pLVar1 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
              goto code_?;
              if ((uint)(pLVar1->fields)._size <= (uint)index) goto code_?;
              pGVar2 = (pLVar1->fields)._items;
              if (pGVar2 == (GameTierProgressBar_TierProgressData__Array *)0x0)
              goto code_?;
              if ((uint)pGVar2->max_length <= (uint)index) goto code_?;
              pGVar3 = pGVar2->vector[index].disabledTempProgress;
              if (pGVar3 == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar3,hasTempTeir,(MethodInfo *)0x0);
            }
          }
          pLVar1 = (this->fields).tierProgressDataList;
          if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
            if ((uint)(pLVar1->fields)._size <= (uint)index) goto code_?;
            pGVar2 = (pLVar1->fields)._items;
            if (pGVar2 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
              if ((uint)pGVar2->max_length <= (uint)index) goto code_?;
              pGVar3 = pGVar2->vector[index].tierIconTempUnlock;
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
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
              if (cRam_? == '\0') {
                FUN_?();
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pGVar3 != (GameObject *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if ((pGVar3->fields)._.m_CachedPtr != (void *)0x0) {
                  pLVar1 = (this->fields).tierProgressDataList;
                  if (pLVar1 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
                  goto code_?;
                  if ((uint)(pLVar1->fields)._size <= (uint)index) goto code_?;
                  pGVar2 = (pLVar1->fields)._items;
                  if (pGVar2 == (GameTierProgressBar_TierProgressData__Array *)0x0)
                  goto code_?;
                  if ((uint)pGVar2->max_length <= (uint)index) goto code_?;
                  pGVar3 = pGVar2->vector[index].tierIconTempUnlock;
                  if (pGVar3 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar3,hasTempTeir,(MethodInfo *)0x0);
                }
              }
              pLVar1 = (this->fields).tierProgressDataList;
              if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                if ((uint)(pLVar1->fields)._size <= (uint)index) goto code_?;
                pGVar2 = (pLVar1->fields)._items;
                if (pGVar2 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                  if ((uint)pGVar2->max_length <= (uint)index) goto code_?;
                  pGVar3 = pGVar2->vector[index].tierIconNumber;
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
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
                  if (cRam_? == '\0') {
                    FUN_?();
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (pGVar3 != (GameObject *)0x0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if ((pGVar3->fields)._.m_CachedPtr != (void *)0x0) {
                      pLVar1 = (this->fields).tierProgressDataList;
                      if (pLVar1 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)
                      goto code_?;
                      if ((uint)(pLVar1->fields)._size <= (uint)index) goto code_?;
                      pGVar2 = (pLVar1->fields)._items;
                      if (pGVar2 == (GameTierProgressBar_TierProgressData__Array *)0x0)
                      goto code_?;
                      if ((uint)pGVar2->max_length <= (uint)index) goto code_?;
                      pGVar3 = pGVar2->vector[index].tierIconNumber;
                      if (pGVar3 == (GameObject *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar3,hasTempTeir ^ 1,(MethodInfo *)0x0);
                    }
                  }
                  pLVar1 = (this->fields).tierProgressDataList;
                  if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                    if ((uint)(pLVar1->fields)._size <= (uint)index) goto code_?;
                    pGVar2 = (pLVar1->fields)._items;
                    if (pGVar2 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                      if ((uint)pGVar2->max_length <= (uint)index) goto code_?;
                      pCVar4 = pGVar2->vector[index].LockedTierIcon;
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
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
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Object);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (pCVar4 != (CanvasGroup *)0x0) {
                        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        if ((pCVar4->fields)._._._.m_CachedPtr != (void *)0x0) {
                          pLVar1 = (this->fields).tierProgressDataList;
                          if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                            if ((uint)(pLVar1->fields)._size <= (uint)index) {
code_?:
                              mscorlib.dll::System::ThrowHelper::
                              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                                        ((MethodInfo *)0x0);
                              pcVar5 = (code *)swi(3);
                              (*pcVar5)();
                              return;
                            }
                            pGVar2 = (pLVar1->fields)._items;
                            if (pGVar2 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
                              if ((uint)pGVar2->max_length <= (uint)index) {
code_?:
                                FUN_?();
                                pcVar5 = (code *)swi(3);
                                (*pcVar5)();
                                return;
                              }
                              pCVar4 = pGVar2->vector[index].LockedTierIcon;
                              if (pCVar4 != (CanvasGroup *)0x0) {
                                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                         Component_get_gameObject
                                                   ((Component *)pCVar4,(MethodInfo *)0x0);
                                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                                  FUN_?();
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
                                if (cRam_? == '\0') {
                                  FUN_?(&TypeInfo__UnityEngine__Object);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                if (pGVar3 == (GameObject *)0x0) {
                                  return;
                                }
                                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                                  FUN_?();
                                }
                                if ((pGVar3->fields)._.m_CachedPtr == (void *)0x0) {
                                  return;
                                }
                                pLVar1 = (this->fields).tierProgressDataList;
                                if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
                                  if ((uint)(pLVar1->fields)._size <= (uint)index)
                                  goto code_?;
                                  pGVar2 = (pLVar1->fields)._items;
                                  if (pGVar2 != (GameTierProgressBar_TierProgressData__Array *)0x0)
                                  {
                                    if ((uint)pGVar2->max_length <= (uint)index)
                                    goto code_?;
                                    pCVar4 = pGVar2->vector[index].LockedTierIcon;
                                    if ((pCVar4 != (CanvasGroup *)0x0) &&
                                       (pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component
                                                 ::Component_get_gameObject
                                                           ((Component *)pCVar4,(MethodInfo *)0x0),
                                       pGVar3 != (GameObject *)0x0)) {
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_SetActive(pGVar3,hasTempTeir ^ 1,(MethodInfo *)0x0)
                                      ;
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          goto code_?;
                        }
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
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateTierIconHoverInput() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar_UpdateTierIconHoverInput
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                 );
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
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return;
  }
  pLVar1 = (this->fields).tierProgressDataList;
  uVar2 = 0;
  uVar3 = uVar2;
  do {
    if (pLVar1 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar5 = (uint)uVar3;
    if ((pLVar1->fields)._size <= (int)uVar5) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar6 != (PlayerPlanetData *)0x0) {
        bVar7 = (pPVar6->fields).gamePassTier;
        if (bVar7 == 3) {
          return;
        }
        bVar8 = GameTierProgressBar_HasTempTier
                           (this,bVar7 + GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          return;
        }
        pLVar1 = (this->fields).tierProgressDataList;
        if (pLVar1 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
          if ((uint)(pLVar1->fields)._size <= (uint)bVar7) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pGVar9 = (pLVar1->fields)._items;
          if (pGVar9 != (GameTierProgressBar_TierProgressData__Array *)0x0) {
            if ((uint)pGVar9->max_length <= (uint)bVar7) {
code_?:
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pHVar10 = pGVar9->vector[bVar7].hoverInputHandler;
            if (pHVar10 != (HoverInputHandler *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__Add_HoverInputReceiver_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar11 = 
              MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__Add_HoverInputReceiver_
              ;
              pLVar12 = (List_1_System_Object_ *)(pHVar10->fields).hoverInputReceivers;
              if (pLVar12 != (List_1_System_Object_ *)0x0) {
                piVar13 = &(pLVar12->fields)._version;
                *piVar13 = *piVar13 + 1;
                pOVar14 = (pLVar12->fields)._items;
                if (pOVar14 != (Object__Array *)0x0) {
                  uVar5 = (pLVar12->fields)._size;
                  if ((uint)pOVar14->max_length <= uVar5) {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__AddWithResize
                              (pLVar12,(Object *)this,pMVar11->klass->rgctx_data[0xe].method);
                    return;
                  }
                  (pLVar12->fields)._size = uVar5 + 1;
                  FUN_?(pOVar14,(longlong)(int)uVar5,this);
                  return;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    pLVar1 = (this->fields).tierProgressDataList;
    if (pLVar1 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0) goto code_?;
    if ((uint)(pLVar1->fields)._size <= uVar5) goto code_?;
    pGVar9 = (pLVar1->fields)._items;
    if (pGVar9 == (GameTierProgressBar_TierProgressData__Array *)0x0) goto code_?;
    if ((uint)pGVar9->max_length <= uVar5) goto code_?;
    lVar15 = *(longlong *)((longlong)&pGVar9->vector[0].hoverInputHandler + uVar2);
    if (lVar15 == 0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__Remove_HoverInputReceiver_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar12 = *(List_1_System_Object_ **)(lVar15 + 0x20);
    if (pLVar12 == (List_1_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Remove
              (pLVar12,(Object *)this,
               MethodInfo__System__Collections__Generic__List<HoverInputReceiver>__Remove_HoverInputReceiver_
              );
    pLVar1 = (this->fields).tierProgressDataList;
    uVar3 = (ulonglong)(uVar5 + 1);
    uVar2 = uVar2 + 0x90;
  } while( true );
}


/* GameTierProgressBar() */

void Assembly-CSharp.dll::GameTierProgressBar::GameTierProgressBar__ctor
               (GameTierProgressBar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields).gameMeterVisualEffects = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).gameMeterVisualEffects >> 0xc);
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

