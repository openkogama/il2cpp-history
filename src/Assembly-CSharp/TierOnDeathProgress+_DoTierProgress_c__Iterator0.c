
/* Void Dispose() */

void Assembly-CSharp.dll::TierOnDeathProgress+<DoTierProgress>c__Iterator0::
     TierOnDeathProgress_DoTierProgress_c_Iterator0_Dispose
               (TierOnDeathProgress_DoTierProgress_c_Iterator0 *this,MethodInfo *method)

{
  (this->fields)._disposing = 1;
  (this->fields)._PC = -1;
  return;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TierOnDeathProgress+<DoTierProgress>c__Iterator0::
     TierOnDeathProgress_DoTierProgress_c_Iterator0_MoveNext
               (TierOnDeathProgress_DoTierProgress_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  switch(iVar2) {
  case 0:
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (((pPVar3 == (PlayerPlanetData *)0x0) ||
        (pTVar4 = (this->fields)._this, pTVar4 == (TierOnDeathProgress *)0x0)) ||
       (this_00 == (PlayerTierStateCalculator *)0x0)) goto code_?;
    pDVar5 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
             PlayerTierStateCalculator_GetTierPricingState
                       (this_00,(pPVar3->fields).progressionGamePoints,
                        (int)(pTVar4->fields).tierToInterpolateFrom,(MethodInfo *)0x0);
    (this->fields)._gameTierShopStatus___0 = pDVar5;
    if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
      func_?();
    }
    iVar2 = GamePointGainEffectManager::GamePointGainEffectManager_get_GamePointAmountShown
                       ((MethodInfo *)0x0);
    (this->fields)._previousShownGamePointAmount___0 = iVar2;
    pPVar3 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if (pPVar3 == (PlayerPlanetData *)0x0) goto code_?;
    (this->fields)._newGamePointAmountToShow___0 = (pPVar3->fields).progressionGamePoints;
    pTVar4 = (this->fields)._this;
    if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
    fVar6 = (pTVar4->fields).tierToInterpolateFrom;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                       (fVar6,(MethodInfo *)0x0);
    (this->fields)._from___0 = iVar2;
    pTVar4 = (this->fields)._this;
    if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                       ((pTVar4->fields).tierToInterpolateTo,(MethodInfo *)0x0);
    (this->fields)._to___0 = iVar2;
    (this->fields)._current___0 = (this->fields)._from___0;
    pTVar4 = (this->fields)._this;
    (this->fields)._stopped___0 = 0;
    if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
    (pTVar4->fields).fromProgress = (float)(this->fields)._previousShownGamePointAmount___0;
    pTVar4 = (this->fields)._this;
    if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
    (pTVar4->fields).toProgress = (float)(this->fields)._newGamePointAmountToShow___0;
    GamePointGainEffectManager::
    GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect
              ((this->fields)._newGamePointAmountToShow___0,(MethodInfo *)0x0);
    GamePointGainEffectManager::GamePointGainEffectManager_HaveShownGamePointGainEffect
              ((this->fields)._newGamePointAmountToShow___0,(MethodInfo *)0x0);
    args = (Object__Array *)func_?(TypeInfo__System__Object,4);
    if (args == (Object__Array *)0x0) goto code_?;
    func_?(args,StringLiteral_From_To_);
    if (args->max_length == 0) {
      uVar7 = func_?(0,0);
      func_?(uVar7);
code_?:
      uVar7 = func_?(0,0);
      func_?(uVar7);
code_?:
      uVar7 = func_?(0,0);
      func_?(uVar7);
    }
    else {
      args->vector[0] = (Object *)StringLiteral_From_To_;
      if ((this->fields)._this == (TierOnDeathProgress *)0x0) goto code_?;
      pOVar8 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff4);
      func_?(args,pOVar8);
      if (args->max_length < 2) goto code_?;
      args->vector[1] = pOVar8;
      func_?(args,::StringLiteral__);
      if (args->max_length < 3) goto code_?;
      args->vector[2] = (Object *)::StringLiteral__;
      if ((this->fields)._this == (TierOnDeathProgress *)0x0) goto code_?;
      pOVar8 = (Object *)func_?(TypeInfo__System__Single,&stack0xfffffff0);
      func_?(args,pOVar8);
      if (3 < args->max_length) {
        args->vector[3] = pOVar8;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar9 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar9,(MethodInfo *)0x0);
        goto code_?;
      }
    }
    uVar7 = func_?(0,0);
    func_?(uVar7);
    goto code_?;
  case 1:
