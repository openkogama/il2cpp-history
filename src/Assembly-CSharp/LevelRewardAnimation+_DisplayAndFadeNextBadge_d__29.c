
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
  this_00 = (Object__Class *)(this->fields).__4__this;
  fVar1 = 0.0;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if ((this_00 == (Object__Class *)0x0) ||
       (pCVar2 = (Component *)(this_00->_0).this_arg.data.typeHandle, pCVar2 == (Component *)0x0))
    goto code_?;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar2,(MethodInfo *)0x0);
    euler_00.y = (float)_UNK_?;
    euler_00.x = fVar1;
    euler_00.z = 0.0;
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&stack0xffffffd0,euler_00,(MethodInfo *)0x0);
    if (pTVar3 == (Transform *)0x0) goto code_?;
    fVar1 = pQVar4->z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar3,*pQVar4,(MethodInfo *)0x0);
    pBVar5 = (Behaviour *)(this_00->_0).this_arg.data.typeHandle;
    if (pBVar5 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar5,1,(MethodInfo *)0x0);
    pBVar5 = (Behaviour *)(this_00->_0).namespaze;
    if (pBVar5 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar5,0,(MethodInfo *)0x0);
    pIVar6 = (this_00->_0).element_class;
    if (pIVar6 == (Il2CppClass *)0x0) goto code_?;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                       ((AnimationCurve *)pIVar6,0.0,(MethodInfo *)0x0);
    pGVar8 = (Graphic *)(this_00->_0).this_arg.data.typeHandle;
    if ((pGVar8 == (Graphic *)0x0) ||
       (pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            (pGVar8,(MethodInfo *)0x0), pRVar9 == (RectTransform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors
              (pRVar9,RectTransform_Axis__Enum_Horizontal,
               (float)(int)(this_00->_0).implementedInterfaces * fVar7,(MethodInfo *)0x0);
    pGVar8 = (Graphic *)(this_00->_0).this_arg.data.typeHandle;
    if ((pGVar8 == (Graphic *)0x0) ||
       (pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            (pGVar8,(MethodInfo *)0x0), pRVar9 == (RectTransform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors
              (pRVar9,RectTransform_Axis__Enum_Vertical,
               (float)(int)(this_00->_0).implementedInterfaces * fVar7,(MethodInfo *)0x0);
    (this->fields)._currentTime_5__2 = 0.0;
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
  if (_UNK_? <= (this->fields)._currentTime_5__2 / (float)(this_00->_0).klass) {
    pBVar5 = (Behaviour *)(this_00->_0).nestedTypes;
    if (pBVar5 != (Behaviour *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                (pBVar5,1,(MethodInfo *)0x0);
      pFVar10 = (this_00->_0).fields;
      if ((pFVar10 != (FieldInfo *)0x0) &&
         (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pFVar10,(MethodInfo *)0x0), pGVar11 != (GameObject *)0x0
         )) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar11,1,(MethodInfo *)0x0);
        pFVar10 = (this_00->_0).fields;
        fVar1 = 0.0;
        TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
        if (pFVar10 != (FieldInfo *)0x0) {
          (**(code **)(pFVar10->name + 0x314))();
          pCVar2 = (Component *)(this_00->_0).this_arg.data.typeHandle;
          if (pCVar2 != (Component *)0x0) {
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (pCVar2,(MethodInfo *)0x0);
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
code_?:
              if (_UNK_? <=
                  (this->fields)._currentTime_5__2 / *(float *)&(this_00->_0).this_arg.attrs) {
                pIVar6 = (this_00->_0).element_class;
                if (pIVar6 != (Il2CppClass *)0x0) {
                  fVar7 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                           AnimationCurve_Evaluate((AnimationCurve *)pIVar6,1.0,(MethodInfo *)0x0);
                  pGVar8 = (Graphic *)(this_00->_0).this_arg.data.typeHandle;
                  if ((pGVar8 != (Graphic *)0x0) &&
                     (pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                Graphic_get_rectTransform(pGVar8,(MethodInfo *)0x0),
                     pRVar9 != (RectTransform *)0x0)) {
                    fVar1 = 0.0;
                    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                    RectTransform_SetSizeWithCurrentAnchors
                              (pRVar9,RectTransform_Axis__Enum_Horizontal,
                               (float)(int)(this_00->_0).implementedInterfaces * fVar7,
                               (MethodInfo *)0x0);
                    pGVar8 = (Graphic *)(this_00->_0).this_arg.data.typeHandle;
                    if ((pGVar8 != (Graphic *)0x0) &&
                       (pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                  Graphic_get_rectTransform(pGVar8,(MethodInfo *)0x0),
                       pRVar9 != (RectTransform *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                      RectTransform_SetSizeWithCurrentAnchors
                                (pRVar9,RectTransform_Axis__Enum_Vertical,
                                 (float)(int)(this_00->_0).implementedInterfaces * fVar7,
                                 (MethodInfo *)0x0);
                      pFVar10 = (this_00->_0).fields;
                      if ((pFVar10 != (FieldInfo *)0x0) &&
                         (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_gameObject((Component *)pFVar10,(MethodInfo *)0x0)
                         , pGVar11 != (GameObject *)0x0)) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                  (pGVar11,0,(MethodInfo *)0x0);
                        (this->fields)._currentTime_5__2 = 0.0;
code_?:
                        if (_UNK_? <=
                            (this->fields)._currentTime_5__2 / (float)(this_00->_0).klass) {
                          pCVar2 = (Component *)(this_00->_0).this_arg.data.typeHandle;
                          if (pCVar2 != (Component *)0x0) {
                            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_transform(pCVar2,(MethodInfo *)0x0);
                            euler_01.y = (float)_UNK_?;
                            euler_01.x = fVar1;
                            euler_01.z = 0.0;
                            pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                      Quaternion_Internal_FromEulerRad
                                                ((Quaternion *)&stack0xffffffc0,euler_01,
                                                 (MethodInfo *)0x0);
                            if (pTVar3 != (Transform *)0x0) {
                              method_00 = (MethodInfo *)&UNK_?;
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_rotation(pTVar3,*pQVar4,(MethodInfo *)0x0);
                              if (cRam_? == '\0') {
                                func_?();
                                cRam_? = '\x01';
                              }
                              pOVar12 = (Object *)func_?();
                              if (pOVar12 != (Object *)0x0) {
                                mscorlib.dll::System::ThrowHelper::
                                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                          (pOVar12,ExceptionArgument__Enum_obj,method_00);
                                pOVar12[1].klass = (Object__Class *)0x0;
                                pOVar12[2].klass = this_00;
                                func_?(pOVar12 + 2,this_00);
                                UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                                MonoBehaviour_StartCoroutine_Auto
                                          ((MonoBehaviour *)this_00,(IEnumerator *)pOVar12,
                                           (MethodInfo *)0x0);
                                pOVar12 = (Object *)
                                          func_?(TypeInfo__System__Int32,&stack0xffffffe8);
                                (this->fields).__2__current = pOVar12;
                                func_?(&(this->fields).__2__current,pOVar12);
                                (this->fields).__1__state = 4;
                                return 1;
                              }
                            }
                          }
                        }
                        else {
                          fVar7 = (this->fields)._currentTime_5__2;
                          fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::
                                   Time_1_get_deltaTime((MethodInfo *)0x0);
                          (this->fields)._currentTime_5__2 = fVar13 + fVar7;
                          this_01 = (this_00->_0).interopData;
                          if (this_01 != (Il2CppInteropData *)0x0) {
                            fVar7 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                     AnimationCurve_Evaluate
                                               ((AnimationCurve *)this_01,
                                                (fVar13 + fVar7) / (float)(this_00->_0).klass,
                                                (MethodInfo *)0x0);
                            pCVar2 = (Component *)(this_00->_0).this_arg.data.typeHandle;
                            if (pCVar2 != (Component *)0x0) {
                              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform(pCVar2,(MethodInfo *)0x0);
                              euler_03.y = fVar7 * _UNK_? * _UNK_?;
                              euler_03.x = fVar1;
                              euler_03.z = 0.0;
                              pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                        Quaternion_Internal_FromEulerRad
                                                  ((Quaternion *)&stack0xffffffc0,euler_03,
                                                   (MethodInfo *)0x0);
                              if (pTVar3 != (Transform *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_set_rotation(pTVar3,*pQVar4,(MethodInfo *)0x0);
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
                    }
                  }
                }
              }
              else {
                fVar1 = (this->fields)._currentTime_5__2;
                fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                   ((MethodInfo *)0x0);
                (this->fields)._currentTime_5__2 = fVar7 + fVar1;
                pIVar6 = (this_00->_0).element_class;
                if (pIVar6 != (Il2CppClass *)0x0) {
                  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                           AnimationCurve_Evaluate
                                     ((AnimationCurve *)pIVar6,
                                      (fVar7 + fVar1) / *(float *)&(this_00->_0).this_arg.attrs,
                                      (MethodInfo *)0x0);
                  pGVar8 = (Graphic *)(this_00->_0).this_arg.data.typeHandle;
                  if ((pGVar8 != (Graphic *)0x0) &&
                     (pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                Graphic_get_rectTransform(pGVar8,(MethodInfo *)0x0),
                     pRVar9 != (RectTransform *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                    RectTransform_SetSizeWithCurrentAnchors
                              (pRVar9,RectTransform_Axis__Enum_Horizontal,
                               (float)(int)(this_00->_0).implementedInterfaces * fVar1,
                               (MethodInfo *)0x0);
                    pGVar8 = (Graphic *)(this_00->_0).this_arg.data.typeHandle;
                    if ((pGVar8 != (Graphic *)0x0) &&
                       (pRVar9 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                                  Graphic_get_rectTransform(pGVar8,(MethodInfo *)0x0),
                       pRVar9 != (RectTransform *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                      RectTransform_SetSizeWithCurrentAnchors
                                (pRVar9,RectTransform_Axis__Enum_Vertical,
                                 (float)(int)(this_00->_0).implementedInterfaces * fVar1,
                                 (MethodInfo *)0x0);
                      pAVar14 = (AnimationCurve *)(this_00->_0).methods;
                      if (pAVar14 != (AnimationCurve *)0x0) {
                        fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                                 AnimationCurve_Evaluate
                                           (pAVar14,(this->fields)._currentTime_5__2 /
                                                   *(float *)&(this_00->_0).this_arg.attrs,
                                            (MethodInfo *)0x0);
                        pCVar2 = (Component *)(this_00->_0).nestedTypes;
                        if ((pCVar2 != (Component *)0x0) &&
                           (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_transform(pCVar2,(MethodInfo *)0x0),
                           pTVar3 != (Transform *)0x0)) {
                          value.y = fVar1;
                          value.x = fVar1;
                          value.z = 1.0;
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_localScale(pTVar3,value,(MethodInfo *)0x0);
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
          }
        }
      }
    }
  }
  else {
    fVar7 = (this->fields)._currentTime_5__2;
    fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._currentTime_5__2 = fVar13 + fVar7;
    pAVar14 = (AnimationCurve *)(this_00->_0).typeMetadataHandle;
    if (pAVar14 != (AnimationCurve *)0x0) {
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar14,(fVar13 + fVar7) / (float)(this_00->_0).klass,(MethodInfo *)0x0);
      pCVar2 = (Component *)(this_00->_0).this_arg.data.typeHandle;
      if (pCVar2 != (Component *)0x0) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar2,(MethodInfo *)0x0);
        euler_02.y = (fVar7 * _UNK_? - _UNK_?) * _UNK_?;
        euler_02.x = fVar1;
        euler_02.z = 0.0;
        pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                  Quaternion_Internal_FromEulerRad
                            ((Quaternion *)&stack0xffffffc0,euler_02,(MethodInfo *)0x0);
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
code_?:
  bVar15 = func_?();
  pbVar16 = (byte *)((int)&this[-0x49fdba].monitor + 3);
  bVar17 = *pbVar16;
  *pbVar16 = *pbVar16 + bVar15;
  *extraout_ECX = *extraout_ECX + (char)&stack0xfffffffc + CARRY1(bVar17,bVar15);
  pcVar18 = (code *)swi(3);
  bVar19 = (*pcVar18)();
  return bVar19;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeNextBadge>d__29::
     LevelRewardAnimation_DisplayAndFadeNextBadge_d_29_System_Collections_IEnumerator_Reset
               (LevelRewardAnimation_DisplayAndFadeNextBadge_d_29 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
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

