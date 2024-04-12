
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadePrevBadge>d__28::
     LevelRewardAnimation_DisplayAndFadePrevBadge_d_28_MoveNext
               (LevelRewardAnimation_DisplayAndFadePrevBadge_d_28 *this,MethodInfo *method)

{
  pLVar1 = this;
  uVar2 = CONCAT31(unaff_ESI,(char)((uint)unaff_EDI >> 0x18));
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_02 = (Object__Class *)(this->fields).__4__this;
  fVar3 = 0.0;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    cVar4 = (int)this_02 < 0;
    uVar5 = this_02 == (Object__Class *)0x0;
    if (!(bool)uVar5) {
      pGVar6 = (Graphic *)(this_02->_0).byval_arg.data.typeHandle;
      cVar4 = (int)pGVar6 < 0;
      uVar5 = pGVar6 == (Graphic *)0x0;
      if (!(bool)uVar5) {
        _uStack_6d = (float)CONCAT31(0x3f7d0a,uStack_7);
        pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            (pGVar6,(MethodInfo *)0x0);
        cVar4 = (int)pRVar8 < 0;
        uVar5 = pRVar8 == (RectTransform *)0x0;
        if (!(bool)uVar5) {
          bVar9 = (byte)((uint)(float)(int)this_02->interfaceOffsets >> 0x18);
          uVar2 = (uint)bVar9;
          value_01.y._0_3_ = SUB43((float)(int)this_02->interfaceOffsets,0);
          value_01.x._3_1_ = (char)((uint)(float)(int)this_02->interfaceOffsets >> 0x18);
          _uStack_6d = (float)CONCAT31(0x3f7d3d,uStack_7);
          value_01.x._0_3_ = SUB43((float)(int)this_02->interfaceOffsets,0);
          value_01.y._3_1_ = bVar9;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar8,value_01,(MethodInfo *)0x0);
          pCVar10 = (Component *)(this_02->_0).byval_arg.data.typeHandle;
          cVar4 = (int)pCVar10 < 0;
          uVar5 = pCVar10 == (Component *)0x0;
          if (!(bool)uVar5) {
            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (pCVar10,(MethodInfo *)0x0);
            euler_01.y = (float)pCVar10;
            euler_01.x = (float)pCVar10;
            euler_01.z = 0.0;
            pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffffc8,euler_01,(MethodInfo *)0x0);
            cVar4 = (int)pTVar11 < 0;
            uVar5 = pTVar11 == (Transform *)0x0;
            if (!(bool)uVar5) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar11,*pQVar12,(MethodInfo *)0x0);
              pBVar13 = (Behaviour *)(this_02->_0).byval_arg.data.typeHandle;
              cVar4 = (int)pBVar13 < 0;
              uVar5 = pBVar13 == (Behaviour *)0x0;
              if (!(bool)uVar5) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          (pBVar13,1,(MethodInfo *)0x0);
                pCVar10 = (Component *)(this_02->_0).implementedInterfaces;
                cVar4 = (int)pCVar10 < 0;
                uVar5 = pCVar10 == (Component *)0x0;
                if (!(bool)uVar5) {
                  pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform(pCVar10,(MethodInfo *)0x0);
                  cVar4 = (int)pTVar11 < 0;
                  uVar5 = pTVar11 == (Transform *)0x0;
                  if (!(bool)uVar5) {
                    value_00.z = 1.0;
                    value_00.x = 1.0;
                    value_00.y = 1.0;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                              (pTVar11,value_00,(MethodInfo *)0x0);
                    pBVar13 = (Behaviour *)(this_02->_0).implementedInterfaces;
                    cVar4 = (int)pBVar13 < 0;
                    uVar5 = pBVar13 == (Behaviour *)0x0;
                    if (!(bool)uVar5) {
                      this = (LevelRewardAnimation_DisplayAndFadePrevBadge_d_28 *)&UNK_?;
                      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                (pBVar13,0,(MethodInfo *)0x0);
                      this_00 = (this_02->_0).properties;
                      cVar4 = (int)this_00 < 0;
                      uVar5 = this_00 == (PropertyInfo *)0x0;
                      if (!(bool)uVar5) {
                        pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
                        cVar4 = (int)pGVar14 < 0;
                        uVar5 = pGVar14 == (GameObject *)0x0;
                        if (!(bool)uVar5) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar14,0,(MethodInfo *)0x0);
                          pCVar10 = (Component *)(this_02->_0).methods;
                          cVar4 = (int)pCVar10 < 0;
                          uVar5 = pCVar10 == (Component *)0x0;
                          if (!(bool)uVar5) {
                            pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                     Component_get_gameObject(pCVar10,(MethodInfo *)0x0);
                            cVar4 = (int)pGVar14 < 0;
                            uVar5 = pGVar14 == (GameObject *)0x0;
                            if (!(bool)uVar5) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar14,0,(MethodInfo *)0x0);
                              pIVar15 = (this_02->_0).declaringType;
                              cVar4 = (int)pIVar15 < 0;
                              uVar5 = pIVar15 == (Il2CppClass *)0x0;
                              if (!(bool)uVar5) {
                                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                Behaviour_set_enabled((Behaviour *)pIVar15,0,(MethodInfo *)0x0);
                                this_01 = (this_02->_0).events;
                                cVar4 = (int)this_01 < 0;
                                uVar5 = this_01 == (EventInfo *)0x0;
                                if (!(bool)uVar5) {
                                  pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                           Component_get_gameObject
                                                     ((Component *)this_01,(MethodInfo *)0x0);
                                  cVar4 = (int)pGVar14 < 0;
                                  uVar5 = pGVar14 == (GameObject *)0x0;
                                  if (!(bool)uVar5) {
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_SetActive(pGVar14,0,(MethodInfo *)0x0);
                                    (pLVar1->fields)._currentTime_5__2 = 0.0;
                                    goto code_?;
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
      }
    }
    break;
  case 1:
    (this->fields).__1__state = -1;
    cVar4 = (int)this_02 < 0;
    uVar5 = this_02 == (Object__Class *)0x0;
    if (!(bool)uVar5) {
code_?:
      in_AF = 0;
      if (_UNK_? <=
          (pLVar1->fields)._currentTime_5__2 / *(float *)&(this_02->_0).byval_arg.attrs) {
        pAVar16 = (AnimationCurve *)(this_02->_0).this_arg.data.typeHandle;
        cVar4 = (int)pAVar16 < 0;
        uVar5 = pAVar16 == (AnimationCurve *)0x0;
        if (!(bool)uVar5) {
          uStack_17 = CONCAT31(0x3f800e,(undefined1)uStack_17);
          _uStack_6d = (float)CONCAT31((int3)pAVar16,0x10);
          fVar18 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar16,1.0,(MethodInfo *)0x0);
          pGVar6 = (Graphic *)(this_02->_0).byval_arg.data.typeHandle;
          cVar4 = (int)pGVar6 < 0;
          uVar5 = pGVar6 == (Graphic *)0x0;
          if (!(bool)uVar5) {
            uVar2 = CONCAT31((int3)pGVar6,0x10);
            pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar6,(MethodInfo *)0x0);
            cVar4 = (int)pRVar8 < 0;
            uVar5 = pRVar8 == (RectTransform *)0x0;
            if (!(bool)uVar5) {
              fVar3 = 0.0;
              uVar2 = CONCAT31((int3)pRVar8,0x10);
              value.y = (float)(int)this_02->interfaceOffsets * fVar18;
              value.x = (float)(int)this_02->interfaceOffsets * fVar18;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                        (pRVar8,value,(MethodInfo *)0x0);
              (pLVar1->fields)._currentTime_5__2 = 0.0;
              goto code_?;
            }
          }
        }
      }
      else {
        fVar3 = (pLVar1->fields)._currentTime_5__2;
        fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        (pLVar1->fields)._currentTime_5__2 = fVar18 + fVar3;
        pAVar16 = (AnimationCurve *)(this_02->_0).this_arg.data.typeHandle;
        cVar4 = (int)pAVar16 < 0;
        uVar5 = pAVar16 == (AnimationCurve *)0x0;
        if (!(bool)uVar5) {
          uVar2 = uVar2 & 0xffffff00;
          _uStack_6d = (float)CONCAT31(0x3f7f3c,uStack_7);
          fVar3 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar16,(fVar18 + fVar3) / *(float *)&(this_02->_0).byval_arg.attrs,
                              (MethodInfo *)0x0);
          pGVar6 = (Graphic *)(this_02->_0).byval_arg.data.typeHandle;
          cVar4 = (int)pGVar6 < 0;
          uVar5 = pGVar6 == (Graphic *)0x0;
          if (!(bool)uVar5) {
            uVar2 = CONCAT31(0x3f7f55,(char)uVar2);
            pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar6,(MethodInfo *)0x0);
            cVar4 = (int)pRVar8 < 0;
            uVar5 = pRVar8 == (RectTransform *)0x0;
            if (!(bool)uVar5) {
              uVar2 = CONCAT31(0x3f7f7d,(char)uVar2);
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_SetSizeWithCurrentAnchors
                        (pRVar8,RectTransform_Axis__Enum_Horizontal,
                         (float)(int)this_02->interfaceOffsets * fVar3,(MethodInfo *)0x0);
              pGVar6 = (Graphic *)(this_02->_0).byval_arg.data.typeHandle;
              cVar4 = (int)pGVar6 < 0;
              uVar5 = pGVar6 == (Graphic *)0x0;
              if (!(bool)uVar5) {
                pRVar8 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                    (pGVar6,(MethodInfo *)0x0);
                cVar4 = (int)pRVar8 < 0;
                uVar5 = pRVar8 == (RectTransform *)0x0;
                if (!(bool)uVar5) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_SetSizeWithCurrentAnchors
                            (pRVar8,RectTransform_Axis__Enum_Vertical,
                             (float)(int)this_02->interfaceOffsets * fVar3,(MethodInfo *)0x0);
                  pOVar19 = (Object *)func_?();
                  (pLVar1->fields).__2__current = pOVar19;
                  func_?();
                  (pLVar1->fields).__1__state = 1;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
    break;
  case 2:
    (this->fields).__1__state = -1;
    cVar4 = (int)this_02 < 0;
    uVar5 = this_02 == (Object__Class *)0x0;
    if (!(bool)uVar5) {
code_?:
      in_AF = 0;
      if (_UNK_? <= (pLVar1->fields)._currentTime_5__2 / (float)(this_02->_0).fields) {
        pCVar10 = (Component *)(this_02->_0).byval_arg.data.typeHandle;
        cVar4 = (int)pCVar10 < 0;
        uVar5 = pCVar10 == (Component *)0x0;
        if (!(bool)uVar5) {
          _uStack_6d = (float)CONCAT31(0x3f81a0,uStack_7);
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (pCVar10,(MethodInfo *)0x0);
          uVar2 = 0;
          uStack_17 = CONCAT31(0x3f81d5,(undefined1)uStack_17);
          _uStack_6d = (float)CONCAT31((int3)(Quaternion *)&stack0xffffffb0,0x10);
          euler._3_4_ = (int)(CONCAT44(_UNK_?,fVar3) >> 0x18);
          euler.x._0_3_ = SUB43(fVar3,0);
          euler.y._3_1_ = (char)((uint)_UNK_? >> 0x18);
          euler.z = 0.0;
          pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                    Quaternion_Internal_FromEulerRad
                              ((Quaternion *)&stack0xffffffb0,euler,(MethodInfo *)0x0);
          cVar4 = (int)pTVar11 < 0;
          uVar5 = pTVar11 == (Transform *)0x0;
          pLVar1 = (LevelRewardAnimation_DisplayAndFadePrevBadge_d_28 *)0x0;
          if (!(bool)uVar5) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar11,*pQVar12,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            method_00 = TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29;
            pOVar19 = (Object *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      (pOVar19,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
            pOVar19[1].klass = (Object__Class *)0x0;
            pOVar19[2].klass = this_02;
            func_?();
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_StartCoroutine_Auto
                      ((MonoBehaviour *)this_02,(IEnumerator *)pOVar19,(MethodInfo *)0x0);
            pOVar19 = (Object *)func_?();
            (this->fields).__2__current = pOVar19;
            func_?();
            (this->fields).__1__state = 3;
            return 1;
          }
        }
      }
      else {
        fVar18 = (pLVar1->fields)._currentTime_5__2;
        fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        (pLVar1->fields)._currentTime_5__2 = fVar20 + fVar18;
        pIVar15 = (this_02->_0).klass;
        cVar4 = (int)pIVar15 < 0;
        uVar5 = pIVar15 == (Il2CppClass *)0x0;
        if (!(bool)uVar5) {
          uVar2 = uVar2 & 0xffffff00;
          _uStack_6d = (float)CONCAT31(0x3f80dc,uStack_7);
          fVar18 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)pIVar15,
                              (fVar20 + fVar18) / (float)(this_02->_0).fields,(MethodInfo *)0x0);
          pCVar10 = (Component *)(this_02->_0).byval_arg.data.typeHandle;
          cVar4 = (int)pCVar10 < 0;
          uVar5 = pCVar10 == (Component *)0x0;
          if (!(bool)uVar5) {
            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (pCVar10,(MethodInfo *)0x0);
            uVar2 = CONCAT31((int3)(Quaternion *)&stack0xffffffb0,0x10);
            euler_00.y = fVar18 * _UNK_? * _UNK_?;
            euler_00.x = fVar3;
            euler_00.z = 0.0;
            pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffffb0,euler_00,(MethodInfo *)0x0);
            cVar4 = (int)pTVar11 < 0;
            uVar5 = pTVar11 == (Transform *)0x0;
            this_02 = (Object__Class *)0x0;
            if (!(bool)uVar5) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar11,*pQVar12,(MethodInfo *)0x0);
              pOVar19 = (Object *)func_?();
              (pLVar1->fields).__2__current = pOVar19;
              func_?();
              (pLVar1->fields).__1__state = 2;
              return 1;
            }
          }
        }
      }
    }
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  cVar21 = '\0';
  cVar22 = '\0';
  func_?();
  iVar23 = func_?();
  if (!(bool)uVar5 && cVar21 == cVar4) {
    *(char *)(iVar23 + -0x80) = *(char *)(iVar23 + -0x80) + extraout_DH + cVar22;
    in_AF = 9 < ((byte)iVar23 & 0xf) | in_AF;
    uVar2 = CONCAT31((int3)((uint)iVar23 >> 8),(byte)iVar23 + in_AF * -6) & 0xffffff0f;
    cVar4 = (char)uVar2;
    pcVar24 = (char *)(CONCAT22((short)(uVar2 >> 0x10),
                               CONCAT11((char)((uint)iVar23 >> 8) - in_AF,cVar4)) + -0x33efc07e);
    *pcVar24 = *pcVar24 + cVar4 + in_AF;
    pcVar25 = (code *)swi(3);
    bVar26 = (*pcVar25)();
    return bVar26;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32,this_02,pLVar1);
    cRam_? = '\x01';
  }
  iVar23 = *(int *)(uVar2 + 0x10);
  if (*(int *)(uVar2 + 8) == 0) {
    *(undefined4 *)(uVar2 + 8) = 0xffffffff;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (iVar23 == 0) goto code_?;
    piVar27 = *(int **)(iVar23 + 0x14);
    *(float *)(iVar23 + 0x2c) = fVar3;
    if (piVar27 == (int *)0x0) goto code_?;
    this_02 = *(Object__Class **)(*piVar27 + 0x1cc);
    fVar28 = (float10)(**(code **)(*piVar27 + 0x1c8))(piVar27,this_02);
    *(float *)(uVar2 + 0x18) = (float)fVar28;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(uVar2 + 8) != 1) {
      return 0;
    }
    *(undefined4 *)(uVar2 + 8) = 0xffffffff;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (iVar23 == 0) goto code_?;
  }
  _uStack_6d = *(float *)(uVar2 + 0x18);
  fVar18 = *(float *)(uVar2 + 0x14);
  piVar27 = *(int **)(iVar23 + 0x14);
  if (*(float *)(iVar23 + 0x20) < fVar3 - *(float *)(iVar23 + 0x2c)) {
    if (piVar27 != (int *)0x0) {
      (**(code **)(*piVar27 + 0x1d0))
                (piVar27,(fVar18 - _uStack_6d) + _uStack_6d,*(undefined4 *)(*piVar27 + 0x1d4),this_02,
                 &stack0xfffffffc);
      return 0;
    }
  }
  else {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar3 = (fVar3 - *(float *)(iVar23 + 0x2c)) / *(float *)(iVar23 + 0x20);
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    else if (_UNK_? < fVar3) {
      fVar3 = _UNK_?;
    }
    if (piVar27 != (int *)0x0) {
      (**(code **)(*piVar27 + 0x1d0))
                (piVar27,(fVar18 - _uStack_6d) * fVar3 + _uStack_6d,*(undefined4 *)(*piVar27 + 0x1d4)
                );
      uStack_17 = 0;
      uVar29 = func_?(TypeInfo__System__Int32,&uStack_17);
      *(undefined4 *)(uVar2 + 0xc) = uVar29;
      func_?(uVar2 + 0xc,uVar29);
      *(undefined4 *)(uVar2 + 8) = 1;
      return 1;
    }
  }
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  bVar26 = (*pcVar25)();
  return bVar26;
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

