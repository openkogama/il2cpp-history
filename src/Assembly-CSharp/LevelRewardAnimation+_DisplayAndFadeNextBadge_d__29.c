
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeNextBadge>d__29::
     LevelRewardAnimation_DisplayAndFadeNextBadge_d_29_MoveNext
               (LevelRewardAnimation_DisplayAndFadeNextBadge_d_29 *this,MethodInfo *method)

{
  pLVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_LEVEL_UP_);
    cRam_? = '\x01';
  }
  this_02 = (Object__Class *)(this->fields).__4__this;
  pGVar2 = (Graphic__Class *)0x0;
  pGVar3 = unaff_ESI;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if ((this_02 == (Object__Class *)0x0) ||
       (pCVar4 = *(Component **)&(this_02->_0).this_arg.attrs, pCVar4 == (Component *)0x0))
    goto code_?;
    unaff_ESI = (Graphic *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (pCVar4,(MethodInfo *)0x0);
    pGVar3 = (Graphic *)0x0;
    unaff_EDI = (undefined *)0x0;
    euler_00.y = (float)_UNK_?;
    euler_00.x = (float)pGVar2;
    euler_00.z = 0.0;
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&stack0xffffffd0,euler_00,(MethodInfo *)0x0);
    if (unaff_ESI == (Graphic *)0x0) goto code_?;
    pGVar2 = (Graphic__Class *)pQVar5->z;
    unaff_EDI = &UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              ((Transform *)unaff_ESI,*pQVar5,(MethodInfo *)0x0);
    pBVar6 = *(Behaviour **)&(this_02->_0).this_arg.attrs;
    pGVar3 = unaff_ESI;
    if (pBVar6 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar6,1,(MethodInfo *)0x0);
    pBVar6 = (Behaviour *)(this_02->_0).byval_arg.data.typeHandle;
    pGVar3 = unaff_ESI;
    if (pBVar6 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar6,0,(MethodInfo *)0x0);
    pIVar7 = (this_02->_0).castClass;
    pGVar3 = unaff_ESI;
    if (pIVar7 == (Il2CppClass *)0x0) goto code_?;
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       ((AnimationCurve *)pIVar7,0.0,(MethodInfo *)0x0);
    pGVar9 = *(Graphic **)&(this_02->_0).this_arg.attrs;
    pGVar3 = unaff_ESI;
    if ((pGVar9 == (Graphic *)0x0) ||
       (pRVar10 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            (pGVar9,(MethodInfo *)0x0), pGVar3 = unaff_ESI,
       pRVar10 == (RectTransform *)0x0)) goto code_?;
    this = (LevelRewardAnimation_DisplayAndFadeNextBadge_d_29 *)0x0;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors
              (pRVar10,RectTransform_Axis__Enum_Horizontal,
               (float)(int)this_02->interfaceOffsets * fVar8,(MethodInfo *)0x0);
    pGVar9 = *(Graphic **)&(this_02->_0).this_arg.attrs;
    pGVar3 = unaff_ESI;
    if ((pGVar9 == (Graphic *)0x0) ||
       (pRVar10 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            (pGVar9,(MethodInfo *)0x0), pGVar3 = unaff_ESI,
       pRVar10 == (RectTransform *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors
              (pRVar10,RectTransform_Axis__Enum_Vertical,
               (float)(int)this_02->interfaceOffsets * fVar8,(MethodInfo *)0x0);
    (pLVar1->fields)._currentTime_5__2 = 0.0;
    break;
  case 1:
    (this->fields).__1__state = -1;
    if (this_02 == (Object__Class *)0x0) goto code_?;
    break;
  case 2:
    (this->fields).__1__state = -1;
    if (this_02 == (Object__Class *)0x0) goto code_?;
    goto code_?;
  case 3:
    (this->fields).__1__state = -1;
    if (this_02 == (Object__Class *)0x0) goto code_?;
    goto code_?;
  case 4:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  if (_UNK_? <= (pLVar1->fields)._currentTime_5__2 / (float)(this_02->_0).fields) {
    pBVar6 = (Behaviour *)(this_02->_0).implementedInterfaces;
    pGVar3 = unaff_ESI;
    if (pBVar6 != (Behaviour *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                (pBVar6,1,(MethodInfo *)0x0);
      pGVar9 = (Graphic *)(this_02->_0).events;
      pGVar3 = unaff_ESI;
      if (pGVar9 != (Graphic *)0x0) {
        unaff_EDI = &UNK_?;
        pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pGVar9,(MethodInfo *)0x0);
        pGVar3 = pGVar9;
        if (pGVar11 != (GameObject *)0x0) {
          unaff_ESI = (Graphic *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar11,1,(MethodInfo *)0x0);
          pEVar12 = (this_02->_0).events;
          pGVar2 = (Graphic__Class *)0x0;
          TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
          pGVar3 = unaff_ESI;
          if (pEVar12 != (EventInfo *)0x0) {
            (**(code **)(pEVar12->name + 0x318))();
            pCVar4 = *(Component **)&(this_02->_0).this_arg.attrs;
            pGVar3 = unaff_ESI;
            if (pCVar4 != (Component *)0x0) {
              pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  (pCVar4,(MethodInfo *)0x0);
              euler.y = (float)pGVar2;
              euler.x = (float)pGVar2;
              euler.z = 0.0;
              pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                        Quaternion_Internal_FromEulerRad
                                  ((Quaternion *)&stack0xffffffd0,euler,(MethodInfo *)0x0);
              pGVar3 = unaff_ESI;
              if (pTVar13 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                          (pTVar13,*pQVar5,(MethodInfo *)0x0);
                (pLVar1->fields)._currentTime_5__2 = 0.0;
code_?:
                if (_UNK_? <=
                    (pLVar1->fields)._currentTime_5__2 / (float)(this_02->_0).element_class) {
                  pIVar7 = (this_02->_0).castClass;
                  pGVar3 = unaff_ESI;
                  if (pIVar7 != (Il2CppClass *)0x0) {
                    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                             AnimationCurve_Evaluate((AnimationCurve *)pIVar7,1.0,(MethodInfo *)0x0)
                    ;
                    pGVar9 = *(Graphic **)&(this_02->_0).this_arg.attrs;
                    pGVar3 = unaff_ESI;
                    if (pGVar9 != (Graphic *)0x0) {
                      unaff_EDI = &UNK_?;
                      unaff_ESI = (Graphic *)
                                  UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                  Graphic_get_rectTransform(pGVar9,(MethodInfo *)0x0);
                      pGVar3 = pGVar9;
                      if (unaff_ESI != (Graphic *)0x0) {
                        pGVar2 = (Graphic__Class *)0x0;
                        unaff_EDI = &UNK_?;
                        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_SetSizeWithCurrentAnchors
                                  ((RectTransform *)unaff_ESI,RectTransform_Axis__Enum_Horizontal,
                                   (float)(int)this_02->interfaceOffsets * fVar8,(MethodInfo *)0x0)
                        ;
                        pGVar9 = *(Graphic **)&(this_02->_0).this_arg.attrs;
                        pGVar3 = unaff_ESI;
                        if ((pGVar9 != (Graphic *)0x0) &&
                           (pRVar10 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                      Graphic_get_rectTransform(pGVar9,(MethodInfo *)0x0),
                           pGVar3 = unaff_ESI, pRVar10 != (RectTransform *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                          RectTransform_SetSizeWithCurrentAnchors
                                    (pRVar10,RectTransform_Axis__Enum_Vertical,
                                     (float)(int)this_02->interfaceOffsets * fVar8,
                                     (MethodInfo *)0x0);
                          pEVar12 = (this_02->_0).events;
                          pGVar3 = unaff_ESI;
                          if ((pEVar12 != (EventInfo *)0x0) &&
                             (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_gameObject
                                                  ((Component *)pEVar12,(MethodInfo *)0x0),
                             pGVar3 = unaff_ESI, pGVar11 != (GameObject *)0x0)) {
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar11,0,(MethodInfo *)0x0);
                            (pLVar1->fields)._currentTime_5__2 = 0.0;
code_?:
                            if (_UNK_? <=
                                (pLVar1->fields)._currentTime_5__2 / (float)(this_02->_0).fields) {
                              pCVar4 = *(Component **)&(this_02->_0).this_arg.attrs;
                              pGVar3 = unaff_ESI;
                              if (pCVar4 != (Component *)0x0) {
                                pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_transform(pCVar4,(MethodInfo *)0x0);
                                pGVar3 = (Graphic *)0x0;
                                unaff_EDI = (undefined *)0x0;
                                euler_01.y = (float)_UNK_?;
                                euler_01.x = (float)pGVar2;
                                euler_01.z = 0.0;
                                pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                          Quaternion_Internal_FromEulerRad
                                                    ((Quaternion *)&stack0xffffffc0,euler_01,
                                                     (MethodInfo *)0x0);
                                if (pTVar13 != (Transform *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_set_rotation(pTVar13,*pQVar5,(MethodInfo *)0x0);
                                  if (cRam_? == '\0') {
                                    func_?();
                                    cRam_? = '\x01';
                                  }
                                  method_00 = 
                                  TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30;
                                  pOVar14 = (Object *)func_?();
                                  mscorlib.dll::System::ThrowHelper::
                                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                            (pOVar14,ExceptionArgument__Enum_obj,
                                             (MethodInfo *)method_00);
                                  pOVar14[1].klass = (Object__Class *)0x0;
                                  pOVar14[2].klass = this_02;
                                  func_?();
                                  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                                  MonoBehaviour_StartCoroutine_Auto
                                            ((MonoBehaviour *)this_02,(IEnumerator *)pOVar14,
                                             (MethodInfo *)0x0);
                                  pOVar14 = (Object *)func_?();
                                  (this->fields).__2__current = pOVar14;
                                  func_?();
                                  (this->fields).__1__state = 4;
                                  return 1;
                                }
                              }
                            }
                            else {
                              fVar8 = (pLVar1->fields)._currentTime_5__2;
                              fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::
                                       Time_1_get_deltaTime((MethodInfo *)0x0);
                              (pLVar1->fields)._currentTime_5__2 = fVar15 + fVar8;
                              pIVar7 = (this_02->_0).klass;
                              pGVar3 = unaff_ESI;
                              if (pIVar7 != (Il2CppClass *)0x0) {
                                unaff_EDI = (undefined *)0x0;
                                fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                         AnimationCurve_Evaluate
                                                   ((AnimationCurve *)pIVar7,
                                                    (fVar15 + fVar8) / (float)(this_02->_0).fields,
                                                    (MethodInfo *)0x0);
                                fVar8 = fVar8 * _UNK_?;
                                pCVar4 = *(Component **)&(this_02->_0).this_arg.attrs;
                                pGVar3 = unaff_ESI;
                                if (pCVar4 != (Component *)0x0) {
                                  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_transform(pCVar4,(MethodInfo *)0x0);
                                  pGVar3 = (Graphic *)&stack0xffffffc0;
                                  unaff_EDI = &UNK_?;
                                  euler_03.y = fVar8 * _UNK_?;
                                  euler_03.x = (float)pGVar2;
                                  euler_03.z = 0.0;
                                  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                            Quaternion_Internal_FromEulerRad
                                                      ((Quaternion *)pGVar3,euler_03,
                                                       (MethodInfo *)0x0);
                                  this_02 = (Object__Class *)0x0;
                                  if (pTVar13 != (Transform *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_set_rotation(pTVar13,*pQVar5,(MethodInfo *)0x0);
                                    pOVar14 = (Object *)func_?();
                                    (pLVar1->fields).__2__current = pOVar14;
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
                  fVar8 = (pLVar1->fields)._currentTime_5__2;
                  fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                     ((MethodInfo *)0x0);
                  (pLVar1->fields)._currentTime_5__2 = fVar15 + fVar8;
                  pIVar7 = (this_02->_0).castClass;
                  pGVar3 = unaff_ESI;
                  if (pIVar7 != (Il2CppClass *)0x0) {
                    unaff_EDI = (undefined *)0x0;
                    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                             AnimationCurve_Evaluate
                                       ((AnimationCurve *)pIVar7,
                                        (fVar15 + fVar8) / (float)(this_02->_0).element_class,
                                        (MethodInfo *)0x0);
                    pGVar9 = *(Graphic **)&(this_02->_0).this_arg.attrs;
                    pGVar3 = unaff_ESI;
                    if (pGVar9 != (Graphic *)0x0) {
                      pGVar3 = (Graphic *)&UNK_?;
                      pRVar10 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                Graphic_get_rectTransform(pGVar9,(MethodInfo *)0x0);
                      if (pRVar10 != (RectTransform *)0x0) {
                        pGVar3 = (Graphic *)&UNK_?;
                        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_SetSizeWithCurrentAnchors
                                  (pRVar10,RectTransform_Axis__Enum_Horizontal,
                                   (float)(int)this_02->interfaceOffsets * fVar8,(MethodInfo *)0x0)
                        ;
                        pGVar9 = *(Graphic **)&(this_02->_0).this_arg.attrs;
                        if ((pGVar9 != (Graphic *)0x0) &&
                           (pRVar10 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                      Graphic_get_rectTransform(pGVar9,(MethodInfo *)0x0),
                           pRVar10 != (RectTransform *)0x0)) {
                          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                          RectTransform_SetSizeWithCurrentAnchors
                                    (pRVar10,RectTransform_Axis__Enum_Vertical,
                                     (float)(int)this_02->interfaceOffsets * fVar8,
                                     (MethodInfo *)0x0);
                          this_01 = (AnimationCurve *)(this_02->_0).nestedTypes;
                          if (this_01 != (AnimationCurve *)0x0) {
                            fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                     AnimationCurve_Evaluate
                                               (this_01,(pLVar1->fields)._currentTime_5__2 /
                                                        (float)(this_02->_0).element_class,
                                                (MethodInfo *)0x0);
                            pCVar4 = (Component *)(this_02->_0).implementedInterfaces;
                            if ((pCVar4 != (Component *)0x0) &&
                               (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                          Component_get_transform(pCVar4,(MethodInfo *)0x0),
                               pTVar13 != (Transform *)0x0)) {
                              value.y = fVar8;
                              value.x = fVar8;
                              value.z = 1.0;
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_localScale(pTVar13,value,(MethodInfo *)0x0);
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
            }
          }
        }
      }
    }
  }
  else {
    fVar8 = (pLVar1->fields)._currentTime_5__2;
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (pLVar1->fields)._currentTime_5__2 = fVar15 + fVar8;
    this_00 = (this_02->_0).interopData;
    pGVar3 = unaff_ESI;
    if (this_00 != (Il2CppInteropData *)0x0) {
      unaff_EDI = (undefined *)0x0;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         ((AnimationCurve *)this_00,(fVar15 + fVar8) / (float)(this_02->_0).fields,
                          (MethodInfo *)0x0);
      pCVar4 = *(Component **)&(this_02->_0).this_arg.attrs;
      fVar8 = fVar8 * _UNK_? - _UNK_?;
      pGVar3 = unaff_ESI;
      if (pCVar4 != (Component *)0x0) {
        pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar4,(MethodInfo *)0x0);
        pGVar3 = (Graphic *)&stack0xffffffc0;
        unaff_EDI = &UNK_?;
        euler_02.y = fVar8 * _UNK_?;
        euler_02.x = (float)pGVar2;
        euler_02.z = 0.0;
        pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                  Quaternion_Internal_FromEulerRad((Quaternion *)pGVar3,euler_02,(MethodInfo *)0x0)
        ;
        this_02 = (Object__Class *)0x0;
        if (pTVar13 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (pTVar13,*pQVar5,(MethodInfo *)0x0);
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
  func_?();
  bVar17 = (char)unaff_EDI + 1;
  puVar18 = (undefined1 *)((int)&this_02->interfaceOffsets + 2);
  bVar19 = *puVar18 + bVar17;
  bVar20 = CARRY1(*puVar18,bVar17) || CARRY1(bVar19,bVar16);
  *puVar18 = bVar19 + bVar16;
  pbVar21 = (byte *)(extraout_ECX + 0x5c);
  bVar16 = (byte)extraout_EDX;
  bVar22 = CARRY1(*pbVar21,bVar16) || CARRY1(*pbVar21 + bVar16,bVar20);
  *pbVar21 = *pbVar21 + bVar16 + bVar20;
  bVar17 = (char)unaff_EDI + 3;
  bVar19 = (byte)&stack0xfffffffc + bVar17;
  pcVar23 = (code *)swi(3);
  bVar24 = (*pcVar23)(pGVar3,&stack0xfffffff0,&stack0xffffffb8,
                     CONCAT31((int3)((uint)&stack0xfffffffc >> 8),bVar19 + bVar22),extraout_EDX,
                     (char)extraout_ECX + bVar16 +
                     (CARRY1((byte)&stack0xfffffffc,bVar17) || CARRY1(bVar19,bVar22)),unaff_EDI + 4);
  return bVar24;
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

