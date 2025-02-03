
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TierOnDeathProgress+<DoTierProgress>d__32::
     TierOnDeathProgress_DoTierProgress_d_32_MoveNext
               (TierOnDeathProgress_DoTierProgress_d_32 *this,MethodInfo *method)

{
  pTVar1 = this;
  method_00 = unaff_ESI;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  uStack_2 = ZEXT48((Dictionary_2_System_ByteEnum_System_Object_ *)uStack_2);
  pTVar3 = (this->fields).__4__this;
  pTVar4 = (Text *)this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    unaff_ESI = (Text *)TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    cVar6 = pPVar5 == (PlayerPlanetData *)0x0;
    if (((!(bool)cVar6) && (cVar6 = pTVar3 == (TierOnDeathProgress *)0x0, !(bool)cVar6)) &&
       (cVar6 = unaff_ESI == (Text *)0x0, !(bool)cVar6)) {
      pDVar7 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          ((PlayerTierStateCalculator *)unaff_ESI,
                           (pPVar5->fields).progressionGamePoints,
                           (int)(pTVar3->fields).tierToInterpolateFrom,(MethodInfo *)0x0);
      (this->fields)._gameTierShopStatus_5__2 = pDVar7;
      func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pTVar4 = (Text *)TypeInfo__GamePointGainEffectManager->static_fields->
                       progressBarGamePointAmountShown;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      cVar6 = pPVar5 == (PlayerPlanetData *)0x0;
      if (!(bool)cVar6) {
        iVar8 = (pPVar5->fields).progressionGamePoints;
        iVar9 = func_?();
        iVar10 = func_?();
        (this->fields)._current_5__4 = iVar9;
        (this->fields)._to_5__3 = iVar10;
        (this->fields)._stopped_5__5 = 0;
        (pTVar3->fields).fromProgress = (float)(int)pTVar4;
        (pTVar3->fields).toProgress = (float)iVar8;
        GamePointGainEffectManager::
        GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect
                  (iVar8,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown =
             iVar8;
        if (TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown !=
            (Action_1_Int32_ *)0x0) {
          (*(TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown->fields
            )._._.invoke_impl)();
        }
        pSVar11 = mscorlib.dll::System::Single::Single_ToString
                            ((Single *)&(pTVar3->fields).fromProgress,(MethodInfo *)0x0);
        str3 = mscorlib.dll::System::Single::Single_ToString
                         ((Single *)&(pTVar3->fields).toProgress,(MethodInfo *)0x0);
        unaff_ESI = (Text *)mscorlib.dll::System::String::String_Concat_5
                                      (StringLiteral_From_To_,pSVar11,::StringLiteral__,str3,
                                       (MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)unaff_ESI,(MethodInfo *)0x0);
        this = (TierOnDeathProgress_DoTierProgress_d_32 *)pTVar4;
        goto code_?;
      }
    }
    break;
  case 1:
    (this->fields).__1__state = -1;
    cVar6 = pTVar3 == (TierOnDeathProgress *)0x0;
    if (!(bool)cVar6) {
code_?:
      pCVar12 = (pTVar3->fields).unlockImage;
      cVar6 = pCVar12 == (CanvasGroup *)0x0;
      pTVar4 = (Text *)this;
      if (!(bool)cVar6) {
        pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pCVar12,(MethodInfo *)0x0);
        cVar6 = pGVar13 == (GameObject *)0x0;
        if (!(bool)cVar6) {
          method_00 = (Text *)0x0;
          bVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_get_activeInHierarchy(pGVar13,(MethodInfo *)0x0);
          if (bVar14 != 0) {
            fVar15 = (pTVar1->fields)._lockLerpTimer_5__7 / (pTVar3->fields).lockFadeLerpDuration;
            pTVar16 = (Text *)(pTVar3->fields).unlockImage;
            if (fVar15 < 0.0) {
              fVar15 = 0.0;
            }
            else if (_UNK_? < fVar15) {
              fVar15 = _UNK_?;
            }
            cVar6 = true;
            if (pTVar16 == (Text *)0x0) break;
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      ((CanvasGroup *)pTVar16,fVar15 * _UNK_? + _UNK_?,
                       (MethodInfo *)0x0);
            fVar15 = (pTVar1->fields)._lockLerpTimer_5__7;
            fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            this = (TierOnDeathProgress_DoTierProgress_d_32 *)(fVar17 + fVar15);
            (pTVar1->fields)._lockLerpTimer_5__7 = (float)this;
            method_00 = pTVar16;
            if ((float)this < (pTVar3->fields).lockFadeLerpDuration) {
              (pTVar1->fields).__2__current = (Object *)0x0;
              func_?();
              (pTVar1->fields).__1__state = 1;
              return 1;
            }
          }
          iVar18 = (pTVar1->fields)._current_5__4;
          uStack_2 = CONCAT44(iVar18,(Dictionary_2_System_ByteEnum_System_Object_ *)uStack_2);
          iVar18 = iVar18 + 1;
          (pTVar1->fields)._current_5__4 = iVar18;
          if (iVar18 == (pTVar1->fields)._to_5__3) {
            (pTVar1->fields)._stopped_5__5 = 1;
          }
          else if (iVar18 != 3) {
            pPVar19 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
            cVar6 = pPVar19 == (ProgressBarAndroid *)0x0;
            pTVar4 = (Text *)this;
            if (!(bool)cVar6) {
              ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar19,0.0,(MethodInfo *)0x0);
              pTVar16 = (Text *)(pTVar3->fields).lockImage;
              (pTVar3->fields).timer = 0.0;
              cVar6 = pTVar16 == (Text *)0x0;
              if (!(bool)cVar6) {
                pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pTVar16,(MethodInfo *)0x0);
                cVar6 = pGVar13 == (GameObject *)0x0;
                method_00 = pTVar16;
                if (!(bool)cVar6) {
                  method_00 = (Text *)&UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar13,1,(MethodInfo *)0x0);
                  pCVar12 = (pTVar3->fields).unlockImage;
                  cVar6 = pCVar12 == (CanvasGroup *)0x0;
                  if (!(bool)cVar6) {
                    pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pCVar12,(MethodInfo *)0x0);
                    cVar6 = pGVar13 == (GameObject *)0x0;
                    if (!(bool)cVar6) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar13,0,(MethodInfo *)0x0);
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
            func_?();
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
    iVar18 = (pTVar1->fields)._current_5__4;
    if (((pTVar1->fields)._to_5__3 < iVar18) || ((pTVar1->fields)._stopped_5__5 != 0)) {
code_?:
      cVar6 = pTVar3 == (TierOnDeathProgress *)0x0;
      pTVar4 = (Text *)this;
      if (!(bool)cVar6) {
code_?:
        (pTVar3->fields)._IsShowingTierProgress_k__BackingField = 0;
        (pTVar1->fields).__2__current = (Object *)0x0;
        func_?();
        (pTVar1->fields).__1__state = 3;
        return 1;
      }
    }
    else {
      cVar6 = pTVar3 == (TierOnDeathProgress *)0x0;
      pTVar4 = (Text *)this;
      if (!(bool)cVar6) {
        unaff_ESI = (pTVar3->fields).nextTierText;
        if (iVar18 == 3) {
          pTVar16 = (Text *)mscorlib.dll::System::Int32::Int32_ToString
                                      ((Int32 *)&(pTVar1->fields)._current_5__4,(MethodInfo *)0x0);
          cVar6 = unaff_ESI == (Text *)0x0;
          if (!(bool)cVar6) {
            func_?();
            pPVar19 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
            cVar6 = pPVar19 == (ProgressBarAndroid *)0x0;
            method_00 = pTVar16;
            if (!(bool)cVar6) {
              ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar19,1.0,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
        else {
          uStack_2 = CONCAT44(iVar18 + 1,(Dictionary_2_System_ByteEnum_System_Object_ *)uStack_2);
          pTVar16 = (Text *)mscorlib.dll::System::Int32::Int32_ToString
                                      ((Int32 *)((int)&uStack_2 + 4),(MethodInfo *)0x0);
          cVar6 = unaff_ESI == (Text *)0x0;
          if (!(bool)cVar6) {
            func_?();
            pDVar7 = (pTVar1->fields)._gameTierShopStatus_5__2;
            cVar6 = pDVar7 ==
                     (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                      *)0x0;
            method_00 = pTVar16;
            if (!(bool)cVar6) {
              this = (TierOnDeathProgress_DoTierProgress_d_32 *)
                     CONCAT31(this._1_3_,(char)(pTVar1->fields)._current_5__4 + '\x01');
              pOVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7,
                                   (ByteEnum__Enum)this,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                  );
              cVar6 = pOVar20 == (Object *)0x0;
              pTVar4 = (Text *)this;
              method_00 = pTVar16;
              if (!(bool)cVar6) {
                (pTVar3->fields).gamePointsRequired = (int32_t)pOVar20[3].klass;
                fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                   ((pTVar3->fields).timer / (pTVar3->fields).progressLerpDuration,
                                    (MethodInfo *)0x0);
                (pTVar1->fields)._totalProgress_5__6 = fVar15;
                UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                          ((pTVar3->fields).crystalTimer / (pTVar3->fields).progressLerpDuration,
                           (MethodInfo *)0x0);
                uStack_2 = CONCAT44(uStack_2._4_4_,(pTVar1->fields)._gameTierShopStatus_5__2);
                method_00 = (Text *)&UNK_?;
                fVar21 = (float10)func_?();
                iVar8 = (pTVar1->fields)._current_5__4;
                unaff_ESI = (Text *)(int)fVar21;
                pTVar16 = unaff_ESI;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                this = (TierOnDeathProgress_DoTierProgress_d_32 *)((byte)((char)iVar8 + 1) - 1);
                if (0 < (int)this) {
                  cVar6 = true;
                  pTVar4 = (Text *)this;
                  if ((Dictionary_2_System_ByteEnum_System_Object_ *)uStack_2 ==
                      (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) break;
                  do {
                    pOVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              ByteEnum,System::Object]::
                              Dictionary_2_System_ByteEnum_System_Object__get_Item
                                        ((Dictionary_2_System_ByteEnum_System_Object_ *)uStack_2,
                                         (ByteEnum__Enum)this,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                        );
                    cVar6 = true;
                    pTVar4 = (Text *)this;
                    if (pOVar20 == (Object *)0x0) goto code_?;
                    unaff_ESI = (Text *)((int)unaff_ESI - (int)pOVar20[3].klass);
                    if ((int)unaff_ESI < 1) {
                      unaff_ESI = (Text *)0x0;
                    }
                    this = (TierOnDeathProgress_DoTierProgress_d_32 *)
                           ((int)&this[-1].fields._lockLerpTimer_5__7 + 3);
                    pTVar16 = unaff_ESI;
                  } while (0 < (int)this);
                }
                cVar6 = (pTVar3->fields).tierProgressBar == (ProgressBar *)0x0;
                pTVar4 = (Text *)this;
                if (!(bool)cVar6) {
                  fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                     ((float)(int)unaff_ESI /
                                      (float)(pTVar3->fields).gamePointsRequired,(MethodInfo *)0x0);
                  ProgressBarAndroid::ProgressBarAndroid_set_Progress
                            ((ProgressBarAndroid *)(pTVar3->fields).tierProgressBar,fVar15,
                             (MethodInfo *)method_00);
                  fVar21 = (float10)func_?();
                  this = (TierOnDeathProgress_DoTierProgress_d_32 *)
                         (pTVar3->fields).crystalsGainedSinceDeath;
                  (pTVar3->fields).currentCrystalValue = (float)fVar21;
                  mscorlib.dll::System::Single::Single_ToString
                            ((Single *)&(pTVar3->fields).currentCrystalValue,(MethodInfo *)0x0);
                  cVar6 = (Text *)this == (Text *)0x0;
                  pTVar4 = (Text *)this;
                  if (!(bool)cVar6) {
                    func_?();
                    pRVar22 = (pTVar3->fields).lockImage;
                    cVar6 = pRVar22 == (RectTransform *)0x0;
                    if (!(bool)cVar6) {
                      pGStackY_88 = (GamePassesTextBubble *)&UNK_?;
                      pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pRVar22,(MethodInfo *)0x0);
                      cVar6 = pGVar13 == (GameObject *)0x0;
                      if (!(bool)cVar6) {
                        bVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_get_activeInHierarchy(pGVar13,(MethodInfo *)0x0);
                        if (bVar14 == 0) {
code_?:
                          pGVar13 = (pTVar3->fields).progressBarDivider;
                          cVar6 = pGVar13 == (GameObject *)0x0;
                          pTVar4 = (Text *)this;
                          if (!(bool)cVar6) {
                            bVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                     GameObject_get_activeSelf(pGVar13,(MethodInfo *)0x0);
                            if (bVar14 != 0) {
                              pPVar23 = (pTVar3->fields).tierProgressBar;
                              cVar6 = true;
                              if (pPVar23 == (ProgressBar *)0x0) break;
                              if ((pPVar23->fields).progress <= 0.0) {
                                pGVar13 = (pTVar3->fields).progressBarDivider;
                                cVar6 = true;
                                if (pGVar13 == (GameObject *)0x0) break;
                                method_00 = (Text *)0x0;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar13,0,(MethodInfo *)0x0);
                              }
                            }
                            (pTVar3->fields).unlockingTier =
                                 (float)(pTVar3->fields).gamePointsRequired <= (float)(int)unaff_ESI
                            ;
                            this = (TierOnDeathProgress_DoTierProgress_d_32 *)
                                   (pTVar3->fields).progressText;
                            unaff_ESI = (Text *)mscorlib.dll::System::Int32::Int32_ToString
                                                          ((Int32 *)&stack0xfffffff0,
                                                           (MethodInfo *)0x0);
                            pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                                                ((Int32 *)&(pTVar3->fields).gamePointsRequired,
                                                 (MethodInfo *)0x0);
                            mscorlib.dll::System::String::String_Concat_4
                                      ((String *)unaff_ESI,::StringLiteral____,pSVar11,
                                       (MethodInfo *)0x0);
                            cVar6 = (Text *)this == (Text *)0x0;
                            pTVar4 = (Text *)this;
                            if (!(bool)cVar6) {
                              func_?();
                              if ((pTVar3->fields).unlockingTier == 0) goto code_?;
                              pRVar22 = (pTVar3->fields).lockImage;
                              (pTVar3->fields).fromProgress = (float)(int)pTVar16;
                              cVar6 = pRVar22 == (RectTransform *)0x0;
                              if (!(bool)cVar6) {
                                pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_gameObject
                                                    ((Component *)pRVar22,(MethodInfo *)0x0);
                                cVar6 = pGVar13 == (GameObject *)0x0;
                                if (!(bool)cVar6) {
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_SetActive(pGVar13,0,(MethodInfo *)0x0);
                                  pCVar12 = (pTVar3->fields).unlockImage;
                                  cVar6 = pCVar12 == (CanvasGroup *)0x0;
                                  if (!(bool)cVar6) {
                                    pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_get_gameObject
                                                        ((Component *)pCVar12,(MethodInfo *)0x0);
                                    cVar6 = pGVar13 == (GameObject *)0x0;
                                    if (!(bool)cVar6) {
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_SetActive(pGVar13,1,(MethodInfo *)0x0);
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
                          cVar6 = this_00 == (AnimationCurve *)0x0;
                          if (!(bool)cVar6) {
                            fVar15 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                     AnimationCurve_Evaluate
                                               (this_00,(pTVar1->fields)._totalProgress_5__6,
                                                (MethodInfo *)0x0);
                            uVar24 = (pTVar3->fields).lockStartRot.x;
                            uVar25 = (pTVar3->fields).lockStartRot.y;
                            this = (TierOnDeathProgress_DoTierProgress_d_32 *)
                                   (pTVar3->fields).lockImage;
                            euler.y = (float)uVar25 * _UNK_?;
                            euler.x = (float)uVar24 * _UNK_?;
                            euler.z = fVar15 * (pTVar3->fields).intensity * _UNK_? *
                                      _UNK_?;
                            pQVar26 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                      Quaternion_Internal_FromEulerRad
                                                ((Quaternion *)&stack0xffffffd8,euler,
                                                 (MethodInfo *)0x0);
                            cVar6 = this == (TierOnDeathProgress_DoTierProgress_d_32 *)0x0;
                            pTVar4 = (Text *)this;
                            if (!(bool)cVar6) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_localRotation
                                        ((Transform *)this,*pQVar26,(MethodInfo *)0x0);
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
  this = (TierOnDeathProgress_DoTierProgress_d_32 *)pTVar4;
  cVar27 = '\0';
  uVar28 = func_?();
  if (extraout_ECX == 1 || cVar6 == '\0') {
    ppMVar29 = &(unaff_ESI->fields)._.m_MaskMaterial;
    *(char *)ppMVar29 = *(char *)ppMVar29 + (char)((ulonglong)uVar28 >> 0x20) + cVar27;
    method_00[-1].fields.m_TempVerts =
         (UIVertex__Array *)
         CONCAT22((short)((ulonglong)uVar28 >> 0x10),
                  (ushort)(byte)((char)uVar28 - (char)((ulonglong)uVar28 >> 8)));
    pbVar30 = &method_00[-1].fields.m_DisableFontTextureRebuiltCallback;
    *(undefined **)&method_00[-1].fields.m_DisableFontTextureRebuiltCallback = &UNK_?;
    uVar31 = func_?();
    *(undefined4 *)(pbVar30 + -4) = 0;
    *(undefined4 *)(pbVar30 + -8) = uVar31;
    *(undefined **)(pbVar30 + -0xc) = &UNK_?;
    mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
              (*(NotSupportedException **)(pbVar30 + -8),*(MethodInfo **)(pbVar30 + -4));
    *(MethodInfo ***)(pbVar30 + -4) =
         &
         MethodInfo__TierOnDeathProgress___DoTierProgress_d__32__System_Collections_IEnumerator_Reset__
    ;
    puVar32 = pbVar30 + -8;
    *(undefined **)(pbVar30 + -8) = &UNK_?;
    uVar33 = func_?();
    *(undefined4 *)(puVar32 + 0x10) = uVar33;
    *(undefined4 *)(puVar32 + 0xc) = uVar31;
    *(undefined **)(puVar32 + 8) = &UNK_?;
    func_?();
    pcVar34 = (code *)swi(3);
    bVar14 = (*pcVar34)();
    return bVar14;
  }
  pcVar35 = (char *)((int)((ulonglong)uVar28 >> 0x20) + 0x5ca4e811 + (int)unaff_ESI * 4);
  *pcVar35 = *pcVar35 - (char)((ulonglong)uVar28 >> 0x28);
  uRam_? = 1;
  iVar18 = (this->fields).__1__state;
  pTVar3 = (this->fields).__4__this;
  if (iVar18 == 0) {
    (this->fields).__1__state = -1;
    (this->fields)._to_5__3 = 0;
    (this->fields)._current_5__4 = 0x3f800000;
    if ((pTVar3 == (TierOnDeathProgress *)0x0) ||
       (pLVar36 = (List_1_GameTierProgressBar_TierProgressData_ *)(pTVar3->fields).lockShakeCurve,
       pLVar36 == (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) goto code_?;
    pGVar37 = mscorlib.dll::System::Collections::Generic::
              List`1[GameTierProgressBar+TierProgressData]::
              List_1_GameTierProgressBar_TierProgressData__get_Item
                        ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar36,
                         (int32_t)(this->fields)._gameTierShopStatus_5__2,
                         MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                        );
    uStack_2._0_4_ = (Dictionary_2_System_ByteEnum_System_Object_ *)pGVar37->hoverInputHandler;
    uStack_2._4_4_ = pGVar37->LockedTierIcon;
    if ((CanvasGroup *)uStack_2._4_4_ == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              ((CanvasGroup *)uStack_2._4_4_,1.0,(MethodInfo *)0x0);
  }
  else {
    if (iVar18 != 1) {
      if (iVar18 == 2) {
        (this->fields).__1__state = -1;
      }
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  if ((float)(this->fields)._current_5__4 <= 0.0) {
    if ((pTVar3 != (TierOnDeathProgress *)0x0) &&
       (pLVar36 = (List_1_GameTierProgressBar_TierProgressData_ *)(pTVar3->fields).lockShakeCurve,
       pLVar36 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0)) {
      pGVar37 = mscorlib.dll::System::Collections::Generic::
                List`1[GameTierProgressBar+TierProgressData]::
                List_1_GameTierProgressBar_TierProgressData__get_Item
                          ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar36,
                           (int32_t)(this->fields)._gameTierShopStatus_5__2,
                           MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                          );
      uStack_2._0_4_ = (Dictionary_2_System_ByteEnum_System_Object_ *)pGVar37->hoverInputHandler;
      uStack_2._4_4_ = pGVar37->LockedTierIcon;
      if ((CanvasGroup *)uStack_2._4_4_ != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  ((CanvasGroup *)uStack_2._4_4_,0.0,(MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)0x0;
        func_?();
        (this->fields).__1__state = 2;
        return 1;
      }
    }
  }
  else {
    fVar15 = (float)(this->fields)._to_5__3;
    fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar17 = fVar17 + fVar15;
    (this->fields)._to_5__3 = (int32_t)fVar17;
    if (pTVar3 != (TierOnDeathProgress *)0x0) {
      (this->fields)._current_5__4 =
           (int32_t)(_UNK_? - fVar17 / (pTVar3->fields).progressLerpDuration);
      pLVar36 = (List_1_GameTierProgressBar_TierProgressData_ *)(pTVar3->fields).lockShakeCurve;
      if (pLVar36 != (List_1_GameTierProgressBar_TierProgressData_ *)0x0) {
        pGVar37 = mscorlib.dll::System::Collections::Generic::
                  List`1[GameTierProgressBar+TierProgressData]::
                  List_1_GameTierProgressBar_TierProgressData__get_Item
                            ((GameTierProgressBar_TierProgressData *)&stack0xffffff6c,pLVar36,
                             (int32_t)(this->fields)._gameTierShopStatus_5__2,
                             MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
                            );
        uStack_2._0_4_ = (Dictionary_2_System_ByteEnum_System_Object_ *)pGVar37->hoverInputHandler;
        uStack_2._4_4_ = pGVar37->LockedTierIcon;
        if ((CanvasGroup *)uStack_2._4_4_ != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    ((CanvasGroup *)uStack_2._4_4_,(float)(this->fields)._current_5__4,
                     (MethodInfo *)0x0);
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
  bVar14 = (*pcVar34)();
  return bVar14;
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

