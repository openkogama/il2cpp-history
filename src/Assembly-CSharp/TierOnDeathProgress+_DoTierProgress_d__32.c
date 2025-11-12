
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TierOnDeathProgress+<DoTierProgress>d__32::
     TierOnDeathProgress_DoTierProgress_d_32_MoveNext
               (TierOnDeathProgress_DoTierProgress_d_32 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_From_To_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = _UNK_?;
  iVar1 = (this->fields).__1__state;
  pTVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    bVar3 = cRam_? == '\0';
    (this->fields).__1__state = -1;
    this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (bVar3) {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (((pPVar4 == (PlayerPlanetData *)0x0) || (pTVar2 == (TierOnDeathProgress *)0x0)) ||
       (this_00 == (PlayerTierStateCalculator *)0x0)) goto code_?;
    GVar5 = (GamePassTier__Enum)(pTVar2->fields).tierToInterpolateFrom;
    if ((this_00->fields).gamePointVelocityIsZero == 0) {
      pDVar6 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                          (this_00,(pPVar4->fields).progressionGamePoints,GVar5 & 0xff,
                           (MethodInfo *)0x0);
    }
    else {
      pDVar6 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                          (this_00,GVar5 & 0xff,(MethodInfo *)0x0);
    }
    bVar3 = iRam_? != 0;
    (this->fields)._gameTierShopStatus_5__2 = pDVar6;
    if (bVar3) {
      uVar7 = (uint)((ulonglong)&(this->fields)._gameTierShopStatus_5__2 >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar9 == *puVar10;
        if (bVar3) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePointGainEffectManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    iVar1 = TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar4 == (PlayerPlanetData *)0x0) goto code_?;
    gamePointAmountShown = (pPVar4->fields).progressionGamePoints;
    iVar11 = FUN_?();
    iVar12 = FUN_?();
    (this->fields)._to_5__3 = iVar12;
    (this->fields)._current_5__4 = iVar11;
    (this->fields)._stopped_5__5 = 0;
    (pTVar2->fields).fromProgress = (float)iVar1;
    (pTVar2->fields).toProgress = (float)gamePointAmountShown;
    GamePointGainEffectManager::
    GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect
              (gamePointAmountShown,(MethodInfo *)0x0);
    GamePointGainEffectManager::GamePointGainEffectManager_HaveShownGamePointGainEffect
              (gamePointAmountShown,(MethodInfo *)0x0);
    pSVar13 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar2->fields).fromProgress,(MethodInfo *)0x0);
    pSVar14 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar2->fields).toProgress,(MethodInfo *)0x0);
    pSVar13 = mscorlib.dll::System::String::String_Concat_6
                        (StringLiteral_From_To_,pSVar13,::StringLiteral__,pSVar14,(MethodInfo *)0x0)
    ;
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar13,(MethodInfo *)0x0)
    ;
