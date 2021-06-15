
/* Void Dispose() */

void Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeNextBadge>c__Iterator1::
     LevelRewardAnimation_DisplayAndFadeNextBadge_c_Iterator1_Dispose
               (LevelRewardAnimation_DisplayAndFadeNextBadge_c_Iterator1 *this,MethodInfo *method)

{
  (this->fields)._disposing = 1;
  (this->fields)._PC = -1;
  return;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeNextBadge>c__Iterator1::
     LevelRewardAnimation_DisplayAndFadeNextBadge_c_Iterator1_MoveNext
               (LevelRewardAnimation_DisplayAndFadeNextBadge_c_Iterator1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = this;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  switch(iVar2) {
  case 0:
    break;
  case 1:
    goto code_?;
  case 2:
    goto code_?;
  case 3:
    goto code_?;
  default:
    return 0;
  }
  pLVar3 = (this->fields)._this;
  if ((pLVar3 == (LevelRewardAnimation *)0x0) ||
     (pRVar4 = (pLVar3->fields).nextLevelBadge, pRVar4 == (RawImage *)0x0)) goto code_?;
  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)pRVar4,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                      ((Quaternion *)&stack0xffffffe8,0.0,-90.0,0.0,(MethodInfo *)0x0);
  if (pTVar5 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
            (pTVar5,*pQVar6,(MethodInfo *)0x0);
  pLVar3 = (pLVar1->fields)._this;
  if ((pLVar3 == (LevelRewardAnimation *)0x0) ||
     (pRVar4 = (pLVar3->fields).nextLevelBadge, pRVar4 == (RawImage *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)pRVar4,1,(MethodInfo *)0x0);
  pLVar3 = (pLVar1->fields)._this;
  if ((pLVar3 == (LevelRewardAnimation *)0x0) ||
     (pRVar4 = (pLVar3->fields).prevLevelBadge, pRVar4 == (RawImage *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)pRVar4,0,(MethodInfo *)0x0);
  pLVar3 = (pLVar1->fields)._this;
  if ((pLVar3 == (LevelRewardAnimation *)0x0) ||
     (pAVar7 = (pLVar3->fields).nextBadgeBounceEffect, pAVar7 == (AnimationCurve *)0x0))
  goto code_?;
  fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                     (pAVar7,0.0,(MethodInfo *)0x0);
  pLVar3 = (pLVar1->fields)._this;
  (pLVar1->fields)._scale___0 = fVar8;
  if ((pLVar3 == (LevelRewardAnimation *)0x0) ||
     (pRVar4 = (pLVar3->fields).nextLevelBadge, pRVar4 == (RawImage *)0x0)) goto code_?;
  pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                     ((Graphic *)pRVar4,(MethodInfo *)0x0);
  pLVar3 = (pLVar1->fields)._this;
  if ((pLVar3 == (LevelRewardAnimation *)0x0) || (pRVar9 == (RectTransform *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors
            (pRVar9,RectTransform_Axis__Enum_Horizontal,
             (float)(pLVar3->fields).targetSize * (pLVar1->fields)._scale___0,(MethodInfo *)0x0);
  pLVar3 = (pLVar1->fields)._this;
  if ((pLVar3 == (LevelRewardAnimation *)0x0) ||
     (pRVar4 = (pLVar3->fields).nextLevelBadge, pRVar4 == (RawImage *)0x0)) goto code_?;
  pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                     ((Graphic *)pRVar4,(MethodInfo *)0x0);
  pLVar3 = (pLVar1->fields)._this;
  if ((pLVar3 == (LevelRewardAnimation *)0x0) || (pRVar9 == (RectTransform *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors
            (pRVar9,RectTransform_Axis__Enum_Vertical,
             (float)(pLVar3->fields).targetSize * (pLVar1->fields)._scale___0,(MethodInfo *)0x0);
  (pLVar1->fields)._currentTime___0 = 0.0;
code_?:
  pLVar3 = (pLVar1->fields)._this;
  if (pLVar3 != (LevelRewardAnimation *)0x0) {
    this = (LevelRewardAnimation_DisplayAndFadeNextBadge_c_Iterator1 *)
           (pLVar1->fields)._currentTime___0;
    if (_UNK_? <= (float)this / (pLVar3->fields).rotateUIYAxisTime) {
      if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
         (pIVar10 = (pLVar3->fields).backgroundRays, pIVar10 != (Image *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pIVar10,1,(MethodInfo *)0x0);
        pLVar3 = (pLVar1->fields)._this;
        if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
           ((pTVar11 = (pLVar3->fields).header, pTVar11 != (Text *)0x0 &&
            (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)pTVar11,(MethodInfo *)0x0),
            pGVar12 != (GameObject *)0x0)))) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar12,1,(MethodInfo *)0x0);
          pLVar3 = (pLVar1->fields)._this;
          if (pLVar3 != (LevelRewardAnimation *)0x0) {
            pTVar11 = (pLVar3->fields).header;
            TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
            if (pTVar11 != (Text *)0x0) {
              (*(code *)(pTVar11->klass->vtable).set_text.method)();
              pLVar3 = (pLVar1->fields)._this;
              if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                 (pRVar4 = (pLVar3->fields).nextLevelBadge, pRVar4 != (RawImage *)0x0)) {
                pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)pRVar4,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000
                     ) != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Quaternion);
                }
                pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                                    ((Quaternion *)&stack0xffffffe8,0.0,0.0,0.0,(MethodInfo *)0x0);
                if (pTVar5 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (pTVar5,*pQVar6,(MethodInfo *)0x0);
                  (pLVar1->fields)._currentTime___0 = 0.0;
code_?:
                  pLVar3 = (pLVar1->fields)._this;
                  if (pLVar3 != (LevelRewardAnimation *)0x0) {
                    this = (LevelRewardAnimation_DisplayAndFadeNextBadge_c_Iterator1 *)
                           (pLVar1->fields)._currentTime___0;
                    if (_UNK_? <= (float)this / (pLVar3->fields).nextLevelDisplayTime) {
                      if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                         (pAVar7 = (pLVar3->fields).nextBadgeBounceEffect,
                         pAVar7 != (AnimationCurve *)0x0)) {
                        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                 AnimationCurve_Evaluate(pAVar7,1.0,(MethodInfo *)0x0);
                        pLVar3 = (pLVar1->fields)._this;
                        (pLVar1->fields)._scale___0 = fVar8;
                        if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                           (pRVar4 = (pLVar3->fields).nextLevelBadge, pRVar4 != (RawImage *)0x0)) {
                          pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                   Graphic_get_rectTransform((Graphic *)pRVar4,(MethodInfo *)0x0);
                          pLVar3 = (pLVar1->fields)._this;
                          if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                             (pRVar9 != (RectTransform *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                            RectTransform_SetSizeWithCurrentAnchors
                                      (pRVar9,RectTransform_Axis__Enum_Horizontal,
                                       (float)(pLVar3->fields).targetSize *
                                       (pLVar1->fields)._scale___0,(MethodInfo *)0x0);
                            pLVar3 = (pLVar1->fields)._this;
                            if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                               (pRVar4 = (pLVar3->fields).nextLevelBadge, pRVar4 != (RawImage *)0x0)
                               ) {
                              pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                       Graphic_get_rectTransform
                                                 ((Graphic *)pRVar4,(MethodInfo *)0x0);
                              pLVar3 = (pLVar1->fields)._this;
                              if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                                 (pRVar9 != (RectTransform *)0x0)) {
                                this = (LevelRewardAnimation_DisplayAndFadeNextBadge_c_Iterator1 *)
                                       0x0;
                                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                RectTransform_SetSizeWithCurrentAnchors
                                          (pRVar9,RectTransform_Axis__Enum_Vertical,
                                           (float)(pLVar3->fields).targetSize *
                                           (pLVar1->fields)._scale___0,(MethodInfo *)0x0);
                                pLVar3 = (pLVar1->fields)._this;
                                if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                                   (pTVar11 = (pLVar3->fields).header, pTVar11 != (Text *)0x0)) {
                                  in_stack_13 = &UNK_?;
                                  pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                           Component_1_get_gameObject
                                                     ((Component_1 *)pTVar11,(MethodInfo *)0x0);
                                  if (pGVar12 != (GameObject *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_SetActive(pGVar12,0,(MethodInfo *)0x0);
                                    (pLVar1->fields)._currentTime___0 = 0.0;
code_?:
                                    pLVar3 = (pLVar1->fields)._this;
                                    if (pLVar3 != (LevelRewardAnimation *)0x0) {
                                      this = (LevelRewardAnimation_DisplayAndFadeNextBadge_c_Iterator1
                                              *)(pLVar1->fields)._currentTime___0;
                                      if (_UNK_? <=
                                          (float)this / (pLVar3->fields).rotateUIYAxisTime) {
                                        if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                                           (pRVar4 = (pLVar3->fields).nextLevelBadge,
                                           pRVar4 != (RawImage *)0x0)) {
                                          method_00 = (MethodInfo *)&UNK_?;
                                          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Component::Component_1_get_transform
                                                              ((Component_1 *)pRVar4,
                                                               (MethodInfo *)0x0);
                                          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).
                                                      Equals.methodPtr & 0x2000000) != 0) &&
                                             ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started
                                              == 0)) {
                                            func_?(TypeInfo__UnityEngine__Quaternion);
                                          }
                                          pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Quaternion::Quaternion_Euler
                                                              ((Quaternion *)&stack0xffffffe8,0.0,
                                                               90.0,0.0,(MethodInfo *)0x0);
                                          if (pTVar5 != (Transform *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_set_rotation
                                                      (pTVar5,*pQVar6,(MethodInfo *)0x0);
                                            pLVar3 = (pLVar1->fields)._this;
                                            if (pLVar3 != (LevelRewardAnimation *)0x0) {
                                              if (cRam_? == '\0') {
                                                func_?(_UNK_?);
                                                cRam_? = '\x01';
                                              }
                                              this_00 = (ScaleAnimationBase *)
                                                        func_?(
                                                  TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_c__Iterator2
                                                  );
                                              ScaleAnimationBase::ScaleAnimationBase_Play
                                                        (this_00,0.0,method_00);
                                              if ((this_00 != (ScaleAnimationBase *)0x0) &&
                                                 ((this_00->fields).originalScale.y = (float)pLVar3,
                                                 pLVar3 != (LevelRewardAnimation *)0x0)) {
                                                UnityEngine.CoreModule.dll::UnityEngine::
                                                MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                                                          ((MonoBehaviour *)pLVar3,
                                                           (IEnumerator *)this_00,(MethodInfo *)0x0)
                                                ;
                                                this = (
                                                  LevelRewardAnimation_DisplayAndFadeNextBadge_c_Iterator1
                                                  *)0x0;
                                                pOVar14 = (Object *)
                                                          func_?(TypeInfo__System__Int32,
                                                                          &this);
                                                (pLVar1->fields)._current = pOVar14;
                                                if ((pLVar1->fields)._disposing != 0) {
                                                  return 1;
                                                }
                                                (pLVar1->fields)._PC = 4;
                                                return 1;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::
                                                 Time_1_get_deltaTime((MethodInfo *)0x0);
                                        this = (LevelRewardAnimation_DisplayAndFadeNextBadge_c_Iterator1
                                                *)(fVar8 + (float)this);
                                        pLVar3 = (pLVar1->fields)._this;
                                        (pLVar1->fields)._currentTime___0 = (float)this;
                                        if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                                           (pAVar7 = (pLVar3->fields).rotateUIYAxisOut,
                                           pAVar7 != (AnimationCurve *)0x0)) {
                                          fVar8 = UnityEngine.CoreModule.dll::UnityEngine::
                                                   AnimationCurve::AnimationCurve_Evaluate
                                                             (pAVar7,(float)this /
                                                                     (pLVar3->fields).
                                                                     rotateUIYAxisTime,
                                                              (MethodInfo *)0x0);
                                          pLVar3 = (pLVar1->fields)._this;
                                          (pLVar1->fields)._rotation___3 = fVar8 * _UNK_?;
                                          if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                                             (pRVar4 = (pLVar3->fields).nextLevelBadge,
                                             pRVar4 != (RawImage *)0x0)) {
                                            pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_1_get_transform
                                                                ((Component_1 *)pRVar4,
                                                                 (MethodInfo *)0x0);
                                            this = (
                                                  LevelRewardAnimation_DisplayAndFadeNextBadge_c_Iterator1
                                                  *)(pLVar1->fields)._rotation___3;
                                            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).
                                                        Equals.methodPtr & 0x2000000) != 0) &&
                                               ((TypeInfo__UnityEngine__Quaternion->_1).
                                                cctor_started == 0)) {
                                              func_?();
                                            }
                                            pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Quaternion::Quaternion_Euler
                                                                ((Quaternion *)&stack0xffffffe8,0.0,
                                                                 (float)this,0.0,(MethodInfo *)0x0);
                                            if (pTVar5 != (Transform *)0x0) {
                                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_set_rotation
                                                        (pTVar5,*pQVar6,(MethodInfo *)0x0);
                                              pOVar14 = (Object *)
                                                        func_?(TypeInfo__System__Int32,
                                                                        &stack0xfffffff8);
                                              (pLVar1->fields)._current = pOVar14;
                                              if ((pLVar1->fields)._disposing != 0) {
                                                return 1;
                                              }
                                              (pLVar1->fields)._PC = 3;
                                              return 1;
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
                    else {
                      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                         ((MethodInfo *)0x0);
                      this = (LevelRewardAnimation_DisplayAndFadeNextBadge_c_Iterator1 *)
                             (fVar8 + (float)this);
                      pLVar3 = (pLVar1->fields)._this;
                      (pLVar1->fields)._currentTime___0 = (float)this;
                      if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                         (pAVar7 = (pLVar3->fields).nextBadgeBounceEffect,
                         pAVar7 != (AnimationCurve *)0x0)) {
                        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                 AnimationCurve_Evaluate
                                           (pAVar7,(float)this /
                                                   (pLVar3->fields).nextLevelDisplayTime,
                                            (MethodInfo *)0x0);
                        pLVar3 = (pLVar1->fields)._this;
                        (pLVar1->fields)._scale___0 = fVar8;
                        if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                           (pRVar4 = (pLVar3->fields).nextLevelBadge, pRVar4 != (RawImage *)0x0)) {
                          pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                   Graphic_get_rectTransform((Graphic *)pRVar4,(MethodInfo *)0x0);
                          pLVar3 = (pLVar1->fields)._this;
                          if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                             (pRVar9 != (RectTransform *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                            RectTransform_SetSizeWithCurrentAnchors
                                      (pRVar9,RectTransform_Axis__Enum_Horizontal,
                                       (float)(pLVar3->fields).targetSize *
                                       (pLVar1->fields)._scale___0,(MethodInfo *)0x0);
                            pLVar3 = (pLVar1->fields)._this;
                            if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                               (pRVar4 = (pLVar3->fields).nextLevelBadge, pRVar4 != (RawImage *)0x0)
                               ) {
                              pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                       Graphic_get_rectTransform
                                                 ((Graphic *)pRVar4,(MethodInfo *)0x0);
                              pLVar3 = (pLVar1->fields)._this;
                              if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                                 (pRVar9 != (RectTransform *)0x0)) {
                                method = (MethodInfo *)0x0;
                                this = (LevelRewardAnimation_DisplayAndFadeNextBadge_c_Iterator1 *)
                                       ((float)(pLVar3->fields).targetSize *
                                       (pLVar1->fields)._scale___0);
                                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                RectTransform_SetSizeWithCurrentAnchors
                                          (pRVar9,RectTransform_Axis__Enum_Vertical,(float)this,
                                           (MethodInfo *)0x0);
                                pLVar3 = (pLVar1->fields)._this;
                                if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                                   (pAVar7 = (pLVar3->fields).backgroundRaySizeCurve,
                                   pAVar7 != (AnimationCurve *)0x0)) {
                                  in_stack_13 = &UNK_?;
                                  fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                           AnimationCurve_Evaluate
                                                     (pAVar7,(pLVar1->fields)._currentTime___0 /
                                                             (pLVar3->fields).nextLevelDisplayTime,
                                                      (MethodInfo *)0x0);
                                  pLVar3 = (pLVar1->fields)._this;
                                  (pLVar1->fields)._backgroundRayScale___2 = fVar8;
                                  if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                                     (pIVar10 = (pLVar3->fields).backgroundRays,
                                     pIVar10 != (Image *)0x0)) {
                                    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_1_get_transform
                                                        ((Component_1 *)pIVar10,(MethodInfo *)0x0);
                                    fVar8 = 0.0;
                                    uVar15._0_4_ = 0.0;
                                    uVar15._4_4_ = 0.0;
                                    func_?();
                                    if (pTVar5 != (Transform *)0x0) {
                                      value.z = fVar8;
                                      value.x = (float)uVar15;
                                      value.y = SUB84(uVar15,4);
                                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_set_localScale(pTVar5,value,(MethodInfo *)0x0);
                                      pOVar14 = (Object *)
                                                func_?(TypeInfo__System__Int32,
                                                                &stack0xfffffff8);
                                      (pLVar1->fields)._current = pOVar14;
                                      if ((pLVar1->fields)._disposing != 0) {
                                        return 1;
                                      }
                                      (pLVar1->fields)._PC = 2;
                                      return 1;
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
    else {
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      this = (LevelRewardAnimation_DisplayAndFadeNextBadge_c_Iterator1 *)(fVar8 + (float)this);
      pLVar3 = (pLVar1->fields)._this;
      (pLVar1->fields)._currentTime___0 = (float)this;
      if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
         (pAVar7 = (pLVar3->fields).rotateUIYAxisIn, pAVar7 != (AnimationCurve *)0x0)) {
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (pAVar7,(float)this / (pLVar3->fields).rotateUIYAxisTime,
                            (MethodInfo *)0x0);
        pLVar3 = (pLVar1->fields)._this;
        (pLVar1->fields)._rotation___1 = fVar8 * _UNK_? - _UNK_?;
        if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
           (pRVar4 = (pLVar3->fields).nextLevelBadge, pRVar4 != (RawImage *)0x0)) {
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)pRVar4,(MethodInfo *)0x0);
          this = (LevelRewardAnimation_DisplayAndFadeNextBadge_c_Iterator1 *)
                 (pLVar1->fields)._rotation___1;
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?();
          }
          pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                              ((Quaternion *)&stack0xffffffe8,0.0,(float)this,0.0,(MethodInfo *)0x0)
          ;
          if (pTVar5 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar5,*pQVar6,(MethodInfo *)0x0);
            pOVar14 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
            (pLVar1->fields)._current = pOVar14;
            if ((pLVar1->fields)._disposing != 0) {
              return 1;
            }
            (pLVar1->fields)._PC = 1;
            return 1;
          }
        }
      }
    }
  }
code_?:
  uVar15 = func_?(0);
  piVar16 = (int *)((uint)uVar15 ^ 0xd9);
  *piVar16 = *piVar16 - (int)((ulonglong)uVar15 >> 0x20);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void Reset() */

void Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeNextBadge>c__Iterator1::
     LevelRewardAnimation_DisplayAndFadeNextBadge_c_Iterator1_Reset
               (LevelRewardAnimation_DisplayAndFadeNextBadge_c_Iterator1 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

