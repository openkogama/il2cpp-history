
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeNextBadge>d__29::
     LevelRewardAnimation_DisplayAndFadeNextBadge_d_29_MoveNext
               (LevelRewardAnimation_DisplayAndFadeNextBadge_d_29 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_LEVEL_UP_);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).__4__this;
  fVar1 = 0.0;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if ((this_00 != (LevelRewardAnimation *)0x0) &&
       (pRVar2 = (this_00->fields).nextLevelBadge, pRVar2 != (RawImage *)0x0)) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pRVar2,(MethodInfo *)0x0);
      euler_00.y = (float)_UNK_?;
      euler_00.x = fVar1;
      euler_00.z = 0.0;
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffffd0,euler_00,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        fVar1 = pQVar4->z;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar3,*pQVar4,(MethodInfo *)0x0);
        pRVar2 = (this_00->fields).nextLevelBadge;
        if (pRVar2 != (RawImage *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pRVar2,1,(MethodInfo *)0x0);
          pRVar2 = (this_00->fields).prevLevelBadge;
          if (pRVar2 != (RawImage *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pRVar2,0,(MethodInfo *)0x0);
            pAVar5 = (this_00->fields).nextBadgeBounceEffect;
            if (pAVar5 != (AnimationCurve *)0x0) {
              fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                       AnimationCurve_Evaluate(pAVar5,0.0,(MethodInfo *)0x0);
              pRVar2 = (this_00->fields).nextLevelBadge;
              if ((pRVar2 != (RawImage *)0x0) &&
                 (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                     ((Graphic *)pRVar2,(MethodInfo *)0x0),
                 pRVar7 != (RectTransform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar7,RectTransform_Axis__Enum_Horizontal,
                           (float)(this_00->fields).targetSize * fVar6,(MethodInfo *)0x0);
                pRVar2 = (this_00->fields).nextLevelBadge;
                if ((pRVar2 != (RawImage *)0x0) &&
                   (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                       ((Graphic *)pRVar2,(MethodInfo *)0x0),
                   pRVar7 != (RectTransform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_SetSizeWithCurrentAnchors
                            (pRVar7,RectTransform_Axis__Enum_Vertical,
                             (float)(this_00->fields).targetSize * fVar6,(MethodInfo *)0x0);
                  (this->fields)._currentTime_5__2 = 0.0;
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
    break;
  case 1:
    (this->fields).__1__state = -1;
    if (this_00 != (LevelRewardAnimation *)0x0) {
code_?:
      if (_UNK_? <= (this->fields)._currentTime_5__2 / (this_00->fields).rotateUIYAxisTime) {
        pIVar8 = (this_00->fields).backgroundRays;
        if (pIVar8 != (Image *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pIVar8,1,(MethodInfo *)0x0);
          pTVar9 = (this_00->fields).header;
          if ((pTVar9 != (Text *)0x0) &&
             (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pTVar9,(MethodInfo *)0x0),
             pGVar10 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar10,1,(MethodInfo *)0x0);
            pTVar9 = (this_00->fields).header;
            fVar1 = 0.0;
            TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
            if (pTVar9 != (Text *)0x0) {
              (*(code *)(pTVar9->klass->vtable).set_text.method)();
              pRVar2 = (this_00->fields).nextLevelBadge;
              if (pRVar2 != (RawImage *)0x0) {
                pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pRVar2,(MethodInfo *)0x0);
                euler.y = fVar1;
                euler.x = fVar1;
                euler.z = 0.0;
                pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffffd0,euler,(MethodInfo *)0x0);
                if (pTVar3 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (pTVar3,*pQVar4,(MethodInfo *)0x0);
                  (this->fields)._currentTime_5__2 = 0.0;
                  goto code_?;
                }
              }
            }
          }
        }
      }
      else {
        fVar6 = (this->fields)._currentTime_5__2;
        fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        (this->fields)._currentTime_5__2 = fVar11 + fVar6;
        pAVar5 = (this_00->fields).rotateUIYAxisIn;
        if (pAVar5 != (AnimationCurve *)0x0) {
          fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar5,(fVar11 + fVar6) / (this_00->fields).rotateUIYAxisTime,
                              (MethodInfo *)0x0);
          pRVar2 = (this_00->fields).nextLevelBadge;
          if (pRVar2 != (RawImage *)0x0) {
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pRVar2,(MethodInfo *)0x0);
            euler_02.y = (fVar6 * _UNK_? - _UNK_?) * _UNK_?;
            euler_02.x = fVar1;
            euler_02.z = 0.0;
            pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffffc0,euler_02,(MethodInfo *)0x0);
            this_00 = (LevelRewardAnimation *)0x0;
            if (pTVar3 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar3,*pQVar4,(MethodInfo *)0x0);
              pOVar12 = (Object *)func_?();
              (this->fields).__2__current = pOVar12;
              func_?();
              (this->fields).__1__state = 1;
              return 1;
            }
          }
        }
      }
    }
    break;
  case 2:
    (this->fields).__1__state = -1;
    if (this_00 != (LevelRewardAnimation *)0x0) {
code_?:
      if (_UNK_? <= (this->fields)._currentTime_5__2 / (this_00->fields).nextLevelDisplayTime
         ) {
        pAVar5 = (this_00->fields).nextBadgeBounceEffect;
        if (pAVar5 != (AnimationCurve *)0x0) {
          fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar5,1.0,(MethodInfo *)0x0);
          pRVar2 = (this_00->fields).nextLevelBadge;
          if ((pRVar2 != (RawImage *)0x0) &&
             (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                 ((Graphic *)pRVar2,(MethodInfo *)0x0),
             pRVar7 != (RectTransform *)0x0)) {
            fVar1 = 0.0;
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_SetSizeWithCurrentAnchors
                      (pRVar7,RectTransform_Axis__Enum_Horizontal,
                       (float)(this_00->fields).targetSize * fVar6,(MethodInfo *)0x0);
            pRVar2 = (this_00->fields).nextLevelBadge;
            if ((pRVar2 != (RawImage *)0x0) &&
               (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                   ((Graphic *)pRVar2,(MethodInfo *)0x0),
               pRVar7 != (RectTransform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_SetSizeWithCurrentAnchors
                        (pRVar7,RectTransform_Axis__Enum_Vertical,
                         (float)(this_00->fields).targetSize * fVar6,(MethodInfo *)0x0);
              pTVar9 = (this_00->fields).header;
              if ((pTVar9 != (Text *)0x0) &&
                 (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pTVar9,(MethodInfo *)0x0),
                 pGVar10 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar10,0,(MethodInfo *)0x0);
                (this->fields)._currentTime_5__2 = 0.0;
                goto code_?;
              }
            }
          }
        }
      }
      else {
        fVar1 = (this->fields)._currentTime_5__2;
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        (this->fields)._currentTime_5__2 = fVar6 + fVar1;
        pAVar5 = (this_00->fields).nextBadgeBounceEffect;
        if (pAVar5 != (AnimationCurve *)0x0) {
          fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar5,(fVar6 + fVar1) / (this_00->fields).nextLevelDisplayTime,
                              (MethodInfo *)0x0);
          pRVar2 = (this_00->fields).nextLevelBadge;
          if ((pRVar2 != (RawImage *)0x0) &&
             (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                 ((Graphic *)pRVar2,(MethodInfo *)0x0),
             pRVar7 != (RectTransform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_SetSizeWithCurrentAnchors
                      (pRVar7,RectTransform_Axis__Enum_Horizontal,
                       (float)(this_00->fields).targetSize * fVar1,(MethodInfo *)0x0);
            pRVar2 = (this_00->fields).nextLevelBadge;
            if ((pRVar2 != (RawImage *)0x0) &&
               (pRVar7 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                   ((Graphic *)pRVar2,(MethodInfo *)0x0),
               pRVar7 != (RectTransform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_SetSizeWithCurrentAnchors
                        (pRVar7,RectTransform_Axis__Enum_Vertical,
                         (float)(this_00->fields).targetSize * fVar1,(MethodInfo *)0x0);
              pAVar5 = (this_00->fields).backgroundRaySizeCurve;
              if (pAVar5 != (AnimationCurve *)0x0) {
                fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                         AnimationCurve_Evaluate
                                   (pAVar5,(this->fields)._currentTime_5__2 /
                                           (this_00->fields).nextLevelDisplayTime,(MethodInfo *)0x0)
                ;
                pIVar8 = (this_00->fields).backgroundRays;
                if ((pIVar8 != (Image *)0x0) &&
                   (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform((Component *)pIVar8,(MethodInfo *)0x0),
                   pTVar3 != (Transform *)0x0)) {
                  value.y = fVar1;
                  value.x = fVar1;
                  value.z = 1.0;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                            (pTVar3,value,(MethodInfo *)0x0);
                  pOVar12 = (Object *)func_?();
                  (this->fields).__2__current = pOVar12;
                  func_?();
                  (this->fields).__1__state = 2;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
    break;
  case 3:
    (this->fields).__1__state = -1;
    if (this_00 != (LevelRewardAnimation *)0x0) {
code_?:
      if (_UNK_? <= (this->fields)._currentTime_5__2 / (this_00->fields).rotateUIYAxisTime) {
        pRVar2 = (this_00->fields).nextLevelBadge;
        if (pRVar2 != (RawImage *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pRVar2,(MethodInfo *)0x0);
          euler_01.y = (float)_UNK_?;
          euler_01.x = fVar1;
          euler_01.z = 0.0;
          pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                    Quaternion_Internal_FromEulerRad
                              ((Quaternion *)&stack0xffffffc0,euler_01,(MethodInfo *)0x0);
          this = (LevelRewardAnimation_DisplayAndFadeNextBadge_d_29 *)0x0;
          if (pTVar3 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar3,*pQVar4,(MethodInfo *)0x0);
            bVar13 = cRam_? == '\0';
            if (bVar13) {
              func_?();
              cRam_? = '\x01';
            }
            cVar14 = bVar13 && (undefined1 *)0xfffffffb < &stack0xffffffe0;
            method_00 = TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30;
            this = (LevelRewardAnimation_DisplayAndFadeNextBadge_d_29 *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
            (this->fields).__1__state = 0;
            pbVar15 = extraout_EAX;
            cVar16 = extraout_DL;
            goto code_?;
          }
        }
      }
      else {
        fVar6 = (this->fields)._currentTime_5__2;
        fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        (this->fields)._currentTime_5__2 = fVar11 + fVar6;
        pAVar5 = (this_00->fields).rotateUIYAxisOut;
        if (pAVar5 != (AnimationCurve *)0x0) {
          fVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar5,(fVar11 + fVar6) / (this_00->fields).rotateUIYAxisTime,
                              (MethodInfo *)0x0);
          pRVar2 = (this_00->fields).nextLevelBadge;
          if (pRVar2 != (RawImage *)0x0) {
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pRVar2,(MethodInfo *)0x0);
            euler_03.y = fVar6 * _UNK_? * _UNK_?;
            euler_03.x = fVar1;
            euler_03.z = 0.0;
            pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffffc0,euler_03,(MethodInfo *)0x0);
            this_00 = (LevelRewardAnimation *)0x0;
            if (pTVar3 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar3,*pQVar4,(MethodInfo *)0x0);
              pOVar12 = (Object *)func_?();
              (this->fields).__2__current = pOVar12;
              func_?();
              (this->fields).__1__state = 3;
              return 1;
            }
          }
        }
      }
    }
    break;
  case 4:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  cVar14 = '\0';
  pbVar15 = (byte *)func_?();
  cVar16 = extraout_DL_00;
  if (extraout_ECX == 1) {
    pcVar17 = (char *)((int)&this_00[-1].monitor + 1);
    *pcVar17 = *pcVar17 + (char)pbVar15 + (pbVar15 < (byte *)0x3d933710);
    pcVar18 = (code *)swi(3);
    bVar19 = (*pcVar18)();
    return bVar19;
  }
code_?:
  bVar20 = (byte)pbVar15;
  *pbVar15 = *pbVar15 | bVar20;
  *pbVar15 = *pbVar15 + bVar20;
  pcVar17 = (char *)((int)&(this_00->fields).backgroundRaySizeCurve + 1);
  *pcVar17 = *pcVar17 + cVar16;
  *(LevelRewardAnimation **)((int)&(this->fields).__4__this + 1) = this_00;
  func_?();
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this_00,(IEnumerator *)((int)&this->klass + 1),(MethodInfo *)0x0);
  uVar21 = func_?();
  iVar22 = *(int *)(CONCAT22((short)((uint)&stack0xfffffffc >> 0x10),
                            CONCAT11((char)((uint)&stack0xfffffffc >> 8) + bVar20 + cVar14,
                                     (char)&stack0xfffffffc)) + 8);
  *(undefined4 *)(iVar22 + 0xc) = uVar21;
  func_?();
  *(undefined4 *)(iVar22 + 8) = 4;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeNextBadge>d__29::
     LevelRewardAnimation_DisplayAndFadeNextBadge_d_29_System_Collections_IEnumerator_Reset
               (LevelRewardAnimation_DisplayAndFadeNextBadge_d_29 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