code_?:
    if (((this->fields)._current_5__4 <= (this->fields)._to_5__3) &&
       ((this->fields)._stopped_5__5 == 0)) {
      if (pTVar2 == (TierOnDeathProgress *)0x0) goto code_?;
      pTVar15 = (pTVar2->fields).nextTierText;
      if ((this->fields)._current_5__4 == 3) {
        pSVar13 = mscorlib.dll::System::Int32::Int32_ToString
                            ((Int32 *)&(this->fields)._current_5__4,(MethodInfo *)0x0);
        if (pTVar15 == (Text *)0x0) goto code_?;
        (*(pTVar15->klass->vtable).set_text.methodPtr)(pTVar15,pSVar13);
        pPVar16 = (ProgressBarAndroid *)(pTVar2->fields).tierProgressBar;
        if (pPVar16 == (ProgressBarAndroid *)0x0) goto code_?;
        ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar16,value,(MethodInfo *)0x0);
        goto code_?;
      }
      aIStackX_8[0].m_value = (this->fields)._current_5__4 + 1;
      pSVar13 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
      if (pTVar15 == (Text *)0x0) goto code_?;
      method_00 = (MethodInfo *)(pTVar15->klass->vtable).set_text.methodPtr;
      (*(code *)method_00)(pTVar15,pSVar13,(pTVar15->klass->vtable).set_text.method);
      pDVar6 = (this->fields)._gameTierShopStatus_5__2;
      if ((pDVar6 ==
           (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0
          ) || (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
                                     (uint)(byte)((char)(this->fields)._current_5__4 + 1),
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                    ), pOVar17 == (Object *)0x0)) goto code_?;
      fVar18 = (pTVar2->fields).timer / (pTVar2->fields).progressLerpDuration;
      (pTVar2->fields).gamePointsRequired = *(int32_t *)&pOVar17[2].klass;
      if (fVar18 < 0.0) {
        fVar18 = 0.0;
      }
      else if (value < fVar18) {
        fVar18 = value;
      }
      (this->fields)._totalProgress_5__6 = fVar18;
      fVar19 = (pTVar2->fields).crystalTimer / (pTVar2->fields).progressLerpDuration;
      if (fVar19 < 0.0) {
        fVar19 = 0.0;
      }
      else if (value < fVar19) {
        fVar19 = value;
      }
      pDVar6 = (this->fields)._gameTierShopStatus_5__2;
      UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                ((pTVar2->fields).fromProgress,(pTVar2->fields).toProgress,fVar18,method_00);
      fVar18 = (float)func_?();
      iVar11 = (this->fields)._current_5__4;
      iVar1 = (int)fVar18;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      BVar20 = (byte)((char)iVar11 + 1) - 1;
      if (0 < (int)BVar20) {
        if (pDVar6 ==
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) goto code_?;
        do {
          pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,BVar20 & 0xff,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                              );
          if (pOVar17 == (Object *)0x0) goto code_?;
          iVar1 = iVar1 - *(int *)&pOVar17[2].klass;
          if (iVar1 < 1) {
            iVar1 = 0;
          }
          BVar20 = BVar20 - 1;
        } while (0 < (int)BVar20);
      }
      pPVar16 = (ProgressBarAndroid *)(pTVar2->fields).tierProgressBar;
      fVar18 = (float)iVar1 / (float)(pTVar2->fields).gamePointsRequired;
      if (fVar18 < 0.0) {
        fVar18 = 0.0;
      }
      else if (value < fVar18) {
        fVar18 = value;
      }
      if (pPVar16 == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar16,fVar18,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                ((float)(pTVar2->fields).crystalValue,0.0,fVar19,method_00);
      fVar18 = (float)func_?();
      pTVar15 = (pTVar2->fields).crystalsGainedSinceDeath;
      (pTVar2->fields).currentCrystalValue = fVar18;
      mscorlib.dll::System::Single::Single_ToString
                ((Single *)&(pTVar2->fields).currentCrystalValue,(MethodInfo *)0x0);
      if (pTVar15 == (Text *)0x0) goto code_?;
      (*(pTVar15->klass->vtable).set_text.methodPtr)(pTVar15);
      pRVar21 = (pTVar2->fields).lockImage;
      if ((pRVar21 == (RectTransform *)0x0) ||
         (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pRVar21,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0)
         ) goto code_?;
      bVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                         (pGVar22,(MethodInfo *)0x0);
      if (bVar23 != 0) {
        this_01 = (pTVar2->fields).lockShakeCurve;
        if (this_01 == (AnimationCurve *)0x0) goto code_?;
        fVar18 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (this_01,(this->fields)._totalProgress_5__6,(MethodInfo *)0x0);
        uVar24 = (pTVar2->fields).lockStartRot.x;
        uVar25 = (pTVar2->fields).lockStartRot.y;
        pRVar21 = (pTVar2->fields).lockImage;
        fStack_26 = fVar18 * (pTVar2->fields).intensity * _UNK_? * _UNK_?;
        auStack_27 = ZEXT416(0);
        uStack_28 = CONCAT44((float)uVar25 * _UNK_?,(float)uVar24 * _UNK_?);
        pcVar29 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar29 = (code *)FUN_?(&UNK_?), pcVar29 == (code *)0x0)) {
          uVar30 = func_?(&UNK_?);
          FUN_?(uVar30,0);
          pcVar29 = (code *)swi(3);
          bVar23 = (*pcVar29)();
          return bVar23;
        }
        pcRam_? = pcVar29;
        (*pcRam_?)(&uStack_28);
        if (pRVar21 == (RectTransform *)0x0) {
          FUN_?();
          pcVar29 = (code *)swi(3);
          bVar23 = (*pcVar29)();
          return bVar23;
        }
        uStack_31 = auStack_27._0_8_;
        uStack_32 = auStack_27._8_8_;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar33 = (pRVar21->fields)._._._.m_CachedPtr;
        if (pvVar33 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar21,(MethodInfo *)0x0);
          pcVar29 = (code *)swi(3);
          bVar23 = (*pcVar29)();
          return bVar23;
        }
        pcVar29 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar29 = (code *)FUN_?(&UNK_?), pcVar29 == (code *)0x0)) {
          uVar30 = func_?(&UNK_?);
          FUN_?(uVar30,0);
          pcVar29 = (code *)swi(3);
          bVar23 = (*pcVar29)();
          return bVar23;
        }
        pcRam_? = pcVar29;
        (*pcRam_?)(pvVar33);
      }
      pGVar22 = (pTVar2->fields).progressBarDivider;
      if (pGVar22 == (GameObject *)0x0) goto code_?;
      bVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                         (pGVar22,(MethodInfo *)0x0);
      if (bVar23 != 0) {
        pPVar34 = (pTVar2->fields).tierProgressBar;
        if (pPVar34 == (ProgressBar *)0x0) goto code_?;
        if ((pPVar34->fields).progress <= 0.0) {
          pGVar22 = (pTVar2->fields).progressBarDivider;
          if (pGVar22 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar22,0,(MethodInfo *)0x0);
        }
      }
      fVar18 = (float)(pTVar2->fields).gamePointsRequired;
      (pTVar2->fields).unlockingTier = (float)(pTVar2->fields).gamePointsRequired <= (float)iVar1;
      if ((float)iVar1 < fVar18) {
        fVar18 = (float)iVar1;
      }
      pTVar15 = (pTVar2->fields).progressText;
      aIStackX_8[0].m_value = (int32_t)fVar18;
      pSVar13 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
      pSVar14 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&(pTVar2->fields).gamePointsRequired,(MethodInfo *)0x0);
      mscorlib.dll::System::String::String_Concat_5
                (pSVar13,::StringLiteral____,pSVar14,(MethodInfo *)0x0);
      if (pTVar15 == (Text *)0x0) goto code_?;
      (*(pTVar15->klass->vtable).set_text.methodPtr)(pTVar15);
      if ((pTVar2->fields).unlockingTier != 0) {
        pRVar21 = (pTVar2->fields).lockImage;
        (pTVar2->fields).fromProgress = (float)iVar1;
        if ((pRVar21 == (RectTransform *)0x0) ||
           (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pRVar21,(MethodInfo *)0x0),
           pGVar22 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar22,0,(MethodInfo *)0x0);
        pCVar35 = (pTVar2->fields).unlockImage;
        if ((pCVar35 == (CanvasGroup *)0x0) ||
           (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pCVar35,(MethodInfo *)0x0),
           pGVar22 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar22,1,(MethodInfo *)0x0);
        (this->fields)._lockLerpTimer_5__7 = 0.0;
        goto code_?;
      }
      goto code_?;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        if (iVar1 == 3) {
          (this->fields).__1__state = -1;
          return 0;
        }
        return 0;
      }
      (this->fields).__1__state = -1;
      goto code_?;
    }
    (this->fields).__1__state = -1;
    if (pTVar2 == (TierOnDeathProgress *)0x0) goto code_?;
