
/* Void HandleSlideIn() */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_HandleSlideIn
               (GamePointGainEffectCountController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pTVar2 = (this->fields).transformToSlide;
  t = (fVar1 - (this->fields).slideStartTime) / (this->fields).slideDuration;
  fVar1 = (this->fields).originalXPosition;
  if (pTVar2 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffd4,pTVar2,(MethodInfo *)0x0);
    fVar4 = pVVar3->x;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp(fVar4,fVar1,t,(MethodInfo *)0x0);
    pTVar2 = (this->fields).transformToSlide;
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffe0,pTVar2,(MethodInfo *)0x0);
      fVar1 = pVVar3->y;
      this_00 = (this->fields).transformToSlide;
      if (this_00 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xffffffc8,this_00,(MethodInfo *)0x0);
        fVar4 = pVVar3->z;
        func_?();
        if (pTVar2 != (Transform *)0x0) {
          value.z = 0.0;
          value.x = fVar1;
          value.y = fVar4;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar2,value,(MethodInfo *)0x0);
          if (_UNK_? < t) {
            (this->fields).currentSlideState = 0;
          }
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandleSlideOut() */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_HandleSlideOut
               (GamePointGainEffectCountController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pTVar2 = (this->fields).transformToSlide;
  t = (fVar1 - (this->fields).slideStartTime) / (this->fields).slideDuration;
  fVar1 = (this->fields).originalXPosition;
  fVar3 = (this->fields).slideMoveAmount;
  if (pTVar2 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffd0,pTVar2,(MethodInfo *)0x0);
    a = pVVar4->x;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp(a,fVar3 + fVar1,t,(MethodInfo *)0x0);
    pTVar2 = (this->fields).transformToSlide;
    if (pTVar2 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffdc,pTVar2,(MethodInfo *)0x0);
      fVar1 = pVVar4->y;
      this_00 = (this->fields).transformToSlide;
      if (this_00 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xffffffc4,this_00,(MethodInfo *)0x0);
        fVar3 = pVVar4->z;
        func_?();
        if (pTVar2 != (Transform *)0x0) {
          value.z = 0.0;
          value.x = fVar1;
          value.y = fVar3;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar2,value,(MethodInfo *)0x0);
          if (_UNK_? < t) {
            (this->fields).currentSlideState = 1;
          }
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    if (fVar1 < *pfVar2 || fVar1 == *pfVar2) {
      return;
    }
    (this->fields).currentSlideState = 3;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).slideStartTime = fVar1;
    return;
  default:
    goto code_?;
  case 2:
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pTVar3 = (this->fields).transformToSlide;
    fVar1 = (fVar1 - (this->fields).slideStartTime) / (this->fields).slideDuration;
    fStack_4 = (this->fields).originalXPosition;
    if (pTVar3 != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffd0,pTVar3,(MethodInfo *)0x0);
      fVar6 = pVVar5->x;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      fStack_4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                           (fVar6,fStack_4,fVar1,(MethodInfo *)0x0);
      unaff_EDI = (this->fields).transformToSlide;
      if (unaff_EDI != (Transform *)0x0) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xffffffdc,unaff_EDI,(MethodInfo *)0x0);
        fVar7 = pVVar5->y;
        pTVar3 = (this->fields).transformToSlide;
        if (pTVar3 != (Transform *)0x0) {
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             ((Vector3 *)&stack0xffffffc4,pTVar3,(MethodInfo *)0x0);
          fStack_8 = pVVar5->z;
          uStack_9 = 0;
          func_?();
          fStack_10 = fVar7;
          if (unaff_EDI != (Transform *)0x0) {
            value_00.y = fStack_8;
            value_00.x = fVar7;
            value_00.z = 0.0;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (unaff_EDI,value_00,(MethodInfo *)0x0);
            if (fVar1 <= _UNK_?) {
              return;
            }
            (this->fields).currentSlideState = 0;
            return;
          }
        }
      }
    }
    break;
  case 3:
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    pTVar3 = (this->fields).transformToSlide;
    fStack_4 = (fVar1 - (this->fields).slideStartTime) / (this->fields).slideDuration;
    fVar1 = (this->fields).originalXPosition;
    fVar6 = (this->fields).slideMoveAmount;
    if (pTVar3 != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffc4,pTVar3,(MethodInfo *)0x0);
      fVar11 = pVVar5->x;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                (fVar11,fVar6 + fVar1,fStack_4,(MethodInfo *)0x0);
      unaff_EDI = (this->fields).transformToSlide;
      if (unaff_EDI != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                  ((Vector3 *)&stack0xffffffc4,unaff_EDI,(MethodInfo *)0x0);
        pTVar3 = (this->fields).transformToSlide;
        if (pTVar3 != (Transform *)0x0) {
          uVar12 = SUB41(pTVar3,0);
          uVar13 = (undefined1)((uint)pTVar3 >> 8);
          uVar14 = (undefined2)((uint)pTVar3 >> 0x10);
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             ((Vector3 *)&stack0xffffffc4,pTVar3,(MethodInfo *)0x0);
          fStack_8 = pVVar5->z;
          uStack_9 = 0;
          fStack_10 = (float)CONCAT22(uVar14,CONCAT11(uVar13,uVar12));
          goto code_?;
        }
      }
    }
  }
  do {
    pcVar15 = (char *)func_?();
    if (SBORROW1(extraout_DL,*pcVar15)) {
      iVar16 = CONCAT13((undefined1)uStack_9,fStack_8._1_3_);
      pTVar3 = *(Transform **)(iVar16 + 0x10);
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                  ((Vector3 *)&stack0xffffffc9,pTVar3,(MethodInfo *)0x0);
        if (*(Transform **)(iVar16 + 0x10) != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                    ((Vector3 *)&stack0xffffffb1,*(Transform **)(iVar16 + 0x10),(MethodInfo *)0x0);
          fVar6 = 0.0;
          fVar1 = 0.0;
          fVar11 = 0.0;
          uVar12 = 0;
          func_?(&stack0xffffffd5);
          if (pTVar3 != (Transform *)0x0) {
            uVar17 = CONCAT43(fVar6,(int3)((uint)fVar1 >> 8));
            value.z._3_1_ = uVar12;
            value.z._0_3_ = (int3)((uint)fVar11 >> 8);
            value.y = (float)(int)(CONCAT17(SUB41(fVar11,0),uVar17) >> 0x20);
            value.x = (float)(int)uVar17;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar3,value,(MethodInfo *)0x0);
            *(undefined4 *)(iVar16 + 0x48) = 1;
            *(undefined4 *)(iVar16 + 0x40) = 0;
            *(undefined4 *)(iVar16 + 0x44) = 0;
            return;
          }
        }
      }
      func_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
