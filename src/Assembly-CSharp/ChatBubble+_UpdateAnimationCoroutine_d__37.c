
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ChatBubble+<UpdateAnimationCoroutine>d__37::ChatBubble_UpdateAnimationCoroutine_d_37_MoveNext(ChatBubble_UpdateAnimationCoroutine_d_37 *this,MethodInfo *method)

{
  this_00 = (this->fields).__4__this;
  iVar1 = (this->fields).__1__state;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 == (ChatBubble *)0x0) goto code_?;
    pRVar2 = (this_00->fields).AnimationContainer;
    if ((this_00->fields).targetActivation == 0) {
      if (pRVar2 == (RectTransform *)0x0) goto code_?;
      VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition(pRVar2,(MethodInfo *)0x0);
      fStackX_c = VVar3.y;
    }
    else {
      if (pRVar2 == (RectTransform *)0x0) goto code_?;
      VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition(pRVar2,(MethodInfo *)0x0);
      fStackX_c = VVar3.y;
      fStackX_c = fStackX_c - 25.0;
    }
    (this->fields)._startYPosition_5__2 = fStackX_c;
    if ((this_00->fields).targetActivation == 0) {
      fVar4 = -25.0;
    }
    else {
      fVar4 = 0.0;
    }
    (this->fields)._targetYPosition_5__3 = fVar4;
    fVar4 = ABS(fVar4 - (this->fields)._startYPosition_5__2) / 25.0;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    (this->fields)._currentTime_5__5 = 0.0;
    (this->fields)._animationTime_5__4 = fVar4 * 0.25;
    fVar5 = (this->fields)._currentTime_5__5;
    fVar4 = (this->fields)._animationTime_5__4;
code_?:
    if (fVar5 < fVar4) {
      ChatBubble::ChatBubble_UpdateAnimationState(this_00,(this->fields)._currentTime_5__5,(this->fields)._animationTime_5__4,(this->fields)._startYPosition_5__2,(this->fields)._targetYPosition_5__3,(MethodInfo *)0x0);
      fVar4 = (this->fields)._currentTime_5__5;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      bVar6 = iRam_? != 0;
      (this->fields).__2__current = (Object *)0x0;
      (this->fields)._currentTime_5__5 = fVar5 + fVar4;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      (this->fields).__1__state = 1;
      return 1;
    }
    if ((this_00->fields).targetActivation == 0) {
      return 0;
    }
    pSVar11 = (this_00->fields).MessageValue;
    if (pSVar11 == (String *)0x0) goto code_?;
    iVar1 = (pSVar11->fields)._stringLength;
    (this->fields)._currentTime_5__5 = 0.0;
    (this->fields)._showingTime_5__6 = (float)iVar1 / 30.0 + 5.0;
    fVar4 = (this->fields)._currentTime_5__5;
    fVar5 = (this->fields)._showingTime_5__6;
code_?:
    if (fVar4 < fVar5) {
      fVar4 = ChatBubble::ChatBubble_GetDistanceAlpha(this_00,(MethodInfo *)0x0);
      pCVar12 = (this_00->fields).CanvasGroup;
      if (pCVar12 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar12,fVar4,(MethodInfo *)0x0);
        fVar4 = (this->fields)._currentTime_5__5;
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
        bVar6 = iRam_? != 0;
        (this->fields).__2__current = (Object *)0x0;
        (this->fields)._currentTime_5__5 = fVar5 + fVar4;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar9 == *puVar10;
            if (bVar6) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        (this->fields).__1__state = 2;
        return 1;
      }
      goto code_?;
    }
    pRVar2 = (this_00->fields).AnimationContainer;
    (this_00->fields).targetActivation = 0;
    if (pRVar2 == (RectTransform *)0x0) goto code_?;
    VVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition(pRVar2,(MethodInfo *)0x0);
    fStackX_c = VVar3.y;
    (this->fields)._startYPosition_5__2 = fStackX_c;
    (this->fields)._currentTime_5__5 = 0.0;
    fVar5 = (this->fields)._currentTime_5__5;
    (this->fields)._targetYPosition_5__3 = -25.0;
    fVar4 = (ABS(-25.0 - fStackX_c) / 25.0) * 0.25;
    (this->fields)._animationTime_5__4 = fVar4;
  }
  else {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      fVar5 = (this->fields)._currentTime_5__5;
      fVar4 = (this->fields)._animationTime_5__4;
      if (this_00 == (ChatBubble *)0x0) goto code_?;
      goto code_?;
    }
    if (iVar1 == 2) {
      (this->fields).__1__state = -1;
      fVar4 = (this->fields)._currentTime_5__5;
      fVar5 = (this->fields)._showingTime_5__6;
      if (this_00 == (ChatBubble *)0x0) goto code_?;
      goto code_?;
    }
    if (iVar1 != 3) {
      return 0;
    }
    (this->fields).__1__state = -1;
    fVar5 = (this->fields)._currentTime_5__5;
    fVar4 = (this->fields)._animationTime_5__4;
    if (this_00 == (ChatBubble *)0x0) goto code_?;
  }
  if (fVar5 < fVar4) {
    ChatBubble::ChatBubble_UpdateAnimationState(this_00,(this->fields)._currentTime_5__5,(this->fields)._animationTime_5__4,(this->fields)._startYPosition_5__2,(this->fields)._targetYPosition_5__3,(MethodInfo *)0x0);
    fVar4 = (this->fields)._currentTime_5__5;
    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (this->fields).__2__current = (Object *)0x0;
    (this->fields)._currentTime_5__5 = fVar5 + fVar4;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar9 == *puVar10;
        if (bVar6) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    (this->fields).__1__state = 3;
    return 1;
  }
  pCVar12 = (this_00->fields).CanvasGroup;
  if (pCVar12 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar12,0.0,(MethodInfo *)0x0);
    return 0;
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::ChatBubble+<UpdateAnimationCoroutine>d__37::ChatBubble_UpdateAnimationCoroutine_d_37_System_Collections_IEnumerator_Reset(ChatBubble_UpdateAnimationCoroutine_d_37 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__ChatBubble___UpdateAnimationCoroutine_d__37__System_Collections_IEnumerator_Reset__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

