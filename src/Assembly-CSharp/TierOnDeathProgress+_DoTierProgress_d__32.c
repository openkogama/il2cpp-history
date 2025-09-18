
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
    if (((pPVar4 != (PlayerPlanetData *)0x0) && (pTVar3 != (TierOnDeathProgress *)0x0)) &&
       (unaff_ESI != (Text *)0x0)) {
      pDVar5 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          ((PlayerTierStateCalculator *)unaff_ESI,
                           (pPVar4->fields).progressionGamePoints,
                           (int)(pTVar3->fields).tierToInterpolateFrom,(MethodInfo *)0x0);
      (this->fields)._gameTierShopStatus_5__2 = pDVar5;
      func_?(&(this->fields)._gameTierShopStatus_5__2,pDVar5);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePointGainEffectManager);
        cRam_? = '\x01';
      }
      pTVar6 = (TierOnDeathProgress_DoTierProgress_d_32 *)
               TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePassesManager);
        cRam_? = '\x01';
      }
      pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar4 != (PlayerPlanetData *)0x0) {
        iVar7 = (pPVar4->fields).progressionGamePoints;
        iVar8 = func_?((pTVar3->fields).tierToInterpolateFrom,0);
        iVar9 = func_?((pTVar3->fields).tierToInterpolateTo,0);
        (this->fields)._current_5__4 = iVar8;
        (this->fields)._to_5__3 = iVar9;
        (this->fields)._stopped_5__5 = 0;
        (pTVar3->fields).fromProgress = (float)(int)pTVar6;
        (pTVar3->fields).toProgress = (float)iVar7;
        GamePointGainEffectManager::
        GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect
                  (iVar7,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePointGainEffectManager);
          cRam_? = '\x01';
        }
        TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown =
             iVar7;
        if (TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown !=
            (Action_1_Int32_ *)0x0) {
          pAVar10 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
          (*(pAVar10->fields)._._.invoke_impl)
                    ((pAVar10->fields)._._.method_code,iVar7,(pAVar10->fields)._._.method);
        }
        pSVar11 = mscorlib.dll::System::Single::Single_ToString
                            ((Single *)&(pTVar3->fields).fromProgress,(MethodInfo *)0x0);
        str3 = mscorlib.dll::System::Single::Single_ToString
                         ((Single *)&(pTVar3->fields).toProgress,(MethodInfo *)0x0);
        unaff_ESI = (Text *)mscorlib.dll::System::String::String_Concat_5
                                      (StringLiteral_From_To_,pSVar11,::StringLiteral__,str3,
                                       (MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)unaff_ESI,(MethodInfo *)0x0);
        this = pTVar6;
        goto code_?;
      }
    }
    break;
  case 1:
    (this->fields).__1__state = -1;
    if (pTVar3 != (TierOnDeathProgress *)0x0) {
code_?:
      pCVar12 = (pTVar3->fields).unlockImage;
      if ((pCVar12 != (CanvasGroup *)0x0) &&
         (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar12,(MethodInfo *)0x0), pGVar13 != (GameObject *)0x0
         )) {
        bVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_get_activeInHierarchy(pGVar13,(MethodInfo *)0x0);
        if (bVar14 != 0) {
          pCVar15 = (CanvasGroup *)
                    ((pTVar1->fields)._lockLerpTimer_5__7 / (pTVar3->fields).lockFadeLerpDuration);
          pCVar12 = (pTVar3->fields).unlockImage;
          if ((float)pCVar15 < 0.0) {
            pCVar15 = (CanvasGroup *)0x0;
          }
          else if ((float)_UNK_? < (float)pCVar15) {
            pCVar15 = _UNK_?;
          }
          if (pCVar12 == (CanvasGroup *)0x0) break;
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar12,(float)pCVar15 * _UNK_? + (float)_UNK_?,(MethodInfo *)0x0
                    );
          fVar16 = (pTVar1->fields)._lockLerpTimer_5__7;
          fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
          fVar17 = fVar17 + fVar16;
          (pTVar1->fields)._lockLerpTimer_5__7 = fVar17;
          if (fVar17 < (pTVar3->fields).lockFadeLerpDuration) {
            (pTVar1->fields).__2__current = (Object *)0x0;
            func_?();
            (pTVar1->fields).__1__state = 1;
            return 1;
          }
        }
        IStack_2.m_value = (pTVar1->fields)._current_5__4;
        iVar18 = IStack_2.m_value + 1;
        (pTVar1->fields)._current_5__4 = iVar18;
        if (iVar18 == (pTVar1->fields)._to_5__3) {
          (pTVar1->fields)._stopped_5__5 = 1;
        }
        else if (iVar18 != 3) {
          pPVar19 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
          if (pPVar19 != (ProgressBarAndroid *)0x0) {
            ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar19,0.0,(MethodInfo *)0x0);
            pRVar20 = (pTVar3->fields).lockImage;
            (pTVar3->fields).timer = 0.0;
            if ((pRVar20 != (RectTransform *)0x0) &&
               (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pRVar20,(MethodInfo *)0x0),
               pGVar13 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar13,1,(MethodInfo *)0x0);
              pCVar12 = (pTVar3->fields).unlockImage;
              if (pCVar12 != (CanvasGroup *)0x0) {
                in_stack_21 = 0;
                pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pCVar12,(MethodInfo *)0x0);
                in_stack_22 = pCVar12;
                if (pGVar13 != (GameObject *)0x0) {
                  in_stack_22 = (CanvasGroup *)&UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar13,0,(MethodInfo *)0x0);
                  in_stack_21 = SUB41(pGVar13,0);
                  goto code_?;
                }
              }
            }
          }
          break;
        }
