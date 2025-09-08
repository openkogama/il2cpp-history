
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
  fVar2 = 0.0;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if ((this_02 == (Object__Class *)0x0) ||
       (pCVar3 = *(Component **)&(this_02->_0).this_arg.attrs, pCVar3 == (Component *)0x0))
    goto code_?;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar3,(MethodInfo *)0x0);
    euler_00.y = (float)_UNK_?;
    euler_00.x = fVar2;
    euler_00.z = 0.0;
    pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&stack0xffffffd0,euler_00,(MethodInfo *)0x0);
    if (pTVar4 == (Transform *)0x0) goto code_?;
    fVar2 = pQVar5->z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar4,*pQVar5,(MethodInfo *)0x0);
    pBVar6 = *(Behaviour **)&(this_02->_0).this_arg.attrs;
    if (pBVar6 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar6,1,(MethodInfo *)0x0);
    pBVar6 = (Behaviour *)(this_02->_0).byval_arg.data.typeHandle;
    if (pBVar6 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar6,0,(MethodInfo *)0x0);
    pIVar7 = (this_02->_0).castClass;
    if (pIVar7 == (Il2CppClass *)0x0) goto code_?;
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       ((AnimationCurve *)pIVar7,0.0,(MethodInfo *)0x0);
    pGVar9 = *(Graphic **)&(this_02->_0).this_arg.attrs;
    if (pGVar9 == (Graphic *)0x0) goto code_?;
    unaff_BL = 0x35;
    pRVar10 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        (pGVar9,(MethodInfo *)0x0);
    if (pRVar10 == (RectTransform *)0x0) goto code_?;
    this = (LevelRewardAnimation_DisplayAndFadeNextBadge_d_29 *)0x0;
    unaff_BL = 0x5d;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors
              (pRVar10,RectTransform_Axis__Enum_Horizontal,
               (float)(int)this_02->interfaceOffsets * fVar8,(MethodInfo *)0x0);
    pGVar9 = *(Graphic **)&(this_02->_0).this_arg.attrs;
    if ((pGVar9 == (Graphic *)0x0) ||
       (pRVar10 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            (pGVar9,(MethodInfo *)0x0), pRVar10 == (RectTransform *)0x0))
    goto code_?;
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
  in_AF = 0;
  if (_UNK_? <= (pLVar1->fields)._currentTime_5__2 / (float)(this_02->_0).fields) {
    pBVar6 = (Behaviour *)(this_02->_0).implementedInterfaces;
    if (pBVar6 != (Behaviour *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                (pBVar6,1,(MethodInfo *)0x0);
      pEVar11 = (this_02->_0).events;
      if ((pEVar11 != (EventInfo *)0x0) &&
         (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pEVar11,(MethodInfo *)0x0), pGVar12 != (GameObject *)0x0
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar12,1,(MethodInfo *)0x0);
        pEVar11 = (this_02->_0).events;
        fVar2 = 0.0;
        TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
        if (pEVar11 != (EventInfo *)0x0) {
          (**(code **)(pEVar11->name + 0x318))();
          pCVar3 = *(Component **)&(this_02->_0).this_arg.attrs;
          if (pCVar3 != (Component *)0x0) {
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (pCVar3,(MethodInfo *)0x0);
            euler.y = fVar2;
            euler.x = fVar2;
            euler.z = 0.0;
            pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffffd0,euler,(MethodInfo *)0x0);
            if (pTVar4 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar4,*pQVar5,(MethodInfo *)0x0);
              (pLVar1->fields)._currentTime_5__2 = 0.0;
code_?:
              in_AF = 0;
              if (_UNK_? <=
                  (pLVar1->fields)._currentTime_5__2 / (float)(this_02->_0).element_class) {
                pIVar7 = (this_02->_0).castClass;
                if (pIVar7 != (Il2CppClass *)0x0) {
                  fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                           AnimationCurve_Evaluate((AnimationCurve *)pIVar7,1.0,(MethodInfo *)0x0);
                  pGVar9 = *(Graphic **)&(this_02->_0).this_arg.attrs;
                  if ((pGVar9 != (Graphic *)0x0) &&
                     (pRVar10 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                Graphic_get_rectTransform(pGVar9,(MethodInfo *)0x0),
                     pRVar10 != (RectTransform *)0x0)) {
                    fVar2 = 0.0;
                    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                    RectTransform_SetSizeWithCurrentAnchors
                              (pRVar10,RectTransform_Axis__Enum_Horizontal,
                               (float)(int)this_02->interfaceOffsets * fVar8,(MethodInfo *)0x0);
                    pGVar9 = *(Graphic **)&(this_02->_0).this_arg.attrs;
                    if ((pGVar9 != (Graphic *)0x0) &&
                       (pRVar10 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                  Graphic_get_rectTransform(pGVar9,(MethodInfo *)0x0),
                       pRVar10 != (RectTransform *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                      RectTransform_SetSizeWithCurrentAnchors
                                (pRVar10,RectTransform_Axis__Enum_Vertical,
                                 (float)(int)this_02->interfaceOffsets * fVar8,(MethodInfo *)0x0);
                      pEVar11 = (this_02->_0).events;
                      if ((pEVar11 != (EventInfo *)0x0) &&
                         (pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_gameObject((Component *)pEVar11,(MethodInfo *)0x0)
                         , pGVar12 != (GameObject *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar12,0,(MethodInfo *)0x0);
                        (pLVar1->fields)._currentTime_5__2 = 0.0;
code_?:
                        in_AF = 0;
                        if (_UNK_? <=
                            (pLVar1->fields)._currentTime_5__2 / (float)(this_02->_0).fields) {
                          pCVar3 = *(Component **)&(this_02->_0).this_arg.attrs;
                          if (pCVar3 != (Component *)0x0) {
                            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_transform(pCVar3,(MethodInfo *)0x0);
                            euler_01.y = (float)_UNK_?;
                            euler_01.x = fVar2;
                            euler_01.z = 0.0;
                            pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                      Quaternion_Internal_FromEulerRad
                                                ((Quaternion *)&stack0xffffffc0,euler_01,
                                                 (MethodInfo *)0x0);
                            if (pTVar4 != (Transform *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_rotation(pTVar4,*pQVar5,(MethodInfo *)0x0);
                              if (cRam_? == '\0') {
                                func_?();
                                cRam_? = '\x01';
                              }
                              method_00 = 
                              TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30;
                              pOVar13 = (Object *)func_?();
                              mscorlib.dll::System::ThrowHelper::
                              ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                        (pOVar13,ExceptionArgument__Enum_obj,(MethodInfo *)method_00
                                        );
                              pOVar13[1].klass = (Object__Class *)0x0;
                              pOVar13[2].klass = this_02;
                              func_?();
                              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                              MonoBehaviour_StartCoroutine_Auto
                                        ((MonoBehaviour *)this_02,(IEnumerator *)pOVar13,
                                         (MethodInfo *)0x0);
                              pOVar13 = (Object *)func_?();
                              (this->fields).__2__current = pOVar13;
                              func_?();
                              (this->fields).__1__state = 4;
                              return 1;
                            }
                          }
                        }
                        else {
                          fVar8 = (pLVar1->fields)._currentTime_5__2;
                          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::
                                   Time_1_get_deltaTime((MethodInfo *)0x0);
                          (pLVar1->fields)._currentTime_5__2 = fVar14 + fVar8;
                          pIVar7 = (this_02->_0).klass;
                          if (pIVar7 != (Il2CppClass *)0x0) {
                            fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                     AnimationCurve_Evaluate
                                               ((AnimationCurve *)pIVar7,
                                                (fVar14 + fVar8) / (float)(this_02->_0).fields,
                                                (MethodInfo *)0x0);
                            fVar8 = fVar8 * _UNK_?;
                            pCVar3 = *(Component **)&(this_02->_0).this_arg.attrs;
                            if (pCVar3 != (Component *)0x0) {
                              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform(pCVar3,(MethodInfo *)0x0);
                              euler_03.y = fVar8 * _UNK_?;
                              euler_03.x = fVar2;
                              euler_03.z = 0.0;
                              pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                        Quaternion_Internal_FromEulerRad
                                                  ((Quaternion *)&stack0xffffffc0,euler_03,
                                                   (MethodInfo *)0x0);
                              this_02 = (Object__Class *)0x0;
                              if (pTVar4 != (Transform *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_set_rotation(pTVar4,*pQVar5,(MethodInfo *)0x0);
                                pOVar13 = (Object *)func_?();
                                (pLVar1->fields).__2__current = pOVar13;
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
              else {
                fVar2 = (pLVar1->fields)._currentTime_5__2;
                fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                   ((MethodInfo *)0x0);
                (pLVar1->fields)._currentTime_5__2 = fVar8 + fVar2;
                pIVar7 = (this_02->_0).castClass;
                if (pIVar7 != (Il2CppClass *)0x0) {
                  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                           AnimationCurve_Evaluate
                                     ((AnimationCurve *)pIVar7,
                                      (fVar8 + fVar2) / (float)(this_02->_0).element_class,
                                      (MethodInfo *)0x0);
                  pGVar9 = *(Graphic **)&(this_02->_0).this_arg.attrs;
                  if ((pGVar9 != (Graphic *)0x0) &&
                     (pRVar10 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                Graphic_get_rectTransform(pGVar9,(MethodInfo *)0x0),
                     pRVar10 != (RectTransform *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                    RectTransform_SetSizeWithCurrentAnchors
                              (pRVar10,RectTransform_Axis__Enum_Horizontal,
                               (float)(int)this_02->interfaceOffsets * fVar2,(MethodInfo *)0x0);
                    pGVar9 = *(Graphic **)&(this_02->_0).this_arg.attrs;
                    if ((pGVar9 != (Graphic *)0x0) &&
                       (pRVar10 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                  Graphic_get_rectTransform(pGVar9,(MethodInfo *)0x0),
                       pRVar10 != (RectTransform *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                      RectTransform_SetSizeWithCurrentAnchors
                                (pRVar10,RectTransform_Axis__Enum_Vertical,
                                 (float)(int)this_02->interfaceOffsets * fVar2,(MethodInfo *)0x0);
                      this_01 = (AnimationCurve *)(this_02->_0).nestedTypes;
                      if (this_01 != (AnimationCurve *)0x0) {
                        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                 AnimationCurve_Evaluate
                                           (this_01,(pLVar1->fields)._currentTime_5__2 /
                                                    (float)(this_02->_0).element_class,
                                            (MethodInfo *)0x0);
                        pCVar3 = (Component *)(this_02->_0).implementedInterfaces;
                        if ((pCVar3 != (Component *)0x0) &&
                           (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_transform(pCVar3,(MethodInfo *)0x0),
                           pTVar4 != (Transform *)0x0)) {
                          value.y = fVar2;
                          value.x = fVar2;
                          value.z = 1.0;
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_localScale(pTVar4,value,(MethodInfo *)0x0);
                          pOVar13 = (Object *)func_?();
                          (pLVar1->fields).__2__current = pOVar13;
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
  else {
    fVar8 = (pLVar1->fields)._currentTime_5__2;
    fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (pLVar1->fields)._currentTime_5__2 = fVar14 + fVar8;
    this_00 = (this_02->_0).interopData;
    if (this_00 != (Il2CppInteropData *)0x0) {
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         ((AnimationCurve *)this_00,(fVar14 + fVar8) / (float)(this_02->_0).fields,
                          (MethodInfo *)0x0);
      pCVar3 = *(Component **)&(this_02->_0).this_arg.attrs;
      fVar8 = fVar8 * _UNK_? - _UNK_?;
      if (pCVar3 != (Component *)0x0) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar3,(MethodInfo *)0x0);
        euler_02.y = fVar8 * _UNK_?;
        euler_02.x = fVar2;
        euler_02.z = 0.0;
        pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                  Quaternion_Internal_FromEulerRad
                            ((Quaternion *)&stack0xffffffc0,euler_02,(MethodInfo *)0x0);
        this_02 = (Object__Class *)0x0;
        if (pTVar4 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (pTVar4,*pQVar5,(MethodInfo *)0x0);
          pOVar13 = (Object *)func_?();
          (pLVar1->fields).__2__current = pOVar13;
          func_?();
          (pLVar1->fields).__1__state = 1;
          return 1;
        }
      }
    }
  }
code_?:
  uVar15 = func_?();
  in_AF = 9 < ((byte)uVar15 & 0xf) | in_AF;
  uVar16 = (uint)(CONCAT11((char)((ushort)uVar15 >> 8) - in_AF,(byte)uVar15 + in_AF * -6) & 0xff0f);
  ppIVar17 = &this_02[-0x5bda79]._0.klass;
  bVar18 = *(byte *)ppIVar17;
  bVar19 = (byte)(uVar16 + 1 >> 8);
  bVar20 = *(char *)ppIVar17 + bVar19;
  *(byte *)ppIVar17 = bVar20 + in_AF;
  bVar21 = (byte)(uVar16 + 2 >> 8);
  *extraout_ECX =
       *extraout_ECX + (char)((uint)(extraout_EDX + 1) >> 8) +
       (CARRY1(unaff_BL,bVar21) ||
       CARRY1(unaff_BL + bVar21,CARRY1(bVar18,bVar19) || CARRY1(bVar20,in_AF)));
  pcVar22 = (code *)swi(3);
  bVar23 = (*pcVar22)();
  return bVar23;
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

