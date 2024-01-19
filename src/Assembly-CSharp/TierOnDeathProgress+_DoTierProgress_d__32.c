
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
  pPVar4 = (PlayerPlanetData *)pTVar1;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    cVar6 = (int)pPVar5 < 0;
    bVar7 = true;
    if (pPVar5 == (PlayerPlanetData *)0x0) goto code_?;
    cVar6 = (int)pTVar3 < 0;
    bVar7 = true;
    if (pTVar3 == (TierOnDeathProgress *)0x0) goto code_?;
    cVar6 = (int)this_00 < 0;
    bVar7 = true;
    if (this_00 == (PlayerTierStateCalculator *)0x0) goto code_?;
    pDVar8 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
              PlayerTierStateCalculator_GetTierPricingState
                        (this_00,(pPVar5->fields).progressionGamePoints,
                         (int)(pTVar3->fields).tierToInterpolateFrom,(MethodInfo *)0x0);
    (this->fields)._gameTierShopStatus_5__2 = pDVar8;
    func_?(&(this->fields)._gameTierShopStatus_5__2,pDVar8);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePointGainEffectManager);
      cRam_? = '\x01';
    }
    iVar9 = TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    cVar6 = (int)pPVar4 < 0;
    bVar7 = true;
    if (pPVar4 == (PlayerPlanetData *)0x0) goto code_?;
    iVar10 = (pPVar4->fields).progressionGamePoints;
    iVar11 = func_?((pTVar3->fields).tierToInterpolateFrom,0);
    iVar12 = func_?((pTVar3->fields).tierToInterpolateTo,0);
    (this->fields)._to_5__3 = iVar12;
    (this->fields)._current_5__4 = iVar11;
    (this->fields)._stopped_5__5 = 0;
    (pTVar3->fields).fromProgress = (float)iVar9;
    (pTVar3->fields).toProgress = (float)iVar10;
    GamePointGainEffectManager::
    GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect(iVar10,(MethodInfo *)0x0)
    ;
    GamePointGainEffectManager::GamePointGainEffectManager_HaveShownGamePointGainEffect
              (iVar10,(MethodInfo *)0x0);
    pSVar13 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar3->fields).fromProgress,(MethodInfo *)0x0);
    pSVar14 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar3->fields).toProgress,(MethodInfo *)0x0);
    pSVar13 = mscorlib.dll::System::String::String_Concat_5
                        (StringLiteral_From_To_,pSVar13,::StringLiteral__,pSVar14,(MethodInfo *)0x0)
    ;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar13,(MethodInfo *)0x0)
    ;
    break;
  case 1:
    (this->fields).__1__state = -1;
    cVar6 = (int)pTVar3 < 0;
    bVar7 = true;
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
  iVar10 = (this->fields)._current_5__4;
  pPVar4 = (PlayerPlanetData *)pTVar1;
  if ((iVar10 <= (this->fields)._to_5__3) && ((this->fields)._stopped_5__5 == 0)) {
    cVar6 = (int)pTVar3 < 0;
    bVar7 = true;
    if (pTVar3 == (TierOnDeathProgress *)0x0) goto code_?;
    pTVar15 = (pTVar3->fields).nextTierText;
    if (iVar10 == 3) {
      pSVar13 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&(this->fields)._current_5__4,(MethodInfo *)0x0);
      cVar6 = (int)pTVar15 < 0;
      bVar7 = true;
      if (pTVar15 == (Text *)0x0) goto code_?;
      func_?(0x4b,pTVar15,pSVar13);
      pPVar16 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
      cVar6 = (int)pPVar16 < 0;
      bVar7 = true;
      if (pPVar16 == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar16,1.0,(MethodInfo *)0x0);
      goto code_?;
    }
    IStack_2.m_value = iVar10 + 1;
    pSVar13 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
    cVar6 = (int)pTVar15 < 0;
    bVar7 = true;
    if (pTVar15 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar15,pSVar13);
    pDVar8 = (this->fields)._gameTierShopStatus_5__2;
    cVar6 = (int)pDVar8 < 0;
    bVar7 = true;
    if (pDVar8 ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
    goto code_?;
    this = (TierOnDeathProgress_DoTierProgress_d_32 *)
           CONCAT31(this._1_3_,(char)(this->fields)._current_5__4 + '\x01');
    pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar8,(ByteEnum__Enum)this
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                        );
    cVar6 = (int)pOVar17 < 0;
    bVar7 = true;
    if (pOVar17 == (Object *)0x0) goto code_?;
    (pTVar3->fields).gamePointsRequired = (int32_t)pOVar17[3].klass;
    fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((pTVar3->fields).timer / (pTVar3->fields).progressLerpDuration,
                        (MethodInfo *)0x0);
    (pTVar1->fields)._totalProgress_5__6 = fVar18;
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
              ((pTVar3->fields).crystalTimer / (pTVar3->fields).progressLerpDuration,
               (MethodInfo *)0x0);
    fVar19 = (pTVar3->fields).fromProgress;
    if (fVar18 < 0.0) {
      fVar18 = 0.0;
    }
    else if (_UNK_? < fVar18) {
      fVar18 = _UNK_?;
    }
    pDVar8 = (pTVar1->fields)._gameTierShopStatus_5__2;
    method_00 = (MethodInfo *)&UNK_?;
    fVar20 = (float10)func_?(SUB84((double)(((pTVar3->fields).toProgress - fVar19) * fVar18
                                                    + fVar19),0));
    iVar9 = (pTVar1->fields)._current_5__4;
    iVar21 = (int)fVar20;
    iVar10 = iVar21;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                     );
      cRam_? = '\x01';
    }
    key = (byte)((char)iVar9 + 1) - 1;
    if (0 < (int)key) {
      cVar6 = (int)pDVar8 < 0;
      bVar7 = true;
      if (pDVar8 ==
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      goto code_?;
      do {
        pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar8,key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                            );
        cVar6 = (int)pOVar17 < 0;
        bVar7 = true;
        if (pOVar17 == (Object *)0x0) goto code_?;
        iVar21 = iVar21 - (int)pOVar17[3].klass;
        if (iVar21 < 1) {
          iVar21 = 0;
        }
        key = key - 1;
        iVar10 = iVar21;
      } while (0 < (int)key);
    }
    pPVar22 = (pTVar3->fields).tierProgressBar;
    cVar6 = (int)pPVar22 < 0;
    bVar7 = true;
    if (pPVar22 == (ProgressBar *)0x0) goto code_?;
    fVar19 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((float)iVar21 / (float)(pTVar3->fields).gamePointsRequired,(MethodInfo *)0x0
                       );
    ProgressBarAndroid::ProgressBarAndroid_set_Progress
              ((ProgressBarAndroid *)(pTVar3->fields).tierProgressBar,fVar19,method_00);
    fVar20 = (float10)func_?();
    pTVar15 = (pTVar3->fields).crystalsGainedSinceDeath;
    (pTVar3->fields).currentCrystalValue = (float)fVar20;
    pSVar13 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar3->fields).currentCrystalValue,(MethodInfo *)0x0);
    cVar6 = (int)pTVar15 < 0;
    bVar7 = true;
    if (pTVar15 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar15,pSVar13);
    pRVar23 = (pTVar3->fields).lockImage;
    cVar6 = (int)pRVar23 < 0;
    bVar7 = true;
    if (pRVar23 == (RectTransform *)0x0) goto code_?;
    pGVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pRVar23,(MethodInfo *)0x0);
    cVar6 = (int)pGVar24 < 0;
    bVar7 = true;
    if (pGVar24 == (GameObject *)0x0) goto code_?;
    bVar25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                       (pGVar24,(MethodInfo *)0x0);
    if (bVar25 != 0) {
      this_01 = (pTVar3->fields).lockShakeCurve;
      cVar6 = (int)this_01 < 0;
      bVar7 = true;
      if (this_01 == (AnimationCurve *)0x0) goto code_?;
      fVar19 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (this_01,(pTVar1->fields)._totalProgress_5__6,(MethodInfo *)0x0);
      this_02 = (Transform *)(pTVar3->fields).lockImage;
      uVar26._0_4_ = (pTVar3->fields).lockStartRot.x;
      uVar26._4_4_ = (pTVar3->fields).lockStartRot.y;
      pQVar27 = (Quaternion *)
                func_?(&stack0xffffffd8,uVar26,
                                fVar19 * (pTVar3->fields).intensity * _UNK_?,0);
      cVar6 = (int)this_02 < 0;
      bVar7 = true;
      if (this_02 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (this_02,*pQVar27,(MethodInfo *)0x0);
    }
    pGVar24 = (pTVar3->fields).progressBarDivider;
    cVar6 = (int)pGVar24 < 0;
    bVar7 = true;
    if (pGVar24 == (GameObject *)0x0) goto code_?;
    bVar25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar24,(MethodInfo *)0x0);
    if (bVar25 != 0) {
      pPVar22 = (pTVar3->fields).tierProgressBar;
      cVar6 = (int)pPVar22 < 0;
      bVar7 = true;
      if (pPVar22 == (ProgressBar *)0x0) goto code_?;
      if ((pPVar22->fields).progress <= 0.0) {
        pGVar24 = (pTVar3->fields).progressBarDivider;
        cVar6 = (int)pGVar24 < 0;
        bVar7 = true;
        if (pGVar24 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar24,0,(MethodInfo *)0x0);
      }
    }
    (pTVar3->fields).unlockingTier = (float)(pTVar3->fields).gamePointsRequired <= (float)iVar21;
    pTVar15 = (pTVar3->fields).progressText;
    pSVar13 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar14 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&(pTVar3->fields).gamePointsRequired,(MethodInfo *)0x0);
    pSVar13 = mscorlib.dll::System::String::String_Concat_4
                        (pSVar13,::StringLiteral____,pSVar14,(MethodInfo *)0x0);
    cVar6 = (int)pTVar15 < 0;
    bVar7 = true;
    if (pTVar15 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar15,pSVar13);
    if ((pTVar3->fields).unlockingTier != 0) {
      pRVar23 = (pTVar3->fields).lockImage;
      (pTVar3->fields).fromProgress = (float)iVar10;
      cVar6 = (int)pRVar23 < 0;
      bVar7 = true;
      if (pRVar23 == (RectTransform *)0x0) goto code_?;
      pGVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pRVar23,(MethodInfo *)0x0);
      cVar6 = (int)pGVar24 < 0;
      bVar7 = true;
      if (pGVar24 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar24,0,(MethodInfo *)0x0);
      pCVar28 = (pTVar3->fields).unlockImage;
      cVar6 = (int)pCVar28 < 0;
      bVar7 = true;
      if (pCVar28 == (CanvasGroup *)0x0) goto code_?;
      pGVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pCVar28,(MethodInfo *)0x0);
      cVar6 = (int)pGVar24 < 0;
      bVar7 = true;
      if (pGVar24 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar24,1,(MethodInfo *)0x0);
      (pTVar1->fields)._lockLerpTimer_5__7 = 0.0;
