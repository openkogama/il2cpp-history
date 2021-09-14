
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadePrevBadge>c__Iterator0::
     LevelRewardAnimation_DisplayAndFadePrevBadge_c_Iterator0_MoveNext
               (LevelRewardAnimation_DisplayAndFadePrevBadge_c_Iterator0 *this,MethodInfo *method)

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
  default:
    return 0;
  }
  pLVar3 = (this->fields)._this;
  if ((pLVar3 == (LevelRewardAnimation *)0x0) ||
     (pRVar4 = (pLVar3->fields).prevLevelBadge, pRVar4 == (RawImage *)0x0)) goto code_?;
  unaff_EDI = (ScaleAnimationBase *)
              UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)pRVar4,(MethodInfo *)0x0);
  pLVar3 = (pLVar1->fields)._this;
  if (pLVar3 == (LevelRewardAnimation *)0x0) goto code_?;
  value_00.x = 0.0;
  value_00.y = 0.0;
  fVar5 = (float)(pLVar3->fields).targetSize;
  func_?(&stack0xfffffff4,fVar5,fVar5,0);
  if (unaff_EDI == (ScaleAnimationBase *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
            ((RectTransform *)unaff_EDI,value_00,(MethodInfo *)0x0);
  pLVar3 = (pLVar1->fields)._this;
  if ((pLVar3 == (LevelRewardAnimation *)0x0) ||
     (pRVar4 = (pLVar3->fields).prevLevelBadge, pRVar4 == (RawImage *)0x0)) goto code_?;
  unaff_EDI = (ScaleAnimationBase *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pRVar4,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                      ((Quaternion *)&stack0xffffffd8,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (unaff_EDI == (ScaleAnimationBase *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
            ((Transform *)unaff_EDI,*pQVar6,(MethodInfo *)0x0);
  pLVar3 = (pLVar1->fields)._this;
  if ((pLVar3 == (LevelRewardAnimation *)0x0) ||
     (pRVar4 = (pLVar3->fields).prevLevelBadge, pRVar4 == (RawImage *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)pRVar4,1,(MethodInfo *)0x0);
  pLVar3 = (pLVar1->fields)._this;
  if ((pLVar3 == (LevelRewardAnimation *)0x0) ||
     (pIVar7 = (pLVar3->fields).backgroundRays, pIVar7 == (Image *)0x0)) goto code_?;
  unaff_EDI = (ScaleAnimationBase *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pIVar7,(MethodInfo *)0x0);
  fVar5 = 0.0;
  _puStack_18 = 0;
  func_?(&puStack_8,0x3f800000,0x3f800000,0x3f800000,0);
  uVar9 = _puStack_18;
  if (unaff_EDI == (ScaleAnimationBase *)0x0) goto code_?;
  value.z = fVar5;
  uVar10 = (ulonglong)_puStack_18 >> 0x20;
  value.x = (float)puStack_8;
  value.y = (float)(int)uVar10;
  _puStack_18 = uVar9;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
            ((Transform *)unaff_EDI,value,(MethodInfo *)0x0);
  pLVar3 = (pLVar1->fields)._this;
  if ((pLVar3 == (LevelRewardAnimation *)0x0) ||
     (pIVar7 = (pLVar3->fields).backgroundRays, pIVar7 == (Image *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)pIVar7,0,(MethodInfo *)0x0);
  pLVar3 = (pLVar1->fields)._this;
  if ((pLVar3 == (LevelRewardAnimation *)0x0) ||
     ((pTVar11 = (pLVar3->fields).goldText, pTVar11 == (Text *)0x0 ||
      (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pTVar11,(MethodInfo *)0x0), pGVar12 == (GameObject *)0x0))
     )) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar12,0,(MethodInfo *)0x0);
  pLVar3 = (pLVar1->fields)._this;
  if ((pLVar3 == (LevelRewardAnimation *)0x0) ||
     ((this_00 = (pLVar3->fields).claimButton, this_00 == (CanvasGroup *)0x0 ||
      (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar12 == (GameObject *)0x0)
      ))) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar12,0,(MethodInfo *)0x0);
  pLVar3 = (pLVar1->fields)._this;
  if ((pLVar3 == (LevelRewardAnimation *)0x0) ||
     (pIVar7 = (pLVar3->fields).goldImage, pIVar7 == (Image *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)pIVar7,0,(MethodInfo *)0x0);
  pLVar3 = (pLVar1->fields)._this;
  if (((pLVar3 == (LevelRewardAnimation *)0x0) ||
      (pTVar11 = (pLVar3->fields).header, pTVar11 == (Text *)0x0)) ||
     (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pTVar11,(MethodInfo *)0x0), pGVar12 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar12,0,(MethodInfo *)0x0);
  (pLVar1->fields)._currentTime___0 = 0.0;
  (pLVar1->fields)._scale___0 = 0.0;
code_?:
  pLVar3 = (pLVar1->fields)._this;
  if (pLVar3 != (LevelRewardAnimation *)0x0) {
    this = (LevelRewardAnimation_DisplayAndFadePrevBadge_c_Iterator0 *)
           (pLVar1->fields)._currentTime___0;
    if (_UNK_? <= (float)this / (pLVar3->fields).prevLevelDisplayTime) {
      if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
         (pAVar13 = (pLVar3->fields).prevBadgeBounceEffect, pAVar13 != (AnimationCurve *)0x0)) {
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (pAVar13,1.0,(MethodInfo *)0x0);
        pLVar3 = (pLVar1->fields)._this;
        (pLVar1->fields)._scale___0 = fVar5;
        if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
           (pRVar4 = (pLVar3->fields).prevLevelBadge, pRVar4 != (RawImage *)0x0)) {
          unaff_EDI = (ScaleAnimationBase *)
                      UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pRVar4,(MethodInfo *)0x0);
          pLVar3 = (pLVar1->fields)._this;
          if (pLVar3 != (LevelRewardAnimation *)0x0) {
            value_01.x = 0.0;
            value_01.y = 0.0;
            func_?(&stack0xfffffff4,
                            (float)(pLVar3->fields).targetSize * (pLVar1->fields)._scale___0);
            if (unaff_EDI != (ScaleAnimationBase *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                        ((RectTransform *)unaff_EDI,value_01,(MethodInfo *)0x0);
              (pLVar1->fields)._currentTime___0 = 0.0;
code_?:
              pLVar3 = (pLVar1->fields)._this;
              if (pLVar3 != (LevelRewardAnimation *)0x0) {
                this = (LevelRewardAnimation_DisplayAndFadePrevBadge_c_Iterator0 *)
                       (pLVar1->fields)._currentTime___0;
                if (_UNK_? <= (float)this / (pLVar3->fields).rotateUIYAxisTime) {
                  if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                     (pRVar4 = (pLVar3->fields).prevLevelBadge, pRVar4 != (RawImage *)0x0)) {
                    method_00 = (MethodInfo *)&UNK_?;
                    unaff_EDI = (ScaleAnimationBase *)
                                UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_transform((Component_1 *)pRVar4,(MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                      func_?(TypeInfo__UnityEngine__Quaternion);
                    }
                    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                                        ((Quaternion *)&stack0xffffffd8,0.0,90.0,0.0,
                                         (MethodInfo *)0x0);
                    if (unaff_EDI != (ScaleAnimationBase *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                ((Transform *)unaff_EDI,*pQVar6,(MethodInfo *)0x0);
                      unaff_EBX = (pLVar1->fields)._this;
                      if (unaff_EBX != (LevelRewardAnimation *)0x0) {
                        if (cRam_? == '\0') {
                          func_?(_UNK_?);
                          cRam_? = '\x01';
                        }
                        unaff_EDI = (ScaleAnimationBase *)
                                    func_?(
                                                  TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_c__Iterator1
                                                  );
                        ScaleAnimationBase::ScaleAnimationBase_Play(unaff_EDI,0.0,method_00);
                        if ((unaff_EDI != (ScaleAnimationBase *)0x0) &&
                           ((unaff_EDI->fields).target = (Transform *)unaff_EBX,
                           unaff_EBX != (LevelRewardAnimation *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                          MonoBehaviour_StartCoroutine_Auto
                                    ((MonoBehaviour *)unaff_EBX,(IEnumerator *)unaff_EDI,
                                     (MethodInfo *)0x0);
                          this = (LevelRewardAnimation_DisplayAndFadePrevBadge_c_Iterator0 *)0x0;
                          pOVar14 = (Object *)func_?(TypeInfo__System__Int32,&this);
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
                else {
                  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  this = (LevelRewardAnimation_DisplayAndFadePrevBadge_c_Iterator0 *)
                         (fVar5 + (float)this);
                  pLVar3 = (pLVar1->fields)._this;
                  (pLVar1->fields)._currentTime___0 = (float)this;
                  if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                     (pAVar13 = (pLVar3->fields).rotateUIYAxisOut, pAVar13 != (AnimationCurve *)0x0))
                  {
                    fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                             AnimationCurve_Evaluate
                                       (pAVar13,(float)this / (pLVar3->fields).rotateUIYAxisTime,
                                        (MethodInfo *)0x0);
                    pLVar3 = (pLVar1->fields)._this;
                    (pLVar1->fields)._rotation___1 = fVar5 * _UNK_?;
                    if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
                       (pRVar4 = (pLVar3->fields).prevLevelBadge, pRVar4 != (RawImage *)0x0)) {
                      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_transform((Component_1 *)pRVar4,(MethodInfo *)0x0);
                      this = (LevelRewardAnimation_DisplayAndFadePrevBadge_c_Iterator0 *)
                             (pLVar1->fields)._rotation___1;
                      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                        func_?();
                      }
                      pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                Quaternion_Euler((Quaternion *)&stack0xffffffd8,0.0,(float)this,0.0,
                                                 (MethodInfo *)0x0);
                      unaff_EDI = (ScaleAnimationBase *)0x0;
                      if (this_01 != (Transform *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                  (this_01,*pQVar6,(MethodInfo *)0x0);
                        pOVar14 = (Object *)
                                  func_?(TypeInfo__System__Int32,&stack0xfffffff8);
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
    else {
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      this = (LevelRewardAnimation_DisplayAndFadePrevBadge_c_Iterator0 *)(fVar5 + (float)this);
      pLVar3 = (pLVar1->fields)._this;
      (pLVar1->fields)._currentTime___0 = (float)this;
      if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
         (pAVar13 = (pLVar3->fields).prevBadgeBounceEffect, pAVar13 != (AnimationCurve *)0x0)) {
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (pAVar13,(float)this / (pLVar3->fields).prevLevelDisplayTime,
                            (MethodInfo *)0x0);
        pLVar3 = (pLVar1->fields)._this;
        (pLVar1->fields)._scale___0 = fVar5;
        if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
           (pRVar4 = (pLVar3->fields).prevLevelBadge, pRVar4 != (RawImage *)0x0)) {
          pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pRVar4,(MethodInfo *)0x0);
          pLVar3 = (pLVar1->fields)._this;
          if ((pLVar3 != (LevelRewardAnimation *)0x0) && (pRVar15 != (RectTransform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_SetSizeWithCurrentAnchors
                      (pRVar15,RectTransform_Axis__Enum_Horizontal,
                       (float)(pLVar3->fields).targetSize * (pLVar1->fields)._scale___0,
                       (MethodInfo *)0x0);
            pLVar3 = (pLVar1->fields)._this;
            if ((pLVar3 != (LevelRewardAnimation *)0x0) &&
               (pRVar4 = (pLVar3->fields).prevLevelBadge, pRVar4 != (RawImage *)0x0)) {
              _puStack_18 = CONCAT44(pRVar4,&UNK_?);
              pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                  ((Graphic *)pRVar4,(MethodInfo *)0x0);
              pLVar3 = (pLVar1->fields)._this;
              if ((pLVar3 != (LevelRewardAnimation *)0x0) && (pRVar15 != (RectTransform *)0x0)) {
                _puStack_18 = CONCAT44(pRVar15,&UNK_?);
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar15,RectTransform_Axis__Enum_Vertical,
                           (float)(pLVar3->fields).targetSize * (pLVar1->fields)._scale___0,
                           (MethodInfo *)0x0);
                pOVar14 = (Object *)func_?();
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
    }
  }
code_?:
  bVar16 = 0;
  func_?(0);
  if (extraout_ECX == 0) {
    pcVar17 = (code *)swi(0xb7);
    (*pcVar17)();
    this_02 = (NotSupportedException *)func_?();
    mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
              (this_02,(MethodInfo *)0x0);
    func_?(this_02,0,
                    MethodInfo__LevelRewardAnimation___DisplayAndFadePrevBadge_c__Iterator0__Reset__
                   );
    pcVar17 = (code *)swi(3);
    bVar18 = (*pcVar17)();
    return bVar18;
  }
  bVar19 = (byte)((uint)unaff_EBX >> 8);
  uVar20 = in(0x19);
  out(0x19,uVar20);
  *(byte *)&unaff_EDI->klass =
       *(char *)&unaff_EDI->klass + bVar19 +
       (CARRY1((byte)unaff_EBX,extraout_DH) ||
       CARRY1((byte)unaff_EBX + extraout_DH,
              CARRY1(extraout_DL,bVar19) || CARRY1(extraout_DL + bVar19,bVar16)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* Void Reset() */

void Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadePrevBadge>c__Iterator0::
     LevelRewardAnimation_DisplayAndFadePrevBadge_c_Iterator0_Reset
               (LevelRewardAnimation_DisplayAndFadePrevBadge_c_Iterator0 *this,MethodInfo *method)

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

