
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_Initialize
               (TimeAttackFlagDebriefingNotification *this,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TimeAttackFlagDebriefingNotification__StartCountDown__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (Action *)0x0;
  (this->fields)._.timeSinceStart = 0.0;
  auStackX_8[0] = 4;
  pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar2 != (Object *)0x0)) {
    if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar4 = (this->fields).timeText;
    pSVar5 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                       (*(int32_t *)&pOVar2[1].klass,
                        (GameStatCounterType__Enum)
                        CONCAT71((int7)((ulonglong)lRam_? >> 8),8),(MethodInfo *)0x0);
    if (pTVar4 != (Text *)0x0) {
      (*(pTVar4->klass->vtable).set_text.methodPtr)
                (pTVar4,pSVar5,(pTVar4->klass->vtable).set_text.method);
      pTVar4 = (this->fields).descriptionText;
      auStackX_8[0] = 1;
      pOVar2 = (Object *)FUN_?(uRam_?,auStackX_8);
      pAVar6 = (Action *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pTVar4 != (Text *)0x0) {
        if (pAVar6 != (Action *)0x0) {
          pAVar7 = pAVar1;
          if (pAVar6->klass == pARam0000000182dc50c0) {
            pAVar7 = pAVar6;
          }
          if (pAVar7 == (Action *)0x0) {
            FUN_?(pAVar6,pARam0000000182dc50c0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        (*(pTVar4->klass->vtable).set_text.methodPtr)(pTVar4);
        pNVar8 = (this->fields).debriefingFader;
        if (pNVar8 != (NotificationFade *)0x0) {
          this_00 = (pNVar8->fields).group;
          (pNVar8->fields).playing = 1;
          (pNVar8->fields).pauseAt = (pNVar8->fields).duration;
          if (this_00 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (this_00,0.0,(MethodInfo *)0x0);
            (pNVar8->fields).currentTime = 0.0;
            pNVar8 = (this->fields).debriefingFader;
            if (pNVar8 != (NotificationFade *)0x0) {
              (pNVar8->fields).pauseAt = 3.0;
              pNVar8 = (this->fields).debriefingFader;
              if (pNVar8 != (NotificationFade *)0x0) {
                pAVar6 = (pNVar8->fields).OnFinished;
                this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (this_01,(Object *)this,
                           MethodInfo__TimeAttackFlagDebriefingNotification__StartCountDown__,
                           (MethodInfo *)0x0);
                pAVar6 = (Action *)
                         mscorlib.dll::System::Delegate::Delegate_Combine
                                   ((Delegate *)pAVar6,(Delegate *)this_01,(MethodInfo *)0x0);
                if (pAVar6 == (Action *)0x0) {
                  (pNVar8->fields).OnFinished = (Action *)0x0;
                }
                else {
                  pAVar7 = pAVar1;
                  if (pAVar6->klass == TypeInfo__System__Action) {
                    pAVar7 = pAVar6;
                  }
                  if (pAVar7 == (Action *)0x0) {
                    FUN_?(pAVar6);
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  (pNVar8->fields).OnFinished = pAVar7;
                  if (pAVar6->klass == TypeInfo__System__Action) {
                    pAVar1 = pAVar6;
                  }
                  if (pAVar1 == (Action *)0x0) {
                    FUN_?(pAVar6);
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar9 = (uint)((ulonglong)&(pNVar8->fields).OnFinished >> 0xc);
                  uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
                  do {
                    uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
                    puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
                    LOCK();
                    bVar13 = uVar11 == *puVar12;
                    if (bVar13) {
                      *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar13);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_OnDestroy
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar2 == (MVGameControllerBase *)0x0) ||
       (pFVar3 = (pMVar2->fields).flagDebriefingControl, pFVar3 == (FlagDebriefingControl *)0x0)) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pAVar5 = (pFVar3->fields).OnFlagDebriefingEnd;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__TimeAttackFlagDebriefingNotification__OnTimeFlagDebriefingEnd__,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar5 == (Action *)0x0) {
      (pFVar3->fields).OnFlagDebriefingEnd = (Action *)0x0;
    }
    else {
      pAVar6 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar5;
      }
      if (pAVar6 == (Action *)0x0) {
        FUN_?(pAVar5,TypeInfo__System__Action);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (pFVar3->fields).OnFlagDebriefingEnd = pAVar6;
      pAVar6 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar5;
      }
      if (pAVar6 == (Action *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(pFVar3->fields).OnFlagDebriefingEnd >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
  }
  return;
}


/* Void OnTimeFlagDebriefingEnd() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_OnTimeFlagDebriefingEnd
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

{
  pNVar1 = (this->fields).debriefingFader;
  if (pNVar1 == (NotificationFade *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pNVar1->fields).pauseAt != (pNVar1->fields).duration) {
    (pNVar1->fields).currentTime = (pNVar1->fields).pauseAt;
    (pNVar1->fields).pauseAt = (pNVar1->fields).duration;
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_Start
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TimeAttackFlagDebriefingNotification__OnTimeFlagDebriefingEnd__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (pFVar2 = (pMVar1->fields).flagDebriefingControl, pFVar2 == (FlagDebriefingControl *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pAVar4 = (pFVar2->fields).OnFlagDebriefingEnd;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__TimeAttackFlagDebriefingNotification__OnTimeFlagDebriefingEnd__,
             (MethodInfo *)0x0);
  pAVar4 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar4 == (Action *)0x0) {
    (pFVar2->fields).OnFlagDebriefingEnd = (Action *)0x0;
  }
  else {
    pAVar5 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar4;
    }
    if (pAVar5 == (Action *)0x0) {
      FUN_?(pAVar4,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pFVar2->fields).OnFlagDebriefingEnd = pAVar5;
    pAVar5 = (Action *)0x0;
    if (pAVar4->klass == TypeInfo__System__Action) {
      pAVar5 = pAVar4;
    }
    if (pAVar5 == (Action *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(pFVar2->fields).OnFlagDebriefingEnd >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}


/* Void StartCountDown() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_StartCountDown
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__TimeAttackFlagDebriefingNotification__DestroyNotification__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).countDownFader;
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
                   MethodInfo__TimeAttackFlagDebriefingNotification__DestroyNotification__,
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

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_Update
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

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

