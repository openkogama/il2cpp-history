
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
    pUVar5 = (this->fields).onDisplayDoneCallback;
    if (pUVar5 == (UnityAction *)0x0) {
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (*(pUVar5->fields)._._.invoke_impl)((pUVar5->fields)._._.method_code);
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
  pTVar1 = this;
  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pTVar2 = (this->fields).titleText;
  if (pTVar2 != (Text *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar2,(MethodInfo *)0x0);
    pTVar2 = (this->fields).titleText;
    if ((pTVar2 != (Text *)0x0) &&
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar2,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&puStack_6,pTVar4,(MethodInfo *)0x0);
      puVar7 = (undefined *)pVVar5->x;
      pTVar2 = (this->fields).titleText;
      if (pTVar2 != (Text *)0x0) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar2,(MethodInfo *)0x0);
        if (pTVar4 != (Transform *)0x0) {
          puVar8 = &UNK_?;
          puStack_6 = puVar7;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             ((Vector3 *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            value_00.y = (float)puVar8;
            value_00.x = (float)puStack_6;
            value_00.z = pVVar5->z;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar3,value_00,(MethodInfo *)0x0);
            fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                              ((MethodInfo *)0x0);
            pTVar10 = (TierUnlockedPopupContentBase *)
                     ((fVar9 - (this->fields).slideOutStartTime) / _UNK_?);
            if ((float)pTVar10 <= _UNK_?) {
              return;
            }
            fVar9 = (this->fields).titleOriginalYPosition;
            fVar11 = fVar9 + _UNK_?;
            this = pTVar10;
            if ((float)_UNK_? < (float)pTVar10) {
              this = _UNK_?;
            }
            pTVar2 = (pTVar1->fields).titleText;
            if (pTVar2 != (Text *)0x0) {
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pTVar2,(MethodInfo *)0x0);
              pTVar2 = (pTVar1->fields).titleText;
              if ((pTVar2 != (Text *)0x0) &&
                 (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)pTVar2,(MethodInfo *)0x0),
                 pTVar4 != (Transform *)0x0)) {
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_localPosition
                                   ((Vector3 *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
                puVar7 = (undefined *)pVVar5->x;
                pTVar2 = (pTVar1->fields).titleText;
                if ((pTVar2 != (Text *)0x0) &&
                   (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_transform((Component *)pTVar2,(MethodInfo *)0x0),
                   pTVar4 != (Transform *)0x0)) {
                  fVar9 = (fVar11 - fVar9) * (float)this + fVar9;
                  puStack_6 = puVar7;
                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_localPosition
                                     ((Vector3 *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
                  if (pTVar3 != (Transform *)0x0) {
                    value.y = fVar9;
                    value.x = (float)puStack_6;
                    value.z = pVVar5->z;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              (pTVar3,value,(MethodInfo *)0x0);
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Initialize(GamePassTier, UnityAction) */

void Assembly-CSharp.dll::TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_Initialize
               (TierUnlockedPopupContentBase *this,GamePassTier__Enum unlockedGamePassTier,
               UnityAction *onDisplayDoneCallback,MethodInfo *method)

{
  ppUVar1 = &(this->fields).onDisplayDoneCallback;
  *ppUVar1 = onDisplayDoneCallback;
  func_?(ppUVar1,onDisplayDoneCallback);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).stateStartTime = fVar2;
  if ((this->fields).currentState != 1) {
    (this->fields).currentState = 1;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).stateStartTime = fVar2;
  }
  pTVar3 = (this->fields).titleText;
  if (pTVar3 != (Text *)0x0) {
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar3,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xfffffff0,pTVar4,(MethodInfo *)0x0);
      pTVar3 = (this->fields).titleText;
      (this->fields).titleOriginalYPosition = pVVar5->y;
      if (pTVar3 != (Text *)0x0) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar3,(MethodInfo *)0x0);
        pTVar3 = (this->fields).titleText;
        if (pTVar3 != (Text *)0x0) {
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar3,(MethodInfo *)0x0);
          if (pTVar6 != (Transform *)0x0) {
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                               ((Vector3 *)&stack0xfffffff0,pTVar6,(MethodInfo *)0x0);
            fVar2 = pVVar5->x;
            pTVar3 = (this->fields).titleText;
            if (pTVar3 != (Text *)0x0) {
              pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pTVar3,(MethodInfo *)0x0);
              if (pTVar6 != (Transform *)0x0) {
                fVar7 = (float)pTVar3 - _UNK_?;
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_localPosition
                                   ((Vector3 *)&stack0xffffffe4,pTVar6,(MethodInfo *)0x0);
                if (pTVar4 != (Transform *)0x0) {
                  value.y = fVar7;
                  value.x = fVar2;
                  value.z = pVVar5->z;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                            (pTVar4,value,(MethodInfo *)0x0);
                  pNVar8 = (this->fields).titleTextFader;
                  if (pNVar8 != (NotificationFade *)0x0) {
                    (pNVar8->fields).pauseAt = (pNVar8->fields).duration;
                    this_00 = (pNVar8->fields).group;
                    (pNVar8->fields).playing = 1;
                    if (this_00 != (CanvasGroup *)0x0) {
                      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                                (this_00,0.0,(MethodInfo *)0x0);
                      (pNVar8->fields).currentTime = 0.0;
                      pNVar8 = (this->fields).titleTextFader;
                      if (pNVar8 != (NotificationFade *)0x0) {
                        (pNVar8->fields).pauseAt = 0.29;
                        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                          ((MethodInfo *)0x0);
                        (this->fields).slideInStartTime = fVar2;
                        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                          ((MethodInfo *)0x0);
                        (this->fields).slideOutStartTime =
                             (fVar2 + (this->fields).displayTime) - _UNK_?;
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
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  iVar1 = (this->fields).currentState;
  if ((iVar1 != 0) && (iVar1 == 1)) {
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
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateScale(Single) */

void Assembly-CSharp.dll::TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_UpdateScale
               (TierUnlockedPopupContentBase *this,float newScale,MethodInfo *method)

{
  this_00 = (Transform *)(this->fields).mainContent;
  if (this_00 != (Transform *)0x0) {
    value.y = newScale;
    value.x = newScale;
    value.z = 1.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

