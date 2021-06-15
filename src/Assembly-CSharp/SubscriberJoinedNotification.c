
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
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).closeShrinkXEffectCurve;
  if (pAVar1 != (AnimationCurve *)0x0) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (pAVar1,stateProgress,(MethodInfo *)0x0);
    pAVar1 = (this->fields).closeShrinkYEffectCurve;
    fVar2 = (this->fields).backgroundOriginalWidth * fVar2 - (this->fields).backgroundOriginalWidth;
    if (pAVar1 != (AnimationCurve *)0x0) {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (pAVar1,stateProgress,(MethodInfo *)0x0);
      fVar4 = (this->fields).backgroundOriginalHeigt * fVar3 -
              (this->fields).backgroundOriginalHeigt;
      fVar3 = (this->fields).backgroundOriginalSizeDelta.x;
      puVar5 = (undefined *)(this->fields).backgroundOriginalSizeDelta.y;
      if ((((uint)(TypeInfo__UnityEngine__Vector2->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector2->_1).cctor_started == 0)) {
        puVar5 = &UNK_?;
        func_?(TypeInfo__UnityEngine__Vector2);
      }
      VVar6.y = fVar4;
      VVar6.x = fVar2;
      b.y = (float)puVar5;
      b.x = fVar3;
      VVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector2::Vector2_op_Addition
                        (VVar6,b,(MethodInfo *)0x0);
      this_00 = (this->fields).backGround;
      if (this_00 != (RectTransform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                  (this_00,VVar6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
      if (_UNK_? < 2.9891823e-29) {
        SubscriberJoinedNotification_CloseNotification(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?(0);
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
                      (this_00,_UNK_? - currentStateTime,
                       (MethodInfo *)(_UNK_? - currentStateTime));
    if (this_01 != (CanvasGroup *)0x0) {
      stateProgress = &UNK_?;
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_01,fVar1,(MethodInfo *)0x0);
      SubscriberJoinedNotification_CloseNotificationAnimation
                (this,(float)stateProgress,(MethodInfo *)0x0);
      if (_UNK_? < (float)this) {
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
  case 1:
    pGVar2 = (this->fields).content;
    if (pGVar2 != (GameObject *)0x0) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pGVar2 = (this->fields).content;
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
      }
      if (fVar1 <= _UNK_?) {
        return;
      }
      (this->fields).currentState = 2;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pGVar2 = (this->fields).content;
      (this->fields).stateStartTime = fVar1;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).Update.method)();
        return;
      }
    }
    goto code_?;
  case 2:
    SubscriberJoinedNotification_UpdateBoostTextEffect
              (this,fVar1 - _UNK_?,(MethodInfo *)0x0);
    pAVar4 = (this->fields).fadeOutCurve;
    unaff_EDI = (this->fields).backgroundCanvasGroup;
    if (pAVar4 != (AnimationCurve *)0x0) {
      fVar1 = _UNK_? - fVar1;
      value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (pAVar4,fVar1,(MethodInfo *)0x0);
      if (unaff_EDI != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (unaff_EDI,value,(MethodInfo *)0x0);
        SubscriberJoinedNotification_CloseNotificationAnimation(this,fVar1,(MethodInfo *)0x0);
        if (2.989365e-29 <= _UNK_?) {
          return;
        }
        (this->fields).currentState = 3;
        fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).stateStartTime = fVar1;
        return;
      }
    }
code_?:
    bVar5 = 0;
    func_?();
    bVar6 = (byte)((ushort)extraout_CX >> 8);
    bVar7 = CARRY1(*unaff_EBX,bVar6) || CARRY1(*unaff_EBX + bVar6,bVar5);
    *unaff_EBX = *unaff_EBX + bVar6 + bVar5;
    pbVar8 = (byte *)((int)&unaff_EDI[0x716aca1].monitor + 2);
    bVar5 = *pbVar8;
    bVar9 = *pbVar8;
    *pbVar8 = bVar9 + bVar6 + bVar7;
    pcVar10 = (char *)((int)&unaff_EDI[-10].fields._._._.m_CachedPtr + 3);
    *pcVar10 = *pcVar10 + (char)extraout_CX +
              (CARRY1(bStack_11,extraout_DH) ||
              CARRY1(bStack_11 + extraout_DH,CARRY1(bVar5,bVar6) || CARRY1(bVar9 + bVar6,bVar7)));
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
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
    pAVar4 = (this->fields).fadeOutCurve;
    unaff_EDI = (this->fields).backgroundCanvasGroup;
    if ((pAVar4 == (AnimationCurve *)0x0) ||
       (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (pAVar4,fVar1,(MethodInfo *)0x0), unaff_EDI == (CanvasGroup *)0x0))
    goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (unaff_EDI,fVar1,(MethodInfo *)0x0);
    SubscriberJoinedNotification_CloseNotificationAnimation(this,0.0,(MethodInfo *)0x0);
    if (_UNK_? < 2.9894158e-29) {
      SubscriberJoinedNotification_CloseNotification(this,(MethodInfo *)0x0);
      return;
    }
  }
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVPlayer *)0x0;
  uStack_2 = 9;
  SStack_3.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_3.monitor = (MonitorData *)0x0;
  SStack_3.fields.value = 0.0;
  SStack_3.fields.OnChange = (Action_1_Single_ *)0x0;
  key = (Type *)func_?(TypeInfo__System__Byte,&uStack_2);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar4 != (Pool *)0x0) {
      if ((pPVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar5 = (int32_t *)func_?();
        iVar6 = *piVar5;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
        ;
        if (this_00 != (MVAvatar *)0x0) {
          this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0);
          if (this_01 != (MVRuntimeDataVariableClampedFloat *)0x0) {
            bVar7 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                              ((MVPlayerContainer *)this_01,iVar6,&pMStack_1,(MethodInfo *)0x0);
            if (bVar7 == 0) {
              SubscriberJoinedNotification_CloseNotification(this,(MethodInfo *)0x0);
              return;
            }
            Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
            pTVar8 = (this->fields).userNameText;
            if (pMStack_1 != (MVPlayer *)0x0) {
              iVar6 = GamePointGainEffect::GamePointGainEffect_get_ID
                                ((GamePointGainEffect *)pMStack_1,(MethodInfo *)0x0);
              if ((iVar6 != 0) && (pTVar8 != (Text *)0x0)) {
                (*(code *)(pTVar8->klass->vtable).set_text.method)
                          (pTVar8,*(undefined4 *)(iVar6 + 0xc));
                pRVar9 = (this->fields).backGround;
                if (pRVar9 != (RectTransform *)0x0) {
                  pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                           RectTransform_get_rect((Rect *)auStack_11,pRVar9,(MethodInfo *)0x0);
                  SStack_3.klass =
                       (SubscribableVariableBase_1_System_Single___Class *)pRVar10->m_XMin;
                  SStack_3.monitor = (MonitorData *)pRVar10->m_YMin;
                  SStack_3.fields.value = pRVar10->m_Width;
                  SStack_3.fields.OnChange = (Action_1_Single_ *)pRVar10->m_Height;
                  fVar12 = SubscribableVariableBase`1[System::Single]::
                           SubscribableVariableBase_1_System_Single__get_Value
                                     (&SStack_3,(MethodInfo *)0x0);
                  pRVar9 = (this->fields).backGround;
                  (this->fields).backgroundOriginalWidth = fVar12;
                  if (pRVar9 != (RectTransform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                              ((Rect *)auStack_11,pRVar9,(MethodInfo *)0x0);
                    fVar12 = UnityStandardAssets::CrossPlatformInput::
                             CrossPlatformInputManager+VirtualAxis::
                             CrossPlatformInputManager_VirtualAxis_get_GetValueRaw
                                       ((CrossPlatformInputManager_VirtualAxis *)&stack0xffffffc4,
                                        (MethodInfo *)0x0);
                    pRVar9 = (this->fields).backGround;
                    (this->fields).backgroundOriginalHeigt = fVar12;
                    if (pRVar9 != (RectTransform *)0x0) {
                      VVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                              RectTransform_get_sizeDelta(pRVar9,(MethodInfo *)0x0);
                      (this->fields).backgroundOriginalSizeDelta.x = (float)auStack_11._8_4_;
                      fStack_14 = VVar13.y;
                      (this->fields).backgroundOriginalSizeDelta.y = fStack_14;
                      (this->fields).currentState = 1;
                      unique0x10000462 = VVar13;
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
        }
      }
      else {
        func_?(pPVar4);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields)._.pool;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
      this_02 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).content;
      if (this_02 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        pGVar1 = (GameObject *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                 Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                           (this_02,(MethodInfo *)0x0);
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
  func_?(0);
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
  case 1:
    pGVar2 = (this->fields).content;
    if (pGVar2 != (GameObject *)0x0) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pGVar2 = (this->fields).content;
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
      }
      if (fVar1 <= _UNK_?) {
        return;
      }
      (this->fields).currentState = 2;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pGVar2 = (this->fields).content;
      (this->fields).stateStartTime = fVar1;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        (*(code *)(this->klass->vtable).Update.method)();
        return;
      }
    }
    goto code_?;
  case 2:
    SubscriberJoinedNotification_UpdateBoostTextEffect
              (this,fVar1 - _UNK_?,(MethodInfo *)0x0);
    pAVar4 = (this->fields).fadeOutCurve;
    unaff_EDI = (this->fields).backgroundCanvasGroup;
    if (pAVar4 != (AnimationCurve *)0x0) {
      fVar1 = _UNK_? - fVar1;
      value = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (pAVar4,fVar1,(MethodInfo *)0x0);
      if (unaff_EDI != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (unaff_EDI,value,(MethodInfo *)0x0);
        SubscriberJoinedNotification_CloseNotificationAnimation(this,fVar1,(MethodInfo *)0x0);
        if (2.989365e-29 <= _UNK_?) {
          return;
        }
        (this->fields).currentState = 3;
        fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).stateStartTime = fVar1;
        return;
      }
    }
code_?:
    bVar5 = 0;
    func_?();
    bVar6 = (byte)((ushort)extraout_CX >> 8);
    bVar7 = CARRY1(*unaff_EBX,bVar6) || CARRY1(*unaff_EBX + bVar6,bVar5);
    *unaff_EBX = *unaff_EBX + bVar6 + bVar5;
    pbVar8 = (byte *)((int)&unaff_EDI[0x716aca1].monitor + 2);
    bVar5 = *pbVar8;
    bVar9 = *pbVar8;
    *pbVar8 = bVar9 + bVar6 + bVar7;
    pcVar10 = (char *)((int)&unaff_EDI[-10].fields._._._.m_CachedPtr + 3);
    *pcVar10 = *pcVar10 + (char)extraout_CX +
              (CARRY1(bStack_11,extraout_DH) ||
              CARRY1(bStack_11 + extraout_DH,CARRY1(bVar5,bVar6) || CARRY1(bVar9 + bVar6,bVar7)));
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
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
    pAVar4 = (this->fields).fadeOutCurve;
    unaff_EDI = (this->fields).backgroundCanvasGroup;
    if ((pAVar4 == (AnimationCurve *)0x0) ||
       (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (pAVar4,fVar1,(MethodInfo *)0x0), unaff_EDI == (CanvasGroup *)0x0))
    goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (unaff_EDI,fVar1,(MethodInfo *)0x0);
    SubscriberJoinedNotification_CloseNotificationAnimation(this,0.0,(MethodInfo *)0x0);
    if (_UNK_? < 2.9894158e-29) {
      SubscriberJoinedNotification_CloseNotification(this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


/* Void UpdateBoostTextEffect(Single) */

void Assembly-CSharp.dll::SubscriberJoinedNotification::
     SubscriberJoinedNotification_UpdateBoostTextEffect
               (SubscriberJoinedNotification *this,float stateProgress,MethodInfo *method)

{
  this_00 = (this->fields).updateBoostTextEffectCurve;
  if (this_00 != (AnimationCurve *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
              (this_00,stateProgress,(MethodInfo *)0x0);
    pTVar1 = (this->fields).boostAmountText;
    if (pTVar1 != (Text *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pTVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                  ((Vector3 *)&stack0xffffffd8,pTVar2,(MethodInfo *)0x0);
        func_?();
        pTVar1 = (this->fields).boostAmountText;
        if (pTVar1 != (Text *)0x0) {
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pTVar1,(MethodInfo *)0x0);
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                      (pTVar2,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

