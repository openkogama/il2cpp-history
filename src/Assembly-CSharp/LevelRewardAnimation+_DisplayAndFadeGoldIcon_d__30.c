
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeGoldIcon>d__30::LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30_MoveNext(LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30 *this,MethodInfo *method)

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
    if ((pLVar8 != (LevelRewardAnimation *)0x0) && (pIVar12 = (pLVar8->fields).goldImage, pIVar12 != (Image *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pIVar12,1,(MethodInfo *)0x0);
      this_00 = (pLVar8->fields).nextLevelBadge;
      if (this_00 != (RawImage *)0x0) {
        uVar4 = 0;
        uVar5 = 0;
        uVar6 = 0;
        uVar7 = (undefined1)((uint)this_00 >> 0x18);
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)this_00,0,(MethodInfo *)0x0);
        pAVar13 = (pLVar8->fields).goldBounceEffect;
        if (pAVar13 != (AnimationCurve *)0x0) {
          uVar9 = 0;
          uVar10 = 0;
          uVar11 = 0;
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate(pAVar13,0.0,(MethodInfo *)0x0);
          pIVar12 = (pLVar8->fields).goldImage;
          if ((pIVar12 != (Image *)0x0) && (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pIVar12,(MethodInfo *)0x0), pRVar15 != (RectTransform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar15,RectTransform_Axis__Enum_Horizontal,(float)(pLVar8->fields).targetSize * fVar14,(MethodInfo *)0x0);
            pIVar12 = (pLVar8->fields).goldImage;
            if (pIVar12 != (Image *)0x0) {
              bVar2 = 0x3f;
              pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pIVar12,(MethodInfo *)0x0);
              if (pRVar15 != (RectTransform *)0x0) {
                bVar2 = 0x3f;
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar15,RectTransform_Axis__Enum_Vertical,(float)(pLVar8->fields).targetSize * extraout_ECX,(MethodInfo *)0x0);
                pIVar12 = (pLVar8->fields).goldImage;
                if (pIVar12 != (Image *)0x0) {
                  pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar12,(MethodInfo *)0x0);
                  fVar14 = (float)CONCAT13(uVar11,CONCAT12(uVar10,uVar9));
                  fVar17 = -1.5707964;
                  this = (LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30 *)0x0;
                  pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffffd0,(Vector3)CONCAT84(CONCAT44(this,fVar17),fVar14),(MethodInfo *)0x0);
                  unaff_BL = SUB41(fVar14,0);
                  if (pTVar16 != (Transform *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar16,*pQVar18,(MethodInfo *)0x0);
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
      if (1.0 <= (pLVar1->fields)._currentTime_5__2 / (pLVar8->fields).rotateUIYAxisTime) {
        pIVar12 = (pLVar8->fields).goldImage;
        if (pIVar12 != (Image *)0x0) {
          pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar12,(MethodInfo *)0x0);
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
          pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffffc0,euler_07,(MethodInfo *)0x0);
          if (pTVar16 != (Transform *)0x0) {
            fVar14 = pQVar18->z;
            uVar4 = SUB41(pTVar16,0);
            uVar5 = (undefined1)((uint)pTVar16 >> 8);
            uVar6 = (undefined1)((uint)pTVar16 >> 0x10);
            value_06.w._0_3_ = SUB43(pQVar18->w,0);
            value_06.z._3_1_ = (char)((uint)fVar14 >> 0x18);
            uVar7 = 0x10;
            value_06.y._2_1_ = (char)((uint)pQVar18->y >> 0x10);
            value_06._0_6_ = *(undefined6 *)pQVar18;
            value_06.y._3_1_ = (char)((uint)pQVar18->y >> 0x18);
            value_06.z._0_2_ = SUB42(fVar14,0);
            value_06.z._2_1_ = (char)((uint)fVar14 >> 0x10);
            value_06.w._3_1_ = (char)((uint)pQVar18->w >> 0x18);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar16,value_06,(MethodInfo *)0x0);
            pTVar19 = (pLVar8->fields).header;
            if (pTVar19 != (Text *)0x0) {
              bVar2 = 0;
              pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pTVar19,(MethodInfo *)0x0);
              if (pGVar20 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar20,1,(MethodInfo *)0x0);
                pTVar19 = (pLVar8->fields).header;
                bVar2 = 0x3f;
                TM::TM__(StringLiteral_REWARD_,(MethodInfo *)pTVar19);
                if (pTVar19 != (Text *)0x0) {
                  unaff_BL = (char)(pTVar19->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
                  (*(code *)(pTVar19->klass->vtable).set_text.method)();
                  pTVar19 = (pLVar8->fields).goldText;
                  if ((pTVar19 != (Text *)0x0) && (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pTVar19,(MethodInfo *)0x0), pGVar20 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar20,1,(MethodInfo *)0x0);
                    pCVar21 = (pLVar8->fields).claimButton;
                    if ((pCVar21 != (CanvasGroup *)0x0) && (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pCVar21,(MethodInfo *)0x0), pGVar20 != (GameObject *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar20,1,(MethodInfo *)0x0);
                      pCVar21 = (pLVar8->fields).claimButton;
                      if (pCVar21 != (CanvasGroup *)0x0) {
                        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar21,0.0,(MethodInfo *)0x0);
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
        fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
        (pLVar1->fields)._currentTime_5__2 = fVar22 + fVar14;
        pAVar13 = (pLVar8->fields).rotateUIYAxisIn;
        if (pAVar13 != (AnimationCurve *)0x0) {
          uVar7 = 0;
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate(pAVar13,(fVar22 + fVar14) / (pLVar8->fields).rotateUIYAxisTime,(MethodInfo *)0x0);
          pIVar12 = (pLVar8->fields).goldImage;
          if (pIVar12 != (Image *)0x0) {
            pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar12,(MethodInfo *)0x0);
            fVar14 = (fVar14 * 90.0 - 90.0) * 0.017453292;
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
            pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffffc0,euler_08,(MethodInfo *)0x0);
            pLVar8 = (LevelRewardAnimation *)0x0;
            if (pTVar16 != (Transform *)0x0) {
              value_07.y._0_3_ = SUB43(pQVar18->y,0);
              value_07.x._3_1_ = (char)((uint)pQVar18->x >> 0x18);
              value_07.z._0_3_ = SUB43(pQVar18->z,0);
              value_07.y._3_1_ = (char)((uint)pQVar18->y >> 0x18);
              value_07.w._0_3_ = SUB43(pQVar18->w,0);
              value_07.z._3_1_ = (char)((uint)pQVar18->z >> 0x18);
              value_07.x._0_3_ = SUB43(pQVar18->x,0);
              value_07.w._3_1_ = (char)((uint)pQVar18->w >> 0x18);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar16,value_07,(MethodInfo *)0x0);
              pOVar23 = (Object *)func_?();
              (pLVar1->fields).__2__current = pOVar23;
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
      if (1.0 <= (pLVar1->fields)._currentTime_5__2 / (pLVar8->fields).goldImageDisplayTime) {
        pAVar13 = (pLVar8->fields).goldBounceEffect;
        if (pAVar13 != (AnimationCurve *)0x0) {
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate(pAVar13,1.0,(MethodInfo *)0x0);
          pCVar21 = (pLVar8->fields).claimButton;
          if (pCVar21 != (CanvasGroup *)0x0) {
            uVar4 = 0;
            uVar5 = 0;
            uVar6 = 0x80;
            uVar7 = (undefined1)((uint)pCVar21 >> 0x18);
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar21,1.0,(MethodInfo *)0x0);
            pIVar12 = (pLVar8->fields).goldImage;
            if ((pIVar12 != (Image *)0x0) && (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pIVar12,(MethodInfo *)0x0), pRVar15 != (RectTransform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar15,RectTransform_Axis__Enum_Horizontal,(float)(pLVar8->fields).targetSize * fVar14,(MethodInfo *)0x0);
              pIVar12 = (pLVar8->fields).goldImage;
              if ((pIVar12 != (Image *)0x0) && (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pIVar12,(MethodInfo *)0x0), pRVar15 != (RectTransform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar15,RectTransform_Axis__Enum_Vertical,(float)(pLVar8->fields).targetSize * fVar14,(MethodInfo *)0x0);
                pOVar23 = (Object *)func_?();
                (pLVar1->fields).__2__current = pOVar23;
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
        fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
        (pLVar1->fields)._currentTime_5__2 = fVar22 + fVar14;
        pAVar13 = (pLVar8->fields).goldBounceEffect;
        if (pAVar13 != (AnimationCurve *)0x0) {
          uVar7 = 0;
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate(pAVar13,(fVar22 + fVar14) / (pLVar8->fields).goldImageDisplayTime,(MethodInfo *)0x0);
          pIVar12 = (pLVar8->fields).goldImage;
          if (pIVar12 != (Image *)0x0) {
            uVar4 = 0x65;
            uVar5 = 0x72;
            uVar6 = 0x3f;
            pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pIVar12,(MethodInfo *)0x0);
            if (pRVar15 != (RectTransform *)0x0) {
              uVar4 = 0x8d;
              uVar5 = 0x72;
              uVar6 = 0x3f;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar15,RectTransform_Axis__Enum_Horizontal,(float)(pLVar8->fields).targetSize * fVar14,(MethodInfo *)0x0);
              pIVar12 = (pLVar8->fields).goldImage;
              if ((pIVar12 != (Image *)0x0) && (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pIVar12,(MethodInfo *)0x0), pRVar15 != (RectTransform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar15,RectTransform_Axis__Enum_Vertical,(float)(pLVar8->fields).targetSize * fVar14,(MethodInfo *)0x0);
                pAVar13 = (pLVar8->fields).goldFadeInCurve;
                if (pAVar13 != (AnimationCurve *)0x0) {
                  pCVar21 = (CanvasGroup *)((pLVar1->fields)._currentTime_5__2 / (pLVar8->fields).goldImageDisplayTime);
                  bVar2 = 0x3f;
                  fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate(pAVar13,(float)pCVar21,(MethodInfo *)0x0);
                  if (pCVar21 != (CanvasGroup *)0x0) {
                    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar21,fVar14,(MethodInfo *)0x0);
                    pOVar23 = (Object *)func_?();
                    (pLVar1->fields).__2__current = pOVar23;
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
  pcVar24 = (char *)((int)&pLVar1[4].fields.__2__current + 3);
  *pcVar24 = *pcVar24 + extraout_DH;
  in_AF = 9 < ((byte)uVar9 & 0xf) | in_AF;
  bVar25 = (byte)uVar9 + in_AF * -6 & 0xf;
  bVar26 = (char)((ushort)uVar9 >> 8) - in_AF;
  if (SCARRY1(bVar25,bVar26) != SCARRY1(bVar25 + bVar26,in_AF)) {
    if ((char)(unaff_BL + (char)((uint)&stack0xfffffffc >> 8) + (CARRY1(bVar25,bVar26) || CARRY1(bVar25 + bVar26,in_AF))) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar27 = (code *)swi(3);
    bVar28 = (*pcVar27)();
    return bVar28;
  }
  uVar29 = CONCAT31((int3)pLVar8,(char)((uint)pLVar1 >> 0x18));
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  iVar30 = CONCAT13(uVar6,CONCAT12(uVar5,CONCAT11(uVar4,uVar7)));
  pOVar31 = *(Object__Class **)(iVar30 + 0x10);
  uVar32 = 0;
  uVar11 = 0;
  uVar10 = 0;
  switch(*(undefined4 *)(iVar30 + 8)) {
  case 0:
    *(undefined4 *)(iVar30 + 8) = 0xffffffff;
    if ((pOVar31 != (Object__Class *)0x0) && (pCVar33 = *(Component **)&(pOVar31->_0).this_arg.attrs, pCVar33 != (Component *)0x0)) {
      pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar33,(MethodInfo *)0x0);
      uVar7 = SUB41(pTVar16,0);
      uVar9 = (undefined2)((uint)pTVar16 >> 8);
      uVar4 = (undefined1)((uint)pTVar16 >> 0x18);
      uVar34 = (undefined3)((uint)uVar32 >> 8);
      uVar29 = 0;
      euler_03._3_4_ = (int)(CONCAT44(0xbfc90fdb,CONCAT13(uVar10,uVar34)) >> 0x18);
      euler_03.x._0_3_ = uVar34;
      euler_03._7_4_ = 0xbf;
      euler_03.z._3_1_ = 0;
      pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffff83,euler_03,(MethodInfo *)0x0);
      uVar34 = CONCAT21(uVar9,uVar7);
      if (CONCAT13(uVar4,uVar34) != 0) {
        uVar32 = CONCAT31(SUB43(pQVar18->z,0),(char)((uint)pQVar18->y >> 0x18));
        uVar35._1_3_ = SUB43(pQVar18->w,0);
        uVar35._0_1_ = (char)((uint)pQVar18->z >> 0x18);
        uVar29 = CONCAT31(uVar34,0x10);
        value_01.y._1_2_ = (short)((uint)pQVar18->y >> 8);
        value_01._0_5_ = *(undefined5 *)pQVar18;
        value_01._7_4_ = uVar32;
        value_01._11_4_ = uVar35;
        value_01.w._3_1_ = (char)((uint)pQVar18->w >> 0x18);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation((Transform *)CONCAT13(uVar4,uVar34),value_01,(MethodInfo *)0x0);
        uVar11 = (undefined1)uVar35;
        pBVar36 = *(Behaviour **)&(pOVar31->_0).this_arg.attrs;
        if (pBVar36 != (Behaviour *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled(pBVar36,1,(MethodInfo *)0x0);
          pBVar36 = (Behaviour *)(pOVar31->_0).byval_arg.data.typeHandle;
          if (pBVar36 != (Behaviour *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled(pBVar36,0,(MethodInfo *)0x0);
            pIVar37 = (pOVar31->_0).castClass;
            if (pIVar37 != (Il2CppClass *)0x0) {
              fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate((AnimationCurve *)pIVar37,0.0,(MethodInfo *)0x0);
              pGVar38 = *(Graphic **)&(pOVar31->_0).this_arg.attrs;
              uVar10 = SUB41(fVar14,0);
              uVar9 = (undefined2)((uint)fVar14 >> 8);
              uVar39 = (undefined1)((uint)fVar14 >> 0x18);
              if ((pGVar38 != (Graphic *)0x0) && (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar38,(MethodInfo *)0x0), pRVar15 != (RectTransform *)0x0)) {
                uVar7 = SUB41(pRVar15,0);
                uVar4 = (undefined1)((uint)pRVar15 >> 8);
                uVar5 = (undefined1)((uint)pRVar15 >> 0x10);
                uVar6 = (undefined1)((uint)pRVar15 >> 0x18);
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar15,RectTransform_Axis__Enum_Horizontal,(float)(int)pOVar31->interfaceOffsets * (float)CONCAT13(uVar39,CONCAT21(uVar9,uVar10)),(MethodInfo *)0x0);
                pGVar38 = *(Graphic **)&(pOVar31->_0).this_arg.attrs;
                if ((pGVar38 != (Graphic *)0x0) && (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar38,(MethodInfo *)0x0), pRVar15 != (RectTransform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar15,RectTransform_Axis__Enum_Vertical,(float)(int)pOVar31->interfaceOffsets * (float)CONCAT13(uVar39,CONCAT21(uVar9,uVar10)),(MethodInfo *)0x0);
                  *(undefined4 *)(iVar30 + 0x14) = 0;
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
    *(undefined4 *)(iVar30 + 8) = 0xffffffff;
    if (pOVar31 != (Object__Class *)0x0) {
code_?:
      in_AF = 0;
      if (1.0 <= *(float *)(iVar30 + 0x14) / (float)(pOVar31->_0).fields) {
        pBVar36 = (Behaviour *)(pOVar31->_0).implementedInterfaces;
        if (pBVar36 != (Behaviour *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled(pBVar36,1,(MethodInfo *)0x0);
          pEVar40 = (pOVar31->_0).events;
          if (pEVar40 != (EventInfo *)0x0) {
            uVar29 = CONCAT31((int3)pEVar40,0x10);
            pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pEVar40,(MethodInfo *)0x0);
            if (pGVar20 != (GameObject *)0x0) {
              uVar29 = CONCAT31(0x3f77bc,(char)uVar29);
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar20,1,(MethodInfo *)0x0);
              pEVar40 = (pOVar31->_0).events;
              uVar10 = 0;
              uVar32 = 0;
              uVar11 = SUB41(pEVar40,0);
              uVar39 = (undefined1)((uint)pEVar40 >> 8);
              uVar41 = (undefined1)((uint)pEVar40 >> 0x10);
              uVar42 = (undefined1)((uint)pEVar40 >> 0x18);
              TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
              piVar43 = (int *)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar39,uVar11)));
              if (piVar43 != (int *)0x0) {
                (**(code **)(*piVar43 + 0x318))();
                pCVar33 = *(Component **)&(pOVar31->_0).this_arg.attrs;
                if (pCVar33 != (Component *)0x0) {
                  pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar33,(MethodInfo *)0x0);
                  uVar11 = SUB41(pTVar16,0);
                  uVar39 = (undefined1)((uint)pTVar16 >> 8);
                  uVar41 = (undefined1)((uint)pTVar16 >> 0x10);
                  uVar42 = (undefined1)((uint)pTVar16 >> 0x18);
                  uVar32 = CONCAT13(uVar10,(int3)((uint)uVar32 >> 8));
                  euler_02.y = (float)uVar32;
                  euler_02.x = (float)uVar32;
                  euler_02.z = 0.0;
                  pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffff83,euler_02,(MethodInfo *)0x0);
                  pTVar16 = (Transform *)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar39,uVar11)));
                  if (pTVar16 != (Transform *)0x0) {
                    value.w._1_2_ = (short)((uint)pQVar18->w >> 8);
                    value._0_13_ = *(undefined1 (*) [13])pQVar18;
                    value.w._3_1_ = (char)((uint)pQVar18->w >> 0x18);
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar16,value,(MethodInfo *)0x0);
                    *(undefined4 *)(iVar30 + 0x14) = 0;
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar35 = *(undefined4 *)(iVar30 + 0x14);
        uVar7 = (undefined1)uVar35;
        uVar9 = (undefined2)((uint)uVar35 >> 8);
        uVar4 = (undefined1)((uint)uVar35 >> 0x18);
        fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
        fVar14 = fVar14 + (float)CONCAT13(uVar4,CONCAT21(uVar9,uVar7));
        *(float *)(iVar30 + 0x14) = fVar14;
        this_01 = (pOVar31->_0).interopData;
        if (this_01 != (Il2CppInteropData *)0x0) {
          uVar29 = uVar29 & 0xffffff00;
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate((AnimationCurve *)this_01,fVar14 / (float)(pOVar31->_0).fields,(MethodInfo *)0x0);
          pCVar33 = *(Component **)&(pOVar31->_0).this_arg.attrs;
          uVar7 = SUB41(fVar14,0);
          uVar9 = (undefined2)((uint)fVar14 >> 8);
          uVar4 = (undefined1)((uint)fVar14 >> 0x18);
          if (pCVar33 != (Component *)0x0) {
            uVar34 = (undefined3)((uint)uVar32 >> 8);
            pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar33,(MethodInfo *)0x0);
            fVar14 = ((float)CONCAT13(uVar4,CONCAT21(uVar9,uVar7)) * 90.0 - 90.0) * 0.017453292;
            uVar29 = CONCAT31((int3)(Quaternion *)&stack0xffffff73,0x10);
            euler_05.x._3_1_ = uVar11;
            euler_05.x._0_3_ = uVar34;
            euler_05.y._0_1_ = SUB41(fVar14,0);
            euler_05.y._1_2_ = (short)((uint)fVar14 >> 8);
            euler_05._7_4_ = (uint)fVar14 >> 0x18;
            euler_05.z._3_1_ = 0;
            pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffff73,euler_05,(MethodInfo *)0x0);
            pOVar31 = (Object__Class *)0x0;
            if (pTVar16 != (Transform *)0x0) {
              fVar14 = pQVar18->z;
              fVar22 = pQVar18->w;
              value_03.y._1_2_ = (short)((uint)pQVar18->y >> 8);
              value_03._0_5_ = *(undefined5 *)pQVar18;
              value_03.y._3_1_ = (char)((uint)pQVar18->y >> 0x18);
              value_03.z._0_1_ = SUB41(fVar14,0);
              value_03.z._1_2_ = (short)((uint)fVar14 >> 8);
              value_03.z._3_1_ = (char)((uint)fVar14 >> 0x18);
              value_03.w._0_1_ = SUB41(fVar22,0);
              value_03.w._1_1_ = (char)((uint)fVar22 >> 8);
              value_03.w._2_1_ = (char)((uint)fVar22 >> 0x10);
              value_03.w._3_1_ = (char)((uint)fVar22 >> 0x18);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar16,value_03,(MethodInfo *)0x0);
              uVar32 = func_?();
              *(undefined4 *)(iVar30 + 0xc) = uVar32;
              func_?();
              *(undefined4 *)(iVar30 + 8) = 1;
              return 1;
            }
          }
        }
      }
    }
    break;
  case 2:
    *(undefined4 *)(iVar30 + 8) = 0xffffffff;
    if (pOVar31 != (Object__Class *)0x0) {
code_?:
      in_AF = 0;
      if (1.0 <= *(float *)(iVar30 + 0x14) / (float)(pOVar31->_0).element_class) {
        pIVar37 = (pOVar31->_0).castClass;
        if (pIVar37 != (Il2CppClass *)0x0) {
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate((AnimationCurve *)pIVar37,1.0,(MethodInfo *)0x0);
          pGVar38 = *(Graphic **)&(pOVar31->_0).this_arg.attrs;
          uVar10 = SUB41(fVar14,0);
          uVar9 = (undefined2)((uint)fVar14 >> 8);
          uVar39 = (undefined1)((uint)fVar14 >> 0x18);
          if (pGVar38 != (Graphic *)0x0) {
            uVar29 = CONCAT31((int3)pGVar38,0x10);
            pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar38,(MethodInfo *)0x0);
            if (pRVar15 != (RectTransform *)0x0) {
              uVar11 = 0;
              uVar32 = 0;
              uVar29 = CONCAT31((int3)pRVar15,0x10);
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar15,RectTransform_Axis__Enum_Horizontal,(float)(int)pOVar31->interfaceOffsets * (float)CONCAT13(uVar39,CONCAT21(uVar9,uVar10)),(MethodInfo *)0x0);
              pGVar38 = *(Graphic **)&(pOVar31->_0).this_arg.attrs;
              if ((pGVar38 != (Graphic *)0x0) && (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar38,(MethodInfo *)0x0), pRVar15 != (RectTransform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar15,RectTransform_Axis__Enum_Vertical,(float)(int)pOVar31->interfaceOffsets * (float)CONCAT13(uVar39,CONCAT21(uVar9,uVar10)),(MethodInfo *)0x0);
                pEVar40 = (pOVar31->_0).events;
                if ((pEVar40 != (EventInfo *)0x0) && (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pEVar40,(MethodInfo *)0x0), pGVar20 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar20,0,(MethodInfo *)0x0);
                  *(undefined4 *)(iVar30 + 0x14) = 0;
                  goto code_?;
                }
              }
            }
          }
        }
      }
      else {
        uVar32 = *(undefined4 *)(iVar30 + 0x14);
        uVar7 = (undefined1)uVar32;
        uVar4 = (undefined1)((uint)uVar32 >> 8);
        uVar5 = (undefined1)((uint)uVar32 >> 0x10);
        uVar6 = (undefined1)((uint)uVar32 >> 0x18);
        fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
        fVar14 = fVar14 + (float)CONCAT13(uVar6,CONCAT12(uVar5,CONCAT11(uVar4,uVar7)));
        *(float *)(iVar30 + 0x14) = fVar14;
        pIVar37 = (pOVar31->_0).castClass;
        if (pIVar37 != (Il2CppClass *)0x0) {
          uVar29 = uVar29 & 0xffffff00;
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate((AnimationCurve *)pIVar37,fVar14 / (float)(pOVar31->_0).element_class,(MethodInfo *)0x0);
          pGVar38 = *(Graphic **)&(pOVar31->_0).this_arg.attrs;
          uVar7 = SUB41(fVar14,0);
          uVar9 = (undefined2)((uint)fVar14 >> 8);
          uVar4 = (undefined1)((uint)fVar14 >> 0x18);
          if (pGVar38 != (Graphic *)0x0) {
            uVar29 = CONCAT31(0x3f78ec,(char)uVar29);
            pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar38,(MethodInfo *)0x0);
            if (pRVar15 != (RectTransform *)0x0) {
              uVar29 = CONCAT31(0x3f7914,(char)uVar29);
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar15,RectTransform_Axis__Enum_Horizontal,(float)(int)pOVar31->interfaceOffsets * (float)CONCAT13(uVar4,CONCAT21(uVar9,uVar7)),(MethodInfo *)0x0);
              pGVar38 = *(Graphic **)&(pOVar31->_0).this_arg.attrs;
              if ((pGVar38 != (Graphic *)0x0) && (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar38,(MethodInfo *)0x0), pRVar15 != (RectTransform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar15,RectTransform_Axis__Enum_Vertical,(float)(int)pOVar31->interfaceOffsets * (float)CONCAT13(uVar4,CONCAT21(uVar9,uVar7)),(MethodInfo *)0x0);
                pAVar13 = (AnimationCurve *)(pOVar31->_0).nestedTypes;
                if (pAVar13 != (AnimationCurve *)0x0) {
                  fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate(pAVar13,*(float *)(iVar30 + 0x14) / (float)(pOVar31->_0).element_class,(MethodInfo *)0x0);
                  pCVar33 = (Component *)(pOVar31->_0).implementedInterfaces;
                  uVar7 = SUB41(fVar14,0);
                  uVar4 = (undefined1)((uint)fVar14 >> 8);
                  uVar5 = (undefined1)((uint)fVar14 >> 0x10);
                  uVar6 = (undefined1)((uint)fVar14 >> 0x18);
                  if (pCVar33 != (Component *)0x0) {
                    pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar33,(MethodInfo *)0x0);
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
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale(pTVar16,value_05,(MethodInfo *)0x0);
                      uVar32 = func_?();
                      *(undefined4 *)(iVar30 + 0xc) = uVar32;
                      func_?();
                      *(undefined4 *)(iVar30 + 8) = 2;
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
    *(undefined4 *)(iVar30 + 8) = 0xffffffff;
    if (pOVar31 != (Object__Class *)0x0) {
code_?:
      in_AF = 0;
      if (1.0 <= *(float *)(iVar30 + 0x14) / (float)(pOVar31->_0).fields) {
        pCVar33 = *(Component **)&(pOVar31->_0).this_arg.attrs;
        if (pCVar33 != (Component *)0x0) {
          pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar33,(MethodInfo *)0x0);
          uVar34 = (undefined3)((uint)uVar32 >> 8);
          uVar29 = 0;
          euler_04._3_4_ = (int)(CONCAT44(0x3fc90fdb,CONCAT13(uVar11,uVar34)) >> 0x18);
          euler_04.x._0_3_ = uVar34;
          euler_04._7_4_ = 0x3f;
          euler_04.z._3_1_ = 0;
          pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffff73,euler_04,(MethodInfo *)0x0);
          iVar30 = 0;
          if (pTVar16 != (Transform *)0x0) {
            value_02.z._0_3_ = SUB43(pQVar18->z,0);
            value_02.y._3_1_ = (char)((uint)pQVar18->y >> 0x18);
            value_02.w._0_3_ = SUB43(pQVar18->w,0);
            value_02.z._3_1_ = (char)((uint)pQVar18->z >> 0x18);
            value_02.y._1_2_ = (short)((uint)pQVar18->y >> 8);
            value_02._0_5_ = *(undefined5 *)pQVar18;
            value_02.w._3_1_ = (char)((uint)pQVar18->w >> 0x18);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar16,value_02,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            uVar10 = SUB41(TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30,0);
            uVar9 = (undefined2)((uint)TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30 >> 8);
            uVar11 = (undefined1)((uint)TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30 >> 0x18);
            pOVar23 = (Object *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55(pOVar23,ExceptionArgument__Enum_obj,(MethodInfo *)CONCAT13(uVar11,CONCAT21(uVar9,uVar10)));
            pOVar23[1].klass = (Object__Class *)0x0;
            pOVar23[2].klass = pOVar31;
            func_?();
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)pOVar31,(IEnumerator *)pOVar23,(MethodInfo *)0x0);
            uVar32 = func_?();
            iVar30 = CONCAT13(uVar6,CONCAT12(uVar5,CONCAT11(uVar4,uVar7)));
            *(undefined4 *)(iVar30 + 0xc) = uVar32;
            func_?();
            *(undefined4 *)(iVar30 + 8) = 4;
            return 1;
          }
        }
      }
      else {
        uVar35 = *(undefined4 *)(iVar30 + 0x14);
        uVar7 = (undefined1)uVar35;
        uVar9 = (undefined2)((uint)uVar35 >> 8);
        uVar4 = (undefined1)((uint)uVar35 >> 0x18);
        fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
        fVar14 = fVar14 + (float)CONCAT13(uVar4,CONCAT21(uVar9,uVar7));
        *(float *)(iVar30 + 0x14) = fVar14;
        pIVar37 = (pOVar31->_0).klass;
        if (pIVar37 != (Il2CppClass *)0x0) {
          uVar29 = uVar29 & 0xffffff00;
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate((AnimationCurve *)pIVar37,fVar14 / (float)(pOVar31->_0).fields,(MethodInfo *)0x0);
          pCVar33 = *(Component **)&(pOVar31->_0).this_arg.attrs;
          uVar7 = SUB41(fVar14,0);
          uVar9 = (undefined2)((uint)fVar14 >> 8);
          uVar4 = (undefined1)((uint)fVar14 >> 0x18);
          if (pCVar33 != (Component *)0x0) {
            uVar34 = (undefined3)((uint)uVar32 >> 8);
            pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar33,(MethodInfo *)0x0);
            fVar14 = (float)CONCAT13(uVar4,CONCAT21(uVar9,uVar7)) * 90.0 * 0.017453292;
            uVar29 = CONCAT31((int3)(Quaternion *)&stack0xffffff73,0x10);
            euler_06.x._3_1_ = uVar11;
            euler_06.x._0_3_ = uVar34;
            euler_06.y._0_1_ = SUB41(fVar14,0);
            euler_06.y._1_2_ = (short)((uint)fVar14 >> 8);
            euler_06._7_4_ = (uint)fVar14 >> 0x18;
            euler_06.z._3_1_ = 0;
            pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffff73,euler_06,(MethodInfo *)0x0);
            pOVar31 = (Object__Class *)0x0;
            if (pTVar16 != (Transform *)0x0) {
              fVar14 = pQVar18->z;
              fVar22 = pQVar18->w;
              value_04.y._1_2_ = (short)((uint)pQVar18->y >> 8);
              value_04._0_5_ = *(undefined5 *)pQVar18;
              value_04.y._3_1_ = (char)((uint)pQVar18->y >> 0x18);
              value_04.z._0_1_ = SUB41(fVar14,0);
              value_04.z._1_2_ = (short)((uint)fVar14 >> 8);
              value_04.z._3_1_ = (char)((uint)fVar14 >> 0x18);
              value_04.w._0_1_ = SUB41(fVar22,0);
              value_04.w._1_1_ = (char)((uint)fVar22 >> 8);
              value_04.w._2_1_ = (char)((uint)fVar22 >> 0x10);
              value_04.w._3_1_ = (char)((uint)fVar22 >> 0x18);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar16,value_04,(MethodInfo *)0x0);
              uVar32 = func_?();
              *(undefined4 *)(iVar30 + 0xc) = uVar32;
              func_?();
              *(undefined4 *)(iVar30 + 8) = 3;
              return 1;
            }
          }
        }
      }
    }
    break;
  case 4:
    *(undefined4 *)(iVar30 + 8) = 0xffffffff;
  default:
    return 0;
  }
  uVar9 = func_?();
  puVar44 = (undefined1 *)((int)&(pOVar31->_1).cctor_finished_or_no_cctor + 2);
  *puVar44 = *puVar44 + (char)extraout_DX + CARRY1((byte)((ushort)extraout_DX >> 8),bVar2);
  in_AF = 9 < ((byte)uVar9 & 0xf) | in_AF;
  puVar45 = &(pOVar31->_1).cctor_thread;
  *(char *)puVar45 = (char)*puVar45 + (char)((ushort)uVar9 >> 8);
  in_AF = 9 < ((byte)uVar9 + in_AF * -6 & 0xf) | in_AF;
  bVar2 = (byte)extraout_CX + (byte)&stack0xffffffab;
  bVar46 = CARRY1((byte)extraout_CX,(byte)&stack0xffffffab) || CARRY1(bVar2,in_AF);
  cVar47 = bVar2 + in_AF;
  if ((POPCOUNT(cVar47) & 1U) != 0) {
    cVar48 = (char)((ushort)extraout_CX >> 8);
    cVar49 = cVar47 + cVar48;
    if ((SCARRY1(cVar47,cVar48) != SCARRY1(cVar49,bVar46)) != (char)(cVar49 + bVar46) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar27 = (code *)swi(3);
    bVar28 = (*pcVar27)();
    return bVar28;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32,pOVar31,iVar30);
    cRam_? = '\x01';
  }
  pOVar31 = *(Object__Class **)(uVar29 + 0x10);
  fVar14 = 0.0;
  uVar50 = uVar29;
  switch(*(undefined4 *)(uVar29 + 8)) {
  case 0:
    *(undefined4 *)(uVar29 + 8) = 0xffffffff;
    if ((pOVar31 == (Object__Class *)0x0) || (pGVar38 = (Graphic *)(pOVar31->_0).byval_arg.data.typeHandle, pGVar38 == (Graphic *)0x0)) goto code_?;
    pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar38,(MethodInfo *)0x0);
    if (pRVar15 == (RectTransform *)0x0) goto code_?;
    value_08.y = (float)(int)pOVar31->interfaceOffsets;
    value_08.x = (float)(int)pOVar31->interfaceOffsets;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar15,value_08,(MethodInfo *)0x0);
    pCVar33 = (Component *)(pOVar31->_0).byval_arg.data.typeHandle;
    if (pCVar33 == (Component *)0x0) goto code_?;
    pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar33,(MethodInfo *)0x0);
    uVar7 = SUB41(pTVar16,0);
    uVar34 = (undefined3)((uint)pTVar16 >> 8);
    euler_01.y = (float)pCVar33;
    euler_01.x = (float)pCVar33;
    euler_01.z = 0.0;
    pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffff2e,euler_01,(MethodInfo *)0x0);
    if ((Transform *)CONCAT31(uVar34,uVar7) == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation((Transform *)CONCAT31(uVar34,uVar7),*pQVar18,(MethodInfo *)0x0);
    pBVar36 = (Behaviour *)(pOVar31->_0).byval_arg.data.typeHandle;
    if (pBVar36 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled(pBVar36,1,(MethodInfo *)0x0);
    pCVar33 = (Component *)(pOVar31->_0).implementedInterfaces;
    if ((pCVar33 == (Component *)0x0) || (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar33,(MethodInfo *)0x0), pTVar16 == (Transform *)0x0)) goto code_?;
    value_00.z = 1.0;
    value_00.x = 1.0;
    value_00.y = 1.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale(pTVar16,value_00,(MethodInfo *)0x0);
    pBVar36 = (Behaviour *)(pOVar31->_0).implementedInterfaces;
    if (pBVar36 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled(pBVar36,0,(MethodInfo *)0x0);
    this_02 = (pOVar31->_0).properties;
    if ((this_02 == (PropertyInfo *)0x0) || (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this_02,(MethodInfo *)0x0), pGVar20 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar20,0,(MethodInfo *)0x0);
    pCVar33 = (Component *)(pOVar31->_0).methods;
    if ((pCVar33 == (Component *)0x0) || (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject(pCVar33,(MethodInfo *)0x0), pGVar20 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar20,0,(MethodInfo *)0x0);
    pIVar37 = (pOVar31->_0).declaringType;
    if (pIVar37 == (Il2CppClass *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pIVar37,0,(MethodInfo *)0x0);
    pEVar40 = (pOVar31->_0).events;
    if ((pEVar40 == (EventInfo *)0x0) || (pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pEVar40,(MethodInfo *)0x0), pGVar20 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar20,0,(MethodInfo *)0x0);
    *(undefined4 *)(uVar29 + 0x14) = 0;
    break;
  case 1:
    *(undefined4 *)(uVar29 + 8) = 0xffffffff;
    if (pOVar31 == (Object__Class *)0x0) goto code_?;
    break;
  case 2:
    *(undefined4 *)(uVar29 + 8) = 0xffffffff;
    if (pOVar31 == (Object__Class *)0x0) goto code_?;
    goto code_?;
  case 3:
    *(undefined4 *)(uVar29 + 8) = 0xffffffff;
  default:
    return 0;
  }
  in_AF = 0;
  if (1.0 <= *(float *)(uVar29 + 0x14) / *(float *)&(pOVar31->_0).byval_arg.attrs) {
    pAVar13 = (AnimationCurve *)(pOVar31->_0).this_arg.data.typeHandle;
    if (pAVar13 != (AnimationCurve *)0x0) {
      fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate(pAVar13,1.0,(MethodInfo *)0x0);
      pGVar38 = (Graphic *)(pOVar31->_0).byval_arg.data.typeHandle;
      uVar7 = SUB41(fVar14,0);
      uVar34 = (undefined3)((uint)fVar14 >> 8);
      if (pGVar38 != (Graphic *)0x0) {
        pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar38,(MethodInfo *)0x0);
        if (pRVar15 != (RectTransform *)0x0) {
          fVar14 = 0.0;
          value_09.y = (float)(int)pOVar31->interfaceOffsets * (float)CONCAT31(uVar34,uVar7);
          value_09.x = (float)(int)pOVar31->interfaceOffsets * (float)CONCAT31(uVar34,uVar7);
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar15,value_09,(MethodInfo *)0x0);
          *(undefined4 *)(uVar29 + 0x14) = 0;
code_?:
          in_AF = 0;
          if (1.0 <= *(float *)(uVar29 + 0x14) / (float)(pOVar31->_0).fields) {
            pCVar33 = (Component *)(pOVar31->_0).byval_arg.data.typeHandle;
            if (pCVar33 != (Component *)0x0) {
              pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar33,(MethodInfo *)0x0);
              euler.y = 1.5707964;
              euler.x = fVar14;
              euler.z = 0.0;
              pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffff16,euler,(MethodInfo *)0x0);
              if (pTVar16 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar16,*pQVar18,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                method_00 = TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29;
                pOVar23 = (Object *)func_?();
                mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55(pOVar23,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                pOVar23[1].klass = (Object__Class *)0x0;
                pOVar23[2].klass = pOVar31;
                func_?();
                UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)pOVar31,(IEnumerator *)pOVar23,(MethodInfo *)0x0);
                uVar32 = func_?();
                *(undefined4 *)(uVar50 + 0xc) = uVar32;
                func_?();
                *(undefined4 *)(uVar50 + 8) = 3;
                return 1;
              }
            }
          }
          else {
            uVar7 = (undefined1)*(undefined4 *)(uVar29 + 0x14);
            uVar34 = (undefined3)((uint)*(undefined4 *)(uVar29 + 0x14) >> 8);
            fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
            fVar22 = fVar22 + (float)CONCAT31(uVar34,uVar7);
            *(float *)(uVar29 + 0x14) = fVar22;
            pIVar37 = (pOVar31->_0).klass;
            if (pIVar37 != (Il2CppClass *)0x0) {
              fVar22 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate((AnimationCurve *)pIVar37,fVar22 / (float)(pOVar31->_0).fields,(MethodInfo *)0x0);
              pCVar33 = (Component *)(pOVar31->_0).byval_arg.data.typeHandle;
              uVar7 = SUB41(fVar22,0);
              uVar50 = (uint)fVar22 >> 8;
              if (pCVar33 != (Component *)0x0) {
                pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar33,(MethodInfo *)0x0);
                euler_00.y = (float)CONCAT31((int3)uVar50,uVar7) * 90.0 * 0.017453292;
                euler_00.x = fVar14;
                euler_00.z = 0.0;
                pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffff16,euler_00,(MethodInfo *)0x0);
                if (pTVar16 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar16,*pQVar18,(MethodInfo *)0x0);
                  uVar32 = func_?();
                  *(undefined4 *)(uVar29 + 0xc) = uVar32;
                  func_?();
                  *(undefined4 *)(uVar29 + 8) = 2;
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
    uVar7 = (undefined1)*(undefined4 *)(uVar29 + 0x14);
    uVar34 = (undefined3)((uint)*(undefined4 *)(uVar29 + 0x14) >> 8);
    fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar14 = fVar14 + (float)CONCAT31(uVar34,uVar7);
    *(float *)(uVar29 + 0x14) = fVar14;
    pAVar13 = (AnimationCurve *)(pOVar31->_0).this_arg.data.typeHandle;
    if (pAVar13 != (AnimationCurve *)0x0) {
      fVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate(pAVar13,fVar14 / *(float *)&(pOVar31->_0).byval_arg.attrs,(MethodInfo *)0x0);
      pGVar38 = (Graphic *)(pOVar31->_0).byval_arg.data.typeHandle;
      uVar7 = SUB41(fVar14,0);
      uVar34 = (undefined3)((uint)fVar14 >> 8);
      if ((pGVar38 != (Graphic *)0x0) && (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar38,(MethodInfo *)0x0), pRVar15 != (RectTransform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar15,RectTransform_Axis__Enum_Horizontal,(float)(int)pOVar31->interfaceOffsets * (float)CONCAT31(uVar34,uVar7),(MethodInfo *)0x0);
        pGVar38 = (Graphic *)(pOVar31->_0).byval_arg.data.typeHandle;
        if ((pGVar38 != (Graphic *)0x0) && (pRVar15 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar38,(MethodInfo *)0x0), pRVar15 != (RectTransform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar15,RectTransform_Axis__Enum_Vertical,(float)(int)pOVar31->interfaceOffsets * (float)CONCAT31(uVar34,uVar7),(MethodInfo *)0x0);
          uVar32 = func_?();
          *(undefined4 *)(uVar29 + 0xc) = uVar32;
          func_?();
          *(undefined4 *)(uVar29 + 8) = 1;
          return 1;
        }
      }
    }
  }
code_?:
  uVar32 = func_?();
  in_AF = 9 < ((byte)uVar32 & 0xf) | in_AF;
  uVar29 = CONCAT31((int3)((uint)uVar32 >> 8),(byte)uVar32 + in_AF * -6) & 0xffffff0f;
  pcVar24 = (char *)(CONCAT22((short)(uVar29 >> 0x10),CONCAT11((char)((uint)uVar32 >> 8) - in_AF,(char)uVar29)) + 0x30103f7f);
  *pcVar24 = *pcVar24 + extraout_DL + in_AF;
  pcVar27 = (code *)swi(3);
  bVar28 = (*pcVar27)();
  return bVar28;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeGoldIcon>d__30::LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30_System_Collections_IEnumerator_Reset(LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  func_?(&MethodInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30__System_Collections_IEnumerator_Reset__);
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

