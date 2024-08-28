
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
  pTVar2 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    unaff_ESI = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (((pPVar3 == (PlayerPlanetData *)0x0) || (pTVar2 == (TierOnDeathProgress *)0x0)) ||
       (unaff_ESI == (PlayerTierStateCalculator *)0x0)) goto code_?;
    pDVar4 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
              PlayerTierStateCalculator_GetTierPricingState
                        (unaff_ESI,(pPVar3->fields).progressionGamePoints,
                         (int)(pTVar2->fields).tierToInterpolateFrom,(MethodInfo *)0x0);
    ppDVar5 = &(this->fields)._gameTierShopStatus_5__2;
    *ppDVar5 = pDVar4;
    func_?(ppDVar5,pDVar4);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePointGainEffectManager);
      cRam_? = '\x01';
    }
    iVar6 = TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar3 == (PlayerPlanetData *)0x0) goto code_?;
    gamePointAmountShown = (pPVar3->fields).progressionGamePoints;
    iVar7 = func_?((pTVar2->fields).tierToInterpolateFrom,0);
    iVar8 = func_?((pTVar2->fields).tierToInterpolateTo,0);
    (this->fields)._current_5__4 = iVar7;
    (this->fields)._to_5__3 = iVar8;
    (this->fields)._stopped_5__5 = 0;
    (pTVar2->fields).fromProgress = (float)iVar6;
    (pTVar2->fields).toProgress = (float)gamePointAmountShown;
    GamePointGainEffectManager::
    GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect
              (gamePointAmountShown,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePointGainEffectManager);
      cRam_? = '\x01';
    }
    TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown =
         gamePointAmountShown;
    pAVar9 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
    if (pAVar9 != (Action_1_Int32_ *)0x0) {
      (*(pAVar9->fields)._._.invoke_impl)
                ((pAVar9->fields)._._.method_code,gamePointAmountShown,(pAVar9->fields)._._.method);
    }
    pSVar10 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar2->fields).fromProgress,(MethodInfo *)0x0);
    str3 = mscorlib.dll::System::Single::Single_ToString
                     ((Single *)&(pTVar2->fields).toProgress,(MethodInfo *)0x0);
    pSVar10 = mscorlib.dll::System::String::String_Concat_5
                        (StringLiteral_From_To_,pSVar10,::StringLiteral__,str3,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar10,(MethodInfo *)0x0)
    ;
    break;
  case 1:
    (this->fields).__1__state = -1;
    if (pTVar2 == (TierOnDeathProgress *)0x0) goto code_?;
    goto code_?;
  case 2:
    (this->fields).__1__state = -1;
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  iVar6 = (this->fields)._current_5__4;
  unaff_ESI = (PlayerTierStateCalculator *)&(this->fields)._current_5__4;
  if ((iVar6 <= (this->fields)._to_5__3) && ((this->fields)._stopped_5__5 == 0)) {
    if (pTVar2 == (TierOnDeathProgress *)0x0) goto code_?;
    if (iVar6 == 3) {
      pTVar11 = (pTVar2->fields).nextTierText;
      pSVar10 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)unaff_ESI,(MethodInfo *)0x0);
      if (pTVar11 == (Text *)0x0) goto code_?;
      func_?(0x4b,pTVar11,pSVar10);
      pPVar12 = (ProgressBarAndroid *)(pTVar2->fields).tierProgressBar;
      if (pPVar12 == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar12,1.0,(MethodInfo *)0x0);
      goto code_?;
    }
    pTVar11 = (pTVar2->fields).nextTierText;
    pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
    if (pTVar11 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar11,pSVar10);
    pDVar4 = (this->fields)._gameTierShopStatus_5__2;
    if (pDVar4 ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
    goto code_?;
    this = (TierOnDeathProgress_DoTierProgress_d_32 *)
           CONCAT31((int3)((uint)pTVar11 >> 8),(char)*(int32_t *)unaff_ESI + '\x01');
    pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,(ByteEnum__Enum)this
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                        );
    if (pOVar13 == (Object *)0x0) goto code_?;
    (pTVar2->fields).gamePointsRequired = (int32_t)pOVar13[3].klass;
    fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((pTVar2->fields).timer / (pTVar2->fields).progressLerpDuration,
                        (MethodInfo *)0x0);
    (pTVar1->fields)._totalProgress_5__6 = fVar14;
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
              ((pTVar2->fields).crystalTimer / (pTVar2->fields).progressLerpDuration,
               (MethodInfo *)0x0);
    fVar15 = (pTVar2->fields).fromProgress;
    if (fVar14 < 0.0) {
      fVar14 = 0.0;
    }
    else if (_UNK_? < fVar14) {
      fVar14 = _UNK_?;
    }
    pDVar4 = (pTVar1->fields)._gameTierShopStatus_5__2;
    method_00 = (MethodInfo *)&UNK_?;
    fVar16 = (float10)func_?(SUB84((double)(((pTVar2->fields).toProgress - fVar15) * fVar14
                                                    + fVar15),0));
    iVar7 = (pTVar1->fields)._current_5__4;
    pPVar17 = (PlayerTierStateCalculator *)(int)fVar16;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                     );
      cRam_? = '\x01';
    }
    key = (ByteEnum__Enum)(byte)((char)iVar7 + 1);
    while (key = key - 1, 0 < (int)key) {
      unaff_ESI = pPVar17;
      if ((pDVar4 ==
           (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0
          ) || (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,key,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                    ), pOVar13 == (Object *)0x0)) goto code_?;
      pPVar17 = (PlayerTierStateCalculator *)((int)pPVar17 - (int)pOVar13[3].klass);
      if ((int)pPVar17 < 1) {
        pPVar17 = (PlayerTierStateCalculator *)0x0;
      }
    }
    pPVar12 = (ProgressBarAndroid *)(pTVar2->fields).tierProgressBar;
    unaff_ESI = (PlayerTierStateCalculator *)0x0;
    if (pPVar12 == (ProgressBarAndroid *)0x0) goto code_?;
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((float)(int)pPVar17 / (float)(pTVar2->fields).gamePointsRequired,
                        (MethodInfo *)0x0);
    ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar12,fVar15,method_00);
    unaff_ESI = (PlayerTierStateCalculator *)&(pTVar2->fields).currentCrystalValue;
    fVar16 = (float10)func_?();
    pTVar11 = (pTVar2->fields).crystalsGainedSinceDeath;
    *(float *)unaff_ESI = (float)fVar16;
    pSVar10 = mscorlib.dll::System::Single::Single_ToString((Single *)unaff_ESI,(MethodInfo *)0x0);
    if (pTVar11 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar11,pSVar10);
    pRVar18 = (pTVar2->fields).lockImage;
    if ((pRVar18 == (RectTransform *)0x0) ||
       (pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar18,(MethodInfo *)0x0), pGVar19 == (GameObject *)0x0))
    goto code_?;
    bVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                       (pGVar19,(MethodInfo *)0x0);
    if (bVar20 != 0) {
      this_00 = (pTVar2->fields).lockShakeCurve;
      if (this_00 == (AnimationCurve *)0x0) goto code_?;
      fVar15 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (this_00,(pTVar1->fields)._totalProgress_5__6,(MethodInfo *)0x0);
      uVar21 = (pTVar2->fields).lockStartRot.x;
      uVar22 = (pTVar2->fields).lockStartRot.y;
      unaff_ESI = (PlayerTierStateCalculator *)(pTVar2->fields).lockImage;
      euler.y = (float)uVar22 * _UNK_?;
      euler.x = (float)uVar21 * _UNK_?;
      euler.z = (pTVar2->fields).intensity * fVar15 * _UNK_? * _UNK_?;
      pQVar23 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffffd8,euler,(MethodInfo *)0x0);
      if (unaff_ESI == (PlayerTierStateCalculator *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                ((Transform *)unaff_ESI,*pQVar23,(MethodInfo *)0x0);
    }
    pGVar19 = (pTVar2->fields).progressBarDivider;
    if (pGVar19 == (GameObject *)0x0) goto code_?;
    bVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar19,(MethodInfo *)0x0);
    if (bVar20 != 0) {
      pPVar24 = (pTVar2->fields).tierProgressBar;
      if (pPVar24 == (ProgressBar *)0x0) goto code_?;
      if ((pPVar24->fields).progress <= 0.0) {
        pGVar19 = (pTVar2->fields).progressBarDivider;
        if (pGVar19 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar19,0,(MethodInfo *)0x0);
      }
    }
    (pTVar2->fields).unlockingTier =
         (float)(pTVar2->fields).gamePointsRequired <= (float)(int)pPVar17;
    pTVar11 = (pTVar2->fields).progressText;
    unaff_ESI = (PlayerTierStateCalculator *)
                mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&stack0xffffffec,(MethodInfo *)0x0);
    pSVar10 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&(pTVar2->fields).gamePointsRequired,(MethodInfo *)0x0);
    pSVar10 = mscorlib.dll::System::String::String_Concat_4
                        ((String *)unaff_ESI,::StringLiteral____,pSVar10,(MethodInfo *)0x0);
    if (pTVar11 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar11,pSVar10);
    if ((pTVar2->fields).unlockingTier != 0) {
      pRVar18 = (pTVar2->fields).lockImage;
      (pTVar2->fields).fromProgress = (float)(int)pPVar17;
      if ((pRVar18 == (RectTransform *)0x0) ||
         (pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pRVar18,(MethodInfo *)0x0), pGVar19 == (GameObject *)0x0
         )) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar19,0,(MethodInfo *)0x0);
      pCVar25 = (pTVar2->fields).unlockImage;
      if ((pCVar25 == (CanvasGroup *)0x0) ||
         (pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar25,(MethodInfo *)0x0), pGVar19 == (GameObject *)0x0
         )) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar19,1,(MethodInfo *)0x0);
      (pTVar1->fields)._lockLerpTimer_5__7 = 0.0;
