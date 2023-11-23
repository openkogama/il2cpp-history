
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
    iVar6 = TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar4 == (PlayerPlanetData *)0x0) goto code_?;
    iVar7 = (pPVar4->fields).progressionGamePoints;
    iVar8 = func_?((pTVar3->fields).tierToInterpolateFrom,0);
    iVar9 = func_?((pTVar3->fields).tierToInterpolateTo,0);
    (this->fields)._to_5__3 = iVar9;
    (this->fields)._current_5__4 = iVar8;
    (this->fields)._stopped_5__5 = 0;
    (pTVar3->fields).fromProgress = (float)iVar6;
    (pTVar3->fields).toProgress = (float)iVar7;
    GamePointGainEffectManager::
    GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect(iVar7,(MethodInfo *)0x0)
    ;
    GamePointGainEffectManager::GamePointGainEffectManager_HaveShownGamePointGainEffect
              (iVar7,(MethodInfo *)0x0);
    pSVar10 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar3->fields).fromProgress,(MethodInfo *)0x0);
    pSVar11 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar3->fields).toProgress,(MethodInfo *)0x0);
    pSVar10 = mscorlib.dll::System::String::String_Concat_5
                        (StringLiteral_From_To_,pSVar10,::StringLiteral__,pSVar11,(MethodInfo *)0x0)
    ;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar10,(MethodInfo *)0x0)
    ;
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
  iVar7 = (this->fields)._current_5__4;
  if ((iVar7 <= (this->fields)._to_5__3) && ((this->fields)._stopped_5__5 == 0)) {
    if (pTVar3 == (TierOnDeathProgress *)0x0) goto code_?;
    pTVar12 = (pTVar3->fields).nextTierText;
    if (iVar7 == 3) {
      pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&(this->fields)._current_5__4,(MethodInfo *)0x0);
      if (pTVar12 == (Text *)0x0) goto code_?;
      func_?(0x4b,pTVar12,pSVar10);
      pPVar13 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
      if (pPVar13 == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar13,1.0,(MethodInfo *)0x0);
      goto code_?;
    }
    IStack_2.m_value = iVar7 + 1;
    pSVar10 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
    if (pTVar12 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar12,pSVar10);
    pDVar5 = (this->fields)._gameTierShopStatus_5__2;
    if (pDVar5 ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
    goto code_?;
    this = (TierOnDeathProgress_DoTierProgress_d_32 *)
           CONCAT31(this._1_3_,(char)(this->fields)._current_5__4 + '\x01');
    pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,(ByteEnum__Enum)this
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                        );
    if (pOVar14 == (Object *)0x0) goto code_?;
    (pTVar3->fields).gamePointsRequired = (int32_t)pOVar14[3].klass;
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((pTVar3->fields).timer / (pTVar3->fields).progressLerpDuration,
                        (MethodInfo *)0x0);
    (pTVar1->fields)._totalProgress_5__6 = fVar15;
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
              ((pTVar3->fields).crystalTimer / (pTVar3->fields).progressLerpDuration,
               (MethodInfo *)0x0);
    fVar16 = (pTVar3->fields).fromProgress;
    if (fVar15 < 0.0) {
      fVar15 = 0.0;
    }
    else if (_UNK_? < fVar15) {
      fVar15 = _UNK_?;
    }
    pDVar5 = (pTVar1->fields)._gameTierShopStatus_5__2;
    method_00 = (MethodInfo *)&UNK_?;
    fVar17 = (float10)func_?(SUB84((double)(((pTVar3->fields).toProgress - fVar16) * fVar15
                                                    + fVar16),0));
    iVar6 = (pTVar1->fields)._current_5__4;
    iVar18 = (int)fVar17;
    iVar7 = iVar18;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                     );
      cRam_? = '\x01';
    }
    key = (byte)((char)iVar6 + 1) - 1;
    if (0 < (int)key) {
      if (pDVar5 ==
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      goto code_?;
      do {
        pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                            );
        if (pOVar14 == (Object *)0x0) goto code_?;
        iVar18 = iVar18 - (int)pOVar14[3].klass;
        if (iVar18 < 1) {
          iVar18 = 0;
        }
        key = key - 1;
        iVar7 = iVar18;
      } while (0 < (int)key);
    }
    if ((pTVar3->fields).tierProgressBar == (ProgressBar *)0x0) goto code_?;
    fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((float)iVar18 / (float)(pTVar3->fields).gamePointsRequired,(MethodInfo *)0x0
                       );
    ProgressBarAndroid::ProgressBarAndroid_set_Progress
              ((ProgressBarAndroid *)(pTVar3->fields).tierProgressBar,fVar16,method_00);
    fVar17 = (float10)func_?();
    pTVar12 = (pTVar3->fields).crystalsGainedSinceDeath;
    (pTVar3->fields).currentCrystalValue = (float)fVar17;
    pSVar10 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar3->fields).currentCrystalValue,(MethodInfo *)0x0);
    if (pTVar12 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar12,pSVar10);
    pRVar19 = (pTVar3->fields).lockImage;
    if ((pRVar19 == (RectTransform *)0x0) ||
       (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar19,(MethodInfo *)0x0), pGVar20 == (GameObject *)0x0))
    goto code_?;
    bVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                       (pGVar20,(MethodInfo *)0x0);
    if (bVar21 != 0) {
      this_01 = (pTVar3->fields).lockShakeCurve;
      if (this_01 == (AnimationCurve *)0x0) goto code_?;
      fVar16 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (this_01,(pTVar1->fields)._totalProgress_5__6,(MethodInfo *)0x0);
      this_02 = (Transform *)(pTVar3->fields).lockImage;
      uVar22._0_4_ = (pTVar3->fields).lockStartRot.x;
      uVar22._4_4_ = (pTVar3->fields).lockStartRot.y;
      pQVar23 = (Quaternion *)
                func_?(&stack0xffffffd8,uVar22,
                                fVar16 * (pTVar3->fields).intensity * _UNK_?,0);
      if (this_02 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (this_02,*pQVar23,(MethodInfo *)0x0);
    }
    pGVar20 = (pTVar3->fields).progressBarDivider;
    if (pGVar20 == (GameObject *)0x0) goto code_?;
    bVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar20,(MethodInfo *)0x0);
    if (bVar21 != 0) {
      pPVar24 = (pTVar3->fields).tierProgressBar;
      if (pPVar24 == (ProgressBar *)0x0) goto code_?;
      if ((pPVar24->fields).progress <= 0.0) {
        pGVar20 = (pTVar3->fields).progressBarDivider;
        if (pGVar20 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar20,0,(MethodInfo *)0x0);
      }
    }
    (pTVar3->fields).unlockingTier = (float)(pTVar3->fields).gamePointsRequired <= (float)iVar18;
    pTVar12 = (pTVar3->fields).progressText;
    pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&(pTVar3->fields).gamePointsRequired,(MethodInfo *)0x0);
    pSVar10 = mscorlib.dll::System::String::String_Concat_4
                        (pSVar10,::StringLiteral____,pSVar11,(MethodInfo *)0x0);
    if (pTVar12 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar12,pSVar10);
    if ((pTVar3->fields).unlockingTier != 0) {
      pRVar19 = (pTVar3->fields).lockImage;
      (pTVar3->fields).fromProgress = (float)iVar7;
      if ((pRVar19 == (RectTransform *)0x0) ||
         (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pRVar19,(MethodInfo *)0x0), pGVar20 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar20,0,(MethodInfo *)0x0);
      pCVar25 = (pTVar3->fields).unlockImage;
      if ((pCVar25 == (CanvasGroup *)0x0) ||
         (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar25,(MethodInfo *)0x0), pGVar20 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar20,1,(MethodInfo *)0x0);
      (pTVar1->fields)._lockLerpTimer_5__7 = 0.0;
code_?:
      pCVar25 = (pTVar3->fields).unlockImage;
      if ((pCVar25 == (CanvasGroup *)0x0) ||
         (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar25,(MethodInfo *)0x0), pGVar20 == (GameObject *)0x0)
         ) goto code_?;
      bVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                         (pGVar20,(MethodInfo *)0x0);
      if (bVar21 != 0) {
        fVar16 = (pTVar1->fields)._lockLerpTimer_5__7 / (pTVar3->fields).lockFadeLerpDuration;
        pCVar25 = (pTVar3->fields).unlockImage;
        if (fVar16 < 0.0) {
          fVar16 = 0.0;
        }
        else if (_UNK_? < fVar16) {
          fVar16 = _UNK_?;
        }
        if (pCVar25 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar25,fVar16 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
        fVar16 = (pTVar1->fields)._lockLerpTimer_5__7;
        fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar15 = fVar15 + fVar16;
        (pTVar1->fields)._lockLerpTimer_5__7 = fVar15;
        if (fVar15 < (pTVar3->fields).lockFadeLerpDuration) {
          (pTVar1->fields).__2__current = (Object *)0x0;
          func_?();
          (pTVar1->fields).__1__state = 1;
          return 1;
        }
      }
      IStack_2.m_value = (pTVar1->fields)._current_5__4;
      iVar7 = IStack_2.m_value + 1;
      (pTVar1->fields)._current_5__4 = iVar7;
      if (iVar7 == (pTVar1->fields)._to_5__3) {
        (pTVar1->fields)._stopped_5__5 = 1;
      }
      else if (iVar7 != 3) {
        pPVar13 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
        if (pPVar13 == (ProgressBarAndroid *)0x0) goto code_?;
        ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar13,0.0,(MethodInfo *)0x0);
        pRVar19 = (pTVar3->fields).lockImage;
        (pTVar3->fields).timer = 0.0;
        if ((pRVar19 == (RectTransform *)0x0) ||
           (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pRVar19,(MethodInfo *)0x0),
           pGVar20 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar20,1,(MethodInfo *)0x0);
        pCVar25 = (pTVar3->fields).unlockImage;
        if ((pCVar25 == (CanvasGroup *)0x0) ||
           (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pCVar25,(MethodInfo *)0x0),
           pGVar20 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar20,0,(MethodInfo *)0x0);
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
    func_?();
    pcVar26 = (char *)((int)&stack0xfffffffc * 4 + 0x1bdc53ea);
    *pcVar26 = *pcVar26 + (char)((uint)((int)&pTVar3->klass + 1) >> 8);
    pcVar27 = (code *)swi(3);
    bVar21 = (*pcVar27)();
    return bVar21;
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

