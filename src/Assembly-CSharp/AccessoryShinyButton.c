
/* Void Start() */

void Assembly-CSharp.dll::AccessoryShinyButton::AccessoryShinyButton_Start
               (AccessoryShinyButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).buttonShine;
  if (this_00 != (Transform *)0x0) {
    pRVar1 = (RectTransform *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this_00,
                        UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                       );
    (this->fields).shine = pRVar1;
    func_?(&(this->fields).shine,pRVar1);
    (this->fields).currentProgress = 0.0;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AccessoryShinyButton::AccessoryShinyButton_Update
               (AccessoryShinyButton *this,MethodInfo *method)

{
  fVar1 = (this->fields).currentProgress;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  pfVar3 = &(this->fields).animationDuration;
  (this->fields).currentProgress = fVar2;
  if (*pfVar3 <= fVar2 && fVar2 != *pfVar3) {
    (this->fields).currentProgress = 0.0;
  }
  pTVar4 = (Transform *)(this->fields).shine;
  if (pTVar4 != (Transform *)0x0) {
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                        ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
    fVar1 = pVVar5->z;
    pRVar6 = (this->fields).buttonRect;
    if (pRVar6 != (RectTransform *)0x0) {
      pRVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                          ((Rect *)&stack0xffffffdc,pRVar6,(MethodInfo *)0x0);
      fVar2 = SubscribableVariableBase`1[System::Single]::
               SubscribableVariableBase_1_System_Single__get_Value
                         ((SubscribableVariableBase_1_System_Single_ *)pRVar7->m_XMin,
                          (MethodInfo *)pRVar7->m_YMin);
      pAVar8 = (this->fields).buttonShinePositionCurve;
      if (pAVar8 != (AnimationCurve *)0x0) {
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (pAVar8,(this->fields).currentProgress,(MethodInfo *)0x0);
        pRVar6 = (this->fields).shine;
        if (pRVar6 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                    ((Rect *)&stack0xffffffdc,pRVar6,(MethodInfo *)0x0);
          uVar10 = 0;
          fVar11 = SubscribableVariableBase`1[System::Single]::
                   SubscribableVariableBase_1_System_Single__get_Value
                             ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffcc,
                              (MethodInfo *)0x0);
          pTVar4 = (Transform *)(this->fields).shine;
          value_01.y = (float)uVar10;
          value_01.x = fVar9 * fVar2 - fVar11;
          if (pTVar4 != (Transform *)0x0) {
            value_01.z = fVar1;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar4,value_01,(MethodInfo *)0x0);
            pIVar12 = (this->fields).topFlare;
            if (pIVar12 != (Image *)0x0) {
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pIVar12,(MethodInfo *)0x0);
              if (pTVar4 != (Transform *)0x0) {
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localPosition
                                    ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
                uVar10 = pVVar5->y;
                fVar1 = pVVar5->z;
                pRVar6 = (this->fields).buttonRect;
                if (pRVar6 != (RectTransform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                            ((Rect *)&stack0xffffffdc,pRVar6,(MethodInfo *)0x0);
                  fVar2 = SubscribableVariableBase`1[System::Single]::
                           SubscribableVariableBase_1_System_Single__get_Value
                                     ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffcc,
                                      (MethodInfo *)0x0);
                  pAVar8 = (this->fields).topFlarePositionCurve;
                  if (pAVar8 != (AnimationCurve *)0x0) {
                    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                             AnimationCurve_Evaluate
                                       (pAVar8,(this->fields).currentProgress,(MethodInfo *)0x0);
                    pIVar12 = (this->fields).topFlare;
                    uVar13 = CONCAT44(uVar10,fVar9 * fVar2);
                    if (pIVar12 != (Image *)0x0) {
                      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pIVar12,(MethodInfo *)0x0);
                      if (pTVar4 != (Transform *)0x0) {
                        value.z = fVar1;
                        value.x = (float)(int)uVar13;
                        value.y = (float)(int)((ulonglong)uVar13 >> 0x20);
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_set_localPosition(pTVar4,value,(MethodInfo *)0x0);
                        pIVar12 = (this->fields).topFlare;
                        if (pIVar12 != (Image *)0x0) {
                          pIVar14 = pIVar12->klass;
                          pMStack15 = (pIVar14->vtable).get_color.method;
                          (*(pIVar14->vtable).get_color.methodPtr)();
                          pAVar8 = (this->fields).flareAlphaCurve;
                          if (pAVar8 != (AnimationCurve *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                            AnimationCurve_Evaluate
                                      (pAVar8,(this->fields).currentProgress,(MethodInfo *)0x0);
                            pIVar12 = (this->fields).topFlare;
                            if (pIVar12 != (Image *)0x0) {
                              pIVar14 = pIVar12->klass;
                              pMStack15 = (pIVar14->vtable).set_color.method;
                              (*(pIVar14->vtable).set_color.methodPtr)();
                              pIVar12 = (this->fields).bottomFlare;
                              if (pIVar12 != (Image *)0x0) {
                                pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_transform
                                                    ((Component *)pIVar12,(MethodInfo *)0x0);
                                if (pTVar4 != (Transform *)0x0) {
                                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_get_localPosition
                                                      ((Vector3 *)&stack0xffffffe0,pTVar4,
                                                       (MethodInfo *)0x0);
                                  uVar16 = pVVar5->y;
                                  fVar1 = pVVar5->z;
                                  pRVar6 = (this->fields).buttonRect;
                                  if (pRVar6 != (RectTransform *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                    RectTransform_get_rect
                                              ((Rect *)&stack0xffffffdc,pRVar6,(MethodInfo *)0x0);
                                    fVar2 = SubscribableVariableBase`1[System::Single]::
                                             SubscribableVariableBase_1_System_Single__get_Value
                                                       ((SubscribableVariableBase_1_System_Single_ *
                                                        )&stack0xffffffcc,(MethodInfo *)0x0);
                                    pAVar8 = (this->fields).bottomFlarePositionCurve;
                                    if (pAVar8 != (AnimationCurve *)0x0) {
                                      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::
                                               AnimationCurve::AnimationCurve_Evaluate
                                                         (pAVar8,(this->fields).currentProgress,
                                                          (MethodInfo *)0x0);
                                      pIVar12 = (this->fields).bottomFlare;
                                      uVar13 = CONCAT44(uVar16,fVar9 * fVar2);
                                      if (pIVar12 != (Image *)0x0) {
                                        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component
                                                  ::Component_get_transform
                                                            ((Component *)pIVar12,(MethodInfo *)0x0);
                                        if (pTVar4 != (Transform *)0x0) {
                                          value_00.z = fVar1;
                                          value_00.x = (float)(int)uVar13;
                                          value_00.y = (float)(int)((ulonglong)uVar13 >> 0x20);
                                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_set_localPosition
                                                    (pTVar4,value_00,(MethodInfo *)0x0);
                                          pIVar12 = (this->fields).bottomFlare;
                                          if (pIVar12 != (Image *)0x0) {
                                            pIVar14 = pIVar12->klass;
                                            pMStack15 = (pIVar14->vtable).get_color.method;
                                            (*(pIVar14->vtable).get_color.methodPtr)();
                                            pAVar8 = (this->fields).flareAlphaCurve;
                                            if (pAVar8 != (AnimationCurve *)0x0) {
                                              UnityEngine.CoreModule.dll::UnityEngine::
                                              AnimationCurve::AnimationCurve_Evaluate
                                                        (pAVar8,(this->fields).currentProgress,
                                                         (MethodInfo *)0x0);
                                              pIVar12 = (this->fields).bottomFlare;
                                              if (pIVar12 != (Image *)0x0) {
                                                pIVar14 = pIVar12->klass;
                                                pMStack15 = (pIVar14->vtable).set_color.method;
                                                (*(pIVar14->vtable).set_color.methodPtr)();
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
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

