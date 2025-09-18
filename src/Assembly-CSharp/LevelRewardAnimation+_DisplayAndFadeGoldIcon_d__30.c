
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
  fVar3 = 0.0;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if ((pLVar2 == (LevelRewardAnimation *)0x0) ||
       (pIVar4 = (pLVar2->fields).goldImage, pIVar4 == (Image *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar4,1,(MethodInfo *)0x0);
    pRVar5 = (pLVar2->fields).nextLevelBadge;
    if (pRVar5 == (RawImage *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pRVar5,0,(MethodInfo *)0x0);
    pAVar6 = (pLVar2->fields).goldBounceEffect;
    unaff_EDI = pRVar5;
    if (pAVar6 == (AnimationCurve *)0x0) goto code_?;
    fVar3 = 0.0;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       (pAVar6,0.0,(MethodInfo *)0x0);
    pIVar4 = (pLVar2->fields).goldImage;
    unaff_EDI = pRVar5;
    if ((pIVar4 == (Image *)0x0) ||
       (pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar4,(MethodInfo *)0x0), unaff_EDI = pRVar5,
       pRVar8 == (RectTransform *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors
              (pRVar8,RectTransform_Axis__Enum_Horizontal,
               (float)(pLVar2->fields).targetSize * fVar7,(MethodInfo *)0x0);
    pIVar4 = (pLVar2->fields).goldImage;
    unaff_EDI = pRVar5;
    if ((pIVar4 == (Image *)0x0) ||
       (pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar4,(MethodInfo *)0x0), unaff_EDI = pRVar5,
       pRVar8 == (RectTransform *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors
              (pRVar8,RectTransform_Axis__Enum_Vertical,
               (float)(pLVar2->fields).targetSize * extraout_ECX,(MethodInfo *)0x0);
    pIVar4 = (pLVar2->fields).goldImage;
    unaff_EDI = pRVar5;
    if (pIVar4 == (Image *)0x0) goto code_?;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pIVar4,(MethodInfo *)0x0);
    uVar10._4_4_ = (float)_UNK_?;
    uVar10._0_4_ = fVar3;
    uVar10 = CONCAT44(uVar10._4_4_,(float)uVar10);
    this = (LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30 *)0x0;
    pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&stack0xffffffd0,(Vector3)CONCAT48(this,uVar10),
                         (MethodInfo *)0x0);
    unaff_EDI = pRVar5;
    if (pTVar9 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar9,*pQVar11,(MethodInfo *)0x0);
    (pLVar1->fields)._currentTime_5__2 = 0.0;
    break;
  case 1:
    (this->fields).__1__state = -1;
    pRVar5 = unaff_EDI;
    if (pLVar2 == (LevelRewardAnimation *)0x0) goto code_?;
    break;
  case 2:
    (this->fields).__1__state = -1;
    if (pLVar2 == (LevelRewardAnimation *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  if (_UNK_? <= (pLVar1->fields)._currentTime_5__2 / (pLVar2->fields).rotateUIYAxisTime) {
    pIVar4 = (pLVar2->fields).goldImage;
    unaff_EDI = pRVar5;
    if (pIVar4 != (Image *)0x0) {
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pIVar4,(MethodInfo *)0x0);
      unaff_EDI = (RawImage *)0x0;
      euler.y = fVar3;
      euler.x = fVar3;
      euler.z = 0.0;
      pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffffc0,euler,(MethodInfo *)0x0);
      if (pTVar9 != (Transform *)0x0) {
        unaff_EDI = (RawImage *)&UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar9,*pQVar11,(MethodInfo *)0x0);
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
code_?:
                  if (_UNK_? <=
                      (pLVar1->fields)._currentTime_5__2 / (pLVar2->fields).goldImageDisplayTime) {
                    pAVar6 = (pLVar2->fields).goldBounceEffect;
                    if (pAVar6 != (AnimationCurve *)0x0) {
                      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                               AnimationCurve_Evaluate(pAVar6,1.0,(MethodInfo *)0x0);
                      pRVar5 = (RawImage *)(pLVar2->fields).claimButton;
                      if (pRVar5 != (RawImage *)0x0) {
                        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                                  ((CanvasGroup *)pRVar5,1.0,(MethodInfo *)0x0);
                        pIVar4 = (pLVar2->fields).goldImage;
                        unaff_EDI = pRVar5;
                        if ((pIVar4 != (Image *)0x0) &&
                           (pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                      Graphic_get_rectTransform((Graphic *)pIVar4,(MethodInfo *)0x0)
                           , unaff_EDI = pRVar5, pRVar8 != (RectTransform *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                          RectTransform_SetSizeWithCurrentAnchors
                                    (pRVar8,RectTransform_Axis__Enum_Horizontal,
                                     (float)(pLVar2->fields).targetSize * fVar3,(MethodInfo *)0x0)
                          ;
                          pIVar4 = (pLVar2->fields).goldImage;
                          unaff_EDI = pRVar5;
                          if ((pIVar4 != (Image *)0x0) &&
                             (pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                        Graphic_get_rectTransform
                                                  ((Graphic *)pIVar4,(MethodInfo *)0x0),
                             unaff_EDI = pRVar5, pRVar8 != (RectTransform *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                            RectTransform_SetSizeWithCurrentAnchors
                                      (pRVar8,RectTransform_Axis__Enum_Vertical,
                                       (float)(pLVar2->fields).targetSize * fVar3,
                                       (MethodInfo *)0x0);
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
                    fVar3 = (pLVar1->fields)._currentTime_5__2;
                    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                       ((MethodInfo *)0x0);
                    (pLVar1->fields)._currentTime_5__2 = fVar7 + fVar3;
                    pAVar6 = (pLVar2->fields).goldBounceEffect;
                    if (pAVar6 != (AnimationCurve *)0x0) {
                      unaff_EDI = (RawImage *)0x0;
                      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                               AnimationCurve_Evaluate
                                         (pAVar6,(fVar7 + fVar3) /
                                                 (pLVar2->fields).goldImageDisplayTime,
                                          (MethodInfo *)0x0);
                      pIVar4 = (pLVar2->fields).goldImage;
                      if ((pIVar4 != (Image *)0x0) &&
                         (pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                    Graphic_get_rectTransform((Graphic *)pIVar4,(MethodInfo *)0x0),
                         pRVar8 != (RectTransform *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_SetSizeWithCurrentAnchors
                                  (pRVar8,RectTransform_Axis__Enum_Horizontal,
                                   (float)(pLVar2->fields).targetSize * fVar3,(MethodInfo *)0x0);
                        pIVar4 = (pLVar2->fields).goldImage;
                        if ((pIVar4 != (Image *)0x0) &&
                           (pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                      Graphic_get_rectTransform((Graphic *)pIVar4,(MethodInfo *)0x0)
                           , pRVar8 != (RectTransform *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                          RectTransform_SetSizeWithCurrentAnchors
                                    (pRVar8,RectTransform_Axis__Enum_Vertical,
                                     (float)(pLVar2->fields).targetSize * fVar3,(MethodInfo *)0x0)
                          ;
                          pAVar6 = (pLVar2->fields).goldFadeInCurve;
                          if (pAVar6 != (AnimationCurve *)0x0) {
                            pCVar14 = (CanvasGroup *)
                                      ((pLVar1->fields)._currentTime_5__2 /
                                      (pLVar2->fields).goldImageDisplayTime);
                            fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                     AnimationCurve_Evaluate
                                               (pAVar6,(float)pCVar14,(MethodInfo *)0x0);
                            if (pCVar14 != (CanvasGroup *)0x0) {
                              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::
                              CanvasGroup_set_alpha(pCVar14,fVar3,(MethodInfo *)0x0);
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
  else {
    fVar7 = (pLVar1->fields)._currentTime_5__2;
    fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (pLVar1->fields)._currentTime_5__2 = fVar16 + fVar7;
    pAVar6 = (pLVar2->fields).rotateUIYAxisIn;
    unaff_EDI = pRVar5;
    if (pAVar6 != (AnimationCurve *)0x0) {
      unaff_EDI = (RawImage *)0x0;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar6,(fVar16 + fVar7) / (pLVar2->fields).rotateUIYAxisTime,
                          (MethodInfo *)0x0);
      fVar7 = fVar7 * _UNK_?;
      pIVar4 = (pLVar2->fields).goldImage;
      if (pIVar4 != (Image *)0x0) {
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pIVar4,(MethodInfo *)0x0);
        unaff_EDI = (RawImage *)&UNK_?;
        euler_00.y = (fVar7 - _UNK_?) * _UNK_?;
        euler_00.x = fVar3;
        euler_00.z = 0.0;
        pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                  Quaternion_Internal_FromEulerRad
                            ((Quaternion *)&stack0xffffffc0,euler_00,(MethodInfo *)0x0);
        pLVar2 = (LevelRewardAnimation *)0x0;
        if (pTVar9 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (pTVar9,*pQVar11,(MethodInfo *)0x0);
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
  this_00 = (NotSupportedException *)&UNK_?;
  uVar18 = func_?();
  iVar19 = (int)uVar18;
  if (extraout_ECX_00 == 1) {
    *(char *)&pLVar1->klass = *(char *)&pLVar1->klass + (char)((uint6)uVar18 >> 0x28) + cVar17;
    bVar20 = (byte)(iVar19 + 1);
    *(byte *)(iVar19 + 0x11) = *(byte *)(iVar19 + 0x11) ^ bVar20;
    bVar21 = *(byte *)(iVar19 + 0x11);
    ppTVar22 = &(pLVar2->fields).previousBadgeTextureAsset;
    *(char *)ppTVar22 = *(char *)ppTVar22 + (char)((uint6)uVar18 >> 0x20);
    puRam_? = &UNK_?;
    psVar23 = (short *)(**(code **)(CONCAT22((short)((uint)(iVar19 + 1) >> 0x10),
                                             CONCAT11(0xd7,bVar20 ^ bVar21 ^ 0x40)) + -0x18))();
    *psVar23 = (short)ROUND(extraout_ST0);
    mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
              (this_00,(MethodInfo *)unaff_EDI);
  }
  func_?();
  func_?(pLVar2);
  pcVar24 = (code *)swi(3);
  bVar25 = (*pcVar24)();
  return bVar25;
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

