
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
            str3 = mscorlib.dll::System::Single::Single_ToString
                             ((Single *)&(pTVar3->fields).toProgress,(MethodInfo *)0x0);
            unaff_ESI = (Text *)mscorlib.dll::System::String::String_Concat_5
                                          (StringLiteral_From_To_,pSVar13,::StringLiteral__,str3,
                                           (MethodInfo *)0x0);
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
      pCVar14 = (pTVar3->fields).unlockImage;
      cVar5 = (int)pCVar14 < 0;
      bVar6 = pCVar14 == (CanvasGroup *)0x0;
      if (!bVar6) {
        pGVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pCVar14,(MethodInfo *)0x0);
        cVar5 = (int)pGVar15 < 0;
        bVar6 = pGVar15 == (GameObject *)0x0;
        if (!bVar6) {
          bVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_get_activeInHierarchy(pGVar15,(MethodInfo *)0x0);
          if (bVar16 != 0) {
            fVar17 = (pTVar1->fields)._lockLerpTimer_5__7 / (pTVar3->fields).lockFadeLerpDuration;
            pCVar14 = (pTVar3->fields).unlockImage;
            if (fVar17 < 0.0) {
              fVar17 = 0.0;
            }
            else if (_UNK_? < fVar17) {
              fVar17 = _UNK_?;
            }
            cVar5 = (int)pCVar14 < 0;
            bVar6 = true;
            if (pCVar14 == (CanvasGroup *)0x0) break;
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (pCVar14,fVar17 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
            fVar17 = (pTVar1->fields)._lockLerpTimer_5__7;
            fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            fVar18 = fVar18 + fVar17;
            (pTVar1->fields)._lockLerpTimer_5__7 = fVar18;
            if (fVar18 < (pTVar3->fields).lockFadeLerpDuration) {
              (pTVar1->fields).__2__current = (Object *)0x0;
              func_?();
              (pTVar1->fields).__1__state = 1;
              return 1;
            }
          }
          IStack_2.m_value = (pTVar1->fields)._current_5__4;
          iVar19 = IStack_2.m_value + 1;
          (pTVar1->fields)._current_5__4 = iVar19;
          if (iVar19 == (pTVar1->fields)._to_5__3) {
            (pTVar1->fields)._stopped_5__5 = 1;
          }
          else if (iVar19 != 3) {
            pPVar20 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
            cVar5 = (int)pPVar20 < 0;
            bVar6 = pPVar20 == (ProgressBarAndroid *)0x0;
            if (!bVar6) {
              ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar20,0.0,(MethodInfo *)0x0);
              pRVar21 = (pTVar3->fields).lockImage;
              (pTVar3->fields).timer = 0.0;
              cVar5 = (int)pRVar21 < 0;
              bVar6 = pRVar21 == (RectTransform *)0x0;
              if (!bVar6) {
                pGVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pRVar21,(MethodInfo *)0x0);
                cVar5 = (int)pGVar15 < 0;
                bVar6 = pGVar15 == (GameObject *)0x0;
                if (!bVar6) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar15,1,(MethodInfo *)0x0);
                  pCVar14 = (pTVar3->fields).unlockImage;
                  cVar5 = (int)pCVar14 < 0;
                  bVar6 = pCVar14 == (CanvasGroup *)0x0;
                  if (!bVar6) {
                    pGVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pCVar14,(MethodInfo *)0x0);
                    cVar5 = (int)pGVar15 < 0;
                    bVar6 = pGVar15 == (GameObject *)0x0;
                    if (!bVar6) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar15,0,(MethodInfo *)0x0);
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
    iVar19 = (pTVar1->fields)._current_5__4;
    if (((pTVar1->fields)._to_5__3 < iVar19) || ((pTVar1->fields)._stopped_5__5 != 0)) {
code_?:
      cVar5 = (int)pTVar3 < 0;
      bVar6 = pTVar3 == (TierOnDeathProgress *)0x0;
      if (!bVar6) goto code_?;
      break;
    }
    cVar5 = (int)pTVar3 < 0;
    bVar6 = true;
    if (pTVar3 == (TierOnDeathProgress *)0x0) break;
    unaff_ESI = (pTVar3->fields).nextTierText;
    if (iVar19 != 3) {
      IStack_2.m_value = iVar19 + 1;
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
          pOVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7,
                               (ByteEnum__Enum)this,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                              );
          cVar5 = (int)pOVar22 < 0;
          bVar6 = pOVar22 == (Object *)0x0;
          if (!bVar6) {
            (pTVar3->fields).gamePointsRequired = (int32_t)pOVar22[3].klass;
            fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                               ((pTVar3->fields).timer / (pTVar3->fields).progressLerpDuration,
                                (MethodInfo *)0x0);
            (pTVar1->fields)._totalProgress_5__6 = fVar18;
            UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                      ((pTVar3->fields).crystalTimer / (pTVar3->fields).progressLerpDuration,
                       (MethodInfo *)0x0);
            fVar17 = (pTVar3->fields).fromProgress;
            if (fVar18 < 0.0) {
              fVar18 = 0.0;
            }
            else if (_UNK_? < fVar18) {
              fVar18 = _UNK_?;
            }
            pDVar7 = (pTVar1->fields)._gameTierShopStatus_5__2;
            method_00 = (MethodInfo *)&UNK_?;
            fVar23 = (float10)func_?(SUB84((double)(((pTVar3->fields).toProgress - fVar17)
                                                             * fVar18 + fVar17),0));
            iVar9 = (pTVar1->fields)._current_5__4;
            unaff_ESI = (Text *)(int)fVar23;
            pTVar24 = unaff_ESI;
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
                pOVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7,key,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                    );
                cVar5 = (int)pOVar22 < 0;
                bVar6 = true;
                if (pOVar22 == (Object *)0x0) goto code_?;
                unaff_ESI = (Text *)((int)unaff_ESI - (int)pOVar22[3].klass);
                if ((int)unaff_ESI < 1) {
                  unaff_ESI = (Text *)0x0;
                }
                key = key - 1;
                pTVar24 = unaff_ESI;
              } while (0 < (int)key);
            }
            pPVar25 = (pTVar3->fields).tierProgressBar;
            cVar5 = (int)pPVar25 < 0;
            bVar6 = pPVar25 == (ProgressBar *)0x0;
            if (!bVar6) {
              fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                 ((float)(int)unaff_ESI / (float)(pTVar3->fields).gamePointsRequired
                                  ,(MethodInfo *)0x0);
              ProgressBarAndroid::ProgressBarAndroid_set_Progress
                        ((ProgressBarAndroid *)(pTVar3->fields).tierProgressBar,fVar17,method_00);
              fVar23 = (float10)func_?();
              pTVar26 = (pTVar3->fields).crystalsGainedSinceDeath;
              (pTVar3->fields).currentCrystalValue = (float)fVar23;
              pSVar13 = mscorlib.dll::System::Single::Single_ToString
                                  ((Single *)&(pTVar3->fields).currentCrystalValue,(MethodInfo *)0x0
                                  );
              cVar5 = (int)pTVar26 < 0;
              bVar6 = pTVar26 == (Text *)0x0;
              if (!bVar6) {
                func_?(0x4b,pTVar26,pSVar13);
                pRVar21 = (pTVar3->fields).lockImage;
                cVar5 = (int)pRVar21 < 0;
                bVar6 = pRVar21 == (RectTransform *)0x0;
                if (!bVar6) {
                  pGVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pRVar21,(MethodInfo *)0x0);
                  cVar5 = (int)pGVar15 < 0;
                  bVar6 = pGVar15 == (GameObject *)0x0;
                  if (!bVar6) {
                    bVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_activeInHierarchy(pGVar15,(MethodInfo *)0x0);
                    if (bVar16 == 0) {
code_?:
                      pGVar15 = (pTVar3->fields).progressBarDivider;
                      cVar5 = (int)pGVar15 < 0;
                      bVar6 = pGVar15 == (GameObject *)0x0;
                      if (!bVar6) {
                        bVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_get_activeSelf(pGVar15,(MethodInfo *)0x0);
                        if (bVar16 != 0) {
                          pPVar25 = (pTVar3->fields).tierProgressBar;
                          cVar5 = (int)pPVar25 < 0;
                          bVar6 = true;
                          if (pPVar25 == (ProgressBar *)0x0) break;
                          if ((pPVar25->fields).progress <= 0.0) {
                            pGVar15 = (pTVar3->fields).progressBarDivider;
                            cVar5 = (int)pGVar15 < 0;
                            bVar6 = true;
                            if (pGVar15 == (GameObject *)0x0) break;
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar15,0,(MethodInfo *)0x0);
                          }
                        }
                        (pTVar3->fields).unlockingTier =
                             (float)(pTVar3->fields).gamePointsRequired <= (float)(int)unaff_ESI;
                        pTVar26 = (pTVar3->fields).progressText;
                        unaff_ESI = (Text *)mscorlib.dll::System::Int32::Int32_ToString
                                                      ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
                        pSVar13 = mscorlib.dll::System::Int32::Int32_ToString
                                            ((Int32 *)&(pTVar3->fields).gamePointsRequired,
                                             (MethodInfo *)0x0);
                        in_stack_27 = (byte)((uint)::StringLiteral____ >> 0x10);
                        pSVar13 = mscorlib.dll::System::String::String_Concat_4
                                            ((String *)unaff_ESI,::StringLiteral____,pSVar13,
                                             (MethodInfo *)0x0);
                        cVar5 = (int)pTVar26 < 0;
                        bVar6 = pTVar26 == (Text *)0x0;
                        if (!bVar6) {
                          func_?(0x4b,pTVar26,pSVar13);
                          if ((pTVar3->fields).unlockingTier == 0) goto code_?;
                          pRVar21 = (pTVar3->fields).lockImage;
                          (pTVar3->fields).fromProgress = (float)(int)pTVar24;
                          cVar5 = (int)pRVar21 < 0;
                          bVar6 = pRVar21 == (RectTransform *)0x0;
                          if (!bVar6) {
                            pGVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_gameObject
                                                ((Component *)pRVar21,(MethodInfo *)0x0);
                            cVar5 = (int)pGVar15 < 0;
                            bVar6 = pGVar15 == (GameObject *)0x0;
                            if (!bVar6) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar15,0,(MethodInfo *)0x0);
                              pCVar14 = (pTVar3->fields).unlockImage;
                              cVar5 = (int)pCVar14 < 0;
                              bVar6 = pCVar14 == (CanvasGroup *)0x0;
                              if (!bVar6) {
                                pGVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_gameObject
                                                    ((Component *)pCVar14,(MethodInfo *)0x0);
                                cVar5 = (int)pGVar15 < 0;
                                bVar6 = pGVar15 == (GameObject *)0x0;
                                if (!bVar6) {
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_SetActive(pGVar15,1,(MethodInfo *)0x0);
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
                        fVar17 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                 AnimationCurve_Evaluate
                                           (this_00,(pTVar1->fields)._totalProgress_5__6,
                                            (MethodInfo *)0x0);
                        uVar28 = (pTVar3->fields).lockStartRot.x;
                        uVar29 = (pTVar3->fields).lockStartRot.y;
                        this_01 = (Transform *)(pTVar3->fields).lockImage;
                        euler.y = (float)uVar29 * _UNK_?;
                        euler.x = (float)uVar28 * _UNK_?;
                        euler.z = fVar17 * (pTVar3->fields).intensity * _UNK_? *
                                  _UNK_?;
                        pQVar30 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                  Quaternion_Internal_FromEulerRad
                                            ((Quaternion *)&stack0xffffffd8,euler,(MethodInfo *)0x0)
                        ;
                        cVar5 = (int)this_01 < 0;
                        bVar6 = this_01 == (Transform *)0x0;
                        if (!bVar6) {
                          in_stack_27 = (byte)((uint)pQVar30->x >> 0x10);
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
      break;
    }
    pSVar13 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&(pTVar1->fields)._current_5__4,(MethodInfo *)0x0);
    cVar5 = (int)unaff_ESI < 0;
    bVar6 = true;
    if (unaff_ESI == (Text *)0x0) break;
    func_?(0x4b,unaff_ESI,pSVar13);
    pPVar20 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
    cVar5 = (int)pPVar20 < 0;
    bVar6 = true;
    if (pPVar20 == (ProgressBarAndroid *)0x0) break;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
code_?:
  cVar31 = '\0';
  bVar32 = 0;
  pPVar20 = (ProgressBarAndroid *)func_?();
  if (bVar6 || cVar31 != cVar5) {
    pbVar33 = (byte *)(extraout_ECX + -0x5a);
    bVar34 = *pbVar33;
    bVar35 = *pbVar33;
    *pbVar33 = bVar35 + extraout_DL + bVar32;
    bVar36 = (byte)((uint)pPVar20 >> 8);
    bVar37 = (byte)((uint)extraout_ECX >> 8);
    pcVar38 = (char *)((int)&(unaff_ESI->fields)._.m_MaskMaterial + 1);
    *pcVar38 = *pcVar38 + extraout_DL +
              (CARRY1((byte)pPVar20,bVar37) ||
              CARRY1((byte)pPVar20 + bVar37,
                     CARRY1(in_stack_27,bVar36) ||
                     CARRY1(in_stack_27 + bVar36,
                            CARRY1(bVar34,extraout_DL) || CARRY1(bVar35 + extraout_DL,bVar32))));
    uVar39 = func_?();
    this_02 = (NotSupportedException *)func_?(uVar39);
    mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
              (this_02,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__TierOnDeathProgress___DoTierProgress_d__32__System_Collections_IEnumerator_Reset__
                   );
    func_?(this_02);
    pcVar40 = (code *)swi(3);
    bVar16 = (*pcVar40)();
    return bVar16;
  }
code_?:
  ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar20,1.0,(MethodInfo *)0x0);
code_?:
  (pTVar3->fields)._IsShowingTierProgress_k__BackingField = 0;
  (pTVar1->fields).__2__current = (Object *)0x0;
  func_?(&(pTVar1->fields).__2__current,0);
  (pTVar1->fields).__1__state = 3;
  return 1;
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

