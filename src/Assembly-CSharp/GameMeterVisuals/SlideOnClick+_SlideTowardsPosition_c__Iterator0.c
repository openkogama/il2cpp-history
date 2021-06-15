
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick+<SlideTowardsPosition>c__Iterator0::
     SlideOnClick_SlideTowardsPosition_c_Iterator0_MoveNext
               (SlideOnClick_SlideTowardsPosition_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  fVar2 = 0.0;
  switch(iVar1) {
  case 0:
    goto code_?;
  case 1:
    break;
  case 2:
    fVar2 = (this->fields)._i___2;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar3 = fVar3 + fVar2;
    goto code_?;
  case 3:
    goto code_?;
  case 4:
    fStack_4 = (this->fields)._i___3;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    pSVar5 = (this->fields)._this;
    if (pSVar5 == (SlideOnClick *)0x0) goto code_?;
    fVar2 = (pSVar5->fields).lerpSpeed * fVar2 + fStack_4;
    goto code_?;
  default:
    goto code_?;
  }
  fStack_4 = (this->fields)._i___1;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  pSVar5 = (this->fields)._this;
  if (pSVar5 == (SlideOnClick *)0x0) goto code_?;
  fVar2 = (pSVar5->fields).lerpSpeed * fVar2 + fStack_4;
code_?:
  (this->fields)._i___1 = fVar2;
  pSVar5 = (this->fields)._this;
  if (_UNK_? <= fVar2) {
    if (pSVar5 != (SlideOnClick *)0x0) {
      pRVar6 = (pSVar5->fields).rectTransform;
      VVar7 = (pSVar5->fields).targetPos;
      if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
        func_?();
      }
      VVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                        (VVar7,(MethodInfo *)0x0);
      if (pRVar6 != (RectTransform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                  (pRVar6,VVar8,(MethodInfo *)0x0);
        fVar3 = 0.0;
code_?:
        (this->fields)._i___2 = fVar3;
        pSVar5 = (this->fields)._this;
        if (pSVar5 != (SlideOnClick *)0x0) {
          fVar2 = (pSVar5->fields).waitBeforeMoveBack;
          pfVar9 = &(this->fields)._i___2;
          if (*pfVar9 <= fVar2 && fVar2 != *pfVar9) {
            (this->fields)._current = (Object *)0x0;
            if ((this->fields)._disposing != 0) {
              return 1;
            }
            (this->fields)._PC = 2;
            return 1;
          }
code_?:
          fVar2 = 0.0;
          pSVar5 = (this->fields)._this;
          if (pSVar5 != (SlideOnClick *)0x0) {
            if ((pSVar5->fields).holding != 0) {
              (this->fields)._current = (Object *)0x0;
              if ((this->fields)._disposing != 0) {
                return 1;
              }
              (this->fields)._PC = 3;
              return 1;
            }
code_?:
            (this->fields)._i___3 = fVar2;
            pSVar5 = (this->fields)._this;
            if (_UNK_? <= fVar2) {
              if (pSVar5 != (SlideOnClick *)0x0) {
                pRVar6 = (pSVar5->fields).rectTransform;
                VVar7 = (pSVar5->fields).startPos;
                if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Vector2);
                }
                VVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                                  (VVar7,(MethodInfo *)0x0);
                if (pRVar6 != (RectTransform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_set_anchoredPosition(pRVar6,VVar8,(MethodInfo *)0x0);
                  pSVar5 = (this->fields)._this;
                  if (pSVar5 != (SlideOnClick *)0x0) {
                    (pSVar5->fields).readyForSlide = 1;
                    (this->fields)._PC = -1;
code_?:
                    return 0;
                  }
                }
              }
            }
            else if (pSVar5 != (SlideOnClick *)0x0) {
              VStack_10.y = (pSVar5->fields).startPos.x;
              VStack_10.z = (pSVar5->fields).startPos.y;
              pRVar6 = (pSVar5->fields).rectTransform;
              VVar7 = (pSVar5->fields).targetPos;
              fStack_4 = (pSVar5->fields).startPos.z;
              fVar2 = (this->fields)._i___3;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Vector3);
              }
              b.z = fStack_4;
              b.x = VStack_10.y;
              b.y = VStack_10.z;
              pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                                 (&VStack_10,VVar7,b,fVar2,(MethodInfo *)0x0);
              VVar7 = *pVVar11;
              if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Vector2);
              }
              VVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                                (VVar7,(MethodInfo *)0x0);
              if (pRVar6 != (RectTransform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_set_anchoredPosition(pRVar6,VVar8,(MethodInfo *)0x0);
                (this->fields)._current = (Object *)0x0;
                if ((this->fields)._disposing != 0) {
                  return 1;
                }
                (this->fields)._PC = 4;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  else if (pSVar5 != (SlideOnClick *)0x0) {
    VStack_10.y = (pSVar5->fields).startPos.x;
    VStack_10.z = (pSVar5->fields).startPos.y;
    uVar12 = (pSVar5->fields).targetPos.x;
    uVar13 = (pSVar5->fields).targetPos.y;
    VVar7.y = (float)uVar13;
    VVar7.x = (float)uVar12;
    pRVar6 = (pSVar5->fields).rectTransform;
    fVar3 = (pSVar5->fields).startPos.z;
    fStack_4 = (pSVar5->fields).targetPos.z;
    fVar2 = (this->fields)._i___1;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = fVar3;
    a.x = VStack_10.y;
    a.y = VStack_10.z;
    VVar7.z = fStack_4;
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                       (&VStack_10,a,VVar7,fVar2,(MethodInfo *)0x0);
    VVar7 = *pVVar11;
    if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector2);
    }
    VVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Implicit
                      (VVar7,(MethodInfo *)0x0);
    if (pRVar6 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                (pRVar6,VVar8,(MethodInfo *)0x0);
      (this->fields)._current = (Object *)0x0;
      if ((this->fields)._disposing != 0) {
        return 1;
      }
      (this->fields)._PC = 1;
      return 1;
    }
  }
code_?:
  func_?(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void Reset() */

void Assembly-CSharp.dll::GameMeterVisuals::SlideOnClick+<SlideTowardsPosition>c__Iterator0::
     SlideOnClick_SlideTowardsPosition_c_Iterator0_Reset
               (SlideOnClick_SlideTowardsPosition_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

