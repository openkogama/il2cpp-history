
/* Void HideCount() */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_HideCount
               (GamePointGainEffectCountController *this,MethodInfo *method)

{
  pTVar1 = (this->fields).transformToSlide;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).transformToSlide;
    uVar3 = pVVar2->y;
    if (pTVar1 != (Transform *)0x0) {
      value.y = (float)uVar3;
      value.x = (this->fields).originalXPosition + (this->fields).slideMoveAmount;
      value.z = pVVar2->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar1,value,(MethodInfo *)0x0);
      (this->fields).currentSlideState = 1;
      (this->fields).slideStartTime = 0.0;
      (this->fields).startSlideOutTime = 0.0;
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnGamePointGainEffectReached() */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_OnGamePointGainEffectReached
               (GamePointGainEffectCountController *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  iVar2 = (this->fields).gainEffectTotalAmount;
  iVar3 = (this->fields).gainEffectAmountReached + 1;
  (this->fields).gainEffectAmountReached = iVar3;
  iVar4 = (this->fields).endValue;
  iVar5 = (this->fields).startValue;
  (this->fields).textEffectStartTime = fVar1;
  iVar6 = (this->fields).startValue;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  func_?((double)(((float)iVar3 / (float)iVar2) * (float)(iVar4 - iVar5) + (float)iVar6));
  iVar7 = func_?();
  pTVar8 = (this->fields).gamePointAmount;
  (this->fields).currentGamePointAmountDisplayed = iVar7;
  mscorlib.dll::System::Int32::Int32_ToString
            ((Int32 *)&(this->fields).currentGamePointAmountDisplayed,(MethodInfo *)0x0);
  if (pTVar8 != (Text *)0x0) {
    (*(code *)(pTVar8->klass->vtable).set_text.method)();
    return;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnGamePointGainEffectStarted() */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_OnGamePointGainEffectStarted
               (GamePointGainEffectCountController *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).startSlideOutTime = fVar1 + (this->fields).slideOutDelay;
  if (((this->fields).currentSlideState == 1) || ((this->fields).currentSlideState == 3)) {
    (this->fields).currentSlideState = 2;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).slideStartTime = fVar1;
  }
  return;
}


/* Void SetupAmountCatchingUp(Int32, Int32) */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_SetupAmountCatchingUp
               (GamePointGainEffectCountController *this,int32_t endValueParam,
               int32_t gainEffectTotalAmountParam,MethodInfo *method)

{
  (this->fields).endValue = endValueParam;
  (this->fields).gainEffectTotalAmount = gainEffectTotalAmountParam;
  (this->fields).startValue = (this->fields).currentGamePointAmountDisplayed;
  (this->fields).gainEffectAmountReached = 0;
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_Start
               (GamePointGainEffectCountController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePassesManager);
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__GamePassesManager);
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    pTVar2 = (this->fields).gamePointAmount;
    (this->fields).currentGamePointAmountDisplayed = (pPVar1->fields).highScoreGamePoints;
    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(this->fields).currentGamePointAmountDisplayed,(MethodInfo *)0x0);
    if (pTVar2 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,pSVar3,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
  }
  pTVar4 = (this->fields).transformToSlide;
  if (pTVar4 != (Transform *)0x0) {
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       (&VStack_6,pTVar4,(MethodInfo *)0x0);
    pTVar4 = (this->fields).transformToSlide;
    fVar7 = pVVar5->x;
    method_00 = (MethodInfo *)0x0;
    (this->fields).originalXPosition = fVar7;
    fStack_8 = (this->fields).slideMoveAmount;
    if (pTVar4 != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         (&VStack_6,pTVar4,(MethodInfo *)0x0);
      fStack_9 = pVVar5->y;
      if ((this->fields).transformToSlide != (Transform *)0x0) {
        this_00 = (Transform *)(fVar7 + fStack_8);
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           (&VStack_6,this_00,method_00);
        VStack_6.z = pVVar5->z;
        value.y = fStack_9;
        value.x = (float)this_00;
        value.z = VStack_6.z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar4,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateGamePointAmountTextEffect() */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_UpdateGamePointAmountTextEffect
               (GamePointGainEffectCountController *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  this_00 = (this->fields).textEffectCurve;
  if (this_00 != (AnimationCurve *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,fVar1 - (this->fields).textEffectStartTime,(MethodInfo *)0x0);
    this_01 = (this->fields).gamePointAmount;
    if (this_01 != (Text *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_01,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                           ((Vector3 *)&puStack_3,this_02,(MethodInfo *)0x0);
        this = (GamePointGainEffectCountController *)(pVVar2->z * _UNK_?);
        fVar4 = fVar1 * _UNK_?;
        value.x = fVar1 * _UNK_?;
        value = (Vector3)CONCAT84(uVar5,value.x);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (this_02,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateGamePointAmountTextToValue(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_UpdateGamePointAmountTextToValue
               (GamePointGainEffectCountController *this,int32_t updateToValue,MethodInfo *method)

{
  pTVar1 = (this->fields).gamePointAmount;
  (this->fields).currentGamePointAmountDisplayed = updateToValue;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).currentGamePointAmountDisplayed,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* GamePointGainEffectCountController() */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController__ctor
               (GamePointGainEffectCountController *this,MethodInfo *method)

{
  (this->fields).currentSlideState = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

