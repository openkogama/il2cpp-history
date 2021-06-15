
/* Void HandleDisplaying() */

void Assembly-CSharp.dll::TierUnlockedPopupContentBase::
     TierUnlockedPopupContentBase_HandleDisplaying
               (TierUnlockedPopupContentBase *this,MethodInfo *method)

{
  TierUnlockedPopupContentBase_HandleSlideTitleText(this,(MethodInfo *)0x0);
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = _UNK_? / (this->fields).displayTime;
  fVar3 = (this->fields).stateStartTime;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (fVar4 + _UNK_? < fVar2 * (fVar1 - fVar3)) {
    this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).onDisplayDoneCallback;
    if (this_00 == (AvatarMotor_OnActiveBounceDelegate *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (this_00,(MethodInfo *)0x0);
    if ((this->fields).currentState != 2) {
      (this->fields).currentState = 2;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).stateStartTime = fVar3;
    }
  }
  return;
}


/* Void HandleSlideTitleText() */

void Assembly-CSharp.dll::TierUnlockedPopupContentBase::
     TierUnlockedPopupContentBase_HandleSlideTitleText
               (TierUnlockedPopupContentBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).titleOriginalYPosition;
  fVar1 = (fVar1 - (this->fields).slideInStartTime) / _UNK_?;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
            (fVar2 - _UNK_?,fVar2,fVar1,(MethodInfo *)0x0);
  pTVar3 = (this->fields).titleText;
  if (pTVar3 != (Text *)0x0) {
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pTVar3,(MethodInfo *)0x0);
    pTVar3 = (this->fields).titleText;
    if ((pTVar3 != (Text *)0x0) &&
       (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pTVar3,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)) {
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffdc,pTVar5,(MethodInfo *)0x0);
      fVar2 = pVVar6->x;
      pTVar3 = (this->fields).titleText;
      if ((pTVar3 != (Text *)0x0) &&
         (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pTVar3,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                  ((Vector3 *)&puStack_7,pTVar5,(MethodInfo *)0x0);
        puVar8 = &stack0xffffffe8;
        puVar9 = &UNK_?;
        func_?();
        if (pTVar4 != (Transform *)0x0) {
          value.y = (float)puVar8;
          value.x = (float)puVar9;
          value.z = fVar2;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar4,value,(MethodInfo *)0x0);
          fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
          fVar2 = (fVar2 - (this->fields).slideOutStartTime) / _UNK_?;
          if (fVar2 <= _UNK_?) {
            return;
          }
          fVar1 = (this->fields).titleOriginalYPosition;
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Mathf);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                    (fVar1,fVar1 + _UNK_?,fVar2,(MethodInfo *)0x0);
          pTVar3 = (this->fields).titleText;
          if (pTVar3 != (Text *)0x0) {
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)pTVar3,(MethodInfo *)0x0);
            pTVar3 = (this->fields).titleText;
            if ((pTVar3 != (Text *)0x0) &&
               (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform((Component_1 *)pTVar3,(MethodInfo *)0x0),
               pTVar5 != (Transform *)0x0)) {
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                       Transform_get_localPosition((Vector3 *)&puStack_7,pTVar5,(MethodInfo *)0x0);
              fVar1 = pVVar6->x;
              pTVar3 = (this->fields).titleText;
              if (pTVar3 != (Text *)0x0) {
                pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_transform((Component_1 *)pTVar3,(MethodInfo *)0x0);
                if (pTVar5 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                            ((Vector3 *)&puStack_7,pTVar5,(MethodInfo *)0x0);
                  puVar8 = &stack0xffffffe8;
                  puVar9 = &UNK_?;
                  func_?();
                  if (pTVar4 != (Transform *)0x0) {
                    value_00.y = (float)puVar8;
                    value_00.x = (float)puVar9;
                    value_00.z = fVar1;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              (pTVar4,value_00,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Initialize(GamePassTier, UnityAction) */

void Assembly-CSharp.dll::TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_Initialize
               (TierUnlockedPopupContentBase *this,GamePassTier__Enum unlockedGamePassTier,
               UnityAction *onDisplayDoneCallback,MethodInfo *method)

{
  (this->fields).onDisplayDoneCallback = onDisplayDoneCallback;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).stateStartTime = fVar1;
  if ((this->fields).currentState != 1) {
    (this->fields).currentState = 1;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).stateStartTime = fVar1;
  }
  pTVar2 = (this->fields).titleText;
  if (pTVar2 != (Text *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pTVar2,(MethodInfo *)0x0);
    if (pTVar3 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffcc,pTVar3,(MethodInfo *)0x0);
      uVar5 = pVVar4->y;
      pTVar2 = (this->fields).titleText;
      (this->fields).titleOriginalYPosition = (float)uVar5;
      if (pTVar2 != (Text *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pTVar2,(MethodInfo *)0x0);
        pTVar2 = (this->fields).titleText;
        if (pTVar2 != (Text *)0x0) {
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pTVar2,(MethodInfo *)0x0);
          if (pTVar6 != (Transform *)0x0) {
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                               ((Vector3 *)&stack0xffffffd8,pTVar6,(MethodInfo *)0x0);
            fVar1 = pVVar4->x;
            pTVar2 = (this->fields).titleText;
            if (pTVar2 != (Text *)0x0) {
              pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)pTVar2,(MethodInfo *)0x0);
              if (pTVar6 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                          ((Vector3 *)&stack0xffffffc0,pTVar6,(MethodInfo *)0x0);
                fVar7 = 3.713477e-29 - _UNK_?;
                uVar8 = CONCAT44(fVar1,&stack0xfffffff0);
                func_?();
                if (pTVar3 != (Transform *)0x0) {
                  value.z = fVar7;
                  value.x = (float)(int)uVar8;
                  value.y = (float)(int)((ulonglong)uVar8 >> 0x20);
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                            (pTVar3,value,(MethodInfo *)0x0);
                  pNVar9 = (this->fields).titleTextFader;
                  if (pNVar9 != (NotificationFade *)0x0) {
                    NotificationFade::NotificationFade_Activate(pNVar9,(MethodInfo *)0x0);
                    pNVar9 = (this->fields).titleTextFader;
                    if (pNVar9 != (NotificationFade *)0x0) {
                      NotificationFade::NotificationFade_PauseAt(pNVar9,0.29,(MethodInfo *)0x0);
                      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                        ((MethodInfo *)0x0);
                      (this->fields).slideInStartTime = fVar1;
                      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                        ((MethodInfo *)0x0);
                      (this->fields).slideOutStartTime =
                           ((this->fields).displayTime + fVar1) - _UNK_?;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetState(TierUnlockedPopupContentBase+PopupState) */

void Assembly-CSharp.dll::TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_SetState
               (TierUnlockedPopupContentBase *this,
               TierUnlockedPopupContentBase_PopupState__Enum newState,MethodInfo *method)

{
  if ((this->fields).currentState != newState) {
    (this->fields).currentState = newState;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).stateStartTime = fVar1;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_Update
               (TierUnlockedPopupContentBase *this,MethodInfo *method)

{
  if ((this->fields).currentState == 1) {
    (*(code *)(this->klass->vtable).HandleDisplaying.method)(this,this->klass[1]._0.image);
  }
  return;
}


/* Void UpdateAlpha(Single) */

void Assembly-CSharp.dll::TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_UpdateAlpha
               (TierUnlockedPopupContentBase *this,float newAlpha,MethodInfo *method)

{
  this_00 = (this->fields).mainContentCanvasGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,newAlpha,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateScale(Single) */

void Assembly-CSharp.dll::TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_UpdateScale
               (TierUnlockedPopupContentBase *this,float newScale,MethodInfo *method)

{
  uStack_1 = 0;
  this_00 = (Transform *)(this->fields).mainContent;
  fStack_2 = 0.0;
  func_?(&uStack_1,newScale,newScale,0x3f800000,0);
  if (this_00 != (Transform *)0x0) {
    value.z = fStack_2;
    value.x = (float)(undefined4)uStack_1;
    value.y = (float)uStack_1._4_4_;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Color get_BackgroundColor() */

Color * Assembly-CSharp.dll::TierUnlockedPopupContentBase::
        TierUnlockedPopupContentBase_get_BackgroundColor
                  (Color *__return_storage_ptr__,TierUnlockedPopupContentBase *this,
                  MethodInfo *method)

{
  fVar1 = (this->fields).backgroundColor.g;
  fVar2 = (this->fields).backgroundColor.b;
  fVar3 = (this->fields).backgroundColor.a;
  __return_storage_ptr__->r = (this->fields).backgroundColor.r;
  __return_storage_ptr__->g = fVar1;
  __return_storage_ptr__->b = fVar2;
  __return_storage_ptr__->a = fVar3;
  return __return_storage_ptr__;
}

