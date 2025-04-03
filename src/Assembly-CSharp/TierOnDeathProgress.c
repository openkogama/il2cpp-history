
/* Single CalculateTotalProgressValue(Int32) */

float Assembly-CSharp.dll::TierOnDeathProgress::TierOnDeathProgress_CalculateTotalProgressValue
                (TierOnDeathProgress *this,int32_t gamePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      GStack_2 = CONCAT31(GStack_2._1_3_,(pPVar1->fields).gamePassTier);
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,GStack_2,(MethodInfo *)0x0);
      fStack_3 = 0.0;
      key = 1;
      while ((this_01 !=
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0 && (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               ByteEnum,System::Object]::
                               Dictionary_2_System_ByteEnum_System_Object__get_Item
                                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,key
                                          ,
                                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                         ), pOVar4 != (Object *)0x0))) {
        pOVar5 = pOVar4[3].klass;
        if ((int)pOVar5 < 1) {
          fStack_3 = 0.0;
          iVar6 = gamePoints;
        }
        else {
          iVar6 = gamePoints - (int)pOVar5;
          fVar7 = (float)gamePoints / (float)(int)pOVar5;
          fVar8 = _UNK_?;
          if ((fVar7 <= _UNK_?) && (fVar8 = fVar7, fVar7 < 0.0)) {
            fVar8 = 0.0;
          }
          fStack_3 = fVar8 + fStack_3;
        }
        key = key + 1;
        gamePoints = iVar6;
        if (3 < (int)key) {
          return fStack_3;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  fVar10 = (float10)(*pcVar9)();
  return (float)fVar10;
}


/* IEnumerator DoTierProgress() */

IEnumerator *
Assembly-CSharp.dll::TierOnDeathProgress::TierOnDeathProgress_DoTierProgress
          (TierOnDeathProgress *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TierOnDeathProgress___DoTierProgress_d__32);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierOnDeathProgress___DoTierProgress_d__32;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TierOnDeathProgress::TierOnDeathProgress_Initialize
               (TierOnDeathProgress *this,MethodInfo *method)

{
  pTVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&TypeInfo__GamePassesManager);
    func_?(&StringLiteral_from_to__);
    func_?(&::StringLiteral____);
    cRam_? = '\x01';
  }
  (this->fields)._IsShowingTierProgress_k__BackingField = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePointGainEffectManager);
    cRam_? = '\x01';
  }
  fVar2 = TierOnDeathProgress_CalculateTotalProgressValue
                     (this,TypeInfo__GamePointGainEffectManager->static_fields->
                           progressBarGamePointAmountShown,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = &(this->fields).tierToInterpolateFrom;
  fVar3 = (float10)func_?((double)fVar2);
  *this_00 = (float)(int)fVar3;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar4 != (PlayerPlanetData *)0x0) {
    fVar2 = TierOnDeathProgress_CalculateTotalProgressValue
                       (this,(pPVar4->fields).progressionGamePoints,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar3 = (float10)func_?();
    pTVar5 = (this->fields).nextTierText;
    (this->fields).tierToInterpolateTo = (float)(int)fVar3;
    pSVar6 = mscorlib.dll::System::Single::Single_ToString((Single *)this_00,(MethodInfo *)0x0);
    if (pTVar5 != (Text *)0x0) {
      (*(code *)(pTVar5->klass->vtable).set_text.method)(pTVar5,pSVar6);
      pSVar6 = mscorlib.dll::System::Single::Single_ToString((Single *)this_00,(MethodInfo *)0x0);
      str3 = mscorlib.dll::System::Single::Single_ToString
                       ((Single *)&(this->fields).tierToInterpolateTo,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_5
                         (StringLiteral_from_to__,pSVar6,::StringLiteral____,str3,(MethodInfo *)0x0)
      ;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar6,(MethodInfo *)0x0);
      fVar7 = (this->fields).timeBeforeStartLerp;
      (this->fields).timer = fVar7;
      (this->fields).crystalTimer = fVar7;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar4 != (PlayerPlanetData *)0x0) {
        (this->fields).currentTier = (pPVar4->fields).gamePassTier;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        iVar8 = TypeInfo__GamePointGainEffectManager->static_fields->
                 progressBarGamePointAmountShown;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
        if (pPVar4 != (PlayerPlanetData *)0x0) {
          pTVar5 = (this->fields).crystalsGainedSinceDeath;
          iVar8 = (pPVar4->fields).progressionGamePoints - iVar8;
          this_01 = &(this->fields).crystalValue;
          *this_01 = iVar8;
          (this->fields).currentCrystalValue = (float)iVar8;
          pSVar6 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this_01,(MethodInfo *)0x0);
          if (pTVar5 != (Text *)0x0) {
            pSStack_9 = pSVar6;
            (*(code *)(pTVar5->klass->vtable).set_text.method)();
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pPVar4 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
            if ((pPVar4 != (PlayerPlanetData *)0x0) &&
               (this_02 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
               this_02 != (PlayerTierStateCalculator *)0x0)) {
              pTVar10 = &this->fields;
              this._1_3_ = (undefined3)((uint)fVar2 >> 8);
              this = (TierOnDeathProgress *)CONCAT31(this._1_3_,pTVar10->currentTier);
              this_06 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                        PlayerTierStateCalculator::PlayerTierStateCalculator_GetTierPricingState
                                  (this_02,(pPVar4->fields).progressionGamePoints,
                                   (GamePassTier__Enum)this,(MethodInfo *)0x0);
              (pTVar1->fields).currentGamePoints = *this_01;
              if (this_06 !=
                  (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                   *)0x0) {
                this = (TierOnDeathProgress *)CONCAT31(this._1_3_,(pTVar1->fields).currentTier);
                pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)this_06,
                                     (ByteEnum__Enum)this,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                    );
                if (pOVar11 != (Object *)0x0) {
                  (pTVar1->fields).gamePointsRequired = (int32_t)pOVar11[3].klass;
                  iVar8 = (pTVar1->fields).currentGamePoints;
                  if (iVar8 < 0) {
                    iVar8 = 0;
                  }
                  else if (*this_01 < iVar8) {
                    iVar8 = *this_01;
                  }
                  (pTVar1->fields).currentGamePoints = iVar8;
                  this_03 = (pTVar1->fields).lockImage;
                  if (this_03 != (RectTransform *)0x0) {
                    pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this_03,(MethodInfo *)0x0);
                    if (pGVar12 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar12,1,(MethodInfo *)0x0);
                      this_04 = (pTVar1->fields).unlockImage;
                      if (this_04 != (CanvasGroup *)0x0) {
                        pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)this_04,(MethodInfo *)0x0);
                        if (pGVar12 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar12,0,(MethodInfo *)0x0);
                          (pTVar1->fields).intensity = 0.0;
                          if (*this_01 != 0) {
                            (pTVar1->fields).intensity = 1.0;
                          }
                          this_05 = (Transform *)(pTVar1->fields).lockImage;
                          if (this_05 != (Transform *)0x0) {
                            pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_get_localRotation
                                                ((Quaternion *)&pSStack_9,this_05,(MethodInfo *)0x0
                                                );
                            pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                      Quaternion_Internal_ToEulerRad
                                                ((Vector3 *)&stack0xffffffe4,*pQVar13,
                                                 (MethodInfo *)0x0);
                            uVar15 = pVVar14->x;
                            uVar16 = pVVar14->y;
                            euler.y = (float)uVar16 * _UNK_?;
                            euler.x = (float)uVar15 * _UNK_?;
                            euler.z = pVVar14->z * _UNK_?;
                            puStack_17 = (undefined *)uVar15;
                            pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                      Quaternion_Internal_MakePositive
                                                ((Vector3 *)&puStack_17,euler,(MethodInfo *)0x0);
                            fVar7 = pVVar14->y;
                            fVar2 = pVVar14->z;
                            (pTVar1->fields).lockStartRot.x = pVVar14->x;
                            (pTVar1->fields).lockStartRot.y = fVar7;
                            (pTVar1->fields).lockStartRot.z = fVar2;
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
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
    func_?(&TypeInfo__TierOnDeathProgress___DoTierProgress_d__32);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierOnDeathProgress___DoTierProgress_d__32;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                   );
    cRam_? = '\x01';
  }
  key = gamePassTierToDisplay & 0xff;
  while( true ) {
    key = key - 1;
    if ((int)key < 1) {
      return gamePoints;
    }
    if ((gameTierShopStatus ==
         (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
       || (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)gameTierShopStatus,key
                               ,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                              ), pOVar1 == (Object *)0x0)) break;
    gamePoints = gamePoints - (int)pOVar1[3].klass;
    if (gamePoints < 1) {
      gamePoints = 0;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void Update() */

void Assembly-CSharp.dll::TierOnDeathProgress::TierOnDeathProgress_Update
               (TierOnDeathProgress *this,MethodInfo *method)

{
  if ((this->fields).unlockingTier == 0) {
    fVar1 = (this->fields).timer;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar3 = (this->fields).crystalTimer;
    (this->fields).timer = fVar2 + fVar1;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields).crystalTimer = fVar1 + fVar3;
  }
  return;
}


/* TierOnDeathProgress() */

void Assembly-CSharp.dll::TierOnDeathProgress::TierOnDeathProgress__ctor
               (TierOnDeathProgress *this,MethodInfo *method)

{
  (this->fields).timer = -0.5;
  (this->fields).crystalTimer = -0.5;
  (this->fields).timeBeforeStartLerp = -0.5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Void set_IsShowingTierProgress(Boolean) */

void Assembly-CSharp.dll::TierOnDeathProgress::TierOnDeathProgress_set_IsShowingTierProgress
               (TierOnDeathProgress *this,bool value,MethodInfo *method)

{
  (this->fields)._IsShowingTierProgress_k__BackingField = value;
  return;
}

