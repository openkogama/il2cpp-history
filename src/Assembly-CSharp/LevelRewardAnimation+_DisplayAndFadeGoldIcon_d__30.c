
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeGoldIcon>d__30::
     LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30_MoveNext
               (LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30 *this,MethodInfo *method)

{
  pLVar1 = this;
  bVar2 = (byte)((uint)in_stack_3 >> 0x10);
  uVar4 = (undefined1)unaff_ESI;
  uVar5 = (undefined1)((uint)unaff_ESI >> 8);
  uVar6 = (undefined1)((uint)unaff_ESI >> 0x10);
  uVar7 = (undefined1)((uint)unaff_EDI >> 0x18);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pLVar8 = (this->fields).__4__this;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  switch((this->fields).__1__state) {
  case 0:
    (this->fields).__1__state = -1;
    if ((pLVar8 != (LevelRewardAnimation *)0x0) &&
       (pIVar12 = (pLVar8->fields).goldImage, pIVar12 != (Image *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pIVar12,1,(MethodInfo *)0x0);
      this_00 = (pLVar8->fields).nextLevelBadge;
      if (this_00 != (RawImage *)0x0) {
        uVar4 = 0;
        uVar5 = 0;
        uVar6 = 0;
        uVar7 = (undefined1)((uint)this_00 >> 0x18);
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,0,(MethodInfo *)0x0);
        pAVar13 = (pLVar8->fields).goldBounceEffect;
        if (pAVar13 != (AnimationCurve *)0x0) {
          uVar9 = 0;
          uVar10 = 0;
          uVar11 = 0;
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar13,0.0,(MethodInfo *)0x0);
          pIVar12 = (pLVar8->fields).goldImage;
          if ((pIVar12 != (Image *)0x0) &&
             (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                  ((Graphic *)pIVar12,(MethodInfo *)0x0),
             pRVar15 != (RectTransform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
            RectTransform_SetSizeWithCurrentAnchors
                      (pRVar15,RectTransform_Axis__Enum_Horizontal,
                       (float)(pLVar8->fields).targetSize * fVar14,(MethodInfo *)0x0);
            pIVar12 = (pLVar8->fields).goldImage;
            if (pIVar12 != (Image *)0x0) {
              bVar2 = 0x3f;
              pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                  ((Graphic *)pIVar12,(MethodInfo *)0x0);
              if (pRVar15 != (RectTransform *)0x0) {
                bVar2 = 0x3f;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar15,RectTransform_Axis__Enum_Vertical,
                           (float)(pLVar8->fields).targetSize * extraout_ECX,(MethodInfo *)0x0);
                pIVar12 = (pLVar8->fields).goldImage;
                if (pIVar12 != (Image *)0x0) {
                  pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pIVar12,(MethodInfo *)0x0);
                  uVar17 = CONCAT13(uVar11,CONCAT12(uVar10,uVar9));
                  uVar18._4_4_ = (float)_UNK_?;
                  fVar19 = (float)uVar17;
                  uVar18 = CONCAT44(uVar18._4_4_,fVar19);
                  this = (LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30 *)0x0;
                  pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad
                                      ((Quaternion *)&stack0xffffffd0,(Vector3)CONCAT48(this,uVar18)
                                       ,(MethodInfo *)0x0);
                  unaff_BL = (char)uVar17;
                  if (pTVar16 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar16,*pQVar20,(MethodInfo *)0x0);
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
    break;
  case 1:
    (this->fields).__1__state = -1;
    if (pLVar8 != (LevelRewardAnimation *)0x0) {
code_?:
      in_AF = 0;
      if (_UNK_? <= (pLVar1->fields)._currentTime_5__2 / (pLVar8->fields).rotateUIYAxisTime
         ) {
        pIVar12 = (pLVar8->fields).goldImage;
        if (pIVar12 != (Image *)0x0) {
          pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pIVar12,(MethodInfo *)0x0);
          uVar7 = 0;
          uVar4 = 0;
          uVar5 = 0;
          uVar6 = 0;
          euler_07.x._2_1_ = uVar10;
          euler_07.x._0_2_ = uVar9;
          euler_07.x._3_1_ = uVar11;
          euler_07.y._0_2_ = uVar9;
          euler_07.y._2_1_ = uVar10;
          euler_07.y._3_1_ = uVar11;
          euler_07.z = 0.0;
          pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                    Quaternion_Internal_FromEulerRad
                              ((Quaternion *)&stack0xffffffc0,euler_07,(MethodInfo *)0x0);
          if (pTVar16 != (Transform *)0x0) {
            fVar14 = pQVar20->z;
            uVar4 = SUB41(pTVar16,0);
            uVar5 = (undefined1)((uint)pTVar16 >> 8);
            uVar6 = (undefined1)((uint)pTVar16 >> 0x10);
            value_06.w._0_3_ = SUB43(pQVar20->w,0);
            value_06.z._3_1_ = (char)((uint)fVar14 >> 0x18);
            uVar7 = 0x10;
            value_06.y._2_1_ = (char)((uint)pQVar20->y >> 0x10);
            value_06._0_6_ = *(undefined6 *)pQVar20;
            value_06.y._3_1_ = (char)((uint)pQVar20->y >> 0x18);
            value_06.z._0_2_ = SUB42(fVar14,0);
            value_06.z._2_1_ = (char)((uint)fVar14 >> 0x10);
            value_06.w._3_1_ = (char)((uint)pQVar20->w >> 0x18);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar16,value_06,(MethodInfo *)0x0);
            pTVar21 = (pLVar8->fields).header;
            if (pTVar21 != (Text *)0x0) {
              bVar2 = 0;
              pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pTVar21,(MethodInfo *)0x0);
              if (pGVar22 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar22,1,(MethodInfo *)0x0);
                pTVar21 = (pLVar8->fields).header;
                bVar2 = 0x3f;
                TM::TM__(StringLiteral_REWARD_,(MethodInfo *)pTVar21);
                if (pTVar21 != (Text *)0x0) {
                  unaff_BL = (char)(pTVar21->klass->vtable).CalculateLayoutInputHorizontal_1.
                                   methodPtr;
                  (*(code *)(pTVar21->klass->vtable).set_text.method)();
                  pTVar21 = (pLVar8->fields).goldText;
                  if ((pTVar21 != (Text *)0x0) &&
                     (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pTVar21,(MethodInfo *)0x0),
                     pGVar22 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar22,1,(MethodInfo *)0x0);
                    pCVar23 = (pLVar8->fields).claimButton;
                    if ((pCVar23 != (CanvasGroup *)0x0) &&
                       (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pCVar23,(MethodInfo *)0x0),
                       pGVar22 != (GameObject *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (pGVar22,1,(MethodInfo *)0x0);
                      pCVar23 = (pLVar8->fields).claimButton;
                      if (pCVar23 != (CanvasGroup *)0x0) {
                        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                                  (pCVar23,0.0,(MethodInfo *)0x0);
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
      else {
        fVar14 = (pLVar1->fields)._currentTime_5__2;
        fVar24 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        (pLVar1->fields)._currentTime_5__2 = fVar24 + fVar14;
        pAVar13 = (pLVar8->fields).rotateUIYAxisIn;
        if (pAVar13 != (AnimationCurve *)0x0) {
          uVar7 = 0;
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar13,(fVar24 + fVar14) / (pLVar8->fields).rotateUIYAxisTime,
                              (MethodInfo *)0x0);
          pIVar12 = (pLVar8->fields).goldImage;
          if (pIVar12 != (Image *)0x0) {
            pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pIVar12,(MethodInfo *)0x0);
            fVar14 = (fVar14 * _UNK_? - _UNK_?) * _UNK_?;
            euler_08.x._2_1_ = uVar10;
            euler_08.x._0_2_ = uVar9;
            uVar4 = SUB41((Quaternion *)&stack0xffffffc0,0);
            uVar5 = (undefined1)((uint)&stack0xffffffc0 >> 8);
            uVar6 = (undefined1)((uint)&stack0xffffffc0 >> 0x10);
            uVar7 = 0x10;
            euler_08.x._3_1_ = uVar11;
            euler_08.y._0_2_ = SUB42(fVar14,0);
            euler_08.y._2_1_ = (char)((uint)fVar14 >> 0x10);
            euler_08.y._3_1_ = (char)((uint)fVar14 >> 0x18);
            euler_08.z = 0.0;
            pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffffc0,euler_08,(MethodInfo *)0x0);
            pLVar8 = (LevelRewardAnimation *)0x0;
            if (pTVar16 != (Transform *)0x0) {
              value_07.y._0_3_ = SUB43(pQVar20->y,0);
              value_07.x._3_1_ = (char)((uint)pQVar20->x >> 0x18);
              value_07.z._0_3_ = SUB43(pQVar20->z,0);
              value_07.y._3_1_ = (char)((uint)pQVar20->y >> 0x18);
              value_07.w._0_3_ = SUB43(pQVar20->w,0);
              value_07.z._3_1_ = (char)((uint)pQVar20->z >> 0x18);
              value_07.x._0_3_ = SUB43(pQVar20->x,0);
              value_07.w._3_1_ = (char)((uint)pQVar20->w >> 0x18);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar16,value_07,(MethodInfo *)0x0);
              pOVar25 = (Object *)func_?();
              (pLVar1->fields).__2__current = pOVar25;
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
    if (pLVar8 != (LevelRewardAnimation *)0x0) {
code_?:
      in_AF = 0;
      if (_UNK_? <=
          (pLVar1->fields)._currentTime_5__2 / (pLVar8->fields).goldImageDisplayTime) {
        pAVar13 = (pLVar8->fields).goldBounceEffect;
        if (pAVar13 != (AnimationCurve *)0x0) {
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar13,1.0,(MethodInfo *)0x0);
          pCVar23 = (pLVar8->fields).claimButton;
          if (pCVar23 != (CanvasGroup *)0x0) {
            uVar4 = 0;
            uVar5 = 0;
            uVar6 = 0x80;
            uVar7 = (undefined1)((uint)pCVar23 >> 0x18);
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (pCVar23,1.0,(MethodInfo *)0x0);
            pIVar12 = (pLVar8->fields).goldImage;
            if ((pIVar12 != (Image *)0x0) &&
               (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                    ((Graphic *)pIVar12,(MethodInfo *)0x0),
               pRVar15 != (RectTransform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_SetSizeWithCurrentAnchors
                        (pRVar15,RectTransform_Axis__Enum_Horizontal,
                         (float)(pLVar8->fields).targetSize * fVar14,(MethodInfo *)0x0);
              pIVar12 = (pLVar8->fields).goldImage;
              if ((pIVar12 != (Image *)0x0) &&
                 (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      ((Graphic *)pIVar12,(MethodInfo *)0x0),
                 pRVar15 != (RectTransform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar15,RectTransform_Axis__Enum_Vertical,
                           (float)(pLVar8->fields).targetSize * fVar14,(MethodInfo *)0x0);
                pOVar25 = (Object *)func_?();
                (pLVar1->fields).__2__current = pOVar25;
                func_?();
                (pLVar1->fields).__1__state = 3;
                return 1;
              }
            }
          }
        }
      }
      else {
        fVar14 = (pLVar1->fields)._currentTime_5__2;
        fVar24 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        (pLVar1->fields)._currentTime_5__2 = fVar24 + fVar14;
        pAVar13 = (pLVar8->fields).goldBounceEffect;
        if (pAVar13 != (AnimationCurve *)0x0) {
          uVar7 = 0;
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             (pAVar13,(fVar24 + fVar14) / (pLVar8->fields).goldImageDisplayTime,
                              (MethodInfo *)0x0);
          pIVar12 = (pLVar8->fields).goldImage;
          if (pIVar12 != (Image *)0x0) {
            uVar4 = 0x65;
            uVar5 = 0x72;
            uVar6 = 0x3f;
            pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar12,(MethodInfo *)0x0);
            if (pRVar15 != (RectTransform *)0x0) {
              uVar4 = 0x8d;
              uVar5 = 0x72;
              uVar6 = 0x3f;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_SetSizeWithCurrentAnchors
                        (pRVar15,RectTransform_Axis__Enum_Horizontal,
                         (float)(pLVar8->fields).targetSize * fVar14,(MethodInfo *)0x0);
              pIVar12 = (pLVar8->fields).goldImage;
              if ((pIVar12 != (Image *)0x0) &&
                 (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      ((Graphic *)pIVar12,(MethodInfo *)0x0),
                 pRVar15 != (RectTransform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar15,RectTransform_Axis__Enum_Vertical,
                           (float)(pLVar8->fields).targetSize * fVar14,(MethodInfo *)0x0);
                pAVar13 = (pLVar8->fields).goldFadeInCurve;
                if (pAVar13 != (AnimationCurve *)0x0) {
                  pCVar23 = (CanvasGroup *)
                            ((pLVar1->fields)._currentTime_5__2 /
                            (pLVar8->fields).goldImageDisplayTime);
                  bVar2 = 0x3f;
                  fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                           AnimationCurve_Evaluate(pAVar13,(float)pCVar23,(MethodInfo *)0x0);
                  if (pCVar23 != (CanvasGroup *)0x0) {
                    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                              (pCVar23,fVar14,(MethodInfo *)0x0);
                    pOVar25 = (Object *)func_?();
                    (pLVar1->fields).__2__current = pOVar25;
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
  uVar9 = func_?();
  pcVar26 = (char *)((int)&pLVar1[4].fields.__2__current + 3);
  *pcVar26 = *pcVar26 + extraout_DH;
  in_AF = 9 < ((byte)uVar9 & 0xf) | in_AF;
  bVar27 = (byte)uVar9 + in_AF * -6 & 0xf;
  bVar28 = (char)((ushort)uVar9 >> 8) - in_AF;
  if (SCARRY1(bVar27,bVar28) != SCARRY1(bVar27 + bVar28,in_AF)) {
    if ((char)(unaff_BL + (char)((uint)&stack0xfffffffc >> 8) +
              (CARRY1(bVar27,bVar28) || CARRY1(bVar27 + bVar28,in_AF))) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar29 = (code *)swi(3);
    bVar30 = (*pcVar29)();
    return bVar30;
  }
  uVar31 = CONCAT31((int3)pLVar8,(char)((uint)pLVar1 >> 0x18));
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  iVar32 = CONCAT13(uVar6,CONCAT12(uVar5,CONCAT11(uVar4,uVar7)));
  pOVar33 = *(Object__Class **)(iVar32 + 0x10);
  uVar17 = 0;
  uVar11 = 0;
  uVar10 = 0;
  switch(*(undefined4 *)(iVar32 + 8)) {
  case 0:
    *(undefined4 *)(iVar32 + 8) = 0xffffffff;
    if ((pOVar33 != (Object__Class *)0x0) &&
       (pCVar34 = *(Component **)&(pOVar33->_0).this_arg.attrs, pCVar34 != (Component *)0x0)) {
      pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (pCVar34,(MethodInfo *)0x0);
      uVar7 = SUB41(pTVar16,0);
      uVar9 = (undefined2)((uint)pTVar16 >> 8);
      uVar4 = (undefined1)((uint)pTVar16 >> 0x18);
      uVar35 = (undefined3)((uint)uVar17 >> 8);
      uVar31 = 0;
      euler_03._3_4_ = (int)(CONCAT44(_UNK_?,CONCAT13(uVar10,uVar35)) >> 0x18);
      euler_03.x._0_3_ = uVar35;
      euler_03._7_4_ = _UNK_? >> 0x18;
      euler_03.z._3_1_ = 0;
      pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffff83,euler_03,(MethodInfo *)0x0);
      uVar35 = CONCAT21(uVar9,uVar7);
      if (CONCAT13(uVar4,uVar35) != 0) {
        uVar17 = CONCAT31(SUB43(pQVar20->z,0),(char)((uint)pQVar20->y >> 0x18));
        uVar36._1_3_ = SUB43(pQVar20->w,0);
        uVar36._0_1_ = (char)((uint)pQVar20->z >> 0x18);
        uVar31 = CONCAT31(uVar35,0x10);
        value_01.y._1_2_ = (short)((uint)pQVar20->y >> 8);
        value_01._0_5_ = *(undefined5 *)pQVar20;
        value_01._7_4_ = uVar17;
        value_01._11_4_ = uVar36;
        value_01.w._3_1_ = (char)((uint)pQVar20->w >> 0x18);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  ((Transform *)CONCAT13(uVar4,uVar35),value_01,(MethodInfo *)0x0);
        uVar11 = (undefined1)uVar36;
        pBVar37 = *(Behaviour **)&(pOVar33->_0).this_arg.attrs;
        if (pBVar37 != (Behaviour *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    (pBVar37,1,(MethodInfo *)0x0);
          pBVar37 = (Behaviour *)(pOVar33->_0).byval_arg.data.typeHandle;
          if (pBVar37 != (Behaviour *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      (pBVar37,0,(MethodInfo *)0x0);
            pIVar38 = (pOVar33->_0).castClass;
            if (pIVar38 != (Il2CppClass *)0x0) {
              fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                       AnimationCurve_Evaluate((AnimationCurve *)pIVar38,0.0,(MethodInfo *)0x0);
              pGVar39 = *(Graphic **)&(pOVar33->_0).this_arg.attrs;
              uVar10 = SUB41(fVar14,0);
              uVar9 = (undefined2)((uint)fVar14 >> 8);
              uVar40 = (undefined1)((uint)fVar14 >> 0x18);
              if ((pGVar39 != (Graphic *)0x0) &&
                 (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      (pGVar39,(MethodInfo *)0x0), pRVar15 != (RectTransform *)0x0))
              {
                uVar7 = SUB41(pRVar15,0);
                uVar4 = (undefined1)((uint)pRVar15 >> 8);
                uVar5 = (undefined1)((uint)pRVar15 >> 0x10);
                uVar6 = (undefined1)((uint)pRVar15 >> 0x18);
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar15,RectTransform_Axis__Enum_Horizontal,
                           (float)(int)pOVar33->interfaceOffsets *
                           (float)CONCAT13(uVar40,CONCAT21(uVar9,uVar10)),(MethodInfo *)0x0);
                pGVar39 = *(Graphic **)&(pOVar33->_0).this_arg.attrs;
                if ((pGVar39 != (Graphic *)0x0) &&
                   (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::
                              Graphic_get_rectTransform(pGVar39,(MethodInfo *)0x0),
                   pRVar15 != (RectTransform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                  RectTransform_SetSizeWithCurrentAnchors
                            (pRVar15,RectTransform_Axis__Enum_Vertical,
                             (float)(int)pOVar33->interfaceOffsets *
                             (float)CONCAT13(uVar40,CONCAT21(uVar9,uVar10)),(MethodInfo *)0x0);
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
      in_AF = 0;
      if (_UNK_? <= *(float *)(iVar32 + 0x14) / (float)(pOVar33->_0).fields) {
        pBVar37 = (Behaviour *)(pOVar33->_0).implementedInterfaces;
        if (pBVar37 != (Behaviour *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    (pBVar37,1,(MethodInfo *)0x0);
          pEVar41 = (pOVar33->_0).events;
          if (pEVar41 != (EventInfo *)0x0) {
            uVar31 = CONCAT31((int3)pEVar41,0x10);
            pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pEVar41,(MethodInfo *)0x0);
            if (pGVar22 != (GameObject *)0x0) {
              uVar31 = CONCAT31(0x3f77bc,(char)uVar31);
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar22,1,(MethodInfo *)0x0);
              pEVar41 = (pOVar33->_0).events;
              uVar10 = 0;
              uVar17 = 0;
              uVar11 = SUB41(pEVar41,0);
              uVar40 = (undefined1)((uint)pEVar41 >> 8);
              uVar42 = (undefined1)((uint)pEVar41 >> 0x10);
              uVar43 = (undefined1)((uint)pEVar41 >> 0x18);
              TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
              piVar44 = (int *)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar40,uVar11)));
              if (piVar44 != (int *)0x0) {
                (**(code **)(*piVar44 + 0x318))();
                pCVar34 = *(Component **)&(pOVar33->_0).this_arg.attrs;
                if (pCVar34 != (Component *)0x0) {
                  pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform(pCVar34,(MethodInfo *)0x0);
                  uVar11 = SUB41(pTVar16,0);
                  uVar40 = (undefined1)((uint)pTVar16 >> 8);
                  uVar42 = (undefined1)((uint)pTVar16 >> 0x10);
                  uVar43 = (undefined1)((uint)pTVar16 >> 0x18);
                  uVar17 = CONCAT13(uVar10,(int3)((uint)uVar17 >> 8));
                  euler_02.y = (float)uVar17;
                  euler_02.x = (float)uVar17;
                  euler_02.z = 0.0;
                  pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_Internal_FromEulerRad
                                      ((Quaternion *)&stack0xffffff83,euler_02,(MethodInfo *)0x0);
                  pTVar16 = (Transform *)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar40,uVar11)));
                  if (pTVar16 != (Transform *)0x0) {
                    value.w._1_2_ = (short)((uint)pQVar20->w >> 8);
                    value._0_13_ = *(undefined1 (*) [13])pQVar20;
                    value.w._3_1_ = (char)((uint)pQVar20->w >> 0x18);
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar16,value,(MethodInfo *)0x0);
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
        uVar36 = *(undefined4 *)(iVar32 + 0x14);
        uVar7 = (undefined1)uVar36;
        uVar9 = (undefined2)((uint)uVar36 >> 8);
        uVar4 = (undefined1)((uint)uVar36 >> 0x18);
        fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar14 = fVar14 + (float)CONCAT13(uVar4,CONCAT21(uVar9,uVar7));
        *(float *)(iVar32 + 0x14) = fVar14;
        this_01 = (pOVar33->_0).interopData;
        if (this_01 != (Il2CppInteropData *)0x0) {
          uVar31 = uVar31 & 0xffffff00;
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)this_01,fVar14 / (float)(pOVar33->_0).fields,
                              (MethodInfo *)0x0);
          pCVar34 = *(Component **)&(pOVar33->_0).this_arg.attrs;
          uVar7 = SUB41(fVar14,0);
          uVar9 = (undefined2)((uint)fVar14 >> 8);
          uVar4 = (undefined1)((uint)fVar14 >> 0x18);
          if (pCVar34 != (Component *)0x0) {
            uVar35 = (undefined3)((uint)uVar17 >> 8);
            pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (pCVar34,(MethodInfo *)0x0);
            fVar14 = ((float)CONCAT13(uVar4,CONCAT21(uVar9,uVar7)) * _UNK_? -
                     _UNK_?) * _UNK_?;
            uVar31 = CONCAT31((int3)(Quaternion *)&stack0xffffff73,0x10);
            euler_05.x._3_1_ = uVar11;
            euler_05.x._0_3_ = uVar35;
            euler_05.y._0_1_ = SUB41(fVar14,0);
            euler_05.y._1_2_ = (short)((uint)fVar14 >> 8);
            euler_05._7_4_ = (uint)fVar14 >> 0x18;
            euler_05.z._3_1_ = 0;
            pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffff73,euler_05,(MethodInfo *)0x0);
            pOVar33 = (Object__Class *)0x0;
            if (pTVar16 != (Transform *)0x0) {
              fVar14 = pQVar20->z;
              fVar24 = pQVar20->w;
              value_03.y._1_2_ = (short)((uint)pQVar20->y >> 8);
              value_03._0_5_ = *(undefined5 *)pQVar20;
              value_03.y._3_1_ = (char)((uint)pQVar20->y >> 0x18);
              value_03.z._0_1_ = SUB41(fVar14,0);
              value_03.z._1_2_ = (short)((uint)fVar14 >> 8);
              value_03.z._3_1_ = (char)((uint)fVar14 >> 0x18);
              value_03.w._0_1_ = SUB41(fVar24,0);
              value_03.w._1_1_ = (char)((uint)fVar24 >> 8);
              value_03.w._2_1_ = (char)((uint)fVar24 >> 0x10);
              value_03.w._3_1_ = (char)((uint)fVar24 >> 0x18);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar16,value_03,(MethodInfo *)0x0);
              uVar17 = func_?();
              *(undefined4 *)(iVar32 + 0xc) = uVar17;
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
      in_AF = 0;
      if (_UNK_? <= *(float *)(iVar32 + 0x14) / (float)(pOVar33->_0).element_class) {
        pIVar38 = (pOVar33->_0).castClass;
        if (pIVar38 != (Il2CppClass *)0x0) {
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)pIVar38,1.0,(MethodInfo *)0x0);
          pGVar39 = *(Graphic **)&(pOVar33->_0).this_arg.attrs;
          uVar10 = SUB41(fVar14,0);
          uVar9 = (undefined2)((uint)fVar14 >> 8);
          uVar40 = (undefined1)((uint)fVar14 >> 0x18);
          if (pGVar39 != (Graphic *)0x0) {
            uVar31 = CONCAT31((int3)pGVar39,0x10);
            pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar39,(MethodInfo *)0x0);
            if (pRVar15 != (RectTransform *)0x0) {
              uVar11 = 0;
              uVar17 = 0;
              uVar31 = CONCAT31((int3)pRVar15,0x10);
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_SetSizeWithCurrentAnchors
                        (pRVar15,RectTransform_Axis__Enum_Horizontal,
                         (float)(int)pOVar33->interfaceOffsets *
                         (float)CONCAT13(uVar40,CONCAT21(uVar9,uVar10)),(MethodInfo *)0x0);
              pGVar39 = *(Graphic **)&(pOVar33->_0).this_arg.attrs;
              if ((pGVar39 != (Graphic *)0x0) &&
                 (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      (pGVar39,(MethodInfo *)0x0), pRVar15 != (RectTransform *)0x0))
              {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar15,RectTransform_Axis__Enum_Vertical,
                           (float)(int)pOVar33->interfaceOffsets *
                           (float)CONCAT13(uVar40,CONCAT21(uVar9,uVar10)),(MethodInfo *)0x0);
                pEVar41 = (pOVar33->_0).events;
                if ((pEVar41 != (EventInfo *)0x0) &&
                   (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pEVar41,(MethodInfo *)0x0),
                   pGVar22 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar22,0,(MethodInfo *)0x0);
                  *(undefined4 *)(iVar32 + 0x14) = 0;
                  goto code_?;
                }
              }
            }
          }
        }
      }
      else {
        uVar17 = *(undefined4 *)(iVar32 + 0x14);
        uVar7 = (undefined1)uVar17;
        uVar4 = (undefined1)((uint)uVar17 >> 8);
        uVar5 = (undefined1)((uint)uVar17 >> 0x10);
        uVar6 = (undefined1)((uint)uVar17 >> 0x18);
        fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar14 = fVar14 + (float)CONCAT13(uVar6,CONCAT12(uVar5,CONCAT11(uVar4,uVar7)));
        *(float *)(iVar32 + 0x14) = fVar14;
        pIVar38 = (pOVar33->_0).castClass;
        if (pIVar38 != (Il2CppClass *)0x0) {
          uVar31 = uVar31 & 0xffffff00;
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)pIVar38,fVar14 / (float)(pOVar33->_0).element_class,
                              (MethodInfo *)0x0);
          pGVar39 = *(Graphic **)&(pOVar33->_0).this_arg.attrs;
          uVar7 = SUB41(fVar14,0);
          uVar9 = (undefined2)((uint)fVar14 >> 8);
          uVar4 = (undefined1)((uint)fVar14 >> 0x18);
          if (pGVar39 != (Graphic *)0x0) {
            uVar31 = CONCAT31(0x3f78ec,(char)uVar31);
            pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar39,(MethodInfo *)0x0);
            if (pRVar15 != (RectTransform *)0x0) {
              uVar31 = CONCAT31(0x3f7914,(char)uVar31);
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
              RectTransform_SetSizeWithCurrentAnchors
                        (pRVar15,RectTransform_Axis__Enum_Horizontal,
                         (float)(int)pOVar33->interfaceOffsets *
                         (float)CONCAT13(uVar4,CONCAT21(uVar9,uVar7)),(MethodInfo *)0x0);
              pGVar39 = *(Graphic **)&(pOVar33->_0).this_arg.attrs;
              if ((pGVar39 != (Graphic *)0x0) &&
                 (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                      (pGVar39,(MethodInfo *)0x0), pRVar15 != (RectTransform *)0x0))
              {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                RectTransform_SetSizeWithCurrentAnchors
                          (pRVar15,RectTransform_Axis__Enum_Vertical,
                           (float)(int)pOVar33->interfaceOffsets *
                           (float)CONCAT13(uVar4,CONCAT21(uVar9,uVar7)),(MethodInfo *)0x0);
                pAVar13 = (AnimationCurve *)(pOVar33->_0).nestedTypes;
                if (pAVar13 != (AnimationCurve *)0x0) {
                  fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                           AnimationCurve_Evaluate
                                     (pAVar13,*(float *)(iVar32 + 0x14) /
                                             (float)(pOVar33->_0).element_class,(MethodInfo *)0x0);
                  pCVar34 = (Component *)(pOVar33->_0).implementedInterfaces;
                  uVar7 = SUB41(fVar14,0);
                  uVar4 = (undefined1)((uint)fVar14 >> 8);
                  uVar5 = (undefined1)((uint)fVar14 >> 0x10);
                  uVar6 = (undefined1)((uint)fVar14 >> 0x18);
                  if (pCVar34 != (Component *)0x0) {
                    pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_transform(pCVar34,(MethodInfo *)0x0);
                    if (pTVar16 != (Transform *)0x0) {
                      value_05.x._2_1_ = uVar5;
                      value_05.x._0_2_ = CONCAT11(uVar4,uVar7);
                      value_05.x._3_1_ = uVar6;
                      value_05.y._0_1_ = uVar7;
                      value_05.y._1_2_ = (short)(CONCAT12(uVar5,CONCAT11(uVar4,uVar7)) >> 8);
                      value_05.y._3_1_ = uVar6;
                      value_05.z._0_1_ = 0;
                      value_05.z._1_2_ = 0x8000;
                      value_05.z._3_1_ = 0x3f;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                                (pTVar16,value_05,(MethodInfo *)0x0);
                      uVar17 = func_?();
                      *(undefined4 *)(iVar32 + 0xc) = uVar17;
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
      in_AF = 0;
      if (_UNK_? <= *(float *)(iVar32 + 0x14) / (float)(pOVar33->_0).fields) {
        pCVar34 = *(Component **)&(pOVar33->_0).this_arg.attrs;
        if (pCVar34 != (Component *)0x0) {
          pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (pCVar34,(MethodInfo *)0x0);
          uVar35 = (undefined3)((uint)uVar17 >> 8);
          uVar31 = 0;
          euler_04._3_4_ = (int)(CONCAT44(_UNK_?,CONCAT13(uVar11,uVar35)) >> 0x18);
          euler_04.x._0_3_ = uVar35;
          euler_04._7_4_ = _UNK_? >> 0x18;
          euler_04.z._3_1_ = 0;
          pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                    Quaternion_Internal_FromEulerRad
                              ((Quaternion *)&stack0xffffff73,euler_04,(MethodInfo *)0x0);
          iVar32 = 0;
          if (pTVar16 != (Transform *)0x0) {
            value_02.z._0_3_ = SUB43(pQVar20->z,0);
            value_02.y._3_1_ = (char)((uint)pQVar20->y >> 0x18);
            value_02.w._0_3_ = SUB43(pQVar20->w,0);
            value_02.z._3_1_ = (char)((uint)pQVar20->z >> 0x18);
            value_02.y._1_2_ = (short)((uint)pQVar20->y >> 8);
            value_02._0_5_ = *(undefined5 *)pQVar20;
            value_02.w._3_1_ = (char)((uint)pQVar20->w >> 0x18);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar16,value_02,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            uVar10 = SUB41(TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30,0);
            uVar9 = (undefined2)
                     ((uint)TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30 >> 8);
            uVar11 = (undefined1)
                     ((uint)TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30 >> 0x18);
            pOVar25 = (Object *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      (pOVar25,ExceptionArgument__Enum_obj,
                       (MethodInfo *)CONCAT13(uVar11,CONCAT21(uVar9,uVar10)));
            pOVar25[1].klass = (Object__Class *)0x0;
            pOVar25[2].klass = pOVar33;
            func_?();
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_StartCoroutine_Auto
                      ((MonoBehaviour *)pOVar33,(IEnumerator *)pOVar25,(MethodInfo *)0x0);
            uVar17 = func_?();
            iVar32 = CONCAT13(uVar6,CONCAT12(uVar5,CONCAT11(uVar4,uVar7)));
            *(undefined4 *)(iVar32 + 0xc) = uVar17;
            func_?();
            *(undefined4 *)(iVar32 + 8) = 4;
            return 1;
          }
        }
      }
      else {
        uVar36 = *(undefined4 *)(iVar32 + 0x14);
        uVar7 = (undefined1)uVar36;
        uVar9 = (undefined2)((uint)uVar36 >> 8);
        uVar4 = (undefined1)((uint)uVar36 >> 0x18);
        fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar14 = fVar14 + (float)CONCAT13(uVar4,CONCAT21(uVar9,uVar7));
        *(float *)(iVar32 + 0x14) = fVar14;
        pIVar38 = (pOVar33->_0).klass;
        if (pIVar38 != (Il2CppClass *)0x0) {
          uVar31 = uVar31 & 0xffffff00;
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                             ((AnimationCurve *)pIVar38,fVar14 / (float)(pOVar33->_0).fields,
                              (MethodInfo *)0x0);
          pCVar34 = *(Component **)&(pOVar33->_0).this_arg.attrs;
          uVar7 = SUB41(fVar14,0);
          uVar9 = (undefined2)((uint)fVar14 >> 8);
          uVar4 = (undefined1)((uint)fVar14 >> 0x18);
          if (pCVar34 != (Component *)0x0) {
            uVar35 = (undefined3)((uint)uVar17 >> 8);
            pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                (pCVar34,(MethodInfo *)0x0);
            fVar14 = (float)CONCAT13(uVar4,CONCAT21(uVar9,uVar7)) * _UNK_? * _UNK_?
            ;
            uVar31 = CONCAT31((int3)(Quaternion *)&stack0xffffff73,0x10);
            euler_06.x._3_1_ = uVar11;
            euler_06.x._0_3_ = uVar35;
            euler_06.y._0_1_ = SUB41(fVar14,0);
            euler_06.y._1_2_ = (short)((uint)fVar14 >> 8);
            euler_06._7_4_ = (uint)fVar14 >> 0x18;
            euler_06.z._3_1_ = 0;
            pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&stack0xffffff73,euler_06,(MethodInfo *)0x0);
            pOVar33 = (Object__Class *)0x0;
            if (pTVar16 != (Transform *)0x0) {
              fVar14 = pQVar20->z;
              fVar24 = pQVar20->w;
              value_04.y._1_2_ = (short)((uint)pQVar20->y >> 8);
              value_04._0_5_ = *(undefined5 *)pQVar20;
              value_04.y._3_1_ = (char)((uint)pQVar20->y >> 0x18);
              value_04.z._0_1_ = SUB41(fVar14,0);
              value_04.z._1_2_ = (short)((uint)fVar14 >> 8);
              value_04.z._3_1_ = (char)((uint)fVar14 >> 0x18);
              value_04.w._0_1_ = SUB41(fVar24,0);
              value_04.w._1_1_ = (char)((uint)fVar24 >> 8);
              value_04.w._2_1_ = (char)((uint)fVar24 >> 0x10);
              value_04.w._3_1_ = (char)((uint)fVar24 >> 0x18);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar16,value_04,(MethodInfo *)0x0);
              uVar17 = func_?();
              *(undefined4 *)(iVar32 + 0xc) = uVar17;
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
  uVar9 = func_?();
  puVar45 = (undefined1 *)((int)&(pOVar33->_1).cctor_finished_or_no_cctor + 2);
  *puVar45 = *puVar45 + (char)extraout_DX + CARRY1((byte)((ushort)extraout_DX >> 8),bVar2);
  in_AF = 9 < ((byte)uVar9 & 0xf) | in_AF;
  puVar46 = &(pOVar33->_1).cctor_thread;
  *(char *)puVar46 = (char)*puVar46 + (char)((ushort)uVar9 >> 8);
  in_AF = 9 < ((byte)uVar9 + in_AF * -6 & 0xf) | in_AF;
  bVar2 = (byte)extraout_CX + (byte)&stack0xffffffab;
  bVar47 = CARRY1((byte)extraout_CX,(byte)&stack0xffffffab) || CARRY1(bVar2,in_AF);
  cVar48 = bVar2 + in_AF;
  if ((POPCOUNT(cVar48) & 1U) != 0) {
    cVar49 = (char)((ushort)extraout_CX >> 8);
    cVar50 = cVar48 + cVar49;
    if ((SCARRY1(cVar48,cVar49) != SCARRY1(cVar50,bVar47)) != (char)(cVar50 + bVar47) < '\0') {
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
  fVar14 = 0.0;
  uVar51 = uVar31;
  switch(*(undefined4 *)(uVar31 + 8)) {
  case 0:
    *(undefined4 *)(uVar31 + 8) = 0xffffffff;
    if ((pOVar33 == (Object__Class *)0x0) ||
       (pGVar39 = (Graphic *)(pOVar33->_0).byval_arg.data.typeHandle, pGVar39 == (Graphic *)0x0))
    goto code_?;
    pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        (pGVar39,(MethodInfo *)0x0);
    if (pRVar15 == (RectTransform *)0x0) goto code_?;
    value_08.y = (float)(int)pOVar33->interfaceOffsets;
    value_08.x = (float)(int)pOVar33->interfaceOffsets;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (pRVar15,value_08,(MethodInfo *)0x0);
    pCVar34 = (Component *)(pOVar33->_0).byval_arg.data.typeHandle;
    if (pCVar34 == (Component *)0x0) goto code_?;
    pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar34,(MethodInfo *)0x0);
    uVar7 = SUB41(pTVar16,0);
    uVar35 = (undefined3)((uint)pTVar16 >> 8);
    euler_01.y = (float)pCVar34;
    euler_01.x = (float)pCVar34;
    euler_01.z = 0.0;
    pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                        ((Quaternion *)&stack0xffffff2e,euler_01,(MethodInfo *)0x0);
    if ((Transform *)CONCAT31(uVar35,uVar7) == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              ((Transform *)CONCAT31(uVar35,uVar7),*pQVar20,(MethodInfo *)0x0);
    pBVar37 = (Behaviour *)(pOVar33->_0).byval_arg.data.typeHandle;
    if (pBVar37 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar37,1,(MethodInfo *)0x0);
    pCVar34 = (Component *)(pOVar33->_0).implementedInterfaces;
    if ((pCVar34 == (Component *)0x0) ||
       (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar34,(MethodInfo *)0x0), pTVar16 == (Transform *)0x0))
    goto code_?;
    value_00.z = 1.0;
    value_00.x = 1.0;
    value_00.y = 1.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (pTVar16,value_00,(MethodInfo *)0x0);
    pBVar37 = (Behaviour *)(pOVar33->_0).implementedInterfaces;
    if (pBVar37 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar37,0,(MethodInfo *)0x0);
    this_02 = (pOVar33->_0).properties;
    if ((this_02 == (PropertyInfo *)0x0) ||
       (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_02,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar22,0,(MethodInfo *)0x0);
    pCVar34 = (Component *)(pOVar33->_0).methods;
    if ((pCVar34 == (Component *)0x0) ||
       (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (pCVar34,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar22,0,(MethodInfo *)0x0);
    pIVar38 = (pOVar33->_0).declaringType;
    if (pIVar38 == (Il2CppClass *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar38,0,(MethodInfo *)0x0);
    pEVar41 = (pOVar33->_0).events;
    if ((pEVar41 == (EventInfo *)0x0) ||
       (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pEVar41,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar22,0,(MethodInfo *)0x0);
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
  in_AF = 0;
  if (_UNK_? <= *(float *)(uVar31 + 0x14) / *(float *)&(pOVar33->_0).byval_arg.attrs) {
    pAVar13 = (AnimationCurve *)(pOVar33->_0).this_arg.data.typeHandle;
    if (pAVar13 != (AnimationCurve *)0x0) {
      fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar13,1.0,(MethodInfo *)0x0);
      pGVar39 = (Graphic *)(pOVar33->_0).byval_arg.data.typeHandle;
      uVar7 = SUB41(fVar14,0);
      uVar35 = (undefined3)((uint)fVar14 >> 8);
      if (pGVar39 != (Graphic *)0x0) {
        pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            (pGVar39,(MethodInfo *)0x0);
        if (pRVar15 != (RectTransform *)0x0) {
          fVar14 = 0.0;
          value_09.y = (float)(int)pOVar33->interfaceOffsets * (float)CONCAT31(uVar35,uVar7);
          value_09.x = (float)(int)pOVar33->interfaceOffsets * (float)CONCAT31(uVar35,uVar7);
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar15,value_09,(MethodInfo *)0x0);
          *(undefined4 *)(uVar31 + 0x14) = 0;
code_?:
          in_AF = 0;
          if (_UNK_? <= *(float *)(uVar31 + 0x14) / (float)(pOVar33->_0).fields) {
            pCVar34 = (Component *)(pOVar33->_0).byval_arg.data.typeHandle;
            if (pCVar34 != (Component *)0x0) {
              pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  (pCVar34,(MethodInfo *)0x0);
              euler.y = (float)_UNK_?;
              euler.x = fVar14;
              euler.z = 0.0;
              pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                        Quaternion_Internal_FromEulerRad
                                  ((Quaternion *)&stack0xffffff16,euler,(MethodInfo *)0x0);
              if (pTVar16 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                          (pTVar16,*pQVar20,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                method_00 = TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29;
                pOVar25 = (Object *)func_?();
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          (pOVar25,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                pOVar25[1].klass = (Object__Class *)0x0;
                pOVar25[2].klass = pOVar33;
                func_?();
                UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                MonoBehaviour_StartCoroutine_Auto
                          ((MonoBehaviour *)pOVar33,(IEnumerator *)pOVar25,(MethodInfo *)0x0);
                uVar17 = func_?();
                *(undefined4 *)(uVar51 + 0xc) = uVar17;
                func_?();
                *(undefined4 *)(uVar51 + 8) = 3;
                return 1;
              }
            }
          }
          else {
            uVar7 = (undefined1)*(undefined4 *)(uVar31 + 0x14);
            uVar35 = (undefined3)((uint)*(undefined4 *)(uVar31 + 0x14) >> 8);
            fVar24 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                               ((MethodInfo *)0x0);
            fVar24 = fVar24 + (float)CONCAT31(uVar35,uVar7);
            *(float *)(uVar31 + 0x14) = fVar24;
            pIVar38 = (pOVar33->_0).klass;
            if (pIVar38 != (Il2CppClass *)0x0) {
              fVar24 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                       AnimationCurve_Evaluate
                                 ((AnimationCurve *)pIVar38,fVar24 / (float)(pOVar33->_0).fields,
                                  (MethodInfo *)0x0);
              pCVar34 = (Component *)(pOVar33->_0).byval_arg.data.typeHandle;
              uVar7 = SUB41(fVar24,0);
              uVar51 = (uint)fVar24 >> 8;
              if (pCVar34 != (Component *)0x0) {
                pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform(pCVar34,(MethodInfo *)0x0);
                euler_00.y = (float)CONCAT31((int3)uVar51,uVar7) * _UNK_? * _UNK_?;
                euler_00.x = fVar14;
                euler_00.z = 0.0;
                pQVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                          Quaternion_Internal_FromEulerRad
                                    ((Quaternion *)&stack0xffffff16,euler_00,(MethodInfo *)0x0);
                if (pTVar16 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                            (pTVar16,*pQVar20,(MethodInfo *)0x0);
                  uVar17 = func_?();
                  *(undefined4 *)(uVar31 + 0xc) = uVar17;
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
    uVar7 = (undefined1)*(undefined4 *)(uVar31 + 0x14);
    uVar35 = (undefined3)((uint)*(undefined4 *)(uVar31 + 0x14) >> 8);
    fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar14 = fVar14 + (float)CONCAT31(uVar35,uVar7);
    *(float *)(uVar31 + 0x14) = fVar14;
    pAVar13 = (AnimationCurve *)(pOVar33->_0).this_arg.data.typeHandle;
    if (pAVar13 != (AnimationCurve *)0x0) {
      fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                         (pAVar13,fVar14 / *(float *)&(pOVar33->_0).byval_arg.attrs,(MethodInfo *)0x0
                         );
      pGVar39 = (Graphic *)(pOVar33->_0).byval_arg.data.typeHandle;
      uVar7 = SUB41(fVar14,0);
      uVar35 = (undefined3)((uint)fVar14 >> 8);
      if ((pGVar39 != (Graphic *)0x0) &&
         (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              (pGVar39,(MethodInfo *)0x0), pRVar15 != (RectTransform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
        RectTransform_SetSizeWithCurrentAnchors
                  (pRVar15,RectTransform_Axis__Enum_Horizontal,
                   (float)(int)pOVar33->interfaceOffsets * (float)CONCAT31(uVar35,uVar7),
                   (MethodInfo *)0x0);
        pGVar39 = (Graphic *)(pOVar33->_0).byval_arg.data.typeHandle;
        if ((pGVar39 != (Graphic *)0x0) &&
           (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar39,(MethodInfo *)0x0), pRVar15 != (RectTransform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
          RectTransform_SetSizeWithCurrentAnchors
                    (pRVar15,RectTransform_Axis__Enum_Vertical,
                     (float)(int)pOVar33->interfaceOffsets * (float)CONCAT31(uVar35,uVar7),
                     (MethodInfo *)0x0);
          uVar17 = func_?();
          *(undefined4 *)(uVar31 + 0xc) = uVar17;
          func_?();
          *(undefined4 *)(uVar31 + 8) = 1;
          return 1;
        }
      }
    }
  }
code_?:
  uVar17 = func_?();
  in_AF = 9 < ((byte)uVar17 & 0xf) | in_AF;
  uVar31 = CONCAT31((int3)((uint)uVar17 >> 8),(byte)uVar17 + in_AF * -6) & 0xffffff0f;
  pcVar26 = (char *)(CONCAT22((short)(uVar31 >> 0x10),
                             CONCAT11((char)((uint)uVar17 >> 8) - in_AF,(char)uVar31)) + 0x30103f7f)
  ;
  *pcVar26 = *pcVar26 + extraout_DL + in_AF;
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

