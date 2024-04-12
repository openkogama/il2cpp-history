
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeNextBadge>d__29::
     LevelRewardAnimation_DisplayAndFadeNextBadge_d_29_MoveNext
               (LevelRewardAnimation_DisplayAndFadeNextBadge_d_29 *this,MethodInfo *method)

{
  pLVar1 = this;
  uVar2 = CONCAT31(unaff_ESI,(char)((uint)unaff_EDI >> 0x18));
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pOVar3 = (Object__Class *)(this->fields).__4__this;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if ((pOVar3 != (Object__Class *)0x0) &&
       (pCVar7 = *(Component **)&(pOVar3->_0).this_arg.attrs, pCVar7 != (Component *)0x0)) {
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (pCVar7,(MethodInfo *)0x0);
      uVar5 = SUB41(pTVar8,0);
      uVar9 = (undefined2)((uint)pTVar8 >> 8);
      uVar10 = (undefined1)((uint)pTVar8 >> 0x18);
      uVar11 = (undefined3)((uint)uVar4 >> 8);
      uVar2 = 0;
      euler_03._3_4_ = (int)(CONCAT44(_UNK_?,CONCAT13(uVar6,uVar11)) >> 0x18);
      euler_03.x._0_3_ = uVar11;
      euler_03.y._3_1_ = (char)((uint)_UNK_? >> 0x18);
      euler_03.z = 0.0;
      pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffffd0,euler_03,(MethodInfo *)0x0);
      uVar11 = CONCAT21(uVar9,uVar5);
      if (CONCAT13(uVar10,uVar11) != 0) {
        uVar4 = CONCAT31(SUB43(pQVar12->z,0),(char)((uint)pQVar12->y >> 0x18));
        uVar13._1_3_ = SUB43(pQVar12->w,0);
        uVar13._0_1_ = (char)((uint)pQVar12->z >> 0x18);
        uVar2 = CONCAT31(uVar11,0x10);
        value_01.y._1_2_ = (short)((uint)pQVar12->y >> 8);
        value_01._0_5_ = *(undefined5 *)pQVar12;
        value_01._7_4_ = uVar4;
        value_01._11_4_ = uVar13;
        value_01.w._3_1_ = (char)((uint)pQVar12->w >> 0x18);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  ((Transform *)CONCAT13(uVar10,uVar11),value_01,(MethodInfo *)0x0);
        uVar5 = (undefined1)uVar13;
        pBVar14 = *(Behaviour **)&(pOVar3->_0).this_arg.attrs;
        if (pBVar14 != (Behaviour *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    (pBVar14,1,(MethodInfo *)0x0);
          pBVar14 = (Behaviour *)(pOVar3->_0).byval_arg.data.typeHandle;
          if (pBVar14 != (Behaviour *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      (pBVar14,0,(MethodInfo *)0x0);
            pIVar15 = (pOVar3->_0).castClass;
            if (pIVar15 != (Il2CppClass *)0x0) {
              fVar16 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                       AnimationCurve_Evaluate((AnimationCurve *)pIVar15,0.0,(MethodInfo *)0x0);
              pGVar17 = *(Graphic **)&(pOVar3->_0).this_arg.attrs;
              uVar6 = SUB41(fVar16,0);
              uVar9 = (undefined2)((uint)fVar16 >> 8);
              uVar10 = (undefined1)((uint)fVar16 >> 0x18);
              if ((pGVar17 != (Graphic *)0x0) &&
                 (pRVar18 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      (pGVar17,(MethodInfo *)0x0), pRVar18 != (RectTransform *)0x0))
              {
                this = (LevelRewardAnimation_DisplayAndFadeNextBadge_d_29 *)0x0;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar18,RectTransform_Axis__Enum_Horizontal,
                           (float)(int)pOVar3->interfaceOffsets *
                           (float)CONCAT13(uVar10,CONCAT21(uVar9,uVar6)),(MethodInfo *)0x0);
                pGVar17 = *(Graphic **)&(pOVar3->_0).this_arg.attrs;
                if ((pGVar17 != (Graphic *)0x0) &&
                   (pRVar18 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                              Graphic_get_rectTransform(pGVar17,(MethodInfo *)0x0),
                   pRVar18 != (RectTransform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_SetSizeWithCurrentAnchors
                            (pRVar18,RectTransform_Axis__Enum_Vertical,
                             (float)(int)pOVar3->interfaceOffsets *
                             (float)CONCAT13(uVar10,CONCAT21(uVar9,uVar6)),(MethodInfo *)0x0);
                  (pLVar1->fields)._currentTime_5__2 = 0.0;
                  goto code_?;
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
    if (pOVar3 != (Object__Class *)0x0) {
code_?:
      in_AF = 0;
      if (_UNK_? <= (pLVar1->fields)._currentTime_5__2 / (float)(pOVar3->_0).fields) {
        pBVar14 = (Behaviour *)(pOVar3->_0).implementedInterfaces;
        if (pBVar14 != (Behaviour *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    (pBVar14,1,(MethodInfo *)0x0);
          pEVar19 = (pOVar3->_0).events;
          if (pEVar19 != (EventInfo *)0x0) {
            uVar2 = CONCAT31((int3)pEVar19,0x10);
            pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pEVar19,(MethodInfo *)0x0);
            if (pGVar20 != (GameObject *)0x0) {
              uVar2 = CONCAT31(0x3f76fc,(char)uVar2);
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar20,1,(MethodInfo *)0x0);
              pEVar19 = (pOVar3->_0).events;
              uVar6 = 0;
              uVar4 = 0;
              uVar5 = SUB41(pEVar19,0);
              uVar9 = (undefined2)((uint)pEVar19 >> 8);
              uVar10 = (undefined1)((uint)pEVar19 >> 0x18);
              TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
              piVar21 = (int *)CONCAT13(uVar10,CONCAT21(uVar9,uVar5));
              if (piVar21 != (int *)0x0) {
                (**(code **)(*piVar21 + 0x318))();
                pCVar7 = *(Component **)&(pOVar3->_0).this_arg.attrs;
                if (pCVar7 != (Component *)0x0) {
                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform(pCVar7,(MethodInfo *)0x0);
                  uVar5 = SUB41(pTVar8,0);
                  uVar9 = (undefined2)((uint)pTVar8 >> 8);
                  uVar10 = (undefined1)((uint)pTVar8 >> 0x18);
                  uVar4 = CONCAT13(uVar6,(int3)((uint)uVar4 >> 8));
                  euler_02.y = (float)uVar4;
                  euler_02.x = (float)uVar4;
                  euler_02.z = 0.0;
                  pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad
                                      ((Quaternion *)&stack0xffffffd0,euler_02,(MethodInfo *)0x0);
                  pTVar8 = (Transform *)CONCAT13(uVar10,CONCAT21(uVar9,uVar5));
                  if (pTVar8 != (Transform *)0x0) {
                    value.w._1_2_ = (short)((uint)pQVar12->w >> 8);
                    value._0_13_ = *(undefined1 (*) [13])pQVar12;
                    value.w._3_1_ = (char)((uint)pQVar12->w >> 0x18);
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar8,value,(MethodInfo *)0x0);
                    (pLVar1->fields)._currentTime_5__2 = 0.0;
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      else {
        fVar16 = (pLVar1->fields)._currentTime_5__2;
        uVar6 = SUB41(fVar16,0);
        uVar9 = (undefined2)((uint)fVar16 >> 8);
        uVar10 = (undefined1)((uint)fVar16 >> 0x18);
        fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar16 = fVar16 + (float)CONCAT13(uVar10,CONCAT21(uVar9,uVar6));
        (pLVar1->fields)._currentTime_5__2 = fVar16;
        this_00 = (pOVar3->_0).interopData;
        if (this_00 != (Il2CppInteropData *)0x0) {
          uVar2 = uVar2 & 0xffffff00;
          fVar16 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)this_00,fVar16 / (float)(pOVar3->_0).fields,
                              (MethodInfo *)0x0);
          pCVar7 = *(Component **)&(pOVar3->_0).this_arg.attrs;
          uVar6 = SUB41(fVar16,0);
          uVar9 = (undefined2)((uint)fVar16 >> 8);
          uVar10 = (undefined1)((uint)fVar16 >> 0x18);
          if (pCVar7 != (Component *)0x0) {
            uVar11 = (undefined3)((uint)uVar4 >> 8);
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (pCVar7,(MethodInfo *)0x0);
            fVar16 = ((float)CONCAT13(uVar10,CONCAT21(uVar9,uVar6)) * _UNK_? -
                     _UNK_?) * _UNK_?;
            uVar2 = CONCAT31((int3)(Quaternion *)&stack0xffffffc0,0x10);
            euler_05.x._3_1_ = uVar5;
            euler_05.x._0_3_ = uVar11;
            euler_05.y._0_1_ = SUB41(fVar16,0);
            euler_05.y._1_2_ = (short)((uint)fVar16 >> 8);
            euler_05.y._3_1_ = (char)((uint)fVar16 >> 0x18);
            euler_05.z = 0.0;
            pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffffc0,euler_05,(MethodInfo *)0x0);
            pOVar3 = (Object__Class *)0x0;
            if (pTVar8 != (Transform *)0x0) {
              value_03.y._0_3_ = SUB43(pQVar12->y,0);
              value_03.x._3_1_ = (char)((uint)pQVar12->x >> 0x18);
              value_03.z._0_3_ = SUB43(pQVar12->z,0);
              value_03.y._3_1_ = (char)((uint)pQVar12->y >> 0x18);
              value_03.w._0_3_ = SUB43(pQVar12->w,0);
              value_03.z._3_1_ = (char)((uint)pQVar12->z >> 0x18);
              value_03.x._0_3_ = SUB43(pQVar12->x,0);
              value_03.w._3_1_ = (char)((uint)pQVar12->w >> 0x18);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar8,value_03,(MethodInfo *)0x0);
              pOVar22 = (Object *)func_?();
              (pLVar1->fields).__2__current = pOVar22;
              func_?();
              (pLVar1->fields).__1__state = 1;
              return 1;
            }
          }
        }
      }
    }
    break;
  case 2:
    (this->fields).__1__state = -1;
    if (pOVar3 != (Object__Class *)0x0) {
code_?:
      in_AF = 0;
      if (_UNK_? <= (pLVar1->fields)._currentTime_5__2 / (float)(pOVar3->_0).element_class)
      {
        pIVar15 = (pOVar3->_0).castClass;
        if (pIVar15 != (Il2CppClass *)0x0) {
          fVar16 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)pIVar15,1.0,(MethodInfo *)0x0);
          pGVar17 = *(Graphic **)&(pOVar3->_0).this_arg.attrs;
          uVar6 = SUB41(fVar16,0);
          uVar9 = (undefined2)((uint)fVar16 >> 8);
          uVar10 = (undefined1)((uint)fVar16 >> 0x18);
          if (pGVar17 != (Graphic *)0x0) {
            uVar2 = CONCAT31((int3)pGVar17,0x10);
            pRVar18 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar17,(MethodInfo *)0x0);
            if (pRVar18 != (RectTransform *)0x0) {
              uVar5 = 0;
              uVar4 = 0;
              uVar2 = CONCAT31((int3)pRVar18,0x10);
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_SetSizeWithCurrentAnchors
                        (pRVar18,RectTransform_Axis__Enum_Horizontal,
                         (float)(int)pOVar3->interfaceOffsets *
                         (float)CONCAT13(uVar10,CONCAT21(uVar9,uVar6)),(MethodInfo *)0x0);
              pGVar17 = *(Graphic **)&(pOVar3->_0).this_arg.attrs;
              if ((pGVar17 != (Graphic *)0x0) &&
                 (pRVar18 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      (pGVar17,(MethodInfo *)0x0), pRVar18 != (RectTransform *)0x0))
              {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar18,RectTransform_Axis__Enum_Vertical,
                           (float)(int)pOVar3->interfaceOffsets *
                           (float)CONCAT13(uVar10,CONCAT21(uVar9,uVar6)),(MethodInfo *)0x0);
                pEVar19 = (pOVar3->_0).events;
                if ((pEVar19 != (EventInfo *)0x0) &&
                   (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pEVar19,(MethodInfo *)0x0),
                   pGVar20 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar20,0,(MethodInfo *)0x0);
                  (pLVar1->fields)._currentTime_5__2 = 0.0;
                  goto code_?;
                }
              }
            }
          }
        }
      }
      else {
        fVar16 = (pLVar1->fields)._currentTime_5__2;
        uVar6 = SUB41(fVar16,0);
        uVar9 = (undefined2)((uint)fVar16 >> 8);
        uVar5 = (undefined1)((uint)fVar16 >> 0x18);
        fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar16 = fVar16 + (float)CONCAT13(uVar5,CONCAT21(uVar9,uVar6));
        (pLVar1->fields)._currentTime_5__2 = fVar16;
        pIVar15 = (pOVar3->_0).castClass;
        if (pIVar15 != (Il2CppClass *)0x0) {
          uVar2 = uVar2 & 0xffffff00;
          fVar16 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)pIVar15,fVar16 / (float)(pOVar3->_0).element_class,
                              (MethodInfo *)0x0);
          pGVar17 = *(Graphic **)&(pOVar3->_0).this_arg.attrs;
          uVar6 = SUB41(fVar16,0);
          uVar9 = (undefined2)((uint)fVar16 >> 8);
          uVar5 = (undefined1)((uint)fVar16 >> 0x18);
          if (pGVar17 != (Graphic *)0x0) {
            uVar2 = CONCAT31(0x3f782c,(char)uVar2);
            pRVar18 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar17,(MethodInfo *)0x0);
            if (pRVar18 != (RectTransform *)0x0) {
              uVar2 = CONCAT31(0x3f7854,(char)uVar2);
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_SetSizeWithCurrentAnchors
                        (pRVar18,RectTransform_Axis__Enum_Horizontal,
                         (float)(int)pOVar3->interfaceOffsets *
                         (float)CONCAT13(uVar5,CONCAT21(uVar9,uVar6)),(MethodInfo *)0x0);
              pGVar17 = *(Graphic **)&(pOVar3->_0).this_arg.attrs;
              if ((pGVar17 != (Graphic *)0x0) &&
                 (pRVar18 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      (pGVar17,(MethodInfo *)0x0), pRVar18 != (RectTransform *)0x0))
              {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar18,RectTransform_Axis__Enum_Vertical,
                           (float)(int)pOVar3->interfaceOffsets *
                           (float)CONCAT13(uVar5,CONCAT21(uVar9,uVar6)),(MethodInfo *)0x0);
                pAVar23 = (AnimationCurve *)(pOVar3->_0).nestedTypes;
                if (pAVar23 != (AnimationCurve *)0x0) {
                  fVar16 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                           AnimationCurve_Evaluate
                                     (pAVar23,(pLVar1->fields)._currentTime_5__2 /
                                             (float)(pOVar3->_0).element_class,(MethodInfo *)0x0);
                  pCVar7 = (Component *)(pOVar3->_0).implementedInterfaces;
                  uVar6 = SUB41(fVar16,0);
                  uVar9 = (undefined2)((uint)fVar16 >> 8);
                  uVar5 = (undefined1)((uint)fVar16 >> 0x18);
                  if (pCVar7 != (Component *)0x0) {
                    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform(pCVar7,(MethodInfo *)0x0);
                    value_05.y._0_3_ = CONCAT21(uVar9,uVar6);
                    value_05.x._3_1_ = uVar5;
                    if (pTVar8 != (Transform *)0x0) {
                      value_05.z._0_3_ = 0x800000;
                      value_05.y._3_1_ = uVar5;
                      value_05.x._0_3_ = CONCAT21(uVar9,uVar6);
                      value_05.z._3_1_ = 0x3f;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                                (pTVar8,value_05,(MethodInfo *)0x0);
                      pOVar22 = (Object *)func_?();
                      (pLVar1->fields).__2__current = pOVar22;
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
    break;
  case 3:
    (this->fields).__1__state = -1;
    if (pOVar3 != (Object__Class *)0x0) {
code_?:
      in_AF = 0;
      if (_UNK_? <= (pLVar1->fields)._currentTime_5__2 / (float)(pOVar3->_0).fields) {
        pCVar7 = *(Component **)&(pOVar3->_0).this_arg.attrs;
        if (pCVar7 != (Component *)0x0) {
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (pCVar7,(MethodInfo *)0x0);
          uVar11 = (undefined3)((uint)uVar4 >> 8);
          uVar2 = 0;
          euler_04._3_4_ = (int)(CONCAT44(_UNK_?,CONCAT13(uVar5,uVar11)) >> 0x18);
          euler_04.x._0_3_ = uVar11;
          euler_04.y._3_1_ = (char)((uint)_UNK_? >> 0x18);
          euler_04.z = 0.0;
          pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                    Quaternion_Internal_FromEulerRad
                              ((Quaternion *)&stack0xffffffc0,euler_04,(MethodInfo *)0x0);
          pLVar1 = (LevelRewardAnimation_DisplayAndFadeNextBadge_d_29 *)0x0;
          if (pTVar8 != (Transform *)0x0) {
            value_02.z._0_3_ = SUB43(pQVar12->z,0);
            value_02.y._3_1_ = (char)((uint)pQVar12->y >> 0x18);
            value_02.w._0_3_ = SUB43(pQVar12->w,0);
            value_02.z._3_1_ = (char)((uint)pQVar12->z >> 0x18);
            value_02.y._1_2_ = (short)((uint)pQVar12->y >> 8);
            value_02._0_5_ = *(undefined5 *)pQVar12;
            value_02.w._3_1_ = (char)((uint)pQVar12->w >> 0x18);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar8,value_02,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            uVar11 = SUB43(TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30,0);
            uVar6 = (undefined1)
                     ((uint)TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30 >> 0x18);
            pOVar22 = (Object *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      (pOVar22,ExceptionArgument__Enum_obj,(MethodInfo *)CONCAT13(uVar6,uVar11));
            pOVar22[1].klass = (Object__Class *)0x0;
            pOVar22[2].klass = pOVar3;
            func_?();
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_StartCoroutine_Auto
                      ((MonoBehaviour *)pOVar3,(IEnumerator *)pOVar22,(MethodInfo *)0x0);
            pOVar22 = (Object *)func_?();
            (this->fields).__2__current = pOVar22;
            func_?();
            (this->fields).__1__state = 4;
            return 1;
          }
        }
      }
      else {
        fVar16 = (pLVar1->fields)._currentTime_5__2;
        uVar11 = SUB43(fVar16,0);
        uVar6 = (undefined1)((uint)fVar16 >> 0x18);
        fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar16 = fVar16 + (float)CONCAT13(uVar6,uVar11);
        (pLVar1->fields)._currentTime_5__2 = fVar16;
        pIVar15 = (pOVar3->_0).klass;
        if (pIVar15 != (Il2CppClass *)0x0) {
          uVar2 = uVar2 & 0xffffff00;
          fVar16 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)pIVar15,fVar16 / (float)(pOVar3->_0).fields,
                              (MethodInfo *)0x0);
          pCVar7 = *(Component **)&(pOVar3->_0).this_arg.attrs;
          uVar11 = SUB43(fVar16,0);
          uVar6 = (undefined1)((uint)fVar16 >> 0x18);
          if (pCVar7 != (Component *)0x0) {
            uVar24 = (undefined3)((uint)uVar4 >> 8);
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (pCVar7,(MethodInfo *)0x0);
            fVar16 = (float)CONCAT13(uVar6,uVar11) * _UNK_? * _UNK_?;
            uVar2 = CONCAT31((int3)(Quaternion *)&stack0xffffffc0,0x10);
            euler_06.x._3_1_ = uVar5;
            euler_06.x._0_3_ = uVar24;
            euler_06.y._0_1_ = SUB41(fVar16,0);
            euler_06.y._1_2_ = (short)((uint)fVar16 >> 8);
            euler_06.y._3_1_ = (char)((uint)fVar16 >> 0x18);
            euler_06.z = 0.0;
            pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffffc0,euler_06,(MethodInfo *)0x0);
            pOVar3 = (Object__Class *)0x0;
            if (pTVar8 != (Transform *)0x0) {
              value_04.y._0_3_ = SUB43(pQVar12->y,0);
              value_04.x._3_1_ = (char)((uint)pQVar12->x >> 0x18);
              value_04.z._0_3_ = SUB43(pQVar12->z,0);
              value_04.y._3_1_ = (char)((uint)pQVar12->y >> 0x18);
              value_04.w._0_3_ = SUB43(pQVar12->w,0);
              value_04.z._3_1_ = (char)((uint)pQVar12->z >> 0x18);
              value_04.x._0_3_ = SUB43(pQVar12->x,0);
              value_04.w._3_1_ = (char)((uint)pQVar12->w >> 0x18);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar8,value_04,(MethodInfo *)0x0);
              pOVar22 = (Object *)func_?();
              (pLVar1->fields).__2__current = pOVar22;
              func_?();
              (pLVar1->fields).__1__state = 3;
              return 1;
            }
          }
        }
      }
    }
    break;
  case 4:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  bVar25 = 0;
  func_?();
  if (extraout_EDX + 1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar26 = (undefined1 *)((int)&pOVar3[-0x677d63]._1.element_size + 1);
  bVar27 = *puVar26;
  bVar28 = (byte)(extraout_EDX + 1);
  bVar29 = *puVar26 + bVar28;
  bVar30 = CARRY1(bVar27,bVar28) || CARRY1(bVar29,bVar25);
  *puVar26 = bVar29 + bVar25;
  if ((!CARRY1(bVar27,bVar28) && !CARRY1(bVar29,bVar25)) && *puVar26 != '\0') {
    func_?();
    pcVar31 = (code *)swi(3);
    bVar32 = (*pcVar31)();
    return bVar32;
  }
  bVar25 = *extraout_ECX + (byte)&stack0xfffffffc;
  bVar33 = CARRY1(*extraout_ECX,(byte)&stack0xfffffffc) || CARRY1(bVar25,bVar30);
  *extraout_ECX = bVar25 + bVar30;
  if ((POPCOUNT(*extraout_ECX) & 1U) != 0) {
    bVar25 = *extraout_ECX;
    cVar34 = (char)((uint)extraout_ECX >> 8);
    cVar35 = *extraout_ECX + cVar34;
    *extraout_ECX = cVar35 + bVar33;
    if ((SCARRY1(bVar25,cVar34) != SCARRY1(cVar35,bVar33)) != (char)*extraout_ECX < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar31 = (code *)swi(3);
    bVar32 = (*pcVar31)();
    return bVar32;
  }
  uVar36 = CONCAT31((int3)pLVar1,(char)((uint)pOVar3 >> 0x18));
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pOVar3 = *(Object__Class **)(uVar2 + 0x10);
  fVar16 = 0.0;
  uVar37 = uVar2;
  switch(*(undefined4 *)(uVar2 + 8)) {
  case 0:
    *(undefined4 *)(uVar2 + 8) = 0xffffffff;
    cVar35 = (int)pOVar3 < 0;
    uVar6 = pOVar3 == (Object__Class *)0x0;
    if (!(bool)uVar6) {
      pGVar17 = (Graphic *)(pOVar3->_0).byval_arg.data.typeHandle;
      cVar35 = (int)pGVar17 < 0;
      uVar6 = pGVar17 == (Graphic *)0x0;
      if (!(bool)uVar6) {
        _uStack_ba = (float)CONCAT31(0x3f7d0a,uStack_38);
        pRVar18 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            (pGVar17,(MethodInfo *)0x0);
        cVar35 = (int)pRVar18 < 0;
        uVar6 = pRVar18 == (RectTransform *)0x0;
        if (!(bool)uVar6) {
          bVar25 = (byte)((uint)(float)(int)pOVar3->interfaceOffsets >> 0x18);
          uVar36 = (uint)bVar25;
          value_07.y._0_3_ = SUB43((float)(int)pOVar3->interfaceOffsets,0);
          value_07.x._3_1_ = (char)((uint)(float)(int)pOVar3->interfaceOffsets >> 0x18);
          _uStack_ba = (float)CONCAT31(0x3f7d3d,uStack_38);
          value_07.x._0_3_ = SUB43((float)(int)pOVar3->interfaceOffsets,0);
          value_07.y._3_1_ = bVar25;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar18,value_07,(MethodInfo *)0x0);
          pCVar7 = (Component *)(pOVar3->_0).byval_arg.data.typeHandle;
          cVar35 = (int)pCVar7 < 0;
          uVar6 = pCVar7 == (Component *)0x0;
          if (!(bool)uVar6) {
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (pCVar7,(MethodInfo *)0x0);
            uVar5 = SUB41(pTVar8,0);
            iVar39 = (int3)((uint)pTVar8 >> 8);
            euler_01.y = (float)pCVar7;
            euler_01.x = (float)pCVar7;
            euler_01.z = 0.0;
            pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffff7b,euler_01,(MethodInfo *)0x0);
            cVar35 = iVar39 < 0;
            uVar6 = (Transform *)CONCAT31(iVar39,uVar5) == (Transform *)0x0;
            if (!(bool)uVar6) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        ((Transform *)CONCAT31(iVar39,uVar5),*pQVar12,(MethodInfo *)0x0);
              pBVar14 = (Behaviour *)(pOVar3->_0).byval_arg.data.typeHandle;
              cVar35 = (int)pBVar14 < 0;
              uVar6 = pBVar14 == (Behaviour *)0x0;
              if (!(bool)uVar6) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          (pBVar14,1,(MethodInfo *)0x0);
                pCVar7 = (Component *)(pOVar3->_0).implementedInterfaces;
                cVar35 = (int)pCVar7 < 0;
                uVar6 = pCVar7 == (Component *)0x0;
                if (!(bool)uVar6) {
                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform(pCVar7,(MethodInfo *)0x0);
                  cVar35 = (int)pTVar8 < 0;
                  uVar6 = pTVar8 == (Transform *)0x0;
                  if (!(bool)uVar6) {
                    value_00.z = 1.0;
                    value_00.x = 1.0;
                    value_00.y = 1.0;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                              (pTVar8,value_00,(MethodInfo *)0x0);
                    pBVar14 = (Behaviour *)(pOVar3->_0).implementedInterfaces;
                    cVar35 = (int)pBVar14 < 0;
                    uVar6 = pBVar14 == (Behaviour *)0x0;
                    if (!(bool)uVar6) {
                      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                (pBVar14,0,(MethodInfo *)0x0);
                      this_01 = (pOVar3->_0).properties;
                      cVar35 = (int)this_01 < 0;
                      uVar6 = this_01 == (PropertyInfo *)0x0;
                      if (!(bool)uVar6) {
                        pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0);
                        cVar35 = (int)pGVar20 < 0;
                        uVar6 = pGVar20 == (GameObject *)0x0;
                        if (!(bool)uVar6) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar20,0,(MethodInfo *)0x0);
                          pCVar7 = (Component *)(pOVar3->_0).methods;
                          cVar35 = (int)pCVar7 < 0;
                          uVar6 = pCVar7 == (Component *)0x0;
                          if (!(bool)uVar6) {
                            pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_gameObject(pCVar7,(MethodInfo *)0x0);
                            cVar35 = (int)pGVar20 < 0;
                            uVar6 = pGVar20 == (GameObject *)0x0;
                            if (!(bool)uVar6) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar20,0,(MethodInfo *)0x0);
                              pIVar15 = (pOVar3->_0).declaringType;
                              cVar35 = (int)pIVar15 < 0;
                              uVar6 = pIVar15 == (Il2CppClass *)0x0;
                              if (!(bool)uVar6) {
                                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                Behaviour_set_enabled((Behaviour *)pIVar15,0,(MethodInfo *)0x0);
                                pEVar19 = (pOVar3->_0).events;
                                cVar35 = (int)pEVar19 < 0;
                                uVar6 = pEVar19 == (EventInfo *)0x0;
                                if (!(bool)uVar6) {
                                  pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_gameObject
                                                      ((Component *)pEVar19,(MethodInfo *)0x0);
                                  cVar35 = (int)pGVar20 < 0;
                                  uVar6 = pGVar20 == (GameObject *)0x0;
                                  if (!(bool)uVar6) {
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_SetActive(pGVar20,0,(MethodInfo *)0x0);
                                    *(undefined4 *)(uVar2 + 0x14) = 0;
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
    *(undefined4 *)(uVar2 + 8) = 0xffffffff;
    cVar35 = (int)pOVar3 < 0;
    uVar6 = pOVar3 == (Object__Class *)0x0;
    if (!(bool)uVar6) {
code_?:
      in_AF = 0;
      if (_UNK_? <= *(float *)(uVar2 + 0x14) / *(float *)&(pOVar3->_0).byval_arg.attrs) {
        pAVar23 = (AnimationCurve *)(pOVar3->_0).this_arg.data.typeHandle;
        cVar35 = (int)pAVar23 < 0;
        uVar6 = pAVar23 == (AnimationCurve *)0x0;
        if (!(bool)uVar6) {
          uStack_40 = CONCAT31(0x3f800e,(undefined1)uStack_40);
          _uStack_ba = (float)CONCAT31((int3)pAVar23,0x10);
          fVar16 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar23,1.0,(MethodInfo *)0x0);
          pGVar17 = (Graphic *)(pOVar3->_0).byval_arg.data.typeHandle;
          uVar5 = SUB41(fVar16,0);
          uVar11 = (undefined3)((uint)fVar16 >> 8);
          cVar35 = (int)pGVar17 < 0;
          uVar6 = pGVar17 == (Graphic *)0x0;
          if (!(bool)uVar6) {
            uVar36 = CONCAT31((int3)pGVar17,0x10);
            pRVar18 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar17,(MethodInfo *)0x0);
            cVar35 = (int)pRVar18 < 0;
            uVar6 = pRVar18 == (RectTransform *)0x0;
            if (!(bool)uVar6) {
              fVar16 = 0.0;
              uVar36 = CONCAT31((int3)pRVar18,0x10);
              value_06.y = (float)(int)pOVar3->interfaceOffsets * (float)CONCAT31(uVar11,uVar5);
              value_06.x = (float)(int)pOVar3->interfaceOffsets * (float)CONCAT31(uVar11,uVar5);
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                        (pRVar18,value_06,(MethodInfo *)0x0);
              *(undefined4 *)(uVar2 + 0x14) = 0;
              goto code_?;
            }
          }
        }
      }
      else {
        uVar6 = (undefined1)*(undefined4 *)(uVar2 + 0x14);
        uVar11 = (undefined3)((uint)*(undefined4 *)(uVar2 + 0x14) >> 8);
        fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar16 = fVar16 + (float)CONCAT31(uVar11,uVar6);
        *(float *)(uVar2 + 0x14) = fVar16;
        pAVar23 = (AnimationCurve *)(pOVar3->_0).this_arg.data.typeHandle;
        cVar35 = (int)pAVar23 < 0;
        uVar6 = pAVar23 == (AnimationCurve *)0x0;
        if (!(bool)uVar6) {
          uVar36 = uVar36 & 0xffffff00;
          _uStack_ba = (float)CONCAT31(0x3f7f3c,uStack_38);
          fVar16 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar23,fVar16 / *(float *)&(pOVar3->_0).byval_arg.attrs,
                              (MethodInfo *)0x0);
          pGVar17 = (Graphic *)(pOVar3->_0).byval_arg.data.typeHandle;
          uVar5 = SUB41(fVar16,0);
          uVar11 = (undefined3)((uint)fVar16 >> 8);
          cVar35 = (int)pGVar17 < 0;
          uVar6 = pGVar17 == (Graphic *)0x0;
          if (!(bool)uVar6) {
            uVar36 = CONCAT31(0x3f7f55,(char)uVar36);
            pRVar18 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar17,(MethodInfo *)0x0);
            cVar35 = (int)pRVar18 < 0;
            uVar6 = pRVar18 == (RectTransform *)0x0;
            if (!(bool)uVar6) {
              uVar36 = CONCAT31(0x3f7f7d,(char)uVar36);
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_SetSizeWithCurrentAnchors
                        (pRVar18,RectTransform_Axis__Enum_Horizontal,
                         (float)(int)pOVar3->interfaceOffsets * (float)CONCAT31(uVar11,uVar5),
                         (MethodInfo *)0x0);
              pGVar17 = (Graphic *)(pOVar3->_0).byval_arg.data.typeHandle;
              cVar35 = (int)pGVar17 < 0;
              uVar6 = pGVar17 == (Graphic *)0x0;
              if (!(bool)uVar6) {
                pRVar18 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                    (pGVar17,(MethodInfo *)0x0);
                cVar35 = (int)pRVar18 < 0;
                uVar6 = pRVar18 == (RectTransform *)0x0;
                if (!(bool)uVar6) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_SetSizeWithCurrentAnchors
                            (pRVar18,RectTransform_Axis__Enum_Vertical,
                             (float)(int)pOVar3->interfaceOffsets * (float)CONCAT31(uVar11,uVar5),
                             (MethodInfo *)0x0);
                  uVar4 = func_?();
                  *(undefined4 *)(uVar2 + 0xc) = uVar4;
                  func_?();
                  *(undefined4 *)(uVar2 + 8) = 1;
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
    *(undefined4 *)(uVar2 + 8) = 0xffffffff;
    cVar35 = (int)pOVar3 < 0;
    uVar6 = pOVar3 == (Object__Class *)0x0;
    if (!(bool)uVar6) {
code_?:
      in_AF = 0;
      if (_UNK_? <= *(float *)(uVar2 + 0x14) / (float)(pOVar3->_0).fields) {
        pCVar7 = (Component *)(pOVar3->_0).byval_arg.data.typeHandle;
        cVar35 = (int)pCVar7 < 0;
        uVar6 = pCVar7 == (Component *)0x0;
        if (!(bool)uVar6) {
          _uStack_ba = (float)CONCAT31(0x3f81a0,uStack_38);
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (pCVar7,(MethodInfo *)0x0);
          uVar36 = 0;
          uStack_40 = CONCAT31(0x3f81d5,(undefined1)uStack_40);
          _uStack_ba = (float)CONCAT31((int3)(Quaternion *)&stack0xffffff63,0x10);
          euler._3_4_ = (int)(CONCAT44(_UNK_?,fVar16) >> 0x18);
          euler.x._0_3_ = SUB43(fVar16,0);
          euler.y._3_1_ = (char)((uint)_UNK_? >> 0x18);
          euler.z = 0.0;
          pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                    Quaternion_Internal_FromEulerRad
                              ((Quaternion *)&stack0xffffff63,euler,(MethodInfo *)0x0);
          cVar35 = (int)pTVar8 < 0;
          uVar6 = pTVar8 == (Transform *)0x0;
          uVar2 = 0;
          if (!(bool)uVar6) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar8,*pQVar12,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            method_00 = TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29;
            pOVar22 = (Object *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      (pOVar22,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
            pOVar22[1].klass = (Object__Class *)0x0;
            pOVar22[2].klass = pOVar3;
            func_?();
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_StartCoroutine_Auto
                      ((MonoBehaviour *)pOVar3,(IEnumerator *)pOVar22,(MethodInfo *)0x0);
            uVar4 = func_?();
            *(undefined4 *)(uVar37 + 0xc) = uVar4;
            func_?();
            *(undefined4 *)(uVar37 + 8) = 3;
            return 1;
          }
        }
      }
      else {
        uVar6 = (undefined1)*(undefined4 *)(uVar2 + 0x14);
        uVar11 = (undefined3)((uint)*(undefined4 *)(uVar2 + 0x14) >> 8);
        fVar41 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar41 = fVar41 + (float)CONCAT31(uVar11,uVar6);
        *(float *)(uVar2 + 0x14) = fVar41;
        pIVar15 = (pOVar3->_0).klass;
        cVar35 = (int)pIVar15 < 0;
        uVar6 = pIVar15 == (Il2CppClass *)0x0;
        if (!(bool)uVar6) {
          uVar36 = uVar36 & 0xffffff00;
          _uStack_ba = (float)CONCAT31(0x3f80dc,uStack_38);
          fVar41 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)pIVar15,fVar41 / (float)(pOVar3->_0).fields,
                              (MethodInfo *)0x0);
          pCVar7 = (Component *)(pOVar3->_0).byval_arg.data.typeHandle;
          uVar5 = SUB41(fVar41,0);
          uVar37 = (uint)fVar41 >> 8;
          cVar35 = (int)pCVar7 < 0;
          uVar6 = pCVar7 == (Component *)0x0;
          if (!(bool)uVar6) {
            pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (pCVar7,(MethodInfo *)0x0);
            uVar36 = CONCAT31((int3)(Quaternion *)&stack0xffffff63,0x10);
            euler_00.y = (float)CONCAT31((int3)uVar37,uVar5) * _UNK_? * _UNK_?;
            euler_00.x = fVar16;
            euler_00.z = 0.0;
            pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffff63,euler_00,(MethodInfo *)0x0);
            cVar35 = (int)pTVar8 < 0;
            uVar6 = pTVar8 == (Transform *)0x0;
            pOVar3 = (Object__Class *)0x0;
            if (!(bool)uVar6) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar8,*pQVar12,(MethodInfo *)0x0);
              uVar4 = func_?();
              *(undefined4 *)(uVar2 + 0xc) = uVar4;
              func_?();
              *(undefined4 *)(uVar2 + 8) = 2;
              return 1;
            }
          }
        }
      }
    }
    break;
  case 3:
    *(undefined4 *)(uVar2 + 8) = 0xffffffff;
  default:
    return 0;
  }
  cVar42 = '\0';
  cVar34 = '\0';
  func_?();
  iVar43 = func_?();
  if (!(bool)uVar6 && cVar42 == cVar35) {
    *(char *)(iVar43 + -0x80) = *(char *)(iVar43 + -0x80) + extraout_DH + cVar34;
    in_AF = 9 < ((byte)iVar43 & 0xf) | in_AF;
    uVar2 = CONCAT31((int3)((uint)iVar43 >> 8),(byte)iVar43 + in_AF * -6) & 0xffffff0f;
    cVar35 = (char)uVar2;
    pcVar44 = (char *)(CONCAT22((short)(uVar2 >> 0x10),
                               CONCAT11((char)((uint)iVar43 >> 8) - in_AF,cVar35)) + -0x33efc07e);
    *pcVar44 = *pcVar44 + cVar35 + in_AF;
    pcVar31 = (code *)swi(3);
    bVar32 = (*pcVar31)();
    return bVar32;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32,pOVar3,uVar2);
    cRam_? = '\x01';
  }
  iVar43 = *(int *)(uVar36 + 0x10);
  if (*(int *)(uVar36 + 8) == 0) {
    *(undefined4 *)(uVar36 + 8) = 0xffffffff;
    fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (iVar43 == 0) goto code_?;
    piVar21 = *(int **)(iVar43 + 0x14);
    *(float *)(iVar43 + 0x2c) = fVar16;
    if (piVar21 == (int *)0x0) goto code_?;
    pOVar3 = *(Object__Class **)(*piVar21 + 0x1cc);
    fVar45 = (float10)(**(code **)(*piVar21 + 0x1c8))(piVar21,pOVar3);
    *(float *)(uVar36 + 0x18) = (float)fVar45;
    fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(uVar36 + 8) != 1) {
      return 0;
    }
    *(undefined4 *)(uVar36 + 8) = 0xffffffff;
    fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (iVar43 == 0) goto code_?;
  }
  _uStack_ba = *(float *)(uVar36 + 0x18);
  fVar41 = *(float *)(uVar36 + 0x14);
  piVar21 = *(int **)(iVar43 + 0x14);
  if (*(float *)(iVar43 + 0x20) < fVar16 - *(float *)(iVar43 + 0x2c)) {
    if (piVar21 != (int *)0x0) {
      (**(code **)(*piVar21 + 0x1d0))
                (piVar21,(fVar41 - _uStack_ba) + _uStack_ba,*(undefined4 *)(*piVar21 + 0x1d4),pOVar3,
                 &stack0xffffffab);
      return 0;
    }
  }
  else {
    fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar16 = (fVar16 - *(float *)(iVar43 + 0x2c)) / *(float *)(iVar43 + 0x20);
    if (fVar16 < 0.0) {
      fVar16 = 0.0;
    }
    else if (_UNK_? < fVar16) {
      fVar16 = _UNK_?;
    }
    if (piVar21 != (int *)0x0) {
      (**(code **)(*piVar21 + 0x1d0))
                (piVar21,(fVar41 - _uStack_ba) * fVar16 + _uStack_ba,*(undefined4 *)(*piVar21 + 0x1d4)
                );
      uStack_40 = 0;
      uVar4 = func_?(TypeInfo__System__Int32,&uStack_40);
      *(undefined4 *)(uVar36 + 0xc) = uVar4;
      func_?(uVar36 + 0xc,uVar4);
      *(undefined4 *)(uVar36 + 8) = 1;
      return 1;
    }
  }
code_?:
  func_?();
  pcVar31 = (code *)swi(3);
  bVar32 = (*pcVar31)();
  return bVar32;
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

