
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TierOnDeathProgress+<DoTierProgress>d__32::
     TierOnDeathProgress_DoTierProgress_d_32_MoveNext
               (TierOnDeathProgress_DoTierProgress_d_32 *this,MethodInfo *method)

{
  pTVar1 = this;
  puVar2 = (undefined4 *)&stack0xfffffffc;
  if (cRam_? == '\0') {
    func_?();
    func_?(0x70);
    func_?(&TypeInfo__GamePassesManager);
    func_?(&StringLiteral_From_To_);
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral____);
    cRam_? = '\x01';
  }
  IStack_3.m_value = 0;
  pTVar4 = (this->fields).__4__this;
  bVar5 = (byte)this;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    unaff_ESI = (Text *)TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (((pPVar6 == (PlayerPlanetData *)0x0) || (pTVar4 == (TierOnDeathProgress *)0x0)) ||
       (unaff_ESI == (Text *)0x0)) goto code_?;
    pDVar7 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
              PlayerTierStateCalculator_GetTierPricingState
                        ((PlayerTierStateCalculator *)unaff_ESI,
                         (pPVar6->fields).progressionGamePoints,
                         (int)(pTVar4->fields).tierToInterpolateFrom,(MethodInfo *)0x0);
    (this->fields)._gameTierShopStatus_5__2 = pDVar7;
    func_?(bVar5 + 0x14);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pTVar8 = (TierOnDeathProgress_DoTierProgress_d_32 *)
             TypeInfo__GamePointGainEffectManager->static_fields->progressBarGamePointAmountShown;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar6 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar6 == (PlayerPlanetData *)0x0) goto code_?;
    iVar9 = (pPVar6->fields).progressionGamePoints;
    iVar10 = func_?(SUB41((pTVar4->fields).tierToInterpolateFrom,0));
    iVar11 = func_?(SUB41((pTVar4->fields).tierToInterpolateTo,0));
    (this->fields)._current_5__4 = iVar10;
    (this->fields)._to_5__3 = iVar11;
    (this->fields)._stopped_5__5 = 0;
    (pTVar4->fields).fromProgress = (float)(int)pTVar8;
    (pTVar4->fields).toProgress = (float)iVar9;
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
                        ((Single *)&(pTVar4->fields).fromProgress,(MethodInfo *)0x0);
    str3 = mscorlib.dll::System::Single::Single_ToString
                     ((Single *)&(pTVar4->fields).toProgress,(MethodInfo *)0x0);
    unaff_ESI = (Text *)mscorlib.dll::System::String::String_Concat_5
                                  (StringLiteral_From_To_,pSVar13,::StringLiteral__,str3,
                                   (MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)unaff_ESI,(MethodInfo *)0x0);
    this = pTVar8;
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
  iVar14 = (pTVar1->fields)._current_5__4;
  if ((iVar14 <= (pTVar1->fields)._to_5__3) && ((pTVar1->fields)._stopped_5__5 == 0)) {
    if (pTVar4 == (TierOnDeathProgress *)0x0) goto code_?;
    unaff_ESI = (pTVar4->fields).nextTierText;
    if (iVar14 == 3) {
      mscorlib.dll::System::Int32::Int32_ToString
                ((Int32 *)&(pTVar1->fields)._current_5__4,(MethodInfo *)0x0);
      if (unaff_ESI == (Text *)0x0) goto code_?;
      func_?();
      pPVar15 = (ProgressBarAndroid *)(pTVar4->fields).tierProgressBar;
      if (pPVar15 == (ProgressBarAndroid *)0x0) goto code_?;
      ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar15,1.0,(MethodInfo *)0x0);
      goto code_?;
    }
    IStack_3.m_value = iVar14 + 1;
    mscorlib.dll::System::Int32::Int32_ToString(&IStack_3,(MethodInfo *)0x0);
    if (unaff_ESI == (Text *)0x0) goto code_?;
    func_?();
    pDVar7 = (pTVar1->fields)._gameTierShopStatus_5__2;
    if (pDVar7 ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
    goto code_?;
    this = (TierOnDeathProgress_DoTierProgress_d_32 *)
           CONCAT31(this._1_3_,(char)(pTVar1->fields)._current_5__4 + '\x01');
    pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7,(ByteEnum__Enum)this
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                        );
    if (pOVar16 == (Object *)0x0) goto code_?;
    (pTVar4->fields).gamePointsRequired = (int32_t)pOVar16[3].klass;
    fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((pTVar4->fields).timer / (pTVar4->fields).progressLerpDuration,
                        (MethodInfo *)0x0);
    (pTVar1->fields)._totalProgress_5__6 = fVar17;
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
              ((pTVar4->fields).crystalTimer / (pTVar4->fields).progressLerpDuration,
               (MethodInfo *)0x0);
    pDVar7 = (pTVar1->fields)._gameTierShopStatus_5__2;
    method_00 = (MethodInfo *)&UNK_?;
    fVar18 = (float10)func_?();
    iVar9 = (pTVar1->fields)._current_5__4;
    unaff_ESI = (Text *)(int)fVar18;
    pTVar19 = unaff_ESI;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    key = (byte)((char)iVar9 + 1) - 1;
    if (0 < (int)key) {
      if (pDVar7 ==
          (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
      goto code_?;
      do {
        pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar7,key,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                            );
        if (pOVar16 == (Object *)0x0) goto code_?;
        unaff_ESI = (Text *)((int)unaff_ESI - (int)pOVar16[3].klass);
        if ((int)unaff_ESI < 1) {
          unaff_ESI = (Text *)0x0;
        }
        key = key - 1;
        pTVar19 = unaff_ESI;
      } while (0 < (int)key);
    }
    if ((pTVar4->fields).tierProgressBar == (ProgressBar *)0x0) goto code_?;
    fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                       ((float)(int)unaff_ESI / (float)(pTVar4->fields).gamePointsRequired,
                        (MethodInfo *)0x0);
    ProgressBarAndroid::ProgressBarAndroid_set_Progress
              ((ProgressBarAndroid *)(pTVar4->fields).tierProgressBar,fVar17,method_00);
    fVar18 = (float10)func_?();
    pTVar20 = (pTVar4->fields).crystalsGainedSinceDeath;
    (pTVar4->fields).currentCrystalValue = (float)fVar18;
    mscorlib.dll::System::Single::Single_ToString
              ((Single *)&(pTVar4->fields).currentCrystalValue,(MethodInfo *)0x0);
    if (pTVar20 == (Text *)0x0) goto code_?;
    func_?(0x4b,(char)pTVar20);
    pRVar21 = (pTVar4->fields).lockImage;
    if ((pRVar21 == (RectTransform *)0x0) ||
       (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar21,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0))
    goto code_?;
    bVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                       (pGVar22,(MethodInfo *)0x0);
    if (bVar23 != 0) {
      this_00 = (pTVar4->fields).lockShakeCurve;
      if (this_00 == (AnimationCurve *)0x0) goto code_?;
      fVar17 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (this_00,(pTVar1->fields)._totalProgress_5__6,(MethodInfo *)0x0);
      uVar24 = (pTVar4->fields).lockStartRot.x;
      uVar25 = (pTVar4->fields).lockStartRot.y;
      this_01 = (Transform *)(pTVar4->fields).lockImage;
      euler.y = (float)uVar25 * _UNK_?;
      euler.x = (float)uVar24 * _UNK_?;
      euler.z = fVar17 * (pTVar4->fields).intensity * _UNK_? * _UNK_?;
      pQVar26 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffffd8,euler,(MethodInfo *)0x0);
      if (this_01 == (Transform *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (this_01,*pQVar26,(MethodInfo *)0x0);
    }
    pGVar22 = (pTVar4->fields).progressBarDivider;
    if (pGVar22 == (GameObject *)0x0) goto code_?;
    bVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar22,(MethodInfo *)0x0);
    if (bVar23 != 0) {
      pPVar27 = (pTVar4->fields).tierProgressBar;
      if (pPVar27 == (ProgressBar *)0x0) goto code_?;
      if ((pPVar27->fields).progress <= 0.0) {
        pGVar22 = (pTVar4->fields).progressBarDivider;
        if (pGVar22 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar22,0,(MethodInfo *)0x0);
      }
    }
    (pTVar4->fields).unlockingTier =
         (float)(pTVar4->fields).gamePointsRequired <= (float)(int)unaff_ESI;
    pTVar20 = (pTVar4->fields).progressText;
    unaff_ESI = (Text *)mscorlib.dll::System::Int32::Int32_ToString
                                  ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar13 = mscorlib.dll::System::Int32::Int32_ToString
                        ((Int32 *)&(pTVar4->fields).gamePointsRequired,(MethodInfo *)0x0);
    mscorlib.dll::System::String::String_Concat_4
              ((String *)unaff_ESI,::StringLiteral____,pSVar13,(MethodInfo *)0x0);
    if (pTVar20 == (Text *)0x0) goto code_?;
    func_?(0x4b,(char)pTVar20);
    if ((pTVar4->fields).unlockingTier != 0) {
      pRVar21 = (pTVar4->fields).lockImage;
      (pTVar4->fields).fromProgress = (float)(int)pTVar19;
      if ((pRVar21 == (RectTransform *)0x0) ||
         (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pRVar21,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0
         )) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar22,0,(MethodInfo *)0x0);
      pCVar28 = (pTVar4->fields).unlockImage;
      if ((pCVar28 == (CanvasGroup *)0x0) ||
         (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar28,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0
         )) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar22,1,(MethodInfo *)0x0);
      (pTVar1->fields)._lockLerpTimer_5__7 = 0.0;
