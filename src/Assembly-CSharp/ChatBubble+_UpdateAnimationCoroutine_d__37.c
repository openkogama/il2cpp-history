
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ChatBubble+<UpdateAnimationCoroutine>d__37::
     ChatBubble_UpdateAnimationCoroutine_d_37_MoveNext
               (ChatBubble_UpdateAnimationCoroutine_d_37 *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  this_00 = (this->fields).__4__this;
  iVar2 = (this->fields).__1__state;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 == (ChatBubble *)0x0) goto code_?;
    pRVar3 = (this_00->fields).AnimationContainer;
    if ((this_00->fields).targetActivation == 0) {
      if (pRVar3 == (RectTransform *)0x0) goto code_?;
      VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_get_anchoredPosition(pRVar3,(MethodInfo *)0x0);
      fStackX_c = VVar4.y;
    }
    else {
      if (pRVar3 == (RectTransform *)0x0) goto code_?;
      VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_get_anchoredPosition(pRVar3,(MethodInfo *)0x0);
      fStackX_c = VVar4.y;
      fStackX_c = fStackX_c - _UNK_?;
    }
    (this->fields)._startYPosition_5__2 = fStackX_c;
    fVar5 = fVar1;
    if ((this_00->fields).targetActivation != 0) {
      fVar5 = 0.0;
    }
    (this->fields)._targetYPosition_5__3 = fVar5;
    fVar5 = (float)((uint)(fVar5 - (this->fields)._startYPosition_5__2) & _UNK_?) /
             _UNK_?;
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    else if (_UNK_? < fVar5) {
      fVar5 = _UNK_?;
    }
    fVar5 = fVar5 * _UNK_?;
    (this->fields)._currentTime_5__5 = 0.0;
    (this->fields)._animationTime_5__4 = fVar5;
    fVar6 = (this->fields)._currentTime_5__5;
    fVar5 = (this->fields)._animationTime_5__4;
code_?:
    if (fVar6 < fVar5) {
      ChatBubble::ChatBubble_UpdateAnimationState
                (this_00,(this->fields)._currentTime_5__5,(this->fields)._animationTime_5__4,
                 (this->fields)._startYPosition_5__2,(this->fields)._targetYPosition_5__3,
                 (MethodInfo *)0x0);
      fVar1 = (this->fields)._currentTime_5__5;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      bVar7 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      (this->fields)._currentTime_5__5 = fVar5 + fVar1;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      (this->fields).__1__state = 1;
      return 1;
    }
    if ((this_00->fields).targetActivation == 0) {
      return 0;
    }
    pSVar12 = (this_00->fields).MessageValue;
    if (pSVar12 == (String *)0x0) goto code_?;
    iVar2 = (pSVar12->fields)._stringLength;
    (this->fields)._currentTime_5__5 = 0.0;
    (this->fields)._showingTime_5__6 = (float)iVar2 / _UNK_? + _UNK_?;
    fVar5 = (this->fields)._currentTime_5__5;
    fVar6 = (this->fields)._showingTime_5__6;
code_?:
    if (fVar5 < fVar6) {
      fVar1 = ChatBubble::ChatBubble_GetDistanceAlpha(this_00,(MethodInfo *)0x0);
      pCVar13 = (this_00->fields).CanvasGroup;
      if (pCVar13 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar13,fVar1,(MethodInfo *)0x0);
        fVar1 = (this->fields)._currentTime_5__5;
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        bVar7 = iRam_? != 0;
        (this->fields).__2__current = (Object *)0x0;
        (this->fields)._currentTime_5__5 = fVar5 + fVar1;
        if (bVar7) {
          uVar8 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        (this->fields).__1__state = 2;
        return 1;
      }
      goto code_?;
    }
    pRVar3 = (this_00->fields).AnimationContainer;
    (this_00->fields).targetActivation = 0;
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    VVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_get_anchoredPosition(pRVar3,(MethodInfo *)0x0);
    fStackX_c = VVar4.y;
    (this->fields)._startYPosition_5__2 = fStackX_c;
    (this->fields)._currentTime_5__5 = 0.0;
    fVar5 = (this->fields)._currentTime_5__5;
    (this->fields)._targetYPosition_5__3 = -25.0;
    fVar1 = ((float)((uint)(fVar1 - fStackX_c) & _UNK_?) / _UNK_?) *
             _UNK_?;
    (this->fields)._animationTime_5__4 = fVar1;
  }
  else {
    if (iVar2 == 1) {
      (this->fields).__1__state = -1;
      fVar6 = (this->fields)._currentTime_5__5;
      fVar5 = (this->fields)._animationTime_5__4;
      if (this_00 == (ChatBubble *)0x0) goto code_?;
      goto code_?;
    }
    if (iVar2 == 2) {
      (this->fields).__1__state = -1;
      fVar5 = (this->fields)._currentTime_5__5;
      fVar6 = (this->fields)._showingTime_5__6;
      if (this_00 == (ChatBubble *)0x0) goto code_?;
      goto code_?;
    }
    if (iVar2 != 3) {
      return 0;
    }
    (this->fields).__1__state = -1;
    fVar5 = (this->fields)._currentTime_5__5;
    fVar1 = (this->fields)._animationTime_5__4;
    if (this_00 == (ChatBubble *)0x0) goto code_?;
  }
  if (fVar5 < fVar1) {
    ChatBubble::ChatBubble_UpdateAnimationState
              (this_00,(this->fields)._currentTime_5__5,(this->fields)._animationTime_5__4,
               (this->fields)._startYPosition_5__2,(this->fields)._targetYPosition_5__3,
               (MethodInfo *)0x0);
    fVar1 = (this->fields)._currentTime_5__5;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    bVar7 = iRam_? != 0;
    (this->fields).__2__current = (Object *)0x0;
    (this->fields)._currentTime_5__5 = fVar5 + fVar1;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    (this->fields).__1__state = 3;
    return 1;
  }
  pCVar13 = (this_00->fields).CanvasGroup;
  if (pCVar13 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar13,0.0,(MethodInfo *)0x0);
    return 0;
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  bVar15 = (*pcVar14)();
  return bVar15;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::ChatBubble+<UpdateAnimationCoroutine>d__37::
     ChatBubble_UpdateAnimationCoroutine_d_37_System_Collections_IEnumerator_Reset
               (ChatBubble_UpdateAnimationCoroutine_d_37 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__ChatBubble___UpdateAnimationCoroutine_d__37__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