code_?:
      pCVar25 = (pTVar2->fields).unlockImage;
      if ((pCVar25 == (CanvasGroup *)0x0) ||
         (pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar25,(MethodInfo *)0x0), pGVar19 == (GameObject *)0x0
         )) goto code_?;
      bVar20 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                         (pGVar19,(MethodInfo *)0x0);
      if (bVar20 != 0) {
        fVar15 = (pTVar1->fields)._lockLerpTimer_5__7 / (pTVar2->fields).lockFadeLerpDuration;
        pCVar25 = (pTVar2->fields).unlockImage;
        if (fVar15 < 0.0) {
          fVar15 = 0.0;
        }
        else if (_UNK_? < fVar15) {
          fVar15 = _UNK_?;
        }
        if (pCVar25 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar25,fVar15 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
        fVar15 = (pTVar1->fields)._lockLerpTimer_5__7;
        fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar14 = fVar14 + fVar15;
        (pTVar1->fields)._lockLerpTimer_5__7 = fVar14;
        if (fVar14 < (pTVar2->fields).lockFadeLerpDuration) {
          (pTVar1->fields).__2__current = (Object *)0x0;
          func_?();
          (pTVar1->fields).__1__state = 1;
          return 1;
        }
      }
      iVar6 = (pTVar1->fields)._current_5__4 + 1;
      (pTVar1->fields)._current_5__4 = iVar6;
      if (iVar6 == (pTVar1->fields)._to_5__3) {
        (pTVar1->fields)._stopped_5__5 = 1;
      }
      else if (iVar6 != 3) {
        pPVar12 = (ProgressBarAndroid *)(pTVar2->fields).tierProgressBar;
        if (pPVar12 == (ProgressBarAndroid *)0x0) goto code_?;
        ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar12,0.0,(MethodInfo *)0x0);
        pRVar18 = (pTVar2->fields).lockImage;
        (pTVar2->fields).timer = 0.0;
        if ((pRVar18 == (RectTransform *)0x0) ||
           (pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pRVar18,(MethodInfo *)0x0),
           pGVar19 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar19,1,(MethodInfo *)0x0);
        pCVar25 = (pTVar2->fields).unlockImage;
        if ((pCVar25 == (CanvasGroup *)0x0) ||
           (pGVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pCVar25,(MethodInfo *)0x0),
           pGVar19 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar19,0,(MethodInfo *)0x0);
      }
    }
    if ((pTVar1->fields)._totalProgress_5__6 < _UNK_?) {
      ppOVar26 = &(pTVar1->fields).__2__current;
      *ppOVar26 = (Object *)0x0;
      func_?(ppOVar26,0);
      (pTVar1->fields).__1__state = 2;
      return 1;
    }
  }
  if (pTVar2 == (TierOnDeathProgress *)0x0) {
code_?:
    uVar27 = func_?();
    out((short)((ulonglong)uVar27 >> 0x20),(TierOnDeathProgress__Class *)uVar27);
    bVar28 = (byte)((ulonglong)uVar27 >> 0x20);
    pTVar2->klass = (TierOnDeathProgress__Class *)uVar27;
    pcVar29 = (char *)(CONCAT31((int3)((ulonglong)uVar27 >> 0x28),bVar28 * '\x02') + 0x43 +
                     (int)unaff_ESI * 4);
    *pcVar29 = *pcVar29 + bVar28 * '\x02' + CARRY1(bVar28,bVar28);
    pcVar30 = (code *)swi(3);
    bVar20 = (*pcVar30)();
    return bVar20;
  }
code_?:
  ppOVar26 = &(pTVar1->fields).__2__current;
  (pTVar2->fields)._IsShowingTierProgress_k__BackingField = 0;
  *ppOVar26 = (Object *)0x0;
  func_?(ppOVar26,0);
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

