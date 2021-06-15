
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeGoldIcon>c__Iterator2::
     LevelRewardAnimation_DisplayAndFadeGoldIcon_c_Iterator2_MoveNext
               (LevelRewardAnimation_DisplayAndFadeGoldIcon_c_Iterator2 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  switch(iVar1) {
  case 0:
    break;
  case 1:
    goto code_?;
  case 2:
    goto code_?;
  default:
    return 0;
  }
  pLVar2 = (this->fields)._this;
  if ((pLVar2 == (LevelRewardAnimation *)0x0) ||
     (pIVar3 = (pLVar2->fields).goldImage, pIVar3 == (Image *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)pIVar3,1,(MethodInfo *)0x0);
  pLVar2 = (this->fields)._this;
  if ((pLVar2 == (LevelRewardAnimation *)0x0) ||
     (this_00 = (pLVar2->fields).nextLevelBadge, this_00 == (RawImage *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this_00,0,(MethodInfo *)0x0);
  pLVar2 = (this->fields)._this;
  if ((pLVar2 == (LevelRewardAnimation *)0x0) ||
     (pAVar4 = (pLVar2->fields).goldBounceEffect, pAVar4 == (AnimationCurve *)0x0))
  goto code_?;
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                     (pAVar4,0.0,(MethodInfo *)0x0);
  pLVar2 = (this->fields)._this;
  (this->fields)._scale___0 = fVar5;
  if ((pLVar2 == (LevelRewardAnimation *)0x0) ||
     (pIVar3 = (pLVar2->fields).goldImage, pIVar3 == (Image *)0x0)) goto code_?;
  pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                      ((Graphic *)pIVar3,(MethodInfo *)0x0);
  pLVar2 = (this->fields)._this;
  if ((pLVar2 == (LevelRewardAnimation *)0x0) || (pRVar6 == (RectTransform *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors
            (pRVar6,RectTransform_Axis__Enum_Horizontal,
             (float)(pLVar2->fields).targetSize * (this->fields)._scale___0,(MethodInfo *)0x0);
  pLVar2 = (this->fields)._this;
  if ((pLVar2 == (LevelRewardAnimation *)0x0) ||
     (pIVar3 = (pLVar2->fields).goldImage, pIVar3 == (Image *)0x0)) goto code_?;
  pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                      ((Graphic *)pIVar3,(MethodInfo *)0x0);
  pLVar2 = (this->fields)._this;
  if ((pLVar2 == (LevelRewardAnimation *)0x0) || (pRVar6 == (RectTransform *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors
            (pRVar6,RectTransform_Axis__Enum_Vertical,
             (float)(pLVar2->fields).targetSize * (this->fields)._scale___0,(MethodInfo *)0x0);
  pLVar2 = (this->fields)._this;
  if ((pLVar2 == (LevelRewardAnimation *)0x0) ||
     (pIVar3 = (pLVar2->fields).goldImage, pIVar3 == (Image *)0x0)) goto code_?;
  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)pIVar3,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                     ((Quaternion *)&stack0xffffffe8,0.0,-90.0,0.0,(MethodInfo *)0x0);
  if (pTVar7 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
            (pTVar7,*pQVar8,(MethodInfo *)0x0);
  (this->fields)._currentTime___0 = 0.0;
code_?:
  pLVar2 = (this->fields)._this;
  if (pLVar2 != (LevelRewardAnimation *)0x0) {
    fVar5 = (this->fields)._currentTime___0;
    if (_UNK_? <= fVar5 / (pLVar2->fields).rotateUIYAxisTime) {
      if ((pLVar2 != (LevelRewardAnimation *)0x0) &&
         (pIVar3 = (pLVar2->fields).goldImage, pIVar3 != (Image *)0x0)) {
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pIVar3,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                           ((Quaternion *)&stack0xffffffe8,0.0,0.0,0.0,(MethodInfo *)0x0);
        if (pTVar7 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (pTVar7,*pQVar8,(MethodInfo *)0x0);
          pLVar2 = (this->fields)._this;
          if (((pLVar2 != (LevelRewardAnimation *)0x0) &&
              (pTVar9 = (pLVar2->fields).header, pTVar9 != (Text *)0x0)) &&
             (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pTVar9,(MethodInfo *)0x0),
             pGVar10 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar10,1,(MethodInfo *)0x0);
            pLVar2 = (this->fields)._this;
            if (pLVar2 != (LevelRewardAnimation *)0x0) {
              pTVar9 = (pLVar2->fields).header;
              pSVar11 = TM::TM__(StringLiteral_REWARD_,(MethodInfo *)0x0);
              if (pTVar9 != (Text *)0x0) {
                (*(code *)(pTVar9->klass->vtable).set_text.method)
                          (pTVar9,pSVar11,
                           (pTVar9->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                pLVar2 = (this->fields)._this;
                if (((pLVar2 != (LevelRewardAnimation *)0x0) &&
                    (pTVar9 = (pLVar2->fields).goldText, pTVar9 != (Text *)0x0)) &&
                   (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_gameObject((Component_1 *)pTVar9,(MethodInfo *)0x0),
                   pGVar10 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar10,1,(MethodInfo *)0x0);
                  pLVar2 = (this->fields)._this;
                  if (((pLVar2 != (LevelRewardAnimation *)0x0) &&
                      (pCVar12 = (pLVar2->fields).claimButton, pCVar12 != (CanvasGroup *)0x0)) &&
                     (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_1_get_gameObject((Component_1 *)pCVar12,(MethodInfo *)0x0),
                     pGVar10 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar10,1,(MethodInfo *)0x0);
                    pLVar2 = (this->fields)._this;
                    if ((pLVar2 != (LevelRewardAnimation *)0x0) &&
                       (pCVar12 = (pLVar2->fields).claimButton, pCVar12 != (CanvasGroup *)0x0)) {
                      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                                (pCVar12,0.0,(MethodInfo *)0x0);
                      (this->fields)._currentTime___0 = 0.0;
code_?:
                      pLVar2 = (this->fields)._this;
                      if (pLVar2 != (LevelRewardAnimation *)0x0) {
                        fVar5 = (this->fields)._currentTime___0;
                        if (_UNK_? <= fVar5 / (pLVar2->fields).goldImageDisplayTime) {
                          if ((pLVar2 != (LevelRewardAnimation *)0x0) &&
                             (pAVar4 = (pLVar2->fields).goldBounceEffect,
                             pAVar4 != (AnimationCurve *)0x0)) {
                            fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                     AnimationCurve_Evaluate(pAVar4,1.0,(MethodInfo *)0x0);
                            pLVar2 = (this->fields)._this;
                            (this->fields)._scale___0 = fVar5;
                            if ((pLVar2 != (LevelRewardAnimation *)0x0) &&
                               (pCVar12 = (pLVar2->fields).claimButton, pCVar12 != (CanvasGroup *)0x0)
                               ) {
                              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::
                              CanvasGroup_set_alpha(pCVar12,1.0,(MethodInfo *)0x0);
                              pLVar2 = (this->fields)._this;
                              if ((pLVar2 != (LevelRewardAnimation *)0x0) &&
                                 (pIVar3 = (pLVar2->fields).goldImage, pIVar3 != (Image *)0x0)) {
                                pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                          Graphic_get_rectTransform
                                                    ((Graphic *)pIVar3,(MethodInfo *)0x0);
                                pLVar2 = (this->fields)._this;
                                if ((pLVar2 != (LevelRewardAnimation *)0x0) &&
                                   (pRVar6 != (RectTransform *)0x0)) {
                                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                  RectTransform_SetSizeWithCurrentAnchors
                                            (pRVar6,RectTransform_Axis__Enum_Horizontal,
                                             (float)(pLVar2->fields).targetSize *
                                             (this->fields)._scale___0,(MethodInfo *)0x0);
                                  pLVar2 = (this->fields)._this;
                                  if ((pLVar2 != (LevelRewardAnimation *)0x0) &&
                                     (pIVar3 = (pLVar2->fields).goldImage, pIVar3 != (Image *)0x0))
                                  {
                                    pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                              Graphic_get_rectTransform
                                                        ((Graphic *)pIVar3,(MethodInfo *)0x0);
                                    pLVar2 = (this->fields)._this;
                                    if ((pLVar2 != (LevelRewardAnimation *)0x0) &&
                                       (pRVar6 != (RectTransform *)0x0)) {
                                      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                      RectTransform_SetSizeWithCurrentAnchors
                                                (pRVar6,RectTransform_Axis__Enum_Vertical,
                                                 (float)(pLVar2->fields).targetSize *
                                                 (this->fields)._scale___0,(MethodInfo *)0x0);
                                      pOVar13 = (Object *)func_?();
                                      (this->fields)._current = pOVar13;
                                      if ((this->fields)._disposing == 0) {
                                        (this->fields)._PC = 3;
                                      }
                                      return 1;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::
                                   Time_1_get_deltaTime((MethodInfo *)0x0);
                          fVar14 = fVar14 + fVar5;
                          pLVar2 = (this->fields)._this;
                          (this->fields)._currentTime___0 = fVar14;
                          if ((pLVar2 != (LevelRewardAnimation *)0x0) &&
                             (pAVar4 = (pLVar2->fields).goldBounceEffect,
                             pAVar4 != (AnimationCurve *)0x0)) {
                            fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                     AnimationCurve_Evaluate
                                               (pAVar4,fVar14 / (pLVar2->fields).
                                                                goldImageDisplayTime,
                                                (MethodInfo *)0x0);
                            pLVar2 = (this->fields)._this;
                            (this->fields)._scale___0 = fVar5;
                            if ((pLVar2 != (LevelRewardAnimation *)0x0) &&
                               (pIVar3 = (pLVar2->fields).goldImage, pIVar3 != (Image *)0x0)) {
                              pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                        Graphic_get_rectTransform
                                                  ((Graphic *)pIVar3,(MethodInfo *)0x0);
                              pLVar2 = (this->fields)._this;
                              if ((pLVar2 != (LevelRewardAnimation *)0x0) &&
                                 (pRVar6 != (RectTransform *)0x0)) {
                                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                RectTransform_SetSizeWithCurrentAnchors
                                          (pRVar6,RectTransform_Axis__Enum_Horizontal,
                                           (float)(pLVar2->fields).targetSize *
                                           (this->fields)._scale___0,(MethodInfo *)0x0);
                                pLVar2 = (this->fields)._this;
                                if ((pLVar2 != (LevelRewardAnimation *)0x0) &&
                                   (pIVar3 = (pLVar2->fields).goldImage, pIVar3 != (Image *)0x0)) {
                                  pRVar6 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                            Graphic_get_rectTransform
                                                      ((Graphic *)pIVar3,(MethodInfo *)0x0);
                                  pLVar2 = (this->fields)._this;
                                  if ((pLVar2 != (LevelRewardAnimation *)0x0) &&
                                     (pRVar6 != (RectTransform *)0x0)) {
                                    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                                    RectTransform_SetSizeWithCurrentAnchors
                                              (pRVar6,RectTransform_Axis__Enum_Vertical,
                                               (float)(pLVar2->fields).targetSize *
                                               (this->fields)._scale___0,(MethodInfo *)0x0);
                                    pLVar2 = (this->fields)._this;
                                    if (pLVar2 != (LevelRewardAnimation *)0x0) {
                                      pAVar4 = (pLVar2->fields).goldFadeInCurve;
                                      pCVar12 = (pLVar2->fields).claimButton;
                                      if ((pAVar4 != (AnimationCurve *)0x0) &&
                                         (fVar5 = UnityEngine.CoreModule.dll::UnityEngine::
                                                   AnimationCurve::AnimationCurve_Evaluate
                                                             (pAVar4,(this->fields)._currentTime___0
                                                                     / (pLVar2->fields).
                                                                       goldImageDisplayTime,
                                                              (MethodInfo *)0x0),
                                         pCVar12 != (CanvasGroup *)0x0)) {
                                        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::
                                        CanvasGroup_set_alpha(pCVar12,fVar5,(MethodInfo *)0x0);
                                        pOVar13 = (Object *)func_?();
                                        (this->fields)._current = pOVar13;
                                        if ((this->fields)._disposing != 0) {
                                          return 1;
                                        }
                                        (this->fields)._PC = 2;
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
    }
    else {
      fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar14 = fVar14 + fVar5;
      pLVar2 = (this->fields)._this;
      (this->fields)._currentTime___0 = fVar14;
      if ((pLVar2 != (LevelRewardAnimation *)0x0) &&
         (pAVar4 = (pLVar2->fields).rotateUIYAxisIn, pAVar4 != (AnimationCurve *)0x0)) {
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (pAVar4,fVar14 / (pLVar2->fields).rotateUIYAxisTime,(MethodInfo *)0x0);
        pLVar2 = (this->fields)._this;
        (this->fields)._rotation___1 = fVar5 * _UNK_? - _UNK_?;
        if ((pLVar2 != (LevelRewardAnimation *)0x0) &&
           (pIVar3 = (pLVar2->fields).goldImage, pIVar3 != (Image *)0x0)) {
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pIVar3,(MethodInfo *)0x0);
          fVar5 = (this->fields)._rotation___1;
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?();
          }
          pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                             ((Quaternion *)&stack0xffffffe8,0.0,fVar5,0.0,(MethodInfo *)0x0);
          if (pTVar7 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar7,*pQVar8,(MethodInfo *)0x0);
            pOVar13 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff8);
            (this->fields)._current = pOVar13;
            if ((this->fields)._disposing != 0) {
              return 1;
            }
            (this->fields)._PC = 1;
            return 1;
          }
        }
      }
    }
  }
code_?:
  uVar15 = func_?(0);
  *(int *)uVar15 = *(int *)uVar15 - ((uint)((ulonglong)uVar15 >> 0x20) & extraout_ECX);
  return (bool)uVar15;
}


/* Void Reset() */

void Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeGoldIcon>c__Iterator2::
     LevelRewardAnimation_DisplayAndFadeGoldIcon_c_Iterator2_Reset
               (LevelRewardAnimation_DisplayAndFadeGoldIcon_c_Iterator2 *this,MethodInfo *method)

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

