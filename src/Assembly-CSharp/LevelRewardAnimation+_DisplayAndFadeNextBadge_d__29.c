
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeNextBadge>d__29::
     LevelRewardAnimation_DisplayAndFadeNextBadge_d_29_MoveNext
               (LevelRewardAnimation_DisplayAndFadeNextBadge_d_29 *this,MethodInfo *method)

{
  pLVar1 = this;
  cVar2 = (char)((uint)in_stack_3 >> 8);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_LEVEL_UP_);
    cRam_? = '\x01';
  }
  this_00 = (Object__Class *)(this->fields).__4__this;
  pGVar4 = (Graphic__Class *)0x0;
  pGVar5 = unaff_ESI;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if ((this_00 == (Object__Class *)0x0) ||
       (pCVar6 = *(Component **)&(this_00->_0).this_arg.attrs, pCVar6 == (Component *)0x0))
    goto code_?;
    unaff_ESI = (Graphic *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (pCVar6,(MethodInfo *)0x0);
    pGVar5 = (Graphic *)0x0;
    unaff_DI = 0;
    euler_00.y = (float)_UNK_?;
    euler_00.x = (float)pGVar4;
    euler_00.z = 0.0;
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&stack0xffffffd0,euler_00,(MethodInfo *)0x0);
    if (unaff_ESI == (Graphic *)0x0) goto code_?;
    cVar2 = (char)((uint)pQVar7->x >> 8);
    pGVar4 = (Graphic__Class *)pQVar7->z;
    unaff_DI = 0xe;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              ((Transform *)unaff_ESI,*pQVar7,(MethodInfo *)0x0);
    pBVar8 = *(Behaviour **)&(this_00->_0).this_arg.attrs;
    pGVar5 = unaff_ESI;
    if (pBVar8 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar8,1,(MethodInfo *)0x0);
    pBVar8 = (Behaviour *)(this_00->_0).byval_arg.data.typeHandle;
    pGVar5 = unaff_ESI;
    if (pBVar8 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar8,0,(MethodInfo *)0x0);
    pIVar9 = (this_00->_0).castClass;
    pGVar5 = unaff_ESI;
    if (pIVar9 == (Il2CppClass *)0x0) goto code_?;
    fVar10 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       ((AnimationCurve *)pIVar9,0.0,(MethodInfo *)0x0);
    pGVar11 = *(Graphic **)&(this_00->_0).this_arg.attrs;
    pGVar5 = unaff_ESI;
    if ((pGVar11 == (Graphic *)0x0) ||
       (pRVar12 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            (pGVar11,(MethodInfo *)0x0), pGVar5 = unaff_ESI,
       pRVar12 == (RectTransform *)0x0)) goto code_?;
    this = (LevelRewardAnimation_DisplayAndFadeNextBadge_d_29 *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors
              (pRVar12,RectTransform_Axis__Enum_Horizontal,
               (float)(int)this_00->interfaceOffsets * fVar10,(MethodInfo *)0x0);
    pGVar11 = *(Graphic **)&(this_00->_0).this_arg.attrs;
    pGVar5 = unaff_ESI;
    if ((pGVar11 == (Graphic *)0x0) ||
       (pRVar12 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            (pGVar11,(MethodInfo *)0x0), pGVar5 = unaff_ESI,
       pRVar12 == (RectTransform *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors
              (pRVar12,RectTransform_Axis__Enum_Vertical,
               (float)(int)this_00->interfaceOffsets * fVar10,(MethodInfo *)0x0);
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
    if (this_00 == (Object__Class *)0x0) goto code_?;
    goto code_?;
  case 4:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  in_AF = 0;
  if (_UNK_? <= (pLVar1->fields)._currentTime_5__2 / (float)(this_00->_0).fields) {
    pBVar8 = (Behaviour *)(this_00->_0).implementedInterfaces;
    pGVar5 = unaff_ESI;
    if (pBVar8 != (Behaviour *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                (pBVar8,1,(MethodInfo *)0x0);
      pGVar11 = (Graphic *)(this_00->_0).events;
      pGVar5 = unaff_ESI;
      if (pGVar11 != (Graphic *)0x0) {
        cVar2 = '\0';
        unaff_DI = 0x37;
        pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pGVar11,(MethodInfo *)0x0);
        pGVar5 = pGVar11;
        if (pGVar13 != (GameObject *)0x0) {
          unaff_ESI = (Graphic *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar13,1,(MethodInfo *)0x0);
          pEVar14 = (this_00->_0).events;
          pGVar4 = (Graphic__Class *)0x0;
          cVar2 = '[';
          TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
          pGVar5 = unaff_ESI;
          if (pEVar14 != (EventInfo *)0x0) {
            (**(code **)(pEVar14->name + 0x318))();
            pCVar6 = *(Component **)&(this_00->_0).this_arg.attrs;
            pGVar5 = unaff_ESI;
            if (pCVar6 != (Component *)0x0) {
              pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  (pCVar6,(MethodInfo *)0x0);
              euler.y = (float)pGVar4;
              euler.x = (float)pGVar4;
              euler.z = 0.0;
              pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                        Quaternion_Internal_FromEulerRad
                                  ((Quaternion *)&stack0xffffffd0,euler,(MethodInfo *)0x0);
              pGVar5 = unaff_ESI;
              if (pTVar15 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                          (pTVar15,*pQVar7,(MethodInfo *)0x0);
                (pLVar1->fields)._currentTime_5__2 = 0.0;
code_?:
                in_AF = 0;
                if (_UNK_? <=
                    (pLVar1->fields)._currentTime_5__2 / (float)(this_00->_0).element_class) {
                  pIVar9 = (this_00->_0).castClass;
                  pGVar5 = unaff_ESI;
                  if (pIVar9 != (Il2CppClass *)0x0) {
                    fVar10 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                             AnimationCurve_Evaluate((AnimationCurve *)pIVar9,1.0,(MethodInfo *)0x0)
                    ;
                    pGVar11 = *(Graphic **)&(this_00->_0).this_arg.attrs;
                    pGVar5 = unaff_ESI;
                    if (pGVar11 != (Graphic *)0x0) {
                      cVar2 = '\0';
                      unaff_DI = 0xcc;
                      unaff_ESI = (Graphic *)
                                  UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                  Graphic_get_rectTransform(pGVar11,(MethodInfo *)0x0);
                      pGVar5 = pGVar11;
                      if (unaff_ESI != (Graphic *)0x0) {
                        pGVar4 = (Graphic__Class *)0x0;
                        cVar2 = '\0';
                        unaff_DI = 0xf4;
                        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_SetSizeWithCurrentAnchors
                                  ((RectTransform *)unaff_ESI,RectTransform_Axis__Enum_Horizontal,
                                   (float)(int)this_00->interfaceOffsets * fVar10,(MethodInfo *)0x0)
                        ;
                        pGVar11 = *(Graphic **)&(this_00->_0).this_arg.attrs;
                        pGVar5 = unaff_ESI;
                        if ((pGVar11 != (Graphic *)0x0) &&
                           (pRVar12 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                      Graphic_get_rectTransform(pGVar11,(MethodInfo *)0x0),
                           pGVar5 = unaff_ESI, pRVar12 != (RectTransform *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                          RectTransform_SetSizeWithCurrentAnchors
                                    (pRVar12,RectTransform_Axis__Enum_Vertical,
                                     (float)(int)this_00->interfaceOffsets * fVar10,
                                     (MethodInfo *)0x0);
                          pEVar14 = (this_00->_0).events;
                          pGVar5 = unaff_ESI;
                          if ((pEVar14 != (EventInfo *)0x0) &&
                             (pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_gameObject
                                                  ((Component *)pEVar14,(MethodInfo *)0x0),
                             pGVar5 = unaff_ESI, pGVar13 != (GameObject *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar13,0,(MethodInfo *)0x0);
                            (pLVar1->fields)._currentTime_5__2 = 0.0;
code_?:
                            in_AF = 0;
                            if (_UNK_? <=
                                (pLVar1->fields)._currentTime_5__2 / (float)(this_00->_0).fields) {
                              pCVar6 = *(Component **)&(this_00->_0).this_arg.attrs;
                              pGVar5 = unaff_ESI;
                              if (pCVar6 != (Component *)0x0) {
                                pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_transform(pCVar6,(MethodInfo *)0x0);
                                pGVar5 = (Graphic *)0x0;
                                unaff_DI = 0;
                                euler_01.y = (float)_UNK_?;
                                euler_01.x = (float)pGVar4;
                                euler_01.z = 0.0;
                                pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                          Quaternion_Internal_FromEulerRad
                                                    ((Quaternion *)&stack0xffffffc0,euler_01,
                                                     (MethodInfo *)0x0);
                                if (pTVar15 != (Transform *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_set_rotation(pTVar15,*pQVar7,(MethodInfo *)0x0);
                                  if (cRam_? == '\0') {
                                    func_?();
                                    cRam_? = '\x01';
                                  }
                                  method_00 = 
                                  TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30;
                                  pOVar16 = (Object *)func_?();
                                  mscorlib.dll::System::ThrowHelper::
                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                                            (pOVar16,ExceptionArgument__Enum_obj,
                                             (MethodInfo *)method_00);
                                  pOVar16[1].klass = (Object__Class *)0x0;
                                  pOVar16[2].klass = this_00;
                                  func_?();
                                  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                                  MonoBehaviour_StartCoroutine_Auto
                                            ((MonoBehaviour *)this_00,(IEnumerator *)pOVar16,
                                             (MethodInfo *)0x0);
                                  pOVar16 = (Object *)func_?();
                                  (this->fields).__2__current = pOVar16;
                                  func_?();
                                  (this->fields).__1__state = 4;
                                  return 1;
                                }
                              }
                            }
                            else {
                              fVar10 = (pLVar1->fields)._currentTime_5__2;
                              fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Time::
                                       Time_1_get_deltaTime((MethodInfo *)0x0);
                              (pLVar1->fields)._currentTime_5__2 = fVar17 + fVar10;
                              pIVar9 = (this_00->_0).klass;
                              pGVar5 = unaff_ESI;
                              if (pIVar9 != (Il2CppClass *)0x0) {
                                unaff_DI = 0;
                                fVar10 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                         AnimationCurve_Evaluate
                                                   ((AnimationCurve *)pIVar9,
                                                    (fVar17 + fVar10) / (float)(this_00->_0).fields,
                                                    (MethodInfo *)0x0);
                                pCVar6 = *(Component **)&(this_00->_0).this_arg.attrs;
                                pGVar5 = unaff_ESI;
                                if (pCVar6 != (Component *)0x0) {
                                  pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_transform(pCVar6,(MethodInfo *)0x0);
                                  pGVar5 = (Graphic *)&stack0xffffffc0;
                                  unaff_DI = 0;
                                  euler_03.y = fVar10 * _UNK_? * _UNK_?;
                                  euler_03.x = (float)pGVar4;
                                  euler_03.z = 0.0;
                                  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                            Quaternion_Internal_FromEulerRad
                                                      ((Quaternion *)pGVar5,euler_03,
                                                       (MethodInfo *)0x0);
                                  cVar2 = (char)((uint)pGVar4 >> 8);
                                  if (pTVar15 != (Transform *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_set_rotation(pTVar15,*pQVar7,(MethodInfo *)0x0);
                                    pOVar16 = (Object *)func_?();
                                    (pLVar1->fields).__2__current = pOVar16;
                                    func_?();
                                    (pLVar1->fields).__1__state = 3;
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
                  fVar10 = (pLVar1->fields)._currentTime_5__2;
                  fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  (pLVar1->fields)._currentTime_5__2 = fVar17 + fVar10;
                  pIVar9 = (this_00->_0).castClass;
                  pGVar5 = unaff_ESI;
                  if (pIVar9 != (Il2CppClass *)0x0) {
                    unaff_DI = 0;
                    fVar10 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                             AnimationCurve_Evaluate
                                       ((AnimationCurve *)pIVar9,
                                        (fVar17 + fVar10) / (float)(this_00->_0).element_class,
                                        (MethodInfo *)0x0);
                    pGVar11 = *(Graphic **)&(this_00->_0).this_arg.attrs;
                    pGVar5 = unaff_ESI;
                    if (pGVar11 != (Graphic *)0x0) {
                      pGVar5 = (Graphic *)&UNK_?;
                      pRVar12 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                Graphic_get_rectTransform(pGVar11,(MethodInfo *)0x0);
                      cVar2 = (char)((uint)pGVar11 >> 8);
                      if (pRVar12 != (RectTransform *)0x0) {
                        pGVar5 = (Graphic *)&UNK_?;
                        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_SetSizeWithCurrentAnchors
                                  (pRVar12,RectTransform_Axis__Enum_Horizontal,
                                   (float)(int)this_00->interfaceOffsets * fVar10,(MethodInfo *)0x0)
                        ;
                        cVar2 = (char)((uint)pRVar12 >> 8);
                        pGVar11 = *(Graphic **)&(this_00->_0).this_arg.attrs;
                        if ((pGVar11 != (Graphic *)0x0) &&
                           (pRVar12 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                      Graphic_get_rectTransform(pGVar11,(MethodInfo *)0x0),
                           pRVar12 != (RectTransform *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                          RectTransform_SetSizeWithCurrentAnchors
                                    (pRVar12,RectTransform_Axis__Enum_Vertical,
                                     (float)(int)this_00->interfaceOffsets * fVar10,
                                     (MethodInfo *)0x0);
                          this_02 = (AnimationCurve *)(this_00->_0).nestedTypes;
                          if (this_02 != (AnimationCurve *)0x0) {
                            fVar10 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                     AnimationCurve_Evaluate
                                               (this_02,(pLVar1->fields)._currentTime_5__2 /
                                                        (float)(this_00->_0).element_class,
                                                (MethodInfo *)0x0);
                            pCVar6 = (Component *)(this_00->_0).implementedInterfaces;
                            if ((pCVar6 != (Component *)0x0) &&
                               (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_transform(pCVar6,(MethodInfo *)0x0),
                               pTVar15 != (Transform *)0x0)) {
                              value.y = fVar10;
                              value.x = fVar10;
                              value.z = 1.0;
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_localScale(pTVar15,value,(MethodInfo *)0x0);
                              pOVar16 = (Object *)func_?();
                              (pLVar1->fields).__2__current = pOVar16;
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
    fVar10 = (pLVar1->fields)._currentTime_5__2;
    fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (pLVar1->fields)._currentTime_5__2 = fVar17 + fVar10;
    this_01 = (this_00->_0).interopData;
    pGVar5 = unaff_ESI;
    if (this_01 != (Il2CppInteropData *)0x0) {
      unaff_DI = 0;
      fVar10 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         ((AnimationCurve *)this_01,(fVar17 + fVar10) / (float)(this_00->_0).fields,
                          (MethodInfo *)0x0);
      pCVar6 = *(Component **)&(this_00->_0).this_arg.attrs;
      pGVar5 = unaff_ESI;
      if (pCVar6 != (Component *)0x0) {
        pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar6,(MethodInfo *)0x0);
        pGVar5 = (Graphic *)&stack0xffffffc0;
        unaff_DI = 0xb6;
        euler_02.y = (fVar10 * _UNK_? - _UNK_?) * _UNK_?;
        euler_02.x = (float)pGVar4;
        euler_02.z = 0.0;
        pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                  Quaternion_Internal_FromEulerRad((Quaternion *)pGVar5,euler_02,(MethodInfo *)0x0)
        ;
        cVar2 = (char)((uint)pGVar4 >> 8);
        if (pTVar15 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (pTVar15,*pQVar7,(MethodInfo *)0x0);
          pOVar16 = (Object *)func_?();
          (pLVar1->fields).__2__current = pOVar16;
          func_?();
          (pLVar1->fields).__1__state = 1;
          return 1;
        }
      }
    }
  }
code_?:
  func_?();
  in_AF = 9 < (unaff_DI & 0xf) | in_AF;
  bVar18 = unaff_DI + in_AF * -6 & 0xf;
  in_AF = 9 < bVar18 | in_AF;
  bVar18 = bVar18 + in_AF * -6 & 0xf;
  in_AF = 9 < bVar18 | in_AF;
  pcVar19 = (char *)((int)&(pGVar5->fields).m_ColorTweenRunner + 2);
  *pcVar19 = *pcVar19 + (char)((uint)pGVar5 >> 8) + in_AF;
  pbVar20 = &(pGVar5->fields)._useLegacyMeshGeneration_k__BackingField;
  *pbVar20 = *pbVar20 + cVar2 + (9 < (bVar18 + in_AF * -6 & 0xf) | in_AF);
  pcVar21 = (code *)swi(3);
  bVar22 = (*pcVar21)();
  return bVar22;
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