code_?:
    func_?();
  } while (unaff_EDI == (Transform *)0x0);
  value_01.y = fStack_8;
  value_01.x = fStack_10;
  value_01.z._0_1_ = (char)uStack_9;
  value_01.z._1_1_ = (char)((uint)uStack_9 >> 8);
  value_01.z._2_2_ = (short)((uint)uStack_9 >> 0x10);
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
            (unaff_EDI,value_01,(MethodInfo *)0x0);
  if (_UNK_? < fStack_4) {
    (this->fields).currentSlideState = 1;
  }
code_?:
  return;
}


/* Void HideCount() */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_HideCount
               (GamePointGainEffectCountController *this,MethodInfo *method)

{
  fStack_1 = (this->fields).originalXPosition;
  this_00 = (this->fields).transformToSlide;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
              (&VStack_2,this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).transformToSlide;
    if (this_01 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffc8,this_01,(MethodInfo *)0x0);
      VStack_2.x = pVVar3->x;
      VStack_2.y = pVVar3->y;
      VStack_2.z = pVVar3->z;
      uStack_4 = 0;
      fStack_5 = 0.0;
      func_?(&uStack_4);
      if (this_00 != (Transform *)0x0) {
        value.z = fStack_5;
        value.x = (float)(undefined4)uStack_4;
        value.y = (float)uStack_4._4_4_;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (this_00,value,(MethodInfo *)0x0);
        (this->fields).currentSlideState = 1;
        (this->fields).slideStartTime = 0.0;
        (this->fields).startSlideOutTime = 0.0;
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnGamePointGainEffectReached() */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_OnGamePointGainEffectReached
               (GamePointGainEffectCountController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  piVar2 = &(this->fields).gainEffectAmountReached;
  *piVar2 = *piVar2 + 1;
  iVar3 = (this->fields).gainEffectAmountReached;
  iVar4 = (this->fields).gainEffectTotalAmount;
  iVar5 = (this->fields).startValue;
  iVar6 = (this->fields).endValue;
  (this->fields).textEffectStartTime = fVar1;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  piVar2 = &(this->fields).currentGamePointAmountDisplayed;
  iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                    ((float)(iVar6 - iVar5) * ((float)iVar3 / (float)iVar4) + (float)iVar5,
                     (MethodInfo *)0x0);
  pTVar8 = (this->fields).gamePointAmount;
  *piVar2 = iVar7;
  uVar9 = func_?(piVar2,0);
  if (pTVar8 != (Text *)0x0) {
    (*(code *)(pTVar8->klass->vtable).set_text.method)
              (pTVar8,uVar9,(pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnGamePointGainEffectStarted() */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_OnGamePointGainEffectStarted
               (GamePointGainEffectCountController *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  iVar2 = (this->fields).currentSlideState;
  (this->fields).startSlideOutTime = (this->fields).slideOutDelay + fVar1;
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
               (GamePointGainEffectCountController *this,int32_t endValue,
               int32_t gainEffectTotalAmount,MethodInfo *method)

{
  (this->fields).endValue = endValue;
  (this->fields).gainEffectTotalAmount = gainEffectTotalAmount;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__GamePassesManager);
  }
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__GamePassesManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__GamePassesManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__GamePassesManager);
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
    piVar2 = &(this->fields).currentGamePointAmountDisplayed;
    pTVar3 = (this->fields).gamePointAmount;
    *piVar2 = (pPVar1->fields).highScoreGamePoints;
    uVar4 = func_?(piVar2,0);
    if (pTVar3 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar3->klass->vtable).set_text.method)
              (pTVar3,uVar4,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
  }
  pTVar5 = (this->fields).transformToSlide;
  if (pTVar5 != (Transform *)0x0) {
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffc8,pTVar5,(MethodInfo *)0x0);
    pTVar5 = (this->fields).transformToSlide;
    uStack_7._0_4_ = pVVar6->x;
    uStack_7._4_4_ = pVVar6->y;
    (this->fields).originalXPosition = (float)(undefined4)uStack_7;
    fStack_8 = (this->fields).slideMoveAmount;
    if (pTVar5 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                (&VStack_9,pTVar5,(MethodInfo *)0x0);
      this_00 = (this->fields).transformToSlide;
      if (this_00 != (Transform *)0x0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xffffffbc,this_00,(MethodInfo *)0x0);
        uVar10._0_4_ = pVVar6->x;
        uVar10._4_4_ = pVVar6->y;
        VStack_9.z = pVVar6->z;
        VStack_9._0_8_ = uVar10 & 0xffffffff00000000;
        uStack_11 = 0;
        fStack_12 = 0.0;
        func_?();
        if (pTVar5 != (Transform *)0x0) {
          value.z = fStack_12;
          value.x = (float)(undefined4)uStack_11;
          value.y = (float)uStack_11._4_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar5,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController_Update
               (GamePointGainEffectCountController *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  this_00 = (this->fields).textEffectCurve;
  if (this_00 != (AnimationCurve *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
              (this_00,fVar1 - (this->fields).textEffectStartTime,(MethodInfo *)0x0);
    pTVar2 = (this->fields).gamePointAmount;
    if (pTVar2 != (Text *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pTVar2,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                           ((Vector3 *)&stack0xffffffd4,pTVar3,(MethodInfo *)0x0);
        fVar1 = pVVar4->z;
        func_?();
        pTVar2 = (this->fields).gamePointAmount;
        if (pTVar2 != (Text *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pTVar2,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            value.y = 0.0;
            value.z = 0.0;
            value.x = fVar1;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar3,value,(MethodInfo *)0x0);
            GamePointGainEffectCountController_HandleSlideState(this,(MethodInfo *)0x0);
            return;
          }
        }
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
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  this_00 = (this->fields).textEffectCurve;
  if (this_00 != (AnimationCurve *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
              (this_00,fVar1 - (this->fields).textEffectStartTime,(MethodInfo *)0x0);
    pTVar2 = (this->fields).gamePointAmount;
    if (pTVar2 != (Text *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pTVar2,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                           ((Vector3 *)&stack0xffffffd4,pTVar3,(MethodInfo *)0x0);
        fVar1 = pVVar4->z;
        func_?();
        pTVar2 = (this->fields).gamePointAmount;
        if (pTVar2 != (Text *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pTVar2,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            value.y = 0.0;
            value.z = 0.0;
            value.x = fVar1;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar3,value,(MethodInfo *)0x0);
            return;
          }
        }
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
  piVar1 = &(this->fields).currentGamePointAmountDisplayed;
  pTVar2 = (this->fields).gamePointAmount;
  *piVar1 = updateToValue;
  uVar3 = func_?(piVar1,0);
  if (pTVar2 != (Text *)0x0) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,uVar3,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* GamePointGainEffectCountController() */

void Assembly-CSharp.dll::GamePointGainEffectCountController::
     GamePointGainEffectCountController__ctor
               (GamePointGainEffectCountController *this,MethodInfo *method)

{
  (this->fields).currentSlideState = 1;
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

