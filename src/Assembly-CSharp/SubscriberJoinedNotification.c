
/* Void ChangeState(SubscriberJoinedNotification+subscriberJoinedStateType) */

void Assembly-CSharp.dll::SubscriberJoinedNotification::SubscriberJoinedNotification_ChangeState
               (SubscriberJoinedNotification *this,
               SubscriberJoinedNotification_subscriberJoinedStateType__Enum newState,
               MethodInfo *method)

{
  (this->fields).currentState = (undefined1)newState;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).stateStartTime = fVar1;
  return;
}


/* Void CloseNotification() */

void Assembly-CSharp.dll::SubscriberJoinedNotification::
     SubscriberJoinedNotification_CloseNotification
               (SubscriberJoinedNotification *this,MethodInfo *method)

{
  SubscriberJoinedNotification_ResetNotificationUI(this,(MethodInfo *)0x0);
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
    }
    this_00 = (this->fields)._.pool;
    if (this_00 != (NotificationObjectPool *)0x0) {
      NotificationObjectPool::NotificationObjectPool_Return
                (this_00,(Notification *)this,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CloseNotificationAnimation(Single) */

void Assembly-CSharp.dll::SubscriberJoinedNotification::
     SubscriberJoinedNotification_CloseNotificationAnimation
               (SubscriberJoinedNotification *this,float stateProgress,MethodInfo *method)

{
  pAVar1 = (this->fields).closeShrinkXEffectCurve;
  if (pAVar1 != (AnimationCurve *)0x0) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (pAVar1,stateProgress,(MethodInfo *)0x0);
    pAVar1 = (this->fields).closeShrinkYEffectCurve;
    fVar3 = (this->fields).backgroundOriginalWidth;
    fVar4 = (this->fields).backgroundOriginalWidth;
    if (pAVar1 != (AnimationCurve *)0x0) {
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (pAVar1,stateProgress,(MethodInfo *)0x0);
      this_00 = (this->fields).backGround;
      if (this_00 != (RectTransform *)0x0) {
        value.y = (this->fields).backgroundOriginalSizeDelta.y +
                  (fVar5 * (this->fields).backgroundOriginalHeigt -
                  (this->fields).backgroundOriginalHeigt);
        value.x = (this->fields).backgroundOriginalSizeDelta.x + (fVar2 * fVar3 - fVar4);
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                  (this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void FadeOut(Single) */

void Assembly-CSharp.dll::SubscriberJoinedNotification::SubscriberJoinedNotification_FadeOut
               (SubscriberJoinedNotification *this,float stateProgress,MethodInfo *method)

{
  this_00 = (this->fields).backgroundCanvasGroup;
  this_01 = (this->fields).fadeOutCurve;
  if (this_01 != (AnimationCurve *)0x0) {
    value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_01,stateProgress,(MethodInfo *)0x0);
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleClosingDownState(Single) */

void Assembly-CSharp.dll::SubscriberJoinedNotification::
     SubscriberJoinedNotification_HandleClosingDownState
               (SubscriberJoinedNotification *this,float currentStateTime,MethodInfo *method)

{
  SubscriberJoinedNotification_UpdateBoostTextEffect(this,currentStateTime,(MethodInfo *)0x0);
  this_00 = (this->fields).fadeOutCurve;
  this_01 = (this->fields).backgroundCanvasGroup;
  if (this_00 != (AnimationCurve *)0x0) {
    value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,currentStateTime,(MethodInfo *)0x0);
    if (this_01 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_01,value,(MethodInfo *)0x0);
      SubscriberJoinedNotification_CloseNotificationAnimation(this,0.0,(MethodInfo *)0x0);
      if (_UNK_? < 3.714791e-29) {
        SubscriberJoinedNotification_CloseNotification(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleHighlightState(Single) */

void Assembly-CSharp.dll::SubscriberJoinedNotification::
     SubscriberJoinedNotification_HandleHighlightState
               (SubscriberJoinedNotification *this,float currentStateTime,MethodInfo *method)

{
  if (_UNK_? < currentStateTime) {
    (this->fields).currentState = 4;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).stateStartTime = fVar1;
  }
  return;
}


/* Void HandleStartState(Single) */

void Assembly-CSharp.dll::SubscriberJoinedNotification::
     SubscriberJoinedNotification_HandleStartState
               (SubscriberJoinedNotification *this,float currentStateTime,MethodInfo *method)

{
  SubscriberJoinedNotification_UpdateBoostTextEffect
            (this,currentStateTime - _UNK_?,(MethodInfo *)0x0);
  this_00 = (this->fields).fadeOutCurve;
  this_01 = (this->fields).backgroundCanvasGroup;
  if (this_00 != (AnimationCurve *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,_UNK_? - currentStateTime,(MethodInfo *)0x0);
    if (this_01 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_01,fVar1,(MethodInfo *)0x0);
      SubscriberJoinedNotification_CloseNotificationAnimation
                (this,_UNK_? - 0.0,(MethodInfo *)0x0);
      if (_UNK_? < 3.7148607e-29) {
        (this->fields).currentState = 3;
        fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).stateStartTime = fVar1;
      }
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleState() */

void Assembly-CSharp.dll::SubscriberJoinedNotification::SubscriberJoinedNotification_HandleState
               (SubscriberJoinedNotification *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (this->fields).stateStartTime;
  switch((this->fields).currentState) {
  case 0:
  case 5:
    break;
  case 1:
    pGVar2 = (this->fields).content;
    if (pGVar2 == (GameObject *)0x0) {
code_?:
      cVar3 = func_?();
      pfVar4 = &(this->fields).stateStartTime;
      *pfVar4 = (float)(((int)*pfVar4 - unaff_EBX) - (uint)((byte)(cVar3 + 1U) < 0x10));
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      pGVar2 = (this->fields).content;
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
    }
    if (_UNK_? < fVar1) {
      (this->fields).currentState = 2;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pGVar2 = (this->fields).content;
      (this->fields).stateStartTime = fVar1;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        (*(this->klass->vtable).Update.methodPtr)(this,(this->klass->vtable).Update.method);
        return;
      }
      goto code_?;
    }
    break;
  case 2:
    SubscriberJoinedNotification_UpdateBoostTextEffect(this,fVar1 - _UNK_?,(MethodInfo *)0x0)
    ;
    pAVar7 = (this->fields).fadeOutCurve;
    pCVar8 = (this->fields).backgroundCanvasGroup;
    if ((pAVar7 == (AnimationCurve *)0x0) ||
       (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (pAVar7,_UNK_? - fVar1,(MethodInfo *)0x0),
       pCVar8 == (CanvasGroup *)0x0)) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar8,fVar1,(MethodInfo *)0x0);
    SubscriberJoinedNotification_CloseNotificationAnimation
              (this,_UNK_? - fVar1,(MethodInfo *)0x0);
    if (_UNK_? < fVar1) {
      (this->fields).currentState = 3;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).stateStartTime = fVar1;
    }
    break;
  case 3:
    if (_UNK_? < fVar1) {
      (this->fields).currentState = 4;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).stateStartTime = fVar1;
      return;
    }
    break;
  case 4:
    SubscriberJoinedNotification_UpdateBoostTextEffect(this,fVar1,(MethodInfo *)0x0);
    pAVar7 = (this->fields).fadeOutCurve;
    pCVar8 = (this->fields).backgroundCanvasGroup;
    if ((pAVar7 == (AnimationCurve *)0x0) ||
       (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (pAVar7,fVar1,(MethodInfo *)0x0), pCVar8 == (CanvasGroup *)0x0))
    goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar8,fVar1,(MethodInfo *)0x0);
    SubscriberJoinedNotification_CloseNotificationAnimation(this,fVar1,(MethodInfo *)0x0);
    if (_UNK_? < fVar1) {
      SubscriberJoinedNotification_CloseNotification(this,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    goto code_?;
  }
code_?:
  return;
}


/* Void HandleWaitBeforeStart(Single) */

void Assembly-CSharp.dll::SubscriberJoinedNotification::
     SubscriberJoinedNotification_HandleWaitBeforeStart
               (SubscriberJoinedNotification *this,float currentStateTime,MethodInfo *method)

{
  pGVar1 = (this->fields).content;
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = (this->fields).content;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
    }
    if (_UNK_? < currentStateTime) {
      (this->fields).currentState = 2;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pGVar1 = (this->fields).content;
      (this->fields).stateStartTime = fVar3;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      (*(this->klass->vtable).Update.methodPtr)(this);
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::SubscriberJoinedNotification::SubscriberJoinedNotification_Initialize
               (SubscriberJoinedNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVPlayer *)0x0;
  uStack_2 = 9;
  pSStack_3 = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  pOVar4 = (Object *)func_?(TypeInfo__System__Byte,&uStack_2);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar4,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar4 != (Object *)0x0) {
      if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar5 = (int32_t *)func_?();
        actorNr = *piVar5;
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar6 != (MVNetworkGame *)0x0) &&
           (this_00 = (pMVar6->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
          bVar7 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                            (this_00,actorNr,&pMStack_1,(MethodInfo *)0x0);
          if (bVar7 == 0) {
            SubscriberJoinedNotification_CloseNotification(this,(MethodInfo *)0x0);
            return;
          }
          (this->fields)._.timeSinceStart = 0.0;
          if (((pMStack_1 != (MVPlayer *)0x0) &&
              ((pMStack_1->fields)._UserProfileData_k__BackingField != (UserProfileData *)0x0)) &&
             (pSVar8 = (SubscribableVariableBase_1_System_Single___Class *)
                       (this->fields).userNameText,
             pSVar8 != (SubscribableVariableBase_1_System_Single___Class *)0x0)) {
            pSStack_3 = pSVar8;
            (*(((Text__Class *)(pSVar8->_0).image)->vtable).set_text.methodPtr)();
            pRVar9 = (this->fields).backGround;
            if (pRVar9 != (RectTransform *)0x0) {
              pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                       RectTransform_get_rect((Rect *)auStack_11,pRVar9,(MethodInfo *)0x0);
              pSStack_3 = (SubscribableVariableBase_1_System_Single___Class *)pRVar10->m_XMin;
              fVar12 = SubscribableVariableBase`1[System::Single]::
                       SubscribableVariableBase_1_System_Single__get_Value
                                 ((SubscribableVariableBase_1_System_Single_ *)&pSStack_3,
                                  (MethodInfo *)0x0);
              pRVar9 = (this->fields).backGround;
              (this->fields).backgroundOriginalWidth = fVar12;
              if (pRVar9 != (RectTransform *)0x0) {
                pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                         RectTransform_get_rect((Rect *)auStack_11,pRVar9,(MethodInfo *)0x0);
                pSStack_3 = (SubscribableVariableBase_1_System_Single___Class *)pRVar10->m_XMin;
                fVar12 = mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                         Int32Enum,System::Single]::
                         Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single__get_Current
                                   ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Int32Enum_System_Single_
                                     *)&pSStack_3,(MethodInfo *)0x0);
                pRVar9 = (this->fields).backGround;
                (this->fields).backgroundOriginalHeigt = fVar12;
                if (pRVar9 != (RectTransform *)0x0) {
                  VVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                          RectTransform_get_sizeDelta(pRVar9,(MethodInfo *)0x0);
                  (this->fields).backgroundOriginalSizeDelta.x = (float)auStack_11._8_4_;
                  fStack_14 = VVar13.y;
                  (this->fields).backgroundOriginalSizeDelta.y = fStack_14;
                  (this->fields).currentState = 1;
                  unique0x100003d1 = VVar13;
                  fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                     ((MethodInfo *)0x0);
                  (this->fields).stateStartTime = fVar12;
                  return;
                }
              }
            }
          }
        }
      }
      else {
        func_?();
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::SubscriberJoinedNotification::SubscriberJoinedNotification_OnDisable
               (SubscriberJoinedNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields)._.pool;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    SubscriberJoinedNotification_ResetNotificationUI(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void ResetNotificationUI() */

void Assembly-CSharp.dll::SubscriberJoinedNotification::
     SubscriberJoinedNotification_ResetNotificationUI
               (SubscriberJoinedNotification *this,MethodInfo *method)

{
  this_00 = (this->fields).backGround;
  if (this_00 != (RectTransform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (this_00,(this->fields).backgroundOriginalSizeDelta,(MethodInfo *)0x0);
    this_01 = (this->fields).backgroundCanvasGroup;
    (this->fields).currentState = 0;
    if (this_01 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_01,0.0,(MethodInfo *)0x0);
      pGVar1 = (this->fields).content;
      if (pGVar1 != (GameObject *)0x0) {
        pGVar1 = (GameObject *)
                 mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AsRef_4
                           ((Void *)pGVar1,(MethodInfo *)0x0);
        if (pGVar1 != (GameObject *)0x0) {
          bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar1,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            pGVar1 = (this->fields).content;
            if (pGVar1 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,0,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SubscriberJoinedNotification::SubscriberJoinedNotification_Update
               (SubscriberJoinedNotification *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (this->fields).stateStartTime;
  switch((this->fields).currentState) {
  case 0:
  case 5:
    break;
  case 1:
    pGVar2 = (this->fields).content;
    if (pGVar2 == (GameObject *)0x0) {
code_?:
      cVar3 = func_?();
      pfVar4 = &(this->fields).stateStartTime;
      *pfVar4 = (float)(((int)*pfVar4 - unaff_EBX) - (uint)((byte)(cVar3 + 1U) < 0x10));
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar2,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      pGVar2 = (this->fields).content;
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
    }
    if (_UNK_? < fVar1) {
      (this->fields).currentState = 2;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pGVar2 = (this->fields).content;
      (this->fields).stateStartTime = fVar1;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        (*(this->klass->vtable).Update.methodPtr)(this,(this->klass->vtable).Update.method);
        return;
      }
      goto code_?;
    }
    break;
  case 2:
    SubscriberJoinedNotification_UpdateBoostTextEffect(this,fVar1 - _UNK_?,(MethodInfo *)0x0)
    ;
    pAVar7 = (this->fields).fadeOutCurve;
    pCVar8 = (this->fields).backgroundCanvasGroup;
    if ((pAVar7 == (AnimationCurve *)0x0) ||
       (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (pAVar7,_UNK_? - fVar1,(MethodInfo *)0x0),
       pCVar8 == (CanvasGroup *)0x0)) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar8,fVar1,(MethodInfo *)0x0);
    SubscriberJoinedNotification_CloseNotificationAnimation
              (this,_UNK_? - fVar1,(MethodInfo *)0x0);
    if (_UNK_? < fVar1) {
      (this->fields).currentState = 3;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).stateStartTime = fVar1;
    }
    break;
  case 3:
    if (_UNK_? < fVar1) {
      (this->fields).currentState = 4;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).stateStartTime = fVar1;
      return;
    }
    break;
  case 4:
    SubscriberJoinedNotification_UpdateBoostTextEffect(this,fVar1,(MethodInfo *)0x0);
    pAVar7 = (this->fields).fadeOutCurve;
    pCVar8 = (this->fields).backgroundCanvasGroup;
    if ((pAVar7 == (AnimationCurve *)0x0) ||
       (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (pAVar7,fVar1,(MethodInfo *)0x0), pCVar8 == (CanvasGroup *)0x0))
    goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar8,fVar1,(MethodInfo *)0x0);
    SubscriberJoinedNotification_CloseNotificationAnimation(this,fVar1,(MethodInfo *)0x0);
    if (_UNK_? < fVar1) {
      SubscriberJoinedNotification_CloseNotification(this,(MethodInfo *)0x0);
      return;
    }
    break;
  default:
    goto code_?;
  }
code_?:
  return;
}


/* Void UpdateBoostTextEffect(Single) */

void Assembly-CSharp.dll::SubscriberJoinedNotification::
     SubscriberJoinedNotification_UpdateBoostTextEffect
               (SubscriberJoinedNotification *this,float stateProgress,MethodInfo *method)

{
  this_00 = (this->fields).updateBoostTextEffectCurve;
  if (this_00 != (AnimationCurve *)0x0) {
    method_00 = (MethodInfo *)
                UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (this_00,stateProgress,(MethodInfo *)0x0);
    pTVar1 = (this->fields).boostAmountText;
    if (pTVar1 != (Text *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                  ((Vector3 *)&stack0xffffffe4,pTVar2,method_00);
        pTVar1 = (this->fields).boostAmountText;
        if (pTVar1 != (Text *)0x0) {
          puVar3 = &UNK_?;
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar1,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            value.y = (float)puVar3;
            value.x = (float)method_00;
            value.z = (float)pTVar1;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar2,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

