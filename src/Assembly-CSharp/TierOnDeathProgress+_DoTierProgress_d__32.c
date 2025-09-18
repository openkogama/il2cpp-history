
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TierOnDeathProgress+<DoTierProgress>d__32::TierOnDeathProgress_DoTierProgress_d_32_MoveNext(TierOnDeathProgress_DoTierProgress_d_32 *this,MethodInfo *method)

{
  pTVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_);
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
    if (((pPVar4 != (PlayerPlanetData *)0x0) && (pTVar3 != (TierOnDeathProgress *)0x0)) && (unaff_ESI != (Text *)0x0)) {
      pDVar5 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::PlayerTierStateCalculator_GetTierPricingState((PlayerTierStateCalculator *)unaff_ESI,(pPVar4->fields).progressionGamePoints,(int)(pTVar3->fields).tierToInterpolateFrom,(MethodInfo *)0x0);
      (this->fields)._gameTierShopStatus_5__2 = pDVar5;
      func_?(&(this->fields)._gameTierShopStatus_5__2,pDVar5);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__GamePointGainEffectManager);
        cRam_? = '\x01';
      }
      pTVar6 = (TierOnDeathProgress_DoTierProgress_d_32 *)TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown;
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
        GamePointGainEffectManager::GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect(iVar7,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__GamePointGainEffectManager);
          cRam_? = '\x01';
        }
        TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown = iVar7;
        if (TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown != (Action_1_Int32_ *)0x0) {
          pAVar10 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
          (*(pAVar10->fields)._._.invoke_impl)((pAVar10->fields)._._.method_code,iVar7,(pAVar10->fields)._._.method);
        }
        pSVar11 = mscorlib.dll::System::Single::Single_ToString((Single *)&(pTVar3->fields).fromProgress,(MethodInfo *)0x0);
        str3 = mscorlib.dll::System::Single::Single_ToString((Single *)&(pTVar3->fields).toProgress,(MethodInfo *)0x0);
        unaff_ESI = (Text *)mscorlib.dll::System::String::String_Concat_5(StringLiteral_From_To_,pSVar11,::StringLiteral__,str3,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)unaff_ESI,(MethodInfo *)0x0);
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
      if ((pCVar12 != (CanvasGroup *)0x0) && (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pCVar12,(MethodInfo *)0x0), pGVar13 != (GameObject *)0x0)) {
        bVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy(pGVar13,(MethodInfo *)0x0);
        if (bVar14 != 0) {
          fVar15 = (pTVar1->fields)._lockLerpTimer_5__7 / (pTVar3->fields).lockFadeLerpDuration;
          pCVar12 = (pTVar3->fields).unlockImage;
          if (fVar15 < 0.0) {
            fVar15 = 0.0;
          }
          else if (1.0 < fVar15) {
            fVar15 = 1.0;
          }
          if (pCVar12 == (CanvasGroup *)0x0) break;
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar12,fVar15 * -1.0 + 1.0,(MethodInfo *)0x0);
          fVar15 = (pTVar1->fields)._lockLerpTimer_5__7;
          fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
          fVar16 = fVar16 + fVar15;
          (pTVar1->fields)._lockLerpTimer_5__7 = fVar16;
          if (fVar16 < (pTVar3->fields).lockFadeLerpDuration) {
            (pTVar1->fields).__2__current = (Object *)0x0;
            func_?();
            (pTVar1->fields).__1__state = 1;
            return 1;
          }
        }
        IStack_2.m_value = (pTVar1->fields)._current_5__4;
        iVar17 = IStack_2.m_value + 1;
        (pTVar1->fields)._current_5__4 = iVar17;
        if (iVar17 == (pTVar1->fields)._to_5__3) {
          (pTVar1->fields)._stopped_5__5 = 1;
        }
        else if (iVar17 != 3) {
          pPVar18 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
          if (pPVar18 != (ProgressBarAndroid *)0x0) {
            ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar18,0.0,(MethodInfo *)0x0);
            pRVar19 = (pTVar3->fields).lockImage;
            (pTVar3->fields).timer = 0.0;
            if ((pRVar19 != (RectTransform *)0x0) && (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pRVar19,(MethodInfo *)0x0), pGVar13 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar13,1,(MethodInfo *)0x0);
              pCVar12 = (pTVar3->fields).unlockImage;
              if (pCVar12 != (CanvasGroup *)0x0) {
                in_stack_20 = 0;
                pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pCVar12,(MethodInfo *)0x0);
                in_stack_21 = pCVar12;
                if (pGVar13 != (GameObject *)0x0) {
                  in_stack_21 = (CanvasGroup *)&UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar13,0,(MethodInfo *)0x0);
                  in_stack_20 = SUB41(pGVar13,0);
                  goto code_?;
                }
              }
            }
          }
          break;
        }
