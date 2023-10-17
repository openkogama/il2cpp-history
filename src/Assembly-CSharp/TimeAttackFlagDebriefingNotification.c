
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_Initialize
               (TimeAttackFlagDebriefingNotification *this,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    func_?(&MethodInfo__TimeAttackFlagDebriefingNotification__StartCountDown__);
    cRam_? = '\x01';
  }
  object = this;
  this = (TimeAttackFlagDebriefingNotification *)CONCAT13(4,this._0_3_);
  (object->fields)._.timeSinceStart = 0.0;
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  this_01 = data;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar3 = (int32_t *)func_?(pOVar1);
      pTVar4 = (object->fields).timeText;
      pSVar5 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                         (*piVar3,GameStatCounterType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
      if (pTVar4 != (Text *)0x0) {
        (*(pTVar4->klass->vtable).set_text.methodPtr)
                  (pTVar4,pSVar5,(pTVar4->klass->vtable).set_text.method);
        pTVar4 = (object->fields).descriptionText;
        pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,pOVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar2 = CONCAT44(TypeInfo__System__String,pOVar1);
        if (pTVar4 != (Text *)0x0) {
          pOVar6 = (Object *)0x0;
          if (pOVar1 != (Object *)0x0) {
            if ((String__Class *)pOVar1->klass == TypeInfo__System__String) {
              pOVar6 = pOVar1;
            }
            if (pOVar6 == (Object *)0x0) goto code_?;
          }
          (*(pTVar4->klass->vtable).set_text.methodPtr)
                    (pTVar4,pOVar6,(pTVar4->klass->vtable).set_text.method);
          pNVar7 = (object->fields).debriefingFader;
          if (pNVar7 != (NotificationFade *)0x0) {
            (pNVar7->fields).pauseAt = (pNVar7->fields).duration;
            this_00 = (pNVar7->fields).group;
            (pNVar7->fields).playing = 1;
            if (this_00 != (CanvasGroup *)0x0) {
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (this_00,0.0,(MethodInfo *)0x0);
              (pNVar7->fields).currentTime = 0.0;
              pNVar7 = (object->fields).debriefingFader;
              if (pNVar7 != (NotificationFade *)0x0) {
                (pNVar7->fields).pauseAt = 3.0;
                pNVar7 = (object->fields).debriefingFader;
                if (pNVar7 != (NotificationFade *)0x0) {
                  data = (Dictionary_2_System_Object_System_Object_ *)(pNVar7->fields).OnFinished;
                  this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
                  if (this_02 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
                    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                    NavMesh_OnNavMeshPreUpdate__ctor
                              (this_02,(Object *)object,
                               MethodInfo__TimeAttackFlagDebriefingNotification__StartCountDown__,
                               (MethodInfo *)0x0);
                    pAVar8 = (Action *)
                             mscorlib.dll::System::Delegate::Delegate_Combine
                                       ((Delegate *)data,(Delegate *)this_02,(MethodInfo *)0x0);
                    uVar2 = CONCAT44(TypeInfo__System__Action,pAVar8);
                    if (pAVar8 == (Action *)0x0) {
                      (pNVar7->fields).OnFinished = (Action *)0x0;
                      func_?(&(pNVar7->fields).OnFinished,0);
                      return;
                    }
                    pAVar9 = (Action *)0x0;
                    if (pAVar8->klass == TypeInfo__System__Action) {
                      pAVar9 = pAVar8;
                    }
                    if (pAVar9 != (Action *)0x0) {
                      (pNVar7->fields).OnFinished = pAVar9;
                      uVar2 = CONCAT44(TypeInfo__System__Action,pAVar8);
                      pAVar9 = (Action *)0x0;
                      if (pAVar8->klass == TypeInfo__System__Action) {
                        pAVar9 = pAVar8;
                      }
                      if (pAVar9 != (Action *)0x0) {
                        func_?(&(pNVar7->fields).OnFinished,pAVar9);
                        return;
                      }
                    }
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = func_?();
code_?:
  func_?(uVar2);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_OnDestroy
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__TimeAttackFlagDebriefingNotification__OnTimeFlagDebriefingEnd__);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pFVar2 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar2 != (FlagDebriefingControl *)0x0) {
    pAVar3 = (pFVar2->fields).OnFlagDebriefingEnd;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,
                 MethodInfo__TimeAttackFlagDebriefingNotification__OnTimeFlagDebriefingEnd__,
                 (MethodInfo *)0x0);
      pAVar3 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      uVar4 = CONCAT44(TypeInfo__System__Action,pAVar3);
      if (pAVar3 == (Action *)0x0) {
        (pFVar2->fields).OnFlagDebriefingEnd = (Action *)0x0;
        ppAStack5 = &(pFVar2->fields).OnFlagDebriefingEnd;
        pAStack6 = (Action *)0x0;
        func_?();
        return;
      }
      pAVar7 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar7 = pAVar3;
      }
      if (pAVar7 != (Action *)0x0) {
        (pFVar2->fields).OnFlagDebriefingEnd = pAVar7;
        uVar4 = CONCAT44(TypeInfo__System__Action,pAVar3);
        pAStack6 = (Action *)0x0;
        if (pAVar3->klass == TypeInfo__System__Action) {
          pAStack6 = pAVar3;
        }
        if (pAStack6 != (Action *)0x0) {
          ppAStack5 = &(pFVar2->fields).OnFlagDebriefingEnd;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar4 = func_?();
code_?:
  _ppAStack0000001c = uVar4;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnTimeFlagDebriefingEnd() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_OnTimeFlagDebriefingEnd
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pNVar2 = (this->fields).debriefingFader;
  if (pNVar2 != (NotificationFade *)0x0) {
    if ((pNVar2->fields).pauseAt != (pNVar2->fields).duration) {
      (pNVar2->fields).currentTime = (pNVar2->fields).pauseAt;
      (pNVar2->fields).pauseAt = (pNVar2->fields).duration;
    }
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_Start
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__TimeAttackFlagDebriefingNotification__OnTimeFlagDebriefingEnd__);
    cRam_? = '\x01';
  }
  pFVar1 = MVGameControllerBase::MVGameControllerBase_get_FlagDebriefingControl((MethodInfo *)0x0);
  if (pFVar1 != (FlagDebriefingControl *)0x0) {
    pAVar2 = (pFVar1->fields).OnFlagDebriefingEnd;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,
                 MethodInfo__TimeAttackFlagDebriefingNotification__OnTimeFlagDebriefingEnd__,
                 (MethodInfo *)0x0);
      pAVar2 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      uVar3 = CONCAT44(TypeInfo__System__Action,pAVar2);
      if (pAVar2 == (Action *)0x0) {
        (pFVar1->fields).OnFlagDebriefingEnd = (Action *)0x0;
        ppAStack4 = &(pFVar1->fields).OnFlagDebriefingEnd;
        pAStack5 = (Action *)0x0;
        func_?();
        return;
      }
      pAVar6 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar2;
      }
      if (pAVar6 != (Action *)0x0) {
        (pFVar1->fields).OnFlagDebriefingEnd = pAVar6;
        uVar3 = CONCAT44(TypeInfo__System__Action,pAVar2);
        pAStack5 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAStack5 = pAVar2;
        }
        if (pAStack5 != (Action *)0x0) {
          ppAStack4 = &(pFVar1->fields).OnFlagDebriefingEnd;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar3 = func_?();
code_?:
  _ppAStack00000018 = uVar3;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void StartCountDown() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_StartCountDown
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__TimeAttackFlagDebriefingNotification__DestroyNotification__);
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields).countDownFader;
  if (pNVar1 != (NotificationFade *)0x0) {
    (pNVar1->fields).pauseAt = (pNVar1->fields).duration;
    this_00 = (pNVar1->fields).group;
    (pNVar1->fields).playing = 1;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      (pNVar1->fields).currentTime = 0.0;
      pNVar1 = (this->fields).countDownFader;
      if (pNVar1 != (NotificationFade *)0x0) {
        pAVar2 = (pNVar1->fields).OnFinished;
        this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
        if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_01,(Object *)this,
                     MethodInfo__TimeAttackFlagDebriefingNotification__DestroyNotification__,
                     (MethodInfo *)0x0);
          pAVar2 = (Action *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pAVar2,(Delegate *)this_01,(MethodInfo *)0x0);
          uVar3 = CONCAT44(TypeInfo__System__Action,pAVar2);
          pAStack4 = (Action *)0x0;
          if (pAVar2 == (Action *)0x0) {
            (pNVar1->fields).OnFinished = (Action *)0x0;
code_?:
            ppAStack5 = &(pNVar1->fields).OnFinished;
            func_?();
            fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
            (this->fields).countDownStartTime = fVar6;
            return;
          }
          if (pAVar2->klass == TypeInfo__System__Action) {
            pAStack4 = pAVar2;
          }
          if (pAStack4 != (Action *)0x0) {
            (pNVar1->fields).OnFinished = pAStack4;
            uVar3 = CONCAT44(TypeInfo__System__Action,pAVar2);
            pAStack4 = (Action *)0x0;
            if (pAVar2->klass == TypeInfo__System__Action) {
              pAStack4 = pAVar2;
            }
            if (pAStack4 != (Action *)0x0) goto code_?;
          }
          goto code_?;
        }
      }
    }
  }
  uVar3 = func_?();
code_?:
  _ppAStack00000018 = uVar3;
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingNotification::
     TimeAttackFlagDebriefingNotification_Update
               (TimeAttackFlagDebriefingNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_GO_);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).countDownStartTime + _UNK_?;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pTVar3 = (this->fields).countdownText;
  fVar1 = fVar1 - fVar2;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  dStack_4 = (double)fVar1;
  fVar5 = (float10)func_?(dStack_4);
  IStack_6.m_value = (int)fVar5 + 1;
  mscorlib.dll::System::Int32::Int32_ToString(&IStack_6,(MethodInfo *)0x0);
  if (pTVar3 != (Text *)0x0) {
    (*(pTVar3->klass->vtable).set_text.methodPtr)();
    if (0.0 <= fVar1) {
code_?:
      dStack_4 = (double)((ulonglong)(uint)IStack_6.m_value << 0x20);
      Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
      (this->fields)._.timeSinceStart = 0.0;
      return;
    }
    pTVar3 = (this->fields).countdownText;
    if (pTVar3 != (Text *)0x0) {
      (*(pTVar3->klass->vtable).set_text.methodPtr)();
      pNVar7 = (this->fields).countDownFader;
      if (pNVar7 != (NotificationFade *)0x0) {
        if ((pNVar7->fields).pauseAt != (pNVar7->fields).duration) {
          (pNVar7->fields).currentTime = (pNVar7->fields).pauseAt;
          (pNVar7->fields).pauseAt = (pNVar7->fields).duration;
        }
        goto code_?;
      }
    }
  }
  dStack_4 = (double)CONCAT44(IStack_6.m_value,&UNK_?);
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

