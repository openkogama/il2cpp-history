
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadePrevBadge>c__Iterator0::
     LevelRewardAnimation_DisplayAndFadePrevBadge_c_Iterator0_MoveNext
               (LevelRewardAnimation_DisplayAndFadePrevBadge_c_Iterator0 *this,MethodInfo *method)

{
  uVar1 = unaff_ESI >> 0x18;
  uVar2 = (uint)unaff_EDI >> 0x18;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  iVar3 = (this->fields)._PC;
  (this->fields)._PC = -1;
  switch(iVar3) {
  case 0:
    break;
  case 1:
    goto code_?;
  case 2:
    goto code_?;
  default:
    return 0;
  }
  pLVar4 = (this->fields)._this;
  if ((pLVar4 == (LevelRewardAnimation *)0x0) ||
     (pRVar5 = (pLVar4->fields).prevLevelBadge, pRVar5 == (RawImage *)0x0)) goto code_?;
  unaff_EDI = (ScaleAnimationBase *)
              UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        ((Graphic *)pRVar5,(MethodInfo *)0x0);
  pLVar4 = (this->fields)._this;
  if (pLVar4 == (LevelRewardAnimation *)0x0) goto code_?;
  value_01.x = 0.0;
  value_01.y = 0.0;
  uVar1 = 0;
  uVar2 = (uint)(float)(pLVar4->fields).targetSize >> 0x18;
  func_?((char)&stack0xfffffff4);
  if (unaff_EDI == (ScaleAnimationBase *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
            ((RectTransform *)unaff_EDI,value_01,(MethodInfo *)0x0);
  pLVar4 = (this->fields)._this;
  if ((pLVar4 == (LevelRewardAnimation *)0x0) ||
     (pRVar5 = (pLVar4->fields).prevLevelBadge, pRVar5 == (RawImage *)0x0)) goto code_?;
  unaff_EDI = (ScaleAnimationBase *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pRVar5,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                      ((Quaternion *)&stack0xffffffd8,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (unaff_EDI == (ScaleAnimationBase *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
            ((Transform *)unaff_EDI,*pQVar6,(MethodInfo *)0x0);
  pLVar4 = (this->fields)._this;
  if ((pLVar4 == (LevelRewardAnimation *)0x0) ||
     (pRVar5 = (pLVar4->fields).prevLevelBadge, pRVar5 == (RawImage *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)pRVar5,1,(MethodInfo *)0x0);
  pLVar4 = (this->fields)._this;
  if ((pLVar4 == (LevelRewardAnimation *)0x0) ||
     (pIVar7 = (pLVar4->fields).backgroundRays, pIVar7 == (Image *)0x0)) goto code_?;
  unaff_EDI = (ScaleAnimationBase *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pIVar7,(MethodInfo *)0x0);
  fVar8 = 0.0;
  _puStack_18 = 0;
  uVar1 = 0;
  uVar2 = 0x3f;
  func_?(&puStack_9,0);
  uVar10 = _puStack_18;
  if (unaff_EDI == (ScaleAnimationBase *)0x0) goto code_?;
  value.z = fVar8;
  uVar11 = (ulonglong)_puStack_18 >> 0x20;
  value.x = (float)puStack_9;
  value.y = (float)(int)uVar11;
  _puStack_18 = uVar10;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
            ((Transform *)unaff_EDI,value,(MethodInfo *)0x0);
  pLVar4 = (this->fields)._this;
  if ((pLVar4 == (LevelRewardAnimation *)0x0) ||
     (pIVar7 = (pLVar4->fields).backgroundRays, pIVar7 == (Image *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)pIVar7,0,(MethodInfo *)0x0);
  pLVar4 = (this->fields)._this;
  if ((pLVar4 == (LevelRewardAnimation *)0x0) ||
     ((pTVar12 = (pLVar4->fields).goldText, pTVar12 == (Text *)0x0 ||
      (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pTVar12,(MethodInfo *)0x0), pGVar13 == (GameObject *)0x0))
     )) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar13,0,(MethodInfo *)0x0);
  pLVar4 = (this->fields)._this;
  if ((pLVar4 == (LevelRewardAnimation *)0x0) ||
     ((this_00 = (pLVar4->fields).claimButton, this_00 == (CanvasGroup *)0x0 ||
      (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this_00,(MethodInfo *)0x0), pGVar13 == (GameObject *)0x0)
      ))) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar13,0,(MethodInfo *)0x0);
  pLVar4 = (this->fields)._this;
  if ((pLVar4 == (LevelRewardAnimation *)0x0) ||
     (pIVar7 = (pLVar4->fields).goldImage, pIVar7 == (Image *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)pIVar7,0,(MethodInfo *)0x0);
  pLVar4 = (this->fields)._this;
  if (((pLVar4 == (LevelRewardAnimation *)0x0) ||
      (pTVar12 = (pLVar4->fields).header, pTVar12 == (Text *)0x0)) ||
     (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)pTVar12,(MethodInfo *)0x0), pGVar13 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar13,0,(MethodInfo *)0x0);
  (this->fields)._currentTime___0 = 0.0;
  (this->fields)._scale___0 = 0.0;
code_?:
  pLVar4 = (this->fields)._this;
  if (pLVar4 != (LevelRewardAnimation *)0x0) {
    fVar8 = (this->fields)._currentTime___0;
    if (_UNK_? <= fVar8 / (pLVar4->fields).prevLevelDisplayTime) {
      if ((pLVar4 != (LevelRewardAnimation *)0x0) &&
         (pAVar14 = (pLVar4->fields).prevBadgeBounceEffect, pAVar14 != (AnimationCurve *)0x0)) {
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (pAVar14,1.0,(MethodInfo *)0x0);
        pLVar4 = (this->fields)._this;
        (this->fields)._scale___0 = fVar8;
        if ((pLVar4 != (LevelRewardAnimation *)0x0) &&
           (pRVar5 = (pLVar4->fields).prevLevelBadge, pRVar5 != (RawImage *)0x0)) {
          uVar1 = (uint)pRVar5 >> 0x18;
          uVar2 = 0x10;
          unaff_EDI = (ScaleAnimationBase *)
                      UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pRVar5,(MethodInfo *)0x0);
          if ((this->fields)._this != (LevelRewardAnimation *)0x0) {
            value_02.x = 0.0;
            value_02.y = 0.0;
            uVar1 = (uint)&stack0xfffffff4 >> 0x18;
            uVar2 = 0x10;
            func_?();
            if (unaff_EDI != (ScaleAnimationBase *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                        ((RectTransform *)unaff_EDI,value_02,(MethodInfo *)0x0);
              (this->fields)._currentTime___0 = 0.0;
code_?:
              pLVar4 = (this->fields)._this;
              if (pLVar4 != (LevelRewardAnimation *)0x0) {
                fVar8 = (this->fields)._currentTime___0;
                if (_UNK_? <= fVar8 / (pLVar4->fields).rotateUIYAxisTime) {
                  if ((pLVar4 != (LevelRewardAnimation *)0x0) &&
                     (pRVar5 = (pLVar4->fields).prevLevelBadge, pRVar5 != (RawImage *)0x0)) {
                    method_00 = (MethodInfo *)&UNK_?;
                    unaff_EDI = (ScaleAnimationBase *)
                                UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_transform((Component_1 *)pRVar5,(MethodInfo *)0x0);
                    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                      uVar1 = (uint)TypeInfo__UnityEngine__Quaternion >> 0x18;
                      uVar2 = 0x10;
                      func_?();
                    }
                    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                                        ((Quaternion *)&stack0xffffffd8,0.0,90.0,0.0,
                                         (MethodInfo *)0x0);
                    if (unaff_EDI != (ScaleAnimationBase *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                ((Transform *)unaff_EDI,*pQVar6,(MethodInfo *)0x0);
                      unaff_EBX = (this->fields)._this;
                      if (unaff_EBX != (LevelRewardAnimation *)0x0) {
                        if (cRam_? == '\0') {
                          func_?();
                          cRam_? = '\x01';
                        }
                        unaff_EDI = (ScaleAnimationBase *)func_?();
                        ScaleAnimationBase::ScaleAnimationBase_Play(unaff_EDI,0.0,method_00);
                        if ((unaff_EDI != (ScaleAnimationBase *)0x0) &&
                           ((unaff_EDI->fields).target = (Transform *)unaff_EBX,
                           unaff_EBX != (LevelRewardAnimation *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                          MonoBehaviour_StartCoroutine_Auto
                                    ((MonoBehaviour *)unaff_EBX,(IEnumerator *)unaff_EDI,
                                     (MethodInfo *)0x0);
                          pOVar15 = (Object *)func_?((char)TypeInfo__System__Int32);
                          (this->fields)._current = pOVar15;
                          if ((this->fields)._disposing != 0) {
                            return 1;
                          }
                          (this->fields)._PC = 3;
                          return 1;
                        }
                      }
                    }
                  }
                }
                else {
                  fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  fVar16 = fVar16 + fVar8;
                  pLVar4 = (this->fields)._this;
                  (this->fields)._currentTime___0 = fVar16;
                  if ((pLVar4 != (LevelRewardAnimation *)0x0) &&
                     (pAVar14 = (pLVar4->fields).rotateUIYAxisOut, pAVar14 != (AnimationCurve *)0x0))
                  {
                    uVar2 = 0;
                    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                             AnimationCurve_Evaluate
                                       (pAVar14,fVar16 / (pLVar4->fields).rotateUIYAxisTime,
                                        (MethodInfo *)0x0);
                    pLVar4 = (this->fields)._this;
                    (this->fields)._rotation___1 = fVar8 * _UNK_?;
                    if ((pLVar4 != (LevelRewardAnimation *)0x0) &&
                       (pRVar5 = (pLVar4->fields).prevLevelBadge, pRVar5 != (RawImage *)0x0)) {
                      uVar2 = CONCAT31(0x19e88b,(char)uVar2);
                      uVar1 = 0x10;
                      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_transform((Component_1 *)pRVar5,(MethodInfo *)0x0);
                      fVar8 = (this->fields)._rotation___1;
                      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                        func_?();
                      }
                      pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                Quaternion_Euler((Quaternion *)&stack0xffffffd8,0.0,fVar8,0.0,
                                                 (MethodInfo *)0x0);
                      unaff_EDI = (ScaleAnimationBase *)0x0;
                      if (this_01 != (Transform *)0x0) {
                        value_00.w._1_2_ = (short)((uint)pQVar6->w >> 8);
                        value_00._0_13_ = *(undefined1 (*) [13])pQVar6;
                        value_00.w._3_1_ = (char)((uint)pQVar6->w >> 0x18);
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                                  (this_01,value_00,(MethodInfo *)0x0);
                        pOVar15 = (Object *)func_?((char)TypeInfo__System__Int32);
                        (this->fields)._current = pOVar15;
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
    else {
      fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar16 = fVar16 + fVar8;
      pLVar4 = (this->fields)._this;
      (this->fields)._currentTime___0 = fVar16;
      if ((pLVar4 != (LevelRewardAnimation *)0x0) &&
         (pAVar14 = (pLVar4->fields).prevBadgeBounceEffect, pAVar14 != (AnimationCurve *)0x0)) {
        uVar2 = 0;
        fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                           (pAVar14,fVar16 / (pLVar4->fields).prevLevelDisplayTime,(MethodInfo *)0x0)
        ;
        pLVar4 = (this->fields)._this;
        (this->fields)._scale___0 = fVar8;
        if ((pLVar4 != (LevelRewardAnimation *)0x0) &&
           (pRVar5 = (pLVar4->fields).prevLevelBadge, pRVar5 != (RawImage *)0x0)) {
          uVar2 = CONCAT31(0x19e68c,(char)uVar2);
          uVar1 = 0x10;
          pRVar17 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pRVar5,(MethodInfo *)0x0);
          pLVar4 = (this->fields)._this;
          if ((pLVar4 != (LevelRewardAnimation *)0x0) && (pRVar17 != (RectTransform *)0x0)) {
            uVar2 = CONCAT31(0x19e6bf,(char)uVar2);
            uVar1 = 0x10;
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_SetSizeWithCurrentAnchors
                      (pRVar17,RectTransform_Axis__Enum_Horizontal,
                       (float)(pLVar4->fields).targetSize * (this->fields)._scale___0,
                       (MethodInfo *)0x0);
            pLVar4 = (this->fields)._this;
            if ((pLVar4 != (LevelRewardAnimation *)0x0) &&
               (pRVar5 = (pLVar4->fields).prevLevelBadge, pRVar5 != (RawImage *)0x0)) {
              _puStack_18 = CONCAT44(pRVar5,&UNK_?);
              pRVar17 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                  ((Graphic *)pRVar5,(MethodInfo *)0x0);
              pLVar4 = (this->fields)._this;
              if ((pLVar4 != (LevelRewardAnimation *)0x0) && (pRVar17 != (RectTransform *)0x0)) {
                _puStack_18 = CONCAT44(pRVar17,&UNK_?);
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar17,RectTransform_Axis__Enum_Vertical,
                           (float)(pLVar4->fields).targetSize * (this->fields)._scale___0,
                           (MethodInfo *)0x0);
                pOVar15 = (Object *)func_?();
                (this->fields)._current = pOVar15;
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
    }
  }
code_?:
  bVar18 = 0;
  uVar19 = 0;
  func_?();
  if (extraout_ECX == 0) {
    pcVar20 = (code *)swi(0xb7);
    (*pcVar20)(uVar19,uVar2,uVar1);
    this_02 = (NotSupportedException *)func_?();
    mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
              (this_02,(MethodInfo *)0x0);
    func_?(this_02,0,
                    MethodInfo__LevelRewardAnimation___DisplayAndFadePrevBadge_c__Iterator0__Reset__
                   );
    pcVar20 = (code *)swi(3);
    bVar21 = (*pcVar20)();
    return bVar21;
  }
  bVar22 = (byte)((uint)unaff_EBX >> 8);
  uVar19 = in(0x19);
  out(0x19,uVar19);
  *(byte *)&unaff_EDI->klass =
       *(char *)&unaff_EDI->klass + bVar22 +
       (CARRY1((byte)unaff_EBX,extraout_DH) ||
       CARRY1((byte)unaff_EBX + extraout_DH,
              CARRY1(extraout_DL,bVar22) || CARRY1(extraout_DL + bVar22,bVar18)));
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

