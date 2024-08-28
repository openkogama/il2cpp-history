
/* Void DoBoostEffect(Single) */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::
     XPNotificationBoostedBehaviour_DoBoostEffect
               (XPNotificationBoostedBehaviour *this,float timeSinceStart,MethodInfo *method)

{
  pRVar1 = (this->fields).boostEffectTransform;
  if (pRVar1 != (RectTransform *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pRVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pRVar1 = (this->fields).boostEffectTransform;
        if (pRVar1 == (RectTransform *)0x0) goto code_?;
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pRVar1,(MethodInfo *)0x0);
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
      }
      pTVar4 = (this->fields).unboostedXpText;
      if (pTVar4 != (Text *)0x0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar4,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          timeSinceStart = 0.0;
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar2,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            pTVar4 = (this->fields).unboostedXpText;
            if (pTVar4 == (Text *)0x0) goto code_?;
            timeSinceStart = (float)&UNK_?;
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar4,(MethodInfo *)0x0);
            if (pGVar2 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
          }
          this_00 = (this->fields).boostEffectCurve;
          if (this_00 != (AnimationCurve *)0x0) {
            fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                              (this_00,timeSinceStart - _UNK_?,(MethodInfo *)0x0);
            pTVar6 = (Transform *)(this->fields).boostEffectTransform;
            if (pTVar6 != (Transform *)0x0) {
              fVar7 = fVar5;
              pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                 ((Vector3 *)&stack0xffffffe4,pTVar6,(MethodInfo *)0x0);
              pTVar6 = (Transform *)(this->fields).boostEffectTransform;
              if (pTVar6 != (Transform *)0x0) {
                value.y = fVar7;
                value.x = fVar5;
                value.z = pVVar8->z;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (pTVar6,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void DoFillImageFillingEffect(Single) */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::
     XPNotificationBoostedBehaviour_DoFillImageFillingEffect
               (XPNotificationBoostedBehaviour *this,float timeSinceStart,MethodInfo *method)

{
  pPVar1 = (ProgressBarAndroid *)(this->fields).xpFillBar;
  if (pPVar1 != (ProgressBarAndroid *)0x0) {
    ProgressBarAndroid::ProgressBarAndroid_set_Progress
              (pPVar1,(timeSinceStart - _UNK_?) / _UNK_?,(MethodInfo *)0x0);
    pPVar1 = (ProgressBarAndroid *)(this->fields).xpFillBarBackground;
    if (pPVar1 != (ProgressBarAndroid *)0x0) {
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                (pPVar1,(timeSinceStart - _UNK_?) / _UNK_?,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DoGlowEffect(Single) */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::
     XPNotificationBoostedBehaviour_DoGlowEffect
               (XPNotificationBoostedBehaviour *this,float timeSinceStart,MethodInfo *method)

{
  if (_UNK_? < timeSinceStart) {
    pGVar1 = (this->fields).glowEffectGameObject;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pGVar1 = (this->fields).glowEffectGameObject;
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
    }
  }
  this_00 = (this->fields).glowEffectCurve;
  if (this_00 != (AnimationCurve *)0x0) {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,timeSinceStart - _UNK_?,(MethodInfo *)0x0);
    pGVar1 = (this->fields).glowEffectGameObject;
    if ((pGVar1 != (GameObject *)0x0) &&
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar1,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
      fVar5 = (fVar3 - _UNK_?) / _UNK_? + _UNK_?;
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                         ((Vector3 *)&stack0xffffffe4,pTVar4,(MethodInfo *)0x0);
      fStack7 = pVVar6->z;
      pGVar1 = (this->fields).glowEffectGameObject;
      if ((pGVar1 != (GameObject *)0x0) &&
         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar1,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
        value.y = fVar3;
        value.x = fVar5;
        value.z = fStack7;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar4,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void DoGradientEffect(Single) */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::
     XPNotificationBoostedBehaviour_DoGradientEffect
               (XPNotificationBoostedBehaviour *this,float timeSinceStart,MethodInfo *method)

{
  fVar1 = timeSinceStart - _UNK_?;
  pGVar2 = (this->fields).arrowGradientEffect;
  if (pGVar2 != (GradientEffect *)0x0) {
    fVar3 = (pGVar2->fields).bottom.r;
    fVar4 = (pGVar2->fields).bottom.g;
    fVar5 = (pGVar2->fields).bottom.b;
    pAVar6 = (this->fields).gradientEffectCurve;
    if (pAVar6 != (AnimationCurve *)0x0) {
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (pAVar6,fVar1,(MethodInfo *)0x0);
      pGVar2 = (this->fields).arrowGradientEffect;
      if (pGVar2 != (GradientEffect *)0x0) {
        (pGVar2->fields).bottom.r = fVar3;
        (pGVar2->fields).bottom.g = fVar4;
        (pGVar2->fields).bottom.b = fVar5;
        (pGVar2->fields).bottom.a = fVar7;
        pGVar2 = (this->fields).arrowGradientEffect;
        if (pGVar2 != (GradientEffect *)0x0) {
          fVar3 = (pGVar2->fields).top.b;
          pAVar6 = (this->fields).gradientEffectCurve;
          if (pAVar6 != (AnimationCurve *)0x0) {
            fVar1 = fVar1 - _UNK_?;
            fVar5 = 0.0;
            fVar4 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                              (pAVar6,fVar1,(MethodInfo *)0x0);
            pGVar2 = (this->fields).arrowGradientEffect;
            if (pGVar2 != (GradientEffect *)0x0) {
              (pGVar2->fields).top.r = fVar1;
              (pGVar2->fields).top.g = fVar5;
              (pGVar2->fields).top.b = fVar3;
              (pGVar2->fields).top.a = fVar4;
              pGVar2 = (this->fields).arrowGradientEffect;
              if (pGVar2 != (GradientEffect *)0x0) {
                pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pGVar2,(MethodInfo *)0x0);
                if (pGVar8 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar8,0,(MethodInfo *)0x0);
                  pGVar2 = (this->fields).arrowGradientEffect;
                  if (pGVar2 != (GradientEffect *)0x0) {
                    pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pGVar2,(MethodInfo *)0x0);
                    if (pGVar8 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar8,1,(MethodInfo *)0x0);
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
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void DoParticleEffect() */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::
     XPNotificationBoostedBehaviour_DoParticleEffect
               (XPNotificationBoostedBehaviour *this,MethodInfo *method)

{
  pXVar1 = (this->fields).xpBoostParticlesPreview;
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    if ((pXVar1->fields).isParticlesPlaying != 0) {
      return;
    }
    this_00 = (pXVar1->fields).xpBoostParticles;
    (pXVar1->fields).isParticlesPlaying = 1;
    if (this_00 != (ParticleSystem *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0);
      if (this_01 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,1,(MethodInfo *)0x0);
        if ((pXVar1->fields).xpBoostParticles != (ParticleSystem *)0x0) {
          if (pcRam_? == (code *)0x0) {
            pcRam_? = (code *)func_?();
          }
          uStack2 = 1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DoSlideOutEffect() */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::
     XPNotificationBoostedBehaviour_DoSlideOutEffect
               (XPNotificationBoostedBehaviour *this,MethodInfo *method)

{
  pTVar1 = (this->fields).xpText;
  if (pTVar1 != (Text *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pTVar1 = (this->fields).xpText;
        if (pTVar1 == (Text *)0x0) goto code_?;
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar1,(MethodInfo *)0x0);
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
      }
      pTVar4 = (Transform *)(this->fields).boostEffectTransform;
      if (pTVar4 != (Transform *)0x0) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffe4,pTVar4,(MethodInfo *)0x0);
        uVar6._0_4_ = pVVar5->x;
        uVar6._4_4_ = pVVar5->y;
        fVar7 = pVVar5->z;
        fVar8 = (this->fields).slideOutSpeed;
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        pTVar4 = (Transform *)(this->fields).boostEffectTransform;
        if (pTVar4 != (Transform *)0x0) {
          value.y = (float)(int)((ulonglong)uVar6 >> 0x20);
          value.x = fVar9 * fVar8 + (float)uVar6;
          value.z = fVar7;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar4,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Initialize(Int32, Int32) */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::XPNotificationBoostedBehaviour_Initialize
               (XPNotificationBoostedBehaviour *this,int32_t boostedXPAmount,
               int32_t unboostedXpAmount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    XpBoostParticlePreviewer_MethodInfo__UnityEngine__Object__Instantiate<XpBoostParticlePreviewer>_XpBoostParticlePreviewer_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral__XP_);
    func_?(&StringLiteral__XP);
    cRam_? = '\x01';
  }
  ppXVar1 = &(this->fields).xpBoostParticlesPreview;
  pXVar2 = *ppXVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pXVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pXVar2 = (this->fields).xpBoostParticlesPreviewPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar2 = (XpBoostParticlePreviewer *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pXVar2,
                        XpBoostParticlePreviewer_MethodInfo__UnityEngine__Object__Instantiate<XpBoostParticlePreviewer>_XpBoostParticlePreviewer_
                       );
    *ppXVar1 = pXVar2;
    func_?(ppXVar1,pXVar2);
    if (*ppXVar1 == (XpBoostParticlePreviewer *)0x0) goto code_?;
    previewPosition.z = -10000.0;
    previewPosition.x = 10000.0;
    previewPosition.y = -10000.0;
    XpBoostParticlePreviewer::XpBoostParticlePreviewer_Initialize
              (*ppXVar1,600,0xa0,CameraClearFlags__Enum_Color,LayerFlags__Enum_Preview,
               (Vector3)ZEXT812(0),previewPosition,(MethodInfo *)0x0);
    if ((*ppXVar1 == (XpBoostParticlePreviewer *)0x0) ||
       (this_00 = (this->fields).xpBoostParticlesRawImage, this_00 == (RawImage *)0x0))
    goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
              (this_00,(Texture *)((*ppXVar1)->fields).previewTexture,(MethodInfo *)0x0);
  }
  fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pTVar5 = (this->fields).xpText;
  (this->fields).startTime = fVar4;
  pSVar6 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&boostedXPAmount,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_3(pSVar6,StringLiteral__XP_,(MethodInfo *)0x0);
  if (pTVar5 != (Text *)0x0) {
    (*(code *)(pTVar5->klass->vtable).set_text.method)();
    pTVar5 = (this->fields).unboostedXpText;
    pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&unboostedXpAmount,(MethodInfo *)0x0);
    mscorlib.dll::System::String::String_Concat_3(pSVar6,StringLiteral__XP,(MethodInfo *)0x0);
    if (pTVar5 != (Text *)0x0) {
      (*(code *)(pTVar5->klass->vtable).set_text.method)();
      if ((this->fields).boostEffectStatPositionX != 0.0) {
code_?:
        XPNotificationBoostedBehaviour_Reset(this,(MethodInfo *)0x0);
        return;
      }
      this_01 = (Transform *)(this->fields).boostEffectTransform;
      if (this_01 != (Transform *)0x0) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)&stack0xffffffe4,this_01,(MethodInfo *)0x0);
        fVar4 = pVVar7->x;
        pRVar8 = (this->fields).boostEffectTransform;
        if (pRVar8 != (RectTransform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                    ((Rect *)&stack0xffffffe0,pRVar8,(MethodInfo *)0x0);
          pRVar8 = (this->fields).boostEffectTransform;
          if (pRVar8 != (RectTransform *)0x0) {
            VVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                              (pRVar8,(MethodInfo *)0x0);
            pRVar8 = (this->fields).boostEffectTransform;
            if (pRVar8 != (RectTransform *)0x0) {
              pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                       RectTransform_get_rect((Rect *)&stack0xffffffd0,pRVar8,(MethodInfo *)0x0);
              (this->fields).boostEffectStatPositionX =
                   ((float)pRVar8 - VVar9.x * pRVar10->m_Width) + fVar4;
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::XPNotificationBoostedBehaviour_Reset
               (XPNotificationBoostedBehaviour *this,MethodInfo *method)

{
  pTVar1 = (Transform *)(this->fields).boostEffectTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                       ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
    VStack_3.x = pVVar2->x;
    VStack_3.y = pVVar2->y;
    fVar4 = pVVar2->z;
    pRVar5 = (this->fields).boostEffectTransform;
    fVar6 = (this->fields).boostEffectStatPositionX;
    if (pRVar5 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffd0,pRVar5,(MethodInfo *)0x0);
      pRVar5 = (this->fields).boostEffectTransform;
      if (pRVar5 != (RectTransform *)0x0) {
        VVar7 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                           (pRVar5,(MethodInfo *)0x0);
        pRVar5 = (this->fields).boostEffectTransform;
        fVar8 = VVar7.x;
        if (pRVar5 != (RectTransform *)0x0) {
          pRVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                             ((Rect *)&stack0xffffffc0,pRVar5,(MethodInfo *)0x0);
          pTVar1 = (Transform *)(this->fields).boostEffectTransform;
          fVar6 = fVar6 - ((float)pRVar5 - fVar8 * pRVar9->m_Width);
          VStack_3.x = fVar6;
          if (pTVar1 != (Transform *)0x0) {
            value_00.y = VStack_3.y;
            value_00.x = fVar6;
            value_00.z = fVar4;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar1,value_00,(MethodInfo *)0x0);
            pRVar5 = (this->fields).boostEffectTransform;
            if (pRVar5 != (RectTransform *)0x0) {
              VStack_3.z = (float)&UNK_?;
              pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pRVar5,(MethodInfo *)0x0);
              if (pGVar10 != (GameObject *)0x0) {
                bVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_activeSelf(pGVar10,(MethodInfo *)0x0);
                if (bVar11 != 0) {
                  pRVar5 = (this->fields).boostEffectTransform;
                  if ((pRVar5 == (RectTransform *)0x0) ||
                     (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pRVar5,(MethodInfo *)0x0),
                     pGVar10 == (GameObject *)0x0)) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar10,0,(MethodInfo *)0x0);
                }
                pPVar12 = (ProgressBarAndroid *)(this->fields).xpFillBar;
                if (pPVar12 != (ProgressBarAndroid *)0x0) {
                  ProgressBarAndroid::ProgressBarAndroid_set_Progress(pPVar12,0.0,(MethodInfo *)0x0);
                  pPVar12 = (ProgressBarAndroid *)(this->fields).xpFillBarBackground;
                  if (pPVar12 != (ProgressBarAndroid *)0x0) {
                    ProgressBarAndroid::ProgressBarAndroid_set_Progress
                              (pPVar12,0.0,(MethodInfo *)0x0);
                    pGVar10 = (this->fields).glowEffectGameObject;
                    if ((pGVar10 != (GameObject *)0x0) &&
                       (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar10,(MethodInfo *)0x0),
                       pTVar1 != (Transform *)0x0)) {
                      fVar4 = 1.0;
                      fVar8 = 1.0;
                      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                               Transform_get_localScale(&VStack_3,pTVar1,(MethodInfo *)0x0);
                      fVar6 = pVVar2->z;
                      pGVar10 = (this->fields).glowEffectGameObject;
                      if ((pGVar10 != (GameObject *)0x0) &&
                         (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar10,(MethodInfo *)0x0),
                         pTVar1 != (Transform *)0x0)) {
                        value.y = fVar8;
                        value.x = fVar4;
                        value.z = fVar6;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                                  (pTVar1,value,(MethodInfo *)0x0);
                        pGVar10 = (this->fields).glowEffectGameObject;
                        if (pGVar10 != (GameObject *)0x0) {
                          bVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_activeSelf(pGVar10,(MethodInfo *)0x0);
                          if (bVar11 != 0) {
                            pGVar10 = (this->fields).glowEffectGameObject;
                            if (pGVar10 == (GameObject *)0x0) goto code_?;
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar10,0,(MethodInfo *)0x0);
                          }
                          pGVar13 = (this->fields).arrowGradientEffect;
                          if (pGVar13 != (GradientEffect *)0x0) {
                            fVar6 = (pGVar13->fields).bottom.r;
                            fVar4 = (pGVar13->fields).bottom.g;
                            fVar8 = (pGVar13->fields).bottom.b;
                            VStack_3.x = (pGVar13->fields).bottom.g;
                            VStack_3.y = (pGVar13->fields).bottom.b;
                            VStack_3.z = 0.0;
                            (pGVar13->fields).bottom.r = fVar6;
                            (pGVar13->fields).bottom.g = fVar4;
                            (pGVar13->fields).bottom.b = fVar8;
                            (pGVar13->fields).bottom.a = 0.0;
                            pGVar13 = (this->fields).arrowGradientEffect;
                            if (pGVar13 != (GradientEffect *)0x0) {
                              (pGVar13->fields).top.r = fVar6;
                              (pGVar13->fields).top.g = fVar4;
                              (pGVar13->fields).top.b = fVar8;
                              (pGVar13->fields).top.a = 0.0;
                              pTVar14 = (this->fields).xpText;
                              if ((pTVar14 != (Text *)0x0) &&
                                 (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_gameObject
                                                      ((Component *)pTVar14,(MethodInfo *)0x0),
                                 pGVar10 != (GameObject *)0x0)) {
                                bVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_get_activeSelf(pGVar10,(MethodInfo *)0x0);
                                if (bVar11 != 0) {
                                  pTVar14 = (this->fields).xpText;
                                  if ((pTVar14 == (Text *)0x0) ||
                                     (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                                Component_get_gameObject
                                                          ((Component *)pTVar14,(MethodInfo *)0x0),
                                     pGVar10 == (GameObject *)0x0)) goto code_?;
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_SetActive(pGVar10,0,(MethodInfo *)0x0);
                                }
                                pTVar14 = (this->fields).unboostedXpText;
                                if ((pTVar14 != (Text *)0x0) &&
                                   (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_get_gameObject
                                                        ((Component *)pTVar14,(MethodInfo *)0x0),
                                   pGVar10 != (GameObject *)0x0)) {
                                  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_activeSelf(pGVar10,(MethodInfo *)0x0);
                                  if (bVar11 == 0) {
                                    pTVar14 = (this->fields).unboostedXpText;
                                    if ((pTVar14 == (Text *)0x0) ||
                                       (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component
                                                  ::Component_get_gameObject
                                                            ((Component *)pTVar14,(MethodInfo *)0x0),
                                       pGVar10 == (GameObject *)0x0)) goto code_?;
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_SetActive(pGVar10,1,(MethodInfo *)0x0);
                                  }
                                  pXVar15 = (this->fields).xpBoostParticlesPreview;
                                  if (pXVar15 != (XpBoostParticlePreviewer *)0x0) {
                                    if ((pXVar15->fields).isParticlesPlaying == 0) {
                                      return;
                                    }
                                    pPVar16 = (pXVar15->fields).xpBoostParticles;
                                    (pXVar15->fields).isParticlesPlaying = 0;
                                    if (pPVar16 != (ParticleSystem *)0x0) {
                                      UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                      ParticleSystem::ParticleSystem_Stop_2
                                                (pPVar16,(MethodInfo *)0x0);
                                      pPVar16 = (pXVar15->fields).xpBoostParticles;
                                      if ((pPVar16 != (ParticleSystem *)0x0) &&
                                         (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Component::Component_get_gameObject
                                                              ((Component *)pPVar16,(MethodInfo *)0x0
                                                              ), pGVar10 != (GameObject *)0x0)) {
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_SetActive(pGVar10,0,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::XPNotificationBoostedBehaviour_Update
               (XPNotificationBoostedBehaviour *this,MethodInfo *method)

{
  pXVar1 = this;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pXVar3 = (XPNotificationBoostedBehaviour *)(fVar2 - (this->fields).startTime);
  if (_UNK_? < (float)pXVar3) {
    pPVar4 = (ProgressBarAndroid *)(this->fields).xpFillBar;
    if (pPVar4 == (ProgressBarAndroid *)0x0) goto code_?;
    ProgressBarAndroid::ProgressBarAndroid_set_Progress
              (pPVar4,((float)pXVar3 - _UNK_?) / _UNK_?,(MethodInfo *)0x0);
    pPVar4 = (ProgressBarAndroid *)(this->fields).xpFillBarBackground;
    if (pPVar4 == (ProgressBarAndroid *)0x0) goto code_?;
    ProgressBarAndroid::ProgressBarAndroid_set_Progress
              (pPVar4,((float)pXVar3 - _UNK_?) / _UNK_?,(MethodInfo *)0x0);
  }
  if (_UNK_? < (float)pXVar3) {
    pRVar5 = (this->fields).boostEffectTransform;
    if ((pRVar5 == (RectTransform *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pRVar5,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
    goto code_?;
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar6,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      pRVar5 = (this->fields).boostEffectTransform;
      if ((pRVar5 == (RectTransform *)0x0) ||
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pRVar5,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,1,(MethodInfo *)0x0);
    }
    pTVar8 = (this->fields).unboostedXpText;
    if ((pTVar8 == (Text *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar8,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
    goto code_?;
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar6,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      pTVar8 = (this->fields).unboostedXpText;
      if ((pTVar8 == (Text *)0x0) ||
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pTVar8,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,0,(MethodInfo *)0x0);
    }
    pAVar9 = (this->fields).boostEffectCurve;
    if (pAVar9 == (AnimationCurve *)0x0) goto code_?;
    pVVar10 = (Vector3 *)
              UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (pAVar9,(float)pXVar3 - _UNK_?,(MethodInfo *)0x0);
    pTVar11 = (Transform *)(this->fields).boostEffectTransform;
    if (pTVar11 == (Transform *)0x0) goto code_?;
    puVar12 = &UNK_?;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        (pVVar10,pTVar11,(MethodInfo *)0x0);
    pTVar11 = (Transform *)(this->fields).boostEffectTransform;
    if (pTVar11 == (Transform *)0x0) goto code_?;
    value_01.y = (float)pVVar10;
    value_01.x = (float)puVar12;
    value_01.z = pVVar13->z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar11,value_01,(MethodInfo *)0x0);
    pGVar14 = (this->fields).arrowGradientEffect;
    if (pGVar14 == (GradientEffect *)0x0) goto code_?;
    fVar2 = (pGVar14->fields).bottom.r;
    fVar15 = (pGVar14->fields).bottom.g;
    fVar16 = (pGVar14->fields).bottom.b;
    pAVar9 = (this->fields).gradientEffectCurve;
    if (pAVar9 == (AnimationCurve *)0x0) goto code_?;
    fVar17 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       (pAVar9,(float)pVVar10,(MethodInfo *)0x0);
    pGVar14 = (this->fields).arrowGradientEffect;
    if (pGVar14 == (GradientEffect *)0x0) goto code_?;
    (pGVar14->fields).bottom.r = fVar2;
    (pGVar14->fields).bottom.g = fVar15;
    (pGVar14->fields).bottom.b = fVar16;
    (pGVar14->fields).bottom.a = fVar17;
    pGVar14 = (this->fields).arrowGradientEffect;
    if (pGVar14 == (GradientEffect *)0x0) goto code_?;
    fVar2 = (pGVar14->fields).top.r;
    fVar15 = (pGVar14->fields).top.g;
    fVar16 = (pGVar14->fields).top.b;
    pAVar9 = (this->fields).gradientEffectCurve;
    if (pAVar9 == (AnimationCurve *)0x0) goto code_?;
    fVar17 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       (pAVar9,(float)pVVar10 - _UNK_?,(MethodInfo *)0x0);
    pGVar14 = (this->fields).arrowGradientEffect;
    if (pGVar14 == (GradientEffect *)0x0) goto code_?;
    (pGVar14->fields).top.r = fVar2;
    (pGVar14->fields).top.g = fVar15;
    (pGVar14->fields).top.b = fVar16;
    (pGVar14->fields).top.a = fVar17;
    pGVar14 = (this->fields).arrowGradientEffect;
    if ((pGVar14 == (GradientEffect *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pGVar14,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,0,(MethodInfo *)0x0);
    pGVar14 = (this->fields).arrowGradientEffect;
    if ((pGVar14 == (GradientEffect *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pGVar14,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,1,(MethodInfo *)0x0);
  }
  if (_UNK_? < (float)pXVar3) {
    if (_UNK_? < (float)pXVar3) {
      pGVar6 = (this->fields).glowEffectGameObject;
      if (pGVar6 == (GameObject *)0x0) goto code_?;
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                         (pGVar6,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        pGVar6 = (this->fields).glowEffectGameObject;
        if (pGVar6 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,1,(MethodInfo *)0x0);
      }
    }
    pAVar9 = (this->fields).glowEffectCurve;
    if (pAVar9 == (AnimationCurve *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
              (pAVar9,(float)pXVar3 - _UNK_?,(MethodInfo *)0x0);
    pGVar6 = (this->fields).glowEffectGameObject;
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    fVar2 = 0.0;
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar6,(MethodInfo *)0x0);
    if (pTVar11 == (Transform *)0x0) goto code_?;
    pXVar3 = (XPNotificationBoostedBehaviour *)
              ((fVar2 - _UNK_?) / _UNK_? + _UNK_?);
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        ((Vector3 *)&stack0xffffffdc,pTVar11,(MethodInfo *)0x0);
    fVar15 = pVVar10->z;
    pGVar6 = (this->fields).glowEffectGameObject;
    if ((pGVar6 == (GameObject *)0x0) ||
       (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0), pTVar11 == (Transform *)0x0))
    goto code_?;
    value.y = fVar2;
    value.x = (float)pXVar3;
    value.z = fVar15;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar11,value,(MethodInfo *)0x0);
  }
  this = pXVar3;
  if (_UNK_? < (float)this) {
    pTVar8 = (pXVar1->fields).xpText;
    if ((pTVar8 == (Text *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar8,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0))
    goto code_?;
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar6,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      pTVar8 = (pXVar1->fields).xpText;
      if ((pTVar8 == (Text *)0x0) ||
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pTVar8,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,1,(MethodInfo *)0x0);
    }
    pTVar11 = (Transform *)(pXVar1->fields).boostEffectTransform;
    if (pTVar11 == (Transform *)0x0) goto code_?;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffdc,pTVar11,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)pVVar10->x;
    uVar18 = pVVar10->y;
    fVar15 = pVVar10->z;
    fVar2 = (pXVar1->fields).slideOutSpeed;
    fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
    pTVar11 = (Transform *)(pXVar1->fields).boostEffectTransform;
    if (pTVar11 == (Transform *)0x0) goto code_?;
    value_00.y = (float)uVar18;
    value_00.x = fVar16 * fVar2 + (float)method_00;
    value_00.z = fVar15;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar11,value_00,(MethodInfo *)0x0);
  }
  if ((float)this <= _UNK_?) {
    return;
  }
  pXVar19 = (pXVar1->fields).xpBoostParticlesPreview;
  if (pXVar19 != (XpBoostParticlePreviewer *)0x0) {
    if ((pXVar19->fields).isParticlesPlaying != 0) {
      return;
    }
    pPVar20 = (pXVar19->fields).xpBoostParticles;
    (pXVar19->fields).isParticlesPlaying = 1;
    if ((pPVar20 != (ParticleSystem *)0x0) &&
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pPVar20,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,1,(MethodInfo *)0x0);
      pPVar20 = (pXVar19->fields).xpBoostParticles;
      if (pPVar20 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                  (pPVar20,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}

