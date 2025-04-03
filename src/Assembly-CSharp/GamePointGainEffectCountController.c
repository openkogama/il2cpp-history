
/* Void HandleSlideIn() */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_HandleSlideIn
               (GamePointGainEffectCountController *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pTVar2 = (this->fields).transformToSlide;
  fVar3 = (fVar1 - (this->fields).slideStartTime) / (this->fields).slideDuration;
  fVar1 = (this->fields).originalXPosition;
  if (pTVar2 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe0,pTVar2,(MethodInfo *)0x0);
    uVar5 = pVVar4->x;
    uVar6 = pVVar4->y;
    fVar7 = 0.0;
    if ((0.0 <= fVar3) && (fVar7 = _UNK_?, fVar3 <= _UNK_?)) {
      fVar7 = fVar3;
    }
    pTVar2 = (this->fields).transformToSlide;
    if (pTVar2 != (Transform *)0x0) {
      value.y = (float)uVar6;
      value.x = (fVar1 - (float)uVar5) * fVar7 + (float)uVar5;
      value.z = pVVar4->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar2,value,(MethodInfo *)0x0);
      if (_UNK_? < fVar3) {
        (this->fields).currentSlideState = 0;
      }
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HandleSlideOut() */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_HandleSlideOut
               (GamePointGainEffectCountController *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pTVar2 = (this->fields).transformToSlide;
  fVar3 = (fVar1 - (this->fields).slideStartTime) / (this->fields).slideDuration;
  fVar1 = (this->fields).originalXPosition;
  fVar4 = (this->fields).slideMoveAmount;
  if (pTVar2 != (Transform *)0x0) {
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
    uVar6 = pVVar5->x;
    uVar7 = pVVar5->y;
    fVar8 = 0.0;
    if ((0.0 <= fVar3) && (fVar8 = _UNK_?, fVar3 <= _UNK_?)) {
      fVar8 = fVar3;
    }
    pTVar2 = (this->fields).transformToSlide;
    if (pTVar2 != (Transform *)0x0) {
      value.y = (float)uVar7;
      value.x = ((fVar4 + fVar1) - (float)uVar6) * fVar8 + (float)uVar6;
      value.z = pVVar5->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar2,value,(MethodInfo *)0x0);
      if (_UNK_? < fVar3) {
        (this->fields).currentSlideState = 1;
      }
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void HandleSlideState() */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_HandleSlideState
               (GamePointGainEffectCountController *this,MethodInfo *method)

{
  switch((this->fields).currentSlideState) {
  case 0:
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pfVar2 = &(this->fields).startSlideOutTime;
    if (*pfVar2 <= fVar1 && fVar1 != *pfVar2) {
      (this->fields).currentSlideState = 3;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).slideStartTime = fVar1;
    }
  default:
    return;
  case 2:
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pTVar3 = (this->fields).transformToSlide;
    fVar4 = (fVar1 - (this->fields).slideStartTime) / (this->fields).slideDuration;
    fVar1 = (this->fields).originalXPosition;
    if (pTVar3 != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffdc,pTVar3,(MethodInfo *)0x0);
      uVar6 = pVVar5->x;
      uVar7 = pVVar5->y;
      fVar8 = 0.0;
      if ((0.0 <= fVar4) && (fVar8 = _UNK_?, fVar4 <= _UNK_?)) {
        fVar8 = fVar4;
      }
      pTVar3 = (this->fields).transformToSlide;
      fStack_9 = (fVar1 - (float)uVar6) * fVar8 + (float)uVar6;
      if (pTVar3 != (Transform *)0x0) {
        value.y = (float)uVar7;
        value.x = fStack_9;
        value.z = pVVar5->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar3,value,(MethodInfo *)0x0);
        if (fVar4 <= _UNK_?) {
          return;
        }
        (this->fields).currentSlideState = 0;
        return;
      }
    }
    break;
  case 3:
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pTVar3 = (this->fields).transformToSlide;
    fVar8 = (fVar1 - (this->fields).slideStartTime) / (this->fields).slideDuration;
    fVar1 = (this->fields).originalXPosition;
    fVar4 = (this->fields).slideMoveAmount;
    if (pTVar3 != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffdc,pTVar3,(MethodInfo *)0x0);
      uVar10 = pVVar5->x;
      uVar11 = pVVar5->y;
      fVar12 = 0.0;
      if ((0.0 <= fVar8) && (fVar12 = _UNK_?, fVar8 <= _UNK_?)) {
        fVar12 = fVar8;
      }
      pTVar3 = (this->fields).transformToSlide;
      fStack_9 = ((fVar4 + fVar1) - (float)uVar10) * fVar12 + (float)uVar10;
      if (pTVar3 != (Transform *)0x0) {
        value_00.y = (float)uVar11;
        value_00.x = fStack_9;
        value_00.z = pVVar5->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar3,value_00,(MethodInfo *)0x0);
        if (fVar8 <= _UNK_?) {
          return;
        }
        (this->fields).currentSlideState = 1;
        return;
      }
    }
  }
  func_?();
  *(float *)(unaff_EBX + 0x10) = fStack_9;
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


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
  piVar2 = &(this->fields).gainEffectAmountReached;
  *piVar2 = *piVar2 + 1;
  iVar3 = (this->fields).gainEffectAmountReached;
  iVar4 = (this->fields).gainEffectTotalAmount;
  iVar5 = (this->fields).startValue;
  iVar6 = (this->fields).endValue;
  (this->fields).textEffectStartTime = fVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  piVar2 = &(this->fields).currentGamePointAmountDisplayed;
  func_?((double)((float)(iVar6 - iVar5) * ((float)iVar3 / (float)iVar4) + (float)iVar5));
  iVar7 = func_?();
  pTVar8 = (this->fields).gamePointAmount;
  *piVar2 = iVar7;
  mscorlib.dll::System::Int32::Int32_ToString((Int32 *)piVar2,(MethodInfo *)0x0);
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
  iVar2 = (this->fields).currentSlideState;
  (this->fields).startSlideOutTime = fVar1 + (this->fields).slideOutDelay;
  if ((iVar2 == 1) || (iVar2 == 3)) {
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
    this_00 = &(this->fields).currentGamePointAmountDisplayed;
    pTVar2 = (this->fields).gamePointAmount;
    *this_00 = (pPVar1->fields).highScoreGamePoints;
    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this_00,(MethodInfo *)0x0);
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
        this_01 = (Transform *)(fVar7 + fStack_8);
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           (&VStack_6,this_01,method_00);
        VStack_6.z = pVVar5->z;
        value.y = fStack_9;
        value.x = (float)this_01;
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


