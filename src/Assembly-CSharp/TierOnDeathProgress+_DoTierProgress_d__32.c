
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TierOnDeathProgress+<DoTierProgress>d__32::
     TierOnDeathProgress_DoTierProgress_d_32_MoveNext
               (TierOnDeathProgress_DoTierProgress_d_32 *this,MethodInfo *method)

{
  pTVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    func_?(&StringLiteral_From_To_);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral____);
    cRam_? = '\x01';
  }
  IStack_2.m_value = 0;
  pTVar3 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    unaff_ESI = (Text *)TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    cVar5 = (int)pPVar4 < 0;
    bVar6 = pPVar4 == (PlayerPlanetData *)0x0;
    if (!bVar6) {
      cVar5 = (int)pTVar3 < 0;
      bVar6 = pTVar3 == (TierOnDeathProgress *)0x0;
      if (!bVar6) {
        cVar5 = (int)unaff_ESI < 0;
        bVar6 = unaff_ESI == (Text *)0x0;
        if (!bVar6) {
          pDVar7 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingState
                              ((PlayerTierStateCalculator *)unaff_ESI,
                               (pPVar4->fields).progressionGamePoints,
                               (int)(pTVar3->fields).tierToInterpolateFrom,(MethodInfo *)0x0);
          (this->fields)._gameTierShopStatus_5__2 = pDVar7;
          func_?(&(this->fields)._gameTierShopStatus_5__2,pDVar7);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__GamePointGainEffectManager);
            cRam_? = '\x01';
          }
          pTVar8 = (TierOnDeathProgress_DoTierProgress_d_32 *)
                   TypeInfo__GamePointGainEffectManager->static_fields->
                   progressBarGamePointAmountShown;
          if (cRam_? == '\0') {
            func_?(&TypeInfo__GamePassesManager);
            cRam_? = '\x01';
          }
          pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
          cVar5 = (int)pPVar4 < 0;
          bVar6 = pPVar4 == (PlayerPlanetData *)0x0;
          if (!bVar6) {
            iVar9 = (pPVar4->fields).progressionGamePoints;
            iVar10 = func_?((pTVar3->fields).tierToInterpolateFrom,0);
            iVar11 = func_?((pTVar3->fields).tierToInterpolateTo,0);
            (this->fields)._current_5__4 = iVar10;
            (this->fields)._to_5__3 = iVar11;
            (this->fields)._stopped_5__5 = 0;
            (pTVar3->fields).fromProgress = (float)(int)pTVar8;
            (pTVar3->fields).toProgress = (float)iVar9;
            GamePointGainEffectManager::
            GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect
                      (iVar9,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__GamePointGainEffectManager);
              cRam_? = '\x01';
            }
            TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown =
                 iVar9;
            if (TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown !=
                (Action_1_Int32_ *)0x0) {
              pAVar12 = TypeInfo__GamePointGainEffectManager->static_fields->
                       OnGamePointGainEffectShown;
              (*(pAVar12->fields)._._.invoke_impl)
                        ((pAVar12->fields)._._.method_code,iVar9,(pAVar12->fields)._._.method);
            }
            pSVar13 = mscorlib.dll::System::Single::Single_ToString
                                ((Single *)&(pTVar3->fields).fromProgress,(MethodInfo *)0x0);
            in_stack_14 =
                 mscorlib.dll::System::Single::Single_ToString
                           ((Single *)&(pTVar3->fields).toProgress,(MethodInfo *)0x0);
            unaff_ESI = (Text *)mscorlib.dll::System::String::String_Concat_5
                                          (StringLiteral_From_To_,pSVar13,::StringLiteral__,
                                           in_stack_14,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)unaff_ESI,(MethodInfo *)0x0);
            this = pTVar8;
            goto code_?;
          }
        }
      }
    }
    break;
  case 1:
    (this->fields).__1__state = -1;
    cVar5 = (int)pTVar3 < 0;
    bVar6 = pTVar3 == (TierOnDeathProgress *)0x0;
    if (!bVar6) {
code_?:
      pCVar15 = (pTVar3->fields).unlockImage;
      cVar5 = (int)pCVar15 < 0;
      bVar6 = pCVar15 == (CanvasGroup *)0x0;
      if (!bVar6) {
        pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pCVar15,(MethodInfo *)0x0);
        cVar5 = (int)pGVar16 < 0;
        bVar6 = pGVar16 == (GameObject *)0x0;
        if (!bVar6) {
          bVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_get_activeInHierarchy(pGVar16,(MethodInfo *)0x0);
          if (bVar17 != 0) {
            fVar18 = (pTVar1->fields)._lockLerpTimer_5__7 / (pTVar3->fields).lockFadeLerpDuration;
            pCVar15 = (pTVar3->fields).unlockImage;
            if (fVar18 < 0.0) {
              fVar18 = 0.0;
            }
            else if (_UNK_? < fVar18) {
              fVar18 = _UNK_?;
            }
            cVar5 = (int)pCVar15 < 0;
            bVar6 = true;
            if (pCVar15 == (CanvasGroup *)0x0) break;
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (pCVar15,fVar18 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
            fVar18 = (pTVar1->fields)._lockLerpTimer_5__7;
            fVar19 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            fVar19 = fVar19 + fVar18;
            (pTVar1->fields)._lockLerpTimer_5__7 = fVar19;
            if (fVar19 < (pTVar3->fields).lockFadeLerpDuration) {
              (pTVar1->fields).__2__current = (Object *)0x0;
              func_?();
              (pTVar1->fields).__1__state = 1;
              return 1;
            }
          }
          IStack_2.m_value = (pTVar1->fields)._current_5__4;
          iVar20 = IStack_2.m_value + 1;
          (pTVar1->fields)._current_5__4 = iVar20;
          if (iVar20 == (pTVar1->fields)._to_5__3) {
            (pTVar1->fields)._stopped_5__5 = 1;
          }
          else if (iVar20 != 3) {
            pPVar21 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
            cVar5 = (int)pPVar21 < 0;
            bVar6 = pPVar21 == (ProgressBarAndroid *)0x0;
            if (!bVar6) {
              ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar21,0.0,(MethodInfo *)0x0);
              pRVar22 = (pTVar3->fields).lockImage;
              (pTVar3->fields).timer = 0.0;
              cVar5 = (int)pRVar22 < 0;
              bVar6 = pRVar22 == (RectTransform *)0x0;
              if (!bVar6) {
                pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pRVar22,(MethodInfo *)0x0);
                cVar5 = (int)pGVar16 < 0;
                bVar6 = pGVar16 == (GameObject *)0x0;
                if (!bVar6) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar16,1,(MethodInfo *)0x0);
                  pCVar15 = (pTVar3->fields).unlockImage;
                  cVar5 = (int)pCVar15 < 0;
                  bVar6 = pCVar15 == (CanvasGroup *)0x0;
                  if (!bVar6) {
                    pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pCVar15,(MethodInfo *)0x0);
                    cVar5 = (int)pGVar16 < 0;
                    bVar6 = pGVar16 == (GameObject *)0x0;
                    if (!bVar6) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar16,0,(MethodInfo *)0x0);
                      goto code_?;
                    }
                  }
                }
              }
            }
            break;
          }
