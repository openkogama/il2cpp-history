
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
                        ((Vector3 *)&stack0xffffffe4,pTVar4,(MethodInfo *)0x0);
    uVar6 = pVVar5->y;
    fVar1 = pVVar5->z;
    pRVar7 = (this->fields).buttonRect;
    if (pRVar7 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffe0,pRVar7,(MethodInfo *)0x0);
      pAVar8 = (this->fields).buttonShinePositionCurve;
      if (pAVar8 != (AnimationCurve *)0x0) {
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (pAVar8,(this->fields).currentProgress,(MethodInfo *)0x0);
        pRVar7 = (this->fields).shine;
        if (pRVar7 != (RectTransform *)0x0) {
          puVar9 = &UNK_?;
          pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                              ((Rect *)&stack0xffffffd0,pRVar7,(MethodInfo *)0x0);
          pTVar4 = (Transform *)(this->fields).shine;
          if (pTVar4 != (Transform *)0x0) {
            value_01.y = (float)uVar6;
            value_01.x = fVar2 * (float)puVar9 - pRVar10->m_Width;
            value_01.z = fVar1;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar4,value_01,(MethodInfo *)0x0);
            pIVar11 = (this->fields).topFlare;
            if (pIVar11 != (Image *)0x0) {
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pIVar11,(MethodInfo *)0x0);
              if (pTVar4 != (Transform *)0x0) {
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localPosition
                                    ((Vector3 *)&stack0xffffffe4,pTVar4,(MethodInfo *)0x0);
                uVar12 = pVVar5->y;
                fVar1 = pVVar5->z;
                pRVar7 = (this->fields).buttonRect;
                if (pRVar7 != (RectTransform *)0x0) {
                  pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                            RectTransform_get_rect
                                      ((Rect *)&stack0xffffffd0,pRVar7,(MethodInfo *)0x0);
                  fVar2 = pRVar10->m_Width;
                  pAVar8 = (this->fields).topFlarePositionCurve;
                  if (pAVar8 != (AnimationCurve *)0x0) {
                    fVar13 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                             AnimationCurve_Evaluate
                                       (pAVar8,(this->fields).currentProgress,(MethodInfo *)0x0);
                    fVar13 = fVar13 * fVar2;
                    pIVar11 = (this->fields).topFlare;
                    if (pIVar11 != (Image *)0x0) {
                      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pIVar11,(MethodInfo *)0x0);
                      if (pTVar4 != (Transform *)0x0) {
                        value.y = (float)uVar12;
                        value.x = fVar13;
                        value.z = fVar1;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_set_localPosition(pTVar4,value,(MethodInfo *)0x0);
                        pIVar11 = (this->fields).topFlare;
                        if (pIVar11 != (Image *)0x0) {
                          pIVar14 = pIVar11->klass;
                          pIStack15 = (pIVar14->vtable).set_color.methodPtr;
                          (*(code *)(pIVar14->vtable).get_color.method)();
                          pAVar8 = (this->fields).flareAlphaCurve;
                          if (pAVar8 != (AnimationCurve *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                            AnimationCurve_Evaluate
                                      (pAVar8,(this->fields).currentProgress,(MethodInfo *)0x0);
                            pIVar11 = (this->fields).topFlare;
                            if (pIVar11 != (Image *)0x0) {
                              pIVar14 = pIVar11->klass;
                              pIStack15 = (pIVar14->vtable).get_raycastTarget.methodPtr;
                              (*(code *)(pIVar14->vtable).set_color.method)();
                              pIVar11 = (this->fields).bottomFlare;
                              if (pIVar11 != (Image *)0x0) {
                                pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_transform
                                                    ((Component *)pIVar11,(MethodInfo *)0x0);
                                if (pTVar4 != (Transform *)0x0) {
                                  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_get_localPosition
                                                      ((Vector3 *)&stack0xffffffe4,pTVar4,
                                                       (MethodInfo *)0x0);
                                  uVar16 = pVVar5->y;
                                  fVar1 = pVVar5->z;
                                  pRVar7 = (this->fields).buttonRect;
                                  if (pRVar7 != (RectTransform *)0x0) {
                                    pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform
                                              ::RectTransform_get_rect
                                                        ((Rect *)&stack0xffffffd0,pRVar7,
                                                         (MethodInfo *)0x0);
                                    fVar2 = pRVar10->m_Width;
                                    pAVar8 = (this->fields).bottomFlarePositionCurve;
                                    if (pAVar8 != (AnimationCurve *)0x0) {
                                      fVar13 = UnityEngine.CoreModule.dll::UnityEngine::
                                               AnimationCurve::AnimationCurve_Evaluate
                                                         (pAVar8,(this->fields).currentProgress,
                                                          (MethodInfo *)0x0);
                                      fVar13 = fVar13 * fVar2;
                                      pIVar11 = (this->fields).bottomFlare;
                                      if (pIVar11 != (Image *)0x0) {
                                        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component
                                                  ::Component_get_transform
                                                            ((Component *)pIVar11,(MethodInfo *)0x0);
                                        if (pTVar4 != (Transform *)0x0) {
                                          value_00.y = (float)uVar16;
                                          value_00.x = fVar13;
                                          value_00.z = fVar1;
                                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_set_localPosition
                                                    (pTVar4,value_00,(MethodInfo *)0x0);
                                          pIVar11 = (this->fields).bottomFlare;
                                          if (pIVar11 != (Image *)0x0) {
                                            pIVar14 = pIVar11->klass;
                                            pIStack15 = (pIVar14->vtable).set_color.methodPtr;
                                            (*(code *)(pIVar14->vtable).get_color.method)();
                                            pAVar8 = (this->fields).flareAlphaCurve;
                                            if (pAVar8 != (AnimationCurve *)0x0) {
                                              UnityEngine.CoreModule.dll::UnityEngine::
                                              AnimationCurve::AnimationCurve_Evaluate
                                                        (pAVar8,(this->fields).currentProgress,
                                                         (MethodInfo *)0x0);
                                              pIVar11 = (this->fields).bottomFlare;
                                              if (pIVar11 != (Image *)0x0) {
                                                pIVar14 = pIVar11->klass;
                                                pIStack15 =
                                                     (pIVar14->vtable).get_raycastTarget.methodPtr;
                                                (*(code *)(pIVar14->vtable).set_color.method)();
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

