
/* Void HandleToggle() */

void Assembly-CSharp.dll::ToggleButtonAnimation::ToggleButtonAnimation_HandleToggle
               (ToggleButtonAnimation *this,MethodInfo *method)

{
  SStack_1.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_1.monitor = (MonitorData *)0x0;
  SStack_1.fields.value = 0.0;
  SStack_1.fields.OnChange = (Action_1_Single_ *)0x0;
  SStack_2.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_2.monitor = (MonitorData *)0x0;
  SStack_2.fields.value = 0.0;
  SStack_2.fields.OnChange = (Action_1_Single_ *)0x0;
  SStack_3.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_3.monitor = (MonitorData *)0x0;
  SStack_3.fields.value = 0.0;
  SStack_3.fields.OnChange = (Action_1_Single_ *)0x0;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar5 = (this->fields).toggleOffOriginalPositionX;
  pRVar6 = (this->fields).toggleOffMaskTransform;
  (this->fields).interpolationStartTime = fVar4;
  (this->fields).interpolateToggleMaskNewPositionX = fVar5;
  (this->fields).interpolateToggleMaskStartPositionX = fVar5;
  fStack_7 = fVar5;
  if ((this->fields).isToggleOn == 0) {
    if (pRVar6 == (RectTransform *)0x0) goto code_?;
    pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffa8,pRVar6,(MethodInfo *)0x0);
    SStack_2.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar8->m_XMin;
    SStack_2.monitor = (MonitorData *)pRVar8->m_YMin;
    SStack_2.fields.value = pRVar8->m_Width;
    SStack_2.fields.OnChange = (Action_1_Single_ *)pRVar8->m_Height;
    fVar4 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value(&SStack_2,(MethodInfo *)0x0);
    (this->fields).interpolateToggleMaskStartPositionX = fVar4 + fVar5;
  }
  else {
    if (pRVar6 == (RectTransform *)0x0) goto code_?;
    pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffa8,pRVar6,(MethodInfo *)0x0);
    SStack_1.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar8->m_XMin;
    SStack_1.monitor = (MonitorData *)pRVar8->m_YMin;
    SStack_1.fields.value = pRVar8->m_Width;
    SStack_1.fields.OnChange = (Action_1_Single_ *)pRVar8->m_Height;
    fVar5 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value(&SStack_1,(MethodInfo *)0x0);
    (this->fields).interpolateToggleMaskNewPositionX = fVar5 + fStack_7;
  }
  fVar5 = (this->fields).toggleOffOriginalPositionX;
  pRVar6 = (this->fields).toggleOffMaskTransform;
  (this->fields).interpolateToggleContentNewPositionX = fVar5;
  (this->fields).interpolateToggleContentStartPositionX = fVar5;
  fStack_7 = fVar5;
  if ((this->fields).isToggleOn == 0) {
    if (pRVar6 == (RectTransform *)0x0) {
code_?:
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffa8,pRVar6,(MethodInfo *)0x0);
    SStack_3.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar8->m_XMin;
    SStack_3.monitor = (MonitorData *)pRVar8->m_YMin;
    SStack_3.fields.value = pRVar8->m_Width;
    SStack_3.fields.OnChange = (Action_1_Single_ *)pRVar8->m_Height;
    fVar4 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value(&SStack_3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleContentStartPositionX = fVar5 - fVar4;
  }
  else {
    if (pRVar6 == (RectTransform *)0x0) goto code_?;
    pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffa8,pRVar6,(MethodInfo *)0x0);
    fVar5 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value
                      ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffb8,
                       (MethodInfo *)pRVar8->m_XMin);
    (this->fields).interpolateToggleContentNewPositionX = fStack_7 - fVar5;
  }
  fVar5 = (this->fields).toggleButtonOriginalPositionX;
  (this->fields).interpolateToggleButtonNewPositionX = fVar5;
  (this->fields).interpolateToggleButtonStartPositionX = fVar5;
  fVar5 = (this->fields).toggleButtonMoveAmount + fVar5;
  if ((this->fields).isToggleOn == 0) {
    (this->fields).interpolateToggleButtonStartPositionX = fVar5;
    return;
  }
  (this->fields).interpolateToggleButtonNewPositionX = fVar5;
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
                       ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    pTVar1 = (Transform *)(this->fields).toggleButtonTransform;
    (this->fields).toggleOffOriginalPositionX = (float)uVar3;
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                         ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
      uVar4 = pVVar2->x;
      (this->fields).toggleButtonOriginalPositionX = (float)uVar4;
      if ((this->fields).isToggleOn != 0) {
        ToggleButtonAnimation_SetToggleOnWithoutInterpolation(this,(MethodInfo *)0x0);
      }
      pTVar1 = (Transform *)(this->fields).toggleOffMaskTransform;
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
        uVar5 = pVVar2->x;
        pTVar1 = (Transform *)(this->fields).toggleOffContentTransform;
        (this->fields).interpolateToggleMaskNewPositionX = (float)uVar5;
        if (pTVar1 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                             ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
          uVar6 = pVVar2->x;
          pTVar1 = (Transform *)(this->fields).toggleButtonTransform;
          (this->fields).interpolateToggleContentNewPositionX = (float)uVar6;
          if (pTVar1 != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                               ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
            uVar7 = pVVar2->x;
            (this->fields).interpolateToggleButtonNewPositionX = (float)uVar7;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                      Transform_get_localPosition
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
                uVar11 = pVVar3->x;
                pTVar2 = (Transform *)(pTVar1->fields).toggleOffContentTransform;
                (pTVar1->fields).interpolateToggleMaskNewPositionX = (float)uVar11;
                if (pTVar2 != (Transform *)0x0) {
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_localPosition
                                      ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
                  uVar12 = pVVar3->x;
                  pTVar2 = (Transform *)(pTVar1->fields).toggleButtonTransform;
                  (pTVar1->fields).interpolateToggleContentNewPositionX = (float)uVar12;
                  if (pTVar2 != (Transform *)0x0) {
                    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_localPosition
                                        ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
                    uVar13 = pVVar3->x;
                    (pTVar1->fields).interpolateToggleButtonNewPositionX = (float)uVar13;
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
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SetToggleOnWithoutInterpolation() */

void Assembly-CSharp.dll::ToggleButtonAnimation::
     ToggleButtonAnimation_SetToggleOnWithoutInterpolation
               (ToggleButtonAnimation *this,MethodInfo *method)

{
  pTVar1 = this;
  pTVar2 = (Transform *)(this->fields).toggleOffMaskTransform;
  (this->fields).isToggleOn = 1;
  if (pTVar2 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                        ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
    uVar4 = pVVar3->y;
    fVar5 = pVVar3->z;
    pRVar6 = (this->fields).toggleOffMaskTransform;
    fVar7 = (this->fields).toggleOffOriginalPositionX;
    if (pRVar6 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffe0,pRVar6,(MethodInfo *)0x0);
      fVar8 = SubscribableVariableBase`1[System::Single]::
               SubscribableVariableBase_1_System_Single__get_Value
                         ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffd0,
                          (MethodInfo *)0x0);
      pTVar2 = (Transform *)(this->fields).toggleOffMaskTransform;
      if (pTVar2 != (Transform *)0x0) {
        VVar9.y = (float)uVar4;
        VVar9.x = fVar8 + fVar7;
        VVar9.z = fVar5;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar2,VVar9,(MethodInfo *)0x0);
        pTVar2 = (Transform *)(this->fields).toggleOffContentTransform;
        if (pTVar2 != (Transform *)0x0) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                              ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
          fVar5 = pVVar3->z;
          pRVar6 = (this->fields).toggleOffContentTransform;
          fVar7 = (this->fields).toggleOffOriginalPositionX;
          if (pRVar6 != (RectTransform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                      ((Rect *)&stack0xffffffe0,pRVar6,(MethodInfo *)0x0);
            uVar4 = 0;
            fVar8 = SubscribableVariableBase`1[System::Single]::
                     SubscribableVariableBase_1_System_Single__get_Value
                               ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffc0,
                                (MethodInfo *)0x0);
            pTVar2 = (Transform *)(this->fields).toggleOffContentTransform;
            if (pTVar2 != (Transform *)0x0) {
              this = (ToggleButtonAnimation *)fVar5;
              fVar10 = (float)uVar4;
              VVar9.x = fVar7 - fVar8;
              VVar9 = (Vector3)CONCAT84(uVar11,VVar9.x);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar2,VVar9,(MethodInfo *)0x0);
              pTVar2 = (Transform *)(pTVar1->fields).toggleButtonTransform;
              if (pTVar2 != (Transform *)0x0) {
                pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localPosition
                                    ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
                pTVar2 = (Transform *)(pTVar1->fields).toggleButtonTransform;
                uVar12 = pVVar3->y;
                if (pTVar2 != (Transform *)0x0) {
                  value.y = (float)uVar12;
                  value.x = (pTVar1->fields).toggleButtonOriginalPositionX +
                            (pTVar1->fields).toggleButtonMoveAmount;
                  value.z = pVVar3->z;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                            (pTVar2,value,(MethodInfo *)0x0);
                  pTVar2 = (Transform *)(pTVar1->fields).toggleOffMaskTransform;
                  if (pTVar2 != (Transform *)0x0) {
                    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_localPosition
                                        ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
                    uVar13 = pVVar3->x;
                    pTVar2 = (Transform *)(pTVar1->fields).toggleOffContentTransform;
                    (pTVar1->fields).interpolateToggleMaskNewPositionX = (float)uVar13;
                    if (pTVar2 != (Transform *)0x0) {
                      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_localPosition
                                          ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
                      uVar14 = pVVar3->x;
                      pTVar2 = (Transform *)(pTVar1->fields).toggleButtonTransform;
                      (pTVar1->fields).interpolateToggleContentNewPositionX = (float)uVar14;
                      if (pTVar2 != (Transform *)0x0) {
                        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_localPosition
                                            ((Vector3 *)&stack0xffffffe4,pTVar2,(MethodInfo *)0x0);
                        uVar15 = pVVar3->x;
                        (pTVar1->fields).interpolateToggleButtonNewPositionX = (float)uVar15;
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
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Toggle() */

void Assembly-CSharp.dll::ToggleButtonAnimation::ToggleButtonAnimation_Toggle
               (ToggleButtonAnimation *this,MethodInfo *method)

{
  (this->fields).isToggleOn = (this->fields).isToggleOn == 0;
  SStack_1.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_1.monitor = (MonitorData *)0x0;
  SStack_1.fields.value = 0.0;
  SStack_1.fields.OnChange = (Action_1_Single_ *)0x0;
  SStack_2.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_2.monitor = (MonitorData *)0x0;
  SStack_2.fields.value = 0.0;
  SStack_2.fields.OnChange = (Action_1_Single_ *)0x0;
  SStack_3.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_3.monitor = (MonitorData *)0x0;
  SStack_3.fields.value = 0.0;
  SStack_3.fields.OnChange = (Action_1_Single_ *)0x0;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar5 = (this->fields).toggleOffOriginalPositionX;
  pRVar6 = (this->fields).toggleOffMaskTransform;
  (this->fields).interpolationStartTime = fVar4;
  (this->fields).interpolateToggleMaskNewPositionX = fVar5;
  (this->fields).interpolateToggleMaskStartPositionX = fVar5;
  fStack_7 = fVar5;
  if ((this->fields).isToggleOn == 0) {
    if (pRVar6 == (RectTransform *)0x0) goto code_?;
    pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffa8,pRVar6,(MethodInfo *)0x0);
    SStack_2.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar8->m_XMin;
    SStack_2.monitor = (MonitorData *)pRVar8->m_YMin;
    SStack_2.fields.value = pRVar8->m_Width;
    SStack_2.fields.OnChange = (Action_1_Single_ *)pRVar8->m_Height;
    fVar4 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value(&SStack_2,(MethodInfo *)0x0);
    (this->fields).interpolateToggleMaskStartPositionX = fVar4 + fVar5;
  }
  else {
    if (pRVar6 == (RectTransform *)0x0) goto code_?;
    pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffa8,pRVar6,(MethodInfo *)0x0);
    SStack_1.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar8->m_XMin;
    SStack_1.monitor = (MonitorData *)pRVar8->m_YMin;
    SStack_1.fields.value = pRVar8->m_Width;
    SStack_1.fields.OnChange = (Action_1_Single_ *)pRVar8->m_Height;
    fVar5 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value(&SStack_1,(MethodInfo *)0x0);
    (this->fields).interpolateToggleMaskNewPositionX = fVar5 + fStack_7;
  }
  fVar5 = (this->fields).toggleOffOriginalPositionX;
  pRVar6 = (this->fields).toggleOffMaskTransform;
  (this->fields).interpolateToggleContentNewPositionX = fVar5;
  (this->fields).interpolateToggleContentStartPositionX = fVar5;
  fStack_7 = fVar5;
  if ((this->fields).isToggleOn == 0) {
    if (pRVar6 == (RectTransform *)0x0) {
code_?:
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffa8,pRVar6,(MethodInfo *)0x0);
    SStack_3.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar8->m_XMin;
    SStack_3.monitor = (MonitorData *)pRVar8->m_YMin;
    SStack_3.fields.value = pRVar8->m_Width;
    SStack_3.fields.OnChange = (Action_1_Single_ *)pRVar8->m_Height;
    fVar4 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value(&SStack_3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleContentStartPositionX = fVar5 - fVar4;
  }
  else {
    if (pRVar6 == (RectTransform *)0x0) goto code_?;
    pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffa8,pRVar6,(MethodInfo *)0x0);
    fVar5 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value
                      ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffb8,
                       (MethodInfo *)pRVar8->m_XMin);
    (this->fields).interpolateToggleContentNewPositionX = fStack_7 - fVar5;
  }
  fVar5 = (this->fields).toggleButtonOriginalPositionX;
  (this->fields).interpolateToggleButtonNewPositionX = fVar5;
  (this->fields).interpolateToggleButtonStartPositionX = fVar5;
  fVar5 = (this->fields).toggleButtonMoveAmount + fVar5;
  if ((this->fields).isToggleOn == 0) {
    (this->fields).interpolateToggleButtonStartPositionX = fVar5;
    return;
  }
  (this->fields).interpolateToggleButtonNewPositionX = fVar5;
  return;
}


/* Void ToggleOff() */

void Assembly-CSharp.dll::ToggleButtonAnimation::ToggleButtonAnimation_ToggleOff
               (ToggleButtonAnimation *this,MethodInfo *method)

{
  if ((this->fields).isToggleOn == 0) {
    return;
  }
  (this->fields).isToggleOn = 0;
  SStack_1.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_1.monitor = (MonitorData *)0x0;
  SStack_1.fields.value = 0.0;
  SStack_1.fields.OnChange = (Action_1_Single_ *)0x0;
  SStack_2.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_2.monitor = (MonitorData *)0x0;
  SStack_2.fields.value = 0.0;
  SStack_2.fields.OnChange = (Action_1_Single_ *)0x0;
  SStack_3.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_3.monitor = (MonitorData *)0x0;
  SStack_3.fields.value = 0.0;
  SStack_3.fields.OnChange = (Action_1_Single_ *)0x0;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar5 = (this->fields).toggleOffOriginalPositionX;
  pRVar6 = (this->fields).toggleOffMaskTransform;
  (this->fields).interpolationStartTime = fVar4;
  (this->fields).interpolateToggleMaskNewPositionX = fVar5;
  (this->fields).interpolateToggleMaskStartPositionX = fVar5;
  fStack_7 = fVar5;
  if ((this->fields).isToggleOn == 0) {
    if (pRVar6 == (RectTransform *)0x0) goto code_?;
    pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffa8,pRVar6,(MethodInfo *)0x0);
    SStack_2.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar8->m_XMin;
    SStack_2.monitor = (MonitorData *)pRVar8->m_YMin;
    SStack_2.fields.value = pRVar8->m_Width;
    SStack_2.fields.OnChange = (Action_1_Single_ *)pRVar8->m_Height;
    fVar4 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value(&SStack_2,(MethodInfo *)0x0);
    (this->fields).interpolateToggleMaskStartPositionX = fVar4 + fVar5;
  }
  else {
    if (pRVar6 == (RectTransform *)0x0) goto code_?;
    pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffa8,pRVar6,(MethodInfo *)0x0);
    SStack_1.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar8->m_XMin;
    SStack_1.monitor = (MonitorData *)pRVar8->m_YMin;
    SStack_1.fields.value = pRVar8->m_Width;
    SStack_1.fields.OnChange = (Action_1_Single_ *)pRVar8->m_Height;
    fVar5 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value(&SStack_1,(MethodInfo *)0x0);
    (this->fields).interpolateToggleMaskNewPositionX = fVar5 + fStack_7;
  }
  fVar5 = (this->fields).toggleOffOriginalPositionX;
  pRVar6 = (this->fields).toggleOffMaskTransform;
  (this->fields).interpolateToggleContentNewPositionX = fVar5;
  (this->fields).interpolateToggleContentStartPositionX = fVar5;
  fStack_7 = fVar5;
  if ((this->fields).isToggleOn == 0) {
    if (pRVar6 == (RectTransform *)0x0) {
code_?:
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffa8,pRVar6,(MethodInfo *)0x0);
    SStack_3.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar8->m_XMin;
    SStack_3.monitor = (MonitorData *)pRVar8->m_YMin;
    SStack_3.fields.value = pRVar8->m_Width;
    SStack_3.fields.OnChange = (Action_1_Single_ *)pRVar8->m_Height;
    fVar4 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value(&SStack_3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleContentStartPositionX = fVar5 - fVar4;
  }
  else {
    if (pRVar6 == (RectTransform *)0x0) goto code_?;
    pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffa8,pRVar6,(MethodInfo *)0x0);
    fVar5 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value
                      ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffb8,
                       (MethodInfo *)pRVar8->m_XMin);
    (this->fields).interpolateToggleContentNewPositionX = fStack_7 - fVar5;
  }
  fVar5 = (this->fields).toggleButtonOriginalPositionX;
  (this->fields).interpolateToggleButtonNewPositionX = fVar5;
  (this->fields).interpolateToggleButtonStartPositionX = fVar5;
  fVar5 = (this->fields).toggleButtonMoveAmount + fVar5;
  if ((this->fields).isToggleOn == 0) {
    (this->fields).interpolateToggleButtonStartPositionX = fVar5;
    return;
  }
  (this->fields).interpolateToggleButtonNewPositionX = fVar5;
  return;
}


/* Void ToggleOn() */

void Assembly-CSharp.dll::ToggleButtonAnimation::ToggleButtonAnimation_ToggleOn
               (ToggleButtonAnimation *this,MethodInfo *method)

{
  if ((this->fields).isToggleOn != 0) {
    return;
  }
  (this->fields).isToggleOn = 1;
  SStack_1.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_1.monitor = (MonitorData *)0x0;
  SStack_1.fields.value = 0.0;
  SStack_1.fields.OnChange = (Action_1_Single_ *)0x0;
  SStack_2.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_2.monitor = (MonitorData *)0x0;
  SStack_2.fields.value = 0.0;
  SStack_2.fields.OnChange = (Action_1_Single_ *)0x0;
  SStack_3.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_3.monitor = (MonitorData *)0x0;
  SStack_3.fields.value = 0.0;
  SStack_3.fields.OnChange = (Action_1_Single_ *)0x0;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar5 = (this->fields).toggleOffOriginalPositionX;
  pRVar6 = (this->fields).toggleOffMaskTransform;
  (this->fields).interpolationStartTime = fVar4;
  (this->fields).interpolateToggleMaskNewPositionX = fVar5;
  (this->fields).interpolateToggleMaskStartPositionX = fVar5;
  fStack_7 = fVar5;
  if ((this->fields).isToggleOn == 0) {
    if (pRVar6 == (RectTransform *)0x0) goto code_?;
    pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffa8,pRVar6,(MethodInfo *)0x0);
    SStack_2.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar8->m_XMin;
    SStack_2.monitor = (MonitorData *)pRVar8->m_YMin;
    SStack_2.fields.value = pRVar8->m_Width;
    SStack_2.fields.OnChange = (Action_1_Single_ *)pRVar8->m_Height;
    fVar4 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value(&SStack_2,(MethodInfo *)0x0);
    (this->fields).interpolateToggleMaskStartPositionX = fVar4 + fVar5;
  }
  else {
    if (pRVar6 == (RectTransform *)0x0) goto code_?;
    pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffa8,pRVar6,(MethodInfo *)0x0);
    SStack_1.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar8->m_XMin;
    SStack_1.monitor = (MonitorData *)pRVar8->m_YMin;
    SStack_1.fields.value = pRVar8->m_Width;
    SStack_1.fields.OnChange = (Action_1_Single_ *)pRVar8->m_Height;
    fVar5 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value(&SStack_1,(MethodInfo *)0x0);
    (this->fields).interpolateToggleMaskNewPositionX = fVar5 + fStack_7;
  }
  fVar5 = (this->fields).toggleOffOriginalPositionX;
  pRVar6 = (this->fields).toggleOffMaskTransform;
  (this->fields).interpolateToggleContentNewPositionX = fVar5;
  (this->fields).interpolateToggleContentStartPositionX = fVar5;
  fStack_7 = fVar5;
  if ((this->fields).isToggleOn == 0) {
    if (pRVar6 == (RectTransform *)0x0) {
code_?:
      func_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffa8,pRVar6,(MethodInfo *)0x0);
    SStack_3.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar8->m_XMin;
    SStack_3.monitor = (MonitorData *)pRVar8->m_YMin;
    SStack_3.fields.value = pRVar8->m_Width;
    SStack_3.fields.OnChange = (Action_1_Single_ *)pRVar8->m_Height;
    fVar4 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value(&SStack_3,(MethodInfo *)0x0);
    (this->fields).interpolateToggleContentStartPositionX = fVar5 - fVar4;
  }
  else {
    if (pRVar6 == (RectTransform *)0x0) goto code_?;
    pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       ((Rect *)&stack0xffffffa8,pRVar6,(MethodInfo *)0x0);
    fVar5 = SubscribableVariableBase`1[System::Single]::
            SubscribableVariableBase_1_System_Single__get_Value
                      ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffb8,
                       (MethodInfo *)pRVar8->m_XMin);
    (this->fields).interpolateToggleContentNewPositionX = fStack_7 - fVar5;
  }
  fVar5 = (this->fields).toggleButtonOriginalPositionX;
  (this->fields).interpolateToggleButtonNewPositionX = fVar5;
  (this->fields).interpolateToggleButtonStartPositionX = fVar5;
  fVar5 = (this->fields).toggleButtonMoveAmount + fVar5;
  if ((this->fields).isToggleOn == 0) {
    (this->fields).interpolateToggleButtonStartPositionX = fVar5;
    return;
  }
  (this->fields).interpolateToggleButtonNewPositionX = fVar5;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ToggleButtonAnimation::ToggleButtonAnimation_Update
               (ToggleButtonAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).toggleInterpolationDuration;
  fVar3 = (this->fields).interpolationStartTime;
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  pTVar5 = (Transform *)(this->fields).toggleOffMaskTransform;
  if (pTVar5 != (Transform *)0x0) {
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xffffffdc,pTVar5,(MethodInfo *)0x0);
    uVar7 = pVVar6->y;
    fVar8 = pVVar6->z;
    a = (this->fields).interpolateToggleMaskStartPositionX;
    b = (this->fields).interpolateToggleMaskNewPositionX;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                       (a,b,(fVar1 - fVar3) / (fVar4 + fVar2),(MethodInfo *)0x0);
    pTVar5 = (Transform *)(this->fields).toggleOffMaskTransform;
    if (pTVar5 != (Transform *)0x0) {
      value_01.y = (float)uVar7;
      value_01.x = fVar2;
      value_01.z = fVar8;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar5,value_01,(MethodInfo *)0x0);
      pTVar5 = (Transform *)(this->fields).toggleOffMaskTransform;
      if (pTVar5 != (Transform *)0x0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xffffffdc,pTVar5,(MethodInfo *)0x0);
        uVar9 = pVVar6->y;
        fVar2 = pVVar6->z;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                           ((this->fields).interpolateToggleContentStartPositionX,
                            (this->fields).interpolateToggleContentNewPositionX,(float)pTVar5,
                            (MethodInfo *)0x0);
        pTVar5 = (Transform *)(this->fields).toggleOffContentTransform;
        if (pTVar5 != (Transform *)0x0) {
          value.y = (float)uVar9;
          value.x = fVar3;
          value.z = fVar2;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar5,value,(MethodInfo *)0x0);
          pTVar5 = (Transform *)(this->fields).toggleButtonTransform;
          if (pTVar5 != (Transform *)0x0) {
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                               ((Vector3 *)&stack0xffffffdc,pTVar5,(MethodInfo *)0x0);
            uVar10 = pVVar6->y;
            fVar2 = pVVar6->z;
            fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                               ((this->fields).interpolateToggleButtonStartPositionX,
                                (this->fields).interpolateToggleButtonNewPositionX,3.7617718e-29,
                                (MethodInfo *)0x0);
            pTVar5 = (Transform *)(this->fields).toggleButtonTransform;
            if (pTVar5 != (Transform *)0x0) {
              value_00.y = (float)uVar10;
              value_00.x = fVar3;
              value_00.z = fVar2;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (pTVar5,value_00,(MethodInfo *)0x0);
              return;
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


/* ToggleButtonAnimation() */

void Assembly-CSharp.dll::ToggleButtonAnimation::ToggleButtonAnimation__ctor
               (ToggleButtonAnimation *this,MethodInfo *method)

{
  (this->fields).toggleInterpolationDuration = 0.1;
  (this->fields).toggleButtonMoveAmount = 131.0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