code_?:
      pCVar28 = (pTVar3->fields).unlockImage;
      cVar6 = (int)pCVar28 < 0;
      bVar7 = true;
      pPVar4 = (PlayerPlanetData *)pTVar1;
      if (pCVar28 == (CanvasGroup *)0x0) goto code_?;
      pGVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pCVar28,(MethodInfo *)0x0);
      cVar6 = (int)pGVar24 < 0;
      bVar7 = true;
      if (pGVar24 == (GameObject *)0x0) goto code_?;
      bVar25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                         (pGVar24,(MethodInfo *)0x0);
      if (bVar25 != 0) {
        fVar19 = (pTVar1->fields)._lockLerpTimer_5__7 / (pTVar3->fields).lockFadeLerpDuration;
        pCVar28 = (pTVar3->fields).unlockImage;
        if (fVar19 < 0.0) {
          fVar19 = 0.0;
        }
        else if (_UNK_? < fVar19) {
          fVar19 = _UNK_?;
        }
        cVar6 = (int)pCVar28 < 0;
        bVar7 = true;
        if (pCVar28 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar28,fVar19 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
        fVar19 = (pTVar1->fields)._lockLerpTimer_5__7;
        fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar18 = fVar18 + fVar19;
        (pTVar1->fields)._lockLerpTimer_5__7 = fVar18;
        if (fVar18 < (pTVar3->fields).lockFadeLerpDuration) {
          (pTVar1->fields).__2__current = (Object *)0x0;
          func_?();
          (pTVar1->fields).__1__state = 1;
          return 1;
        }
      }
      IStack_2.m_value = (pTVar1->fields)._current_5__4;
      iVar10 = IStack_2.m_value + 1;
      (pTVar1->fields)._current_5__4 = iVar10;
      if (iVar10 == (pTVar1->fields)._to_5__3) {
        (pTVar1->fields)._stopped_5__5 = 1;
      }
      else if (iVar10 != 3) {
        pPVar16 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
        cVar6 = (int)pPVar16 < 0;
        bVar7 = true;
        if (pPVar16 == (ProgressBarAndroid *)0x0) goto code_?;
        ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar16,0.0,(MethodInfo *)0x0);
        pRVar23 = (pTVar3->fields).lockImage;
        (pTVar3->fields).timer = 0.0;
        cVar6 = (int)pRVar23 < 0;
        bVar7 = true;
        if (pRVar23 == (RectTransform *)0x0) goto code_?;
        pGVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar23,(MethodInfo *)0x0);
        cVar6 = (int)pGVar24 < 0;
        bVar7 = true;
        if (pGVar24 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar24,1,(MethodInfo *)0x0);
        pCVar28 = (pTVar3->fields).unlockImage;
        cVar6 = (int)pCVar28 < 0;
        bVar7 = true;
        if (pCVar28 == (CanvasGroup *)0x0) goto code_?;
        pGVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pCVar28,(MethodInfo *)0x0);
        cVar6 = (int)pGVar24 < 0;
        bVar7 = true;
        if (pGVar24 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar24,0,(MethodInfo *)0x0);
      }
    }
    pPVar4 = (PlayerPlanetData *)pTVar1;
    if ((pTVar1->fields)._totalProgress_5__6 < _UNK_?) {
      (pTVar1->fields).__2__current = (Object *)0x0;
      func_?(&(pTVar1->fields).__2__current,0);
      (pTVar1->fields).__1__state = 2;
      return 1;
    }
  }
  while( true ) {
    cVar6 = (int)pTVar3 < 0;
    bVar7 = pTVar3 == (TierOnDeathProgress *)0x0;
    this = (TierOnDeathProgress_DoTierProgress_d_32 *)pPVar4;
    if (!bVar7) break;
code_?:
    cVar29 = '\0';
    bVar30 = 0;
    func_?();
    if (bVar7 || cVar29 != cVar6) {
      pbVar31 = (byte *)((int)&pTVar3->klass + 1);
      bVar32 = *(char *)&pPVar4->klass + extraout_CL;
      bVar7 = CARRY1(*(byte *)&pPVar4->klass,extraout_CL) || CARRY1(bVar32,bVar30);
      *(byte *)&pPVar4->klass = bVar32 + bVar30;
      bVar30 = *pbVar31;
      bVar32 = *pbVar31;
      *pbVar31 = bVar32 + 0x43 + bVar7;
      pcVar33 = (char *)(extraout_EDX + 0x43 + (int)pPVar4 * 4);
      *pcVar33 = *pcVar33 + (char)((uint)pbVar31 >> 8) +
                (0xbc < bVar30 || CARRY1(bVar32 + 0x43,bVar7));
      pcVar34 = (code *)swi(3);
      bVar25 = (*pcVar34)();
      return bVar25;
    }
    ppTVar35 = &pTVar3[0xa2754].fields.nextTierText;
    *ppTVar35 = (Text *)((int)&(*ppTVar35)->klass + 1);
  }
code_?:
  (pTVar3->fields)._IsShowingTierProgress_k__BackingField = 0;
  (((PlayerPlanetData *)this)->fields).rank = 0;
  func_?(&(((PlayerPlanetData *)this)->fields).rank,0);
  (((PlayerPlanetData *)this)->fields).highScoreGamePoints = 3;
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

