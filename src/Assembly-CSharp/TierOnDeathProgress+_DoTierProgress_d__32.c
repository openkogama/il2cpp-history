
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
    this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (((pPVar4 == (PlayerPlanetData *)0x0) || (pTVar3 == (TierOnDeathProgress *)0x0)) ||
       (this_00 == (PlayerTierStateCalculator *)0x0)) goto code_?;
    pDVar5 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
              PlayerTierStateCalculator_GetTierPricingState
                        (this_00,(pPVar4->fields).progressionGamePoints,
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
    if (pPVar4 == (PlayerPlanetData *)0x0) goto code_?;
    iVar7 = (pPVar4->fields).progressionGamePoints;
    iVar8 = func_?((pTVar3->fields).tierToInterpolateFrom,0);
    iVar9 = func_?((pTVar3->fields).tierToInterpolateTo,0);
    (this->fields)._current_5__4 = iVar8;
    (this->fields)._to_5__3 = iVar9;
    (this->fields)._stopped_5__5 = 0;
    (pTVar3->fields).fromProgress = (float)(int)pTVar6;
    (pTVar3->fields).toProgress = (float)iVar7;
    GamePointGainEffectManager::
    GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect(iVar7,(MethodInfo *)0x0)
    ;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePointGainEffectManager);
      cRam_? = '\x01';
    }
    TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown = iVar7;
    if (TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown !=
        (Action_1_Int32_ *)0x0) {
      pAVar10 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
      (*(pAVar10->fields)._._.invoke_impl)
                ((pAVar10->fields)._._.method_code,iVar7,(pAVar10->fields)._._.method);
    }
    pSVar11 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar3->fields).fromProgress,(MethodInfo *)0x0);
    pSVar12 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar3->fields).toProgress,(MethodInfo *)0x0);
    pSVar11 = mscorlib.dll::System::String::String_Concat_5
                        (StringLiteral_From_To_,pSVar11,::StringLiteral__,pSVar12,(MethodInfo *)0x0)
    ;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar11,(MethodInfo *)0x0)
    ;
    this = pTVar6;
    break;
  case 1:
    (this->fields).__1__state = -1;
    if (pTVar3 == (TierOnDeathProgress *)0x0) goto code_?;
    goto code_?;
  case 2:
    (this->fields).__1__state = -1;
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  iVar13 = (pTVar1->fields)._current_5__4;
  if ((iVar13 <= (pTVar1->fields)._to_5__3) && ((pTVar1->fields)._stopped_5__5 == 0)) {
    if (pTVar3 == (TierOnDeathProgress *)0x0) goto code_?;
    pTVar14 = (pTVar3->fields).nextTierText;
    if (iVar13 == 3) {
      pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&(pTVar1->fields)._current_5__4,(MethodInfo *)0x0);
      if (pTVar14 == (Text *)0x0) goto code_?;
      func_?(0x4b,pTVar14,pSVar11);
      pPVar15 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
      if (pPVar15 == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar15,1.0,(MethodInfo *)0x0);
      goto code_?;
    }
    IStack_2.m_value = iVar13 + 1;
    pSVar11 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
    if (pTVar14 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar14,pSVar11);
    pDVar5 = (pTVar1->fields)._gameTierShopStatus_5__2;
    if (pDVar5 ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
    goto code_?;
    this = (TierOnDeathProgress_DoTierProgress_d_32 *)
           CONCAT31(this._1_3_,(char)(pTVar1->fields)._current_5__4 + '\x01');
    pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,(ByteEnum__Enum)this
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                        );
    if (pOVar16 == (Object *)0x0) goto code_?;
    (pTVar3->fields).gamePointsRequired = (int32_t)pOVar16[3].klass;
    fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((pTVar3->fields).timer / (pTVar3->fields).progressLerpDuration,
                        (MethodInfo *)0x0);
    (pTVar1->fields)._totalProgress_5__6 = fVar17;
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
              ((pTVar3->fields).crystalTimer / (pTVar3->fields).progressLerpDuration,
               (MethodInfo *)0x0);
    fVar18 = (pTVar3->fields).fromProgress;
    if (fVar17 < 0.0) {
      fVar17 = 0.0;
    }
    else if (_UNK_? < fVar17) {
      fVar17 = _UNK_?;
    }
    pDVar5 = (pTVar1->fields)._gameTierShopStatus_5__2;
    method_00 = (MethodInfo *)&UNK_?;
    fVar19 = (float10)func_?(SUB84((double)(((pTVar3->fields).toProgress - fVar18) * fVar17
                                                    + fVar18),0));
    iVar7 = (pTVar1->fields)._current_5__4;
    iVar20 = (int)fVar19;
    iVar13 = iVar20;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                     );
      cRam_? = '\x01';
    }
    key = (byte)((char)iVar7 + 1) - 1;
    if (0 < (int)key) {
      if (pDVar5 ==
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      goto code_?;
      do {
        pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                            );
        if (pOVar16 == (Object *)0x0) goto code_?;
        iVar20 = iVar20 - (int)pOVar16[3].klass;
        if (iVar20 < 1) {
          iVar20 = 0;
        }
        key = key - 1;
        iVar13 = iVar20;
      } while (0 < (int)key);
    }
    if ((pTVar3->fields).tierProgressBar == (ProgressBar *)0x0) goto code_?;
    fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((float)iVar20 / (float)(pTVar3->fields).gamePointsRequired,(MethodInfo *)0x0
                       );
    ProgressBarAndroid::ProgressBarAndroid_set_Progress
              ((ProgressBarAndroid *)(pTVar3->fields).tierProgressBar,fVar18,method_00);
    fVar19 = (float10)func_?();
    pTVar14 = (pTVar3->fields).crystalsGainedSinceDeath;
    (pTVar3->fields).currentCrystalValue = (float)fVar19;
    pSVar11 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar3->fields).currentCrystalValue,(MethodInfo *)0x0);
    if (pTVar14 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar14,pSVar11);
    pRVar21 = (pTVar3->fields).lockImage;
    if ((pRVar21 == (RectTransform *)0x0) ||
       (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar21,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0))
    goto code_?;
    bVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                       (pGVar22,(MethodInfo *)0x0);
    if (bVar23 != 0) {
      this_01 = (pTVar3->fields).lockShakeCurve;
      if (this_01 == (AnimationCurve *)0x0) goto code_?;
      fVar18 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (this_01,(pTVar1->fields)._totalProgress_5__6,(MethodInfo *)0x0);
      uVar24 = (pTVar3->fields).lockStartRot.x;
      uVar25 = (pTVar3->fields).lockStartRot.y;
      this_02 = (Transform *)(pTVar3->fields).lockImage;
      euler.y = (float)uVar25 * _UNK_?;
      euler.x = (float)uVar24 * _UNK_?;
      euler.z = fVar18 * (pTVar3->fields).intensity * _UNK_? * _UNK_?;
      pQVar26 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffffd8,euler,(MethodInfo *)0x0);
      if (this_02 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (this_02,*pQVar26,(MethodInfo *)0x0);
    }
    pGVar22 = (pTVar3->fields).progressBarDivider;
    if (pGVar22 == (GameObject *)0x0) goto code_?;
    bVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar22,(MethodInfo *)0x0);
    if (bVar23 != 0) {
      pPVar27 = (pTVar3->fields).tierProgressBar;
      if (pPVar27 == (ProgressBar *)0x0) goto code_?;
      if ((pPVar27->fields).progress <= 0.0) {
        pGVar22 = (pTVar3->fields).progressBarDivider;
        if (pGVar22 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar22,0,(MethodInfo *)0x0);
      }
    }
    (pTVar3->fields).unlockingTier = (float)(pTVar3->fields).gamePointsRequired <= (float)iVar20;
    pTVar14 = (pTVar3->fields).progressText;
    pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar12 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&(pTVar3->fields).gamePointsRequired,(MethodInfo *)0x0);
    pSVar11 = mscorlib.dll::System::String::String_Concat_4
                        (pSVar11,::StringLiteral____,pSVar12,(MethodInfo *)0x0);
    if (pTVar14 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar14,pSVar11);
    if ((pTVar3->fields).unlockingTier != 0) {
      pRVar21 = (pTVar3->fields).lockImage;
      (pTVar3->fields).fromProgress = (float)iVar13;
      if ((pRVar21 == (RectTransform *)0x0) ||
         (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pRVar21,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0
         )) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar22,0,(MethodInfo *)0x0);
      pCVar28 = (pTVar3->fields).unlockImage;
      if ((pCVar28 == (CanvasGroup *)0x0) ||
         (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar28,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0
         )) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar22,1,(MethodInfo *)0x0);
      (pTVar1->fields)._lockLerpTimer_5__7 = 0.0;
