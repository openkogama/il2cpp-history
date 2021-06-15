
/* Void DoBoostEffect(Single) */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::
     XPNotificationBoostedBehaviour_DoBoostEffect
               (XPNotificationBoostedBehaviour *this,float timeSinceStart,MethodInfo *method)

{
  pRVar1 = (this->fields).boostEffectTransform;
  if (pRVar1 != (RectTransform *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pRVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pRVar1 = (this->fields).boostEffectTransform;
        if (pRVar1 == (RectTransform *)0x0) goto code_?;
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pRVar1,(MethodInfo *)0x0);
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
      }
      pTVar4 = (this->fields).unboostedXpText;
      if (pTVar4 != (Text *)0x0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pTVar4,(MethodInfo *)0x0);
        if (pGVar2 != (GameObject *)0x0) {
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar2,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            pTVar4 = (this->fields).unboostedXpText;
            if (pTVar4 == (Text *)0x0) goto code_?;
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               ((Component_1 *)pTVar4,(MethodInfo *)0x0);
            if (pGVar2 == (GameObject *)0x0) goto code_?;
            timeSinceStart = 0.0;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,0,(MethodInfo *)0x0);
          }
          this_00 = (this->fields).boostEffectCurve;
          if (this_00 != (AnimationCurve *)0x0) {
            time = timeSinceStart - _UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,time,(MethodInfo *)0x0);
            pTVar5 = (Transform *)(this->fields).boostEffectTransform;
            if (pTVar5 != (Transform *)0x0) {
              puVar6 = &UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        ((Vector3 *)&stack0xffffffd8,pTVar5,(MethodInfo *)0x0);
              puVar7 = &UNK_?;
              func_?();
              pTVar5 = (Transform *)(this->fields).boostEffectTransform;
              if (pTVar5 != (Transform *)0x0) {
                value.y = (float)puVar6;
                value.x = time;
                value.z = (float)puVar7;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                          (pTVar5,value,(MethodInfo *)0x0);
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void DoFillImageFillingEffect(Single) */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::
     XPNotificationBoostedBehaviour_DoFillImageFillingEffect
               (XPNotificationBoostedBehaviour *this,float timeSinceStart,MethodInfo *method)

{
  pPVar1 = (this->fields).xpFillBar;
  if (pPVar1 != (ProgressBar *)0x0) {
    ProgressBar::ProgressBar_set_Progress
              (pPVar1,(timeSinceStart - _UNK_?) / _UNK_?,(MethodInfo *)0x0);
    pPVar1 = (this->fields).xpFillBarBackground;
    if (pPVar1 != (ProgressBar *)0x0) {
      ProgressBar::ProgressBar_set_Progress
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
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                ((Vector3 *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
      fVar3 = (fVar3 - _UNK_?) / _UNK_? + _UNK_?;
      uVar5 = CONCAT44(&stack0xfffffff0,&UNK_?);
      func_?();
      pGVar1 = (this->fields).glowEffectGameObject;
      if ((pGVar1 != (GameObject *)0x0) &&
         (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar1,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
        value.z = fVar3;
        value.x = (float)(int)uVar5;
        value.y = (float)(int)((ulonglong)uVar5 >> 0x20);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (pTVar4,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
                         Component_1_get_gameObject((Component_1 *)pGVar2,(MethodInfo *)0x0);
                if (pGVar8 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar8,0,(MethodInfo *)0x0);
                  pGVar2 = (this->fields).arrowGradientEffect;
                  if (pGVar2 != (GradientEffect *)0x0) {
                    pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_gameObject((Component_1 *)pGVar2,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void DoParticleEffect() */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::
     XPNotificationBoostedBehaviour_DoParticleEffect
               (XPNotificationBoostedBehaviour *this,MethodInfo *method)

{
  this_00 = (this->fields).xpBoostParticlesPreview;
  if (this_00 != (XpBoostParticlePreviewer *)0x0) {
    uVar1 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
            Byte]::
            Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                      ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)this_00,
                       (MethodInfo *)0x0);
    if (uVar1 != 0) {
      return;
    }
    if ((this->fields).xpBoostParticlesPreview != (XpBoostParticlePreviewer *)0x0) {
      *(undefined1 *)(in_stack_2 + 0x18) = 1;
      if (((*(Component_1 **)(in_stack_2 + 0x14) != (Component_1 *)0x0) &&
          (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                               (*(Component_1 **)(in_stack_2 + 0x14),(MethodInfo *)0x0),
          this_01 != (GameObject *)0x0)) &&
         (UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,1,(MethodInfo *)0x0), *(int *)(in_stack_2 + 0x14) != 0)) {
        puStack3 = (undefined *)0x0;
        pcVar4 = pcRam_?;
        if (pcRam_? == (code *)0x0) {
          pcVar4 = (code *)func_?();
          if (pcVar4 == (code *)0x0) {
            puStack3 = (undefined *)0x0;
            func_?();
            func_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pcRam_? = pcVar4;
        uStack5 = 1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)();
        return;
      }
      func_?(0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DoSlideOutEffect() */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::
     XPNotificationBoostedBehaviour_DoSlideOutEffect
               (XPNotificationBoostedBehaviour *this,MethodInfo *method)

{
  pTVar1 = (this->fields).xpText;
  if (pTVar1 != (Text *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)pTVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pTVar1 = (this->fields).xpText;
        if (pTVar1 == (Text *)0x0) goto code_?;
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pTVar1,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  SStack_1.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_1.monitor = (MonitorData *)0x0;
  SStack_1.fields.value = 0.0;
  SStack_1.fields.OnChange = (Action_1_Single_ *)0x0;
  SStack_2.klass = (SubscribableVariableBase_1_System_Single___Class *)0x0;
  SStack_2.monitor = (MonitorData *)0x0;
  SStack_2.fields.value = 0.0;
  SStack_2.fields.OnChange = (Action_1_Single_ *)0x0;
  pXVar3 = (this->fields).xpBoostParticlesPreview;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pXVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    pXVar3 = (this->fields).xpBoostParticlesPreviewPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar3,
                        XpBoostParticlePreviewer_MethodInfo__UnityEngine__Object__Instantiate<XpBoostParticlePreviewer>_XpBoostParticlePreviewer_
                       );
    fStack_5 = 0.0;
    (this->fields).xpBoostParticlesPreview = pXVar3;
    uStack_6 = 0;
    func_?(&uStack_6,0,0);
    fStack_7 = 0.0;
    auStack_8._4_4_ = 0.0;
    fStack_9 = 0.0;
    func_?(auStack_8 + 4,0x461c4000,0xc61c4000);
    if (pXVar3 == (XpBoostParticlePreviewer *)0x0) goto code_?;
    cameraOffset.z = fStack_5;
    cameraOffset.x = (float)uStack_6;
    cameraOffset.y = (float)uStack_6._4_4_;
    previewPosition.z = fStack_7;
    previewPosition.x = (float)auStack_8._4_4_;
    previewPosition.y = fStack_9;
    XpBoostParticlePreviewer::XpBoostParticlePreviewer_Initialize
              (pXVar3,600,0xa0,CameraClearFlags__Enum_Color,LayerFlags__Enum_Preview,cameraOffset,
               previewPosition,(MethodInfo *)0x0);
    this_00 = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
               *)(this->fields).xpBoostParticlesPreview;
    this_01 = (this->fields).xpBoostParticlesRawImage;
    if (this_00 ==
        (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)0x0)
    goto code_?;
    value = (Texture *)
            System.Core.dll::System::Linq::
            Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
            JsonSchemaType]::
            Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                      (this_00,(MethodInfo *)0x0);
    if (this_01 == (RawImage *)0x0) goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
              (this_01,value,(MethodInfo *)0x0);
  }
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pTVar11 = (this->fields).xpText;
  (this->fields).startTime = fVar10;
  pSVar12 = (String *)func_?(&boostedXPAmount,0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar12 = mscorlib.dll::System::String::String_Concat_2
                     (pSVar12,StringLiteral__XP_,(MethodInfo *)0x0);
  if (pTVar11 != (Text *)0x0) {
    (*(code *)(pTVar11->klass->vtable).set_text.method)
              (pTVar11,pSVar12,(pTVar11->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar11 = (this->fields).unboostedXpText;
    pSVar12 = (String *)func_?(&unboostedXpAmount,0);
    pSVar12 = mscorlib.dll::System::String::String_Concat_2
                       (pSVar12,StringLiteral__XP,(MethodInfo *)0x0);
    if (pTVar11 != (Text *)0x0) {
      (*(code *)(pTVar11->klass->vtable).set_text.method)
                (pTVar11,pSVar12,(pTVar11->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      if ((this->fields).boostEffectStatPositionX != 0.0) {
code_?:
        XPNotificationBoostedBehaviour_Reset(this,(MethodInfo *)0x0);
        return;
      }
      this_02 = (Transform *)(this->fields).boostEffectTransform;
      if (this_02 != (Transform *)0x0) {
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           ((Vector3 *)(auStack_8 + 4),this_02,(MethodInfo *)0x0);
        uStack_6._0_4_ = pVVar13->x;
        uStack_6._4_4_ = pVVar13->y;
        pRVar14 = (this->fields).boostEffectTransform;
        if (pRVar14 != (RectTransform *)0x0) {
          pRVar15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                             ((Rect *)auStack_8,pRVar14,(MethodInfo *)0x0);
          SStack_1.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar15->m_XMin;
          SStack_1.monitor = (MonitorData *)pRVar15->m_YMin;
          SStack_1.fields.value = pRVar15->m_Width;
          SStack_1.fields.OnChange = (Action_1_Single_ *)pRVar15->m_Height;
          fStack_16 = SubscribableVariableBase`1[System::Single]::
                     SubscribableVariableBase_1_System_Single__get_Value
                               (&SStack_1,(MethodInfo *)0x0);
          pRVar14 = (this->fields).boostEffectTransform;
          if (pRVar14 != (RectTransform *)0x0) {
            VVar17 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                              (pRVar14,(MethodInfo *)0x0);
            fStack_9 = VVar17.x;
            pRVar14 = (this->fields).boostEffectTransform;
            if (pRVar14 != (RectTransform *)0x0) {
              pRVar15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                       RectTransform_get_rect((Rect *)&stack0xffffffac,pRVar14,(MethodInfo *)0x0);
              SStack_2.klass = (SubscribableVariableBase_1_System_Single___Class *)pRVar15->m_XMin;
              SStack_2.monitor = (MonitorData *)pRVar15->m_YMin;
              SStack_2.fields.value = pRVar15->m_Width;
              SStack_2.fields.OnChange = (Action_1_Single_ *)pRVar15->m_Height;
              fVar10 = SubscribableVariableBase`1[System::Single]::
                       SubscribableVariableBase_1_System_Single__get_Value
                                 (&SStack_2,(MethodInfo *)0x0);
              (this->fields).boostEffectStatPositionX =
                   (fStack_16 - fVar10 * fStack_9) + (float)uStack_6;
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::XPNotificationBoostedBehaviour_Reset
               (XPNotificationBoostedBehaviour *this,MethodInfo *method)

{
  pTVar1 = (Transform *)(this->fields).boostEffectTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                        ((Vector3 *)&stack0xffffffe8,pTVar1,(MethodInfo *)0x0);
    uVar3 = pVVar2->y;
    fVar4 = pVVar2->z;
    pRVar5 = (this->fields).boostEffectTransform;
    fVar6 = (this->fields).boostEffectStatPositionX;
    if (pRVar5 != (RectTransform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                ((Rect *)&stack0xffffffe4,pRVar5,(MethodInfo *)0x0);
      fVar7 = SubscribableVariableBase`1[System::Single]::
               SubscribableVariableBase_1_System_Single__get_Value
                         ((SubscribableVariableBase_1_System_Single_ *)&stack0xffffffb8,
                          (MethodInfo *)0x0);
      pRVar5 = (this->fields).boostEffectTransform;
      if (pRVar5 != (RectTransform *)0x0) {
        VVar8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                           (pRVar5,(MethodInfo *)0x0);
        fVar9 = VVar8.x;
        pRVar5 = (this->fields).boostEffectTransform;
        if (pRVar5 != (RectTransform *)0x0) {
          pRVar10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                              ((Rect *)&stack0xffffff98,pRVar5,(MethodInfo *)0x0);
          fVar11 = SubscribableVariableBase`1[System::Single]::
                   SubscribableVariableBase_1_System_Single__get_Value
                             ((SubscribableVariableBase_1_System_Single_ *)pRVar10->m_Width,
                              (MethodInfo *)pRVar10->m_Height);
          pTVar1 = (Transform *)(this->fields).boostEffectTransform;
          if (pTVar1 != (Transform *)0x0) {
            value.y = (float)uVar3;
            value.x = fVar6 - (fVar7 - fVar11 * fVar9);
            value.z = fVar4;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar1,value,(MethodInfo *)0x0);
            pRVar5 = (this->fields).boostEffectTransform;
            if (pRVar5 != (RectTransform *)0x0) {
              pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject((Component_1 *)pRVar5,(MethodInfo *)0x0);
              if (pGVar12 != (GameObject *)0x0) {
                uVar13 = CONCAT44(&UNK_?,pRVar5);
                bVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_activeSelf(pGVar12,(MethodInfo *)0x0);
                if (bVar14 != 0) {
                  pRVar5 = (this->fields).boostEffectTransform;
                  if (pRVar5 == (RectTransform *)0x0) goto code_?;
                  pGVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_gameObject((Component_1 *)pRVar5,(MethodInfo *)0x0);
                  if (pGVar15 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar15,0,(MethodInfo *)0x0);
                }
                pPVar16 = (this->fields).xpFillBar;
                if (pPVar16 != (ProgressBar *)0x0) {
                  ProgressBar::ProgressBar_set_Progress(pPVar16,0.0,(MethodInfo *)0x0);
                  pPVar16 = (this->fields).xpFillBarBackground;
                  if (pPVar16 != (ProgressBar *)0x0) {
                    ProgressBar::ProgressBar_set_Progress(pPVar16,0.0,(MethodInfo *)0x0);
                    pGVar15 = (this->fields).glowEffectGameObject;
                    if (pGVar15 != (GameObject *)0x0) {
                      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_transform(pGVar15,(MethodInfo *)0x0);
                      if (pTVar1 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                  ((Vector3 *)&stack0xffffffe8,pTVar1,(MethodInfo *)0x0);
                        func_?();
                        pGVar15 = (this->fields).glowEffectGameObject;
                        if (pGVar15 != (GameObject *)0x0) {
                          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar15,(MethodInfo *)0x0);
                          if (pTVar1 != (Transform *)0x0) {
                            value_00.z = (float)pGVar12;
                            value_00.x = (float)(int)uVar13;
                            value_00.y = (float)(int)((ulonglong)uVar13 >> 0x20);
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_localScale(pTVar1,value_00,(MethodInfo *)0x0);
                            pGVar12 = (this->fields).glowEffectGameObject;
                            if (pGVar12 != (GameObject *)0x0) {
                              bVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_get_activeSelf(pGVar12,(MethodInfo *)0x0);
                              if (bVar14 != 0) {
                                pGVar12 = (this->fields).glowEffectGameObject;
                                if (pGVar12 == (GameObject *)0x0) goto code_?;
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_SetActive(pGVar12,0,(MethodInfo *)0x0);
                              }
                              pGVar17 = (this->fields).arrowGradientEffect;
                              if (pGVar17 != (GradientEffect *)0x0) {
                                fVar6 = (pGVar17->fields).bottom.r;
                                fVar4 = (pGVar17->fields).bottom.g;
                                fVar7 = (pGVar17->fields).bottom.b;
                                (pGVar17->fields).bottom.r = fVar6;
                                (pGVar17->fields).bottom.g = fVar4;
                                (pGVar17->fields).bottom.b = fVar7;
                                (pGVar17->fields).bottom.a = 0.0;
                                pGVar17 = (this->fields).arrowGradientEffect;
                                if (pGVar17 != (GradientEffect *)0x0) {
                                  (pGVar17->fields).top.r = fVar6;
                                  (pGVar17->fields).top.g = fVar4;
                                  (pGVar17->fields).top.b = fVar7;
                                  (pGVar17->fields).top.a = 0.0;
                                  pTVar18 = (this->fields).xpText;
                                  if (pTVar18 != (Text *)0x0) {
                                    pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_1_get_gameObject
                                                        ((Component_1 *)pTVar18,(MethodInfo *)0x0);
                                    if (pGVar12 != (GameObject *)0x0) {
                                      bVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                              GameObject_get_activeSelf(pGVar12,(MethodInfo *)0x0);
                                      if (bVar14 != 0) {
                                        pTVar18 = (this->fields).xpText;
                                        if (pTVar18 == (Text *)0x0) goto code_?;
                                        pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component
                                                  ::Component_1_get_gameObject
                                                            ((Component_1 *)pTVar18,(MethodInfo *)0x0
                                                            );
                                        if (pGVar12 == (GameObject *)0x0) goto code_?;
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_SetActive(pGVar12,0,(MethodInfo *)0x0);
                                      }
                                      pTVar18 = (this->fields).unboostedXpText;
                                      if (pTVar18 != (Text *)0x0) {
                                        pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component
                                                  ::Component_1_get_gameObject
                                                            ((Component_1 *)pTVar18,(MethodInfo *)0x0
                                                            );
                                        if (pGVar12 != (GameObject *)0x0) {
                                          bVar14 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_get_activeSelf
                                                            (pGVar12,(MethodInfo *)0x0);
                                          if (bVar14 == 0) {
                                            pTVar18 = (this->fields).unboostedXpText;
                                            if (pTVar18 == (Text *)0x0) goto code_?;
                                            pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_1_get_gameObject
                                                                ((Component_1 *)pTVar18,
                                                                 (MethodInfo *)0x0);
                                            if (pGVar12 == (GameObject *)0x0) goto code_?;
                                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_SetActive(pGVar12,1,(MethodInfo *)0x0);
                                          }
                                          pXVar19 = (this->fields).xpBoostParticlesPreview;
                                          if (pXVar19 != (XpBoostParticlePreviewer *)0x0) {
                                            uVar20 = System.Core.dll::System::Linq::
                                                                                                        
                                                  Enumerable+<CreateCastIterator>c__Iterator0`1[System
                                                  ::Byte]::
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                                                            ((
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_
                                                  *)pXVar19,(MethodInfo *)0x0);
                                            if (uVar20 != 0) {
                                              pXVar19 = (this->fields).xpBoostParticlesPreview;
                                              if (pXVar19 == (XpBoostParticlePreviewer *)0x0)
                                              goto code_?;
                                              XpBoostParticlePreviewer::
                                              XpBoostParticlePreviewer_StopParticleSystem
                                                        (pXVar19,(MethodInfo *)0x0);
                                            }
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
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
    pPVar4 = (this->fields).xpFillBar;
    if (pPVar4 == (ProgressBar *)0x0) goto code_?;
    ProgressBar::ProgressBar_set_Progress
              (pPVar4,((float)pXVar3 - _UNK_?) / _UNK_?,(MethodInfo *)0x0);
    pPVar4 = (this->fields).xpFillBarBackground;
    if (pPVar4 == (ProgressBar *)0x0) goto code_?;
    ProgressBar::ProgressBar_set_Progress
              (pPVar4,((float)pXVar3 - _UNK_?) / _UNK_?,(MethodInfo *)0x0);
  }
  if ((float)pXVar3 <= _UNK_?) {
    fVar2 = (float)pXVar3 - _UNK_?;
  }
  else {
    pRVar5 = (this->fields).boostEffectTransform;
    if ((pRVar5 == (RectTransform *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pRVar5,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0)
       ) goto code_?;
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar6,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      pRVar5 = (this->fields).boostEffectTransform;
      if ((pRVar5 == (RectTransform *)0x0) ||
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pRVar5,(MethodInfo *)0x0),
         pGVar6 == (GameObject *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,1,(MethodInfo *)0x0);
    }
    pTVar8 = (this->fields).unboostedXpText;
    if ((pTVar8 == (Text *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pTVar8,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0)
       ) goto code_?;
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar6,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      pTVar8 = (this->fields).unboostedXpText;
      if ((pTVar8 == (Text *)0x0) ||
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pTVar8,(MethodInfo *)0x0),
         pGVar6 == (GameObject *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,0,(MethodInfo *)0x0);
    }
    pAVar9 = (this->fields).boostEffectCurve;
    if (pAVar9 == (AnimationCurve *)0x0) goto code_?;
    fVar2 = (float)pXVar3 - _UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
              (pAVar9,fVar2,(MethodInfo *)0x0);
    pTVar10 = (Transform *)(this->fields).boostEffectTransform;
    if (pTVar10 == (Transform *)0x0) goto code_?;
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        ((Vector3 *)&stack0xffffffd0,pTVar10,(MethodInfo *)0x0);
    fVar12 = pVVar11->z;
    uVar13 = 0;
    uVar14 = 0;
    func_?();
    pTVar10 = (Transform *)(this->fields).boostEffectTransform;
    if (pTVar10 == (Transform *)0x0) goto code_?;
    value_00.y = (float)uVar13;
    value_00.x = (float)uVar14;
    value_00.z = fVar12;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar10,value_00,(MethodInfo *)0x0);
  }
  if (_UNK_? < (float)pXVar3) {
    pGVar15 = (this->fields).arrowGradientEffect;
    if (pGVar15 == (GradientEffect *)0x0) goto code_?;
    fVar12 = (pGVar15->fields).bottom.r;
    pAVar9 = (this->fields).gradientEffectCurve;
    if (pAVar9 == (AnimationCurve *)0x0) goto code_?;
    puVar16 = &UNK_?;
    fVar17 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       (pAVar9,fVar2,(MethodInfo *)0x0);
    pGVar15 = (this->fields).arrowGradientEffect;
    if (pGVar15 == (GradientEffect *)0x0) goto code_?;
    (pGVar15->fields).bottom.r = fVar12;
    (pGVar15->fields).bottom.g = (float)puVar16;
    (pGVar15->fields).bottom.b = (float)pAVar9;
    (pGVar15->fields).bottom.a = fVar17;
    pGVar15 = (this->fields).arrowGradientEffect;
    if (pGVar15 == (GradientEffect *)0x0) goto code_?;
    fVar12 = (pGVar15->fields).top.r;
    fVar17 = (pGVar15->fields).top.g;
    fVar18 = (pGVar15->fields).top.b;
    pAVar9 = (this->fields).gradientEffectCurve;
    if (pAVar9 == (AnimationCurve *)0x0) goto code_?;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       (pAVar9,fVar2 - _UNK_?,(MethodInfo *)0x0);
    pGVar15 = (this->fields).arrowGradientEffect;
    if (pGVar15 == (GradientEffect *)0x0) goto code_?;
    (pGVar15->fields).top.r = fVar12;
    (pGVar15->fields).top.g = fVar17;
    (pGVar15->fields).top.b = fVar18;
    (pGVar15->fields).top.a = fVar2;
    pGVar15 = (this->fields).arrowGradientEffect;
    if ((pGVar15 == (GradientEffect *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pGVar15,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0)
       ) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,0,(MethodInfo *)0x0);
    pGVar15 = (this->fields).arrowGradientEffect;
    if ((pGVar15 == (GradientEffect *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pGVar15,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0)
       ) goto code_?;
    this = (XPNotificationBoostedBehaviour *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar6,1,(MethodInfo *)0x0);
    pXVar3 = this;
  }
  this = pXVar3;
  if (_UNK_? < (float)this) {
    if (_UNK_? < (float)this) {
      pGVar6 = (pXVar1->fields).glowEffectGameObject;
      if (pGVar6 == (GameObject *)0x0) goto code_?;
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                         (pGVar6,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        pGVar6 = (pXVar1->fields).glowEffectGameObject;
        if (pGVar6 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,1,(MethodInfo *)0x0);
      }
    }
    pAVar9 = (pXVar1->fields).glowEffectCurve;
    if (pAVar9 == (AnimationCurve *)0x0) goto code_?;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       (pAVar9,(float)this - _UNK_?,(MethodInfo *)0x0);
    pGVar6 = (pXVar1->fields).glowEffectGameObject;
    if ((pGVar6 == (GameObject *)0x0) ||
       (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
              ((Vector3 *)&stack0xffffffd0,pTVar10,(MethodInfo *)0x0);
    puVar19 = &stack0xffffffe8;
    fVar2 = (fVar2 - _UNK_?) / _UNK_? + _UNK_?;
    puVar16 = &UNK_?;
    func_?();
    pGVar6 = (pXVar1->fields).glowEffectGameObject;
    if ((pGVar6 == (GameObject *)0x0) ||
       (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0))
    goto code_?;
    value.y = (float)puVar19;
    value.x = (float)puVar16;
    value.z = fVar2;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar10,value,(MethodInfo *)0x0);
  }
  if (_UNK_? < (float)this) {
    pTVar8 = (pXVar1->fields).xpText;
    if ((pTVar8 == (Text *)0x0) ||
       (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)pTVar8,(MethodInfo *)0x0), pGVar6 == (GameObject *)0x0)
       ) goto code_?;
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar6,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      pTVar8 = (pXVar1->fields).xpText;
      if ((pTVar8 == (Text *)0x0) ||
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pTVar8,(MethodInfo *)0x0),
         pGVar6 == (GameObject *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,1,(MethodInfo *)0x0);
    }
    pTVar10 = (Transform *)(pXVar1->fields).boostEffectTransform;
    if (pTVar10 == (Transform *)0x0) goto code_?;
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd0,pTVar10,(MethodInfo *)0x0);
    fVar12 = pVVar11->x;
    uVar14 = pVVar11->y;
    fVar17 = pVVar11->z;
    fVar2 = (pXVar1->fields).slideOutSpeed;
    fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    pTVar10 = (Transform *)(pXVar1->fields).boostEffectTransform;
    if (pTVar10 == (Transform *)0x0) goto code_?;
    value_01.y = (float)uVar14;
    value_01.x = fVar18 * fVar2 + fVar12;
    value_01.z = fVar17;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar10,value_01,(MethodInfo *)0x0);
  }
  if (_UNK_? < (float)this) {
    pXVar20 = (pXVar1->fields).xpBoostParticlesPreview;
    if (pXVar20 == (XpBoostParticlePreviewer *)0x0) {
code_?:
      func_?();
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    uVar22 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
             Byte]::
             Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte__System_Collections_Generic_IEnumerator_TResult__get_Current
                       ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Byte_ *)pXVar20,
                        (MethodInfo *)0x0);
    if (uVar22 == 0) {
      pXVar20 = (pXVar1->fields).xpBoostParticlesPreview;
      if (pXVar20 == (XpBoostParticlePreviewer *)0x0) goto code_?;
      XpBoostParticlePreviewer::XpBoostParticlePreviewer_StartParticleSystem
                (pXVar20,(MethodInfo *)0x0);
    }
  }
  return;
}