code_?:
    pTVar4 = (this->fields)._this;
    if (((pTVar4 == (TierOnDeathProgress *)0x0) ||
        (pCVar10 = (pTVar4->fields).unlockImage, pCVar10 == (CanvasGroup *)0x0)) ||
       (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pCVar10,(MethodInfo *)0x0), pGVar11 == (GameObject *)0x0)
       ) goto code_?;
    bVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar11,(MethodInfo *)0x0);
    if (bVar12 != 0) {
      pTVar4 = (this->fields)._this;
      if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
      fVar6 = (pTVar4->fields).lockFadeLerpDuration;
      pCVar10 = (pTVar4->fields).unlockImage;
      fVar13 = (this->fields)._lockLerpTimer___2;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                         (1.0,0.0,fVar13 / fVar6,(MethodInfo *)0x0);
      if (pCVar10 == (CanvasGroup *)0x0) goto code_?;
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar10,fVar6,(MethodInfo *)0x0);
      fVar6 = (this->fields)._lockLerpTimer___2;
      fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar13 = fVar13 + fVar6;
      pTVar4 = (this->fields)._this;
      (this->fields)._lockLerpTimer___2 = fVar13;
      if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
      if (fVar13 < (pTVar4->fields).lockFadeLerpDuration) {
        (this->fields)._current = (Object *)0x0;
        if ((this->fields)._disposing != 0) {
          return 1;
        }
        (this->fields)._PC = 1;
        return 1;
      }
    }
    iVar14 = (this->fields)._current___0 + 1;
    (this->fields)._current___0 = iVar14;
    if (iVar14 == (this->fields)._to___0) {
      (this->fields)._stopped___0 = 1;
    }
    else if (iVar14 != 3) {
      pTVar4 = (this->fields)._this;
      if ((pTVar4 == (TierOnDeathProgress *)0x0) ||
         (pPVar15 = (pTVar4->fields).tierProgressBar, pPVar15 == (ProgressBar *)0x0))
      goto code_?;
      ProgressBar::ProgressBar_set_Progress(pPVar15,0.0,(MethodInfo *)0x0);
      pTVar4 = (this->fields)._this;
      if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
      (pTVar4->fields).timer = 0.0;
      pTVar4 = (this->fields)._this;
      if (((pTVar4 == (TierOnDeathProgress *)0x0) ||
          (pRVar16 = (pTVar4->fields).lockImage, pRVar16 == (RectTransform *)0x0)) ||
         (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pRVar16,(MethodInfo *)0x0),
         pGVar11 == (GameObject *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar11,1,(MethodInfo *)0x0);
      pTVar4 = (this->fields)._this;
      if (((pTVar4 == (TierOnDeathProgress *)0x0) ||
          (pCVar10 = (pTVar4->fields).unlockImage, pCVar10 == (CanvasGroup *)0x0)) ||
         (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pCVar10,(MethodInfo *)0x0),
         pGVar11 == (GameObject *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar11,0,(MethodInfo *)0x0);
    }
code_?:
    if ((this->fields)._totalProgress___1 < _UNK_?) {
      (this->fields)._current = (Object *)0x0;
      if ((this->fields)._disposing != 0) {
        return 1;
      }
      (this->fields)._PC = 2;
      return 1;
    }
    break;
  case 2:
code_?:
    iVar14 = (this->fields)._current___0;
    piVar17 = &(this->fields)._current___0;
    if ((iVar14 <= (this->fields)._to___0) && ((this->fields)._stopped___0 == 0)) {
      pTVar4 = (this->fields)._this;
      if (iVar14 != 3) {
        if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
        pTVar18 = (pTVar4->fields).nextTierText;
        iStack_1 = iVar14 + 1;
        uVar7 = func_?(&iStack_1,0);
        if (pTVar18 == (Text *)0x0) goto code_?;
        func_?(0x49,pTVar18,uVar7);
        pDVar5 = (this->fields)._gameTierShopStatus___0;
        pTVar4 = (this->fields)._this;
        if (((pDVar5 == (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                         *)0x0) ||
            (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                       GamePassTier,System::Object]::
                       Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                 ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar5,
                                  (uint)(byte)((char)*piVar17 + 1),
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                 ), pOVar8 == (Object *)0x0)) ||
           (pTVar4 == (TierOnDeathProgress *)0x0)) goto code_?;
        (pTVar4->fields).gamePointsRequired = (int32_t)pOVar8[3].klass;
        pTVar4 = (this->fields)._this;
        if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
        fVar6 = (pTVar4->fields).timer;
        fVar13 = (pTVar4->fields).progressLerpDuration;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Mathf);
        }
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                           (fVar6 / fVar13,(MethodInfo *)0x0);
        pTVar4 = (this->fields)._this;
        (this->fields)._totalProgress___1 = fVar6;
        if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                           ((pTVar4->fields).crystalTimer / (pTVar4->fields).progressLerpDuration,
                            (MethodInfo *)0x0);
        pTVar4 = (this->fields)._this;
        (this->fields)._crystalProgress___1 = fVar6;
        if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                           ((pTVar4->fields).fromProgress,(pTVar4->fields).toProgress,
                            (this->fields)._totalProgress___1,(MethodInfo *)0x0);
        fVar19 = (float10)func_?((double)fVar6);
        pTVar4 = (this->fields)._this;
        (this->fields)._tierProgress___1 = (float)fVar19;
        if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
        iVar2 = TierOnDeathProgress::
                 TierOnDeathProgress_ReduceGamePointsWithPreviousTierRequirements
                           (pTVar4,(uint)(byte)((char)*piVar17 + 1),(int)fVar19,
                            (this->fields)._gameTierShopStatus___0,(MethodInfo *)0x0);
        pTVar4 = (this->fields)._this;
        (this->fields)._tierProgress___1 = (float)iVar2;
        if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
        pPVar15 = (pTVar4->fields).tierProgressBar;
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                           ((float)iVar2 / (float)(pTVar4->fields).gamePointsRequired,
                            (MethodInfo *)0x0);
        if (pPVar15 == (ProgressBar *)0x0) goto code_?;
        ProgressBar::ProgressBar_set_Progress(pPVar15,fVar6,(MethodInfo *)0x0);
        pTVar4 = (this->fields)._this;
        if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                           ((float)(pTVar4->fields).crystalValue,0.0,
                            (this->fields)._crystalProgress___1,(MethodInfo *)0x0);
        fVar19 = (float10)func_?((double)fVar6);
        (pTVar4->fields).currentCrystalValue = (float)fVar19;
        pTVar4 = (this->fields)._this;
        if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
        pTVar18 = (pTVar4->fields).crystalsGainedSinceDeath;
        uVar7 = func_?(&(pTVar4->fields).currentCrystalValue,0);
        if (pTVar18 == (Text *)0x0) goto code_?;
        func_?(0x49,pTVar18,uVar7);
        pTVar4 = (this->fields)._this;
        if (((pTVar4 == (TierOnDeathProgress *)0x0) ||
            (pRVar16 = (pTVar4->fields).lockImage, pRVar16 == (RectTransform *)0x0)) ||
           (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)pRVar16,(MethodInfo *)0x0),
           pGVar11 == (GameObject *)0x0)) goto code_?;
        bVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_get_activeInHierarchy(pGVar11,(MethodInfo *)0x0);
        if (bVar12 != 0) {
          pTVar4 = (this->fields)._this;
          if ((pTVar4 == (TierOnDeathProgress *)0x0) ||
             (this_01 = (pTVar4->fields).lockShakeCurve, this_01 == (AnimationCurve *)0x0))
          goto code_?;
          fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (this_01,(this->fields)._totalProgress___1,(MethodInfo *)0x0);
          pTVar4 = (this->fields)._this;
          if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
          uVar20._0_4_ = (pTVar4->fields).lockStartRot.x;
          uVar20._4_4_ = (pTVar4->fields).lockStartRot.y;
          this_02 = (Transform *)(pTVar4->fields).lockImage;
          fVar6 = (pTVar4->fields).intensity * fVar6 * _UNK_?;
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Quaternion);
          }
          euler.z = fVar6;
          euler.x = (float)(int)uVar20;
          euler.y = (float)(int)((ulonglong)uVar20 >> 0x20);
          pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                              ((Quaternion *)&stack0xffffffdc,euler,(MethodInfo *)0x0);
          if (this_02 == (Transform *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (this_02,*pQVar21,(MethodInfo *)0x0);
        }
        pTVar4 = (this->fields)._this;
        if ((pTVar4 == (TierOnDeathProgress *)0x0) ||
           (pGVar11 = (pTVar4->fields).progressBarDivider, pGVar11 == (GameObject *)0x0))
        goto code_?;
        bVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar11,(MethodInfo *)0x0);
        if (bVar12 != 0) {
          pTVar4 = (this->fields)._this;
          if ((pTVar4 == (TierOnDeathProgress *)0x0) ||
             (this_03 = (ProgressBarAndroid *)(pTVar4->fields).tierProgressBar,
             this_03 == (ProgressBarAndroid *)0x0)) goto code_?;
          fVar6 = ProgressBarAndroid::ProgressBarAndroid_get_Progress(this_03,(MethodInfo *)0x0);
          if (fVar6 <= 0.0) {
            pTVar4 = (this->fields)._this;
            if ((pTVar4 == (TierOnDeathProgress *)0x0) ||
               (pGVar11 = (pTVar4->fields).progressBarDivider, pGVar11 == (GameObject *)0x0))
            goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar11,0,(MethodInfo *)0x0);
          }
        }
        pTVar4 = (this->fields)._this;
        if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
        (pTVar4->fields).unlockingTier =
             (float)(pTVar4->fields).gamePointsRequired <= (this->fields)._tierProgress___1;
        fVar6 = (this->fields)._tierProgress___1;
        pTVar4 = (this->fields)._this;
        if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
        iVar14 = (pTVar4->fields).gamePointsRequired;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Mathf);
        }
        piVar17 = &(this->fields)._displayedProgress___1;
        UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min
                  (fVar6,(float)iVar14,(MethodInfo *)0x0);
        iVar2 = func_?();
        pTVar4 = (this->fields)._this;
        *piVar17 = iVar2;
        if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
        pTVar18 = (pTVar4->fields).progressText;
        pOVar8 = (Object *)func_?(piVar17,0);
        if ((this->fields)._this == (TierOnDeathProgress *)0x0) goto code_?;
        arg2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar9 = mscorlib.dll::System::String::String_Concat_1
                            (pOVar8,(Object *)StringLiteral____,arg2,(MethodInfo *)0x0);
        if (pTVar18 == (Text *)0x0) goto code_?;
        func_?(0x49,pTVar18,pSVar9);
        pTVar4 = (this->fields)._this;
        if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
        if ((pTVar4->fields).unlockingTier != 0) {
          if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
          (pTVar4->fields).fromProgress = (this->fields)._tierProgress___1;
          pTVar4 = (this->fields)._this;
          if (((pTVar4 == (TierOnDeathProgress *)0x0) ||
              (pRVar16 = (pTVar4->fields).lockImage, pRVar16 == (RectTransform *)0x0)) ||
             (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject((Component_1 *)pRVar16,(MethodInfo *)0x0),
             pGVar11 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar11,0,(MethodInfo *)0x0);
          pTVar4 = (this->fields)._this;
          if (((pTVar4 == (TierOnDeathProgress *)0x0) ||
              (pCVar10 = (pTVar4->fields).unlockImage, pCVar10 == (CanvasGroup *)0x0)) ||
             (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject((Component_1 *)pCVar10,(MethodInfo *)0x0),
             pGVar11 == (GameObject *)0x0)) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar11,1,(MethodInfo *)0x0);
          (this->fields)._lockLerpTimer___2 = 0.0;
          goto code_?;
        }
        goto code_?;
      }
      if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
      pTVar18 = (pTVar4->fields).nextTierText;
      uVar7 = func_?(piVar17,0);
      if (pTVar18 == (Text *)0x0) goto code_?;
      func_?(0x49,pTVar18,uVar7);
      pTVar4 = (this->fields)._this;
      if ((pTVar4 == (TierOnDeathProgress *)0x0) ||
         (pPVar15 = (pTVar4->fields).tierProgressBar, pPVar15 == (ProgressBar *)0x0))
      goto code_?;
      ProgressBar::ProgressBar_set_Progress(pPVar15,1.0,(MethodInfo *)0x0);
    }
    break;
  default:
    return 0;
  }
  pTVar4 = (this->fields)._this;
  if (pTVar4 != (TierOnDeathProgress *)0x0) {
    (pTVar4->fields)._IsShowingTierProgress_k__BackingField = 0;
    (this->fields)._current = (Object *)0x0;
    if ((this->fields)._disposing == 0) {
      (this->fields)._PC = 3;
    }
    return 1;
  }
code_?:
  func_?(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void Reset() */

void Assembly-CSharp.dll::TierOnDeathProgress+<DoTierProgress>c__Iterator0::
     TierOnDeathProgress_DoTierProgress_c_Iterator0_Reset
               (TierOnDeathProgress_DoTierProgress_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Object System.Collections.IEnumerator.get_Current() */

Object * Assembly-CSharp.dll::TierOnDeathProgress+<DoTierProgress>c__Iterator0::
         TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                   (TierOnDeathProgress_DoTierProgress_c_Iterator0 *this,MethodInfo *method)

{
  return (this->fields)._current;
}

