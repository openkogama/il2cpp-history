
/* Single CalculateTotalProgressValue(Int32) */

float Assembly-CSharp.dll::TierOnDeathProgress::TierOnDeathProgress_CalculateTotalProgressValue
                (TierOnDeathProgress *this,int32_t gamePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 != (PlayerPlanetData *)0x0) {
      this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
      bVar2 = (pPVar1->fields).gamePassTier;
      if (this_00 != (PlayerTierStateCalculator *)0x0) {
        if ((this_00->fields).gamePointVelocityIsZero == 0) {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                              (this_00,playerGamePoints,(uint)bVar2,(MethodInfo *)0x0);
        }
        else {
          this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                    PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                              (this_00,(uint)bVar2,(MethodInfo *)0x0);
        }
        fVar3 = _UNK_?;
        fVar4 = 0.0;
        BVar5 = 1;
        if (this_01 !=
            (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
            0x0) {
          while (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,
                                     BVar5 & 0xff,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                    ), pOVar6 != (Object *)0x0) {
            iVar7 = *(int *)&pOVar6[2].klass;
            if (iVar7 < 1) {
              fVar4 = 0.0;
            }
            else {
              fVar8 = (float)gamePoints / (float)iVar7;
              fVar9 = fVar3;
              if ((fVar8 <= fVar3) && (fVar9 = fVar8, fVar8 < 0.0)) {
                fVar9 = 0.0;
              }
              fVar4 = fVar4 + fVar9;
              gamePoints = gamePoints - iVar7;
            }
            BVar5 = BVar5 + 1;
            if (3 < (int)BVar5) {
              return fVar4;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  fVar3 = (float)(*pcVar10)();
  return fVar3;
}


/* IEnumerator DoTierProgress() */

IEnumerator *
Assembly-CSharp.dll::TierOnDeathProgress::TierOnDeathProgress_DoTierProgress
          (TierOnDeathProgress *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TierOnDeathProgress___DoTierProgress_d__32);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__TierOnDeathProgress___DoTierProgress_d__32);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TierOnDeathProgress::TierOnDeathProgress_Initialize
               (TierOnDeathProgress *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_from_to__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields)._IsShowingTierProgress_k__BackingField = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__GamePointGainEffectManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TierOnDeathProgress_CalculateTotalProgressValue
            (this,TypeInfo__GamePointGainEffectManager->static_fields->
                  progressBarGamePointAmountShown,(MethodInfo *)0x0);
  iVar2 = FUN_?();
  bVar1 = cRam_? == '\0';
  (this->fields).tierToInterpolateFrom = (float)iVar2;
  if (bVar1) {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar3 != (PlayerPlanetData *)0x0) {
    TierOnDeathProgress_CalculateTotalProgressValue
              (this,(pPVar3->fields).progressionGamePoints,(MethodInfo *)0x0);
    iVar2 = FUN_?();
    pTVar4 = (this->fields).nextTierText;
    (this->fields).tierToInterpolateTo = (float)iVar2;
    pSVar5 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&(this->fields).tierToInterpolateFrom,(MethodInfo *)0x0);
    if (pTVar4 != (Text *)0x0) {
      (*(pTVar4->klass->vtable).set_text.methodPtr)
                (pTVar4,pSVar5,(pTVar4->klass->vtable).set_text.method);
      pSVar5 = mscorlib.dll::System::Single::Single_ToString
                          ((Single *)&(this->fields).tierToInterpolateFrom,(MethodInfo *)0x0);
      str3 = mscorlib.dll::System::Single::Single_ToString
                       ((Single *)&(this->fields).tierToInterpolateTo,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_6
                          (StringLiteral_from_to__,pSVar5,::StringLiteral____,str3,
                           (MethodInfo *)0x0);
      iVar2 = 0;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar5,(MethodInfo *)0x0);
      cVar6 = cRam_?;
      fVar7 = (this->fields).timeBeforeStartLerp;
      (this->fields).timer = fVar7;
      (this->fields).crystalTimer = fVar7;
      if (cVar6 == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cVar6 = '\x01';
        cRam_? = '\x01';
      }
      pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar3 != (PlayerPlanetData *)0x0) {
        bVar1 = cRam_? == '\0';
        (this->fields).currentTier = (pPVar3->fields).gamePassTier;
        if (bVar1) {
          FUN_?(&TypeInfo__GamePointGainEffectManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
          cVar6 = cRam_?;
        }
        iVar8 = TypeInfo__GamePointGainEffectManager->static_fields->
                 progressBarGamePointAmountShown;
        if (cVar6 == '\0') {
          FUN_?(&TypeInfo__GamePassesManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar3 != (PlayerPlanetData *)0x0) {
          iVar8 = (pPVar3->fields).progressionGamePoints - iVar8;
          pTVar4 = (this->fields).crystalsGainedSinceDeath;
          (this->fields).crystalValue = iVar8;
          (this->fields).currentCrystalValue = (float)iVar8;
          pSVar5 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&(this->fields).crystalValue,(MethodInfo *)0x0);
          if (pTVar4 != (Text *)0x0) {
            (*(pTVar4->klass->vtable).set_text.methodPtr)(pTVar4,pSVar5);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__GamePassesManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pPVar3 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
            if (pPVar3 != (PlayerPlanetData *)0x0) {
              this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator;
              bVar9 = (this->fields).currentTier;
              if (this_00 != (PlayerTierStateCalculator *)0x0) {
                if ((this_00->fields).gamePointVelocityIsZero == 0) {
                  this_02 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                            PlayerTierStateCalculator::
                            PlayerTierStateCalculator_GetTierPricingStateBasedOnUserGamePointAmount
                                      (this_00,(pPVar3->fields).progressionGamePoints,(uint)bVar9,
                                       (MethodInfo *)0x0);
                }
                else {
                  this_02 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                            PlayerTierStateCalculator::
                            PlayerTierStateCalculator_GetTierPricingStateBasedOnUserTier
                                      (this_00,(uint)bVar9,(MethodInfo *)0x0);
                }
                (this->fields).currentGamePoints = (this->fields).crystalValue;
                if ((this_02 !=
                     (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                      *)0x0) &&
                   (pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              ByteEnum,System::Object]::
                              Dictionary_2_System_ByteEnum_System_Object__get_Item
                                        ((Dictionary_2_System_ByteEnum_System_Object_ *)this_02,
                                         (uint)(this->fields).currentTier,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                        ), pOVar10 != (Object *)0x0)) {
                  (this->fields).gamePointsRequired = *(int32_t *)&pOVar10[2].klass;
                  iVar8 = (this->fields).currentGamePoints;
                  if ((-1 < iVar8) &&
                     (iVar11 = (this->fields).crystalValue, iVar2 = iVar8, iVar11 < iVar8)) {
                    iVar2 = iVar11;
                  }
                  pRVar12 = (this->fields).lockImage;
                  (this->fields).currentGamePoints = iVar2;
                  if ((pRVar12 != (RectTransform *)0x0) &&
                     (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pRVar12,(MethodInfo *)0x0),
                     pGVar13 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar13,1,(MethodInfo *)0x0);
                    this_01 = (this->fields).unlockImage;
                    if ((this_01 != (CanvasGroup *)0x0) &&
                       (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0),
                       pGVar13 != (GameObject *)0x0)) {
                      method_00 = (MethodInfo *)0x0;
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar13,0,(MethodInfo *)0x0);
                      (this->fields).intensity = 0.0;
                      if ((this->fields).crystalValue != 0) {
                        (this->fields).intensity = 1.0;
                      }
                      pRVar12 = (this->fields).lockImage;
                      if (pRVar12 != (RectTransform *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        QStack_14.x = 0.0;
                        QStack_14.y = 0.0;
                        QStack_14.z = 0.0;
                        QStack_14.w = 0.0;
                        pvVar15 = (pRVar12->fields)._._._.m_CachedPtr;
                        if (pvVar15 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pRVar12,(MethodInfo *)0x0);
                          pcVar16 = (code *)swi(3);
                          (*pcVar16)();
                          return;
                        }
                        pcVar16 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)
                           ) {
                          uVar17 = func_?(&UNK_?);
                          FUN_?(uVar17,0);
                          pcVar16 = (code *)swi(3);
                          (*pcVar16)();
                          return;
                        }
                        pcRam_? = pcVar16;
                        (*pcRam_?)(pvVar15,&QStack_14);
                        QStack_18.x = QStack_14.x;
                        QStack_18.y = QStack_14.y;
                        QStack_18.z = QStack_14.z;
                        QStack_18.w = QStack_14.w;
                        pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                  Quaternion_get_eulerAngles
                                            ((Vector3 *)&QStack_14,&QStack_18,method_00);
                        fVar20 = pVVar19->y;
                        fVar7 = pVVar19->z;
                        (this->fields).lockStartRot.x = pVVar19->x;
                        (this->fields).lockStartRot.y = fVar20;
                        (this->fields).lockStartRot.z = fVar7;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::TierOnDeathProgress::TierOnDeathProgress_OnDisable
               (TierOnDeathProgress *this,MethodInfo *method)

{
  (this->fields)._IsShowingTierProgress_k__BackingField = 0;
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::TierOnDeathProgress::TierOnDeathProgress_OnEnable
               (TierOnDeathProgress *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TierOnDeathProgress___DoTierProgress_d__32);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__TierOnDeathProgress___DoTierProgress_d__32);
  bVar2 = iRam_? != 0;
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(TierOnDeathProgress **)(lVar1 + 0x20) = this;
  if (bVar2) {
    uVar3 = (uint)(lVar1 + 0x20U >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  if (lVar1 == 0) {
    uVar7 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar7);
    pSVar8 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar8,(MethodInfo *)0x0);
    uVar7 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar7);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar10 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar10 == 0) {
    uVar7 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar7);
    pSVar8 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar8,(MethodInfo *)0x0);
    uVar7 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar7);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (TierOnDeathProgress *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pvVar11 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar11 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar11,lVar1);
  return;
}


/* Int32 ReduceGamePointsWithPreviousTierRequirements(GamePassTier, Int32,
   Dictionary`2[MV.Common.GamePassTier,MV.WorldObject.GamePassSystem.PlayerTierState]) */

int32_t Assembly-CSharp.dll::TierOnDeathProgress::
        TierOnDeathProgress_ReduceGamePointsWithPreviousTierRequirements
                  (TierOnDeathProgress *this,GamePassTier__Enum gamePassTierToDisplay,
                  int32_t gamePoints,
                  Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                  *gameTierShopStatus,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  BVar1 = (gamePassTierToDisplay & 0xff) - 1;
  if (0 < (int)BVar1) {
    if (gameTierShopStatus ==
        (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    do {
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)gameTierShopStatus,
                          BVar1 & 0xff,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                         );
      if (pOVar4 == (Object *)0x0) goto code_?;
      gamePoints = gamePoints - *(int *)&pOVar4[2].klass;
      if (gamePoints < 1) {
        gamePoints = 0;
      }
      BVar1 = BVar1 - 1;
    } while (0 < (int)BVar1);
  }
  return gamePoints;
}


/* Void Update() */

void Assembly-CSharp.dll::TierOnDeathProgress::TierOnDeathProgress_Update
               (TierOnDeathProgress *this,MethodInfo *method)

{
  if ((this->fields).unlockingTier == 0) {
    fVar1 = (this->fields).timer;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    pcVar2 = pcRam_?;
    fVar5 = (this->fields).crystalTimer;
    (this->fields).timer = fVar4 + fVar1;
    pcVar6 = pcRam_?;
    if ((pcVar2 == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar6 = pcVar2, pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar6;
    fVar1 = (float)(*pcVar2)();
    (this->fields).crystalTimer = fVar1 + fVar5;
  }
  return;
}


/* TierOnDeathProgress() */

void Assembly-CSharp.dll::TierOnDeathProgress::TierOnDeathProgress__ctor
               (TierOnDeathProgress *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).timer = -0.5;
  (this->fields).crystalTimer = -0.5;
  (this->fields).timeBeforeStartLerp = -0.5;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052a1b1,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

