
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
    cVar5 = (int)pPVar4 < 0;
    cVar6 = (POPCOUNT((uint)pPVar4 & 0xff) & 1U) == 0;
    if (pPVar4 == (PlayerPlanetData *)0x0) goto code_?;
    cVar5 = (int)pTVar3 < 0;
    cVar6 = (POPCOUNT((uint)pTVar3 & 0xff) & 1U) == 0;
    if (pTVar3 == (TierOnDeathProgress *)0x0) goto code_?;
    cVar5 = (int)this_00 < 0;
    cVar6 = (POPCOUNT((uint)this_00 & 0xff) & 1U) == 0;
    if (this_00 == (PlayerTierStateCalculator *)0x0) goto code_?;
    pDVar7 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
              PlayerTierStateCalculator_GetTierPricingState
                        (this_00,(pPVar4->fields).progressionGamePoints,
                         (int)(pTVar3->fields).tierToInterpolateFrom,(MethodInfo *)0x0);
    (this->fields)._gameTierShopStatus_5__2 = pDVar7;
    func_?(&(this->fields)._gameTierShopStatus_5__2,pDVar7);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePointGainEffectManager);
      cRam_? = '\x01';
    }
    pTVar8 = (TierOnDeathProgress_DoTierProgress_d_32 *)
             TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    cVar5 = (int)pPVar4 < 0;
    cVar6 = (POPCOUNT((uint)pPVar4 & 0xff) & 1U) == 0;
    if (pPVar4 == (PlayerPlanetData *)0x0) goto code_?;
    iVar9 = (pPVar4->fields).progressionGamePoints;
    iVar10 = func_?((pTVar3->fields).tierToInterpolateFrom,0);
    iVar11 = func_?((pTVar3->fields).tierToInterpolateTo,0);
    (this->fields)._current_5__4 = iVar10;
    (this->fields)._to_5__3 = iVar11;
    (this->fields)._stopped_5__5 = 0;
    (pTVar3->fields).fromProgress = (float)(int)pTVar8;
    (pTVar3->fields).toProgress = (float)iVar9;
    GamePointGainEffectManager::
    GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect(iVar9,(MethodInfo *)0x0)
    ;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePointGainEffectManager);
      cRam_? = '\x01';
    }
    TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown = iVar9;
    if (TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown !=
        (Action_1_Int32_ *)0x0) {
      pAVar12 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
      (*(pAVar12->fields)._._.invoke_impl)
                ((pAVar12->fields)._._.method_code,iVar9,(pAVar12->fields)._._.method);
    }
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
    this = pTVar8;
    break;
  case 1:
    (this->fields).__1__state = -1;
    cVar5 = (int)pTVar3 < 0;
    cVar6 = (POPCOUNT((uint)pTVar3 & 0xff) & 1U) == 0;
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
  iVar15 = (pTVar1->fields)._current_5__4;
  if ((iVar15 <= (pTVar1->fields)._to_5__3) && ((pTVar1->fields)._stopped_5__5 == 0)) {
    cVar5 = (int)pTVar3 < 0;
    cVar6 = (POPCOUNT((uint)pTVar3 & 0xff) & 1U) == 0;
    if (pTVar3 == (TierOnDeathProgress *)0x0) goto code_?;
    pTVar16 = (pTVar3->fields).nextTierText;
    if (iVar15 == 3) {
      pSVar13 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&(pTVar1->fields)._current_5__4,(MethodInfo *)0x0);
      cVar5 = (int)pTVar16 < 0;
      cVar6 = (POPCOUNT((uint)pTVar16 & 0xff) & 1U) == 0;
      if (pTVar16 == (Text *)0x0) goto code_?;
      func_?(0x4b,pTVar16,pSVar13);
      pPVar17 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
      cVar5 = (int)pPVar17 < 0;
      cVar6 = (POPCOUNT((uint)pPVar17 & 0xff) & 1U) == 0;
      if (pPVar17 == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar17,1.0,(MethodInfo *)0x0);
      goto code_?;
    }
    IStack_2.m_value = iVar15 + 1;
    pSVar13 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
    cVar5 = (int)pTVar16 < 0;
    cVar6 = (POPCOUNT((uint)pTVar16 & 0xff) & 1U) == 0;
    if (pTVar16 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar16,pSVar13);
    pDVar7 = (pTVar1->fields)._gameTierShopStatus_5__2;
    cVar5 = (int)pDVar7 < 0;
    cVar6 = (POPCOUNT((uint)pDVar7 & 0xff) & 1U) == 0;
    if (pDVar7 ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
    goto code_?;
    this = (TierOnDeathProgress_DoTierProgress_d_32 *)
           CONCAT31(this._1_3_,(char)(pTVar1->fields)._current_5__4 + '\x01');
    pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7,(ByteEnum__Enum)this
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                        );
    cVar5 = (int)pOVar18 < 0;
    cVar6 = (POPCOUNT((uint)pOVar18 & 0xff) & 1U) == 0;
    if (pOVar18 == (Object *)0x0) goto code_?;
    (pTVar3->fields).gamePointsRequired = (int32_t)pOVar18[3].klass;
    fVar19 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((pTVar3->fields).timer / (pTVar3->fields).progressLerpDuration,
                        (MethodInfo *)0x0);
    (pTVar1->fields)._totalProgress_5__6 = fVar19;
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
              ((pTVar3->fields).crystalTimer / (pTVar3->fields).progressLerpDuration,
               (MethodInfo *)0x0);
    fVar20 = (pTVar3->fields).fromProgress;
    if (fVar19 < 0.0) {
      fVar19 = 0.0;
    }
    else if (_UNK_? < fVar19) {
      fVar19 = _UNK_?;
    }
    in_AF = '\0';
    pDVar7 = (pTVar1->fields)._gameTierShopStatus_5__2;
    method_00 = (MethodInfo *)&UNK_?;
    fVar21 = (float10)func_?(SUB84((double)(((pTVar3->fields).toProgress - fVar20) * fVar19
                                                    + fVar20),0));
    iVar9 = (pTVar1->fields)._current_5__4;
    iVar22 = (int)fVar21;
    iVar15 = iVar22;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                     );
      cRam_? = '\x01';
    }
    key = (byte)((char)iVar9 + 1) - 1;
    if (0 < (int)key) {
      cVar5 = (int)pDVar7 < 0;
      cVar6 = (POPCOUNT((uint)pDVar7 & 0xff) & 1U) == 0;
      if (pDVar7 ==
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      goto code_?;
      do {
        pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7,key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                            );
        cVar5 = (int)pOVar18 < 0;
        cVar6 = (POPCOUNT((uint)pOVar18 & 0xff) & 1U) == 0;
        if (pOVar18 == (Object *)0x0) goto code_?;
        iVar22 = iVar22 - (int)pOVar18[3].klass;
        if (iVar22 < 1) {
          iVar22 = 0;
        }
        key = key - 1;
        iVar15 = iVar22;
      } while (0 < (int)key);
    }
    pPVar23 = (pTVar3->fields).tierProgressBar;
    cVar5 = (int)pPVar23 < 0;
    cVar6 = (POPCOUNT((uint)pPVar23 & 0xff) & 1U) == 0;
    if (pPVar23 == (ProgressBar *)0x0) goto code_?;
    fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((float)iVar22 / (float)(pTVar3->fields).gamePointsRequired,(MethodInfo *)0x0
                       );
    ProgressBarAndroid::ProgressBarAndroid_set_Progress
              ((ProgressBarAndroid *)(pTVar3->fields).tierProgressBar,fVar20,method_00);
    in_AF = '\0';
    fVar21 = (float10)func_?();
    pTVar16 = (pTVar3->fields).crystalsGainedSinceDeath;
    (pTVar3->fields).currentCrystalValue = (float)fVar21;
    pSVar13 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar3->fields).currentCrystalValue,(MethodInfo *)0x0);
    cVar5 = (int)pTVar16 < 0;
    cVar6 = (POPCOUNT((uint)pTVar16 & 0xff) & 1U) == 0;
    if (pTVar16 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar16,pSVar13);
    pRVar24 = (pTVar3->fields).lockImage;
    cVar5 = (int)pRVar24 < 0;
    cVar6 = (POPCOUNT((uint)pRVar24 & 0xff) & 1U) == 0;
    if (pRVar24 == (RectTransform *)0x0) goto code_?;
    pGVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pRVar24,(MethodInfo *)0x0);
    cVar5 = (int)pGVar25 < 0;
    cVar6 = (POPCOUNT((uint)pGVar25 & 0xff) & 1U) == 0;
    if (pGVar25 == (GameObject *)0x0) goto code_?;
    bVar26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                       (pGVar25,(MethodInfo *)0x0);
    if (bVar26 != 0) {
      this_01 = (pTVar3->fields).lockShakeCurve;
      cVar5 = (int)this_01 < 0;
      cVar6 = (POPCOUNT((uint)this_01 & 0xff) & 1U) == 0;
      if (this_01 == (AnimationCurve *)0x0) goto code_?;
      fVar20 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (this_01,(pTVar1->fields)._totalProgress_5__6,(MethodInfo *)0x0);
      uVar27 = (pTVar3->fields).lockStartRot.x;
      uVar28 = (pTVar3->fields).lockStartRot.y;
      this_02 = (Transform *)(pTVar3->fields).lockImage;
      euler.y = (float)uVar28 * _UNK_?;
      euler.x = (float)uVar27 * _UNK_?;
      euler.z = fVar20 * (pTVar3->fields).intensity * _UNK_? * _UNK_?;
      pQVar29 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffffd8,euler,(MethodInfo *)0x0);
      cVar5 = (int)this_02 < 0;
      cVar6 = (POPCOUNT((uint)this_02 & 0xff) & 1U) == 0;
      if (this_02 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (this_02,*pQVar29,(MethodInfo *)0x0);
    }
    pGVar25 = (pTVar3->fields).progressBarDivider;
    cVar5 = (int)pGVar25 < 0;
    cVar6 = (POPCOUNT((uint)pGVar25 & 0xff) & 1U) == 0;
    if (pGVar25 == (GameObject *)0x0) goto code_?;
    bVar26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar25,(MethodInfo *)0x0);
    if (bVar26 != 0) {
      pPVar23 = (pTVar3->fields).tierProgressBar;
      cVar5 = (int)pPVar23 < 0;
      cVar6 = (POPCOUNT((uint)pPVar23 & 0xff) & 1U) == 0;
      if (pPVar23 == (ProgressBar *)0x0) goto code_?;
      in_AF = '\0';
      if ((pPVar23->fields).progress <= 0.0) {
        pGVar25 = (pTVar3->fields).progressBarDivider;
        cVar5 = (int)pGVar25 < 0;
        cVar6 = (POPCOUNT((uint)pGVar25 & 0xff) & 1U) == 0;
        if (pGVar25 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar25,0,(MethodInfo *)0x0);
      }
    }
    (pTVar3->fields).unlockingTier = (float)(pTVar3->fields).gamePointsRequired <= (float)iVar22;
    in_AF = '\0';
    pTVar16 = (pTVar3->fields).progressText;
    pSVar13 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar14 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&(pTVar3->fields).gamePointsRequired,(MethodInfo *)0x0);
    pSVar13 = mscorlib.dll::System::String::String_Concat_4
                        (pSVar13,::StringLiteral____,pSVar14,(MethodInfo *)0x0);
    cVar5 = (int)pTVar16 < 0;
    cVar6 = (POPCOUNT((uint)pTVar16 & 0xff) & 1U) == 0;
    if (pTVar16 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar16,pSVar13);
    if ((pTVar3->fields).unlockingTier != 0) {
      pRVar24 = (pTVar3->fields).lockImage;
      (pTVar3->fields).fromProgress = (float)iVar15;
      cVar5 = (int)pRVar24 < 0;
      cVar6 = (POPCOUNT((uint)pRVar24 & 0xff) & 1U) == 0;
      if (pRVar24 == (RectTransform *)0x0) goto code_?;
      pGVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pRVar24,(MethodInfo *)0x0);
      cVar5 = (int)pGVar25 < 0;
      cVar6 = (POPCOUNT((uint)pGVar25 & 0xff) & 1U) == 0;
      if (pGVar25 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar25,0,(MethodInfo *)0x0);
      pCVar30 = (pTVar3->fields).unlockImage;
      cVar5 = (int)pCVar30 < 0;
      cVar6 = (POPCOUNT((uint)pCVar30 & 0xff) & 1U) == 0;
      if (pCVar30 == (CanvasGroup *)0x0) goto code_?;
      pGVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pCVar30,(MethodInfo *)0x0);
      cVar5 = (int)pGVar25 < 0;
      cVar6 = (POPCOUNT((uint)pGVar25 & 0xff) & 1U) == 0;
      if (pGVar25 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar25,1,(MethodInfo *)0x0);
      (pTVar1->fields)._lockLerpTimer_5__7 = 0.0;
