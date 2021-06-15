
/* Single CalculateTotalProgressValue(Int32) */

float Assembly-CSharp.dll::TierOnDeathProgress::TierOnDeathProgress_CalculateTotalProgressValue
                (TierOnDeathProgress *this,int32_t gamePoints,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    playerGamePoints = (pPVar1->fields).progressionGamePoints;
    pPVar1 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
    if ((pPVar1 != (PlayerPlanetData *)0x0) &&
       (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
       this_00 != (PlayerTierStateCalculator *)0x0)) {
      this_01 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::PlayerTierStateCalculator::
                PlayerTierStateCalculator_GetTierPricingState
                          (this_00,playerGamePoints,
                           CONCAT31((int3)((uint)unaff_EBX >> 8),(pPVar1->fields).gamePassTier),
                           (MethodInfo *)0x0);
      key = 1.4013e-45;
      while ((this_01 !=
              (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)
              0x0 && (fVar2 = key,
                     pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                              GamePassTier,System::Object]::
                              Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                        ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)
                                         this_01,(GamePassTier__Enum)key,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                        ), pOVar3 != (Object *)0x0))) {
        pOVar4 = pOVar3[3].klass;
        if ((int)pOVar4 < 1) {
          fVar5 = 0.0;
          iVar6 = gamePoints;
        }
        else {
          iVar6 = gamePoints - (int)pOVar4;
          fVar7 = (float)gamePoints / (float)(int)pOVar4;
          fVar5 = _UNK_?;
          if ((fVar7 <= _UNK_?) && (fVar5 = fVar7, fVar7 < 0.0)) {
            fVar5 = 0.0;
          }
          fVar5 = fVar5 + fVar2;
        }
        key = (float)((int)key + GamePassTier__Enum_Tier1);
        gamePoints = iVar6;
        if (3 < (int)key) {
          return fVar5;
        }
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  fVar9 = (float10)(*pcVar8)();
  return (float)fVar9;
}


/* IEnumerator DoTierProgress() */