code_?:
      pCVar28 = (pTVar4->fields).unlockImage;
      if ((pCVar28 == (CanvasGroup *)0x0) ||
         (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar28,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0
         )) goto code_?;
      bVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                         (pGVar22,(MethodInfo *)0x0);
      if (bVar23 != 0) {
        fVar17 = (pTVar1->fields)._lockLerpTimer_5__7 / (pTVar4->fields).lockFadeLerpDuration;
        pCVar28 = (pTVar4->fields).unlockImage;
        if (fVar17 < 0.0) {
          fVar17 = 0.0;
        }
        else if (_UNK_? < fVar17) {
          fVar17 = _UNK_?;
        }
        if (pCVar28 == (CanvasGroup *)0x0) goto code_?;
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar28,fVar17 * _UNK_? + _UNK_?,(MethodInfo *)0x0);
        fVar17 = (pTVar1->fields)._lockLerpTimer_5__7;
        fVar29 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar29 = fVar29 + fVar17;
        (pTVar1->fields)._lockLerpTimer_5__7 = fVar29;
        if (fVar29 < (pTVar4->fields).lockFadeLerpDuration) {
          (pTVar1->fields).__2__current = (Object *)0x0;
          func_?();
          (pTVar1->fields).__1__state = 1;
          return 1;
        }
      }
      IStack_3.m_value = (pTVar1->fields)._current_5__4;
      iVar14 = IStack_3.m_value + 1;
      (pTVar1->fields)._current_5__4 = iVar14;
      if (iVar14 == (pTVar1->fields)._to_5__3) {
        (pTVar1->fields)._stopped_5__5 = 1;
      }
      else if (iVar14 != 3) {
        pPVar15 = (ProgressBarAndroid *)(pTVar4->fields).tierProgressBar;
        if (pPVar15 == (ProgressBarAndroid *)0x0) goto code_?;
        ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar15,0.0,(MethodInfo *)0x0);
        pRVar21 = (pTVar4->fields).lockImage;
        (pTVar4->fields).timer = 0.0;
        if ((pRVar21 == (RectTransform *)0x0) ||
           (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pRVar21,(MethodInfo *)0x0),
           pGVar22 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar22,1,(MethodInfo *)0x0);
        pCVar28 = (pTVar4->fields).unlockImage;
        if ((pCVar28 == (CanvasGroup *)0x0) ||
           (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pCVar28,(MethodInfo *)0x0),
           pGVar22 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar22,0,(MethodInfo *)0x0);
      }
    }
    if ((pTVar1->fields)._totalProgress_5__6 < _UNK_?) {
      (pTVar1->fields).__2__current = (Object *)0x0;
      func_?(bVar5 + 0xc);
      (pTVar1->fields).__1__state = 2;
      return 1;
    }
  }
  if (pTVar4 == (TierOnDeathProgress *)0x0) {
code_?:
    uVar30 = func_?();
    pTVar31 = (TierOnDeathProgress__Class *)uVar30;
    *(char *)(extraout_ECX + -0x6aefbb62) =
         *(char *)(extraout_ECX + -0x6aefbb62) + (char)uVar30 + (pTVar31 < pTVar4->klass);
    bVar32 = (uVar30 & 0x100) != 0;
    bVar33 = *(byte *)&(pTVar31->_0).image;
    bVar34 = *(char *)&(pTVar31->_0).image + bVar5;
    *(byte *)&(pTVar31->_0).image = bVar34 + bVar32;
    pTVar4->monitor = (MonitorData *)unaff_ESI->klass;
    ppRVar35 = &(unaff_ESI->fields)._.m_ParentMask;
    *(char *)ppRVar35 =
         *(char *)ppRVar35 + (char)(uVar30 >> 0x20) + (CARRY1(bVar33,bVar5) || CARRY1(bVar34,bVar32))
    ;
    uVar36 = in((short)(uVar30 >> 0x20));
    *(undefined1 *)&(pTVar4->fields)._._._._.m_CachedPtr = uVar36;
    puVar37 = (undefined4 *)&stack0xffffffc7;
    cVar38 = '\a';
    do {
      puVar2 = puVar2 + -1;
      puVar37 = puVar37 + -1;
      *puVar37 = *puVar2;
      cVar38 = cVar38 + -1;
    } while ('\0' < cVar38);
    this_02 = (NotSupportedException *)func_?();
    mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
              (this_02,(MethodInfo *)0x0);
    uVar39 = func_?(&
                             MethodInfo__TierOnDeathProgress___DoTierProgress_d__32__System_Collections_IEnumerator_Reset__
                            );
    func_?(this_02,uVar39);
    pcVar40 = (code *)swi(3);
    bVar23 = (*pcVar40)();
    return bVar23;
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

