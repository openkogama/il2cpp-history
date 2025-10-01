
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
      if (_UNK_? < 3.939831e-29) {
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
      if (_UNK_? < 3.9399008e-29) {
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


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void HandleState() */

void Assembly-CSharp.dll::SubscriberJoinedNotification::SubscriberJoinedNotification_HandleState
               (SubscriberJoinedNotification *this,MethodInfo *method)

{
  puVar1 = (undefined4 *)&stack0xfffffffc;
  value = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = value - (this->fields).stateStartTime;
  switch((this->fields).currentState) {
  case 0:
  case 5:
    break;
  case 1:
    pGVar3 = (this->fields).content;
    if (pGVar3 != (GameObject *)0x0) {
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar3,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pGVar3 = (this->fields).content;
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
      }
      if (fVar2 <= _UNK_?) break;
      value = 0.0;
      (this->fields).currentState = 2;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pGVar3 = (this->fields).content;
      (this->fields).stateStartTime = fVar2;
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,1,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).Update.method)();
        return;
      }
    }
code_?:
    bVar5 = false;
    cVar6 = '\0';
    func_?();
    if (!bVar5) {
      *(char *)(extraout_ECX + -0x39) = *(char *)(extraout_ECX + -0x39) + (char)extraout_ECX + cVar6
      ;
      *(undefined **)((int)&unaff_EDI[1].monitor + 2) = &UNK_?;
      puStack_7 = (undefined1 *)&method;
      ppMVar8 = &method;
      apuStack_9[1] = (undefined1 *)&method;
      ppMVar10 = &method;
      cVar6 = '\x0f';
      do {
        puVar1 = puVar1 + -1;
        ppMVar8 = ppMVar8 + -1;
        *ppMVar8 = (MethodInfo *)*puVar1;
        cVar6 = cVar6 + -1;
      } while ('\0' < cVar6);
      ppuVar11 = apuStack_9 + 1;
      cVar6 = '\v';
      do {
        ppMVar10 = ppMVar10 + -1;
        ppuVar11 = ppuVar11 + -1;
        *ppuVar11 = (undefined1 *)*ppMVar10;
        cVar6 = cVar6 + -1;
      } while ('\0' < cVar6);
      pcVar12 = (code *)swi(3);
      method = (MethodInfo *)&stack0xfffffffc;
      (*pcVar12)();
      return;
    }
    goto code_?;
  case 2:
    SubscriberJoinedNotification_UpdateBoostTextEffect
              (this,fVar2 - _UNK_?,(MethodInfo *)0x0);
    pAVar13 = (this->fields).fadeOutCurve;
    unaff_EDI = (this->fields).backgroundCanvasGroup;
    if ((pAVar13 == (AnimationCurve *)0x0) ||
       (value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (pAVar13,_UNK_? - fVar2,(MethodInfo *)0x0),
       unaff_EDI == (CanvasGroup *)0x0)) goto code_?;
    method = (MethodInfo *)0x0;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (unaff_EDI,value,(MethodInfo *)0x0);
    method = (MethodInfo *)&UNK_?;
    SubscriberJoinedNotification_CloseNotificationAnimation
              (this,_UNK_? - value,(MethodInfo *)0x0);
    if (_UNK_? < value) {
      (this->fields).currentState = 3;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).stateStartTime = fVar2;
    }
    break;
  case 3:
    if (_UNK_? < fVar2) {
      (this->fields).currentState = 4;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).stateStartTime = fVar2;
      return;
    }
    break;
  case 4:
    SubscriberJoinedNotification_UpdateBoostTextEffect(this,fVar2,(MethodInfo *)0x0);
    pAVar13 = (this->fields).fadeOutCurve;
    unaff_EDI = (this->fields).backgroundCanvasGroup;
    if ((pAVar13 == (AnimationCurve *)0x0) ||
       (value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (pAVar13,fVar2,(MethodInfo *)0x0), unaff_EDI == (CanvasGroup *)0x0))
    goto code_?;