IEnumerator *
Assembly-CSharp.dll::TierOnDeathProgress::TierOnDeathProgress_DoTierProgress
          (TierOnDeathProgress *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierOnDeathProgress___DoTierProgress_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    this_00[1].fields.originalScale.x = (float)this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TierOnDeathProgress::TierOnDeathProgress_Initialize
               (TierOnDeathProgress *this,MethodInfo *method)

{
  pTVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._IsShowingTierProgress_k__BackingField = 1;
  if ((((uint)(TypeInfo__GamePointGainEffectManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePointGainEffectManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePointGainEffectManager);
  }
  iVar2 = GamePointGainEffectManager::GamePointGainEffectManager_get_GamePointAmountShown
                    ((MethodInfo *)0x0);
  fVar3 = TierOnDeathProgress_CalculateTotalProgressValue(this,iVar2,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt(fVar3,(MethodInfo *)0x0)
  ;
  (this->fields).tierToInterpolateFrom = (float)iVar2;
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?();
  }
  pPVar4 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
  if (pPVar4 == (PlayerPlanetData *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    fVar3 = TierOnDeathProgress_CalculateTotalProgressValue
                       (this,(pPVar4->fields).progressionGamePoints,(MethodInfo *)0x0);
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                      (fVar3,(MethodInfo *)0x0);
    pTVar5 = (this->fields).nextTierText;
    (this->fields).tierToInterpolateTo = (float)iVar2;
    func_?();
    if (pTVar5 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar5->klass->vtable).set_text.method)();
    args = (Object__Array *)func_?(TypeInfo__System__Object);
    if (args == (Object__Array *)0x0) goto code_?;
    if ((StringLiteral_from_to__ != (String *)0x0) && (iVar6 = func_?(), iVar6 == 0))
    goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)StringLiteral_from_to__;
    pOVar7 = (Object *)func_?();
    if ((pOVar7 != (Object *)0x0) && (iVar6 = func_?(), iVar6 == 0))
    goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar7;
    if ((StringLiteral____ != (String *)0x0) && (iVar6 = func_?(), iVar6 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)StringLiteral____;
    pOVar7 = (Object *)func_?();
    if ((pOVar7 == (Object *)0x0) ||
       (iVar6 = func_?(pOVar7,(args->klass->_0).element_class), iVar6 != 0)) {
      if (args->max_length < 4) goto code_?;
      args->vector[3] = pOVar7;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      message = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
      fVar8 = (this->fields).timeBeforeStartLerp;
      (this->fields).timer = fVar8;
      (this->fields).crystalTimer = fVar8;
      pPVar4 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
      if (pPVar4 != (PlayerPlanetData *)0x0) {
        (this->fields).currentTier = (pPVar4->fields).gamePassTier;
        iVar2 = GamePointGainEffectManager::GamePointGainEffectManager_get_GamePointAmountShown
                          ((MethodInfo *)0x0);
        pPVar4 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
        if (pPVar4 != (PlayerPlanetData *)0x0) {
          pTVar5 = (this->fields).crystalsGainedSinceDeath;
          iVar6 = (pPVar4->fields).progressionGamePoints - iVar2;
          piVar9 = &(this->fields).crystalValue;
          *piVar9 = iVar6;
          (this->fields).currentCrystalValue = (float)iVar6;
          func_?();
          if (pTVar5 != (Text *)0x0) {
            (*(code *)(pTVar5->klass->vtable).set_text.method)();
            pPVar4 = GamePassesManager::GamePassesManager_get_PlayerPlanetData((MethodInfo *)0x0);
            if ((pPVar4 != (PlayerPlanetData *)0x0) &&
               (this_00 = TypeInfo__GamePassesManager->static_fields->playerTierStateCalculator,
               this_00 != (PlayerTierStateCalculator *)0x0)) {
              pTVar10 = &this->fields;
              this._1_3_ = (undefined3)((uint)fVar3 >> 8);
              this = (TierOnDeathProgress *)CONCAT31(this._1_3_,pTVar10->currentTier);
              this_04 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::
                        PlayerTierStateCalculator::PlayerTierStateCalculator_GetTierPricingState
                                  (this_00,(pPVar4->fields).progressionGamePoints,
                                   (GamePassTier__Enum)this,(MethodInfo *)0x0);
              (pTVar1->fields).currentGamePoints = *piVar9;
              if (this_04 !=
                  (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_
                   *)0x0) {
                this = (TierOnDeathProgress *)CONCAT31(this._1_3_,(pTVar1->fields).currentTier);
                pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                          GamePassTier,System::Object]::
                          Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                    ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)this_04,
                                     (GamePassTier__Enum)this,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                                    );
                if (pOVar7 != (Object *)0x0) {
                  iVar2 = *piVar9;
                  (pTVar1->fields).gamePointsRequired = (int32_t)pOVar7[3].klass;
                  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp_1
                                    ((pTVar1->fields).currentGamePoints,0,iVar2,(MethodInfo *)0x0);
                  (pTVar1->fields).currentGamePoints = iVar2;
                  this_01 = (pTVar1->fields).lockImage;
                  if ((this_01 != (RectTransform *)0x0) &&
                     (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_gameObject((Component_1 *)this_01,(MethodInfo *)0x0)
                     , pGVar11 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar11,1,(MethodInfo *)0x0);
                    this_02 = (pTVar1->fields).unlockImage;
                    if ((this_02 != (CanvasGroup *)0x0) &&
                       (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_1_get_gameObject
                                            ((Component_1 *)this_02,(MethodInfo *)0x0),
                       pGVar11 != (GameObject *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar11,0,(MethodInfo *)0x0);
                      (pTVar1->fields).intensity = 0.0;
                      if (*piVar9 != 0) {
                        (pTVar1->fields).intensity = 1.0;
                      }
                      this_03 = (Transform *)(pTVar1->fields).lockImage;
                      if (this_03 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_get_localRotation
                                  ((Quaternion *)&puStack_12,this_03,(MethodInfo *)0x0);
                        puVar13 = (undefined8 *)func_?();
                        uVar14 = *puVar13;
                        fVar3 = *(float *)(puVar13 + 1);
                        (pTVar1->fields).lockStartRot.x = (float)(int)uVar14;
                        (pTVar1->fields).lockStartRot.y = (float)(int)((ulonglong)uVar14 >> 0x20);
                        (pTVar1->fields).lockStartRot.z = fVar3;
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
      goto code_?;
    }
  }
  uVar15 = func_?(0,0);
  func_?(uVar15);
code_?:
  uVar15 = func_?(0,0);
  func_?(uVar15);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TierOnDeathProgress___DoTierProgress_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    this_00[1].fields.originalScale.x = (float)this;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = gamePassTierToDisplay & 0xff;
  while( true ) {
    key = key - GamePassTier__Enum_Tier1;
    if ((int)key < 1) {
      return gamePoints;
    }
    if ((gameTierShopStatus ==
         (Dictionary_2_MV_Common_GamePassTier_MV_WorldObject_GamePassSystem_PlayerTierState_ *)0x0)
       || (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                    GamePassTier,System::Object]::
                    Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                              ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)
                               gameTierShopStatus,key,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_MV::WorldObject::GamePassSystem::PlayerTierState>__get_Item_MV__Common__GamePassTier_
                              ), pOVar1 == (Object *)0x0)) break;
    pOVar2 = pOVar1[3].klass;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    gamePoints = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_2
                           (gamePoints - (int)pOVar2,0,(MethodInfo *)0x0);
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  iVar4 = (*pcVar3)();
  return iVar4;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_IsShowingTierProgress() */

bool Assembly-CSharp.dll::TierOnDeathProgress::TierOnDeathProgress_get_IsShowingTierProgress
               (TierOnDeathProgress *this,MethodInfo *method)

{
  return (this->fields)._IsShowingTierProgress_k__BackingField;
}


/* Void set_IsShowingTierProgress(Boolean) */

void Assembly-CSharp.dll::TierOnDeathProgress::TierOnDeathProgress_set_IsShowingTierProgress
               (TierOnDeathProgress *this,bool value,MethodInfo *method)

{
  (this->fields)._IsShowingTierProgress_k__BackingField = value;
  return;
}

