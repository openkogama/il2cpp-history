
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadePrevBadge>d__28::
     LevelRewardAnimation_DisplayAndFadePrevBadge_d_28_MoveNext
               (LevelRewardAnimation_DisplayAndFadePrevBadge_d_28 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  this_00 = (Object__Class *)(this->fields).__4__this;
  fVar1 = 0.0;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if ((this_00 == (Object__Class *)0x0) ||
       (pGVar2 = (Graphic *)(this_00->_0).namespaze, pGVar2 == (Graphic *)0x0))
    goto code_?;
    pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        (pGVar2,(MethodInfo *)0x0);
    if (pRVar3 == (RectTransform *)0x0) goto code_?;
    value.y = (float)(int)(this_00->_0).implementedInterfaces;
    value.x = (float)(int)(this_00->_0).implementedInterfaces;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (pRVar3,value,(MethodInfo *)0x0);
    pCVar4 = (Component *)(this_00->_0).namespaze;
    if (pCVar4 == (Component *)0x0) goto code_?;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar4,(MethodInfo *)0x0);
    euler_01.y = (float)pCVar4;
    euler_01.x = (float)pCVar4;
    euler_01.z = 0.0;
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&stack0xffffffc8,euler_01,(MethodInfo *)0x0);
    if (pTVar5 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar5,*pQVar6,(MethodInfo *)0x0);
    pBVar7 = (Behaviour *)(this_00->_0).namespaze;
    if (pBVar7 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar7,1,(MethodInfo *)0x0);
    pCVar4 = (Component *)(this_00->_0).nestedTypes;
    if ((pCVar4 == (Component *)0x0) ||
       (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar4,(MethodInfo *)0x0), pTVar5 == (Transform *)0x0))
    goto code_?;
    value_01.z = 1.0;
    value_01.x = 1.0;
    value_01.y = 1.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar5,value_01,(MethodInfo *)0x0);
    pBVar7 = (Behaviour *)(this_00->_0).nestedTypes;
    if (pBVar7 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar7,0,(MethodInfo *)0x0);
    this_01 = (this_00->_0).events;
    if ((this_01 == (EventInfo *)0x0) ||
       (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_01,(MethodInfo *)0x0), pGVar8 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,0,(MethodInfo *)0x0);
    this_02 = (this_00->_0).properties;
    if ((this_02 == (PropertyInfo *)0x0) ||
       (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_02,(MethodInfo *)0x0), pGVar8 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,0,(MethodInfo *)0x0);
    this_03 = (this_00->_0).castClass;
    if (this_03 == (Il2CppClass *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_03,0,(MethodInfo *)0x0);
    this_04 = (this_00->_0).fields;
    if ((this_04 == (FieldInfo *)0x0) ||
       (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_04,(MethodInfo *)0x0), pGVar8 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar8,0,(MethodInfo *)0x0);
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
  default:
    return 0;
  }
  if (_UNK_? <= (this->fields)._currentTime_5__2 / (float)(this_00->_0).byval_arg.data) {
    pAVar9 = *(AnimationCurve **)&(this_00->_0).byval_arg.attrs;
    if (pAVar9 != (AnimationCurve *)0x0) {
      fVar10 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar9,1.0,(MethodInfo *)0x0);
      pGVar2 = (Graphic *)(this_00->_0).namespaze;
      if (pGVar2 != (Graphic *)0x0) {
        pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            (pGVar2,(MethodInfo *)0x0);
        if (pRVar3 != (RectTransform *)0x0) {
          fVar1 = 0.0;
          value_00.y = (float)(int)(this_00->_0).implementedInterfaces * fVar10;
          value_00.x = (float)(int)(this_00->_0).implementedInterfaces * fVar10;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar3,value_00,(MethodInfo *)0x0);
          (this->fields)._currentTime_5__2 = 0.0;
code_?:
          if (_UNK_? <= (this->fields)._currentTime_5__2 / (float)(this_00->_0).klass) {
            pCVar4 = (Component *)(this_00->_0).namespaze;
            if (pCVar4 != (Component *)0x0) {
              pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  (pCVar4,(MethodInfo *)0x0);
              euler.y = (float)_UNK_?;
              euler.x = fVar1;
              euler.z = 0.0;
              pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                        Quaternion_Internal_FromEulerRad
                                  ((Quaternion *)&stack0xffffffb0,euler,(MethodInfo *)0x0);
              if (pTVar5 != (Transform *)0x0) {
                method_00 = (MethodInfo *)&UNK_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                          (pTVar5,*pQVar6,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pOVar11 = (Object *)func_?();
                if (pOVar11 != (Object *)0x0) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                            (pOVar11,ExceptionArgument__Enum_obj,method_00);
                  pOVar11[1].klass = (Object__Class *)0x0;
                  pOVar11[2].klass = this_00;
                  func_?(pOVar11 + 2,this_00);
                  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                  MonoBehaviour_StartCoroutine_Auto
                            ((MonoBehaviour *)this_00,(IEnumerator *)pOVar11,(MethodInfo *)0x0);
                  pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffe4);
                  (this->fields).__2__current = pOVar11;
                  func_?(&(this->fields).__2__current,pOVar11);
                  (this->fields).__1__state = 3;
                  return 1;
                }
              }
            }
          }
          else {
            fVar10 = (this->fields)._currentTime_5__2;
            fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            (this->fields)._currentTime_5__2 = fVar12 + fVar10;
            this_05 = (this_00->_0).interopData;
            if (this_05 != (Il2CppInteropData *)0x0) {
              fVar10 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                       AnimationCurve_Evaluate
                                 ((AnimationCurve *)this_05,
                                  (fVar12 + fVar10) / (float)(this_00->_0).klass,(MethodInfo *)0x0);
              pCVar4 = (Component *)(this_00->_0).namespaze;
              if (pCVar4 != (Component *)0x0) {
                pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform(pCVar4,(MethodInfo *)0x0);
                euler_00.y = fVar10 * _UNK_? * _UNK_?;
                euler_00.x = fVar1;
                euler_00.z = 0.0;
                pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffffb0,euler_00,(MethodInfo *)0x0);
                if (pTVar5 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (pTVar5,*pQVar6,(MethodInfo *)0x0);
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
    pAVar9 = *(AnimationCurve **)&(this_00->_0).byval_arg.attrs;
    if (pAVar9 != (AnimationCurve *)0x0) {
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar9,(fVar10 + fVar1) / (float)(this_00->_0).byval_arg.data,
                          (MethodInfo *)0x0);
      pGVar2 = (Graphic *)(this_00->_0).namespaze;
      if ((pGVar2 != (Graphic *)0x0) &&
         (pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              (pGVar2,(MethodInfo *)0x0), pRVar3 != (RectTransform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
        RectTransform_SetSizeWithCurrentAnchors
                  (pRVar3,RectTransform_Axis__Enum_Horizontal,
                   (float)(int)(this_00->_0).implementedInterfaces * fVar1,(MethodInfo *)0x0);
        pGVar2 = (Graphic *)(this_00->_0).namespaze;
        if ((pGVar2 != (Graphic *)0x0) &&
           (pRVar3 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar2,(MethodInfo *)0x0), pRVar3 != (RectTransform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
          RectTransform_SetSizeWithCurrentAnchors
                    (pRVar3,RectTransform_Axis__Enum_Vertical,
                     (float)(int)(this_00->_0).implementedInterfaces * fVar1,(MethodInfo *)0x0);
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
  func_?();
  uVar13 = func_?();
  bVar14 = (uVar13 & 0x100) != 0;
  pbVar15 = (byte *)((int)uVar13 + -0x60);
  bVar16 = *pbVar15;
  bVar17 = (byte)(uVar13 >> 0x28);
  bVar18 = *pbVar15 + bVar17;
  *pbVar15 = bVar18 + bVar14;
  pcVar19 = (char *)((int)uVar13 + -0x33efc95e);
  *pcVar19 = *pcVar19 + (char)(uVar13 >> 0x20) + (CARRY1(bVar16,bVar17) || CARRY1(bVar18,bVar14));
  pcVar20 = (code *)swi(3);
  bVar21 = (*pcVar20)();
  return bVar21;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadePrevBadge>d__28::
     LevelRewardAnimation_DisplayAndFadePrevBadge_d_28_System_Collections_IEnumerator_Reset
               (LevelRewardAnimation_DisplayAndFadePrevBadge_d_28 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
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