code_?:
    method = (MethodInfo *)0x0;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (unaff_EDI,value,(MethodInfo *)0x0);
    method = (MethodInfo *)&UNK_?;
    SubscriberJoinedNotification_CloseNotificationAnimation(this,value,(MethodInfo *)0x0);
    if (_UNK_? < value) {
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
      (*(code *)(this->klass->vtable).Update.method)(this);
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
  key = (Object *)func_?(TypeInfo__System__Byte,&uStack_2);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar3.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar4 = (int32_t *)func_?();
        actorNr = *piVar4;
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar5 != (MVNetworkGame *)0x0) &&
           (this_00 = (pMVar5->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
          bVar6 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                            (this_00,actorNr,&pMStack_1,(MethodInfo *)0x0);
          if (bVar6 == 0) {
            SubscriberJoinedNotification_CloseNotification(this,(MethodInfo *)0x0);
            return;
          }
          (this->fields)._.timeSinceStart = 0.0;
          if (((pMStack_1 != (MVPlayer *)0x0) &&
              ((pMStack_1->fields)._UserProfileData_k__BackingField != (UserProfileData *)0x0)) &&
             (pTVar7 = (this->fields).userNameText, pTVar7 != (Text *)0x0)) {
            pTStack_8 = pTVar7;
            (*(code *)(pTVar7->klass->vtable).set_text.method)();
            pRVar9 = (this->fields).backGround;
            if (pRVar9 != (RectTransform *)0x0) {
              pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                       RectTransform_get_rect((Rect *)&pTStack_8,pRVar9,(MethodInfo *)0x0);
              pRVar9 = (this->fields).backGround;
              (this->fields).backgroundOriginalWidth = pRVar10->m_Width;
              if (pRVar9 != (RectTransform *)0x0) {
                pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                         RectTransform_get_rect((Rect *)&pTStack_8,pRVar9,(MethodInfo *)0x0);
                pRVar9 = (this->fields).backGround;
                (this->fields).backgroundOriginalHeigt = pRVar10->m_Height;
                if (pRVar9 != (RectTransform *)0x0) {
                  VVar11 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                          RectTransform_get_sizeDelta(pRVar9,(MethodInfo *)0x0);
                  (this->fields).backgroundOriginalSizeDelta.x = 0.0;
                  fStack_12 = VVar11.y;
                  (this->fields).backgroundOriginalSizeDelta.y = fStack_12;
                  (this->fields).currentState = 1;
                  fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                     ((MethodInfo *)0x0);
                  (this->fields).stateStartTime = fVar13;
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
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
                 UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                 UnsafeUtility_AsRef_1((Void *)pGVar1,(MethodInfo *)0x0);
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


/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Void Update() */

void Assembly-CSharp.dll::SubscriberJoinedNotification::SubscriberJoinedNotification_Update
               (SubscriberJoinedNotification *this,MethodInfo *method)

{
  method = (MethodInfo *)0x0;
  puVar1 = (undefined4 *)&stack0xfffffffc;
  value = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = value - (this->fields).stateStartTime;
  switch((this->fields).currentState) {
  case 0:
  case 5:
    break;
  case 1:
    pGVar3 = (this->fields).content;
    if (pGVar3 != (GameObject *)0x0) {
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar3,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pGVar3 = (this->fields).content;
        if (pGVar3 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,0,(MethodInfo *)0x0);
      }
      if (fVar2 <= _UNK_?) break;
      value = 0.0;
      (this->fields).currentState = 2;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pGVar3 = (this->fields).content;
      (this->fields).stateStartTime = fVar2;
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,1,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).Update.method)();
        return;
      }
    }
code_?:
    bVar5 = false;
    cVar6 = '\0';
    func_?();
    if (!bVar5) {
      *(char *)(extraout_ECX + -0x39) = *(char *)(extraout_ECX + -0x39) + (char)extraout_ECX + cVar6
      ;
      *(undefined **)((int)&unaff_EDI[1].monitor + 2) = &UNK_?;
      puStack_7 = (undefined1 *)&method;
      ppMVar8 = &method;
      apuStack_9[1] = (undefined1 *)&method;
      ppMVar10 = &method;
      cVar6 = '\x0f';
      do {
        puVar1 = puVar1 + -1;
        ppMVar8 = ppMVar8 + -1;
        *ppMVar8 = (MethodInfo *)*puVar1;
        cVar6 = cVar6 + -1;
      } while ('\0' < cVar6);
      ppuVar11 = apuStack_9 + 1;
      cVar6 = '\v';
      do {
        ppMVar10 = ppMVar10 + -1;
        ppuVar11 = ppuVar11 + -1;
        *ppuVar11 = (undefined1 *)*ppMVar10;
        cVar6 = cVar6 + -1;
      } while ('\0' < cVar6);
      pcVar12 = (code *)swi(3);
      method = (MethodInfo *)&stack0xfffffffc;
      (*pcVar12)();
      return;
    }
    goto code_?;
  case 2:
    SubscriberJoinedNotification_UpdateBoostTextEffect
              (this,fVar2 - _UNK_?,(MethodInfo *)0x0);
    pAVar13 = (this->fields).fadeOutCurve;
    unaff_EDI = (this->fields).backgroundCanvasGroup;
    if ((pAVar13 == (AnimationCurve *)0x0) ||
       (value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (pAVar13,_UNK_? - fVar2,(MethodInfo *)0x0),
       unaff_EDI == (CanvasGroup *)0x0)) goto code_?;
    method = (MethodInfo *)0x0;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (unaff_EDI,value,(MethodInfo *)0x0);
    method = (MethodInfo *)&UNK_?;
    SubscriberJoinedNotification_CloseNotificationAnimation
              (this,_UNK_? - value,(MethodInfo *)0x0);
    if (_UNK_? < value) {
      (this->fields).currentState = 3;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).stateStartTime = fVar2;
    }
    break;
  case 3:
    if (_UNK_? < fVar2) {
      (this->fields).currentState = 4;
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).stateStartTime = fVar2;
      return;
    }
    break;
  case 4:
    SubscriberJoinedNotification_UpdateBoostTextEffect(this,fVar2,(MethodInfo *)0x0);
    pAVar13 = (this->fields).fadeOutCurve;
    unaff_EDI = (this->fields).backgroundCanvasGroup;
    if ((pAVar13 == (AnimationCurve *)0x0) ||
       (value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                          (pAVar13,fVar2,(MethodInfo *)0x0), unaff_EDI == (CanvasGroup *)0x0))
    goto code_?;
code_?:
    method = (MethodInfo *)0x0;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (unaff_EDI,value,(MethodInfo *)0x0);
    method = (MethodInfo *)&UNK_?;
    SubscriberJoinedNotification_CloseNotificationAnimation(this,value,(MethodInfo *)0x0);
    if (_UNK_? < value) {
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

