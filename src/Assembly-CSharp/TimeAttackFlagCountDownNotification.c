
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TimeAttackFlagCountDownNotification::
     TimeAttackFlagCountDownNotification_Initialize
               (TimeAttackFlagCountDownNotification *this,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TimeAttackFlagCountDownNotification__DestroyNotification__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).countDownFader;
  (this->fields)._.timeSinceStart = 0.0;
  if (pNVar1 != (NotificationFade *)0x0) {
    this_00 = (pNVar1->fields).group;
    (pNVar1->fields).playing = 1;
    (pNVar1->fields).pauseAt = (pNVar1->fields).duration;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      (pNVar1->fields).currentTime = 0.0;
      pNVar1 = (this->fields).countDownFader;
      if (pNVar1 != (NotificationFade *)0x0) {
        pAVar2 = (pNVar1->fields).OnFinished;
        this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_01,(Object *)this,
                   MethodInfo__TimeAttackFlagCountDownNotification__DestroyNotification__,
                   (MethodInfo *)0x0);
        pAVar2 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pAVar2 == (Action *)0x0) {
          (pNVar1->fields).OnFinished = (Action *)0x0;
        }
        else {
          pAVar3 = (Action *)0x0;
          if (pAVar2->klass == TypeInfo__System__Action) {
            pAVar3 = pAVar2;
          }
          if (pAVar3 == (Action *)0x0) {
            FUN_?(pAVar2);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (pNVar1->fields).OnFinished = pAVar3;
          pAVar3 = (Action *)0x0;
          if (pAVar2->klass == TypeInfo__System__Action) {
            pAVar3 = pAVar2;
          }
          if (pAVar3 == (Action *)0x0) {
            FUN_?(pAVar2);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&(pNVar1->fields).OnFinished >> 0xc);
          uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
          do {
            uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
            puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        fVar11 = (float)(*pcRam_?)();
        (this->fields).countDownStartTime = fVar11;
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TimeAttackFlagCountDownNotification::
     TimeAttackFlagCountDownNotification_Update
               (TimeAttackFlagCountDownNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_GO_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).countDownStartTime;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar1 = fVar1 + _UNK_?;
  fVar4 = (float)(*pcRam_?)();
  pTVar5 = (this->fields).countdownText;
  fVar1 = fVar1 - fVar4;
  iVar6 = FUN_?(fVar1);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_7[0]._pointer._value = (void *)0x0;
  aRStack_7[0]._length = 0;
  aRStack_7[0]._12_4_ = 0;
  pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                     (iVar6 + 1,aRStack_7,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  if (pTVar5 != (Text *)0x0) {
    (*(pTVar5->klass->vtable).set_text.methodPtr)
              (pTVar5,pSVar8,(pTVar5->klass->vtable).set_text.method);
    if (0.0 <= fVar1) {
code_?:
      Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
      (this->fields)._.timeSinceStart = 0.0;
      return;
    }
    pTVar5 = (this->fields).countdownText;
    if (pTVar5 != (Text *)0x0) {
      (*(pTVar5->klass->vtable).set_text.methodPtr)
                (pTVar5,StringLiteral_GO_,(pTVar5->klass->vtable).set_text.method);
      pNVar9 = (this->fields).countDownFader;
      if (pNVar9 != (NotificationFade *)0x0) {
        if ((pNVar9->fields).pauseAt != (pNVar9->fields).duration) {
          (pNVar9->fields).currentTime = (pNVar9->fields).pauseAt;
          (pNVar9->fields).pauseAt = (pNVar9->fields).duration;
        }
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