/* Void Update() */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_Update
               (GamePointGainEffectCountController *this,MethodInfo *method)

{
  pTStack_1 = (Transform *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  this_00 = (this->fields).textEffectCurve;
  if (this_00 != (AnimationCurve *)0x0) {
    pTStack_1 = (Transform *)
                 UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (this_00,(float)pTStack_1 - (this->fields).textEffectStartTime,
                            (MethodInfo *)0x0);
    this_01 = (this->fields).gamePointAmount;
    if (this_01 != (Text *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_01,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        pTVar2 = pTStack_1;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                           (&VStack_4,pTStack_1,(MethodInfo *)0x0);
        VStack_4.z = pVVar3->z;
        value.y = (float)pTVar2;
        value.x = (float)pTVar2;
        value.z = VStack_4.z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (this_02,value,(MethodInfo *)0x0);
        GamePointGainEffectCountController_HandleSlideState(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateGamePointAmountTextEffect() */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_UpdateGamePointAmountTextEffect
               (GamePointGainEffectCountController *this,MethodInfo *method)

{
  pTStack_1 = (Transform *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  this_00 = (this->fields).textEffectCurve;
  if (this_00 != (AnimationCurve *)0x0) {
    pTStack_1 = (Transform *)
                 UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (this_00,(float)pTStack_1 - (this->fields).textEffectStartTime,
                            (MethodInfo *)0x0);
    this_01 = (this->fields).gamePointAmount;
    if (this_01 != (Text *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_01,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        pTVar2 = pTStack_1;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                           (&VStack_4,pTStack_1,(MethodInfo *)0x0);
        VStack_4.z = pVVar3->z;
        value.y = (float)pTVar2;
        value.x = (float)pTVar2;
        value.z = VStack_4.z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (this_02,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateGamePointAmountTextToValue(Int32) */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_UpdateGamePointAmountTextToValue
               (GamePointGainEffectCountController *this,int32_t updateToValue,MethodInfo *method)

{
  this_00 = &(this->fields).currentGamePointAmountDisplayed;
  pTVar1 = (this->fields).gamePointAmount;
  *this_00 = updateToValue;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this_00,(MethodInfo *)0x0);
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

