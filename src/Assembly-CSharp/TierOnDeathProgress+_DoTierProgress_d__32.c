
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
  pTVar4 = pTVar1;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (((pPVar5 == (PlayerPlanetData *)0x0) || (pTVar3 == (TierOnDeathProgress *)0x0)) ||
       (this_00 == (PlayerTierStateCalculator *)0x0)) goto code_?;
    pDVar6 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
              PlayerTierStateCalculator_GetTierPricingState
                        (this_00,(pPVar5->fields).progressionGamePoints,
                         (int)(pTVar3->fields).tierToInterpolateFrom,(MethodInfo *)0x0);
    (this->fields)._gameTierShopStatus_5__2 = pDVar6;
    func_?(&(this->fields)._gameTierShopStatus_5__2,pDVar6);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePointGainEffectManager);
      cRam_? = '\x01';
    }
    iVar7 = TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    pTVar4 = (TierOnDeathProgress_DoTierProgress_d_32 *)0x0;
    if (pPVar5 == (PlayerPlanetData *)0x0) goto code_?;
    iVar8 = (pPVar5->fields).progressionGamePoints;
    iVar9 = func_?((pTVar3->fields).tierToInterpolateFrom,0);
    iVar10 = func_?((pTVar3->fields).tierToInterpolateTo,0);
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
    pTVar13 = (pTVar3->fields).nextTierText;
    if (iVar8 == 3) {
      pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&(this->fields)._current_5__4,(MethodInfo *)0x0);
      if (pTVar13 == (Text *)0x0) goto code_?;
      func_?(0x4b,pTVar13,pSVar11);
      pPVar14 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
      if (pPVar14 == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar14,1.0,(MethodInfo *)0x0);
      goto code_?;
    }
    IStack_2.m_value = iVar8 + 1;
    pSVar11 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
    if (pTVar13 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar13,pSVar11);
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
    (pTVar3->fields).gamePointsRequired = (int32_t)pOVar15[3].klass;
    fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((pTVar3->fields).timer / (pTVar3->fields).progressLerpDuration,
                        (MethodInfo *)0x0);
    (pTVar1->fields)._totalProgress_5__6 = fVar16;
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
              ((pTVar3->fields).crystalTimer / (pTVar3->fields).progressLerpDuration,
               (MethodInfo *)0x0);
    fVar17 = (pTVar3->fields).fromProgress;
    if (fVar16 < 0.0) {
      fVar16 = 0.0;
    }
    else if (_UNK_? < fVar16) {
      fVar16 = _UNK_?;
    }
    pDVar6 = (pTVar1->fields)._gameTierShopStatus_5__2;
    method_00 = (MethodInfo *)&UNK_?;
    fVar18 = (float10)func_?(SUB84((double)(((pTVar3->fields).toProgress - fVar17) * fVar16
                                                    + fVar17),0));
    iVar7 = (pTVar1->fields)._current_5__4;
    iVar19 = (int)fVar18;
    iVar8 = iVar19;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                     );
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
        iVar19 = iVar19 - (int)pOVar15[3].klass;
        if (iVar19 < 1) {
          iVar19 = 0;
        }
        key = key - 1;
        iVar8 = iVar19;
      } while (0 < (int)key);
    }
    if ((pTVar3->fields).tierProgressBar == (ProgressBar *)0x0) goto code_?;
    fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((float)iVar19 / (float)(pTVar3->fields).gamePointsRequired,(MethodInfo *)0x0
                       );
    ProgressBarAndroid::ProgressBarAndroid_set_Progress
              ((ProgressBarAndroid *)(pTVar3->fields).tierProgressBar,fVar17,method_00);
    fVar18 = (float10)func_?();
    pTVar13 = (pTVar3->fields).crystalsGainedSinceDeath;
    (pTVar3->fields).currentCrystalValue = (float)fVar18;
    pSVar11 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar3->fields).currentCrystalValue,(MethodInfo *)0x0);
    if (pTVar13 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar13,pSVar11);
    pRVar20 = (pTVar3->fields).lockImage;
    if ((pRVar20 == (RectTransform *)0x0) ||
       (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar20,(MethodInfo *)0x0), pGVar21 == (GameObject *)0x0))
    goto code_?;
    bVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                       (pGVar21,(MethodInfo *)0x0);
    if (bVar22 != 0) {
      this_01 = (pTVar3->fields).lockShakeCurve;
      if (this_01 == (AnimationCurve *)0x0) goto code_?;
      fVar17 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (this_01,(pTVar1->fields)._totalProgress_5__6,(MethodInfo *)0x0);
      this_02 = (Transform *)(pTVar3->fields).lockImage;
      uVar23._0_4_ = (pTVar3->fields).lockStartRot.x;
      uVar23._4_4_ = (pTVar3->fields).lockStartRot.y;
      pQVar24 = (Quaternion *)
                func_?(&stack0xffffffd8,uVar23,
                                fVar17 * (pTVar3->fields).intensity * _UNK_?,0);
      if (this_02 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (this_02,*pQVar24,(MethodInfo *)0x0);
    }
    pGVar21 = (pTVar3->fields).progressBarDivider;
    if (pGVar21 == (GameObject *)0x0) goto code_?;
    bVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar21,(MethodInfo *)0x0);
    if (bVar22 != 0) {
      pPVar25 = (pTVar3->fields).tierProgressBar;
      if (pPVar25 == (ProgressBar *)0x0) goto code_?;
      if ((pPVar25->fields).progress <= 0.0) {
        pGVar21 = (pTVar3->fields).progressBarDivider;
        if (pGVar21 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar21,0,(MethodInfo *)0x0);
      }
    }
    (pTVar3->fields).unlockingTier = (float)(pTVar3->fields).gamePointsRequired <= (float)iVar19;
    pTVar13 = (pTVar3->fields).progressText;
    pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar12 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&(pTVar3->fields).gamePointsRequired,(MethodInfo *)0x0);
    pSVar11 = mscorlib.dll::System::String::String_Concat_4
                        (pSVar11,::StringLiteral____,pSVar12,(MethodInfo *)0x0);
    if (pTVar13 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar13,pSVar11);
    if ((pTVar3->fields).unlockingTier != 0) {
      pRVar20 = (pTVar3->fields).lockImage;
      (pTVar3->fields).fromProgress = (float)iVar8;
      if ((pRVar20 == (RectTransform *)0x0) ||
         (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pRVar20,(MethodInfo *)0x0), pGVar21 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar21,0,(MethodInfo *)0x0);
      pCVar26 = (pTVar3->fields).unlockImage;
      if ((pCVar26 == (CanvasGroup *)0x0) ||
         (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar26,(MethodInfo *)0x0), pGVar21 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar21,1,(MethodInfo *)0x0);
      (pTVar1->fields)._lockLerpTimer_5__7 = 0.0;
code_?:
      pCVar26 = (pTVar3->fields).unlockImage;
      pTVar4 = pTVar1;
      if ((pCVar26 == (CanvasGroup *)0x0) ||
         (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar26,(MethodInfo *)0x0), pGVar21 == (GameObject *)0x0)
         ) goto code_?;
      bVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                         (pGVar21,(MethodInfo *)0x0);
      if (bVar22 != 0) {
        fVar17 = (pTVar1->fields)._lockLerpTimer_5__7 / (pTVar3->fields).lockFadeLerpDuration;
        pCVar26 = (pTVar3->fields).unlockImage;
        if (fVar17 < 0.0) {
          fVar17 = 0.0;
        }
        else if (_UNK_? < fVar17) {
          fVar17 = _UNK_?;
        }
        if (pCVar26 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar26,fVar17 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
        fVar17 = (pTVar1->fields)._lockLerpTimer_5__7;
        fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar16 = fVar16 + fVar17;
        (pTVar1->fields)._lockLerpTimer_5__7 = fVar16;
        if (fVar16 < (pTVar3->fields).lockFadeLerpDuration) {
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
        pPVar14 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
        if (pPVar14 == (ProgressBarAndroid *)0x0) goto code_?;
        ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar14,0.0,(MethodInfo *)0x0);
        pRVar20 = (pTVar3->fields).lockImage;
        (pTVar3->fields).timer = 0.0;
        if ((pRVar20 == (RectTransform *)0x0) ||
           (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pRVar20,(MethodInfo *)0x0),
           pGVar21 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar21,1,(MethodInfo *)0x0);
        pCVar26 = (pTVar3->fields).unlockImage;
        if ((pCVar26 == (CanvasGroup *)0x0) ||
           (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pCVar26,(MethodInfo *)0x0),
           pGVar21 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar21,0,(MethodInfo *)0x0);
      }
    }
    if ((pTVar1->fields)._totalProgress_5__6 < _UNK_?) {
      (pTVar1->fields).__2__current = (Object *)0x0;
      func_?(&(pTVar1->fields).__2__current,0);
      (pTVar1->fields).__1__state = 2;
      return 1;
    }
  }
  pTVar4 = pTVar1;
  if (pTVar3 == (TierOnDeathProgress *)0x0) {
code_?:
    bVar27 = 0;
    bVar28 = func_?();
    iVar8 = CONCAT31((int3)((uint)pTVar3 >> 8),0x43);
    bVar29 = *(char *)&pTVar4->klass + extraout_CH;
    bVar30 = CARRY1(*(byte *)&pTVar4->klass,extraout_CH) || CARRY1(bVar29,bVar27);
    *(byte *)&pTVar4->klass = bVar29 + bVar27;
    pbVar31 = (byte *)(iVar8 + -0x4b);
    bVar29 = *pbVar31;
    bVar27 = *pbVar31;
    *pbVar31 = bVar27 + bVar28 + bVar30;
    pcVar32 = (char *)(iVar8 + -0x3333efbc + (int)pTVar4 * 4);
    *pcVar32 = *pcVar32 + 'D' + (CARRY1(bVar29,bVar28) || CARRY1(bVar27 + bVar28,bVar30));
    pcVar33 = (code *)swi(3);
    bVar22 = (*pcVar33)();
    return bVar22;
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

