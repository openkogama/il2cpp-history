
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TierOnDeathProgress+<DoTierProgress>d__32::
     TierOnDeathProgress_DoTierProgress_d_32_MoveNext
               (TierOnDeathProgress_DoTierProgress_d_32 *this,MethodInfo *method)

{
  pTVar1 = this;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pTVar2 = (this->fields).__4__this;
  pTVar3 = (Text *)this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    unaff_ESI = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (((pPVar4 != (PlayerPlanetData *)0x0) && (pTVar2 != (TierOnDeathProgress *)0x0)) &&
       (unaff_ESI != (PlayerTierStateCalculator *)0x0)) {
      pDVar5 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (unaff_ESI,(pPVar4->fields).progressionGamePoints,
                           (int)(pTVar2->fields).tierToInterpolateFrom,(MethodInfo *)0x0);
      (this->fields)._gameTierShopStatus_5__2 = pDVar5;
      func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pTVar3 = (Text *)TypeInfo__GamePointGainEffectManager->static_fields->
                        progressBarGamePointAmountShown;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar4 != (PlayerPlanetData *)0x0) {
        iVar6 = (pPVar4->fields).progressionGamePoints;
        iVar7 = func_?();
        iVar8 = func_?();
        (this->fields)._current_5__4 = iVar7;
        (this->fields)._to_5__3 = iVar8;
        (this->fields)._stopped_5__5 = 0;
        (pTVar2->fields).fromProgress = (float)(int)pTVar3;
        (pTVar2->fields).toProgress = (float)iVar6;
        GamePointGainEffectManager::
        GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect
                  (iVar6,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown =
             iVar6;
        pAVar9 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
        if (pAVar9 != (Action_1_Int32_ *)0x0) {
          (*(pAVar9->fields)._._.invoke_impl)();
        }
        pSVar10 = mscorlib.dll::System::Single::Single_ToString
                            ((Single *)&(pTVar2->fields).fromProgress,(MethodInfo *)0x0);
        str3 = mscorlib.dll::System::Single::Single_ToString
                         ((Single *)&(pTVar2->fields).toProgress,(MethodInfo *)0x0);
        pSVar10 = mscorlib.dll::System::String::String_Concat_5
                            (StringLiteral_From_To_,pSVar10,::StringLiteral__,str3,(MethodInfo *)0x0
                            );
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar10,(MethodInfo *)0x0);
        this = (TierOnDeathProgress_DoTierProgress_d_32 *)pTVar3;
        goto code_?;
      }
    }
    break;
  case 1:
    (this->fields).__1__state = -1;
    if (pTVar2 != (TierOnDeathProgress *)0x0) {
code_?:
      pCVar11 = (pTVar2->fields).unlockImage;
      pTVar3 = (Text *)this;
      if ((pCVar11 != (CanvasGroup *)0x0) &&
         (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar11,(MethodInfo *)0x0), pGVar12 != (GameObject *)0x0
         )) {
        bVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_get_activeInHierarchy(pGVar12,(MethodInfo *)0x0);
        if (bVar13 != 0) {
          fVar14 = (pTVar1->fields)._lockLerpTimer_5__7 / (pTVar2->fields).lockFadeLerpDuration;
          pCVar11 = (pTVar2->fields).unlockImage;
          if (fVar14 < 0.0) {
            fVar14 = 0.0;
          }
          else if (_UNK_? < fVar14) {
            fVar14 = _UNK_?;
          }
          if (pCVar11 == (CanvasGroup *)0x0) break;
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar11,fVar14 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
          fVar14 = (pTVar1->fields)._lockLerpTimer_5__7;
          fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
          this = (TierOnDeathProgress_DoTierProgress_d_32 *)(fVar15 + fVar14);
          (pTVar1->fields)._lockLerpTimer_5__7 = (float)this;
          if ((float)this < (pTVar2->fields).lockFadeLerpDuration) {
            (pTVar1->fields).__2__current = (Object *)0x0;
            func_?();
            (pTVar1->fields).__1__state = 1;
            return 1;
          }
        }
        iVar6 = (pTVar1->fields)._current_5__4 + 1;
        (pTVar1->fields)._current_5__4 = iVar6;
        if (iVar6 == (pTVar1->fields)._to_5__3) {
          (pTVar1->fields)._stopped_5__5 = 1;
        }
        else if (iVar6 != 3) {
          pPVar16 = (ProgressBarAndroid *)(pTVar2->fields).tierProgressBar;
          pTVar3 = (Text *)this;
          if (pPVar16 != (ProgressBarAndroid *)0x0) {
            ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar16,0.0,(MethodInfo *)0x0);
            pRVar17 = (pTVar2->fields).lockImage;
            (pTVar2->fields).timer = 0.0;
            if ((pRVar17 != (RectTransform *)0x0) &&
               (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pRVar17,(MethodInfo *)0x0),
               pGVar12 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar12,1,(MethodInfo *)0x0);
              pCVar11 = (pTVar2->fields).unlockImage;
              if ((pCVar11 != (CanvasGroup *)0x0) &&
                 (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pCVar11,(MethodInfo *)0x0),
                 pGVar12 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar12,0,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
          break;
        }
code_?:
        if ((pTVar1->fields)._totalProgress_5__6 < _UNK_?) {
          (pTVar1->fields).__2__current = (Object *)0x0;
          func_?();
          (pTVar1->fields).__1__state = 2;
          return 1;
        }
        goto code_?;
      }
    }
    break;
  case 2:
    (this->fields).__1__state = -1;
