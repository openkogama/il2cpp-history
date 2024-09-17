
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TierOnDeathProgress+<DoTierProgress>d__32::
     TierOnDeathProgress_DoTierProgress_d_32_MoveNext
               (TierOnDeathProgress_DoTierProgress_d_32 *this,MethodInfo *method)

{
  pTVar1 = this;
  if (cRam_? == '\0') {
    func_?(0xe468);
    func_?(0xe8);
    func_?(0x3de8);
    func_?(0x6864);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral____);
    cRam_? = '\x01';
  }
  IStack_2.m_value = 0;
  pTVar3 = (this->fields).__4__this;
  cVar4 = (char)this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    unaff_ESI = (Text *)TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (cRam_? == '\0') {
      func_?(0x3de8);
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
    func_?(cVar4 + '\x14',(short)pDVar6);
    if (cRam_? == '\0') {
      func_?(0x3ed8);
      cRam_? = '\x01';
    }
    pTVar7 = (TierOnDeathProgress_DoTierProgress_d_32 *)
             TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown;
    if (cRam_? == '\0') {
      func_?(0x3de8);
      cRam_? = '\x01';
    }
    pPVar5 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar5 == (PlayerPlanetData *)0x0) goto code_?;
    iVar8 = (pPVar5->fields).progressionGamePoints;
    iVar9 = func_?(SUB41((pTVar3->fields).tierToInterpolateFrom,0),0);
    iVar10 = func_?(SUB41((pTVar3->fields).tierToInterpolateTo,0),0);
    (this->fields)._current_5__4 = iVar9;
    (this->fields)._to_5__3 = iVar10;
    (this->fields)._stopped_5__5 = 0;
    (pTVar3->fields).fromProgress = (float)(int)pTVar7;
    (pTVar3->fields).toProgress = (float)iVar8;
    GamePointGainEffectManager::
    GamePointGainEffectManager_HaveShownTierProgressBarGamePointGainEffect(iVar8,(MethodInfo *)0x0)
    ;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePointGainEffectManager);
      cRam_? = '\x01';
    }
    TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown = iVar8;
    if (TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown !=
        (Action_1_Int32_ *)0x0) {
      pAVar11 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
      (*(pAVar11->fields)._._.invoke_impl)
                ((pAVar11->fields)._._.method_code,iVar8,(pAVar11->fields)._._.method);
    }
    pSVar12 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar3->fields).fromProgress,(MethodInfo *)0x0);
    str3 = mscorlib.dll::System::Single::Single_ToString
                     ((Single *)&(pTVar3->fields).toProgress,(MethodInfo *)0x0);
    unaff_ESI = (Text *)mscorlib.dll::System::String::String_Concat_5
                                  (StringLiteral_From_To_,pSVar12,::StringLiteral__,str3,
                                   (MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?((short)TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)unaff_ESI,(MethodInfo *)0x0);
    this = pTVar7;
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
    unaff_ESI = (pTVar3->fields).nextTierText;
    if (iVar13 == 3) {
      pSVar12 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&(pTVar1->fields)._current_5__4,(MethodInfo *)0x0);
      if (unaff_ESI == (Text *)0x0) goto code_?;
      func_?(0x4b,(char)unaff_ESI,(short)pSVar12);
      pPVar14 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
      if (pPVar14 == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar14,1.0,(MethodInfo *)0x0);
      goto code_?;
    }
    IStack_2.m_value = iVar13 + 1;
    pSVar12 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
    if (unaff_ESI == (Text *)0x0) goto code_?;
    func_?(0x4b,(char)unaff_ESI,(short)pSVar12);
    pDVar6 = (pTVar1->fields)._gameTierShopStatus_5__2;
    if (pDVar6 ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
    goto code_?;
    this = (TierOnDeathProgress_DoTierProgress_d_32 *)
           CONCAT31(this._1_3_,(char)(pTVar1->fields)._current_5__4 + '\x01');
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
    uVar18 = 0x92c7;
    uVar19 = 0x1044;
    fVar20 = (float10)func_?(SUB82((double)(((pTVar3->fields).toProgress - fVar17) * fVar16
                                                    + fVar17),0));
    iVar8 = (pTVar1->fields)._current_5__4;
    unaff_ESI = (Text *)(int)fVar20;
    pTVar21 = unaff_ESI;
    if (cRam_? == '\0') {
      func_?(0x82e8);
      cRam_? = '\x01';
    }
    key = (byte)((char)iVar8 + 1) - 1;
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
        unaff_ESI = (Text *)((int)unaff_ESI - (int)pOVar15[3].klass);
        if ((int)unaff_ESI < 1) {
          unaff_ESI = (Text *)0x0;
        }
        key = key - 1;
        pTVar21 = unaff_ESI;
      } while (0 < (int)key);
    }
    if ((pTVar3->fields).tierProgressBar == (ProgressBar *)0x0) goto code_?;
    fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((float)(int)unaff_ESI / (float)(pTVar3->fields).gamePointsRequired,
                        (MethodInfo *)0x0);
    ProgressBarAndroid::ProgressBarAndroid_set_Progress
              ((ProgressBarAndroid *)(pTVar3->fields).tierProgressBar,fVar17,
               (MethodInfo *)CONCAT22(uVar19,uVar18));
    fVar20 = (float10)func_?();
    pTVar22 = (pTVar3->fields).crystalsGainedSinceDeath;
    (pTVar3->fields).currentCrystalValue = (float)fVar20;
    pSVar12 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar3->fields).currentCrystalValue,(MethodInfo *)0x0);
    if (pTVar22 == (Text *)0x0) goto code_?;
    func_?(0x4b,(char)pTVar22,(short)pSVar12);
    pRVar23 = (pTVar3->fields).lockImage;
    if ((pRVar23 == (RectTransform *)0x0) ||
       (pGVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar23,(MethodInfo *)0x0), pGVar24 == (GameObject *)0x0))
    goto code_?;
    bVar25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                       (pGVar24,(MethodInfo *)0x0);
    if (bVar25 != 0) {
      this_00 = (pTVar3->fields).lockShakeCurve;
      if (this_00 == (AnimationCurve *)0x0) goto code_?;
      fVar17 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (this_00,(pTVar1->fields)._totalProgress_5__6,(MethodInfo *)0x0);
      uVar26 = (pTVar3->fields).lockStartRot.x;
      uVar27 = (pTVar3->fields).lockStartRot.y;
      this_01 = (Transform *)(pTVar3->fields).lockImage;
      euler.y = (float)uVar27 * _UNK_?;
      euler.x = (float)uVar26 * _UNK_?;
      euler.z = fVar17 * (pTVar3->fields).intensity * _UNK_? * _UNK_?;
      pQVar28 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffffd8,euler,(MethodInfo *)0x0);
      if (this_01 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (this_01,*pQVar28,(MethodInfo *)0x0);
    }
    pGVar24 = (pTVar3->fields).progressBarDivider;
    if (pGVar24 == (GameObject *)0x0) goto code_?;
    bVar25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar24,(MethodInfo *)0x0);
    if (bVar25 != 0) {
      pPVar29 = (pTVar3->fields).tierProgressBar;
      if (pPVar29 == (ProgressBar *)0x0) goto code_?;
      if ((pPVar29->fields).progress <= 0.0) {
        pGVar24 = (pTVar3->fields).progressBarDivider;
        if (pGVar24 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar24,0,(MethodInfo *)0x0);
      }
    }
    (pTVar3->fields).unlockingTier =
         (float)(pTVar3->fields).gamePointsRequired <= (float)(int)unaff_ESI;
    pTVar22 = (pTVar3->fields).progressText;
    unaff_ESI = (Text *)mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar12 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&(pTVar3->fields).gamePointsRequired,(MethodInfo *)0x0);
    pSVar12 = mscorlib.dll::System::String::String_Concat_4
                        ((String *)unaff_ESI,::StringLiteral____,pSVar12,(MethodInfo *)0x0);
    if (pTVar22 == (Text *)0x0) goto code_?;
    func_?(0x4b,(char)pTVar22,(short)pSVar12);
    if ((pTVar3->fields).unlockingTier != 0) {
      pRVar23 = (pTVar3->fields).lockImage;
      (pTVar3->fields).fromProgress = (float)(int)pTVar21;
      if ((pRVar23 == (RectTransform *)0x0) ||
         (pGVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pRVar23,(MethodInfo *)0x0), pGVar24 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar24,0,(MethodInfo *)0x0);
      pCVar30 = (pTVar3->fields).unlockImage;
      if ((pCVar30 == (CanvasGroup *)0x0) ||
         (pGVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar30,(MethodInfo *)0x0), pGVar24 == (GameObject *)0x0
         )) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar24,1,(MethodInfo *)0x0);
      (pTVar1->fields)._lockLerpTimer_5__7 = 0.0;
