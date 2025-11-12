
/* Void Activate(String) */

void Assembly-CSharp.dll::GamePassesTextBubble::GamePassesTextBubble_Activate
               (GamePassesTextBubble *this,String *textBubbleText,MethodInfo *method)

{
  pNVar1 = (this->fields).fader;
  if (pNVar1 != (NotificationFade *)0x0) {
    this_00 = (pNVar1->fields).group;
    (pNVar1->fields).playing = 1;
    (pNVar1->fields).pauseAt = (pNVar1->fields).duration;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      (pNVar1->fields).currentTime = 0.0;
      pTVar2 = (this->fields).text;
      if (pTVar2 != (Text *)0x0) {
        (*(pTVar2->klass->vtable).set_text.methodPtr)
                  (pTVar2,textBubbleText,(pTVar2->klass->vtable).set_text.method);
        (this->fields).isActive = 1;
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GamePassesTextBubble::GamePassesTextBubble_OnDestroy
               (GamePassesTextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesTextBubble__OnFaderDone__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).fader;
  if (pNVar1 == (NotificationFade *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar3 = (pNVar1->fields).OnFinished;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__GamePassesTextBubble__OnFaderDone__,
             (MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar3 == (Action *)0x0) {
    (pNVar1->fields).OnFinished = (Action *)0x0;
  }
  else {
    pAVar4 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?(pAVar3,TypeInfo__System__Action);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (pNVar1->fields).OnFinished = pAVar4;
    pAVar4 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&(pNVar1->fields).OnFinished >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return;
}


/* Void OnFaderDone() */

void Assembly-CSharp.dll::GamePassesTextBubble::GamePassesTextBubble_OnFaderDone
               (GamePassesTextBubble *this,MethodInfo *method)

{
  (this->fields).isActive = 0;
  if ((this->fields).deactivateAfterFade == 0) {
    return;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GamePassesTextBubble::GamePassesTextBubble_Start
               (GamePassesTextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GamePassesTextBubble__OnFaderDone__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).fader;
  if (pNVar1 == (NotificationFade *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar3 = (pNVar1->fields).OnFinished;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__GamePassesTextBubble__OnFaderDone__,
             (MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar3 == (Action *)0x0) {
    (pNVar1->fields).OnFinished = (Action *)0x0;
  }
  else {
    pAVar4 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?(pAVar3,TypeInfo__System__Action);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (pNVar1->fields).OnFinished = pAVar4;
    pAVar4 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    if (pAVar4 == (Action *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&(pNVar1->fields).OnFinished >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return;
}