code_?:
        if ((pTVar1->fields)._totalProgress_5__6 < 1.0) {
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
    iVar17 = (pTVar1->fields)._current_5__4;
    if (((pTVar1->fields)._to_5__3 < iVar17) || ((pTVar1->fields)._stopped_5__5 != 0)) {
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
      if (iVar17 == 3) {
        pSVar11 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&(pTVar1->fields)._current_5__4,(MethodInfo *)0x0);
        if (unaff_ESI != (Text *)0x0) {
          func_?(0x4b,unaff_ESI,pSVar11);
          pPVar18 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
          if (pPVar18 != (ProgressBarAndroid *)0x0) {
            ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar18,1.0,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
      else {
        IStack_2.m_value = iVar17 + 1;
        pSVar11 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
        if (unaff_ESI != (Text *)0x0) {
          func_?(0x4b,unaff_ESI,pSVar11);
          pDVar5 = (pTVar1->fields)._gameTierShopStatus_5__2;
          if (pDVar5 != (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0) {
            this = (TierOnDeathProgress_DoTierProgress_d_32 *)CONCAT31(this._1_3_,(char)(pTVar1->fields)._current_5__4 + '\x01');
            pOVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,(ByteEnum__Enum)this,MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_);
            if (pOVar22 != (Object *)0x0) {
              (pTVar3->fields).gamePointsRequired = (int32_t)pOVar22[3].klass;
              fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01((pTVar3->fields).timer / (pTVar3->fields).progressLerpDuration,(MethodInfo *)0x0);
              (pTVar1->fields)._totalProgress_5__6 = fVar16;
              in_stack_21 = (CanvasGroup *)UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01((pTVar3->fields).crystalTimer / (pTVar3->fields).progressLerpDuration,(MethodInfo *)0x0);
              fVar15 = (pTVar3->fields).fromProgress;
              if (fVar16 < 0.0) {
                fVar16 = 0.0;
              }
              else if (1.0 < fVar16) {
                fVar16 = 1.0;
              }
              pDVar5 = (pTVar1->fields)._gameTierShopStatus_5__2;
              method_00 = (MethodInfo *)&UNK_?;
              fVar23 = (float10)func_?(SUB84((double)(((pTVar3->fields).toProgress - fVar15) * fVar16 + fVar15),0));
              iVar7 = (pTVar1->fields)._current_5__4;
              uVar24 = SUB84((double)fVar23,0);
              unaff_ESI = (Text *)(int)fVar23;
              pTVar25 = unaff_ESI;
              if (cRam_? == '\0') {
                func_?(&MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_);
                cRam_? = '\x01';
              }
              in_stack_20 = (undefined1)uVar24;
              key = (byte)((char)iVar7 + 1) - 1;
              if (0 < (int)key) {
                if (pDVar5 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0) break;
                do {
                  pOVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,key,MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_);
                  in_stack_20 = (undefined1)uVar24;
                  if (pOVar22 == (Object *)0x0) goto code_?;
                  unaff_ESI = (Text *)((int)unaff_ESI - (int)pOVar22[3].klass);
                  if ((int)unaff_ESI < 1) {
                    unaff_ESI = (Text *)0x0;
                  }
                  key = key - 1;
                  pTVar25 = unaff_ESI;
                } while (0 < (int)key);
              }
              if ((pTVar3->fields).tierProgressBar != (ProgressBar *)0x0) {
                fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01((float)(int)unaff_ESI / (float)(pTVar3->fields).gamePointsRequired,(MethodInfo *)0x0);
                ProgressBarAndroid::ProgressBarAndroid_set_Progress((ProgressBarAndroid *)(pTVar3->fields).tierProgressBar,fVar15,method_00);
                fVar15 = (float)(pTVar3->fields).crystalValue;
                if ((float)in_stack_21 < 0.0) {
                  in_stack_21 = (CanvasGroup *)0x0;
                }
                else if (1.0 < (float)in_stack_21) {
                  in_stack_21 = (CanvasGroup *)0x3f800000;
                }
                dVar26 = (double)((0.0 - fVar15) * (float)in_stack_21 + fVar15);
                fVar23 = (float10)func_?();
                pTVar27 = (pTVar3->fields).crystalsGainedSinceDeath;
                (pTVar3->fields).currentCrystalValue = (float)fVar23;
                pSVar11 = mscorlib.dll::System::Single::Single_ToString((Single *)&(pTVar3->fields).currentCrystalValue,(MethodInfo *)0x0);
                in_stack_21 = (CanvasGroup *)((ulonglong)dVar26 >> 0x20);
                if (pTVar27 != (Text *)0x0) {
                  func_?(0x4b,pTVar27,pSVar11);
                  pRVar19 = (pTVar3->fields).lockImage;
                  if ((pRVar19 != (RectTransform *)0x0) && (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pRVar19,(MethodInfo *)0x0), pGVar13 != (GameObject *)0x0)) {
                    bVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy(pGVar13,(MethodInfo *)0x0);
                    if (bVar14 == 0) {
code_?:
                      pGVar13 = (pTVar3->fields).progressBarDivider;
                      if (pGVar13 != (GameObject *)0x0) {
                        bVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf(pGVar13,(MethodInfo *)0x0);
                        if (bVar14 != 0) {
                          pPVar28 = (pTVar3->fields).tierProgressBar;
                          if (pPVar28 == (ProgressBar *)0x0) break;
                          if ((pPVar28->fields).progress <= 0.0) {
                            pGVar13 = (pTVar3->fields).progressBarDivider;
                            if (pGVar13 == (GameObject *)0x0) break;
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar13,0,(MethodInfo *)0x0);
                          }
                        }
                        (pTVar3->fields).unlockingTier = (float)(pTVar3->fields).gamePointsRequired <= (float)(int)unaff_ESI;
                        pTVar27 = (pTVar3->fields).progressText;
                        unaff_ESI = (Text *)mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
                        pSVar11 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&(pTVar3->fields).gamePointsRequired,(MethodInfo *)0x0);
                        pSVar11 = mscorlib.dll::System::String::String_Concat_4((String *)unaff_ESI,::StringLiteral____,pSVar11,(MethodInfo *)0x0);
                        if (pTVar27 != (Text *)0x0) {
                          func_?(0x4b,pTVar27,pSVar11);
                          if ((pTVar3->fields).unlockingTier == 0) goto code_?;
                          pRVar19 = (pTVar3->fields).lockImage;
                          (pTVar3->fields).fromProgress = (float)(int)pTVar25;
                          if ((pRVar19 != (RectTransform *)0x0) && (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pRVar19,(MethodInfo *)0x0), pGVar13 != (GameObject *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar13,0,(MethodInfo *)0x0);
                            pCVar12 = (pTVar3->fields).unlockImage;
                            if ((pCVar12 != (CanvasGroup *)0x0) && (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pCVar12,(MethodInfo *)0x0), pGVar13 != (GameObject *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar13,1,(MethodInfo *)0x0);
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
                        fVar15 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate(this_00,(pTVar1->fields)._totalProgress_5__6,(MethodInfo *)0x0);
                        uVar29 = (pTVar3->fields).lockStartRot.x;
                        uVar30 = (pTVar3->fields).lockStartRot.y;
                        this_01 = (Transform *)(pTVar3->fields).lockImage;
                        in_stack_21 = (CanvasGroup *)(fVar15 * (pTVar3->fields).intensity * 180.0 * 0.017453292);
                        euler.y = (float)uVar30 * 0.017453292;
                        euler.x = (float)uVar29 * 0.017453292;
                        euler.z = (float)in_stack_21;
                        pQVar31 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffffd8,euler,(MethodInfo *)0x0);
                        if (this_01 != (Transform *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation(this_01,*pQVar31,(MethodInfo *)0x0);
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
  bVar32 = 0;
  uVar33 = func_?();
  iVar34 = (int)((ulonglong)uVar33 >> 0x20);
  iVar17 = (int)uVar33;
  out((short)((ulonglong)uVar33 >> 0x20),iVar17);
  bVar35 = (byte)extraout_ECX + (byte)uVar33;
  bVar36 = CARRY1((byte)extraout_ECX,(byte)uVar33) || CARRY1(bVar35,bVar32);
  piVar37 = (int *)(iVar17 + -0x2b + iVar34);
  *piVar37 = *piVar37 + 1;
  piVar37 = (int *)(iVar17 + 0x58 + iVar34);
  *piVar37 = *piVar37 + 1;
  ppMVar38 = &(unaff_ESI->fields)._.m_MaskMaterial;
  cVar39 = (char)((ulonglong)uVar33 >> 0x20);
  cVar40 = *(char *)ppMVar38 + cVar39;
  cVar39 = SCARRY1(*(char *)ppMVar38,cVar39) != SCARRY1(cVar40,bVar36);
  *(char *)ppMVar38 = cVar40 + bVar36;
  cVar40 = *(char *)ppMVar38 < '\0';
  bVar36 = *(char *)ppMVar38 == '\0';
  if (CONCAT31((int3)((uint)extraout_ECX >> 8),bVar35 + bVar32) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pfVar41 = (float *)0xe811b3d6;
  puRam_? = &UNK_?;
  uVar24 = (*(code *)CONCAT13(in_stack_20,(int3)((uint)in_stack_21 >> 8)))();
  if (bVar36 || cVar39 != cVar40) {
    pfVar41[-1] = 0.0;
    pfVar41[-2] = (float)uVar24;
    pfVar41[-3] = (float)&UNK_?;
    mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor((NotSupportedException *)pfVar41[-2],(MethodInfo *)pfVar41[-1]);
    pfVar41[-1] = (float)&MethodInfo__TierOnDeathProgress___DoTierProgress_d__32__System_Collections_IEnumerator_Reset__;
    pfVar42 = pfVar41 + -2;
    pfVar41[-2] = (float)&UNK_?;
    uVar43 = func_?();
    *(undefined4 *)((int)pfVar42 + 0x10) = uVar43;
    *(undefined4 *)((int)pfVar42 + 0xc) = uVar24;
    *(undefined **)((int)pfVar42 + 8) = &UNK_?;
    func_?();
    pcVar44 = (code *)swi(3);
    bVar14 = (*pcVar44)();
    return bVar14;
  }
  pfVar41[-1] = (float)unaff_ESI;
  iVar34 = *(int *)(iVar17 + 8);
  pfVar45 = pfVar41 + -2;
  pfVar41[-2] = (float)pTVar3;
  iVar46 = *(int *)(iVar34 + 8);
  iVar47 = *(int *)(iVar34 + 0x10);
  if (iVar46 == 0) {
    *(undefined4 *)(iVar34 + 8) = 0xffffffff;
    *(undefined4 *)(iVar34 + 0x18) = 0;
    *(undefined4 *)(iVar34 + 0x1c) = 0x3f800000;
    pfVar48 = pfVar41 + -2;
    if ((iVar47 == 0) || (iVar46 = *(int *)(iVar47 + 0x2c), pfVar48 = pfVar41 + -2, iVar46 == 0)) goto code_?;
    pfVar41[-3] = (float)MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_;
    pfVar41[-4] = (float)*(undefined4 *)(iVar34 + 0x14);
    pfVar41[-5] = (float)iVar46;
    pfVar41[-6] = (float)(iVar17 + -0x90);
    pfVar41[-7] = (float)&UNK_?;
    pGVar49 = mscorlib.dll::System::Collections::Generic::List`1[GameTierProgressBar+TierProgressData]::List_1_GameTierProgressBar_TierProgressData__get_Item((GameTierProgressBar_TierProgressData *)pfVar41[-6],(List_1_GameTierProgressBar_TierProgressData_ *)pfVar41[-5],(int32_t)pfVar41[-4],(MethodInfo *)pfVar41[-3]);
    pfVar48 = pfVar41 + 2;
    pTVar25 = pGVar49->progressText;
    pGVar13 = pGVar49->progressDivider;
    pGVar50 = pGVar49->progressBarTextBubble;
    *(ProgressBar **)(iVar17 + -0x48) = pGVar49->progressBar;
    *(Text **)(iVar17 + -0x44) = pTVar25;
    *(GameObject **)(iVar17 + -0x40) = pGVar13;
    *(GamePassesTextBubble **)(iVar17 + -0x3c) = pGVar50;
    pRVar51 = pGVar49->avatarHeadImage;
    pGVar13 = pGVar49->avatarHeadUI;
    pPVar28 = pGVar49->disabledProgressBar;
    *(GamePassesTextBubble **)(iVar17 + -0x38) = pGVar49->avatarHead;
    *(RawImage **)(iVar17 + -0x34) = pRVar51;
    *(GameObject **)(iVar17 + -0x30) = pGVar13;
    *(ProgressBar **)(iVar17 + -0x2c) = pPVar28;
    pGVar50 = pGVar49->disabledBarTextBubble;
    pGVar13 = pGVar49->tierIconTempUnlock;
    pGVar52 = pGVar49->tierIconNumber;
    *(GameObject **)(iVar17 + -0x28) = pGVar49->disabledProgressDivider;
    *(GamePassesTextBubble **)(iVar17 + -0x24) = pGVar50;
    *(GameObject **)(iVar17 + -0x20) = pGVar13;
    *(GameObject **)(iVar17 + -0x1c) = pGVar52;
    pGVar13 = pGVar49->tempProgress;
    pGVar52 = pGVar49->disabledTempProgress;
    pGVar50 = pGVar49->freeTryTextBubble;
    *(ProgressBar **)(iVar17 + -0x18) = pGVar49->endResultProgressBar;
    *(GameObject **)(iVar17 + -0x14) = pGVar13;
    *(GameObject **)(iVar17 + -0x10) = pGVar52;
    *(GamePassesTextBubble **)(iVar17 + -0xc) = pGVar50;
    *(undefined8 *)(iVar17 + -8) = *(undefined8 *)&pGVar49->hoverInputHandler;
    iVar46 = *(int *)(iVar17 + -4);
    if (iVar46 == 0) goto code_?;
    pfVar41[1] = 0.0;
    *pfVar41 = (float)extraout_ECX_00;
    *pfVar41 = 1.0;
    pfVar41[-1] = (float)iVar46;
    pfVar41[-2] = (float)&UNK_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha((CanvasGroup *)pfVar41[-1],*pfVar41,(MethodInfo *)pfVar41[1]);
    pfVar45 = pfVar41 + 5;
  }
  else {
    if (iVar46 != 1) {
      if (iVar46 == 2) {
        *(undefined4 *)(iVar34 + 8) = 0xffffffff;
      }
      return 0;
    }
    *(undefined4 *)(iVar34 + 8) = 0xffffffff;
  }
  if (*(float *)(iVar34 + 0x1c) <= 0.0) {
    pfVar48 = pfVar45;
    if ((iVar47 != 0) && (iVar46 = *(int *)(iVar47 + 0x2c), iVar46 != 0)) {
      pfVar45[-1] = (float)MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_;
      pfVar45[-2] = (float)*(undefined4 *)(iVar34 + 0x14);
      pfVar45[-3] = (float)iVar46;
      pfVar45[-4] = (float)(iVar17 + -0x90);
      pfVar45[-5] = (float)&UNK_?;
      pGVar49 = mscorlib.dll::System::Collections::Generic::List`1[GameTierProgressBar+TierProgressData]::List_1_GameTierProgressBar_TierProgressData__get_Item((GameTierProgressBar_TierProgressData *)pfVar45[-4],(List_1_GameTierProgressBar_TierProgressData_ *)pfVar45[-3],(int32_t)pfVar45[-2],(MethodInfo *)pfVar45[-1]);
      pTVar25 = pGVar49->progressText;
      pGVar13 = pGVar49->progressDivider;
      pGVar50 = pGVar49->progressBarTextBubble;
      *(ProgressBar **)(iVar17 + -0x48) = pGVar49->progressBar;
      *(Text **)(iVar17 + -0x44) = pTVar25;
      *(GameObject **)(iVar17 + -0x40) = pGVar13;
      *(GamePassesTextBubble **)(iVar17 + -0x3c) = pGVar50;
      pRVar51 = pGVar49->avatarHeadImage;
      pGVar13 = pGVar49->avatarHeadUI;
      pPVar28 = pGVar49->disabledProgressBar;
      *(GamePassesTextBubble **)(iVar17 + -0x38) = pGVar49->avatarHead;
      *(RawImage **)(iVar17 + -0x34) = pRVar51;
      *(GameObject **)(iVar17 + -0x30) = pGVar13;
      *(ProgressBar **)(iVar17 + -0x2c) = pPVar28;
      pGVar50 = pGVar49->disabledBarTextBubble;
      pGVar13 = pGVar49->tierIconTempUnlock;
      pGVar52 = pGVar49->tierIconNumber;
      *(GameObject **)(iVar17 + -0x28) = pGVar49->disabledProgressDivider;
      *(GamePassesTextBubble **)(iVar17 + -0x24) = pGVar50;
      *(GameObject **)(iVar17 + -0x20) = pGVar13;
      *(GameObject **)(iVar17 + -0x1c) = pGVar52;
      pGVar13 = pGVar49->tempProgress;
      pGVar52 = pGVar49->disabledTempProgress;
      pGVar50 = pGVar49->freeTryTextBubble;
      *(ProgressBar **)(iVar17 + -0x18) = pGVar49->endResultProgressBar;
      *(GameObject **)(iVar17 + -0x14) = pGVar13;
      *(GameObject **)(iVar17 + -0x10) = pGVar52;
      *(GamePassesTextBubble **)(iVar17 + -0xc) = pGVar50;
      *(undefined8 *)(iVar17 + -8) = *(undefined8 *)&pGVar49->hoverInputHandler;
      iVar17 = *(int *)(iVar17 + -4);
      pfVar48 = pfVar45 + 4;
      if (iVar17 != 0) {
        pfVar45[3] = 0.0;
        pfVar45[2] = (float)extraout_ECX_02;
        pfVar45[2] = 0.0;
        pfVar45[1] = (float)iVar17;
        *pfVar45 = (float)&UNK_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha((CanvasGroup *)pfVar45[1],pfVar45[2],(MethodInfo *)pfVar45[3]);
        *(undefined4 *)(iVar34 + 0xc) = 0;
        pfVar45[3] = 0.0;
        pfVar45[2] = (float)(iVar34 + 0xc);
        pfVar45[1] = (float)&UNK_?;
        func_?();
        *(undefined4 *)(iVar34 + 8) = 2;
        return 1;
      }
    }
  }
  else {
    uVar24 = *(undefined4 *)(iVar34 + 0x18);
    pfVar45[-1] = 0.0;
    *(undefined4 *)(iVar17 + 8) = uVar24;
    pfVar45[-2] = (float)&UNK_?;
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)pfVar45[-1]);
    *(float *)(iVar17 + 8) = fVar15 + *(float *)(iVar17 + 8);
    fVar15 = *(float *)(iVar17 + 8);
    *(float *)(iVar34 + 0x18) = fVar15;
    pfVar48 = pfVar45 + 1;
    if (iVar47 != 0) {
      *(float *)(iVar34 + 0x1c) = 1.0 - fVar15 / *(float *)(iVar47 + 0x24);
      iVar46 = *(int *)(iVar47 + 0x2c);
      pfVar48 = pfVar45 + 1;
      if (iVar46 != 0) {
        *pfVar45 = (float)MethodInfo__System__Collections__Generic__List<GameTierProgressBar::TierProgressData>__get_Item_int_;
        pfVar45[-1] = (float)*(undefined4 *)(iVar34 + 0x14);
        pfVar45[-2] = (float)iVar46;
        pfVar45[-3] = (float)(iVar17 + -0x90);
        pfVar45[-4] = (float)&UNK_?;
        pGVar49 = mscorlib.dll::System::Collections::Generic::List`1[GameTierProgressBar+TierProgressData]::List_1_GameTierProgressBar_TierProgressData__get_Item((GameTierProgressBar_TierProgressData *)pfVar45[-3],(List_1_GameTierProgressBar_TierProgressData_ *)pfVar45[-2],(int32_t)pfVar45[-1],(MethodInfo *)*pfVar45);
        pTVar25 = pGVar49->progressText;
        pGVar13 = pGVar49->progressDivider;
        pGVar50 = pGVar49->progressBarTextBubble;
        *(ProgressBar **)(iVar17 + -0x48) = pGVar49->progressBar;
        *(Text **)(iVar17 + -0x44) = pTVar25;
        *(GameObject **)(iVar17 + -0x40) = pGVar13;
        *(GamePassesTextBubble **)(iVar17 + -0x3c) = pGVar50;
        pRVar51 = pGVar49->avatarHeadImage;
        pGVar13 = pGVar49->avatarHeadUI;
        pPVar28 = pGVar49->disabledProgressBar;
        *(GamePassesTextBubble **)(iVar17 + -0x38) = pGVar49->avatarHead;
        *(RawImage **)(iVar17 + -0x34) = pRVar51;
        *(GameObject **)(iVar17 + -0x30) = pGVar13;
        *(ProgressBar **)(iVar17 + -0x2c) = pPVar28;
        pGVar50 = pGVar49->disabledBarTextBubble;
        pGVar13 = pGVar49->tierIconTempUnlock;
        pGVar52 = pGVar49->tierIconNumber;
        *(GameObject **)(iVar17 + -0x28) = pGVar49->disabledProgressDivider;
        *(GamePassesTextBubble **)(iVar17 + -0x24) = pGVar50;
        *(GameObject **)(iVar17 + -0x20) = pGVar13;
        *(GameObject **)(iVar17 + -0x1c) = pGVar52;
        pGVar13 = pGVar49->tempProgress;
        pGVar52 = pGVar49->disabledTempProgress;
        pGVar50 = pGVar49->freeTryTextBubble;
        *(ProgressBar **)(iVar17 + -0x18) = pGVar49->endResultProgressBar;
        *(GameObject **)(iVar17 + -0x14) = pGVar13;
        *(GameObject **)(iVar17 + -0x10) = pGVar52;
        *(GamePassesTextBubble **)(iVar17 + -0xc) = pGVar50;
        *(undefined8 *)(iVar17 + -8) = *(undefined8 *)&pGVar49->hoverInputHandler;
        iVar17 = *(int *)(iVar17 + -4);
        pfVar48 = pfVar45 + 5;
        if (iVar17 != 0) {
          uVar24 = *(undefined4 *)(iVar34 + 0x1c);
          pfVar45[4] = 0.0;
          pfVar45[3] = (float)extraout_ECX_01;
          pfVar45[3] = (float)uVar24;
          pfVar45[2] = (float)iVar17;
          pfVar45[1] = (float)&UNK_?;
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha((CanvasGroup *)pfVar45[2],pfVar45[3],(MethodInfo *)pfVar45[4]);
          *(undefined4 *)(iVar34 + 0xc) = 0;
          pfVar45[4] = 0.0;
          pfVar45[3] = (float)(iVar34 + 0xc);
          pfVar45[2] = (float)&UNK_?;
          func_?();
          *(undefined4 *)(iVar34 + 8) = 1;
          return 1;
        }
      }
    }
  }
code_?:
  *(undefined **)((int)pfVar48 + -4) = &UNK_?;
  func_?();
  pcVar44 = (code *)swi(3);
  bVar14 = (*pcVar44)();
  return bVar14;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::TierOnDeathProgress+<DoTierProgress>d__32::TierOnDeathProgress_DoTierProgress_d_32_System_Collections_IEnumerator_Reset(TierOnDeathProgress_DoTierProgress_d_32 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__TierOnDeathProgress___DoTierProgress_d__32__System_Collections_IEnumerator_Reset__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