code_?:
      pCVar30 = (pTVar3->fields).unlockImage;
      if ((pCVar30 == (CanvasGroup *)0x0) ||
         (pGVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar30,(MethodInfo *)0x0), pGVar24 == (GameObject *)0x0
         )) goto code_?;
      bVar25 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                         (pGVar24,(MethodInfo *)0x0);
      if (bVar25 != 0) {
        fVar17 = (pTVar1->fields)._lockLerpTimer_5__7 / (pTVar3->fields).lockFadeLerpDuration;
        pCVar30 = (pTVar3->fields).unlockImage;
        if (fVar17 < 0.0) {
          fVar17 = 0.0;
        }
        else if (_UNK_? < fVar17) {
          fVar17 = _UNK_?;
        }
        if (pCVar30 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar30,fVar17 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
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
      iVar13 = IStack_2.m_value + 1;
      (pTVar1->fields)._current_5__4 = iVar13;
      if (iVar13 == (pTVar1->fields)._to_5__3) {
        (pTVar1->fields)._stopped_5__5 = 1;
      }
      else if (iVar13 != 3) {
        pPVar14 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
        if (pPVar14 == (ProgressBarAndroid *)0x0) goto code_?;
        ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar14,0.0,(MethodInfo *)0x0);
        pRVar23 = (pTVar3->fields).lockImage;
        (pTVar3->fields).timer = 0.0;
        if ((pRVar23 == (RectTransform *)0x0) ||
           (pGVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pRVar23,(MethodInfo *)0x0),
           pGVar24 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar24,1,(MethodInfo *)0x0);
        pCVar30 = (pTVar3->fields).unlockImage;
        if ((pCVar30 == (CanvasGroup *)0x0) ||
           (pGVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pCVar30,(MethodInfo *)0x0),
           pGVar24 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar24,0,(MethodInfo *)0x0);
      }
    }
    if ((pTVar1->fields)._totalProgress_5__6 < _UNK_?) {
      (pTVar1->fields).__2__current = (Object *)0x0;
      func_?(cVar4 + '\f',0);
      (pTVar1->fields).__1__state = 2;
      return 1;
    }
  }
  if (pTVar3 == (TierOnDeathProgress *)0x0) {
code_?:
    bVar31 = 0;
    func_?();
    ppMVar32 = &(unaff_ESI->fields)._.m_MaskMaterial;
    *(char *)ppMVar32 =
         *(char *)ppMVar32 + extraout_DL +
         (CARRY1(in_stack_33,extraout_CH) || CARRY1(in_stack_33 + extraout_CH,bVar31));
    uVar18 = func_?();
    this_02 = (NotSupportedException *)func_?(uVar18);
    mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
              (this_02,(MethodInfo *)0x0);
    uVar18 = func_?(0x8d04);
    func_?((short)this_02,uVar18);
    pcVar34 = (code *)swi(3);
    bVar25 = (*pcVar34)();
    return bVar25;
  }
code_?:
  (pTVar3->fields)._IsShowingTierProgress_k__BackingField = 0;
  (pTVar1->fields).__2__current = (Object *)0x0;
  func_?((short)&(pTVar1->fields).__2__current,0);
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

