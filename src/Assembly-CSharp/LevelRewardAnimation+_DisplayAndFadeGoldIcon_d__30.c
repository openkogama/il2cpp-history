
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeGoldIcon>d__30::
     LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30_MoveNext
               (LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30 *this,MethodInfo *method)

{
  pLVar1 = this;
  uVar2 = (undefined1)unaff_ESI;
  uVar3 = (undefined1)((uint)unaff_ESI >> 8);
  uVar4 = (undefined1)((uint)unaff_ESI >> 0x10);
  uVar5 = (undefined1)((uint)unaff_EDI >> 0x18);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pLVar6 = (this->fields).__4__this;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if ((pLVar6 != (LevelRewardAnimation *)0x0) &&
       (pIVar10 = (pLVar6->fields).goldImage, pIVar10 != (Image *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pIVar10,1,(MethodInfo *)0x0);
      this_00 = (pLVar6->fields).nextLevelBadge;
      if (this_00 != (RawImage *)0x0) {
        uVar2 = 0;
        uVar3 = 0;
        uVar4 = 0;
        uVar5 = (undefined1)((uint)this_00 >> 0x18);
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,0,(MethodInfo *)0x0);
        pAVar11 = (pLVar6->fields).goldBounceEffect;
        if (pAVar11 != (AnimationCurve *)0x0) {
          uVar7 = 0;
          uVar8 = 0;
          uVar9 = 0;
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar11,0.0,(MethodInfo *)0x0);
          pIVar10 = (pLVar6->fields).goldImage;
          if ((pIVar10 != (Image *)0x0) &&
             (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                  ((Graphic *)pIVar10,(MethodInfo *)0x0),
             pRVar13 != (RectTransform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_SetSizeWithCurrentAnchors
                      (pRVar13,RectTransform_Axis__Enum_Horizontal,
                       (float)(pLVar6->fields).targetSize * fVar12,(MethodInfo *)0x0);
            pIVar10 = (pLVar6->fields).goldImage;
            if ((pIVar10 != (Image *)0x0) &&
               (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                    ((Graphic *)pIVar10,(MethodInfo *)0x0),
               pRVar13 != (RectTransform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_SetSizeWithCurrentAnchors
                        (pRVar13,RectTransform_Axis__Enum_Vertical,
                         (float)(pLVar6->fields).targetSize * extraout_ECX,(MethodInfo *)0x0);
              pIVar10 = (pLVar6->fields).goldImage;
              if (pIVar10 != (Image *)0x0) {
                pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pIVar10,(MethodInfo *)0x0);
                uVar15 = uVar8;
                uVar16 = uVar7;
                uVar17 = CONCAT12(uVar15,uVar16);
                uVar18 = uVar9;
                uVar19 = CONCAT13(uVar18,uVar17);
                uVar20._4_4_ = (float)_UNK_?;
                uVar20 = CONCAT44(uVar20._4_4_,uVar19);
                this = (LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30 *)0x0;
                pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffffd0,(Vector3)CONCAT48(this,uVar20),
                                     (MethodInfo *)0x0);
                if (pTVar14 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (pTVar14,*pQVar21,(MethodInfo *)0x0);
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
    if (pLVar6 != (LevelRewardAnimation *)0x0) {
code_?:
      if (_UNK_? <= (pLVar1->fields)._currentTime_5__2 / (pLVar6->fields).rotateUIYAxisTime
         ) {
        pIVar10 = (pLVar6->fields).goldImage;
        if (pIVar10 != (Image *)0x0) {
          pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pIVar10,(MethodInfo *)0x0);
          uVar5 = 0;
          uVar2 = 0;
          uVar3 = 0;
          uVar4 = 0;
          euler_07.x._2_1_ = uVar8;
          euler_07.x._0_2_ = uVar7;
          euler_07.x._3_1_ = uVar9;
          euler_07.y._0_2_ = uVar7;
          euler_07.y._2_1_ = uVar8;
          euler_07.y._3_1_ = uVar9;
          euler_07.z = 0.0;
          pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                    Quaternion_Internal_FromEulerRad
                              ((Quaternion *)&stack0xffffffc0,euler_07,(MethodInfo *)0x0);
          if (pTVar14 != (Transform *)0x0) {
            fVar12 = pQVar21->z;
            uVar2 = SUB41(pTVar14,0);
            uVar3 = (undefined1)((uint)pTVar14 >> 8);
            uVar4 = (undefined1)((uint)pTVar14 >> 0x10);
            value_06.w._0_3_ = SUB43(pQVar21->w,0);
            value_06.z._3_1_ = (char)((uint)fVar12 >> 0x18);
            uVar5 = 0x10;
            value_06.y._2_1_ = (char)((uint)pQVar21->y >> 0x10);
            value_06._0_6_ = *(undefined6 *)pQVar21;
            value_06.y._3_1_ = (char)((uint)pQVar21->y >> 0x18);
            value_06.z._0_2_ = SUB42(fVar12,0);
            value_06.z._2_1_ = (char)((uint)fVar12 >> 0x10);
            value_06.w._3_1_ = (char)((uint)pQVar21->w >> 0x18);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar14,value_06,(MethodInfo *)0x0);
            pTVar22 = (pLVar6->fields).header;
            if ((pTVar22 != (Text *)0x0) &&
               (pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pTVar22,(MethodInfo *)0x0),
               pGVar23 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar23,1,(MethodInfo *)0x0);
              pTVar22 = (pLVar6->fields).header;
              TM::TM__(StringLiteral_REWARD_,(MethodInfo *)pTVar22);
              if (pTVar22 != (Text *)0x0) {
                (*(code *)(pTVar22->klass->vtable).set_text.method)();
                pTVar22 = (pLVar6->fields).goldText;
                if ((pTVar22 != (Text *)0x0) &&
                   (pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pTVar22,(MethodInfo *)0x0),
                   pGVar23 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar23,1,(MethodInfo *)0x0);
                  pCVar24 = (pLVar6->fields).claimButton;
                  if ((pCVar24 != (CanvasGroup *)0x0) &&
                     (pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pCVar24,(MethodInfo *)0x0),
                     pGVar23 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar23,1,(MethodInfo *)0x0);
                    pCVar24 = (pLVar6->fields).claimButton;
                    if (pCVar24 != (CanvasGroup *)0x0) {
                      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                                (pCVar24,0.0,(MethodInfo *)0x0);
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
      else {
        fVar12 = (pLVar1->fields)._currentTime_5__2;
        fVar25 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        (pLVar1->fields)._currentTime_5__2 = fVar25 + fVar12;
        pAVar11 = (pLVar6->fields).rotateUIYAxisIn;
        if (pAVar11 != (AnimationCurve *)0x0) {
          uVar5 = 0;
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar11,(fVar25 + fVar12) / (pLVar6->fields).rotateUIYAxisTime,
                              (MethodInfo *)0x0);
          pIVar10 = (pLVar6->fields).goldImage;
          if (pIVar10 != (Image *)0x0) {
            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pIVar10,(MethodInfo *)0x0);
            fVar12 = (fVar12 * _UNK_? - _UNK_?) * _UNK_?;
            euler_08.x._2_1_ = uVar8;
            euler_08.x._0_2_ = uVar7;
            uVar2 = SUB41((Quaternion *)&stack0xffffffc0,0);
            uVar3 = (undefined1)((uint)&stack0xffffffc0 >> 8);
            uVar4 = (undefined1)((uint)&stack0xffffffc0 >> 0x10);
            uVar5 = 0x10;
            euler_08.x._3_1_ = uVar9;
            euler_08.y._0_2_ = SUB42(fVar12,0);
            euler_08.y._2_1_ = (char)((uint)fVar12 >> 0x10);
            euler_08.y._3_1_ = (char)((uint)fVar12 >> 0x18);
            euler_08.z = 0.0;
            pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffffc0,euler_08,(MethodInfo *)0x0);
            pLVar6 = (LevelRewardAnimation *)0x0;
            if (pTVar14 != (Transform *)0x0) {
              value_07.y._0_3_ = SUB43(pQVar21->y,0);
              value_07.x._3_1_ = (char)((uint)pQVar21->x >> 0x18);
              value_07.z._0_3_ = SUB43(pQVar21->z,0);
              value_07.y._3_1_ = (char)((uint)pQVar21->y >> 0x18);
              value_07.w._0_3_ = SUB43(pQVar21->w,0);
              value_07.z._3_1_ = (char)((uint)pQVar21->z >> 0x18);
              value_07.x._0_3_ = SUB43(pQVar21->x,0);
              value_07.w._3_1_ = (char)((uint)pQVar21->w >> 0x18);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar14,value_07,(MethodInfo *)0x0);
              pOVar26 = (Object *)func_?();
              (pLVar1->fields).__2__current = pOVar26;
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
    if (pLVar6 != (LevelRewardAnimation *)0x0) {
code_?:
      if (_UNK_? <=
          (pLVar1->fields)._currentTime_5__2 / (pLVar6->fields).goldImageDisplayTime) {
        pAVar11 = (pLVar6->fields).goldBounceEffect;
        if (pAVar11 != (AnimationCurve *)0x0) {
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar11,1.0,(MethodInfo *)0x0);
          pCVar24 = (pLVar6->fields).claimButton;
          if (pCVar24 != (CanvasGroup *)0x0) {
            uVar2 = 0;
            uVar3 = 0;
            uVar4 = 0x80;
            uVar5 = (undefined1)((uint)pCVar24 >> 0x18);
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (pCVar24,1.0,(MethodInfo *)0x0);
            pIVar10 = (pLVar6->fields).goldImage;
            if ((pIVar10 != (Image *)0x0) &&
               (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                    ((Graphic *)pIVar10,(MethodInfo *)0x0),
               pRVar13 != (RectTransform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_SetSizeWithCurrentAnchors
                        (pRVar13,RectTransform_Axis__Enum_Horizontal,
                         (float)(pLVar6->fields).targetSize * fVar12,(MethodInfo *)0x0);
              pIVar10 = (pLVar6->fields).goldImage;
              if ((pIVar10 != (Image *)0x0) &&
                 (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      ((Graphic *)pIVar10,(MethodInfo *)0x0),
                 pRVar13 != (RectTransform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar13,RectTransform_Axis__Enum_Vertical,
                           (float)(pLVar6->fields).targetSize * fVar12,(MethodInfo *)0x0);
                pOVar26 = (Object *)func_?();
                (pLVar1->fields).__2__current = pOVar26;
                func_?();
                (pLVar1->fields).__1__state = 3;
                return 1;
              }
            }
          }
        }
      }
      else {
        fVar12 = (pLVar1->fields)._currentTime_5__2;
        fVar25 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        (pLVar1->fields)._currentTime_5__2 = fVar25 + fVar12;
        pAVar11 = (pLVar6->fields).goldBounceEffect;
        if (pAVar11 != (AnimationCurve *)0x0) {
          uVar5 = 0;
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar11,(fVar25 + fVar12) / (pLVar6->fields).goldImageDisplayTime,
                              (MethodInfo *)0x0);
          pIVar10 = (pLVar6->fields).goldImage;
          if (pIVar10 != (Image *)0x0) {
            uVar2 = 0xa5;
            uVar3 = 0x74;
            uVar4 = 0x3f;
            pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar10,(MethodInfo *)0x0);
            if (pRVar13 != (RectTransform *)0x0) {
              uVar2 = 0xcd;
              uVar3 = 0x74;
              uVar4 = 0x3f;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_SetSizeWithCurrentAnchors
                        (pRVar13,RectTransform_Axis__Enum_Horizontal,
                         (float)(pLVar6->fields).targetSize * fVar12,(MethodInfo *)0x0);
              pIVar10 = (pLVar6->fields).goldImage;
              if ((pIVar10 != (Image *)0x0) &&
                 (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      ((Graphic *)pIVar10,(MethodInfo *)0x0),
                 pRVar13 != (RectTransform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar13,RectTransform_Axis__Enum_Vertical,
                           (float)(pLVar6->fields).targetSize * fVar12,(MethodInfo *)0x0);
                pAVar11 = (pLVar6->fields).goldFadeInCurve;
                if (pAVar11 != (AnimationCurve *)0x0) {
                  pCVar24 = (CanvasGroup *)
                            ((pLVar1->fields)._currentTime_5__2 /
                            (pLVar6->fields).goldImageDisplayTime);
                  fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                           AnimationCurve_Evaluate(pAVar11,(float)pCVar24,(MethodInfo *)0x0);
                  if (pCVar24 != (CanvasGroup *)0x0) {
                    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                              (pCVar24,fVar12,(MethodInfo *)0x0);
                    pOVar26 = (Object *)func_?();
                    (pLVar1->fields).__2__current = pOVar26;
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
    break;
  case 3:
    (this->fields).__1__state = -1;
  default:
    return 0;
  }
  cVar27 = '\0';
  func_?();
  pcVar28 = (char *)((int)&pLVar1[0x15602a4].fields.__4__this + 1);
  *pcVar28 = *pcVar28 + extraout_DH + cVar27;
  if (*pcVar28 != '\0') {
    pcVar29 = (code *)swi(3);
    bVar30 = (*pcVar29)();
    return bVar30;
  }
  uVar31 = CONCAT31((int3)pLVar6,(char)((uint)pLVar1 >> 0x18));
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  iVar32 = CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar5)));
  pOVar33 = *(Object__Class **)(iVar32 + 0x10);
  uVar34 = 0;
  uVar9 = 0;
  uVar8 = 0;
  switch(*(undefined4 *)(iVar32 + 8)) {
  case 0:
    *(undefined4 *)(iVar32 + 8) = 0xffffffff;
    if ((pOVar33 != (Object__Class *)0x0) &&
       (pCVar35 = *(Component **)&(pOVar33->_0).this_arg.attrs, pCVar35 != (Component *)0x0)) {
      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (pCVar35,(MethodInfo *)0x0);
      uVar5 = SUB41(pTVar14,0);
      uVar7 = (undefined2)((uint)pTVar14 >> 8);
      uVar2 = (undefined1)((uint)pTVar14 >> 0x18);
      uVar36 = (undefined3)((uint)uVar34 >> 8);
      uVar31 = 0;
      euler_03._3_4_ = (int)(CONCAT44(_UNK_?,CONCAT13(uVar8,uVar36)) >> 0x18);
      euler_03.x._0_3_ = uVar36;
      euler_03._7_4_ = _UNK_? >> 0x18;
      euler_03.z._3_1_ = 0;
      pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffff83,euler_03,(MethodInfo *)0x0);
      uVar36 = CONCAT21(uVar7,uVar5);
      if (CONCAT13(uVar2,uVar36) != 0) {
        uVar34 = CONCAT31(SUB43(pQVar21->z,0),(char)((uint)pQVar21->y >> 0x18));
        uVar37._1_3_ = SUB43(pQVar21->w,0);
        uVar37._0_1_ = (char)((uint)pQVar21->z >> 0x18);
        uVar31 = CONCAT31(uVar36,0x10);
        value_01.y._1_2_ = (short)((uint)pQVar21->y >> 8);
        value_01._0_5_ = *(undefined5 *)pQVar21;
        value_01._7_4_ = uVar34;
        value_01._11_4_ = uVar37;
        value_01.w._3_1_ = (char)((uint)pQVar21->w >> 0x18);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  ((Transform *)CONCAT13(uVar2,uVar36),value_01,(MethodInfo *)0x0);
        uVar9 = (undefined1)uVar37;
        pBVar38 = *(Behaviour **)&(pOVar33->_0).this_arg.attrs;
        if (pBVar38 != (Behaviour *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    (pBVar38,1,(MethodInfo *)0x0);
          pBVar38 = (Behaviour *)(pOVar33->_0).byval_arg.data.typeHandle;
          if (pBVar38 != (Behaviour *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      (pBVar38,0,(MethodInfo *)0x0);
            pIVar39 = (pOVar33->_0).castClass;
            if (pIVar39 != (Il2CppClass *)0x0) {
              fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                       AnimationCurve_Evaluate((AnimationCurve *)pIVar39,0.0,(MethodInfo *)0x0);
              pGVar40 = *(Graphic **)&(pOVar33->_0).this_arg.attrs;
              uVar8 = SUB41(fVar12,0);
              uVar7 = (undefined2)((uint)fVar12 >> 8);
              uVar41 = (undefined1)((uint)fVar12 >> 0x18);
              if ((pGVar40 != (Graphic *)0x0) &&
                 (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      (pGVar40,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0))
              {
                uVar5 = SUB41(pRVar13,0);
                uVar2 = (undefined1)((uint)pRVar13 >> 8);
                uVar3 = (undefined1)((uint)pRVar13 >> 0x10);
                uVar4 = (undefined1)((uint)pRVar13 >> 0x18);
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar13,RectTransform_Axis__Enum_Horizontal,
                           (float)(int)pOVar33->interfaceOffsets *
                           (float)CONCAT13(uVar41,CONCAT21(uVar7,uVar8)),(MethodInfo *)0x0);
                pGVar40 = *(Graphic **)&(pOVar33->_0).this_arg.attrs;
                if ((pGVar40 != (Graphic *)0x0) &&
                   (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                              Graphic_get_rectTransform(pGVar40,(MethodInfo *)0x0),
                   pRVar13 != (RectTransform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_SetSizeWithCurrentAnchors
                            (pRVar13,RectTransform_Axis__Enum_Vertical,
                             (float)(int)pOVar33->interfaceOffsets *
                             (float)CONCAT13(uVar41,CONCAT21(uVar7,uVar8)),(MethodInfo *)0x0);
                  *(undefined4 *)(iVar32 + 0x14) = 0;
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
    *(undefined4 *)(iVar32 + 8) = 0xffffffff;
    if (pOVar33 != (Object__Class *)0x0) {
code_?:
      if (_UNK_? <= *(float *)(iVar32 + 0x14) / (float)(pOVar33->_0).fields) {
        pBVar38 = (Behaviour *)(pOVar33->_0).implementedInterfaces;
        if (pBVar38 != (Behaviour *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    (pBVar38,1,(MethodInfo *)0x0);
          pEVar42 = (pOVar33->_0).events;
          if (pEVar42 != (EventInfo *)0x0) {
            uVar31 = CONCAT31((int3)pEVar42,0x10);
            pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pEVar42,(MethodInfo *)0x0);
            if (pGVar23 != (GameObject *)0x0) {
              uVar31 = CONCAT31(0x3f79fc,(char)uVar31);
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar23,1,(MethodInfo *)0x0);
              pEVar42 = (pOVar33->_0).events;
              uVar8 = 0;
              uVar34 = 0;
              uVar9 = SUB41(pEVar42,0);
              uVar41 = (undefined1)((uint)pEVar42 >> 8);
              uVar43 = (undefined1)((uint)pEVar42 >> 0x10);
              uVar44 = (undefined1)((uint)pEVar42 >> 0x18);
              TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
              piVar45 = (int *)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar41,uVar9)));
              if (piVar45 != (int *)0x0) {
                (**(code **)(*piVar45 + 0x318))();
                pCVar35 = *(Component **)&(pOVar33->_0).this_arg.attrs;
                if (pCVar35 != (Component *)0x0) {
                  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform(pCVar35,(MethodInfo *)0x0);
                  uVar9 = SUB41(pTVar14,0);
                  uVar41 = (undefined1)((uint)pTVar14 >> 8);
                  uVar43 = (undefined1)((uint)pTVar14 >> 0x10);
                  uVar44 = (undefined1)((uint)pTVar14 >> 0x18);
                  uVar34 = CONCAT13(uVar8,(int3)((uint)uVar34 >> 8));
                  euler_02.y = (float)uVar34;
                  euler_02.x = (float)uVar34;
                  euler_02.z = 0.0;
                  pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad
                                      ((Quaternion *)&stack0xffffff83,euler_02,(MethodInfo *)0x0);
                  pTVar14 = (Transform *)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar41,uVar9)));
                  if (pTVar14 != (Transform *)0x0) {
                    value.w._1_2_ = (short)((uint)pQVar21->w >> 8);
                    value._0_13_ = *(undefined1 (*) [13])pQVar21;
                    value.w._3_1_ = (char)((uint)pQVar21->w >> 0x18);
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar14,value,(MethodInfo *)0x0);
                    *(undefined4 *)(iVar32 + 0x14) = 0;
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar37 = *(undefined4 *)(iVar32 + 0x14);
        uVar5 = (undefined1)uVar37;
        uVar7 = (undefined2)((uint)uVar37 >> 8);
        uVar2 = (undefined1)((uint)uVar37 >> 0x18);
        fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar12 = fVar12 + (float)CONCAT13(uVar2,CONCAT21(uVar7,uVar5));
        *(float *)(iVar32 + 0x14) = fVar12;
        this_01 = (pOVar33->_0).interopData;
        if (this_01 != (Il2CppInteropData *)0x0) {
          uVar31 = uVar31 & 0xffffff00;
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)this_01,fVar12 / (float)(pOVar33->_0).fields,
                              (MethodInfo *)0x0);
          pCVar35 = *(Component **)&(pOVar33->_0).this_arg.attrs;
          uVar5 = SUB41(fVar12,0);
          uVar7 = (undefined2)((uint)fVar12 >> 8);
          uVar2 = (undefined1)((uint)fVar12 >> 0x18);
          if (pCVar35 != (Component *)0x0) {
            uVar36 = (undefined3)((uint)uVar34 >> 8);
            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (pCVar35,(MethodInfo *)0x0);
            fVar12 = ((float)CONCAT13(uVar2,CONCAT21(uVar7,uVar5)) * _UNK_? -
                     _UNK_?) * _UNK_?;
            uVar31 = CONCAT31((int3)(Quaternion *)&stack0xffffff73,0x10);
            euler_05.x._3_1_ = uVar9;
            euler_05.x._0_3_ = uVar36;
            euler_05.y._0_1_ = SUB41(fVar12,0);
            euler_05.y._1_2_ = (short)((uint)fVar12 >> 8);
            euler_05._7_4_ = (uint)fVar12 >> 0x18;
            euler_05.z._3_1_ = 0;
            pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffff73,euler_05,(MethodInfo *)0x0);
            pOVar33 = (Object__Class *)0x0;
            if (pTVar14 != (Transform *)0x0) {
              fVar12 = pQVar21->z;
              fVar25 = pQVar21->w;
              value_03.y._1_2_ = (short)((uint)pQVar21->y >> 8);
              value_03._0_5_ = *(undefined5 *)pQVar21;
              value_03.y._3_1_ = (char)((uint)pQVar21->y >> 0x18);
              value_03.z._0_1_ = SUB41(fVar12,0);
              value_03.z._1_2_ = (short)((uint)fVar12 >> 8);
              value_03.z._3_1_ = (char)((uint)fVar12 >> 0x18);
              value_03.w._0_1_ = SUB41(fVar25,0);
              value_03.w._1_1_ = (char)((uint)fVar25 >> 8);
              value_03.w._2_1_ = (char)((uint)fVar25 >> 0x10);
              value_03.w._3_1_ = (char)((uint)fVar25 >> 0x18);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar14,value_03,(MethodInfo *)0x0);
              uVar34 = func_?();
              *(undefined4 *)(iVar32 + 0xc) = uVar34;
              func_?();
              *(undefined4 *)(iVar32 + 8) = 1;
              return 1;
            }
          }
        }
      }
    }
    break;
  case 2:
    *(undefined4 *)(iVar32 + 8) = 0xffffffff;
    if (pOVar33 != (Object__Class *)0x0) {
code_?:
      if (_UNK_? <= *(float *)(iVar32 + 0x14) / (float)(pOVar33->_0).element_class) {
        pIVar39 = (pOVar33->_0).castClass;
        if (pIVar39 != (Il2CppClass *)0x0) {
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)pIVar39,1.0,(MethodInfo *)0x0);
          pGVar40 = *(Graphic **)&(pOVar33->_0).this_arg.attrs;
          uVar8 = SUB41(fVar12,0);
          uVar7 = (undefined2)((uint)fVar12 >> 8);
          uVar41 = (undefined1)((uint)fVar12 >> 0x18);
          if (pGVar40 != (Graphic *)0x0) {
            uVar31 = CONCAT31((int3)pGVar40,0x10);
            pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar40,(MethodInfo *)0x0);
            if (pRVar13 != (RectTransform *)0x0) {
              uVar9 = 0;
              uVar34 = 0;
              uVar31 = CONCAT31((int3)pRVar13,0x10);
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_SetSizeWithCurrentAnchors
                        (pRVar13,RectTransform_Axis__Enum_Horizontal,
                         (float)(int)pOVar33->interfaceOffsets *
                         (float)CONCAT13(uVar41,CONCAT21(uVar7,uVar8)),(MethodInfo *)0x0);
              pGVar40 = *(Graphic **)&(pOVar33->_0).this_arg.attrs;
              if ((pGVar40 != (Graphic *)0x0) &&
                 (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      (pGVar40,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0))
              {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar13,RectTransform_Axis__Enum_Vertical,
                           (float)(int)pOVar33->interfaceOffsets *
                           (float)CONCAT13(uVar41,CONCAT21(uVar7,uVar8)),(MethodInfo *)0x0);
                pEVar42 = (pOVar33->_0).events;
                if ((pEVar42 != (EventInfo *)0x0) &&
                   (pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pEVar42,(MethodInfo *)0x0),
                   pGVar23 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar23,0,(MethodInfo *)0x0);
                  *(undefined4 *)(iVar32 + 0x14) = 0;
                  goto code_?;
                }
              }
            }
          }
        }
      }
      else {
        uVar34 = *(undefined4 *)(iVar32 + 0x14);
        uVar5 = (undefined1)uVar34;
        uVar2 = (undefined1)((uint)uVar34 >> 8);
        uVar3 = (undefined1)((uint)uVar34 >> 0x10);
        uVar4 = (undefined1)((uint)uVar34 >> 0x18);
        fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar12 = fVar12 + (float)CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar5)));
        *(float *)(iVar32 + 0x14) = fVar12;
        pIVar39 = (pOVar33->_0).castClass;
        if (pIVar39 != (Il2CppClass *)0x0) {
          uVar31 = uVar31 & 0xffffff00;
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)pIVar39,fVar12 / (float)(pOVar33->_0).element_class,
                              (MethodInfo *)0x0);
          pGVar40 = *(Graphic **)&(pOVar33->_0).this_arg.attrs;
          uVar5 = SUB41(fVar12,0);
          uVar7 = (undefined2)((uint)fVar12 >> 8);
          uVar2 = (undefined1)((uint)fVar12 >> 0x18);
          if (pGVar40 != (Graphic *)0x0) {
            uVar31 = CONCAT31(0x3f7b2c,(char)uVar31);
            pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar40,(MethodInfo *)0x0);
            if (pRVar13 != (RectTransform *)0x0) {
              uVar31 = CONCAT31(0x3f7b54,(char)uVar31);
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_SetSizeWithCurrentAnchors
                        (pRVar13,RectTransform_Axis__Enum_Horizontal,
                         (float)(int)pOVar33->interfaceOffsets *
                         (float)CONCAT13(uVar2,CONCAT21(uVar7,uVar5)),(MethodInfo *)0x0);
              pGVar40 = *(Graphic **)&(pOVar33->_0).this_arg.attrs;
              if ((pGVar40 != (Graphic *)0x0) &&
                 (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      (pGVar40,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0))
              {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar13,RectTransform_Axis__Enum_Vertical,
                           (float)(int)pOVar33->interfaceOffsets *
                           (float)CONCAT13(uVar2,CONCAT21(uVar7,uVar5)),(MethodInfo *)0x0);
                pAVar11 = (AnimationCurve *)(pOVar33->_0).nestedTypes;
                if (pAVar11 != (AnimationCurve *)0x0) {
                  fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                           AnimationCurve_Evaluate
                                     (pAVar11,*(float *)(iVar32 + 0x14) /
                                             (float)(pOVar33->_0).element_class,(MethodInfo *)0x0);
                  pCVar35 = (Component *)(pOVar33->_0).implementedInterfaces;
                  uVar5 = SUB41(fVar12,0);
                  uVar2 = (undefined1)((uint)fVar12 >> 8);
                  uVar3 = (undefined1)((uint)fVar12 >> 0x10);
                  uVar4 = (undefined1)((uint)fVar12 >> 0x18);
                  if (pCVar35 != (Component *)0x0) {
                    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform(pCVar35,(MethodInfo *)0x0);
                    if (pTVar14 != (Transform *)0x0) {
                      value_05.x._2_1_ = uVar3;
                      value_05.x._0_2_ = CONCAT11(uVar2,uVar5);
                      value_05.x._3_1_ = uVar4;
                      value_05.y._0_1_ = uVar5;
                      value_05.y._1_2_ = (short)(CONCAT12(uVar3,CONCAT11(uVar2,uVar5)) >> 8);
                      value_05.y._3_1_ = uVar4;
                      value_05.z._0_1_ = 0;
                      value_05.z._1_2_ = 0x8000;
                      value_05.z._3_1_ = 0x3f;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                                (pTVar14,value_05,(MethodInfo *)0x0);
                      uVar34 = func_?();
                      *(undefined4 *)(iVar32 + 0xc) = uVar34;
                      func_?();
                      *(undefined4 *)(iVar32 + 8) = 2;
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
    *(undefined4 *)(iVar32 + 8) = 0xffffffff;
    if (pOVar33 != (Object__Class *)0x0) {
code_?:
      if (_UNK_? <= *(float *)(iVar32 + 0x14) / (float)(pOVar33->_0).fields) {
        pCVar35 = *(Component **)&(pOVar33->_0).this_arg.attrs;
        if (pCVar35 != (Component *)0x0) {
          pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (pCVar35,(MethodInfo *)0x0);
          uVar36 = (undefined3)((uint)uVar34 >> 8);
          uVar31 = 0;
          euler_04._3_4_ = (int)(CONCAT44(_UNK_?,CONCAT13(uVar9,uVar36)) >> 0x18);
          euler_04.x._0_3_ = uVar36;
          euler_04._7_4_ = _UNK_? >> 0x18;
          euler_04.z._3_1_ = 0;
          pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                    Quaternion_Internal_FromEulerRad
                              ((Quaternion *)&stack0xffffff73,euler_04,(MethodInfo *)0x0);
          iVar32 = 0;
          if (pTVar14 != (Transform *)0x0) {
            value_02.z._0_3_ = SUB43(pQVar21->z,0);
            value_02.y._3_1_ = (char)((uint)pQVar21->y >> 0x18);
            value_02.w._0_3_ = SUB43(pQVar21->w,0);
            value_02.z._3_1_ = (char)((uint)pQVar21->z >> 0x18);
            value_02.y._1_2_ = (short)((uint)pQVar21->y >> 8);
            value_02._0_5_ = *(undefined5 *)pQVar21;
            value_02.w._3_1_ = (char)((uint)pQVar21->w >> 0x18);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar14,value_02,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            uVar8 = SUB41(TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30,0);
            uVar7 = (undefined2)
                     ((uint)TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30 >> 8);
            uVar9 = (undefined1)
                     ((uint)TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30 >> 0x18);
            pOVar26 = (Object *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      (pOVar26,ExceptionArgument__Enum_obj,
                       (MethodInfo *)CONCAT13(uVar9,CONCAT21(uVar7,uVar8)));
            pOVar26[1].klass = (Object__Class *)0x0;
            pOVar26[2].klass = pOVar33;
            func_?();
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_StartCoroutine_Auto
                      ((MonoBehaviour *)pOVar33,(IEnumerator *)pOVar26,(MethodInfo *)0x0);
            uVar34 = func_?();
            iVar32 = CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar5)));
            *(undefined4 *)(iVar32 + 0xc) = uVar34;
            func_?();
            *(undefined4 *)(iVar32 + 8) = 4;
            return 1;
          }
        }
      }
      else {
        uVar37 = *(undefined4 *)(iVar32 + 0x14);
        uVar5 = (undefined1)uVar37;
        uVar7 = (undefined2)((uint)uVar37 >> 8);
        uVar2 = (undefined1)((uint)uVar37 >> 0x18);
        fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar12 = fVar12 + (float)CONCAT13(uVar2,CONCAT21(uVar7,uVar5));
        *(float *)(iVar32 + 0x14) = fVar12;
        pIVar39 = (pOVar33->_0).klass;
        if (pIVar39 != (Il2CppClass *)0x0) {
          uVar31 = uVar31 & 0xffffff00;
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)pIVar39,fVar12 / (float)(pOVar33->_0).fields,
                              (MethodInfo *)0x0);
          pCVar35 = *(Component **)&(pOVar33->_0).this_arg.attrs;
          uVar5 = SUB41(fVar12,0);
          uVar7 = (undefined2)((uint)fVar12 >> 8);
          uVar2 = (undefined1)((uint)fVar12 >> 0x18);
          if (pCVar35 != (Component *)0x0) {
            uVar36 = (undefined3)((uint)uVar34 >> 8);
            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (pCVar35,(MethodInfo *)0x0);
            fVar12 = (float)CONCAT13(uVar2,CONCAT21(uVar7,uVar5)) * _UNK_? * _UNK_?
            ;
            uVar31 = CONCAT31((int3)(Quaternion *)&stack0xffffff73,0x10);
            euler_06.x._3_1_ = uVar9;
            euler_06.x._0_3_ = uVar36;
            euler_06.y._0_1_ = SUB41(fVar12,0);
            euler_06.y._1_2_ = (short)((uint)fVar12 >> 8);
            euler_06._7_4_ = (uint)fVar12 >> 0x18;
            euler_06.z._3_1_ = 0;
            pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffff73,euler_06,(MethodInfo *)0x0);
            pOVar33 = (Object__Class *)0x0;
            if (pTVar14 != (Transform *)0x0) {
              fVar12 = pQVar21->z;
              fVar25 = pQVar21->w;
              value_04.y._1_2_ = (short)((uint)pQVar21->y >> 8);
              value_04._0_5_ = *(undefined5 *)pQVar21;
              value_04.y._3_1_ = (char)((uint)pQVar21->y >> 0x18);
              value_04.z._0_1_ = SUB41(fVar12,0);
              value_04.z._1_2_ = (short)((uint)fVar12 >> 8);
              value_04.z._3_1_ = (char)((uint)fVar12 >> 0x18);
              value_04.w._0_1_ = SUB41(fVar25,0);
              value_04.w._1_1_ = (char)((uint)fVar25 >> 8);
              value_04.w._2_1_ = (char)((uint)fVar25 >> 0x10);
              value_04.w._3_1_ = (char)((uint)fVar25 >> 0x18);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar14,value_04,(MethodInfo *)0x0);
              uVar34 = func_?();
              *(undefined4 *)(iVar32 + 0xc) = uVar34;
              func_?();
              *(undefined4 *)(iVar32 + 8) = 3;
              return 1;
            }
          }
        }
      }
    }
    break;
  case 4:
    *(undefined4 *)(iVar32 + 8) = 0xffffffff;
  default:
    return 0;
  }
  bVar46 = false;
  func_?();
  if (!bVar46 && extraout_EDX + 1 != 0) {
code_?:
    func_?();
    pcVar29 = (code *)swi(3);
    bVar30 = (*pcVar29)();
    return bVar30;
  }
  piVar47 = &pOVar33[-0x677d63]._1.native_size;
  bVar48 = (byte)(extraout_EDX + 1);
  bVar49 = (char)*piVar47 + bVar48;
  bVar50 = CARRY1((byte)*piVar47,bVar48) || CARRY1(bVar49,bVar46);
  *(byte *)piVar47 = bVar49 + bVar46;
  if ((POPCOUNT((char)*piVar47) & 1U) == 0) goto code_?;
  bVar51 = (byte)&stack0xffffffab;
  bVar49 = *extraout_ECX_00;
  bVar48 = *extraout_ECX_00 + bVar51;
  bVar46 = CARRY1(*extraout_ECX_00,bVar51) || CARRY1(bVar48,bVar50);
  *extraout_ECX_00 = bVar48 + bVar50;
  if ((SCARRY1(bVar49,bVar51) != SCARRY1(bVar48,bVar50)) != (char)*extraout_ECX_00 < '\0') {
    bVar49 = *extraout_ECX_00;
    cVar52 = (char)((uint)extraout_ECX_00 >> 8);
    cVar27 = *extraout_ECX_00 + cVar52;
    *extraout_ECX_00 = cVar27 + bVar46;
    if (*extraout_ECX_00 != 0 &&
        (SCARRY1(bVar49,cVar52) != SCARRY1(cVar27,bVar46)) == (char)*extraout_ECX_00 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar29 = (code *)swi(3);
    bVar30 = (*pcVar29)();
    return bVar30;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32,pOVar33,iVar32);
    cRam_? = '\x01';
  }
  pOVar33 = *(Object__Class **)(uVar31 + 0x10);
  fVar12 = 0.0;
  uVar53 = uVar31;
  switch(*(undefined4 *)(uVar31 + 8)) {
  case 0:
    *(undefined4 *)(uVar31 + 8) = 0xffffffff;
    if ((pOVar33 == (Object__Class *)0x0) ||
       (pGVar40 = (Graphic *)(pOVar33->_0).byval_arg.data.typeHandle, pGVar40 == (Graphic *)0x0))
    goto code_?;
    pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        (pGVar40,(MethodInfo *)0x0);
    if (pRVar13 == (RectTransform *)0x0) goto code_?;
    value_08.y = (float)(int)pOVar33->interfaceOffsets;
    value_08.x = (float)(int)pOVar33->interfaceOffsets;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (pRVar13,value_08,(MethodInfo *)0x0);
    pCVar35 = (Component *)(pOVar33->_0).byval_arg.data.typeHandle;
    if (pCVar35 == (Component *)0x0) goto code_?;
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar35,(MethodInfo *)0x0);
    uVar5 = SUB41(pTVar14,0);
    uVar36 = (undefined3)((uint)pTVar14 >> 8);
    euler_01.y = (float)pCVar35;
    euler_01.x = (float)pCVar35;
    euler_01.z = 0.0;
    pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&stack0xffffff2e,euler_01,(MethodInfo *)0x0);
    if ((Transform *)CONCAT31(uVar36,uVar5) == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              ((Transform *)CONCAT31(uVar36,uVar5),*pQVar21,(MethodInfo *)0x0);
    pBVar38 = (Behaviour *)(pOVar33->_0).byval_arg.data.typeHandle;
    if (pBVar38 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar38,1,(MethodInfo *)0x0);
    pCVar35 = (Component *)(pOVar33->_0).implementedInterfaces;
    if ((pCVar35 == (Component *)0x0) ||
       (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar35,(MethodInfo *)0x0), pTVar14 == (Transform *)0x0))
    goto code_?;
    value_00.z = 1.0;
    value_00.x = 1.0;
    value_00.y = 1.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar14,value_00,(MethodInfo *)0x0);
    pBVar38 = (Behaviour *)(pOVar33->_0).implementedInterfaces;
    if (pBVar38 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar38,0,(MethodInfo *)0x0);
    this_02 = (pOVar33->_0).properties;
    if ((this_02 == (PropertyInfo *)0x0) ||
       (pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_02,(MethodInfo *)0x0), pGVar23 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar23,0,(MethodInfo *)0x0);
    pCVar35 = (Component *)(pOVar33->_0).methods;
    if ((pCVar35 == (Component *)0x0) ||
       (pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (pCVar35,(MethodInfo *)0x0), pGVar23 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar23,0,(MethodInfo *)0x0);
    pIVar39 = (pOVar33->_0).declaringType;
    if (pIVar39 == (Il2CppClass *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar39,0,(MethodInfo *)0x0);
    pEVar42 = (pOVar33->_0).events;
    if ((pEVar42 == (EventInfo *)0x0) ||
       (pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pEVar42,(MethodInfo *)0x0), pGVar23 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar23,0,(MethodInfo *)0x0);
    *(undefined4 *)(uVar31 + 0x14) = 0;
    break;
  case 1:
    *(undefined4 *)(uVar31 + 8) = 0xffffffff;
    if (pOVar33 == (Object__Class *)0x0) goto code_?;
    break;
  case 2:
    *(undefined4 *)(uVar31 + 8) = 0xffffffff;
    if (pOVar33 == (Object__Class *)0x0) goto code_?;
    goto code_?;
  case 3:
    *(undefined4 *)(uVar31 + 8) = 0xffffffff;
  default:
    return 0;
  }
  if (_UNK_? <= *(float *)(uVar31 + 0x14) / *(float *)&(pOVar33->_0).byval_arg.attrs) {
    pAVar11 = (AnimationCurve *)(pOVar33->_0).this_arg.data.typeHandle;
    if (pAVar11 != (AnimationCurve *)0x0) {
      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar11,1.0,(MethodInfo *)0x0);
      pGVar40 = (Graphic *)(pOVar33->_0).byval_arg.data.typeHandle;
      uVar5 = SUB41(fVar12,0);
      uVar36 = (undefined3)((uint)fVar12 >> 8);
      if (pGVar40 != (Graphic *)0x0) {
        pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            (pGVar40,(MethodInfo *)0x0);
        if (pRVar13 != (RectTransform *)0x0) {
          fVar12 = 0.0;
          value_09.y = (float)(int)pOVar33->interfaceOffsets * (float)CONCAT31(uVar36,uVar5);
          value_09.x = (float)(int)pOVar33->interfaceOffsets * (float)CONCAT31(uVar36,uVar5);
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar13,value_09,(MethodInfo *)0x0);
          *(undefined4 *)(uVar31 + 0x14) = 0;
code_?:
          if (_UNK_? <= *(float *)(uVar31 + 0x14) / (float)(pOVar33->_0).fields) {
            pCVar35 = (Component *)(pOVar33->_0).byval_arg.data.typeHandle;
            if (pCVar35 != (Component *)0x0) {
              pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  (pCVar35,(MethodInfo *)0x0);
              euler.y = (float)_UNK_?;
              euler.x = fVar12;
              euler.z = 0.0;
              pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                        Quaternion_Internal_FromEulerRad
                                  ((Quaternion *)&stack0xffffff16,euler,(MethodInfo *)0x0);
              if (pTVar14 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                          (pTVar14,*pQVar21,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                method_00 = TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29;
                pOVar26 = (Object *)func_?();
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          (pOVar26,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                pOVar26[1].klass = (Object__Class *)0x0;
                pOVar26[2].klass = pOVar33;
                func_?();
                UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                MonoBehaviour_StartCoroutine_Auto
                          ((MonoBehaviour *)pOVar33,(IEnumerator *)pOVar26,(MethodInfo *)0x0);
                uVar34 = func_?();
                *(undefined4 *)(uVar53 + 0xc) = uVar34;
                func_?();
                *(undefined4 *)(uVar53 + 8) = 3;
                return 1;
              }
            }
          }
          else {
            uVar5 = (undefined1)*(undefined4 *)(uVar31 + 0x14);
            uVar36 = (undefined3)((uint)*(undefined4 *)(uVar31 + 0x14) >> 8);
            fVar25 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            fVar25 = fVar25 + (float)CONCAT31(uVar36,uVar5);
            *(float *)(uVar31 + 0x14) = fVar25;
            pIVar39 = (pOVar33->_0).klass;
            if (pIVar39 != (Il2CppClass *)0x0) {
              fVar25 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                       AnimationCurve_Evaluate
                                 ((AnimationCurve *)pIVar39,fVar25 / (float)(pOVar33->_0).fields,
                                  (MethodInfo *)0x0);
              pCVar35 = (Component *)(pOVar33->_0).byval_arg.data.typeHandle;
              uVar5 = SUB41(fVar25,0);
              uVar53 = (uint)fVar25 >> 8;
              if (pCVar35 != (Component *)0x0) {
                pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform(pCVar35,(MethodInfo *)0x0);
                euler_00.y = (float)CONCAT31((int3)uVar53,uVar5) * _UNK_? * _UNK_?;
                euler_00.x = fVar12;
                euler_00.z = 0.0;
                pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffff16,euler_00,(MethodInfo *)0x0);
                pOVar33 = (Object__Class *)0x0;
                if (pTVar14 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (pTVar14,*pQVar21,(MethodInfo *)0x0);
                  uVar34 = func_?();
                  *(undefined4 *)(uVar31 + 0xc) = uVar34;
                  func_?();
                  *(undefined4 *)(uVar31 + 8) = 2;
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
    uVar5 = (undefined1)*(undefined4 *)(uVar31 + 0x14);
    uVar36 = (undefined3)((uint)*(undefined4 *)(uVar31 + 0x14) >> 8);
    fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar12 = fVar12 + (float)CONCAT31(uVar36,uVar5);
    *(float *)(uVar31 + 0x14) = fVar12;
    pAVar11 = (AnimationCurve *)(pOVar33->_0).this_arg.data.typeHandle;
    if (pAVar11 != (AnimationCurve *)0x0) {
      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar11,fVar12 / *(float *)&(pOVar33->_0).byval_arg.attrs,(MethodInfo *)0x0
                         );
      pGVar40 = (Graphic *)(pOVar33->_0).byval_arg.data.typeHandle;
      uVar5 = SUB41(fVar12,0);
      uVar36 = (undefined3)((uint)fVar12 >> 8);
      if ((pGVar40 != (Graphic *)0x0) &&
         (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              (pGVar40,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
        RectTransform_SetSizeWithCurrentAnchors
                  (pRVar13,RectTransform_Axis__Enum_Horizontal,
                   (float)(int)pOVar33->interfaceOffsets * (float)CONCAT31(uVar36,uVar5),
                   (MethodInfo *)0x0);
        pGVar40 = (Graphic *)(pOVar33->_0).byval_arg.data.typeHandle;
        if ((pGVar40 != (Graphic *)0x0) &&
           (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar40,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
          RectTransform_SetSizeWithCurrentAnchors
                    (pRVar13,RectTransform_Axis__Enum_Vertical,
                     (float)(int)pOVar33->interfaceOffsets * (float)CONCAT31(uVar36,uVar5),
                     (MethodInfo *)0x0);
          uVar34 = func_?();
          *(undefined4 *)(uVar31 + 0xc) = uVar34;
          func_?();
          *(undefined4 *)(uVar31 + 8) = 1;
          return 1;
        }
      }
    }
  }
code_?:
  func_?();
  iVar32 = func_?();
  *(char *)(iVar32 + -0x33efc07b) =
       *(char *)(iVar32 + -0x33efc07b) + (char)iVar32 +
       ((MonoBehaviour__Class *)(pOVar33->_0).image < (MonoBehaviour__Class *)0x3f837010);
  pcVar29 = (code *)swi(3);
  bVar30 = (*pcVar29)();
  return bVar30;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeGoldIcon>d__30::
     LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30_System_Collections_IEnumerator_Reset
               (LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

