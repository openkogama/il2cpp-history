
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
  pGVar1 = this;
  switch((this->fields).currentSlideState) {
  case 0:
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pfVar3 = &(this->fields).startSlideOutTime;
    if (fVar2 < *pfVar3 || fVar2 == *pfVar3) {
      return;
    }
    (this->fields).currentSlideState = 3;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).slideStartTime = fVar2;
    return;
  default:
    goto code_?;
  case 2:
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pTVar4 = (this->fields).transformToSlide;
    pGVar5 = (GamePointGainEffectCountController *)
              ((fVar2 - (this->fields).slideStartTime) / (this->fields).slideDuration);
    pGVar6 = (GamePointGainEffectCountController *)(this->fields).originalXPosition;
    bVar7 = (int)pTVar4 < 0;
    uVar8 = pTVar4 == (Transform *)0x0;
    if (!(bool)uVar8) {
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffdc,pTVar4,(MethodInfo *)0x0);
      uVar10 = pVVar9->x;
      uVar11 = pVVar9->y;
      pGVar12 = (GamePointGainEffectCountController *)0x0;
      if ((0.0 <= (float)pGVar5) &&
         (pGVar12 = _UNK_?, (float)pGVar5 <= (float)_UNK_?)) {
        pGVar12 = pGVar5;
      }
      pTVar4 = (this->fields).transformToSlide;
      in_XMM1_Da = ((float)pGVar6 - (float)uVar10) * (float)pGVar12 + (float)uVar10;
      uStack_13 = CONCAT44(uVar11,in_XMM1_Da);
      bVar7 = (int)pTVar4 < 0;
      uVar8 = pTVar4 == (Transform *)0x0;
      pGVar6 = pGVar5;
      if (!(bool)uVar8) {
        value.y = (float)uVar11;
        value.x = in_XMM1_Da;
        value.z = pVVar9->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar4,value,(MethodInfo *)0x0);
        if ((float)pGVar5 <= (float)_UNK_?) {
          return;
        }
        (this->fields).currentSlideState = 0;
        return;
      }
    }
    break;
  case 3:
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pTVar4 = (this->fields).transformToSlide;
    pGVar5 = (GamePointGainEffectCountController *)
              ((fVar2 - (this->fields).slideStartTime) / (this->fields).slideDuration);
    fVar2 = (this->fields).originalXPosition;
    pGVar6 = (GamePointGainEffectCountController *)(this->fields).slideMoveAmount;
    bVar7 = (int)pTVar4 < 0;
    uVar8 = pTVar4 == (Transform *)0x0;
    if (!(bool)uVar8) {
      pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffdc,pTVar4,(MethodInfo *)0x0);
      in_XMM1_Da = (float)pGVar6 + fVar2;
      uStack_13._0_4_ = pVVar9->x;
      uStack_13._4_4_ = pVVar9->y;
      fVar2 = pVVar9->z;
      pGVar6 = (GamePointGainEffectCountController *)0x0;
      in_XMM3_Da = _UNK_?;
      this = pGVar5;
      if ((float)pGVar5 < 0.0) goto code_?;
      uVar8 = (float)pGVar5 == (float)_UNK_?;
      bVar14 = (float)pGVar5 < (float)_UNK_?;
      goto code_?;
    }
  }
  do {
    this = pGVar5;
    bVar14 = 0;
    pGVar5 = pGVar6;
    uVar15 = func_?();
    fVar2 = (float)((ulonglong)uVar15 >> 0x20);
    if (bVar7) {
      bVar16 = (byte)((ulonglong)uVar15 >> 8);
      pcVar17 = (char *)(((int)uVar15 >> 0x1f) + -0x66);
      *pcVar17 = *pcVar17 + (char)((uint)(unaff_EBX + 2) >> 8) +
                (CARRY1(in_stack_18,bVar16) || CARRY1(in_stack_18 + bVar16,bVar14));
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
code_?:
    pGVar6 = in_XMM3_Da;
    if ((bool)bVar14 || (bool)uVar8) {
      pGVar6 = pGVar5;
    }
code_?:
    pTVar4 = (pGVar1->fields).transformToSlide;
    in_XMM1_Da = (in_XMM1_Da - (float)uStack_13) * (float)pGVar6 + (float)uStack_13;
    uStack_13 = CONCAT44(uStack_13._4_4_,in_XMM1_Da);
    bVar7 = (int)pTVar4 < 0;
    uVar8 = true;
    pGVar6 = pGVar5;
    pGVar5 = this;
  } while (pTVar4 == (Transform *)0x0);
  value_00.y = (float)uStack_13._4_4_;
  value_00.x = in_XMM1_Da;
  value_00.z = fVar2;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
            (pTVar4,value_00,(MethodInfo *)0x0);
  if ((float)_UNK_? < (float)this) {
    (pGVar1->fields).currentSlideState = 1;
    return;
  }
code_?:
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
  iVar2 = (this->fields).gainEffectTotalAmount;
  iVar3 = (this->fields).gainEffectAmountReached + 1;
  iVar4 = (this->fields).startValue;
  iVar5 = (this->fields).endValue;
  (this->fields).gainEffectAmountReached = iVar3;
  (this->fields).textEffectStartTime = fVar1;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  func_?((double)((float)(iVar5 - iVar4) * ((float)iVar3 / (float)iVar2) + (float)iVar4));
  iVar6 = func_?();
  pTVar7 = (this->fields).gamePointAmount;
  (this->fields).currentGamePointAmountDisplayed = iVar6;
  mscorlib.dll::System::Int32::Int32_ToString
            ((Int32 *)&(this->fields).currentGamePointAmountDisplayed,(MethodInfo *)0x0);
  if (pTVar7 != (Text *)0x0) {
    (*(code *)(pTVar7->klass->vtable).set_text.method)();
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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