code_?:
          if ((pTVar1->fields)._totalProgress_5__6 < _UNK_?) {
            (pTVar1->fields).__2__current = (Object *)0x0;
            func_?(&(pTVar1->fields).__2__current,0);
            (pTVar1->fields).__1__state = 2;
            return 1;
          }
          goto code_?;
        }
      }
    }
    break;
  case 2:
    (this->fields).__1__state = -1;
code_?:
    iVar20 = (pTVar1->fields)._current_5__4;
    if (((pTVar1->fields)._to_5__3 < iVar20) || ((pTVar1->fields)._stopped_5__5 != 0)) {
code_?:
      cVar5 = (int)pTVar3 < 0;
      bVar6 = pTVar3 == (TierOnDeathProgress *)0x0;
      if (!bVar6) goto code_?;
    }
    else {
      cVar5 = (int)pTVar3 < 0;
      bVar6 = pTVar3 == (TierOnDeathProgress *)0x0;
      if (!bVar6) {
        unaff_ESI = (pTVar3->fields).nextTierText;
        if (iVar20 == 3) {
          pSVar13 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&(pTVar1->fields)._current_5__4,(MethodInfo *)0x0);
          cVar5 = (int)unaff_ESI < 0;
          bVar6 = unaff_ESI == (Text *)0x0;
          if (!bVar6) {
            func_?(0x4b,unaff_ESI,pSVar13);
            pPVar21 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
            goto code_?;
          }
        }
        else {
          IStack_2.m_value = iVar20 + 1;
          pSVar13 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
          cVar5 = (int)unaff_ESI < 0;
          bVar6 = unaff_ESI == (Text *)0x0;
          if (!bVar6) {
            func_?(0x4b,unaff_ESI,pSVar13);
            pDVar7 = (pTVar1->fields)._gameTierShopStatus_5__2;
            cVar5 = (int)pDVar7 < 0;
            bVar6 = pDVar7 ==
                     (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                      *)0x0;
            if (!bVar6) {
              this = (TierOnDeathProgress_DoTierProgress_d_32 *)
                     CONCAT31(this._1_3_,(char)(pTVar1->fields)._current_5__4 + '\x01');
              pOVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7,
                                   (ByteEnum__Enum)this,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                  );
              cVar5 = (int)pOVar23 < 0;
              bVar6 = pOVar23 == (Object *)0x0;
              if (!bVar6) {
                (pTVar3->fields).gamePointsRequired = (int32_t)pOVar23[3].klass;
                fVar19 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                   ((pTVar3->fields).timer / (pTVar3->fields).progressLerpDuration,
                                    (MethodInfo *)0x0);
                (pTVar1->fields)._totalProgress_5__6 = fVar19;
                UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                          ((pTVar3->fields).crystalTimer / (pTVar3->fields).progressLerpDuration,
                           (MethodInfo *)0x0);
                fVar18 = (pTVar3->fields).fromProgress;
                if (fVar19 < 0.0) {
                  fVar19 = 0.0;
                }
                else if (_UNK_? < fVar19) {
                  fVar19 = _UNK_?;
                }
                pDVar7 = (pTVar1->fields)._gameTierShopStatus_5__2;
                method_00 = (MethodInfo *)&UNK_?;
                fVar24 = (float10)func_?(SUB84((double)(((pTVar3->fields).toProgress -
                                                                 fVar18) * fVar19 + fVar18),0));
                iVar9 = (pTVar1->fields)._current_5__4;
                unaff_ESI = (Text *)(int)fVar24;
                pTVar25 = unaff_ESI;
                if (cRam_? == '\0') {
                  func_?(&
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                 );
                  cRam_? = '\x01';
                }
                key = (byte)((char)iVar9 + 1) - 1;
                if (0 < (int)key) {
                  cVar5 = (int)pDVar7 < 0;
                  bVar6 = true;
                  if (pDVar7 ==
                      (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                       *)0x0) break;
                  do {
                    pOVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              ByteEnum,System::Object]::
                              Dictionary_2_System_ByteEnum_System_Object__get_Item
                                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7,key,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                        );
                    cVar5 = (int)pOVar23 < 0;
                    bVar6 = true;
                    if (pOVar23 == (Object *)0x0) goto code_?;
                    unaff_ESI = (Text *)((int)unaff_ESI - (int)pOVar23[3].klass);
                    if ((int)unaff_ESI < 1) {
                      unaff_ESI = (Text *)0x0;
                    }
                    key = key - 1;
                    pTVar25 = unaff_ESI;
                  } while (0 < (int)key);
                }
                pPVar26 = (pTVar3->fields).tierProgressBar;
                cVar5 = (int)pPVar26 < 0;
                bVar6 = pPVar26 == (ProgressBar *)0x0;
                if (!bVar6) {
                  fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                     ((float)(int)unaff_ESI /
                                      (float)(pTVar3->fields).gamePointsRequired,(MethodInfo *)0x0);
                  ProgressBarAndroid::ProgressBarAndroid_set_Progress
                            ((ProgressBarAndroid *)(pTVar3->fields).tierProgressBar,fVar18,method_00
                            );
                  fVar24 = (float10)func_?();
                  pTVar27 = (pTVar3->fields).crystalsGainedSinceDeath;
                  (pTVar3->fields).currentCrystalValue = (float)fVar24;
                  pSVar13 = mscorlib.dll::System::Single::Single_ToString
                                      ((Single *)&(pTVar3->fields).currentCrystalValue,
                                       (MethodInfo *)0x0);
                  cVar5 = (int)pTVar27 < 0;
                  bVar6 = pTVar27 == (Text *)0x0;
                  if (!bVar6) {
                    func_?(0x4b,pTVar27,pSVar13);
                    pRVar22 = (pTVar3->fields).lockImage;
                    cVar5 = (int)pRVar22 < 0;
                    bVar6 = pRVar22 == (RectTransform *)0x0;
                    if (!bVar6) {
                      pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pRVar22,(MethodInfo *)0x0);
                      cVar5 = (int)pGVar16 < 0;
                      bVar6 = pGVar16 == (GameObject *)0x0;
                      if (!bVar6) {
                        bVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_get_activeInHierarchy(pGVar16,(MethodInfo *)0x0);
                        if (bVar17 == 0) {
code_?:
                          pGVar16 = (pTVar3->fields).progressBarDivider;
                          cVar5 = (int)pGVar16 < 0;
                          bVar6 = pGVar16 == (GameObject *)0x0;
                          if (!bVar6) {
                            bVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                     GameObject_get_activeSelf(pGVar16,(MethodInfo *)0x0);
                            if (bVar17 != 0) {
                              pPVar26 = (pTVar3->fields).tierProgressBar;
                              cVar5 = (int)pPVar26 < 0;
                              bVar6 = true;
                              if (pPVar26 == (ProgressBar *)0x0) break;
                              if ((pPVar26->fields).progress <= 0.0) {
                                pGVar16 = (pTVar3->fields).progressBarDivider;
                                cVar5 = (int)pGVar16 < 0;
                                bVar6 = true;
                                if (pGVar16 == (GameObject *)0x0) break;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar16,0,(MethodInfo *)0x0);
                              }
                            }
                            (pTVar3->fields).unlockingTier =
                                 (float)(pTVar3->fields).gamePointsRequired <= (float)(int)unaff_ESI
                            ;
                            pTVar27 = (pTVar3->fields).progressText;
                            unaff_ESI = (Text *)mscorlib.dll::System::Int32::Int32_ToString
                                                          ((Int32 *)&stack0xfffffff0,
                                                           (MethodInfo *)0x0);
                            pSVar13 = mscorlib.dll::System::Int32::Int32_ToString
                                                ((Int32 *)&(pTVar3->fields).gamePointsRequired,
                                                 (MethodInfo *)0x0);
                            in_stack_14 = (String *)&UNK_?;
                            pSVar13 = mscorlib.dll::System::String::String_Concat_4
                                                ((String *)unaff_ESI,::StringLiteral____,pSVar13,
                                                 (MethodInfo *)0x0);
                            cVar5 = (int)pTVar27 < 0;
                            bVar6 = pTVar27 == (Text *)0x0;
                            if (!bVar6) {
                              func_?(0x4b,pTVar27,pSVar13);
                              if ((pTVar3->fields).unlockingTier == 0) goto code_?;
                              pRVar22 = (pTVar3->fields).lockImage;
                              (pTVar3->fields).fromProgress = (float)(int)pTVar25;
                              cVar5 = (int)pRVar22 < 0;
                              bVar6 = pRVar22 == (RectTransform *)0x0;
                              if (!bVar6) {
                                pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_gameObject
                                                    ((Component *)pRVar22,(MethodInfo *)0x0);
                                cVar5 = (int)pGVar16 < 0;
                                bVar6 = pGVar16 == (GameObject *)0x0;
                                if (!bVar6) {
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_SetActive(pGVar16,0,(MethodInfo *)0x0);
                                  pCVar15 = (pTVar3->fields).unlockImage;
                                  cVar5 = (int)pCVar15 < 0;
                                  bVar6 = pCVar15 == (CanvasGroup *)0x0;
                                  if (!bVar6) {
                                    pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_get_gameObject
                                                        ((Component *)pCVar15,(MethodInfo *)0x0);
                                    cVar5 = (int)pGVar16 < 0;
                                    bVar6 = pGVar16 == (GameObject *)0x0;
                                    if (!bVar6) {
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_SetActive(pGVar16,1,(MethodInfo *)0x0);
                                      (pTVar1->fields)._lockLerpTimer_5__7 = 0.0;
                                      goto code_?;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          this_00 = (pTVar3->fields).lockShakeCurve;
                          cVar5 = (int)this_00 < 0;
                          bVar6 = this_00 == (AnimationCurve *)0x0;
                          if (!bVar6) {
                            fVar18 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                     AnimationCurve_Evaluate
                                               (this_00,(pTVar1->fields)._totalProgress_5__6,
                                                (MethodInfo *)0x0);
                            uVar28 = (pTVar3->fields).lockStartRot.x;
                            uVar29 = (pTVar3->fields).lockStartRot.y;
                            this_01 = (Transform *)(pTVar3->fields).lockImage;
                            in_stack_14 =
                                 (String *)
                                 (fVar18 * (pTVar3->fields).intensity * _UNK_? *
                                 _UNK_?);
                            euler.y = (float)uVar29 * _UNK_?;
                            euler.x = (float)uVar28 * _UNK_?;
                            euler.z = (float)in_stack_14;
                            pQVar30 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                      Quaternion_Internal_FromEulerRad
                                                ((Quaternion *)&stack0xffffffd8,euler,
                                                 (MethodInfo *)0x0);
                            cVar5 = (int)this_01 < 0;
                            bVar6 = this_01 == (Transform *)0x0;
                            if (!bVar6) {
                              in_stack_14 = (String *)&UNK_?;
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_localRotation(this_01,*pQVar30,(MethodInfo *)0x0);
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
  do {
    cVar31 = '\0';
    bVar32 = 0;
    uVar33 = func_?();
    pPVar21 = (ProgressBarAndroid *)uVar33;
    if (bVar6 || cVar31 != cVar5) {
      pbVar34 = (byte *)(extraout_ECX + -0x61);
      bVar35 = *pbVar34;
      bVar36 = (byte)((uint6)uVar33 >> 0x20);
      bVar37 = *pbVar34;
      *pbVar34 = bVar37 + bVar36 + bVar32;
      bVar38 = (byte)((uint)in_stack_14 >> 0x18);
      bVar39 = (byte)((uint6)uVar33 >> 8);
      bVar6 = CARRY1(bVar38,bVar39) ||
               CARRY1(bVar38 + bVar39,CARRY1(bVar35,bVar36) || CARRY1(bVar37 + bVar36,bVar32));
      bVar35 = (byte)((uint)extraout_ECX >> 8);
      bVar32 = (byte)uVar33 + bVar35;
      cVar5 = bVar32 + bVar6;
      pcVar40 = (char *)CONCAT31((int3)((uint6)uVar33 >> 8),cVar5);
      pTVar3->klass = (TierOnDeathProgress__Class *)unaff_ESI->klass;
      ppRVar41 = &(unaff_ESI->fields)._.m_ParentMask;
      *(byte *)ppRVar41 =
           *(char *)ppRVar41 + bVar36 + (CARRY1((byte)uVar33,bVar35) || CARRY1(bVar32,bVar6));
      if (*(char *)ppRVar41 != '\0') {
        uVar42 = func_?();
        this_02 = (NotSupportedException *)func_?(uVar42);
        mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
                  (this_02,(MethodInfo *)0x0);
        uVar42 = func_?(&
                                 MethodInfo__TierOnDeathProgress___DoTierProgress_d__32__System_Collections_IEnumerator_Reset__
                                );
        func_?(this_02,uVar42);
        pcVar43 = (code *)swi(3);
        bVar17 = (*pcVar43)();
        return bVar17;
      }
      *pcVar40 = *pcVar40 + cVar5;
      pcVar40[0x5b5e5f01] = pcVar40[0x5b5e5f01] + (char)((uint6)uVar33 >> 0x28);
      goto code_?;
    }
code_?:
    cVar5 = (int)pPVar21 < 0;
    bVar6 = true;
  } while (pPVar21 == (ProgressBarAndroid *)0x0);
  ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar21,1.0,(MethodInfo *)0x0);
code_?:
  (pTVar3->fields)._IsShowingTierProgress_k__BackingField = 0;
  (pTVar1->fields).__2__current = (Object *)0x0;
  func_?(&(pTVar1->fields).__2__current,0);
  (pTVar1->fields).__1__state = 3;
  pcVar40 = (char *)0x1;
code_?:
  return (bool)pcVar40;
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