code_?:
    iVar6 = (pTVar1->fields)._current_5__4;
    unaff_ESI = (PlayerTierStateCalculator *)&(pTVar1->fields)._current_5__4;
    if (((pTVar1->fields)._to_5__3 < iVar6) || ((pTVar1->fields)._stopped_5__5 != 0)) {
code_?:
      pTVar3 = (Text *)this;
      if (pTVar2 != (TierOnDeathProgress *)0x0) {
code_?:
        (pTVar2->fields)._IsShowingTierProgress_k__BackingField = 0;
        (pTVar1->fields).__2__current = (Object *)0x0;
        func_?();
        (pTVar1->fields).__1__state = 3;
        return 1;
      }
    }
    else {
      pTVar3 = (Text *)this;
      if (pTVar2 != (TierOnDeathProgress *)0x0) {
        if (iVar6 == 3) {
          pTVar3 = (pTVar2->fields).nextTierText;
          mscorlib.dll::System::Int32::Int32_ToString((Int32 *)unaff_ESI,(MethodInfo *)0x0);
          if (pTVar3 != (Text *)0x0) {
            func_?();
            pPVar16 = (ProgressBarAndroid *)(pTVar2->fields).tierProgressBar;
            if (pPVar16 != (ProgressBarAndroid *)0x0) {
              ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar16,1.0,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
        else {
          pTVar3 = (pTVar2->fields).nextTierText;
          mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
          if (pTVar3 != (Text *)0x0) {
            func_?();
            pDVar5 = (pTVar1->fields)._gameTierShopStatus_5__2;
            if (pDVar5 !=
                (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                 *)0x0) {
              this = (TierOnDeathProgress_DoTierProgress_d_32 *)
                     CONCAT31((int3)((uint)pTVar3 >> 8),(char)*(int32_t *)unaff_ESI + '\x01');
              pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,
                                   (ByteEnum__Enum)this,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                  );
              pTVar3 = (Text *)this;
              if (pOVar18 != (Object *)0x0) {
                (pTVar2->fields).gamePointsRequired = (int32_t)pOVar18[3].klass;
                fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                   ((pTVar2->fields).timer / (pTVar2->fields).progressLerpDuration,
                                    (MethodInfo *)0x0);
                (pTVar1->fields)._totalProgress_5__6 = fVar14;
                UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                          ((pTVar2->fields).crystalTimer / (pTVar2->fields).progressLerpDuration,
                           (MethodInfo *)0x0);
                pDVar5 = (pTVar1->fields)._gameTierShopStatus_5__2;
                method_00 = (MethodInfo *)&UNK_?;
                fVar19 = (float10)func_?();
                iVar7 = (pTVar1->fields)._current_5__4;
                pPVar20 = (PlayerTierStateCalculator *)(int)fVar19;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pTVar3 = (Text *)(uint)(byte)((char)iVar7 + 1);
                while (pTVar3 = (Text *)((int)&(((TierOnDeathProgress_DoTierProgress_d_32 *)
                                                 ((int)pTVar3 + -0x2c))->fields).
                                                _lockLerpTimer_5__7 + 3), 0 < (int)pTVar3) {
                  unaff_ESI = pPVar20;
                  if ((pDVar5 ==
                       (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                        *)0x0) ||
                     (pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                ByteEnum,System::Object]::
                                Dictionary_2_System_ByteEnum_System_Object__get_Item
                                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,
                                           (ByteEnum__Enum)pTVar3,
                                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                          ), pOVar18 == (Object *)0x0)) goto code_?;
                  pPVar20 = (PlayerTierStateCalculator *)((int)pPVar20 - (int)pOVar18[3].klass);
                  if ((int)pPVar20 < 1) {
                    pPVar20 = (PlayerTierStateCalculator *)0x0;
                  }
                }
                pPVar16 = (ProgressBarAndroid *)(pTVar2->fields).tierProgressBar;
                unaff_ESI = (PlayerTierStateCalculator *)0x0;
                if (pPVar16 != (ProgressBarAndroid *)0x0) {
                  fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                     ((float)(int)pPVar20 /
                                      (float)(pTVar2->fields).gamePointsRequired,(MethodInfo *)0x0);
                  ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar16,fVar14,method_00);
                  unaff_ESI = (PlayerTierStateCalculator *)&(pTVar2->fields).currentCrystalValue;
                  fVar19 = (float10)func_?();
                  this = (TierOnDeathProgress_DoTierProgress_d_32 *)
                         (pTVar2->fields).crystalsGainedSinceDeath;
                  *(float *)unaff_ESI = (float)fVar19;
                  mscorlib.dll::System::Single::Single_ToString
                            ((Single *)unaff_ESI,(MethodInfo *)0x0);
                  pTVar3 = (Text *)this;
                  if ((Text *)this != (Text *)0x0) {
                    func_?();
                    pRVar17 = (pTVar2->fields).lockImage;
                    if (pRVar17 != (RectTransform *)0x0) {
                      pGStackY_88 = (GamePassesTextBubble *)&UNK_?;
                      pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pRVar17,(MethodInfo *)0x0);
                      if (pGVar12 != (GameObject *)0x0) {
                        bVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_get_activeInHierarchy(pGVar12,(MethodInfo *)0x0);
                        if (bVar13 == 0) {
code_?:
                          pGVar12 = (pTVar2->fields).progressBarDivider;
                          pTVar3 = (Text *)this;
                          if (pGVar12 != (GameObject *)0x0) {
                            bVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                     GameObject_get_activeSelf(pGVar12,(MethodInfo *)0x0);
                            if (bVar13 != 0) {
                              pPVar21 = (pTVar2->fields).tierProgressBar;
                              if (pPVar21 == (ProgressBar *)0x0) break;
                              if ((pPVar21->fields).progress <= 0.0) {
                                pGVar12 = (pTVar2->fields).progressBarDivider;
                                if (pGVar12 == (GameObject *)0x0) break;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar12,0,(MethodInfo *)0x0);
                              }
                            }
                            (pTVar2->fields).unlockingTier =
                                 (float)(pTVar2->fields).gamePointsRequired <= (float)(int)pPVar20;
                            this = (TierOnDeathProgress_DoTierProgress_d_32 *)
                                   (pTVar2->fields).progressText;
                            unaff_ESI = (PlayerTierStateCalculator *)
                                        mscorlib.dll::System::Int32::Int32_ToString
                                                  ((Int32 *)&stack0xffffffec,(MethodInfo *)0x0);
                            pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                                                ((Int32 *)&(pTVar2->fields).gamePointsRequired,
                                                 (MethodInfo *)0x0);
                            mscorlib.dll::System::String::String_Concat_4
                                      ((String *)unaff_ESI,::StringLiteral____,pSVar10,
                                       (MethodInfo *)0x0);
                            pTVar3 = (Text *)this;
                            if ((Text *)this != (Text *)0x0) {
                              func_?();
                              if ((pTVar2->fields).unlockingTier == 0) goto code_?;
                              pRVar17 = (pTVar2->fields).lockImage;
                              (pTVar2->fields).fromProgress = (float)(int)pPVar20;
                              if ((pRVar17 != (RectTransform *)0x0) &&
                                 (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_gameObject
                                                      ((Component *)pRVar17,(MethodInfo *)0x0),
                                 pGVar12 != (GameObject *)0x0)) {
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar12,0,(MethodInfo *)0x0);
                                pCVar11 = (pTVar2->fields).unlockImage;
                                if ((pCVar11 != (CanvasGroup *)0x0) &&
                                   (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_get_gameObject
                                                        ((Component *)pCVar11,(MethodInfo *)0x0),
                                   pGVar12 != (GameObject *)0x0)) {
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_SetActive(pGVar12,1,(MethodInfo *)0x0);
                                  (pTVar1->fields)._lockLerpTimer_5__7 = 0.0;
                                  goto code_?;
                                }
                              }
                            }
                          }
                        }
                        else {
                          this_03 = (pTVar2->fields).lockShakeCurve;
                          if (this_03 != (AnimationCurve *)0x0) {
                            this = (TierOnDeathProgress_DoTierProgress_d_32 *)
                                   UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                   AnimationCurve_Evaluate
                                             (this_03,(pTVar1->fields)._totalProgress_5__6,
                                              (MethodInfo *)0x0);
                            uVar22 = (pTVar2->fields).lockStartRot.x;
                            uVar23 = (pTVar2->fields).lockStartRot.y;
                            unaff_ESI = (PlayerTierStateCalculator *)(pTVar2->fields).lockImage;
                            euler.y = (float)uVar23 * _UNK_?;
                            euler.x = (float)uVar22 * _UNK_?;
                            euler.z = (float)this * (pTVar2->fields).intensity * _UNK_? *
                                      _UNK_?;
                            pQVar24 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                      Quaternion_Internal_FromEulerRad
                                                ((Quaternion *)&stack0xffffffd8,euler,
                                                 (MethodInfo *)0x0);
                            pTVar3 = (Text *)this;
                            if (unaff_ESI != (PlayerTierStateCalculator *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_localRotation
                                        ((Transform *)unaff_ESI,*pQVar24,(MethodInfo *)0x0);
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
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
code_?:
  this = (TierOnDeathProgress_DoTierProgress_d_32 *)pTVar3;
  bVar25 = 0;
  uVar26 = func_?();
  pbVar27 = (byte *)((ulonglong)uVar26 >> 0x20);
  pcVar28 = (char *)uVar26;
  if ((POPCOUNT((uint)&pTVar2[-1].fields.field_0x73 & 0xff) & 1U) == 0) {
code_?:
    if (cRam_? == '\0') goto code_?;
  }
  else {
    bVar29 = (byte)pTVar1;
    cVar30 = *(char *)&unaff_ESI->klass;
    bVar31 = *(char *)&unaff_ESI->klass + bVar29;
    bVar32 = CARRY1(*(byte *)&unaff_ESI->klass,bVar29) || CARRY1(bVar31,bVar25);
    *(byte *)&unaff_ESI->klass = bVar31 + bVar25;
    if ((SCARRY1(cVar30,bVar29) != SCARRY1(bVar31,bVar25)) != *(char *)&unaff_ESI->klass < '\0') {
      *pcVar28 = *pcVar28 + (char)uVar26;
      goto code_?;
    }
    bVar25 = *pbVar27;
    bVar33 = (byte)((ulonglong)uVar26 >> 0x28);
    bVar31 = *pbVar27;
    bVar29 = *pbVar27 + bVar33;
    *pbVar27 = bVar29 + bVar32;
    if ((SCARRY1(bVar31,bVar33) != SCARRY1(bVar29,bVar32)) == (char)*pbVar27 < '\0') {
      pbVar27[(int)pcVar28 * 4 + -0x3333efbc] =
           pbVar27[(int)pcVar28 * 4 + -0x3333efbc] + bVar33 +
           (CARRY1(bVar25,bVar33) || CARRY1(bVar29,bVar32));
      pcVar34 = (code *)swi(3);
      bVar13 = (*pcVar34)();
      return bVar13;
    }
    func_?();
code_?:
    func_?();
    cRam_? = '\x01';
  }
  iVar6 = (this->fields).__1__state;
  pTVar2 = (this->fields).__4__this;
  if (iVar6 == 0) {
    (this->fields).__1__state = -1;
    (this->fields)._to_5__3 = 0;
    (this->fields)._current_5__4 = 0x3f800000;
    if ((pTVar2 == (TierOnDeathProgress *)0x0) ||
       (pLVar35 = (List_1_GameTierProgressBar_TierProgressData_ *)(pTVar2->fields).lockShakeCurve,
       pLVar35 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) goto code_?;
    pGVar36 = mscorlib.dll::System::Collections::Generic::
              List`1[GameTierProgressBar+TierProgressData]::
              List_1_GameTierProgressBar_TierProgressData__get_Item
                        ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar35,
                         (int32_t)(this->fields)._gameTierShopStatus_5__2,
                         MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                        );
    this_00 = pGVar36->LockedTierIcon;
    if ((CanvasGroup *)this_00 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              ((CanvasGroup *)this_00,1.0,(MethodInfo *)0x0);
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 2) {
        (this->fields).__1__state = -1;
      }
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  if ((float)(this->fields)._current_5__4 <= 0.0) {
    if ((pTVar2 != (TierOnDeathProgress *)0x0) &&
       (pLVar35 = (List_1_GameTierProgressBar_TierProgressData_ *)(pTVar2->fields).lockShakeCurve,
       pLVar35 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) {
      pGVar36 = mscorlib.dll::System::Collections::Generic::
                List`1[GameTierProgressBar+TierProgressData]::
                List_1_GameTierProgressBar_TierProgressData__get_Item
                          ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar35,
                           (int32_t)(this->fields)._gameTierShopStatus_5__2,
                           MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                          );
      this_02 = pGVar36->LockedTierIcon;
      if ((CanvasGroup *)this_02 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  ((CanvasGroup *)this_02,0.0,(MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)0x0;
        func_?();
        (this->fields).__1__state = 2;
        return 1;
      }
    }
  }
  else {
    fVar14 = (float)(this->fields)._to_5__3;
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar15 = fVar15 + fVar14;
    (this->fields)._to_5__3 = (int32_t)fVar15;
    if (pTVar2 != (TierOnDeathProgress *)0x0) {
      (this->fields)._current_5__4 =
           (int32_t)(_UNK_? - fVar15 / (pTVar2->fields).progressLerpDuration);
      pLVar35 = (List_1_GameTierProgressBar_TierProgressData_ *)(pTVar2->fields).lockShakeCurve;
      if (pLVar35 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
        pGVar36 = mscorlib.dll::System::Collections::Generic::
                  List`1[GameTierProgressBar+TierProgressData]::
                  List_1_GameTierProgressBar_TierProgressData__get_Item
                            ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar35,
                             (int32_t)(this->fields)._gameTierShopStatus_5__2,
                             MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                            );
        this_01 = pGVar36->LockedTierIcon;
        if ((CanvasGroup *)this_01 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    ((CanvasGroup *)this_01,(float)(this->fields)._current_5__4,(MethodInfo *)0x0);
          (this->fields).__2__current = (Object *)0x0;
          func_?();
          (this->fields).__1__state = 1;
          return 1;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar34 = (code *)swi(3);
  bVar13 = (*pcVar34)();
  return bVar13;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::TierOnDeathProgress+<DoTierProgress>d__32::
     TierOnDeathProgress_DoTierProgress_d_32_System_Collections_IEnumerator_Reset
               (TierOnDeathProgress_DoTierProgress_d_32 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__TierOnDeathProgress___DoTierProgress_d__32__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

