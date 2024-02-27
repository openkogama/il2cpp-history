
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeGoldIcon>d__30::
     LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30_MoveNext
               (LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30 *this,MethodInfo *method)

{
  pLVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_REWARD_);
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).__4__this;
  size = (Image *)0x0;
  bVar3 = 0;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if ((pLVar2 == (LevelRewardAnimation *)0x0) ||
       (pIVar4 = (pLVar2->fields).goldImage, pIVar4 == (Image *)0x0)) goto code_?;
    bVar3 = 0;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar4,1,(MethodInfo *)0x0);
    this_00 = (pLVar2->fields).nextLevelBadge;
    if (this_00 == (RawImage *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    pAVar5 = (pLVar2->fields).goldBounceEffect;
    if (pAVar5 == (AnimationCurve *)0x0) goto code_?;
    size = (Image *)0x0;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       (pAVar5,0.0,(MethodInfo *)0x0);
    pIVar4 = (pLVar2->fields).goldImage;
    if (pIVar4 == (Image *)0x0) goto code_?;
    pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)pIVar4,(MethodInfo *)0x0);
    bVar3 = (byte)pIVar4;
    if (pRVar7 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors
              (pRVar7,RectTransform_Axis__Enum_Horizontal,
               (float)(pLVar2->fields).targetSize * fVar6,(MethodInfo *)0x0);
    bVar3 = (byte)pRVar7;
    pIVar4 = (pLVar2->fields).goldImage;
    if ((pIVar4 == (Image *)0x0) ||
       (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar4,(MethodInfo *)0x0), pRVar7 == (RectTransform *)0x0)
       ) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors
              (pRVar7,RectTransform_Axis__Enum_Vertical,
               (float)(pLVar2->fields).targetSize * extraout_ECX,(MethodInfo *)0x0);
    pIVar4 = (pLVar2->fields).goldImage;
    if (pIVar4 == (Image *)0x0) goto code_?;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pIVar4,(MethodInfo *)0x0);
    uVar9._4_4_ = (float)_UNK_?;
    uVar9._0_4_ = (float)size;
    uVar9 = CONCAT44(uVar9._4_4_,(float)uVar9);
    this = (LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30 *)0x0;
    pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&stack0xffffffd0,(Vector3)CONCAT48(this,uVar9),
                         (MethodInfo *)0x0);
    if (pTVar8 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar8,*pQVar10,(MethodInfo *)0x0);
    (pLVar1->fields)._currentTime_5__2 = 0.0;
    bVar11 = bVar3;
    break;
  case 1:
    (this->fields).__1__state = -1;
    bVar11 = 0;
    if (pLVar2 == (LevelRewardAnimation *)0x0) goto code_?;
    break;
  case 2:
    (this->fields).__1__state = -1;
    bVar11 = 0;
    if (pLVar2 == (LevelRewardAnimation *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  bVar3 = bVar11;
  in_AF = 0;
  if (_UNK_? <= (pLVar1->fields)._currentTime_5__2 / (pLVar2->fields).rotateUIYAxisTime) {
    pIVar4 = (pLVar2->fields).goldImage;
    if (pIVar4 != (Image *)0x0) {
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pIVar4,(MethodInfo *)0x0);
      euler.y = (float)size;
      euler.x = (float)size;
      euler.z = 0.0;
      pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffffc0,euler,(MethodInfo *)0x0);
      if (pTVar8 != (Transform *)0x0) {
        size = (Image *)pQVar10->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar8,*pQVar10,(MethodInfo *)0x0);
        pTVar12 = (pLVar2->fields).header;
        if ((pTVar12 != (Text *)0x0) &&
           (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pTVar12,(MethodInfo *)0x0),
           pGVar13 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar13,1,(MethodInfo *)0x0);
          pTVar12 = (pLVar2->fields).header;
          TM::TM__(StringLiteral_REWARD_,(MethodInfo *)pTVar12);
          if (pTVar12 != (Text *)0x0) {
            (*(code *)(pTVar12->klass->vtable).set_text.method)();
            pTVar12 = (pLVar2->fields).goldText;
            if ((pTVar12 != (Text *)0x0) &&
               (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pTVar12,(MethodInfo *)0x0),
               pGVar13 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar13,1,(MethodInfo *)0x0);
              pCVar14 = (pLVar2->fields).claimButton;
              if ((pCVar14 != (CanvasGroup *)0x0) &&
                 (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pCVar14,(MethodInfo *)0x0),
                 pGVar13 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar13,1,(MethodInfo *)0x0);
                pCVar14 = (pLVar2->fields).claimButton;
                if (pCVar14 != (CanvasGroup *)0x0) {
                  UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                            (pCVar14,0.0,(MethodInfo *)0x0);
                  (pLVar1->fields)._currentTime_5__2 = 0.0;
                  bVar11 = bVar3;
code_?:
                  bVar3 = bVar11;
                  in_AF = 0;
                  if (_UNK_? <=
                      (pLVar1->fields)._currentTime_5__2 / (pLVar2->fields).goldImageDisplayTime) {
                    pAVar5 = (pLVar2->fields).goldBounceEffect;
                    if (pAVar5 != (AnimationCurve *)0x0) {
                      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                               AnimationCurve_Evaluate(pAVar5,1.0,(MethodInfo *)0x0);
                      pCVar14 = (pLVar2->fields).claimButton;
                      if (pCVar14 != (CanvasGroup *)0x0) {
                        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                                  (pCVar14,1.0,(MethodInfo *)0x0);
                        pIVar4 = (pLVar2->fields).goldImage;
                        if ((pIVar4 != (Image *)0x0) &&
                           (this_01 = (Image *)UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                               Graphic_get_rectTransform
                                                         ((Graphic *)pIVar4,(MethodInfo *)0x0),
                           size = pIVar4, this_01 != (Image *)0x0)) {
                          bVar3 = 0;
                          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                          RectTransform_SetSizeWithCurrentAnchors
                                    ((RectTransform *)this_01,RectTransform_Axis__Enum_Horizontal,
                                     (float)(pLVar2->fields).targetSize * fVar6,(MethodInfo *)0x0);
                          pIVar4 = (pLVar2->fields).goldImage;
                          size = this_01;
                          if ((pIVar4 != (Image *)0x0) &&
                             (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                        Graphic_get_rectTransform
                                                  ((Graphic *)pIVar4,(MethodInfo *)0x0),
                             size = this_01, pRVar7 != (RectTransform *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                            RectTransform_SetSizeWithCurrentAnchors
                                      (pRVar7,RectTransform_Axis__Enum_Vertical,
                                       (float)(pLVar2->fields).targetSize * fVar6,(MethodInfo *)0x0
                                      );
                            pOVar15 = (Object *)func_?();
                            (pLVar1->fields).__2__current = pOVar15;
                            func_?();
                            (pLVar1->fields).__1__state = 3;
                            return 1;
                          }
                        }
                      }
                    }
                  }
                  else {
                    fVar6 = (pLVar1->fields)._currentTime_5__2;
                    fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                       ((MethodInfo *)0x0);
                    (pLVar1->fields)._currentTime_5__2 = fVar16 + fVar6;
                    pAVar5 = (pLVar2->fields).goldBounceEffect;
                    if (pAVar5 != (AnimationCurve *)0x0) {
                      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                               AnimationCurve_Evaluate
                                         (pAVar5,(fVar16 + fVar6) /
                                                 (pLVar2->fields).goldImageDisplayTime,
                                          (MethodInfo *)0x0);
                      pIVar4 = (pLVar2->fields).goldImage;
                      if ((pIVar4 != (Image *)0x0) &&
                         (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                    Graphic_get_rectTransform((Graphic *)pIVar4,(MethodInfo *)0x0),
                         pRVar7 != (RectTransform *)0x0)) {
                        size = (Image *)((float)(pLVar2->fields).targetSize * fVar6);
                        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_SetSizeWithCurrentAnchors
                                  (pRVar7,RectTransform_Axis__Enum_Horizontal,(float)size,
                                   (MethodInfo *)0x0);
                        pIVar4 = (pLVar2->fields).goldImage;
                        if (pIVar4 != (Image *)0x0) {
                          bVar3 = 0xe3;
                          pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                    Graphic_get_rectTransform((Graphic *)pIVar4,(MethodInfo *)0x0);
                          if (pRVar7 != (RectTransform *)0x0) {
                            bVar3 = 0xb;
                            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                            RectTransform_SetSizeWithCurrentAnchors
                                      (pRVar7,RectTransform_Axis__Enum_Vertical,
                                       (float)(pLVar2->fields).targetSize * fVar6,(MethodInfo *)0x0
                                      );
                            pAVar5 = (pLVar2->fields).goldFadeInCurve;
                            if (pAVar5 != (AnimationCurve *)0x0) {
                              pCVar14 = (CanvasGroup *)
                                        ((pLVar1->fields)._currentTime_5__2 /
                                        (pLVar2->fields).goldImageDisplayTime);
                              fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                       AnimationCurve_Evaluate
                                                 (pAVar5,(float)pCVar14,(MethodInfo *)0x0);
                              if (pCVar14 != (CanvasGroup *)0x0) {
                                UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::
                                CanvasGroup_set_alpha(pCVar14,fVar6,(MethodInfo *)0x0);
                                pOVar15 = (Object *)func_?();
                                (pLVar1->fields).__2__current = pOVar15;
                                func_?();
                                (pLVar1->fields).__1__state = 2;
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
  else {
    fVar6 = (pLVar1->fields)._currentTime_5__2;
    fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (pLVar1->fields)._currentTime_5__2 = fVar16 + fVar6;
    pAVar5 = (pLVar2->fields).rotateUIYAxisIn;
    if (pAVar5 != (AnimationCurve *)0x0) {
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar5,(fVar16 + fVar6) / (pLVar2->fields).rotateUIYAxisTime,
                          (MethodInfo *)0x0);
      pIVar4 = (pLVar2->fields).goldImage;
      if (pIVar4 != (Image *)0x0) {
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pIVar4,(MethodInfo *)0x0);
        pIVar4 = (Image *)0x0;
        euler_00.y = (fVar6 * _UNK_? - _UNK_?) * _UNK_?;
        euler_00.x = (float)size;
        euler_00.z = 0.0;
        pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                  Quaternion_Internal_FromEulerRad
                            ((Quaternion *)&stack0xffffffc0,euler_00,(MethodInfo *)0x0);
        size = pIVar4;
        if (pTVar8 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (pTVar8,*pQVar10,(MethodInfo *)0x0);
          pOVar15 = (Object *)func_?();
          (pLVar1->fields).__2__current = pOVar15;
          func_?();
          (pLVar1->fields).__1__state = 1;
          return 1;
        }
      }
    }
  }
code_?:
  cVar17 = '\0';
  func_?();
  pcVar18 = (char *)((int)&pLVar1[0x15602a3].fields._currentTime_5__2 + 2);
  *pcVar18 = *pcVar18 + extraout_DH + cVar17;
  puVar19 = &(size->fields)._._.field_0x5b;
  *puVar19 = *puVar19 + (char)((uint)size >> 8) + (9 < (bVar3 & 0xf) | in_AF);
  pcVar20 = (code *)swi(3);
  bVar21 = (*pcVar20)();
  return bVar21;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeGoldIcon>d__30::
     LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30_System_Collections_IEnumerator_Reset
               (LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

