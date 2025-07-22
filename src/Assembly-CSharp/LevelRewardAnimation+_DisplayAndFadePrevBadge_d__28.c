
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadePrevBadge>d__28::
     LevelRewardAnimation_DisplayAndFadePrevBadge_d_28_MoveNext
               (LevelRewardAnimation_DisplayAndFadePrevBadge_d_28 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).__4__this;
  fVar1 = 0.0;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if ((this_00 == (LevelRewardAnimation *)0x0) ||
       (pRVar2 = (this_00->fields).prevLevelBadge, pRVar2 == (RawImage *)0x0))
    goto code_?;
    pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                       ((Graphic *)pRVar2,(MethodInfo *)0x0);
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    value.y = (float)(this_00->fields).targetSize;
    value.x = (float)(this_00->fields).targetSize;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (pRVar3,value,(MethodInfo *)0x0);
    pRVar2 = (this_00->fields).prevLevelBadge;
    if (pRVar2 == (RawImage *)0x0) goto code_?;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pRVar2,(MethodInfo *)0x0);
    euler_01.y = (float)pRVar2;
    euler_01.x = (float)pRVar2;
    euler_01.z = 0.0;
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&stack0xffffffc8,euler_01,(MethodInfo *)0x0);
    if (pTVar4 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar4,*pQVar5,(MethodInfo *)0x0);
    pRVar2 = (this_00->fields).prevLevelBadge;
    if (pRVar2 == (RawImage *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pRVar2,1,(MethodInfo *)0x0);
    pIVar6 = (this_00->fields).backgroundRays;
    if ((pIVar6 == (Image *)0x0) ||
       (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pIVar6,(MethodInfo *)0x0), pTVar4 == (Transform *)0x0))
    goto code_?;
    value_01.z = 1.0;
    value_01.x = 1.0;
    value_01.y = 1.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar4,value_01,(MethodInfo *)0x0);
    pIVar6 = (this_00->fields).backgroundRays;
    if (pIVar6 == (Image *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar6,0,(MethodInfo *)0x0);
    pTVar7 = (this_00->fields).goldText;
    if ((pTVar7 == (Text *)0x0) ||
       (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar7,(MethodInfo *)0x0), pGVar8 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,0,(MethodInfo *)0x0);
    this_01 = (this_00->fields).claimButton;
    if ((this_01 == (CanvasGroup *)0x0) ||
       (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0), pGVar8 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,0,(MethodInfo *)0x0);
    pIVar6 = (this_00->fields).goldImage;
    if (pIVar6 == (Image *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar6,0,(MethodInfo *)0x0);
    pTVar7 = (this_00->fields).header;
    if ((pTVar7 == (Text *)0x0) ||
       (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar7,(MethodInfo *)0x0), pGVar8 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,0,(MethodInfo *)0x0);
    (this->fields)._currentTime_5__2 = 0.0;
    break;
  case 1:
    (this->fields).__1__state = -1;
    if (this_00 == (LevelRewardAnimation *)0x0) goto code_?;
    break;
  case 2:
    (this->fields).__1__state = -1;
    if (this_00 == (LevelRewardAnimation *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  if (_UNK_? <= (this->fields)._currentTime_5__2 / (this_00->fields).prevLevelDisplayTime) {
    pAVar9 = (this_00->fields).prevBadgeBounceEffect;
    if (pAVar9 != (AnimationCurve *)0x0) {
      fVar10 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar9,1.0,(MethodInfo *)0x0);
      pRVar2 = (this_00->fields).prevLevelBadge;
      if (pRVar2 != (RawImage *)0x0) {
        pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           ((Graphic *)pRVar2,(MethodInfo *)0x0);
        if (pRVar3 != (RectTransform *)0x0) {
          fVar1 = 0.0;
          value_00.y = (float)(this_00->fields).targetSize * fVar10;
          value_00.x = (float)(this_00->fields).targetSize * fVar10;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar3,value_00,(MethodInfo *)0x0);
          (this->fields)._currentTime_5__2 = 0.0;
code_?:
          if (_UNK_? <=
              (this->fields)._currentTime_5__2 / (this_00->fields).rotateUIYAxisTime) {
            pRVar2 = (this_00->fields).prevLevelBadge;
            if (pRVar2 != (RawImage *)0x0) {
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pRVar2,(MethodInfo *)0x0);
              euler.y = (float)_UNK_?;
              euler.x = fVar1;
              euler.z = 0.0;
              pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                        Quaternion_Internal_FromEulerRad
                                  ((Quaternion *)&stack0xffffffb0,euler,(MethodInfo *)0x0);
              if (pTVar4 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                          (pTVar4,*pQVar5,(MethodInfo *)0x0);
                routine = LevelRewardAnimation::LevelRewardAnimation_DisplayAndFadeNextBadge
                                    (this_00,(MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                MonoBehaviour_StartCoroutine_Auto
                          ((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0);
                pOVar11 = (Object *)func_?();
                (this->fields).__2__current = pOVar11;
                func_?(&(this->fields).__2__current);
                (this->fields).__1__state = 3;
                return 1;
              }
            }
          }
          else {
            fVar10 = (this->fields)._currentTime_5__2;
            fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            (this->fields)._currentTime_5__2 = fVar12 + fVar10;
            pAVar9 = (this_00->fields).rotateUIYAxisOut;
            if (pAVar9 != (AnimationCurve *)0x0) {
              fVar10 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                       AnimationCurve_Evaluate
                                 (pAVar9,(fVar12 + fVar10) / (this_00->fields).rotateUIYAxisTime,
                                  (MethodInfo *)0x0);
              pRVar2 = (this_00->fields).prevLevelBadge;
              if (pRVar2 != (RawImage *)0x0) {
                pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pRVar2,(MethodInfo *)0x0);
                euler_00.y = fVar10 * _UNK_? * _UNK_?;
                euler_00.x = fVar1;
                euler_00.z = 0.0;
                pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffffb0,euler_00,(MethodInfo *)0x0);
                if (pTVar4 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (pTVar4,*pQVar5,(MethodInfo *)0x0);
                  pOVar11 = (Object *)func_?();
                  (this->fields).__2__current = pOVar11;
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
  }
  else {
    fVar1 = (this->fields)._currentTime_5__2;
    fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._currentTime_5__2 = fVar10 + fVar1;
    pAVar9 = (this_00->fields).prevBadgeBounceEffect;
    if (pAVar9 != (AnimationCurve *)0x0) {
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar9,(fVar10 + fVar1) / (this_00->fields).prevLevelDisplayTime,
                          (MethodInfo *)0x0);
      pRVar2 = (this_00->fields).prevLevelBadge;
      if ((pRVar2 != (RawImage *)0x0) &&
         (pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                             ((Graphic *)pRVar2,(MethodInfo *)0x0), pRVar3 != (RectTransform *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
        RectTransform_SetSizeWithCurrentAnchors
                  (pRVar3,RectTransform_Axis__Enum_Horizontal,
                   (float)(this_00->fields).targetSize * fVar1,(MethodInfo *)0x0);
        pRVar2 = (this_00->fields).prevLevelBadge;
        if ((pRVar2 != (RawImage *)0x0) &&
           (pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               ((Graphic *)pRVar2,(MethodInfo *)0x0),
           pRVar3 != (RectTransform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
          RectTransform_SetSizeWithCurrentAnchors
                    (pRVar3,RectTransform_Axis__Enum_Vertical,
                     (float)(this_00->fields).targetSize * fVar1,(MethodInfo *)0x0);
          pOVar11 = (Object *)func_?();
          (this->fields).__2__current = pOVar11;
          func_?();
          (this->fields).__1__state = 1;
          return 1;
        }
      }
    }
  }
code_?:
  uVar13 = func_?();
  bVar14 = (byte)uVar13;
  bVar15 = (byte)((uint)uVar13 >> 8);
  pcVar16 = (char *)(CONCAT31((int3)((uint)uVar13 >> 8),0x41) + 0x4e1041b2);
  *pcVar16 = *pcVar16 + 'A' +
            (CARRY1(bVar14,bVar15) || CARRY1(bVar14 + bVar15,bVar14 < *(byte *)&this->klass));
  pcVar17 = (code *)swi(3);
  bVar18 = (*pcVar17)();
  return bVar18;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadePrevBadge>d__28::
     LevelRewardAnimation_DisplayAndFadePrevBadge_d_28_System_Collections_IEnumerator_Reset
               (LevelRewardAnimation_DisplayAndFadePrevBadge_d_28 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__LevelRewardAnimation___DisplayAndFadePrevBadge_d__28__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