code_?:
    pCVar35 = (pTVar2->fields).unlockImage;
    if ((pCVar35 == (CanvasGroup *)0x0) ||
       (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pCVar35,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0))
    goto code_?;
    bVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                       (pGVar22,(MethodInfo *)0x0);
    if (bVar23 != 0) {
      fVar18 = (this->fields)._lockLerpTimer_5__7 / (pTVar2->fields).lockFadeLerpDuration;
      pCVar35 = (pTVar2->fields).unlockImage;
      if (fVar18 < 0.0) {
        fVar18 = 0.0;
      }
      else if (value < fVar18) {
        fVar18 = value;
      }
      if (pCVar35 == (CanvasGroup *)0x0) goto code_?;
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar35,fVar18 * _UNK_? + value,(MethodInfo *)0x0);
      fVar18 = (this->fields)._lockLerpTimer_5__7;
      fVar19 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar19 = fVar19 + fVar18;
      (this->fields)._lockLerpTimer_5__7 = fVar19;
      if (fVar19 < (pTVar2->fields).lockFadeLerpDuration) {
        bVar3 = iRam_? != 0;
        (this->fields).__2__current = (Object *)0x0;
        if (bVar3) {
          uVar7 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar3 = uVar9 == *puVar10;
            if (bVar3) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
        }
        (this->fields).__1__state = 1;
        return 1;
      }
    }
    iVar1 = (this->fields)._current_5__4 + 1;
    (this->fields)._current_5__4 = iVar1;
    if (iVar1 == (this->fields)._to_5__3) {
      (this->fields)._stopped_5__5 = 1;
    }
    else if (iVar1 != 3) {
      pPVar34 = (pTVar2->fields).tierProgressBar;
      if (pPVar34 == (ProgressBar *)0x0) goto code_?;
      this_02 = (pPVar34->fields).progressBar;
      (pPVar34->fields).progress = 0.0;
      if (this_02 == (Scrollbar *)0x0) goto code_?;
      UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                (this_02,0.0,(MethodInfo *)0x0);
      pRVar21 = (pTVar2->fields).lockImage;
      (pTVar2->fields).timer = 0.0;
      if ((pRVar21 == (RectTransform *)0x0) ||
         (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pRVar21,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar22,1,(MethodInfo *)0x0);
      pCVar35 = (pTVar2->fields).unlockImage;
      if ((pCVar35 == (CanvasGroup *)0x0) ||
         (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar35,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0
         )) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar22,0,(MethodInfo *)0x0);
    }
code_?:
    if ((this->fields)._totalProgress_5__6 < value) {
      bVar3 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      if (bVar3) {
        uVar7 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar9 == *puVar10;
          if (bVar3) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      (this->fields).__1__state = 2;
      return 1;
    }
  }
  if (pTVar2 != (TierOnDeathProgress *)0x0) {
code_?:
    bVar3 = iRam_? != 0;
    (pTVar2->fields)._IsShowingTierProgress_k__BackingField = 0;
    (this->fields).__2__current = (Object *)0x0;
    if (bVar3) {
      uVar7 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar9 == *puVar10;
        if (bVar3) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    (this->fields).__1__state = 3;
    return 1;
  }
code_?:
  FUN_?();
  pcVar29 = (code *)swi(3);
  bVar23 = (*pcVar29)();
  return bVar23;
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
  uVar1 = func_?(&
                              MethodInfo__TierOnDeathProgress___DoTierProgress_d__32__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

