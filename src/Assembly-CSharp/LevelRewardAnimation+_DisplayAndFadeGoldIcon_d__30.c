
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
      in_AF = 0;
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
      in_AF = 0;
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
            uVar3 = 0x71;
            uVar4 = 0x3f;
            pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar10,(MethodInfo *)0x0);
            if (pRVar13 != (RectTransform *)0x0) {
              uVar2 = 0xcd;
              uVar3 = 0x71;
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
  pcVar28 = (char *)((int)&pLVar1[0x15602a4].fields.__2__current + 2);
  cVar29 = *pcVar28;
  cVar30 = *pcVar28;
  *pcVar28 = cVar30 + extraout_DH + cVar27;
  if (SCARRY1(cVar29,extraout_DH) != SCARRY1(cVar30 + extraout_DH,cVar27)) {
    pcVar31 = (code *)swi(3);
    bVar32 = (*pcVar31)();
    return bVar32;
  }
  uVar33 = CONCAT31((int3)pLVar6,(char)((uint)pLVar1 >> 0x18));
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  iVar34 = CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar5)));
  pOVar35 = *(Object__Class **)(iVar34 + 0x10);
  uVar36 = 0;
  uVar9 = 0;
  uVar8 = 0;
  switch(*(undefined4 *)(iVar34 + 8)) {
  case 0:
    *(undefined4 *)(iVar34 + 8) = 0xffffffff;
    if ((pOVar35 != (Object__Class *)0x0) &&
       (pCVar37 = *(Component **)&(pOVar35->_0).this_arg.attrs, pCVar37 != (Component *)0x0)) {
      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (pCVar37,(MethodInfo *)0x0);
      uVar5 = SUB41(pTVar14,0);
      uVar7 = (undefined2)((uint)pTVar14 >> 8);
      uVar2 = (undefined1)((uint)pTVar14 >> 0x18);
      uVar38 = (undefined3)((uint)uVar36 >> 8);
      uVar33 = 0;
      euler_03._3_4_ = (int)(CONCAT44(_UNK_?,CONCAT13(uVar8,uVar38)) >> 0x18);
      euler_03.x._0_3_ = uVar38;
      euler_03._7_4_ = _UNK_? >> 0x18;
      euler_03.z._3_1_ = 0;
      pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffff83,euler_03,(MethodInfo *)0x0);
      uVar38 = CONCAT21(uVar7,uVar5);
      if (CONCAT13(uVar2,uVar38) != 0) {
        uVar36 = CONCAT31(SUB43(pQVar21->z,0),(char)((uint)pQVar21->y >> 0x18));
        uVar39._1_3_ = SUB43(pQVar21->w,0);
        uVar39._0_1_ = (char)((uint)pQVar21->z >> 0x18);
        uVar33 = CONCAT31(uVar38,0x10);
        value_01.y._1_2_ = (short)((uint)pQVar21->y >> 8);
        value_01._0_5_ = *(undefined5 *)pQVar21;
        value_01._7_4_ = uVar36;
        value_01._11_4_ = uVar39;
        value_01.w._3_1_ = (char)((uint)pQVar21->w >> 0x18);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  ((Transform *)CONCAT13(uVar2,uVar38),value_01,(MethodInfo *)0x0);
        uVar9 = (undefined1)uVar39;
        pBVar40 = *(Behaviour **)&(pOVar35->_0).this_arg.attrs;
        if (pBVar40 != (Behaviour *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    (pBVar40,1,(MethodInfo *)0x0);
          pBVar40 = (Behaviour *)(pOVar35->_0).byval_arg.data.typeHandle;
          if (pBVar40 != (Behaviour *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      (pBVar40,0,(MethodInfo *)0x0);
            pIVar41 = (pOVar35->_0).castClass;
            if (pIVar41 != (Il2CppClass *)0x0) {
              fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                       AnimationCurve_Evaluate((AnimationCurve *)pIVar41,0.0,(MethodInfo *)0x0);
              pGVar42 = *(Graphic **)&(pOVar35->_0).this_arg.attrs;
              uVar8 = SUB41(fVar12,0);
              uVar7 = (undefined2)((uint)fVar12 >> 8);
              uVar43 = (undefined1)((uint)fVar12 >> 0x18);
              if ((pGVar42 != (Graphic *)0x0) &&
                 (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      (pGVar42,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0))
              {
                uVar5 = SUB41(pRVar13,0);
                uVar2 = (undefined1)((uint)pRVar13 >> 8);
                uVar3 = (undefined1)((uint)pRVar13 >> 0x10);
                uVar4 = (undefined1)((uint)pRVar13 >> 0x18);
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar13,RectTransform_Axis__Enum_Horizontal,
                           (float)(int)pOVar35->interfaceOffsets *
                           (float)CONCAT13(uVar43,CONCAT21(uVar7,uVar8)),(MethodInfo *)0x0);
                pGVar42 = *(Graphic **)&(pOVar35->_0).this_arg.attrs;
                if ((pGVar42 != (Graphic *)0x0) &&
                   (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                              Graphic_get_rectTransform(pGVar42,(MethodInfo *)0x0),
                   pRVar13 != (RectTransform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_SetSizeWithCurrentAnchors
                            (pRVar13,RectTransform_Axis__Enum_Vertical,
                             (float)(int)pOVar35->interfaceOffsets *
                             (float)CONCAT13(uVar43,CONCAT21(uVar7,uVar8)),(MethodInfo *)0x0);
                  *(undefined4 *)(iVar34 + 0x14) = 0;
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
    *(undefined4 *)(iVar34 + 8) = 0xffffffff;
    if (pOVar35 != (Object__Class *)0x0) {
code_?:
      in_AF = 0;
      if (_UNK_? <= *(float *)(iVar34 + 0x14) / (float)(pOVar35->_0).fields) {
        pBVar40 = (Behaviour *)(pOVar35->_0).implementedInterfaces;
        if (pBVar40 != (Behaviour *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    (pBVar40,1,(MethodInfo *)0x0);
          pEVar44 = (pOVar35->_0).events;
          if (pEVar44 != (EventInfo *)0x0) {
            uVar33 = CONCAT31((int3)pEVar44,0x10);
            pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pEVar44,(MethodInfo *)0x0);
            if (pGVar23 != (GameObject *)0x0) {
              uVar33 = CONCAT31(0x3f76fc,(char)uVar33);
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar23,1,(MethodInfo *)0x0);
              pEVar44 = (pOVar35->_0).events;
              uVar8 = 0;
              uVar36 = 0;
              uVar9 = SUB41(pEVar44,0);
              uVar43 = (undefined1)((uint)pEVar44 >> 8);
              uVar45 = (undefined1)((uint)pEVar44 >> 0x10);
              uVar46 = (undefined1)((uint)pEVar44 >> 0x18);
              TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
              piVar47 = (int *)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar43,uVar9)));
              if (piVar47 != (int *)0x0) {
                (**(code **)(*piVar47 + 0x318))();
                pCVar37 = *(Component **)&(pOVar35->_0).this_arg.attrs;
                if (pCVar37 != (Component *)0x0) {
                  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform(pCVar37,(MethodInfo *)0x0);
                  uVar9 = SUB41(pTVar14,0);
                  uVar43 = (undefined1)((uint)pTVar14 >> 8);
                  uVar45 = (undefined1)((uint)pTVar14 >> 0x10);
                  uVar46 = (undefined1)((uint)pTVar14 >> 0x18);
                  uVar36 = CONCAT13(uVar8,(int3)((uint)uVar36 >> 8));
                  euler_02.y = (float)uVar36;
                  euler_02.x = (float)uVar36;
                  euler_02.z = 0.0;
                  pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad
                                      ((Quaternion *)&stack0xffffff83,euler_02,(MethodInfo *)0x0);
                  pTVar14 = (Transform *)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar43,uVar9)));
                  if (pTVar14 != (Transform *)0x0) {
                    value.w._1_2_ = (short)((uint)pQVar21->w >> 8);
                    value._0_13_ = *(undefined1 (*) [13])pQVar21;
                    value.w._3_1_ = (char)((uint)pQVar21->w >> 0x18);
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar14,value,(MethodInfo *)0x0);
                    *(undefined4 *)(iVar34 + 0x14) = 0;
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar39 = *(undefined4 *)(iVar34 + 0x14);
        uVar5 = (undefined1)uVar39;
        uVar7 = (undefined2)((uint)uVar39 >> 8);
        uVar2 = (undefined1)((uint)uVar39 >> 0x18);
        fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar12 = fVar12 + (float)CONCAT13(uVar2,CONCAT21(uVar7,uVar5));
        *(float *)(iVar34 + 0x14) = fVar12;
        this_01 = (pOVar35->_0).interopData;
        if (this_01 != (Il2CppInteropData *)0x0) {
          uVar33 = uVar33 & 0xffffff00;
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)this_01,fVar12 / (float)(pOVar35->_0).fields,
                              (MethodInfo *)0x0);
          pCVar37 = *(Component **)&(pOVar35->_0).this_arg.attrs;
          uVar5 = SUB41(fVar12,0);
          uVar7 = (undefined2)((uint)fVar12 >> 8);
          uVar2 = (undefined1)((uint)fVar12 >> 0x18);
          if (pCVar37 != (Component *)0x0) {
            uVar38 = (undefined3)((uint)uVar36 >> 8);
            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (pCVar37,(MethodInfo *)0x0);
            fVar12 = ((float)CONCAT13(uVar2,CONCAT21(uVar7,uVar5)) * _UNK_? -
                     _UNK_?) * _UNK_?;
            uVar33 = CONCAT31((int3)(Quaternion *)&stack0xffffff73,0x10);
            euler_05.x._3_1_ = uVar9;
            euler_05.x._0_3_ = uVar38;
            euler_05.y._0_1_ = SUB41(fVar12,0);
            euler_05.y._1_2_ = (short)((uint)fVar12 >> 8);
            euler_05._7_4_ = (uint)fVar12 >> 0x18;
            euler_05.z._3_1_ = 0;
            pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffff73,euler_05,(MethodInfo *)0x0);
            pOVar35 = (Object__Class *)0x0;
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
              uVar36 = func_?();
              *(undefined4 *)(iVar34 + 0xc) = uVar36;
              func_?();
              *(undefined4 *)(iVar34 + 8) = 1;
              return 1;
            }
          }
        }
      }
    }
    break;
  case 2:
    *(undefined4 *)(iVar34 + 8) = 0xffffffff;
    if (pOVar35 != (Object__Class *)0x0) {
code_?:
      in_AF = 0;
      if (_UNK_? <= *(float *)(iVar34 + 0x14) / (float)(pOVar35->_0).element_class) {
        pIVar41 = (pOVar35->_0).castClass;
        if (pIVar41 != (Il2CppClass *)0x0) {
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)pIVar41,1.0,(MethodInfo *)0x0);
          pGVar42 = *(Graphic **)&(pOVar35->_0).this_arg.attrs;
          uVar8 = SUB41(fVar12,0);
          uVar7 = (undefined2)((uint)fVar12 >> 8);
          uVar43 = (undefined1)((uint)fVar12 >> 0x18);
          if (pGVar42 != (Graphic *)0x0) {
            uVar33 = CONCAT31((int3)pGVar42,0x10);
            pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar42,(MethodInfo *)0x0);
            if (pRVar13 != (RectTransform *)0x0) {
              uVar9 = 0;
              uVar36 = 0;
              uVar33 = CONCAT31((int3)pRVar13,0x10);
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_SetSizeWithCurrentAnchors
                        (pRVar13,RectTransform_Axis__Enum_Horizontal,
                         (float)(int)pOVar35->interfaceOffsets *
                         (float)CONCAT13(uVar43,CONCAT21(uVar7,uVar8)),(MethodInfo *)0x0);
              pGVar42 = *(Graphic **)&(pOVar35->_0).this_arg.attrs;
              if ((pGVar42 != (Graphic *)0x0) &&
                 (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      (pGVar42,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0))
              {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar13,RectTransform_Axis__Enum_Vertical,
                           (float)(int)pOVar35->interfaceOffsets *
                           (float)CONCAT13(uVar43,CONCAT21(uVar7,uVar8)),(MethodInfo *)0x0);
                pEVar44 = (pOVar35->_0).events;
                if ((pEVar44 != (EventInfo *)0x0) &&
                   (pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pEVar44,(MethodInfo *)0x0),
                   pGVar23 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar23,0,(MethodInfo *)0x0);
                  *(undefined4 *)(iVar34 + 0x14) = 0;
                  goto code_?;
                }
              }
            }
          }
        }
      }
      else {
        uVar36 = *(undefined4 *)(iVar34 + 0x14);
        uVar5 = (undefined1)uVar36;
        uVar2 = (undefined1)((uint)uVar36 >> 8);
        uVar3 = (undefined1)((uint)uVar36 >> 0x10);
        uVar4 = (undefined1)((uint)uVar36 >> 0x18);
        fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar12 = fVar12 + (float)CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar5)));
        *(float *)(iVar34 + 0x14) = fVar12;
        pIVar41 = (pOVar35->_0).castClass;
        if (pIVar41 != (Il2CppClass *)0x0) {
          uVar33 = uVar33 & 0xffffff00;
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)pIVar41,fVar12 / (float)(pOVar35->_0).element_class,
                              (MethodInfo *)0x0);
          pGVar42 = *(Graphic **)&(pOVar35->_0).this_arg.attrs;
          uVar5 = SUB41(fVar12,0);
          uVar7 = (undefined2)((uint)fVar12 >> 8);
          uVar2 = (undefined1)((uint)fVar12 >> 0x18);
          if (pGVar42 != (Graphic *)0x0) {
            uVar33 = CONCAT31(0x3f782c,(char)uVar33);
            pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar42,(MethodInfo *)0x0);
            if (pRVar13 != (RectTransform *)0x0) {
              uVar33 = CONCAT31(0x3f7854,(char)uVar33);
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_SetSizeWithCurrentAnchors
                        (pRVar13,RectTransform_Axis__Enum_Horizontal,
                         (float)(int)pOVar35->interfaceOffsets *
                         (float)CONCAT13(uVar2,CONCAT21(uVar7,uVar5)),(MethodInfo *)0x0);
              pGVar42 = *(Graphic **)&(pOVar35->_0).this_arg.attrs;
              if ((pGVar42 != (Graphic *)0x0) &&
                 (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      (pGVar42,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0))
              {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar13,RectTransform_Axis__Enum_Vertical,
                           (float)(int)pOVar35->interfaceOffsets *
                           (float)CONCAT13(uVar2,CONCAT21(uVar7,uVar5)),(MethodInfo *)0x0);
                pAVar11 = (AnimationCurve *)(pOVar35->_0).nestedTypes;
                if (pAVar11 != (AnimationCurve *)0x0) {
                  fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                           AnimationCurve_Evaluate
                                     (pAVar11,*(float *)(iVar34 + 0x14) /
                                             (float)(pOVar35->_0).element_class,(MethodInfo *)0x0);
                  pCVar37 = (Component *)(pOVar35->_0).implementedInterfaces;
                  uVar5 = SUB41(fVar12,0);
                  uVar2 = (undefined1)((uint)fVar12 >> 8);
                  uVar3 = (undefined1)((uint)fVar12 >> 0x10);
                  uVar4 = (undefined1)((uint)fVar12 >> 0x18);
                  if (pCVar37 != (Component *)0x0) {
                    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform(pCVar37,(MethodInfo *)0x0);
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
                      uVar36 = func_?();
                      *(undefined4 *)(iVar34 + 0xc) = uVar36;
                      func_?();
                      *(undefined4 *)(iVar34 + 8) = 2;
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
    *(undefined4 *)(iVar34 + 8) = 0xffffffff;
    if (pOVar35 != (Object__Class *)0x0) {
code_?:
      in_AF = 0;
      if (_UNK_? <= *(float *)(iVar34 + 0x14) / (float)(pOVar35->_0).fields) {
        pCVar37 = *(Component **)&(pOVar35->_0).this_arg.attrs;
        if (pCVar37 != (Component *)0x0) {
          pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (pCVar37,(MethodInfo *)0x0);
          uVar38 = (undefined3)((uint)uVar36 >> 8);
          uVar33 = 0;
          euler_04._3_4_ = (int)(CONCAT44(_UNK_?,CONCAT13(uVar9,uVar38)) >> 0x18);
          euler_04.x._0_3_ = uVar38;
          euler_04._7_4_ = _UNK_? >> 0x18;
          euler_04.z._3_1_ = 0;
          pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                    Quaternion_Internal_FromEulerRad
                              ((Quaternion *)&stack0xffffff73,euler_04,(MethodInfo *)0x0);
          iVar34 = 0;
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
            pOVar26[2].klass = pOVar35;
            func_?();
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_StartCoroutine_Auto
                      ((MonoBehaviour *)pOVar35,(IEnumerator *)pOVar26,(MethodInfo *)0x0);
            uVar36 = func_?();
            iVar34 = CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar5)));
            *(undefined4 *)(iVar34 + 0xc) = uVar36;
            func_?();
            *(undefined4 *)(iVar34 + 8) = 4;
            return 1;
          }
        }
      }
      else {
        uVar39 = *(undefined4 *)(iVar34 + 0x14);
        uVar5 = (undefined1)uVar39;
        uVar7 = (undefined2)((uint)uVar39 >> 8);
        uVar2 = (undefined1)((uint)uVar39 >> 0x18);
        fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar12 = fVar12 + (float)CONCAT13(uVar2,CONCAT21(uVar7,uVar5));
        *(float *)(iVar34 + 0x14) = fVar12;
        pIVar41 = (pOVar35->_0).klass;
        if (pIVar41 != (Il2CppClass *)0x0) {
          uVar33 = uVar33 & 0xffffff00;
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)pIVar41,fVar12 / (float)(pOVar35->_0).fields,
                              (MethodInfo *)0x0);
          pCVar37 = *(Component **)&(pOVar35->_0).this_arg.attrs;
          uVar5 = SUB41(fVar12,0);
          uVar7 = (undefined2)((uint)fVar12 >> 8);
          uVar2 = (undefined1)((uint)fVar12 >> 0x18);
          if (pCVar37 != (Component *)0x0) {
            uVar38 = (undefined3)((uint)uVar36 >> 8);
            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (pCVar37,(MethodInfo *)0x0);
            fVar12 = (float)CONCAT13(uVar2,CONCAT21(uVar7,uVar5)) * _UNK_? * _UNK_?
            ;
            uVar33 = CONCAT31((int3)(Quaternion *)&stack0xffffff73,0x10);
            euler_06.x._3_1_ = uVar9;
            euler_06.x._0_3_ = uVar38;
            euler_06.y._0_1_ = SUB41(fVar12,0);
            euler_06.y._1_2_ = (short)((uint)fVar12 >> 8);
            euler_06._7_4_ = (uint)fVar12 >> 0x18;
            euler_06.z._3_1_ = 0;
            pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffff73,euler_06,(MethodInfo *)0x0);
            pOVar35 = (Object__Class *)0x0;
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
              uVar36 = func_?();
              *(undefined4 *)(iVar34 + 0xc) = uVar36;
              func_?();
              *(undefined4 *)(iVar34 + 8) = 3;
              return 1;
            }
          }
        }
      }
    }
    break;
  case 4:
    *(undefined4 *)(iVar34 + 8) = 0xffffffff;
  default:
    return 0;
  }
  bVar48 = 0;
  func_?();
  if (extraout_EDX + 1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar49 = (undefined1 *)((int)&pOVar35[-0x677d63]._1.element_size + 1);
  bVar50 = *puVar49;
  bVar51 = (byte)(extraout_EDX + 1);
  bVar52 = *puVar49 + bVar51;
  bVar53 = CARRY1(bVar50,bVar51) || CARRY1(bVar52,bVar48);
  *puVar49 = bVar52 + bVar48;
  if ((!CARRY1(bVar50,bVar51) && !CARRY1(bVar52,bVar48)) && *puVar49 != '\0') {
    func_?();
    pcVar31 = (code *)swi(3);
    bVar32 = (*pcVar31)();
    return bVar32;
  }
  bVar48 = *extraout_ECX_00 + (byte)&stack0xffffffab;
  bVar54 = CARRY1(*extraout_ECX_00,(byte)&stack0xffffffab) || CARRY1(bVar48,bVar53);
  *extraout_ECX_00 = bVar48 + bVar53;
  if ((POPCOUNT(*extraout_ECX_00) & 1U) != 0) {
    bVar48 = *extraout_ECX_00;
    cVar29 = (char)((uint)extraout_ECX_00 >> 8);
    cVar30 = *extraout_ECX_00 + cVar29;
    *extraout_ECX_00 = cVar30 + bVar54;
    if ((SCARRY1(bVar48,cVar29) != SCARRY1(cVar30,bVar54)) != (char)*extraout_ECX_00 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar31 = (code *)swi(3);
    bVar32 = (*pcVar31)();
    return bVar32;
  }
  uVar55 = CONCAT31((int3)iVar34,(char)((uint)pOVar35 >> 0x18));
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pOVar35 = *(Object__Class **)(uVar33 + 0x10);
  fVar12 = 0.0;
  uVar56 = uVar33;
  switch(*(undefined4 *)(uVar33 + 8)) {
  case 0:
    *(undefined4 *)(uVar33 + 8) = 0xffffffff;
    cVar30 = (int)pOVar35 < 0;
    uVar5 = pOVar35 == (Object__Class *)0x0;
    if (!(bool)uVar5) {
      pGVar42 = (Graphic *)(pOVar35->_0).byval_arg.data.typeHandle;
      cVar30 = (int)pGVar42 < 0;
      uVar5 = pGVar42 == (Graphic *)0x0;
      if (!(bool)uVar5) {
        _uStack_107 = (float)CONCAT31(0x3f7d0a,uStack_57);
        pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            (pGVar42,(MethodInfo *)0x0);
        cVar30 = (int)pRVar13 < 0;
        uVar5 = pRVar13 == (RectTransform *)0x0;
        if (!(bool)uVar5) {
          bVar48 = (byte)((uint)(float)(int)pOVar35->interfaceOffsets >> 0x18);
          uVar55 = (uint)bVar48;
          value_09.y._0_3_ = SUB43((float)(int)pOVar35->interfaceOffsets,0);
          value_09.x._3_1_ = (char)((uint)(float)(int)pOVar35->interfaceOffsets >> 0x18);
          _uStack_107 = (float)CONCAT31(0x3f7d3d,uStack_57);
          value_09.x._0_3_ = SUB43((float)(int)pOVar35->interfaceOffsets,0);
          value_09.y._3_1_ = bVar48;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar13,value_09,(MethodInfo *)0x0);
          pCVar37 = (Component *)(pOVar35->_0).byval_arg.data.typeHandle;
          cVar30 = (int)pCVar37 < 0;
          uVar5 = pCVar37 == (Component *)0x0;
          if (!(bool)uVar5) {
            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (pCVar37,(MethodInfo *)0x0);
            uVar2 = SUB41(pTVar14,0);
            iVar58 = (int3)((uint)pTVar14 >> 8);
            euler_01.y = (float)pCVar37;
            euler_01.x = (float)pCVar37;
            euler_01.z = 0.0;
            pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffff2e,euler_01,(MethodInfo *)0x0);
            cVar30 = iVar58 < 0;
            uVar5 = (Transform *)CONCAT31(iVar58,uVar2) == (Transform *)0x0;
            if (!(bool)uVar5) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        ((Transform *)CONCAT31(iVar58,uVar2),*pQVar21,(MethodInfo *)0x0);
              pBVar40 = (Behaviour *)(pOVar35->_0).byval_arg.data.typeHandle;
              cVar30 = (int)pBVar40 < 0;
              uVar5 = pBVar40 == (Behaviour *)0x0;
              if (!(bool)uVar5) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          (pBVar40,1,(MethodInfo *)0x0);
                pCVar37 = (Component *)(pOVar35->_0).implementedInterfaces;
                cVar30 = (int)pCVar37 < 0;
                uVar5 = pCVar37 == (Component *)0x0;
                if (!(bool)uVar5) {
                  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform(pCVar37,(MethodInfo *)0x0);
                  cVar30 = (int)pTVar14 < 0;
                  uVar5 = pTVar14 == (Transform *)0x0;
                  if (!(bool)uVar5) {
                    value_00.z = 1.0;
                    value_00.x = 1.0;
                    value_00.y = 1.0;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                              (pTVar14,value_00,(MethodInfo *)0x0);
                    pBVar40 = (Behaviour *)(pOVar35->_0).implementedInterfaces;
                    cVar30 = (int)pBVar40 < 0;
                    uVar5 = pBVar40 == (Behaviour *)0x0;
                    if (!(bool)uVar5) {
                      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                (pBVar40,0,(MethodInfo *)0x0);
                      this_02 = (pOVar35->_0).properties;
                      cVar30 = (int)this_02 < 0;
                      uVar5 = this_02 == (PropertyInfo *)0x0;
                      if (!(bool)uVar5) {
                        pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)this_02,(MethodInfo *)0x0);
                        cVar30 = (int)pGVar23 < 0;
                        uVar5 = pGVar23 == (GameObject *)0x0;
                        if (!(bool)uVar5) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (pGVar23,0,(MethodInfo *)0x0);
                          pCVar37 = (Component *)(pOVar35->_0).methods;
                          cVar30 = (int)pCVar37 < 0;
                          uVar5 = pCVar37 == (Component *)0x0;
                          if (!(bool)uVar5) {
                            pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                      Component_get_gameObject(pCVar37,(MethodInfo *)0x0);
                            cVar30 = (int)pGVar23 < 0;
                            uVar5 = pGVar23 == (GameObject *)0x0;
                            if (!(bool)uVar5) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar23,0,(MethodInfo *)0x0);
                              pIVar41 = (pOVar35->_0).declaringType;
                              cVar30 = (int)pIVar41 < 0;
                              uVar5 = pIVar41 == (Il2CppClass *)0x0;
                              if (!(bool)uVar5) {
                                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                Behaviour_set_enabled((Behaviour *)pIVar41,0,(MethodInfo *)0x0);
                                pEVar44 = (pOVar35->_0).events;
                                cVar30 = (int)pEVar44 < 0;
                                uVar5 = pEVar44 == (EventInfo *)0x0;
                                if (!(bool)uVar5) {
                                  pGVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                            Component_get_gameObject
                                                      ((Component *)pEVar44,(MethodInfo *)0x0);
                                  cVar30 = (int)pGVar23 < 0;
                                  uVar5 = pGVar23 == (GameObject *)0x0;
                                  if (!(bool)uVar5) {
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_SetActive(pGVar23,0,(MethodInfo *)0x0);
                                    *(undefined4 *)(uVar33 + 0x14) = 0;
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
    *(undefined4 *)(uVar33 + 8) = 0xffffffff;
    cVar30 = (int)pOVar35 < 0;
    uVar5 = pOVar35 == (Object__Class *)0x0;
    if (!(bool)uVar5) {
code_?:
      in_AF = 0;
      if (_UNK_? <= *(float *)(uVar33 + 0x14) / *(float *)&(pOVar35->_0).byval_arg.attrs) {
        pAVar11 = (AnimationCurve *)(pOVar35->_0).this_arg.data.typeHandle;
        cVar30 = (int)pAVar11 < 0;
        uVar5 = pAVar11 == (AnimationCurve *)0x0;
        if (!(bool)uVar5) {
          uStack_59 = CONCAT31(0x3f800e,(undefined1)uStack_59);
          _uStack_107 = (float)CONCAT31((int3)pAVar11,0x10);
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar11,1.0,(MethodInfo *)0x0);
          pGVar42 = (Graphic *)(pOVar35->_0).byval_arg.data.typeHandle;
          uVar2 = SUB41(fVar12,0);
          uVar38 = (undefined3)((uint)fVar12 >> 8);
          cVar30 = (int)pGVar42 < 0;
          uVar5 = pGVar42 == (Graphic *)0x0;
          if (!(bool)uVar5) {
            uVar55 = CONCAT31((int3)pGVar42,0x10);
            pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar42,(MethodInfo *)0x0);
            cVar30 = (int)pRVar13 < 0;
            uVar5 = pRVar13 == (RectTransform *)0x0;
            if (!(bool)uVar5) {
              fVar12 = 0.0;
              uVar55 = CONCAT31((int3)pRVar13,0x10);
              value_08.y = (float)(int)pOVar35->interfaceOffsets * (float)CONCAT31(uVar38,uVar2);
              value_08.x = (float)(int)pOVar35->interfaceOffsets * (float)CONCAT31(uVar38,uVar2);
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                        (pRVar13,value_08,(MethodInfo *)0x0);
              *(undefined4 *)(uVar33 + 0x14) = 0;
              goto code_?;
            }
          }
        }
      }
      else {
        uVar5 = (undefined1)*(undefined4 *)(uVar33 + 0x14);
        uVar38 = (undefined3)((uint)*(undefined4 *)(uVar33 + 0x14) >> 8);
        fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar12 = fVar12 + (float)CONCAT31(uVar38,uVar5);
        *(float *)(uVar33 + 0x14) = fVar12;
        pAVar11 = (AnimationCurve *)(pOVar35->_0).this_arg.data.typeHandle;
        cVar30 = (int)pAVar11 < 0;
        uVar5 = pAVar11 == (AnimationCurve *)0x0;
        if (!(bool)uVar5) {
          uVar55 = uVar55 & 0xffffff00;
          _uStack_107 = (float)CONCAT31(0x3f7f3c,uStack_57);
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar11,fVar12 / *(float *)&(pOVar35->_0).byval_arg.attrs,
                              (MethodInfo *)0x0);
          pGVar42 = (Graphic *)(pOVar35->_0).byval_arg.data.typeHandle;
          uVar2 = SUB41(fVar12,0);
          uVar38 = (undefined3)((uint)fVar12 >> 8);
          cVar30 = (int)pGVar42 < 0;
          uVar5 = pGVar42 == (Graphic *)0x0;
          if (!(bool)uVar5) {
            uVar55 = CONCAT31(0x3f7f55,(char)uVar55);
            pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar42,(MethodInfo *)0x0);
            cVar30 = (int)pRVar13 < 0;
            uVar5 = pRVar13 == (RectTransform *)0x0;
            if (!(bool)uVar5) {
              uVar55 = CONCAT31(0x3f7f7d,(char)uVar55);
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_SetSizeWithCurrentAnchors
                        (pRVar13,RectTransform_Axis__Enum_Horizontal,
                         (float)(int)pOVar35->interfaceOffsets * (float)CONCAT31(uVar38,uVar2),
                         (MethodInfo *)0x0);
              pGVar42 = (Graphic *)(pOVar35->_0).byval_arg.data.typeHandle;
              cVar30 = (int)pGVar42 < 0;
              uVar5 = pGVar42 == (Graphic *)0x0;
              if (!(bool)uVar5) {
                pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                    (pGVar42,(MethodInfo *)0x0);
                cVar30 = (int)pRVar13 < 0;
                uVar5 = pRVar13 == (RectTransform *)0x0;
                if (!(bool)uVar5) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_SetSizeWithCurrentAnchors
                            (pRVar13,RectTransform_Axis__Enum_Vertical,
                             (float)(int)pOVar35->interfaceOffsets * (float)CONCAT31(uVar38,uVar2),
                             (MethodInfo *)0x0);
                  uVar36 = func_?();
                  *(undefined4 *)(uVar33 + 0xc) = uVar36;
                  func_?();
                  *(undefined4 *)(uVar33 + 8) = 1;
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
    *(undefined4 *)(uVar33 + 8) = 0xffffffff;
    cVar30 = (int)pOVar35 < 0;
    uVar5 = pOVar35 == (Object__Class *)0x0;
    if (!(bool)uVar5) {
code_?:
      in_AF = 0;
      if (_UNK_? <= *(float *)(uVar33 + 0x14) / (float)(pOVar35->_0).fields) {
        pCVar37 = (Component *)(pOVar35->_0).byval_arg.data.typeHandle;
        cVar30 = (int)pCVar37 < 0;
        uVar5 = pCVar37 == (Component *)0x0;
        if (!(bool)uVar5) {
          _uStack_107 = (float)CONCAT31(0x3f81a0,uStack_57);
          pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (pCVar37,(MethodInfo *)0x0);
          uVar55 = 0;
          uStack_59 = CONCAT31(0x3f81d5,(undefined1)uStack_59);
          _uStack_107 = (float)CONCAT31((int3)(Quaternion *)&stack0xffffff16,0x10);
          euler._3_4_ = (int)(CONCAT44(_UNK_?,fVar12) >> 0x18);
          euler.x._0_3_ = SUB43(fVar12,0);
          euler.y._3_1_ = (char)(_UNK_? >> 0x18);
          euler.z = 0.0;
          pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                    Quaternion_Internal_FromEulerRad
                              ((Quaternion *)&stack0xffffff16,euler,(MethodInfo *)0x0);
          cVar30 = (int)pTVar14 < 0;
          uVar5 = pTVar14 == (Transform *)0x0;
          uVar33 = 0;
          if (!(bool)uVar5) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar14,*pQVar21,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            method_00 = TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29;
            pOVar26 = (Object *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      (pOVar26,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
            pOVar26[1].klass = (Object__Class *)0x0;
            pOVar26[2].klass = pOVar35;
            func_?();
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_StartCoroutine_Auto
                      ((MonoBehaviour *)pOVar35,(IEnumerator *)pOVar26,(MethodInfo *)0x0);
            uVar36 = func_?();
            *(undefined4 *)(uVar56 + 0xc) = uVar36;
            func_?();
            *(undefined4 *)(uVar56 + 8) = 3;
            return 1;
          }
        }
      }
      else {
        uVar5 = (undefined1)*(undefined4 *)(uVar33 + 0x14);
        uVar38 = (undefined3)((uint)*(undefined4 *)(uVar33 + 0x14) >> 8);
        fVar25 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar25 = fVar25 + (float)CONCAT31(uVar38,uVar5);
        *(float *)(uVar33 + 0x14) = fVar25;
        pIVar41 = (pOVar35->_0).klass;
        cVar30 = (int)pIVar41 < 0;
        uVar5 = pIVar41 == (Il2CppClass *)0x0;
        if (!(bool)uVar5) {
          uVar55 = uVar55 & 0xffffff00;
          _uStack_107 = (float)CONCAT31(0x3f80dc,uStack_57);
          fVar25 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)pIVar41,fVar25 / (float)(pOVar35->_0).fields,
                              (MethodInfo *)0x0);
          pCVar37 = (Component *)(pOVar35->_0).byval_arg.data.typeHandle;
          uVar2 = SUB41(fVar25,0);
          uVar56 = (uint)fVar25 >> 8;
          cVar30 = (int)pCVar37 < 0;
          uVar5 = pCVar37 == (Component *)0x0;
          if (!(bool)uVar5) {
            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (pCVar37,(MethodInfo *)0x0);
            uVar55 = CONCAT31((int3)(Quaternion *)&stack0xffffff16,0x10);
            euler_00.y = (float)CONCAT31((int3)uVar56,uVar2) * _UNK_? * _UNK_?;
            euler_00.x = fVar12;
            euler_00.z = 0.0;
            pQVar21 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffff16,euler_00,(MethodInfo *)0x0);
            cVar30 = (int)pTVar14 < 0;
            uVar5 = pTVar14 == (Transform *)0x0;
            pOVar35 = (Object__Class *)0x0;
            if (!(bool)uVar5) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar14,*pQVar21,(MethodInfo *)0x0);
              uVar36 = func_?();
              *(undefined4 *)(uVar33 + 0xc) = uVar36;
              func_?();
              *(undefined4 *)(uVar33 + 8) = 2;
              return 1;
            }
          }
        }
      }
    }
    break;
  case 3:
    *(undefined4 *)(uVar33 + 8) = 0xffffffff;
  default:
    return 0;
  }
  cVar27 = '\0';
  cVar29 = '\0';
  func_?();
  iVar34 = func_?();
  if (!(bool)uVar5 && cVar27 == cVar30) {
    *(char *)(iVar34 + -0x80) = *(char *)(iVar34 + -0x80) + extraout_DH_00 + cVar29;
    in_AF = 9 < ((byte)iVar34 & 0xf) | in_AF;
    uVar33 = CONCAT31((int3)((uint)iVar34 >> 8),(byte)iVar34 + in_AF * -6) & 0xffffff0f;
    cVar30 = (char)uVar33;
    pcVar28 = (char *)(CONCAT22((short)(uVar33 >> 0x10),
                               CONCAT11((char)((uint)iVar34 >> 8) - in_AF,cVar30)) + -0x33efc07e);
    *pcVar28 = *pcVar28 + cVar30 + in_AF;
    pcVar31 = (code *)swi(3);
    bVar32 = (*pcVar31)();
    return bVar32;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32,pOVar35,uVar33);
    cRam_? = '\x01';
  }
  iVar34 = *(int *)(uVar55 + 0x10);
  if (*(int *)(uVar55 + 8) == 0) {
    *(undefined4 *)(uVar55 + 8) = 0xffffffff;
    fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (iVar34 == 0) goto code_?;
    piVar47 = *(int **)(iVar34 + 0x14);
    *(float *)(iVar34 + 0x2c) = fVar12;
    if (piVar47 == (int *)0x0) goto code_?;
    pOVar35 = *(Object__Class **)(*piVar47 + 0x1cc);
    fVar60 = (float10)(**(code **)(*piVar47 + 0x1c8))(piVar47,pOVar35);
    *(float *)(uVar55 + 0x18) = (float)fVar60;
    fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(uVar55 + 8) != 1) {
      return 0;
    }
    *(undefined4 *)(uVar55 + 8) = 0xffffffff;
    fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (iVar34 == 0) goto code_?;
  }
  _uStack_107 = *(float *)(uVar55 + 0x18);
  fVar25 = *(float *)(uVar55 + 0x14);
  piVar47 = *(int **)(iVar34 + 0x14);
  if (*(float *)(iVar34 + 0x20) < fVar12 - *(float *)(iVar34 + 0x2c)) {
    if (piVar47 != (int *)0x0) {
      (**(code **)(*piVar47 + 0x1d0))
                (piVar47,(fVar25 - _uStack_107) + _uStack_107,*(undefined4 *)(*piVar47 + 0x1d4),
                 pOVar35,&stack0xffffff5e);
      return 0;
    }
  }
  else {
    fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar12 = (fVar12 - *(float *)(iVar34 + 0x2c)) / *(float *)(iVar34 + 0x20);
    if (fVar12 < 0.0) {
      fVar12 = 0.0;
    }
    else if (_UNK_? < fVar12) {
      fVar12 = _UNK_?;
    }
    if (piVar47 != (int *)0x0) {
      (**(code **)(*piVar47 + 0x1d0))
                (piVar47,(fVar25 - _uStack_107) * fVar12 + _uStack_107,
                 *(undefined4 *)(*piVar47 + 0x1d4));
      uStack_59 = 0;
      uVar36 = func_?(TypeInfo__System__Int32,&uStack_59);
      *(undefined4 *)(uVar55 + 0xc) = uVar36;
      func_?(uVar55 + 0xc,uVar36);
      *(undefined4 *)(uVar55 + 8) = 1;
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

