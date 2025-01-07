
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
    unaff_ESI = (Text *)TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (((pPVar4 == (PlayerPlanetData *)0x0) || (pTVar3 == (TierOnDeathProgress *)0x0)) ||
       (unaff_ESI == (Text *)0x0)) goto code_?;
    pDVar5 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
              PlayerTierStateCalculator_GetTierPricingState
                        ((PlayerTierStateCalculator *)unaff_ESI,
                         (pPVar4->fields).progressionGamePoints,
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
    str3 = mscorlib.dll::System::Single::Single_ToString
                     ((Single *)&(pTVar3->fields).toProgress,(MethodInfo *)0x0);
    unaff_ESI = (Text *)mscorlib.dll::System::String::String_Concat_5
                                  (StringLiteral_From_To_,pSVar11,::StringLiteral__,str3,
                                   (MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)unaff_ESI,(MethodInfo *)0x0);
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
  iVar12 = (pTVar1->fields)._current_5__4;
  if ((iVar12 <= (pTVar1->fields)._to_5__3) && ((pTVar1->fields)._stopped_5__5 == 0)) {
    if (pTVar3 == (TierOnDeathProgress *)0x0) goto code_?;
    unaff_ESI = (pTVar3->fields).nextTierText;
    if (iVar12 == 3) {
      pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&(pTVar1->fields)._current_5__4,(MethodInfo *)0x0);
      if (unaff_ESI == (Text *)0x0) goto code_?;
      func_?(0x4b,unaff_ESI,pSVar11);
      pPVar13 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
      if (pPVar13 == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar13,1.0,(MethodInfo *)0x0);
      goto code_?;
    }
    IStack_2.m_value = iVar12 + 1;
    pSVar11 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_2,(MethodInfo *)0x0);
    if (unaff_ESI == (Text *)0x0) goto code_?;
    func_?(0x4b,unaff_ESI,pSVar11);
    pDVar5 = (pTVar1->fields)._gameTierShopStatus_5__2;
    if (pDVar5 ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
    goto code_?;
    this = (TierOnDeathProgress_DoTierProgress_d_32 *)
           CONCAT31(this._1_3_,(char)(pTVar1->fields)._current_5__4 + '\x01');
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
    iVar7 = (pTVar1->fields)._current_5__4;
    unaff_ESI = (Text *)(int)fVar17;
    pTVar18 = unaff_ESI;
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
        pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                            );
        if (pOVar14 == (Object *)0x0) goto code_?;
        unaff_ESI = (Text *)((int)unaff_ESI - (int)pOVar14[3].klass);
        if ((int)unaff_ESI < 1) {
          unaff_ESI = (Text *)0x0;
        }
        key = key - 1;
        pTVar18 = unaff_ESI;
      } while (0 < (int)key);
    }
    if ((pTVar3->fields).tierProgressBar == (ProgressBar *)0x0) goto code_?;
    fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((float)(int)unaff_ESI / (float)(pTVar3->fields).gamePointsRequired,
                        (MethodInfo *)0x0);
    ProgressBarAndroid::ProgressBarAndroid_set_Progress
              ((ProgressBarAndroid *)(pTVar3->fields).tierProgressBar,fVar16,method_00);
    fVar17 = (float10)func_?();
    pTVar19 = (pTVar3->fields).crystalsGainedSinceDeath;
    (pTVar3->fields).currentCrystalValue = (float)fVar17;
    pSVar11 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(pTVar3->fields).currentCrystalValue,(MethodInfo *)0x0);
    if (pTVar19 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar19,pSVar11);
    pRVar20 = (pTVar3->fields).lockImage;
    if ((pRVar20 == (RectTransform *)0x0) ||
       (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar20,(MethodInfo *)0x0), pGVar21 == (GameObject *)0x0))
    goto code_?;
    bVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                       (pGVar21,(MethodInfo *)0x0);
    if (bVar22 != 0) {
      this_00 = (pTVar3->fields).lockShakeCurve;
      if (this_00 == (AnimationCurve *)0x0) goto code_?;
      fVar16 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (this_00,(pTVar1->fields)._totalProgress_5__6,(MethodInfo *)0x0);
      uVar23 = (pTVar3->fields).lockStartRot.x;
      uVar24 = (pTVar3->fields).lockStartRot.y;
      this_01 = (Transform *)(pTVar3->fields).lockImage;
      euler.y = (float)uVar24 * _UNK_?;
      euler.x = (float)uVar23 * _UNK_?;
      euler.z = fVar16 * (pTVar3->fields).intensity * _UNK_? * _UNK_?;
      pQVar25 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffffd8,euler,(MethodInfo *)0x0);
      if (this_01 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (this_01,*pQVar25,(MethodInfo *)0x0);
    }
    pGVar21 = (pTVar3->fields).progressBarDivider;
    if (pGVar21 == (GameObject *)0x0) goto code_?;
    bVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar21,(MethodInfo *)0x0);
    if (bVar22 != 0) {
      pPVar26 = (pTVar3->fields).tierProgressBar;
      if (pPVar26 == (ProgressBar *)0x0) goto code_?;
      if ((pPVar26->fields).progress <= 0.0) {
        pGVar21 = (pTVar3->fields).progressBarDivider;
        if (pGVar21 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar21,0,(MethodInfo *)0x0);
      }
    }
    (pTVar3->fields).unlockingTier =
         (float)(pTVar3->fields).gamePointsRequired <= (float)(int)unaff_ESI;
    pTVar19 = (pTVar3->fields).progressText;
    unaff_ESI = (Text *)mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&(pTVar3->fields).gamePointsRequired,(MethodInfo *)0x0);
    pSVar11 = mscorlib.dll::System::String::String_Concat_4
                        ((String *)unaff_ESI,::StringLiteral____,pSVar11,(MethodInfo *)0x0);
    if (pTVar19 == (Text *)0x0) goto code_?;
    func_?(0x4b,pTVar19,pSVar11);
    if ((pTVar3->fields).unlockingTier != 0) {
      pRVar20 = (pTVar3->fields).lockImage;
      (pTVar3->fields).fromProgress = (float)(int)pTVar18;
      if ((pRVar20 == (RectTransform *)0x0) ||
         (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pRVar20,(MethodInfo *)0x0), pGVar21 == (GameObject *)0x0
         )) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar21,0,(MethodInfo *)0x0);
      pCVar27 = (pTVar3->fields).unlockImage;
      if ((pCVar27 == (CanvasGroup *)0x0) ||
         (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar27,(MethodInfo *)0x0), pGVar21 == (GameObject *)0x0
         )) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar21,1,(MethodInfo *)0x0);
      (pTVar1->fields)._lockLerpTimer_5__7 = 0.0;