code_?:
      pCVar30 = (pTVar3->fields).unlockImage;
      cVar5 = (int)pCVar30 < 0;
      cVar6 = (POPCOUNT((uint)pCVar30 & 0xff) & 1U) == 0;
      if (pCVar30 == (CanvasGroup *)0x0) goto code_?;
      pGVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pCVar30,(MethodInfo *)0x0);
      cVar5 = (int)pGVar25 < 0;
      cVar6 = (POPCOUNT((uint)pGVar25 & 0xff) & 1U) == 0;
      if (pGVar25 == (GameObject *)0x0) goto code_?;
      bVar26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                         (pGVar25,(MethodInfo *)0x0);
      if (bVar26 != 0) {
        fVar20 = (pTVar1->fields)._lockLerpTimer_5__7 / (pTVar3->fields).lockFadeLerpDuration;
        pCVar30 = (pTVar3->fields).unlockImage;
        if (fVar20 < 0.0) {
          fVar20 = 0.0;
        }
        else if (_UNK_? < fVar20) {
          fVar20 = _UNK_?;
        }
        in_AF = '\0';
        cVar5 = (int)pCVar30 < 0;
        cVar6 = (POPCOUNT((uint)pCVar30 & 0xff) & 1U) == 0;
        if (pCVar30 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar30,fVar20 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
        fVar20 = (pTVar1->fields)._lockLerpTimer_5__7;
        fVar19 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar19 = fVar19 + fVar20;
        (pTVar1->fields)._lockLerpTimer_5__7 = fVar19;
        in_AF = '\0';
        if (fVar19 < (pTVar3->fields).lockFadeLerpDuration) {
          (pTVar1->fields).__2__current = (Object *)0x0;
          func_?();
          (pTVar1->fields).__1__state = 1;
          return 1;
        }
      }
      IStack_2.m_value = (pTVar1->fields)._current_5__4;
      iVar15 = IStack_2.m_value + 1;
      (pTVar1->fields)._current_5__4 = iVar15;
      if (iVar15 == (pTVar1->fields)._to_5__3) {
        (pTVar1->fields)._stopped_5__5 = 1;
      }
      else if (iVar15 != 3) {
        pPVar17 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
        cVar5 = (int)pPVar17 < 0;
        cVar6 = (POPCOUNT((uint)pPVar17 & 0xff) & 1U) == 0;
        if (pPVar17 == (ProgressBarAndroid *)0x0) goto code_?;
        ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar17,0.0,(MethodInfo *)0x0);
        pRVar24 = (pTVar3->fields).lockImage;
        (pTVar3->fields).timer = 0.0;
        cVar5 = (int)pRVar24 < 0;
        cVar6 = (POPCOUNT((uint)pRVar24 & 0xff) & 1U) == 0;
        if (pRVar24 == (RectTransform *)0x0) goto code_?;
        pGVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar24,(MethodInfo *)0x0);
        cVar5 = (int)pGVar25 < 0;
        cVar6 = (POPCOUNT((uint)pGVar25 & 0xff) & 1U) == 0;
        if (pGVar25 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar25,1,(MethodInfo *)0x0);
        pCVar30 = (pTVar3->fields).unlockImage;
        cVar5 = (int)pCVar30 < 0;
        cVar6 = (POPCOUNT((uint)pCVar30 & 0xff) & 1U) == 0;
        if (pCVar30 == (CanvasGroup *)0x0) goto code_?;
        pGVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pCVar30,(MethodInfo *)0x0);
        cVar5 = (int)pGVar25 < 0;
        cVar6 = (POPCOUNT((uint)pGVar25 & 0xff) & 1U) == 0;
        if (pGVar25 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar25,0,(MethodInfo *)0x0);
      }
    }
    in_AF = '\0';
    if ((pTVar1->fields)._totalProgress_5__6 < _UNK_?) {
      (pTVar1->fields).__2__current = (Object *)0x0;
      func_?(&(pTVar1->fields).__2__current,0);
      (pTVar1->fields).__1__state = 2;
      return 1;
    }
  }
  cVar5 = (int)pTVar3 < 0;
  cVar6 = (POPCOUNT((uint)pTVar3 & 0xff) & 1U) == 0;
  if (pTVar3 == (TierOnDeathProgress *)0x0) {
code_?:
    cVar31 = '\x01';
    bVar32 = 0;
    uVar33 = func_?();
    pcVar34 = (char *)CONCAT22((short)((ulonglong)uVar33 >> 0x10),
                               CONCAT11(cVar5 << 7 | cVar31 << 6 | in_AF << 4 | cVar6 << 2 | 2U |
                                        bVar32,(char)uVar33));
    *pcVar34 = *pcVar34 + extraout_CL;
    pcVar34[(int)((ulonglong)uVar33 >> 0x20) + 0x56] =
         pcVar34[(int)((ulonglong)uVar33 >> 0x20) + 0x56] + (char)uVar33;
    uVar35 = func_?(&TypeInfo__System__NotSupportedException);
    this_03 = (NotSupportedException *)func_?(uVar35);
    mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
              (this_03,(MethodInfo *)0x0);
    uVar35 = func_?(&
                             MethodInfo__TierOnDeathProgress___DoTierProgress_d__32__System_Collections_IEnumerator_Reset__
                            );
    func_?(this_03,uVar35);
    pcVar36 = (code *)swi(3);
    bVar26 = (*pcVar36)();
    return bVar26;
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