code_?:
      pCVar28 = (pTVar3->fields).unlockImage;
      if ((pCVar28 == (CanvasGroup *)0x0) ||
         (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar28,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0
         )) goto code_?;
      bVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                         (pGVar22,(MethodInfo *)0x0);
      if (bVar23 != 0) {
        fVar18 = (pTVar1->fields)._lockLerpTimer_5__7 / (pTVar3->fields).lockFadeLerpDuration;
        pCVar28 = (pTVar3->fields).unlockImage;
        if (fVar18 < 0.0) {
          fVar18 = 0.0;
        }
        else if (_UNK_? < fVar18) {
          fVar18 = _UNK_?;
        }
        if (pCVar28 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar28,fVar18 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
        fVar18 = (pTVar1->fields)._lockLerpTimer_5__7;
        fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar17 = fVar17 + fVar18;
        (pTVar1->fields)._lockLerpTimer_5__7 = fVar17;
        if (fVar17 < (pTVar3->fields).lockFadeLerpDuration) {
          (pTVar1->fields).__2__current = (Object *)0x0;
          func_?();
          (pTVar1->fields).__1__state = 1;
          return 1;
        }
      }
      IStack_2.m_value = (pTVar1->fields)._current_5__4;
      iVar13 = IStack_2.m_value + 1;
      (pTVar1->fields)._current_5__4 = iVar13;
      if (iVar13 == (pTVar1->fields)._to_5__3) {
        (pTVar1->fields)._stopped_5__5 = 1;
      }
      else if (iVar13 != 3) {
        pPVar15 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
        if (pPVar15 == (ProgressBarAndroid *)0x0) goto code_?;
        ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar15,0.0,(MethodInfo *)0x0);
        pRVar21 = (pTVar3->fields).lockImage;
        (pTVar3->fields).timer = 0.0;
        if ((pRVar21 == (RectTransform *)0x0) ||
           (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pRVar21,(MethodInfo *)0x0),
           pGVar22 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar22,1,(MethodInfo *)0x0);
        pCVar28 = (pTVar3->fields).unlockImage;
        if ((pCVar28 == (CanvasGroup *)0x0) ||
           (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pCVar28,(MethodInfo *)0x0),
           pGVar22 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar22,0,(MethodInfo *)0x0);
      }
    }
    if ((pTVar1->fields)._totalProgress_5__6 < _UNK_?) {
      (pTVar1->fields).__2__current = (Object *)0x0;
      func_?(&(pTVar1->fields).__2__current,0);
      (pTVar1->fields).__1__state = 2;
      return 1;
    }
  }
  if (pTVar3 == (TierOnDeathProgress *)0x0) {
code_?:
    bVar29 = 0;
    uVar30 = func_?();
    iVar13 = (int)((ulonglong)uVar30 >> 0x20);
    uVar31 = (uint)uVar30;
    puVar32 = (uint *)((uVar31 - 0xb) + iVar13);
    uVar33 = *puVar32;
    uVar34 = *puVar32;
    *puVar32 = (uVar34 - uVar31) - (uint)bVar29;
    piVar35 = (int *)(uVar31 + 0x78 + iVar13);
    *piVar35 = (*piVar35 - uVar31) - (uint)(uVar33 < uVar31 || uVar34 - uVar31 < (uint)bVar29);
    pbVar36 = (byte *)(uVar31 + 0x56 + iVar13);
    *pbVar36 = *pbVar36 & (byte)uVar30;
    uVar37 = func_?(&TypeInfo__System__NotSupportedException);
    this_03 = (NotSupportedException *)func_?(uVar37);
    mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
              (this_03,(MethodInfo *)0x0);
    uVar37 = func_?(&
                             MethodInfo__TierOnDeathProgress___DoTierProgress_d__32__System_Collections_IEnumerator_Reset__
                            );
    func_?(this_03,uVar37);
    pcVar38 = (code *)swi(3);
    bVar23 = (*pcVar38)();
    return bVar23;
  }
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