code_?:
      pCVar27 = (pTVar3->fields).unlockImage;
      if ((pCVar27 == (CanvasGroup *)0x0) ||
         (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar27,(MethodInfo *)0x0), pGVar21 == (GameObject *)0x0
         )) goto code_?;
      bVar22 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                         (pGVar21,(MethodInfo *)0x0);
      if (bVar22 != 0) {
        fVar16 = (pTVar1->fields)._lockLerpTimer_5__7 / (pTVar3->fields).lockFadeLerpDuration;
        pCVar27 = (pTVar3->fields).unlockImage;
        if (fVar16 < 0.0) {
          fVar16 = 0.0;
        }
        else if (_UNK_? < fVar16) {
          fVar16 = _UNK_?;
        }
        if (pCVar27 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar27,fVar16 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
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
      iVar12 = IStack_2.m_value + 1;
      (pTVar1->fields)._current_5__4 = iVar12;
      if (iVar12 == (pTVar1->fields)._to_5__3) {
        (pTVar1->fields)._stopped_5__5 = 1;
      }
      else if (iVar12 != 3) {
        pPVar13 = (ProgressBarAndroid *)(pTVar3->fields).tierProgressBar;
        if (pPVar13 == (ProgressBarAndroid *)0x0) goto code_?;
        ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar13,0.0,(MethodInfo *)0x0);
        pRVar20 = (pTVar3->fields).lockImage;
        (pTVar3->fields).timer = 0.0;
        if ((pRVar20 == (RectTransform *)0x0) ||
           (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pRVar20,(MethodInfo *)0x0),
           pGVar21 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar21,1,(MethodInfo *)0x0);
        pCVar27 = (pTVar3->fields).unlockImage;
        if ((pCVar27 == (CanvasGroup *)0x0) ||
           (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pCVar27,(MethodInfo *)0x0),
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
  if (pTVar3 == (TierOnDeathProgress *)0x0) {
code_?:
    bVar28 = 0;
    uVar29 = func_?();
    out((short)((uint6)uVar29 >> 0x20),(TierOnDeathProgress__Class *)uVar29);
    pTVar3->klass = (TierOnDeathProgress__Class *)uVar29;
    bVar30 = (byte)((ushort)extraout_CX >> 8);
    bVar31 = (byte)((uint6)uVar29 >> 0x20);
    bVar32 = CARRY1(bVar30,bVar31) ||
             CARRY1(bVar30 + bVar31,
                    CARRY1((byte)extraout_CX,(byte)uVar29) ||
                    CARRY1((byte)extraout_CX + (byte)uVar29,bVar28));
    pMVar33 = unaff_ESI->monitor;
    pMVar34 = pMVar33 + -0x4c;
    MVar35 = *pMVar34;
    bVar30 = (char)*pMVar34 + (byte)pTVar1;
    *pMVar34 = (MonitorData)(bVar30 + bVar32);
    pbVar36 = &(unaff_ESI->fields)._.m_Maskable;
    *pbVar36 = *pbVar36 + bVar31 + (CARRY1((byte)MVar35,(byte)pTVar1) || CARRY1(bVar30,bVar32));
    this_02 = (NotSupportedException *)
              func_?(CONCAT22((short)((uint)pMVar33 >> 0x10),
                                       (ushort)(byte)(*(bool *)&(unaff_ESI->fields)._._._._._._._ -
                                                     (char)((uint)pMVar33 >> 8))));
    mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
              (this_02,(MethodInfo *)0x0);
    func_?(&
                    MethodInfo__TierOnDeathProgress___DoTierProgress_d__32__System_Collections_IEnumerator_Reset__
                   );
    func_?(this_02);
    pcVar37 = (code *)swi(3);
    bVar22 = (*pcVar37)();
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

