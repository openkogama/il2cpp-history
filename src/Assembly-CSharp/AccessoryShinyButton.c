
/* Void Start() */

void Assembly-CSharp.dll::AccessoryShinyButton::AccessoryShinyButton_Start
               (AccessoryShinyButton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).buttonShine;
  if (this_00 != (Transform *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this_00,
                        UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                       );
    (this->fields).shine = (RectTransform *)pMVar1;
    (this->fields).currentProgress = 0.0;
    return;
  }
  func_?(0);
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
    uVar6 = pVVar5->y;
    fVar1 = pVVar5->z;
    pRVar7 = (this->fields).buttonRect;
    if (pRVar7 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffdc,pRVar7,(MethodInfo *)0x0);
      fVar2 = SubscribableVariableBase`1[System::Single]::
               SubscribableVariableBase_1_System_Single__get_Value
                         ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffcc,
                          (MethodInfo *)0x0);
      pAVar8 = (this->fields).buttonShinePositionCurve;
      if (pAVar8 != (AnimationCurve *)0x0) {
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (pAVar8,(this->fields).currentProgress,(MethodInfo *)0x0);
        pRVar7 = (this->fields).shine;
        if (pRVar7 != (RectTransform *)0x0) {
          pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                              ((Rect *)&stack0xffffffdc,pRVar7,(MethodInfo *)0x0);
          fVar11 = SubscribableVariableBase`1[System::Single]::
                   SubscribableVariableBase_1_System_Single__get_Value
                             ((SubscribableVariableBase_1_System_Single_ *)pRVar10->m_XMin,
                              (MethodInfo *)pRVar10->m_YMin);
          pTVar4 = (Transform *)(this->fields).shine;
          if (pTVar4 != (Transform *)0x0) {
            value_00.y = (float)uVar6;
            value_00.x = fVar9 * fVar2 - fVar11;
            value_00.z = fVar1;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar4,value_00,(MethodInfo *)0x0);
            pIVar12 = (this->fields).topFlare;
            if (pIVar12 != (Image *)0x0) {
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)pIVar12,(MethodInfo *)0x0);
              if (pTVar4 != (Transform *)0x0) {
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_localPosition
                                   ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
                fVar1 = pVVar5->z;
                pRVar7 = (this->fields).buttonRect;
                if (pRVar7 != (RectTransform *)0x0) {
                  puVar13 = &UNK_?;
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                            ((Rect *)&stack0xffffffdc,pRVar7,(MethodInfo *)0x0);
                  SubscribableVariableBase`1[System::Single]::
                  SubscribableVariableBase_1_System_Single__get_Value
                            ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffac,
                             (MethodInfo *)0x0);
                  pAVar8 = (this->fields).topFlarePositionCurve;
                  if (pAVar8 != (AnimationCurve *)0x0) {
                    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                             AnimationCurve_Evaluate
                                       (pAVar8,(this->fields).currentProgress,(MethodInfo *)0x0);
                    pIVar12 = (this->fields).topFlare;
                    uVar14 = CONCAT44(puVar13,fVar2 * 3.8210595e-29);
                    if (pIVar12 != (Image *)0x0) {
                      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_transform((Component_1 *)pIVar12,(MethodInfo *)0x0);
                      if (pTVar4 != (Transform *)0x0) {
                        value.z = fVar1;
                        value.x = (float)(int)uVar14;
                        value.y = (float)(int)((ulonglong)uVar14 >> 0x20);
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_set_localPosition(pTVar4,value,(MethodInfo *)0x0);
                        pIVar12 = (this->fields).topFlare;
                        if (pIVar12 != (Image *)0x0) {
                          (*(code *)(pIVar12->klass->vtable).get_color.method)();
                          pAVar8 = (this->fields).flareAlphaCurve;
                          if (pAVar8 != (AnimationCurve *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                            AnimationCurve_Evaluate
                                      (pAVar8,(this->fields).currentProgress,(MethodInfo *)0x0);
                            pIVar12 = (this->fields).topFlare;
                            if (pIVar12 != (Image *)0x0) {
                              (*(code *)(pIVar12->klass->vtable).set_color.method)();
                              pIVar12 = (this->fields).bottomFlare;
                              if (pIVar12 != (Image *)0x0) {
                                pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_1_get_transform
                                                    ((Component_1 *)pIVar12,(MethodInfo *)0x0);
                                if (pTVar4 != (Transform *)0x0) {
                                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                           Transform_get_localPosition
                                                     ((Vector3 *)&stack0xffffffe0,pTVar4,
                                                      (MethodInfo *)0x0);
                                  uVar15 = pVVar5->y;
                                  fVar1 = pVVar5->z;
                                  pRVar7 = (this->fields).buttonRect;
                                  if (pRVar7 != (RectTransform *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                    RectTransform_get_rect
                                              ((Rect *)&stack0xffffffdc,pRVar7,(MethodInfo *)0x0);
                                    fVar2 = SubscribableVariableBase`1[System::Single]::
                                             SubscribableVariableBase_1_System_Single__get_Value
                                                       ((SubscribableVariableBase_1_System_Single_ *
                                                        )&stack0xffffff9c,(MethodInfo *)0x0);
                                    pAVar8 = (this->fields).bottomFlarePositionCurve;
                                    if (pAVar8 != (AnimationCurve *)0x0) {
                                      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::
                                               AnimationCurve::AnimationCurve_Evaluate
                                                         (pAVar8,(this->fields).currentProgress,
                                                          (MethodInfo *)0x0);
                                      pIVar12 = (this->fields).bottomFlare;
                                      uVar14 = CONCAT44(uVar15,fVar9 * fVar2);
                                      if (pIVar12 != (Image *)0x0) {
                                        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component
                                                  ::Component_1_get_transform
                                                            ((Component_1 *)pIVar12,(MethodInfo *)0x0
                                                            );
                                        if (pTVar4 != (Transform *)0x0) {
                                          value_01.z = fVar1;
                                          value_01.x = (float)(int)uVar14;
                                          value_01.y = (float)(int)((ulonglong)uVar14 >> 0x20);
                                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_set_localPosition
                                                    (pTVar4,value_01,(MethodInfo *)0x0);
                                          pIVar12 = (this->fields).bottomFlare;
                                          if (pIVar12 != (Image *)0x0) {
                                            (*(code *)(pIVar12->klass->vtable).get_color.method)();
                                            pAVar8 = (this->fields).flareAlphaCurve;
                                            if (pAVar8 != (AnimationCurve *)0x0) {
                                              UnityEngine.CoreModule.dll::UnityEngine::
                                              AnimationCurve::AnimationCurve_Evaluate
                                                        (pAVar8,(this->fields).currentProgress,
                                                         (MethodInfo *)0x0);
                                              pIVar12 = (this->fields).bottomFlare;
                                              if (pIVar12 != (Image *)0x0) {
                                                (*(code *)(pIVar12->klass->vtable).set_color.method)
                                                          ();
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
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

