
/* Void FadeIn() */

void Assembly-CSharp.dll::FirstTimeEventMessage::FirstTimeEventMessage_FadeIn
               (FirstTimeEventMessage *this,MethodInfo *method)

{
  pFVar1 = (this->fields).fader;
  if (pFVar1 != (FirstTimeFadeHandler *)0x0) {
    this_00 = (pFVar1->fields).canvasGroup;
    (pFVar1->fields).fadingIn = 1;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      (pFVar1->fields).currentFadeInTime = 0.0;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void FadeOut(Action`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::FirstTimeEventMessage::FirstTimeEventMessage_FadeOut
               (FirstTimeEventMessage *this,Action_1_UnityEngine_GameObject_ *onFinished,
               MethodInfo *method)

{
  pFVar1 = (this->fields).fader;
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pFVar1 == (FirstTimeFadeHandler *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::GameObject>,onFinished,pGVar2,0,unaff_RDI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (pFVar1->fields).canvasGroup;
  (pFVar1->fields).currentFadeOutTime = (pFVar1->fields).fadeOutTime;
  (pFVar1->fields).fadingOut = 1;
  if (this_00 == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
            (this_00,_UNK_?,(MethodInfo *)0x0);
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)(pFVar1->fields).finishedAction,(Delegate *)onFinished,
                      (MethodInfo *)0x0);
  pAVar5 = TypeInfo__System__Action<UnityEngine::GameObject>;
  if (pDVar4 == (Delegate *)0x0) {
    (pFVar1->fields).finishedAction = (Action_1_UnityEngine_GameObject_ *)0x0;
  }
  else {
    pAVar6 = (Action_1_UnityEngine_GameObject_ *)
             FUN_?(pDVar4,TypeInfo__System__Action<UnityEngine::GameObject>);
    if (pAVar6 == (Action_1_UnityEngine_GameObject_ *)0x0) {
      FUN_?(pDVar4,pAVar5);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pFVar1->fields).finishedAction = pAVar6;
    pAVar5 = TypeInfo__System__Action<UnityEngine::GameObject>;
    lVar7 = FUN_?(pDVar4,TypeInfo__System__Action<UnityEngine::GameObject>);
    if (lVar7 == 0) {
      FUN_?(pDVar4,pAVar5);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&(pFVar1->fields).finishedAction >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar12 = uVar10 == *puVar11;
      if (bVar12) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar12);
  }
  iVar13 = iRam_?;
  (pFVar1->fields).targetGameObject = pGVar2;
  if (iVar13 != 0) {
    uVar8 = (uint)((ulonglong)&(pFVar1->fields).targetGameObject >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar12 = uVar10 == *puVar11;
      if (bVar12) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar12);
  }
  return;
}

