
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TierOnDeathProgress+<DoTierProgress>d__32::
     TierOnDeathProgress_DoTierProgress_d_32_MoveNext
               (TierOnDeathProgress_DoTierProgress_d_32 *this,MethodInfo *method)

{
  pTVar1 = this;
  puVar2 = (undefined4 *)&stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    func_?(&StringLiteral_From_To_);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral____);
    cRam_? = '\x01';
  }
  IStack_3.m_value = 0;
  pTVar4 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (((pPVar5 == (PlayerPlanetData *)0x0) || (pTVar4 == (TierOnDeathProgress *)0x0)) ||
       (this_00 == (PlayerTierStateCalculator *)0x0)) goto code_?;
    pDVar6 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
              PlayerTierStateCalculator_GetTierPricingState
                        (this_00,(pPVar5->fields).progressionGamePoints,
                         (int)(pTVar4->fields).tierToInterpolateFrom,(MethodInfo *)0x0);
    (this->fields)._gameTierShopStatus_5__2 = pDVar6;
    func_?(&(this->fields)._gameTierShopStatus_5__2);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    iVar7 = TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar5 == (PlayerPlanetData *)0x0) goto code_?;
    iVar8 = (pPVar5->fields).progressionGamePoints;
    iVar9 = func_?((pTVar4->fields).tierToInterpolateFrom);
    iVar10 = func_?((pTVar4->fields).tierToInterpolateTo);
    (this->fields)._to_5__3 = iVar10;
    (this->fields)._current_5__4 = iVar9;
    (this->fields)._stopped_5__5 = 0;
    (pTVar4->fields).fromProgress = (float)iVar7;
    (pTVar4->fields).toProgress = (float)iVar8;
    GamePointGainEffectManager::
    GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect(iVar8,(MethodInfo *)0x0)
    ;
    GamePointGainEffectManager::GamePointGainEffectManager_HaveShownGamePointGainEffect
              (iVar8,(MethodInfo *)0x0);
    pSVar11 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar4->fields).fromProgress,(MethodInfo *)0x0);
    pSVar12 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar4->fields).toProgress,(MethodInfo *)0x0);
    pSVar11 = mscorlib.dll::System::String::String_Concat_5
                        (StringLiteral_From_To_,pSVar11,::StringLiteral__,pSVar12,(MethodInfo *)0x0)
    ;
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar11,(MethodInfo *)0x0)
    ;
    break;
  case 1:
    (this->fields).__1__state = -1;
    if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
    goto code_?;
  case 2:
    (this->fields).__1__state = -1;
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  iVar8 = (this->fields)._current_5__4;
  if ((iVar8 <= (this->fields)._to_5__3) && ((this->fields)._stopped_5__5 == 0)) {
    if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
    pTVar13 = (pTVar4->fields).nextTierText;
    if (iVar8 == 3) {
      mscorlib.dll::System::Int32::Int32_ToString
                ((Int32 *)&(this->fields)._current_5__4,(MethodInfo *)0x0);
      if (pTVar13 == (Text *)0x0) goto code_?;
      func_?();
      pPVar14 = (ProgressBarAndroid *)(pTVar4->fields).tierProgressBar;
      if (pPVar14 == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar14,1.0,(MethodInfo *)0x0);
      goto code_?;
    }
    IStack_3.m_value = iVar8 + 1;
    mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
    if (pTVar13 == (Text *)0x0) goto code_?;
    func_?();
    pDVar6 = (this->fields)._gameTierShopStatus_5__2;
    if (pDVar6 ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
    goto code_?;
    this = (TierOnDeathProgress_DoTierProgress_d_32 *)
           CONCAT31(this._1_3_,(char)(this->fields)._current_5__4 + '\x01');
    pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,(ByteEnum__Enum)this
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                        );
    if (pOVar15 == (Object *)0x0) goto code_?;
    (pTVar4->fields).gamePointsRequired = (int32_t)pOVar15[3].klass;
    fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((pTVar4->fields).timer / (pTVar4->fields).progressLerpDuration,
                        (MethodInfo *)0x0);
    (pTVar1->fields)._totalProgress_5__6 = fVar16;
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
              ((pTVar4->fields).crystalTimer / (pTVar4->fields).progressLerpDuration,
               (MethodInfo *)0x0);
    pDVar6 = (pTVar1->fields)._gameTierShopStatus_5__2;
    method_00 = (MethodInfo *)&UNK_?;
    fVar17 = (float10)func_?();
    iVar7 = (pTVar1->fields)._current_5__4;
    iVar18 = (int)fVar17;
    iVar8 = iVar18;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    key = (byte)((char)iVar7 + 1) - 1;
    if (0 < (int)key) {
      if (pDVar6 ==
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      goto code_?;
      do {
        pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                            );
        if (pOVar15 == (Object *)0x0) goto code_?;
        iVar18 = iVar18 - (int)pOVar15[3].klass;
        if (iVar18 < 1) {
          iVar18 = 0;
        }
        key = key - 1;
        iVar8 = iVar18;
      } while (0 < (int)key);
    }
    if ((pTVar4->fields).tierProgressBar == (ProgressBar *)0x0) goto code_?;
    fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((float)iVar18 / (float)(pTVar4->fields).gamePointsRequired,(MethodInfo *)0x0
                       );
    ProgressBarAndroid::ProgressBarAndroid_set_Progress
              ((ProgressBarAndroid *)(pTVar4->fields).tierProgressBar,fVar16,method_00);
    fVar17 = (float10)func_?();
    pTVar13 = (pTVar4->fields).crystalsGainedSinceDeath;
    (pTVar4->fields).currentCrystalValue = (float)fVar17;
    mscorlib.dll::System::Single::Single_ToString
              ((Single *)&(pTVar4->fields).currentCrystalValue,(MethodInfo *)0x0);
    if (pTVar13 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar13);
    pRVar19 = (pTVar4->fields).lockImage;
    if ((pRVar19 == (RectTransform *)0x0) ||
       (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar19,(MethodInfo *)0x0), pGVar20 == (GameObject *)0x0))
    goto code_?;
    bVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                       (pGVar20,(MethodInfo *)0x0);
    if (bVar21 != 0) {
      this_01 = (pTVar4->fields).lockShakeCurve;
      if (this_01 == (AnimationCurve *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                (this_01,(pTVar1->fields)._totalProgress_5__6,(MethodInfo *)0x0);
      this_02 = (Transform *)(pTVar4->fields).lockImage;
      pQVar22 = (Quaternion *)func_?(&stack0xffffffd8);
      if (this_02 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (this_02,*pQVar22,(MethodInfo *)0x0);
    }
    pGVar20 = (pTVar4->fields).progressBarDivider;
    if (pGVar20 == (GameObject *)0x0) goto code_?;
    bVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar20,(MethodInfo *)0x0);
    if (bVar21 != 0) {
      pPVar23 = (pTVar4->fields).tierProgressBar;
      if (pPVar23 == (ProgressBar *)0x0) goto code_?;
      if ((pPVar23->fields).progress <= 0.0) {
        pGVar20 = (pTVar4->fields).progressBarDivider;
        if (pGVar20 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar20,0,(MethodInfo *)0x0);
      }
    }
    (pTVar4->fields).unlockingTier = (float)(pTVar4->fields).gamePointsRequired <= (float)iVar18;
    pTVar13 = (pTVar4->fields).progressText;
    pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar12 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&(pTVar4->fields).gamePointsRequired,(MethodInfo *)0x0);
    mscorlib.dll::System::String::String_Concat_4
              (pSVar11,::StringLiteral____,pSVar12,(MethodInfo *)0x0);
    if (pTVar13 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar13);
    if ((pTVar4->fields).unlockingTier != 0) {
      pRVar19 = (pTVar4->fields).lockImage;
      (pTVar4->fields).fromProgress = (float)iVar8;
      if ((pRVar19 == (RectTransform *)0x0) ||
         (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pRVar19,(MethodInfo *)0x0), pGVar20 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar20,0,(MethodInfo *)0x0);
      pCVar24 = (pTVar4->fields).unlockImage;
      if ((pCVar24 == (CanvasGroup *)0x0) ||
         (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar24,(MethodInfo *)0x0), pGVar20 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar20,1,(MethodInfo *)0x0);
      (pTVar1->fields)._lockLerpTimer_5__7 = 0.0;
code_?:
      pCVar24 = (pTVar4->fields).unlockImage;
      if ((pCVar24 == (CanvasGroup *)0x0) ||
         (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar24,(MethodInfo *)0x0), pGVar20 == (GameObject *)0x0)
         ) goto code_?;
      bVar21 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                         (pGVar20,(MethodInfo *)0x0);
      if (bVar21 != 0) {
        fVar16 = (pTVar1->fields)._lockLerpTimer_5__7 / (pTVar4->fields).lockFadeLerpDuration;
        pCVar24 = (pTVar4->fields).unlockImage;
        if (fVar16 < 0.0) {
          fVar16 = 0.0;
        }
        else if (_UNK_? < fVar16) {
          fVar16 = _UNK_?;
        }
        if (pCVar24 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar24,fVar16 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
        fVar16 = (pTVar1->fields)._lockLerpTimer_5__7;
        fVar25 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar25 = fVar25 + fVar16;
        (pTVar1->fields)._lockLerpTimer_5__7 = fVar25;
        if (fVar25 < (pTVar4->fields).lockFadeLerpDuration) {
          (pTVar1->fields).__2__current = (Object *)0x0;
          func_?();
          (pTVar1->fields).__1__state = 1;
          return 1;
        }
      }
      IStack_3.m_value = (pTVar1->fields)._current_5__4;
      iVar8 = IStack_3.m_value + 1;
      (pTVar1->fields)._current_5__4 = iVar8;
      if (iVar8 == (pTVar1->fields)._to_5__3) {
        (pTVar1->fields)._stopped_5__5 = 1;
      }
      else if (iVar8 != 3) {
        pPVar14 = (ProgressBarAndroid *)(pTVar4->fields).tierProgressBar;
        if (pPVar14 == (ProgressBarAndroid *)0x0) goto code_?;
        ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar14,0.0,(MethodInfo *)0x0);
        pRVar19 = (pTVar4->fields).lockImage;
        (pTVar4->fields).timer = 0.0;
        if ((pRVar19 == (RectTransform *)0x0) ||
           (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pRVar19,(MethodInfo *)0x0),
           pGVar20 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar20,1,(MethodInfo *)0x0);
        pCVar24 = (pTVar4->fields).unlockImage;
        if ((pCVar24 == (CanvasGroup *)0x0) ||
           (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pCVar24,(MethodInfo *)0x0),
           pGVar20 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar20,0,(MethodInfo *)0x0);
      }
    }
    if ((pTVar1->fields)._totalProgress_5__6 < _UNK_?) {
      (pTVar1->fields).__2__current = (Object *)0x0;
      func_?(&(pTVar1->fields).__2__current);
      (pTVar1->fields).__1__state = 2;
      return 1;
    }
  }
  if (pTVar4 == (TierOnDeathProgress *)0x0) {
code_?:
    bVar21 = func_?();
    puVar26 = (undefined4 *)&stack0xffffffc8;
    cVar27 = '\x1e';
    do {
      puVar2 = puVar2 + -1;
      puVar26 = puVar26 + -1;
      *puVar26 = *puVar2;
      cVar27 = cVar27 + -1;
    } while ('\0' < cVar27);
    return bVar21;
  }
code_?:
  (pTVar4->fields)._IsShowingTierProgress_k__BackingField = 0;
  (pTVar1->fields).__2__current = (Object *)0x0;
  func_?();
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

