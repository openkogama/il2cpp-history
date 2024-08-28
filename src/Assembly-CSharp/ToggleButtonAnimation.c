
/* Void HandleToggle() */

void Assembly-CSharp.dll::ToggleButtonAnimation::ToggleButtonAnimation_HandleToggle
               (ToggleButtonAnimation *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).toggleOffOriginalPositionX;
  pRVar3 = (this->fields).toggleOffMaskTransform;
  (this->fields).interpolationStartTime = fVar1;
  (this->fields).interpolateToggleMaskNewPositionX = fVar2;
  (this->fields).interpolateToggleMaskStartPositionX = fVar2;
  if ((this->fields).isToggleOn == 0) {
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleMaskStartPositionX = pRVar4->m_Width + fVar2;
  }
  else {
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleMaskNewPositionX = fVar2 + pRVar4->m_Width;
  }
  fVar2 = (this->fields).toggleOffOriginalPositionX;
  pRVar3 = (this->fields).toggleOffMaskTransform;
  (this->fields).interpolateToggleContentNewPositionX = fVar2;
  (this->fields).interpolateToggleContentStartPositionX = fVar2;
  if ((this->fields).isToggleOn == 0) {
    if (pRVar3 == (RectTransform *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleContentStartPositionX = fVar2 - pRVar4->m_Width;
  }
  else {
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleContentNewPositionX = fVar2 - pRVar4->m_Width;
  }
  fVar2 = (this->fields).toggleButtonOriginalPositionX;
  (this->fields).interpolateToggleButtonNewPositionX = fVar2;
  (this->fields).interpolateToggleButtonStartPositionX = fVar2;
  fVar2 = (this->fields).toggleButtonMoveAmount + fVar2;
  if ((this->fields).isToggleOn == 0) {
    (this->fields).interpolateToggleButtonStartPositionX = fVar2;
    return;
  }
  (this->fields).interpolateToggleButtonNewPositionX = fVar2;
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::ToggleButtonAnimation::ToggleButtonAnimation_Initialize
               (ToggleButtonAnimation *this,MethodInfo *method)

{
  if ((this->fields).isInitialized != 0) {
    return;
  }
  pTVar1 = (Transform *)(this->fields).toggleOffMaskTransform;
  (this->fields).isInitialized = 1;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
    (this->fields).toggleOffOriginalPositionX = pVVar2->x;
    pTVar1 = (Transform *)(this->fields).toggleButtonTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
      (this->fields).toggleButtonOriginalPositionX = pVVar2->x;
      if ((this->fields).isToggleOn != 0) {
        ToggleButtonAnimation_SetToggleOnWithoutInterpolation(this,(MethodInfo *)0x0);
      }
      pTVar1 = (Transform *)(this->fields).toggleOffMaskTransform;
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
        (this->fields).interpolateToggleMaskNewPositionX = pVVar2->x;
        pTVar1 = (Transform *)(this->fields).toggleOffContentTransform;
        if (pTVar1 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
          (this->fields).interpolateToggleContentNewPositionX = pVVar2->x;
          pTVar1 = (Transform *)(this->fields).toggleButtonTransform;
          if (pTVar1 != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                               ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
            (this->fields).interpolateToggleButtonNewPositionX = pVVar2->x;
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


/* Void SetToggleOffWithoutInterpolation() */

void Assembly-CSharp.dll::ToggleButtonAnimation::
     ToggleButtonAnimation_SetToggleOffWithoutInterpolation
               (ToggleButtonAnimation *this,MethodInfo *method)

{
  pTVar1 = this;
  pTVar2 = (Transform *)(this->fields).toggleOffMaskTransform;
  (this->fields).isToggleOn = 0;
  if (pTVar2 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
    pTVar2 = (Transform *)(this->fields).toggleOffMaskTransform;
    uVar4 = pVVar3->y;
    if (pTVar2 != (Transform *)0x0) {
      VVar5.y = (float)uVar4;
      VVar5.x = (this->fields).toggleOffOriginalPositionX;
      VVar5.z = pVVar3->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar2,VVar5,(MethodInfo *)0x0);
      pTVar2 = (Transform *)(this->fields).toggleOffContentTransform;
      if (pTVar2 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
        pTVar2 = (Transform *)(this->fields).toggleOffContentTransform;
        uVar6 = pVVar3->y;
        pTVar7 = &this->fields;
        if (pTVar2 != (Transform *)0x0) {
          this = (ToggleButtonAnimation *)pVVar3->z;
          fVar8 = (float)uVar6;
          VVar5.x = pTVar7->toggleOffOriginalPositionX;
          VVar5 = (Vector3)CONCAT84(uVar9,VVar5.x);
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar2,VVar5,(MethodInfo *)0x0);
          pTVar2 = (Transform *)(pTVar1->fields).toggleButtonTransform;
          if (pTVar2 != (Transform *)0x0) {
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                               ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
            pTVar2 = (Transform *)(pTVar1->fields).toggleButtonTransform;
            uVar10 = pVVar3->y;
            if (pTVar2 != (Transform *)0x0) {
              value.y = (float)uVar10;
              value.x = (pTVar1->fields).toggleButtonOriginalPositionX;
              value.z = pVVar3->z;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar2,value,(MethodInfo *)0x0);
              pTVar2 = (Transform *)(pTVar1->fields).toggleOffMaskTransform;
              if (pTVar2 != (Transform *)0x0) {
                pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_localPosition
                                   ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
                (pTVar1->fields).interpolateToggleMaskNewPositionX = pVVar3->x;
                pTVar2 = (Transform *)(pTVar1->fields).toggleOffContentTransform;
                if (pTVar2 != (Transform *)0x0) {
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_localPosition
                                     ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
                  (pTVar1->fields).interpolateToggleContentNewPositionX = pVVar3->x;
                  pTVar2 = (Transform *)(pTVar1->fields).toggleButtonTransform;
                  if (pTVar2 != (Transform *)0x0) {
                    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_localPosition
                                       ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
                    (pTVar1->fields).interpolateToggleButtonNewPositionX = pVVar3->x;
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetToggleOnWithoutInterpolation() */

void Assembly-CSharp.dll::ToggleButtonAnimation::
     ToggleButtonAnimation_SetToggleOnWithoutInterpolation
               (ToggleButtonAnimation *this,MethodInfo *method)

{
  pTVar1 = (Transform *)(this->fields).toggleOffMaskTransform;
  (this->fields).isToggleOn = 1;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    uVar3 = pVVar2->y;
    fVar4 = pVVar2->z;
    pRVar5 = (this->fields).toggleOffMaskTransform;
    fVar6 = (this->fields).toggleOffOriginalPositionX;
    if (pRVar5 != (RectTransform *)0x0) {
      pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                          ((Rect *)&stack0xffffffe0,pRVar5,(MethodInfo *)0x0);
      pTVar1 = (Transform *)(this->fields).toggleOffMaskTransform;
      if (pTVar1 != (Transform *)0x0) {
        value_01.y = (float)uVar3;
        value_01.x = pRVar7->m_Width + fVar6;
        value_01.z = fVar4;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar1,value_01,(MethodInfo *)0x0);
        pTVar1 = (Transform *)(this->fields).toggleOffContentTransform;
        if (pTVar1 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
          uVar8 = pVVar2->y;
          fVar6 = pVVar2->z;
          pRVar5 = (this->fields).toggleOffContentTransform;
          if (pRVar5 != (RectTransform *)0x0) {
            pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                                ((Rect *)&stack0xffffffe0,pRVar5,(MethodInfo *)0x0);
            pTVar1 = (Transform *)(this->fields).toggleOffContentTransform;
            if (pTVar1 != (Transform *)0x0) {
              value.y = (float)uVar8;
              value.x = (float)&stack0xffffffe0 - pRVar7->m_Width;
              value.z = fVar6;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar1,value,(MethodInfo *)0x0);
              pTVar1 = (Transform *)(this->fields).toggleButtonTransform;
              if (pTVar1 != (Transform *)0x0) {
                pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_localPosition
                                   ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
                pTVar1 = (Transform *)(this->fields).toggleButtonTransform;
                uVar9 = pVVar2->y;
                if (pTVar1 != (Transform *)0x0) {
                  value_00.y = (float)uVar9;
                  value_00.x = (this->fields).toggleButtonOriginalPositionX +
                               (this->fields).toggleButtonMoveAmount;
                  value_00.z = pVVar2->z;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                            (pTVar1,value_00,(MethodInfo *)0x0);
                  pTVar1 = (Transform *)(this->fields).toggleOffMaskTransform;
                  if (pTVar1 != (Transform *)0x0) {
                    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_localPosition
                                       ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
                    (this->fields).interpolateToggleMaskNewPositionX = pVVar2->x;
                    pTVar1 = (Transform *)(this->fields).toggleOffContentTransform;
                    if (pTVar1 != (Transform *)0x0) {
                      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                               Transform_get_localPosition
                                         ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
                      (this->fields).interpolateToggleContentNewPositionX = pVVar2->x;
                      pTVar1 = (Transform *)(this->fields).toggleButtonTransform;
                      if (pTVar1 != (Transform *)0x0) {
                        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                 Transform_get_localPosition
                                           ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
                        (this->fields).interpolateToggleButtonNewPositionX = pVVar2->x;
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Toggle() */

void Assembly-CSharp.dll::ToggleButtonAnimation::ToggleButtonAnimation_Toggle
               (ToggleButtonAnimation *this,MethodInfo *method)

{
  (this->fields).isToggleOn = (this->fields).isToggleOn == 0;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).toggleOffOriginalPositionX;
  pRVar3 = (this->fields).toggleOffMaskTransform;
  (this->fields).interpolationStartTime = fVar1;
  (this->fields).interpolateToggleMaskNewPositionX = fVar2;
  (this->fields).interpolateToggleMaskStartPositionX = fVar2;
  if ((this->fields).isToggleOn == 0) {
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleMaskStartPositionX = fVar2 + pRVar4->m_Width;
  }
  else {
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleMaskNewPositionX = fVar2 + pRVar4->m_Width;
  }
  fVar2 = (this->fields).toggleOffOriginalPositionX;
  pRVar3 = (this->fields).toggleOffMaskTransform;
  (this->fields).interpolateToggleContentNewPositionX = fVar2;
  (this->fields).interpolateToggleContentStartPositionX = fVar2;
  if ((this->fields).isToggleOn == 0) {
    if (pRVar3 == (RectTransform *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleContentStartPositionX = fVar2 - pRVar4->m_Width;
  }
  else {
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleContentNewPositionX = fVar2 - pRVar4->m_Width;
  }
  fVar2 = (this->fields).toggleButtonOriginalPositionX;
  (this->fields).interpolateToggleButtonNewPositionX = fVar2;
  (this->fields).interpolateToggleButtonStartPositionX = fVar2;
  fVar2 = (this->fields).toggleButtonMoveAmount + fVar2;
  if ((this->fields).isToggleOn == 0) {
    (this->fields).interpolateToggleButtonStartPositionX = fVar2;
    return;
  }
  (this->fields).interpolateToggleButtonNewPositionX = fVar2;
  return;
}


/* Void ToggleOff() */

void Assembly-CSharp.dll::ToggleButtonAnimation::ToggleButtonAnimation_ToggleOff
               (ToggleButtonAnimation *this,MethodInfo *method)

{
  if ((this->fields).isToggleOn == 0) {
    return;
  }
  (this->fields).isToggleOn = (this->fields).isToggleOn == 0;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).toggleOffOriginalPositionX;
  pRVar3 = (this->fields).toggleOffMaskTransform;
  (this->fields).interpolationStartTime = fVar1;
  (this->fields).interpolateToggleMaskNewPositionX = fVar2;
  (this->fields).interpolateToggleMaskStartPositionX = fVar2;
  if ((this->fields).isToggleOn == 0) {
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleMaskStartPositionX = fVar2 + pRVar4->m_Width;
  }
  else {
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleMaskNewPositionX = fVar2 + pRVar4->m_Width;
  }
  fVar2 = (this->fields).toggleOffOriginalPositionX;
  pRVar3 = (this->fields).toggleOffMaskTransform;
  (this->fields).interpolateToggleContentNewPositionX = fVar2;
  (this->fields).interpolateToggleContentStartPositionX = fVar2;
  if ((this->fields).isToggleOn == 0) {
    if (pRVar3 == (RectTransform *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleContentStartPositionX = fVar2 - pRVar4->m_Width;
  }
  else {
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleContentNewPositionX = fVar2 - pRVar4->m_Width;
  }
  fVar2 = (this->fields).toggleButtonOriginalPositionX;
  (this->fields).interpolateToggleButtonNewPositionX = fVar2;
  (this->fields).interpolateToggleButtonStartPositionX = fVar2;
  fVar2 = (this->fields).toggleButtonMoveAmount + fVar2;
  if ((this->fields).isToggleOn == 0) {
    (this->fields).interpolateToggleButtonStartPositionX = fVar2;
    return;
  }
  (this->fields).interpolateToggleButtonNewPositionX = fVar2;
  return;
}


/* Void ToggleOn() */

void Assembly-CSharp.dll::ToggleButtonAnimation::ToggleButtonAnimation_ToggleOn
               (ToggleButtonAnimation *this,MethodInfo *method)

{
  if ((this->fields).isToggleOn != 0) {
    return;
  }
  (this->fields).isToggleOn = (this->fields).isToggleOn == 0;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).toggleOffOriginalPositionX;
  pRVar3 = (this->fields).toggleOffMaskTransform;
  (this->fields).interpolationStartTime = fVar1;
  (this->fields).interpolateToggleMaskNewPositionX = fVar2;
  (this->fields).interpolateToggleMaskStartPositionX = fVar2;
  if ((this->fields).isToggleOn == 0) {
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleMaskStartPositionX = fVar2 + pRVar4->m_Width;
  }
  else {
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleMaskNewPositionX = fVar2 + pRVar4->m_Width;
  }
  fVar2 = (this->fields).toggleOffOriginalPositionX;
  pRVar3 = (this->fields).toggleOffMaskTransform;
  (this->fields).interpolateToggleContentNewPositionX = fVar2;
  (this->fields).interpolateToggleContentStartPositionX = fVar2;
  if ((this->fields).isToggleOn == 0) {
    if (pRVar3 == (RectTransform *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleContentStartPositionX = fVar2 - pRVar4->m_Width;
  }
  else {
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    pRVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffec,pRVar3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleContentNewPositionX = fVar2 - pRVar4->m_Width;
  }
  fVar2 = (this->fields).toggleButtonOriginalPositionX;
  (this->fields).interpolateToggleButtonNewPositionX = fVar2;
  (this->fields).interpolateToggleButtonStartPositionX = fVar2;
  fVar2 = (this->fields).toggleButtonMoveAmount + fVar2;
  if ((this->fields).isToggleOn == 0) {
    (this->fields).interpolateToggleButtonStartPositionX = fVar2;
    return;
  }
  (this->fields).interpolateToggleButtonNewPositionX = fVar2;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ToggleButtonAnimation::ToggleButtonAnimation_Update
               (ToggleButtonAnimation *this,MethodInfo *method)

{
  pTVar1 = this;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar3 = (this->fields).toggleInterpolationDuration;
  fVar2 = fVar2 - (this->fields).interpolationStartTime;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  pTVar5 = (Transform *)(this->fields).toggleOffMaskTransform;
  fVar2 = fVar2 / (fVar4 + fVar3);
  if (pTVar5 != (Transform *)0x0) {
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                        ((Vector3 *)&stack0xffffffe0,pTVar5,(MethodInfo *)0x0);
    fVar3 = (this->fields).interpolateToggleMaskStartPositionX;
    uVar7 = pVVar6->y;
    bVar8 = fVar2 < 0.0;
    if (bVar8) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = _UNK_?;
      if (fVar2 <= _UNK_?) {
        fVar4 = fVar2;
      }
    }
    pTVar5 = (Transform *)(this->fields).toggleOffMaskTransform;
    if (pTVar5 != (Transform *)0x0) {
      VVar9.y = (float)uVar7;
      VVar9.x = ((this->fields).interpolateToggleMaskNewPositionX - fVar3) * fVar4 + fVar3;
      VVar9.z = pVVar6->z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar5,VVar9,(MethodInfo *)0x0);
      pTVar5 = (Transform *)(this->fields).toggleOffMaskTransform;
      if (pTVar5 != (Transform *)0x0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                            ((Vector3 *)&stack0xffffffe0,pTVar5,(MethodInfo *)0x0);
        fVar3 = (this->fields).interpolateToggleContentStartPositionX;
        pTVar10 = &this->fields;
        uVar11 = pVVar6->y;
        fVar4 = pVVar6->z;
        if (bVar8) {
          fVar12 = 0.0;
        }
        else {
          fVar12 = _UNK_?;
          if (fVar2 <= _UNK_?) {
            fVar12 = fVar2;
          }
        }
        pTVar5 = (Transform *)(this->fields).toggleOffContentTransform;
        if (pTVar5 != (Transform *)0x0) {
          this = (ToggleButtonAnimation *)fVar4;
          fVar13 = (float)uVar11;
          VVar9.x = (pTVar10->interpolateToggleContentNewPositionX - fVar3) * fVar12 + fVar3;
          VVar9 = (Vector3)CONCAT84(uVar14,VVar9.x);
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar5,VVar9,(MethodInfo *)0x0);
          pTVar5 = (Transform *)(pTVar1->fields).toggleButtonTransform;
          if (pTVar5 != (Transform *)0x0) {
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_localPosition
                                ((Vector3 *)&stack0xffffffe0,pTVar5,(MethodInfo *)0x0);
            fVar3 = (pTVar1->fields).interpolateToggleButtonStartPositionX;
            uVar15 = pVVar6->y;
            if (bVar8) {
              fVar4 = 0.0;
            }
            else if (_UNK_? < fVar4) {
              fVar4 = _UNK_?;
            }
            pTVar5 = (Transform *)(pTVar1->fields).toggleButtonTransform;
            if (pTVar5 != (Transform *)0x0) {
              value.y = (float)uVar15;
              value.x = ((pTVar1->fields).interpolateToggleButtonNewPositionX - fVar3) * fVar4 +
                        fVar3;
              value.z = pVVar6->z;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar5,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* ToggleButtonAnimation() */

void Assembly-CSharp.dll::ToggleButtonAnimation::ToggleButtonAnimation__ctor
               (ToggleButtonAnimation *this,MethodInfo *method)

{
  (this->fields).toggleInterpolationDuration = 0.1;
  (this->fields).toggleButtonMoveAmount = 131.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

