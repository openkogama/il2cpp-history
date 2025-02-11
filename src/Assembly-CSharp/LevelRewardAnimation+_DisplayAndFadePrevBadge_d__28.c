
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadePrevBadge>d__28::
     LevelRewardAnimation_DisplayAndFadePrevBadge_d_28_MoveNext
               (LevelRewardAnimation_DisplayAndFadePrevBadge_d_28 *this,MethodInfo *method)

{
  pLVar1 = this;
  puVar2 = (undefined4 *)&stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Object__Class *)(this->fields).__4__this;
  fVar3 = 0.0;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if ((this_00 == (Object__Class *)0x0) ||
       (pGVar4 = (Graphic *)(this_00->_0).byval_arg.data.typeHandle, pGVar4 == (Graphic *)0x0))
    goto code_?;
    pRVar5 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        (pGVar4,(MethodInfo *)0x0);
    if (pRVar5 == (RectTransform *)0x0) goto code_?;
    value.y = (float)(int)this_00->interfaceOffsets;
    value.x = (float)(int)this_00->interfaceOffsets;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (pRVar5,value,(MethodInfo *)0x0);
    pCVar6 = (Component *)(this_00->_0).byval_arg.data.typeHandle;
    if (pCVar6 == (Component *)0x0) goto code_?;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar6,(MethodInfo *)0x0);
    euler_01.y = (float)pCVar6;
    euler_01.x = (float)pCVar6;
    euler_01.z = 0.0;
    pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&stack0xffffffc8,euler_01,(MethodInfo *)0x0);
    if (pTVar7 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar7,*pQVar8,(MethodInfo *)0x0);
    pBVar9 = (Behaviour *)(this_00->_0).byval_arg.data.typeHandle;
    if (pBVar9 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar9,1,(MethodInfo *)0x0);
    pCVar6 = (Component *)(this_00->_0).implementedInterfaces;
    if ((pCVar6 == (Component *)0x0) ||
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0))
    goto code_?;
    value_01.z = 1.0;
    value_01.x = 1.0;
    value_01.y = 1.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar7,value_01,(MethodInfo *)0x0);
    pBVar9 = (Behaviour *)(this_00->_0).implementedInterfaces;
    if (pBVar9 == (Behaviour *)0x0) goto code_?;
    this = (LevelRewardAnimation_DisplayAndFadePrevBadge_d_28 *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar9,0,(MethodInfo *)0x0);
    this_01 = (this_00->_0).properties;
    if ((this_01 == (PropertyInfo *)0x0) ||
       (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_01,(MethodInfo *)0x0), pGVar10 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar10,0,(MethodInfo *)0x0);
    pCVar6 = (Component *)(this_00->_0).methods;
    if ((pCVar6 == (Component *)0x0) ||
       (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (pCVar6,(MethodInfo *)0x0), pGVar10 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar10,0,(MethodInfo *)0x0);
    pIVar11 = (this_00->_0).declaringType;
    if (pIVar11 == (Il2CppClass *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar11,0,(MethodInfo *)0x0);
    this_02 = (this_00->_0).events;
    if ((this_02 == (EventInfo *)0x0) ||
       (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_02,(MethodInfo *)0x0), pGVar10 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar10,0,(MethodInfo *)0x0);
    (pLVar1->fields)._currentTime_5__2 = 0.0;
    break;
  case 1:
    (this->fields).__1__state = -1;
    if (this_00 == (Object__Class *)0x0) goto code_?;
    break;
  case 2:
    (this->fields).__1__state = -1;
    if (this_00 == (Object__Class *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  if (_UNK_? <=
      (pLVar1->fields)._currentTime_5__2 / *(float *)&(this_00->_0).byval_arg.attrs) {
    pAVar12 = (AnimationCurve *)(this_00->_0).this_arg.data.typeHandle;
    if (pAVar12 != (AnimationCurve *)0x0) {
      fVar13 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar12,1.0,(MethodInfo *)0x0);
      pGVar4 = (Graphic *)(this_00->_0).byval_arg.data.typeHandle;
      if (pGVar4 != (Graphic *)0x0) {
        pRVar5 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            (pGVar4,(MethodInfo *)0x0);
        if (pRVar5 != (RectTransform *)0x0) {
          fVar3 = 0.0;
          value_00.y = (float)(int)this_00->interfaceOffsets * fVar13;
          value_00.x = (float)(int)this_00->interfaceOffsets * fVar13;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar5,value_00,(MethodInfo *)0x0);
          (pLVar1->fields)._currentTime_5__2 = 0.0;
code_?:
          if (_UNK_? <= (pLVar1->fields)._currentTime_5__2 / (float)(this_00->_0).fields) {
            pCVar6 = (Component *)(this_00->_0).byval_arg.data.typeHandle;
            if (pCVar6 != (Component *)0x0) {
              pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  (pCVar6,(MethodInfo *)0x0);
              euler.y = (float)_UNK_?;
              euler.x = fVar3;
              euler.z = 0.0;
              pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                        Quaternion_Internal_FromEulerRad
                                  ((Quaternion *)&stack0xffffffb0,euler,(MethodInfo *)0x0);
              if (pTVar7 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                          (pTVar7,*pQVar8,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                method_00 = TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29;
                pOVar14 = (Object *)func_?();
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          (pOVar14,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                pOVar14[1].klass = (Object__Class *)0x0;
                pOVar14[2].klass = this_00;
                func_?();
                UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                MonoBehaviour_StartCoroutine_Auto
                          ((MonoBehaviour *)this_00,(IEnumerator *)pOVar14,(MethodInfo *)0x0);
                pOVar14 = (Object *)func_?();
                (this->fields).__2__current = pOVar14;
                func_?();
                (this->fields).__1__state = 3;
                return 1;
              }
            }
          }
          else {
            fVar13 = (pLVar1->fields)._currentTime_5__2;
            fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            (pLVar1->fields)._currentTime_5__2 = fVar15 + fVar13;
            pIVar11 = (this_00->_0).klass;
            if (pIVar11 != (Il2CppClass *)0x0) {
              fVar13 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                       AnimationCurve_Evaluate
                                 ((AnimationCurve *)pIVar11,
                                  (fVar15 + fVar13) / (float)(this_00->_0).fields,(MethodInfo *)0x0)
              ;
              pCVar6 = (Component *)(this_00->_0).byval_arg.data.typeHandle;
              if (pCVar6 != (Component *)0x0) {
                pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform(pCVar6,(MethodInfo *)0x0);
                euler_00.y = fVar13 * _UNK_? * _UNK_?;
                euler_00.x = fVar3;
                euler_00.z = 0.0;
                pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffffb0,euler_00,(MethodInfo *)0x0);
                if (pTVar7 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (pTVar7,*pQVar8,(MethodInfo *)0x0);
                  pOVar14 = (Object *)func_?();
                  (pLVar1->fields).__2__current = pOVar14;
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
  else {
    fVar3 = (pLVar1->fields)._currentTime_5__2;
    fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (pLVar1->fields)._currentTime_5__2 = fVar13 + fVar3;
    pAVar12 = (AnimationCurve *)(this_00->_0).this_arg.data.typeHandle;
    if (pAVar12 != (AnimationCurve *)0x0) {
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar12,(fVar13 + fVar3) / *(float *)&(this_00->_0).byval_arg.attrs,
                          (MethodInfo *)0x0);
      pGVar4 = (Graphic *)(this_00->_0).byval_arg.data.typeHandle;
      if ((pGVar4 != (Graphic *)0x0) &&
         (pRVar5 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              (pGVar4,(MethodInfo *)0x0), pRVar5 != (RectTransform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
        RectTransform_SetSizeWithCurrentAnchors
                  (pRVar5,RectTransform_Axis__Enum_Horizontal,
                   (float)(int)this_00->interfaceOffsets * fVar3,(MethodInfo *)0x0);
        pGVar4 = (Graphic *)(this_00->_0).byval_arg.data.typeHandle;
        if ((pGVar4 != (Graphic *)0x0) &&
           (pRVar5 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar4,(MethodInfo *)0x0), pRVar5 != (RectTransform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
          RectTransform_SetSizeWithCurrentAnchors
                    (pRVar5,RectTransform_Axis__Enum_Vertical,
                     (float)(int)this_00->interfaceOffsets * fVar3,(MethodInfo *)0x0);
          pOVar14 = (Object *)func_?();
          (pLVar1->fields).__2__current = pOVar14;
          func_?();
          (pLVar1->fields).__1__state = 1;
          return 1;
        }
      }
    }
  }
code_?:
  bVar16 = 0;
  uVar17 = func_?();
  puVar18 = (undefined4 *)&stack0xffffff9c;
  cVar19 = '\x0f';
  do {
    puVar2 = puVar2 + -1;
    puVar18 = puVar18 + -1;
    *puVar18 = *puVar2;
    cVar19 = cVar19 + -1;
  } while ('\0' < cVar19);
  iVar20 = CONCAT31((int3)((uint)uVar17 >> 8),8);
  pbVar21 = (byte *)(iVar20 + 0xb);
  bVar22 = *pbVar21;
  bVar23 = *pbVar21;
  *pbVar21 = bVar23 + extraout_DL + bVar16;
  *(char *)(iVar20 + 0xe) =
       *(char *)(iVar20 + 0xe) + (char)((uint)(iVar20 + 2) >> 8) +
       (CARRY1(bVar22,extraout_DL) || CARRY1(bVar23 + extraout_DL,bVar16));
  pcVar24 = (code *)swi(3);
  bVar25 = (*pcVar24)();
  return bVar25;
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

