
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadePrevBadge>d__28::
     LevelRewardAnimation_DisplayAndFadePrevBadge_d_28_MoveNext
               (LevelRewardAnimation_DisplayAndFadePrevBadge_d_28 *this,MethodInfo *method)

{
  pLVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  this_00 = (Object__Class *)(this->fields).__4__this;
  fVar2 = 0.0;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if ((this_00 == (Object__Class *)0x0) ||
       (pGVar3 = (Graphic *)(this_00->_0).byval_arg.data.typeHandle, pGVar3 == (Graphic *)0x0))
    goto code_?;
    pRVar4 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                       (pGVar3,(MethodInfo *)0x0);
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    value_00.y = (float)(int)this_00->interfaceOffsets;
    value_00.x = (float)(int)this_00->interfaceOffsets;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (pRVar4,value_00,(MethodInfo *)0x0);
    pCVar5 = (Component *)(this_00->_0).byval_arg.data.typeHandle;
    if (pCVar5 == (Component *)0x0) goto code_?;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       (pCVar5,(MethodInfo *)0x0);
    euler_01.y = (float)pCVar5;
    euler_01.x = (float)pCVar5;
    euler_01.z = 0.0;
    pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffd0,euler_01,(MethodInfo *)0x0);
    if (pTVar6 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar6,*pQVar7,(MethodInfo *)0x0);
    pBVar8 = (Behaviour *)(this_00->_0).byval_arg.data.typeHandle;
    if (pBVar8 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar8,1,(MethodInfo *)0x0);
    pCVar5 = (Component *)(this_00->_0).implementedInterfaces;
    if ((pCVar5 == (Component *)0x0) ||
       (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           (pCVar5,(MethodInfo *)0x0), pTVar6 == (Transform *)0x0))
    goto code_?;
    this = (LevelRewardAnimation_DisplayAndFadePrevBadge_d_28 *)0x3f800000;
    value.z = 1.0;
    value.x = 1.0;
    value.y = 1.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar6,value,(MethodInfo *)0x0);
    pBVar8 = (Behaviour *)(this_00->_0).implementedInterfaces;
    if (pBVar8 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar8,0,(MethodInfo *)0x0);
    this_01 = (this_00->_0).properties;
    if ((this_01 == (PropertyInfo *)0x0) ||
       (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_01,(MethodInfo *)0x0), pGVar9 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar9,0,(MethodInfo *)0x0);
    pCVar5 = (Component *)(this_00->_0).methods;
    if ((pCVar5 == (Component *)0x0) ||
       (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (pCVar5,(MethodInfo *)0x0), pGVar9 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar9,0,(MethodInfo *)0x0);
    pIVar10 = (this_00->_0).declaringType;
    if (pIVar10 == (Il2CppClass *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar10,0,(MethodInfo *)0x0);
    this_02 = (this_00->_0).events;
    if ((this_02 == (EventInfo *)0x0) ||
       (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this_02,(MethodInfo *)0x0), pGVar9 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar9,0,(MethodInfo *)0x0);
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
  if (_UNK_? <= (pLVar1->fields)._currentTime_5__2 / *(float *)&(this_00->_0).byval_arg.attrs
     ) {
    pAVar11 = (AnimationCurve *)(this_00->_0).this_arg.data.typeHandle;
    if (pAVar11 != (AnimationCurve *)0x0) {
      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar11,1.0,(MethodInfo *)0x0);
      pGVar3 = (Graphic *)(this_00->_0).byval_arg.data.typeHandle;
      if (pGVar3 != (Graphic *)0x0) {
        pRVar4 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                           (pGVar3,(MethodInfo *)0x0);
        if (pRVar4 != (RectTransform *)0x0) {
          fVar2 = 0.0;
          value_01.y = (float)(int)this_00->interfaceOffsets * fVar12;
          value_01.x = (float)(int)this_00->interfaceOffsets * fVar12;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar4,value_01,(MethodInfo *)0x0);
          (pLVar1->fields)._currentTime_5__2 = 0.0;
code_?:
          if (_UNK_? <= (pLVar1->fields)._currentTime_5__2 / (float)(this_00->_0).fields) {
            pCVar5 = (Component *)(this_00->_0).byval_arg.data.typeHandle;
            if (pCVar5 != (Component *)0x0) {
              pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 (pCVar5,(MethodInfo *)0x0);
              euler.y = (float)_UNK_?;
              euler.x = fVar2;
              euler.z = 0.0;
              pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                       Quaternion_Internal_FromEulerRad
                                 ((Quaternion *)&stack0xffffffc0,euler,(MethodInfo *)0x0);
              if (pTVar6 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                          (pTVar6,*pQVar7,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                method_00 = TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29;
                pOVar13 = (Object *)func_?();
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          (pOVar13,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                pOVar13[1].klass = (Object__Class *)0x0;
                pOVar13[2].klass = this_00;
                func_?();
                UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                MonoBehaviour_StartCoroutine_Auto
                          ((MonoBehaviour *)this_00,(IEnumerator *)pOVar13,(MethodInfo *)0x0);
                pOVar13 = (Object *)func_?();
                (this->fields).__2__current = pOVar13;
                func_?();
                (this->fields).__1__state = 3;
                return 1;
              }
            }
          }
          else {
            fVar12 = (pLVar1->fields)._currentTime_5__2;
            fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            fVar14 = fVar14 + fVar12;
            (pLVar1->fields)._currentTime_5__2 = fVar14;
            pIVar10 = (this_00->_0).klass;
            if (pIVar10 != (Il2CppClass *)0x0) {
              fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                       AnimationCurve_Evaluate
                                 ((AnimationCurve *)pIVar10,fVar14 / (float)(this_00->_0).fields,
                                  (MethodInfo *)0x0);
              pCVar5 = (Component *)(this_00->_0).byval_arg.data.typeHandle;
              if (pCVar5 != (Component *)0x0) {
                pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   (pCVar5,(MethodInfo *)0x0);
                euler_00.y = fVar12 * _UNK_? * _UNK_?;
                euler_00.x = fVar2;
                euler_00.z = 0.0;
                pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                         Quaternion_Internal_FromEulerRad
                                   ((Quaternion *)&stack0xffffffc0,euler_00,(MethodInfo *)0x0);
                if (pTVar6 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (pTVar6,*pQVar7,(MethodInfo *)0x0);
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
  else {
    fVar2 = (pLVar1->fields)._currentTime_5__2;
    fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar12 = fVar12 + fVar2;
    (pLVar1->fields)._currentTime_5__2 = fVar12;
    pAVar11 = (AnimationCurve *)(this_00->_0).this_arg.data.typeHandle;
    if (pAVar11 != (AnimationCurve *)0x0) {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar11,fVar12 / *(float *)&(this_00->_0).byval_arg.attrs,(MethodInfo *)0x0
                         );
      pGVar3 = (Graphic *)(this_00->_0).byval_arg.data.typeHandle;
      if ((pGVar3 != (Graphic *)0x0) &&
         (pRVar4 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                             (pGVar3,(MethodInfo *)0x0), pRVar4 != (RectTransform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
        RectTransform_SetSizeWithCurrentAnchors
                  (pRVar4,RectTransform_Axis__Enum_Horizontal,
                   (float)(int)this_00->interfaceOffsets * fVar2,(MethodInfo *)0x0);
        pGVar3 = (Graphic *)(this_00->_0).byval_arg.data.typeHandle;
        if ((pGVar3 != (Graphic *)0x0) &&
           (pRVar4 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                               (pGVar3,(MethodInfo *)0x0), pRVar4 != (RectTransform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
          RectTransform_SetSizeWithCurrentAnchors
                    (pRVar4,RectTransform_Axis__Enum_Vertical,
                     (float)(int)this_00->interfaceOffsets * fVar2,(MethodInfo *)0x0);
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
  func_?();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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