code_?:
        if ((pTVar1->fields)._totalProgress_5__6 < (float)_UNK_?) {
          (pTVar1->fields).__2__current = (Object *)0x0;
          func_?(&(pTVar1->fields).__2__current,0);
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
    iVar18 = (pTVar1->fields)._current_5__4;
    if (((pTVar1->fields)._to_5__3 < iVar18) || ((pTVar1->fields)._stopped_5__5 != 0)) {
code_?:
      if (pTVar3 != (TierOnDeathProgress *)0x0) {
code_?:
        (pTVar3->fields)._IsShowingTierProgress_k__BackingField = 0;
        (pTVar1->fields).__2__current = (Object *)0x0;
        func_?(&(pTVar1->fields).__2__current,0);
        (pTVar1->fields).__1__state = 3;
        return 1;
      }
    }
    else if (pTVar3 != (TierOnDeathProgress *)0x0) {
      unaff_ESI = (pTVar3->fields).nextTierText;
      if (iVar18 == 3) {
        pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                            ((Int32 *)&(pTVar1->fields)._current_5__4,(MethodInfo *)0x0);
        if (unaff_ESI != (Text *)0x0) {
          func_?(0x4b,unaff_ESI,pSVar11);
          pPVar19 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
          if (pPVar19 != (ProgressBarAndroid *)0x0) {
            ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar19,1.0,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
      else {
        IStack_2.m_value = iVar18 + 1;
        pSVar11 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
        if (unaff_ESI != (Text *)0x0) {
          func_?(0x4b,unaff_ESI,pSVar11);
          pDVar5 = (pTVar1->fields)._gameTierShopStatus_5__2;
          if (pDVar5 !=
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0) {
            this = (TierOnDeathProgress_DoTierProgress_d_32 *)
                   CONCAT31(this._1_3_,(char)(pTVar1->fields)._current_5__4 + '\x01');
            pOVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,
                                 (ByteEnum__Enum)this,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                );
            if (pOVar23 != (Object *)0x0) {
              (pTVar3->fields).gamePointsRequired = (int32_t)pOVar23[3].klass;
              pCVar12 = (CanvasGroup *)
                        UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                  ((pTVar3->fields).timer / (pTVar3->fields).progressLerpDuration,
                                   (MethodInfo *)0x0);
              (pTVar1->fields)._totalProgress_5__6 = (float)pCVar12;
              in_stack_22 =
                   (CanvasGroup *)
                   UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                             ((pTVar3->fields).crystalTimer / (pTVar3->fields).progressLerpDuration,
                              (MethodInfo *)0x0);
              fVar16 = (pTVar3->fields).fromProgress;
              if ((float)pCVar12 < 0.0) {
                pCVar12 = (CanvasGroup *)0x0;
              }
              else if ((float)_UNK_? < (float)pCVar12) {
                pCVar12 = _UNK_?;
              }
              pDVar5 = (pTVar1->fields)._gameTierShopStatus_5__2;
              method_00 = (MethodInfo *)&UNK_?;
              fVar24 = (float10)func_?(SUB84((double)(((pTVar3->fields).toProgress - fVar16
                                                               ) * (float)pCVar12 + fVar16),0));
              iVar7 = (pTVar1->fields)._current_5__4;
              uVar25 = SUB84((double)fVar24,0);
              unaff_ESI = (Text *)(int)fVar24;
              pTVar26 = unaff_ESI;
              if (cRam_? == '\0') {
                func_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                               );
                cRam_? = '\x01';
              }
              in_stack_21 = (undefined1)uVar25;
              key = (byte)((char)iVar7 + 1) - 1;
              if (0 < (int)key) {
                if (pDVar5 ==
                    (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                     *)0x0) break;
                do {
                  pOVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            ByteEnum,System::Object]::
                            Dictionary_2_System_ByteEnum_System_Object__get_Item
                                      ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,key,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                      );
                  in_stack_21 = (undefined1)uVar25;
                  if (pOVar23 == (Object *)0x0) goto code_?;
                  unaff_ESI = (Text *)((int)unaff_ESI - (int)pOVar23[3].klass);
                  if ((int)unaff_ESI < 1) {
                    unaff_ESI = (Text *)0x0;
                  }
                  key = key - 1;
                  pTVar26 = unaff_ESI;
                } while (0 < (int)key);
              }
              if ((pTVar3->fields).tierProgressBar != (ProgressBar *)0x0) {
                fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                                   ((float)(int)unaff_ESI /
                                    (float)(pTVar3->fields).gamePointsRequired,(MethodInfo *)0x0);
                ProgressBarAndroid::ProgressBarAndroid_set_Progress
                          ((ProgressBarAndroid *)(pTVar3->fields).tierProgressBar,fVar16,method_00);
                fVar16 = (float)(pTVar3->fields).crystalValue;
                if ((float)in_stack_22 < 0.0) {
                  in_stack_22 = (CanvasGroup *)0x0;
                }
                else if ((float)_UNK_? < (float)in_stack_22) {
                  in_stack_22 = _UNK_?;
                }
                dVar27 = (double)((0.0 - fVar16) * (float)in_stack_22 + fVar16);
                fVar24 = (float10)func_?();
                pTVar28 = (pTVar3->fields).crystalsGainedSinceDeath;
                (pTVar3->fields).currentCrystalValue = (float)fVar24;
                pSVar11 = mscorlib.dll::System::Single::Single_ToString
                                    ((Single *)&(pTVar3->fields).currentCrystalValue,
                                     (MethodInfo *)0x0);
                in_stack_22 = (CanvasGroup *)((ulonglong)dVar27 >> 0x20);
                if (pTVar28 != (Text *)0x0) {
                  func_?(0x4b,pTVar28,pSVar11);
                  pRVar20 = (pTVar3->fields).lockImage;
                  if ((pRVar20 != (RectTransform *)0x0) &&
                     (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pRVar20,(MethodInfo *)0x0),
                     pGVar13 != (GameObject *)0x0)) {
                    bVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                             GameObject_get_activeInHierarchy(pGVar13,(MethodInfo *)0x0);
                    if (bVar14 == 0) {
code_?:
                      pGVar13 = (pTVar3->fields).progressBarDivider;
                      if (pGVar13 != (GameObject *)0x0) {
                        bVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_get_activeSelf(pGVar13,(MethodInfo *)0x0);
                        if (bVar14 != 0) {
                          pPVar29 = (pTVar3->fields).tierProgressBar;
                          if (pPVar29 == (ProgressBar *)0x0) break;
                          if ((pPVar29->fields).progress <= 0.0) {
                            pGVar13 = (pTVar3->fields).progressBarDivider;
                            if (pGVar13 == (GameObject *)0x0) break;
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar13,0,(MethodInfo *)0x0);
                          }
                        }
                        (pTVar3->fields).unlockingTier =
                             (float)(pTVar3->fields).gamePointsRequired <= (float)(int)unaff_ESI;
                        pTVar28 = (pTVar3->fields).progressText;
                        unaff_ESI = (Text *)mscorlib.dll::System::Int32::Int32_ToString
                                                      ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
                        pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                                            ((Int32 *)&(pTVar3->fields).gamePointsRequired,
                                             (MethodInfo *)0x0);
                        pSVar11 = mscorlib.dll::System::String::String_Concat_4
                                            ((String *)unaff_ESI,::StringLiteral____,pSVar11,
                                             (MethodInfo *)0x0);
                        if (pTVar28 != (Text *)0x0) {
                          func_?(0x4b,pTVar28,pSVar11);
                          if ((pTVar3->fields).unlockingTier == 0) goto code_?;
                          pRVar20 = (pTVar3->fields).lockImage;
                          (pTVar3->fields).fromProgress = (float)(int)pTVar26;
                          if ((pRVar20 != (RectTransform *)0x0) &&
                             (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_gameObject
                                                  ((Component *)pRVar20,(MethodInfo *)0x0),
                             pGVar13 != (GameObject *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar13,0,(MethodInfo *)0x0);
                            pCVar12 = (pTVar3->fields).unlockImage;
                            if ((pCVar12 != (CanvasGroup *)0x0) &&
                               (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_gameObject
                                                    ((Component *)pCVar12,(MethodInfo *)0x0),
                               pGVar13 != (GameObject *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar13,1,(MethodInfo *)0x0);
                              (pTVar1->fields)._lockLerpTimer_5__7 = 0.0;
                              goto code_?;
                            }
                          }
                        }
                      }
                    }
                    else {
                      this_00 = (pTVar3->fields).lockShakeCurve;
                      if (this_00 != (AnimationCurve *)0x0) {
                        fVar16 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                 AnimationCurve_Evaluate
                                           (this_00,(pTVar1->fields)._totalProgress_5__6,
                                            (MethodInfo *)0x0);
                        uVar30 = (pTVar3->fields).lockStartRot.x;
                        uVar31 = (pTVar3->fields).lockStartRot.y;
                        this_01 = (Transform *)(pTVar3->fields).lockImage;
                        in_stack_22 =
                             (CanvasGroup *)
                             (fVar16 * (pTVar3->fields).intensity * _UNK_? * _UNK_?);
                        euler.y = (float)uVar31 * _UNK_?;
                        euler.x = (float)uVar30 * _UNK_?;
                        euler.z = (float)in_stack_22;
                        pQVar32 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                  Quaternion_Internal_FromEulerRad
                                            ((Quaternion *)&stack0xffffffd8,euler,(MethodInfo *)0x0)
                        ;
                        if (this_01 != (Transform *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_localRotation(this_01,*pQVar32,(MethodInfo *)0x0);
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
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
code_?:
  bVar33 = 0;
  uVar34 = func_?();
  iVar35 = (int)((ulonglong)uVar34 >> 0x20);
  iVar18 = (int)uVar34;
  out((short)((ulonglong)uVar34 >> 0x20),iVar18);
  bVar36 = (byte)extraout_ECX + (byte)uVar34;
  bVar37 = CARRY1((byte)extraout_ECX,(byte)uVar34) || CARRY1(bVar36,bVar33);
  piVar38 = (int *)(iVar18 + -0x2b + iVar35);
  *piVar38 = *piVar38 + 1;
  piVar38 = (int *)(iVar18 + 0x58 + iVar35);
  *piVar38 = *piVar38 + 1;
  ppMVar39 = &(unaff_ESI->fields)._.m_MaskMaterial;
  cVar40 = (char)((ulonglong)uVar34 >> 0x20);
  cVar41 = *(char *)ppMVar39 + cVar40;
  cVar40 = SCARRY1(*(char *)ppMVar39,cVar40) != SCARRY1(cVar41,bVar37);
  *(char *)ppMVar39 = cVar41 + bVar37;
  cVar41 = *(char *)ppMVar39 < '\0';
  bVar37 = *(char *)ppMVar39 == '\0';
  if (CONCAT31((int3)((uint)extraout_ECX >> 8),bVar36 + bVar33) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pfVar42 = (float *)0xe811b3d6;
  puRam_? = &UNK_?;
  uVar25 = (*(code *)CONCAT13(in_stack_21,(int3)((uint)in_stack_22 >> 8)))();
  if (bVar37 || cVar40 != cVar41) {
    pfVar42[-1] = 0.0;
    pfVar42[-2] = (float)uVar25;
    pfVar42[-3] = (float)&UNK_?;
    mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
              ((NotSupportedException *)pfVar42[-2],(MethodInfo *)pfVar42[-1]);
    pfVar42[-1] = (float)&
                         MethodInfo__TierOnDeathProgress___DoTierProgress_d__32__System_Collections_IEnumerator_Reset__
    ;
    pfVar43 = pfVar42 + -2;
    pfVar42[-2] = (float)&UNK_?;
    uVar44 = func_?();
    *(undefined4 *)((int)pfVar43 + 0x10) = uVar44;
    *(undefined4 *)((int)pfVar43 + 0xc) = uVar25;
    *(undefined **)((int)pfVar43 + 8) = &UNK_?;
    func_?();
    pcVar45 = (code *)swi(3);
    bVar14 = (*pcVar45)();
    return bVar14;
  }
  pfVar42[-1] = (float)unaff_ESI;
  iVar35 = *(int *)(iVar18 + 8);
  pfVar46 = pfVar42 + -2;
  pfVar42[-2] = (float)pTVar3;
  iVar47 = *(int *)(iVar35 + 8);
  iVar48 = *(int *)(iVar35 + 0x10);
  if (iVar47 == 0) {
    *(undefined4 *)(iVar35 + 8) = 0xffffffff;
    *(undefined4 *)(iVar35 + 0x18) = 0;
    *(undefined4 *)(iVar35 + 0x1c) = 0x3f800000;
    pfVar49 = pfVar42 + -2;
    if ((iVar48 == 0) || (iVar47 = *(int *)(iVar48 + 0x2c), pfVar49 = pfVar42 + -2, iVar47 == 0))
    goto code_?;
    pfVar42[-3] = (float)
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
    ;
    pfVar42[-4] = (float)*(undefined4 *)(iVar35 + 0x14);
    pfVar42[-5] = (float)iVar47;
    pfVar42[-6] = (float)(iVar18 + -0x90);
    pfVar42[-7] = (float)&UNK_?;
    pGVar50 = mscorlib.dll::System::Collections::Generic::
              List`1[GameTierProgressBar+TierProgressData]::
              List_1_GameTierProgressBar_TierProgressData__get_Item
                        ((GameTierProgressBar_TierProgressData *)pfVar42[-6],
                         (List_1_GameTierProgressBar_TierProgressData_ *)pfVar42[-5],
                         (int32_t)pfVar42[-4],(MethodInfo *)pfVar42[-3]);
    pfVar49 = pfVar42 + 2;
    pTVar26 = pGVar50->progressText;
    pGVar13 = pGVar50->progressDivider;
    pGVar51 = pGVar50->progressBarTextBubble;
    *(ProgressBar **)(iVar18 + -0x48) = pGVar50->progressBar;
    *(Text **)(iVar18 + -0x44) = pTVar26;
    *(GameObject **)(iVar18 + -0x40) = pGVar13;
    *(GamePassesTextBubble **)(iVar18 + -0x3c) = pGVar51;
    pRVar52 = pGVar50->avatarHeadImage;
    pGVar13 = pGVar50->avatarHeadUI;
    pPVar29 = pGVar50->disabledProgressBar;
    *(GamePassesTextBubble **)(iVar18 + -0x38) = pGVar50->avatarHead;
    *(RawImage **)(iVar18 + -0x34) = pRVar52;
    *(GameObject **)(iVar18 + -0x30) = pGVar13;
    *(ProgressBar **)(iVar18 + -0x2c) = pPVar29;
    pGVar51 = pGVar50->disabledBarTextBubble;
    pGVar13 = pGVar50->tierIconTempUnlock;
    pGVar53 = pGVar50->tierIconNumber;
    *(GameObject **)(iVar18 + -0x28) = pGVar50->disabledProgressDivider;
    *(GamePassesTextBubble **)(iVar18 + -0x24) = pGVar51;
    *(GameObject **)(iVar18 + -0x20) = pGVar13;
    *(GameObject **)(iVar18 + -0x1c) = pGVar53;
    pGVar13 = pGVar50->tempProgress;
    pGVar53 = pGVar50->disabledTempProgress;
    pGVar51 = pGVar50->freeTryTextBubble;
    *(ProgressBar **)(iVar18 + -0x18) = pGVar50->endResultProgressBar;
    *(GameObject **)(iVar18 + -0x14) = pGVar13;
    *(GameObject **)(iVar18 + -0x10) = pGVar53;
    *(GamePassesTextBubble **)(iVar18 + -0xc) = pGVar51;
    *(undefined8 *)(iVar18 + -8) = *(undefined8 *)&pGVar50->hoverInputHandler;
    iVar47 = *(int *)(iVar18 + -4);
    if (iVar47 == 0) goto code_?;
    pfVar42[1] = 0.0;
    *pfVar42 = (float)extraout_ECX_00;
    *pfVar42 = 1.0;
    pfVar42[-1] = (float)iVar47;
    pfVar42[-2] = (float)&UNK_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              ((CanvasGroup *)pfVar42[-1],*pfVar42,(MethodInfo *)pfVar42[1]);
    pfVar46 = pfVar42 + 5;
  }
  else {
    if (iVar47 != 1) {
      if (iVar47 == 2) {
        *(undefined4 *)(iVar35 + 8) = 0xffffffff;
      }
      return 0;
    }
    *(undefined4 *)(iVar35 + 8) = 0xffffffff;
  }
  if (*(float *)(iVar35 + 0x1c) <= 0.0) {
    pfVar49 = pfVar46;
    if ((iVar48 != 0) && (iVar47 = *(int *)(iVar48 + 0x2c), iVar47 != 0)) {
      pfVar46[-1] = (float)
                    MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
      ;
      pfVar46[-2] = (float)*(undefined4 *)(iVar35 + 0x14);
      pfVar46[-3] = (float)iVar47;
      pfVar46[-4] = (float)(iVar18 + -0x90);
      pfVar46[-5] = (float)&UNK_?;
      pGVar50 = mscorlib.dll::System::Collections::Generic::
                List`1[GameTierProgressBar+TierProgressData]::
                List_1_GameTierProgressBar_TierProgressData__get_Item
                          ((GameTierProgressBar_TierProgressData *)pfVar46[-4],
                           (List_1_GameTierProgressBar_TierProgressData_ *)pfVar46[-3],
                           (int32_t)pfVar46[-2],(MethodInfo *)pfVar46[-1]);
      pTVar26 = pGVar50->progressText;
      pGVar13 = pGVar50->progressDivider;
      pGVar51 = pGVar50->progressBarTextBubble;
      *(ProgressBar **)(iVar18 + -0x48) = pGVar50->progressBar;
      *(Text **)(iVar18 + -0x44) = pTVar26;
      *(GameObject **)(iVar18 + -0x40) = pGVar13;
      *(GamePassesTextBubble **)(iVar18 + -0x3c) = pGVar51;
      pRVar52 = pGVar50->avatarHeadImage;
      pGVar13 = pGVar50->avatarHeadUI;
      pPVar29 = pGVar50->disabledProgressBar;
      *(GamePassesTextBubble **)(iVar18 + -0x38) = pGVar50->avatarHead;
      *(RawImage **)(iVar18 + -0x34) = pRVar52;
      *(GameObject **)(iVar18 + -0x30) = pGVar13;
      *(ProgressBar **)(iVar18 + -0x2c) = pPVar29;
      pGVar51 = pGVar50->disabledBarTextBubble;
      pGVar13 = pGVar50->tierIconTempUnlock;
      pGVar53 = pGVar50->tierIconNumber;
      *(GameObject **)(iVar18 + -0x28) = pGVar50->disabledProgressDivider;
      *(GamePassesTextBubble **)(iVar18 + -0x24) = pGVar51;
      *(GameObject **)(iVar18 + -0x20) = pGVar13;
      *(GameObject **)(iVar18 + -0x1c) = pGVar53;
      pGVar13 = pGVar50->tempProgress;
      pGVar53 = pGVar50->disabledTempProgress;
      pGVar51 = pGVar50->freeTryTextBubble;
      *(ProgressBar **)(iVar18 + -0x18) = pGVar50->endResultProgressBar;
      *(GameObject **)(iVar18 + -0x14) = pGVar13;
      *(GameObject **)(iVar18 + -0x10) = pGVar53;
      *(GamePassesTextBubble **)(iVar18 + -0xc) = pGVar51;
      *(undefined8 *)(iVar18 + -8) = *(undefined8 *)&pGVar50->hoverInputHandler;
      iVar18 = *(int *)(iVar18 + -4);
      pfVar49 = pfVar46 + 4;
      if (iVar18 != 0) {
        pfVar46[3] = 0.0;
        pfVar46[2] = (float)extraout_ECX_02;
        pfVar46[2] = 0.0;
        pfVar46[1] = (float)iVar18;
        *pfVar46 = (float)&UNK_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  ((CanvasGroup *)pfVar46[1],pfVar46[2],(MethodInfo *)pfVar46[3]);
        *(undefined4 *)(iVar35 + 0xc) = 0;
        pfVar46[3] = 0.0;
        pfVar46[2] = (float)(iVar35 + 0xc);
        pfVar46[1] = (float)&UNK_?;
        func_?();
        *(undefined4 *)(iVar35 + 8) = 2;
        return 1;
      }
    }
  }
  else {
    uVar25 = *(undefined4 *)(iVar35 + 0x18);
    pfVar46[-1] = 0.0;
    *(undefined4 *)(iVar18 + 8) = uVar25;
    pfVar46[-2] = (float)&UNK_?;
    fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                       ((MethodInfo *)pfVar46[-1]);
    *(float *)(iVar18 + 8) = fVar16 + *(float *)(iVar18 + 8);
    fVar16 = *(float *)(iVar18 + 8);
    *(float *)(iVar35 + 0x18) = fVar16;
    pfVar49 = pfVar46 + 1;
    if (iVar48 != 0) {
      *(float *)(iVar35 + 0x1c) = (float)_UNK_? - fVar16 / *(float *)(iVar48 + 0x24);
      iVar47 = *(int *)(iVar48 + 0x2c);
      pfVar49 = pfVar46 + 1;
      if (iVar47 != 0) {
        *pfVar46 = (float)
                   MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_
        ;
        pfVar46[-1] = (float)*(undefined4 *)(iVar35 + 0x14);
        pfVar46[-2] = (float)iVar47;
        pfVar46[-3] = (float)(iVar18 + -0x90);
        pfVar46[-4] = (float)&UNK_?;
        pGVar50 = mscorlib.dll::System::Collections::Generic::
                  List`1[GameTierProgressBar+TierProgressData]::
                  List_1_GameTierProgressBar_TierProgressData__get_Item
                            ((GameTierProgressBar_TierProgressData *)pfVar46[-3],
                             (List_1_GameTierProgressBar_TierProgressData_ *)pfVar46[-2],
                             (int32_t)pfVar46[-1],(MethodInfo *)*pfVar46);
        pTVar26 = pGVar50->progressText;
        pGVar13 = pGVar50->progressDivider;
        pGVar51 = pGVar50->progressBarTextBubble;
        *(ProgressBar **)(iVar18 + -0x48) = pGVar50->progressBar;
        *(Text **)(iVar18 + -0x44) = pTVar26;
        *(GameObject **)(iVar18 + -0x40) = pGVar13;
        *(GamePassesTextBubble **)(iVar18 + -0x3c) = pGVar51;
        pRVar52 = pGVar50->avatarHeadImage;
        pGVar13 = pGVar50->avatarHeadUI;
        pPVar29 = pGVar50->disabledProgressBar;
        *(GamePassesTextBubble **)(iVar18 + -0x38) = pGVar50->avatarHead;
        *(RawImage **)(iVar18 + -0x34) = pRVar52;
        *(GameObject **)(iVar18 + -0x30) = pGVar13;
        *(ProgressBar **)(iVar18 + -0x2c) = pPVar29;
        pGVar51 = pGVar50->disabledBarTextBubble;
        pGVar13 = pGVar50->tierIconTempUnlock;
        pGVar53 = pGVar50->tierIconNumber;
        *(GameObject **)(iVar18 + -0x28) = pGVar50->disabledProgressDivider;
        *(GamePassesTextBubble **)(iVar18 + -0x24) = pGVar51;
        *(GameObject **)(iVar18 + -0x20) = pGVar13;
        *(GameObject **)(iVar18 + -0x1c) = pGVar53;
        pGVar13 = pGVar50->tempProgress;
        pGVar53 = pGVar50->disabledTempProgress;
        pGVar51 = pGVar50->freeTryTextBubble;
        *(ProgressBar **)(iVar18 + -0x18) = pGVar50->endResultProgressBar;
        *(GameObject **)(iVar18 + -0x14) = pGVar13;
        *(GameObject **)(iVar18 + -0x10) = pGVar53;
        *(GamePassesTextBubble **)(iVar18 + -0xc) = pGVar51;
        *(undefined8 *)(iVar18 + -8) = *(undefined8 *)&pGVar50->hoverInputHandler;
        iVar18 = *(int *)(iVar18 + -4);
        pfVar49 = pfVar46 + 5;
        if (iVar18 != 0) {
          uVar25 = *(undefined4 *)(iVar35 + 0x1c);
          pfVar46[4] = 0.0;
          pfVar46[3] = (float)extraout_ECX_01;
          pfVar46[3] = (float)uVar25;
          pfVar46[2] = (float)iVar18;
          pfVar46[1] = (float)&UNK_?;
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    ((CanvasGroup *)pfVar46[2],pfVar46[3],(MethodInfo *)pfVar46[4]);
          *(undefined4 *)(iVar35 + 0xc) = 0;
          pfVar46[4] = 0.0;
          pfVar46[3] = (float)(iVar35 + 0xc);
          pfVar46[2] = (float)&UNK_?;
          func_?();
          *(undefined4 *)(iVar35 + 8) = 1;
          return 1;
        }
      }
    }
  }
code_?:
  *(undefined **)((int)pfVar49 + -4) = &UNK_?;
  func_?();
  pcVar45 = (code *)swi(3);
  bVar14 = (*pcVar45)();
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

