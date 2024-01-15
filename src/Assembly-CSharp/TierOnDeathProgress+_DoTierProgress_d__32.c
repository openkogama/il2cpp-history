
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TierOnDeathProgress+<DoTierProgress>d__32::
     TierOnDeathProgress_DoTierProgress_d_32_MoveNext
               (TierOnDeathProgress_DoTierProgress_d_32 *this,MethodInfo *method)

{
  pTVar1 = this;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  IStack_2.m_value = 0;
  pTVar3 = (this->fields).__4__this;
  pTVar4 = pTVar1;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    unaff_ESI = (Text *)TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (((pPVar5 == (PlayerPlanetData *)0x0) || (pTVar3 == (TierOnDeathProgress *)0x0)) ||
       (unaff_ESI == (Text *)0x0)) goto code_?;
    pDVar6 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
              PlayerTierStateCalculator_GetTierPricingState
                        ((PlayerTierStateCalculator *)unaff_ESI,
                         (pPVar5->fields).progressionGamePoints,
                         (int)(pTVar3->fields).tierToInterpolateFrom,(MethodInfo *)0x0);
    (this->fields)._gameTierShopStatus_5__2 = pDVar6;
    func_?();
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
    pTVar4 = (TierOnDeathProgress_DoTierProgress_d_32 *)0x0;
    if (pPVar5 == (PlayerPlanetData *)0x0) goto code_?;
    iVar8 = (pPVar5->fields).progressionGamePoints;
    iVar9 = func_?();
    iVar10 = func_?();
    (this->fields)._to_5__3 = iVar10;
    (this->fields)._current_5__4 = iVar9;
    (this->fields)._stopped_5__5 = 0;
    (pTVar3->fields).fromProgress = (float)iVar7;
    (pTVar3->fields).toProgress = (float)iVar8;
    GamePointGainEffectManager::
    GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect(iVar8,(MethodInfo *)0x0)
    ;
    GamePointGainEffectManager::GamePointGainEffectManager_HaveShownGamePointGainEffect
              (iVar8,(MethodInfo *)0x0);
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
  iVar8 = (this->fields)._current_5__4;
  if ((iVar8 <= (this->fields)._to_5__3) && ((this->fields)._stopped_5__5 == 0)) {
    pTVar4 = pTVar1;
    if (pTVar3 == (TierOnDeathProgress *)0x0) goto code_?;
    unaff_ESI = (pTVar3->fields).nextTierText;
    if (iVar8 == 3) {
      mscorlib.dll::System::Int32::Int32_ToString
                ((Int32 *)&(this->fields)._current_5__4,(MethodInfo *)0x0);
      if (unaff_ESI == (Text *)0x0) goto code_?;
      func_?();
      pPVar12 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
      if (pPVar12 == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar12,1.0,(MethodInfo *)0x0);
      goto code_?;
    }
    IStack_2.m_value = iVar8 + 1;
    mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
    if (unaff_ESI == (Text *)0x0) goto code_?;
    func_?();
    pDVar6 = (this->fields)._gameTierShopStatus_5__2;
    if (pDVar6 ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
    goto code_?;
    this = (TierOnDeathProgress_DoTierProgress_d_32 *)
           CONCAT31(this._1_3_,(char)(this->fields)._current_5__4 + '\x01');
    pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,(ByteEnum__Enum)this
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                        );
    if (pOVar13 == (Object *)0x0) goto code_?;
    (pTVar3->fields).gamePointsRequired = (int32_t)pOVar13[3].klass;
    fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((pTVar3->fields).timer / (pTVar3->fields).progressLerpDuration,
                        (MethodInfo *)0x0);
    (pTVar1->fields)._totalProgress_5__6 = fVar14;
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
              ((pTVar3->fields).crystalTimer / (pTVar3->fields).progressLerpDuration,
               (MethodInfo *)0x0);
    pDVar6 = (pTVar1->fields)._gameTierShopStatus_5__2;
    method_00 = (MethodInfo *)&UNK_?;
    fVar15 = (float10)func_?();
    iVar7 = (pTVar1->fields)._current_5__4;
    unaff_ESI = (Text *)(int)fVar15;
    pTVar16 = unaff_ESI;
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
        pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                            );
        if (pOVar13 == (Object *)0x0) goto code_?;
        unaff_ESI = (Text *)((int)unaff_ESI - (int)pOVar13[3].klass);
        if ((int)unaff_ESI < 1) {
          unaff_ESI = (Text *)0x0;
        }
        key = key - 1;
        pTVar16 = unaff_ESI;
      } while (0 < (int)key);
    }
    if ((pTVar3->fields).tierProgressBar == (ProgressBar *)0x0) goto code_?;
    fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((float)(int)unaff_ESI / (float)(pTVar3->fields).gamePointsRequired,
                        (MethodInfo *)0x0);
    ProgressBarAndroid::ProgressBarAndroid_set_Progress
              ((ProgressBarAndroid *)(pTVar3->fields).tierProgressBar,fVar14,method_00);
    fVar15 = (float10)func_?();
    pTVar17 = (pTVar3->fields).crystalsGainedSinceDeath;
    (pTVar3->fields).currentCrystalValue = (float)fVar15;
    mscorlib.dll::System::Single::Single_ToString
              ((Single *)&(pTVar3->fields).currentCrystalValue,(MethodInfo *)0x0);
    if (pTVar17 == (Text *)0x0) goto code_?;
    func_?();
    pRVar18 = (pTVar3->fields).lockImage;
    if ((pRVar18 == (RectTransform *)0x0) ||
       (pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar18,(MethodInfo *)0x0), pGVar19 == (GameObject *)0x0))
    goto code_?;
    bVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                       (pGVar19,(MethodInfo *)0x0);
    if (bVar20 != 0) {
      this_00 = (pTVar3->fields).lockShakeCurve;
      if (this_00 == (AnimationCurve *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                (this_00,(pTVar1->fields)._totalProgress_5__6,(MethodInfo *)0x0);
      this_01 = (Transform *)(pTVar3->fields).lockImage;
      pQVar21 = (Quaternion *)func_?();
      if (this_01 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (this_01,*pQVar21,(MethodInfo *)0x0);
    }
    pGVar19 = (pTVar3->fields).progressBarDivider;
    if (pGVar19 == (GameObject *)0x0) goto code_?;
    bVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar19,(MethodInfo *)0x0);
    if (bVar20 != 0) {
      pPVar22 = (pTVar3->fields).tierProgressBar;
      if (pPVar22 == (ProgressBar *)0x0) goto code_?;
      if ((pPVar22->fields).progress <= 0.0) {
        pGVar19 = (pTVar3->fields).progressBarDivider;
        if (pGVar19 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar19,0,(MethodInfo *)0x0);
      }
    }
    (pTVar3->fields).unlockingTier =
         (float)(pTVar3->fields).gamePointsRequired <= (float)(int)unaff_ESI;
    pTVar17 = (pTVar3->fields).progressText;
    unaff_ESI = (Text *)mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&(pTVar3->fields).gamePointsRequired,(MethodInfo *)0x0);
    mscorlib.dll::System::String::String_Concat_4
              ((String *)unaff_ESI,::StringLiteral____,pSVar11,(MethodInfo *)0x0);
    if (pTVar17 == (Text *)0x0) goto code_?;
    func_?();
    if ((pTVar3->fields).unlockingTier != 0) {
      pRVar18 = (pTVar3->fields).lockImage;
      (pTVar3->fields).fromProgress = (float)(int)pTVar16;
      if ((pRVar18 == (RectTransform *)0x0) ||
         (pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pRVar18,(MethodInfo *)0x0), pGVar19 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar19,0,(MethodInfo *)0x0);
      pCVar23 = (pTVar3->fields).unlockImage;
      if ((pCVar23 == (CanvasGroup *)0x0) ||
         (pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar23,(MethodInfo *)0x0), pGVar19 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar19,1,(MethodInfo *)0x0);
      (pTVar1->fields)._lockLerpTimer_5__7 = 0.0;
code_?:
      pCVar23 = (pTVar3->fields).unlockImage;
      pTVar4 = pTVar1;
      if ((pCVar23 == (CanvasGroup *)0x0) ||
         (pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar23,(MethodInfo *)0x0), pGVar19 == (GameObject *)0x0)
         ) goto code_?;
      bVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                         (pGVar19,(MethodInfo *)0x0);
      if (bVar20 != 0) {
        fVar14 = (pTVar1->fields)._lockLerpTimer_5__7 / (pTVar3->fields).lockFadeLerpDuration;
        pCVar23 = (pTVar3->fields).unlockImage;
        if (fVar14 < 0.0) {
          fVar14 = 0.0;
        }
        else if (_UNK_? < fVar14) {
          fVar14 = _UNK_?;
        }
        if (pCVar23 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar23,fVar14 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
        fVar14 = (pTVar1->fields)._lockLerpTimer_5__7;
        fVar24 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar24 = fVar24 + fVar14;
        (pTVar1->fields)._lockLerpTimer_5__7 = fVar24;
        if (fVar24 < (pTVar3->fields).lockFadeLerpDuration) {
          (pTVar1->fields).__2__current = (Object *)0x0;
          func_?();
          (pTVar1->fields).__1__state = 1;
          return 1;
        }
      }
      IStack_2.m_value = (pTVar1->fields)._current_5__4;
      iVar8 = IStack_2.m_value + 1;
      (pTVar1->fields)._current_5__4 = iVar8;
      if (iVar8 == (pTVar1->fields)._to_5__3) {
        (pTVar1->fields)._stopped_5__5 = 1;
      }
      else if (iVar8 != 3) {
        pPVar12 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
        if (pPVar12 == (ProgressBarAndroid *)0x0) goto code_?;
        ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar12,0.0,(MethodInfo *)0x0);
        pRVar18 = (pTVar3->fields).lockImage;
        (pTVar3->fields).timer = 0.0;
        if ((pRVar18 == (RectTransform *)0x0) ||
           (pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pRVar18,(MethodInfo *)0x0),
           pGVar19 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar19,1,(MethodInfo *)0x0);
        pCVar23 = (pTVar3->fields).unlockImage;
        if ((pCVar23 == (CanvasGroup *)0x0) ||
           (pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pCVar23,(MethodInfo *)0x0),
           pGVar19 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar19,0,(MethodInfo *)0x0);
      }
    }
    if ((pTVar1->fields)._totalProgress_5__6 < _UNK_?) {
      (pTVar1->fields).__2__current = (Object *)0x0;
      func_?();
      (pTVar1->fields).__1__state = 2;
      return 1;
    }
  }
  pTVar4 = pTVar1;
  if (pTVar3 == (TierOnDeathProgress *)0x0) {
code_?:
    cVar25 = '\0';
    func_?();
    bVar26 = *(byte *)&unaff_ESI->klass;
    *(char *)&pTVar4->klass = *(char *)&pTVar4->klass + extraout_CH + cVar25;
    bVar27 = bVar26 < *(byte *)&pTVar4->klass;
    ppAVar28 = &pTVar3[-1].fields.lockShakeCurve;
    bVar29 = *(byte *)ppAVar28;
    cVar25 = *(char *)ppAVar28;
    *(byte *)ppAVar28 = cVar25 + bVar26 + bVar27;
    (&stack0xcccc100f)[(int)((int)&unaff_ESI->klass + 1) * 4] =
         (&stack0xcccc100f)[(int)((int)&unaff_ESI->klass + 1) * 4] + (char)pTVar3 + '\x03' +
         (CARRY1(bVar29,bVar26) || CARRY1(cVar25 + bVar26,bVar27));
    pcVar30 = (code *)swi(3);
    bVar20 = (*pcVar30)();
    return bVar20;
  }
code_?:
  (pTVar3->fields)._IsShowingTierProgress_k__BackingField = 0;
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

