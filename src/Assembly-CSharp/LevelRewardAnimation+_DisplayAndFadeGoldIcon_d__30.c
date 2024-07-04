
/* WARNING: Instruction at (ram,0xADDR) overlaps instruction at (ram,0xADDR)
    */
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeGoldIcon>d__30::LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30_MoveNext(LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30 *this,MethodInfo *method)

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
    if ((pLVar6 != (LevelRewardAnimation *)0x0) && (pIVar10 = (pLVar6->fields).goldImage, pIVar10 != (Image *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pIVar10,1,(MethodInfo *)0x0);
      this_00 = (pLVar6->fields).nextLevelBadge;
      if (this_00 != (RawImage *)0x0) {
        uVar2 = 0;
        uVar3 = 0;
        uVar4 = 0;
        uVar5 = (undefined1)((uint)this_00 >> 0x18);
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)this_00,0,(MethodInfo *)0x0);
        pAVar11 = (pLVar6->fields).goldBounceEffect;
        if (pAVar11 != (AnimationCurve *)0x0) {
          uVar7 = 0;
          uVar8 = 0;
          uVar9 = 0;
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate(pAVar11,0.0,(MethodInfo *)0x0);
          pIVar10 = (pLVar6->fields).goldImage;
          if ((pIVar10 != (Image *)0x0) && (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pIVar10,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar13,RectTransform_Axis__Enum_Horizontal,(float)(pLVar6->fields).targetSize * fVar12,(MethodInfo *)0x0);
            pIVar10 = (pLVar6->fields).goldImage;
            if ((pIVar10 != (Image *)0x0) && (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pIVar10,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar13,RectTransform_Axis__Enum_Vertical,(float)(pLVar6->fields).targetSize * extraout_ECX,(MethodInfo *)0x0);
              pIVar10 = (pLVar6->fields).goldImage;
              if (pIVar10 != (Image *)0x0) {
                pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar10,(MethodInfo *)0x0);
                fVar15 = -1.5707964;
                this = (LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30 *)0x0;
                pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffffd0,(Vector3)CONCAT84(CONCAT44(this,fVar15),CONCAT13(uVar9,CONCAT12(uVar8,uVar7))),(MethodInfo *)0x0);
                if (pTVar14 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar14,*pQVar16,(MethodInfo *)0x0);
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
      if (1.0 <= (pLVar1->fields)._currentTime_5__2 / (pLVar6->fields).rotateUIYAxisTime) {
        pIVar10 = (pLVar6->fields).goldImage;
        if (pIVar10 != (Image *)0x0) {
          pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar10,(MethodInfo *)0x0);
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
          pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffffc0,euler_07,(MethodInfo *)0x0);
          if (pTVar14 != (Transform *)0x0) {
            fVar12 = pQVar16->z;
            uVar2 = SUB41(pTVar14,0);
            uVar3 = (undefined1)((uint)pTVar14 >> 8);
            uVar4 = (undefined1)((uint)pTVar14 >> 0x10);
            value_06.w._0_3_ = SUB43(pQVar16->w,0);
            value_06.z._3_1_ = (char)((uint)fVar12 >> 0x18);
            uVar5 = 0x10;
            value_06.y._2_1_ = (char)((uint)pQVar16->y >> 0x10);
            value_06._0_6_ = *(undefined6 *)pQVar16;
            value_06.y._3_1_ = (char)((uint)pQVar16->y >> 0x18);
            value_06.z._0_2_ = SUB42(fVar12,0);
            value_06.z._2_1_ = (char)((uint)fVar12 >> 0x10);
            value_06.w._3_1_ = (char)((uint)pQVar16->w >> 0x18);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar14,value_06,(MethodInfo *)0x0);
            pTVar17 = (pLVar6->fields).header;
            if ((pTVar17 != (Text *)0x0) && (pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pTVar17,(MethodInfo *)0x0), pGVar18 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar18,1,(MethodInfo *)0x0);
              pTVar17 = (pLVar6->fields).header;
              TM::TM__(StringLiteral_REWARD_,(MethodInfo *)pTVar17);
              if (pTVar17 != (Text *)0x0) {
                (*(code *)(pTVar17->klass->vtable).set_text.method)();
                pTVar17 = (pLVar6->fields).goldText;
                if ((pTVar17 != (Text *)0x0) && (pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pTVar17,(MethodInfo *)0x0), pGVar18 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar18,1,(MethodInfo *)0x0);
                  pCVar19 = (pLVar6->fields).claimButton;
                  if ((pCVar19 != (CanvasGroup *)0x0) && (pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pCVar19,(MethodInfo *)0x0), pGVar18 != (GameObject *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar18,1,(MethodInfo *)0x0);
                    pCVar19 = (pLVar6->fields).claimButton;
                    if (pCVar19 != (CanvasGroup *)0x0) {
                      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar19,0.0,(MethodInfo *)0x0);
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
        fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
        (pLVar1->fields)._currentTime_5__2 = fVar20 + fVar12;
        pAVar11 = (pLVar6->fields).rotateUIYAxisIn;
        if (pAVar11 != (AnimationCurve *)0x0) {
          uVar5 = 0;
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate(pAVar11,(fVar20 + fVar12) / (pLVar6->fields).rotateUIYAxisTime,(MethodInfo *)0x0);
          pIVar10 = (pLVar6->fields).goldImage;
          if (pIVar10 != (Image *)0x0) {
            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar10,(MethodInfo *)0x0);
            fVar12 = (fVar12 * 90.0 - 90.0) * 0.017453292;
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
            pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffffc0,euler_08,(MethodInfo *)0x0);
            pLVar6 = (LevelRewardAnimation *)0x0;
            if (pTVar14 != (Transform *)0x0) {
              value_07.y._0_3_ = SUB43(pQVar16->y,0);
              value_07.x._3_1_ = (char)((uint)pQVar16->x >> 0x18);
              value_07.z._0_3_ = SUB43(pQVar16->z,0);
              value_07.y._3_1_ = (char)((uint)pQVar16->y >> 0x18);
              value_07.w._0_3_ = SUB43(pQVar16->w,0);
              value_07.z._3_1_ = (char)((uint)pQVar16->z >> 0x18);
              value_07.x._0_3_ = SUB43(pQVar16->x,0);
              value_07.w._3_1_ = (char)((uint)pQVar16->w >> 0x18);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar14,value_07,(MethodInfo *)0x0);
              pOVar21 = (Object *)func_?();
              (pLVar1->fields).__2__current = pOVar21;
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
      if (1.0 <= (pLVar1->fields)._currentTime_5__2 / (pLVar6->fields).goldImageDisplayTime) {
        pAVar11 = (pLVar6->fields).goldBounceEffect;
        if (pAVar11 != (AnimationCurve *)0x0) {
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate(pAVar11,1.0,(MethodInfo *)0x0);
          pCVar19 = (pLVar6->fields).claimButton;
          if (pCVar19 != (CanvasGroup *)0x0) {
            uVar2 = 0;
            uVar3 = 0;
            uVar4 = 0x80;
            uVar5 = (undefined1)((uint)pCVar19 >> 0x18);
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar19,1.0,(MethodInfo *)0x0);
            pIVar10 = (pLVar6->fields).goldImage;
            if ((pIVar10 != (Image *)0x0) && (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pIVar10,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar13,RectTransform_Axis__Enum_Horizontal,(float)(pLVar6->fields).targetSize * fVar12,(MethodInfo *)0x0);
              pIVar10 = (pLVar6->fields).goldImage;
              if ((pIVar10 != (Image *)0x0) && (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pIVar10,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar13,RectTransform_Axis__Enum_Vertical,(float)(pLVar6->fields).targetSize * fVar12,(MethodInfo *)0x0);
                pOVar21 = (Object *)func_?();
                (pLVar1->fields).__2__current = pOVar21;
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
        fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
        (pLVar1->fields)._currentTime_5__2 = fVar20 + fVar12;
        pAVar11 = (pLVar6->fields).goldBounceEffect;
        if (pAVar11 != (AnimationCurve *)0x0) {
          uVar5 = 0;
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate(pAVar11,(fVar20 + fVar12) / (pLVar6->fields).goldImageDisplayTime,(MethodInfo *)0x0);
          pIVar10 = (pLVar6->fields).goldImage;
          if (pIVar10 != (Image *)0x0) {
            uVar2 = 0xa5;
            uVar3 = 0x74;
            uVar4 = 0x3f;
            pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pIVar10,(MethodInfo *)0x0);
            if (pRVar13 != (RectTransform *)0x0) {
              uVar2 = 0xcd;
              uVar3 = 0x74;
              uVar4 = 0x3f;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar13,RectTransform_Axis__Enum_Horizontal,(float)(pLVar6->fields).targetSize * fVar12,(MethodInfo *)0x0);
              pIVar10 = (pLVar6->fields).goldImage;
              if ((pIVar10 != (Image *)0x0) && (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pIVar10,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar13,RectTransform_Axis__Enum_Vertical,(float)(pLVar6->fields).targetSize * fVar12,(MethodInfo *)0x0);
                pAVar11 = (pLVar6->fields).goldFadeInCurve;
                if (pAVar11 != (AnimationCurve *)0x0) {
                  pCVar19 = (CanvasGroup *)((pLVar1->fields)._currentTime_5__2 / (pLVar6->fields).goldImageDisplayTime);
                  fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate(pAVar11,(float)pCVar19,(MethodInfo *)0x0);
                  if (pCVar19 != (CanvasGroup *)0x0) {
                    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar19,fVar12,(MethodInfo *)0x0);
                    pOVar21 = (Object *)func_?();
                    (pLVar1->fields).__2__current = pOVar21;
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
  cVar22 = '\0';
  func_?();
  pcVar23 = (char *)((int)&pLVar1[0x15602a4].fields.__4__this + 1);
  *pcVar23 = *pcVar23 + extraout_DH + cVar22;
  if (*pcVar23 != '\0') {
    pcVar24 = (code *)swi(3);
    bVar25 = (*pcVar24)();
    return bVar25;
  }
  uVar26 = CONCAT31((int3)pLVar6,(char)((uint)pLVar1 >> 0x18));
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  iVar27 = CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar5)));
  pOVar28 = *(Object__Class **)(iVar27 + 0x10);
  uVar29 = 0;
  uVar9 = 0;
  uVar8 = 0;
  switch(*(undefined4 *)(iVar27 + 8)) {
  case 0:
    *(undefined4 *)(iVar27 + 8) = 0xffffffff;
    if ((pOVar28 != (Object__Class *)0x0) && (pCVar30 = *(Component **)&(pOVar28->_0).this_arg.attrs, pCVar30 != (Component *)0x0)) {
      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar30,(MethodInfo *)0x0);
      uVar5 = SUB41(pTVar14,0);
      uVar7 = (undefined2)((uint)pTVar14 >> 8);
      uVar2 = (undefined1)((uint)pTVar14 >> 0x18);
      uVar31 = (undefined3)((uint)uVar29 >> 8);
      uVar26 = 0;
      euler_03._3_4_ = (int)(CONCAT44(0xbfc90fdb,CONCAT13(uVar8,uVar31)) >> 0x18);
      euler_03.x._0_3_ = uVar31;
      euler_03._7_4_ = 0xbf;
      euler_03.z._3_1_ = 0;
      pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffff83,euler_03,(MethodInfo *)0x0);
      uVar31 = CONCAT21(uVar7,uVar5);
      if (CONCAT13(uVar2,uVar31) != 0) {
        uVar29 = CONCAT31(SUB43(pQVar16->z,0),(char)((uint)pQVar16->y >> 0x18));
        uVar32._1_3_ = SUB43(pQVar16->w,0);
        uVar32._0_1_ = (char)((uint)pQVar16->z >> 0x18);
        uVar26 = CONCAT31(uVar31,0x10);
        value_01.y._1_2_ = (short)((uint)pQVar16->y >> 8);
        value_01._0_5_ = *(undefined5 *)pQVar16;
        value_01._7_4_ = uVar29;
        value_01._11_4_ = uVar32;
        value_01.w._3_1_ = (char)((uint)pQVar16->w >> 0x18);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation((Transform *)CONCAT13(uVar2,uVar31),value_01,(MethodInfo *)0x0);
        uVar9 = (undefined1)uVar32;
        pBVar33 = *(Behaviour **)&(pOVar28->_0).this_arg.attrs;
        if (pBVar33 != (Behaviour *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled(pBVar33,1,(MethodInfo *)0x0);
          pBVar33 = (Behaviour *)(pOVar28->_0).byval_arg.data.typeHandle;
          if (pBVar33 != (Behaviour *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled(pBVar33,0,(MethodInfo *)0x0);
            pIVar34 = (pOVar28->_0).castClass;
            if (pIVar34 != (Il2CppClass *)0x0) {
              fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate((AnimationCurve *)pIVar34,0.0,(MethodInfo *)0x0);
              pGVar35 = *(Graphic **)&(pOVar28->_0).this_arg.attrs;
              uVar8 = SUB41(fVar12,0);
              uVar7 = (undefined2)((uint)fVar12 >> 8);
              uVar36 = (undefined1)((uint)fVar12 >> 0x18);
              if ((pGVar35 != (Graphic *)0x0) && (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar35,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0)) {
                uVar5 = SUB41(pRVar13,0);
                uVar2 = (undefined1)((uint)pRVar13 >> 8);
                uVar3 = (undefined1)((uint)pRVar13 >> 0x10);
                uVar4 = (undefined1)((uint)pRVar13 >> 0x18);
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar13,RectTransform_Axis__Enum_Horizontal,(float)(int)pOVar28->interfaceOffsets * (float)CONCAT13(uVar36,CONCAT21(uVar7,uVar8)),(MethodInfo *)0x0);
                pGVar35 = *(Graphic **)&(pOVar28->_0).this_arg.attrs;
                if ((pGVar35 != (Graphic *)0x0) && (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar35,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar13,RectTransform_Axis__Enum_Vertical,(float)(int)pOVar28->interfaceOffsets * (float)CONCAT13(uVar36,CONCAT21(uVar7,uVar8)),(MethodInfo *)0x0);
                  *(undefined4 *)(iVar27 + 0x14) = 0;
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
    *(undefined4 *)(iVar27 + 8) = 0xffffffff;
    if (pOVar28 != (Object__Class *)0x0) {
code_?:
      if (1.0 <= *(float *)(iVar27 + 0x14) / (float)(pOVar28->_0).fields) {
        pBVar33 = (Behaviour *)(pOVar28->_0).implementedInterfaces;
        if (pBVar33 != (Behaviour *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled(pBVar33,1,(MethodInfo *)0x0);
          pEVar37 = (pOVar28->_0).events;
          if (pEVar37 != (EventInfo *)0x0) {
            uVar26 = CONCAT31((int3)pEVar37,0x10);
            pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pEVar37,(MethodInfo *)0x0);
            if (pGVar18 != (GameObject *)0x0) {
              uVar26 = CONCAT31(0x3f79fc,(char)uVar26);
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar18,1,(MethodInfo *)0x0);
              pEVar37 = (pOVar28->_0).events;
              uVar8 = 0;
              uVar29 = 0;
              uVar9 = SUB41(pEVar37,0);
              uVar36 = (undefined1)((uint)pEVar37 >> 8);
              uVar38 = (undefined1)((uint)pEVar37 >> 0x10);
              uVar39 = (undefined1)((uint)pEVar37 >> 0x18);
              TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
              piVar40 = (int *)CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar36,uVar9)));
              if (piVar40 != (int *)0x0) {
                (**(code **)(*piVar40 + 0x318))();
                pCVar30 = *(Component **)&(pOVar28->_0).this_arg.attrs;
                if (pCVar30 != (Component *)0x0) {
                  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar30,(MethodInfo *)0x0);
                  uVar9 = SUB41(pTVar14,0);
                  uVar36 = (undefined1)((uint)pTVar14 >> 8);
                  uVar38 = (undefined1)((uint)pTVar14 >> 0x10);
                  uVar39 = (undefined1)((uint)pTVar14 >> 0x18);
                  uVar29 = CONCAT13(uVar8,(int3)((uint)uVar29 >> 8));
                  euler_02.y = (float)uVar29;
                  euler_02.x = (float)uVar29;
                  euler_02.z = 0.0;
                  pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffff83,euler_02,(MethodInfo *)0x0);
                  pTVar14 = (Transform *)CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar36,uVar9)));
                  if (pTVar14 != (Transform *)0x0) {
                    value.w._1_2_ = (short)((uint)pQVar16->w >> 8);
                    value._0_13_ = *(undefined1 (*) [13])pQVar16;
                    value.w._3_1_ = (char)((uint)pQVar16->w >> 0x18);
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar14,value,(MethodInfo *)0x0);
                    *(undefined4 *)(iVar27 + 0x14) = 0;
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar32 = *(undefined4 *)(iVar27 + 0x14);
        uVar5 = (undefined1)uVar32;
        uVar7 = (undefined2)((uint)uVar32 >> 8);
        uVar2 = (undefined1)((uint)uVar32 >> 0x18);
        fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
        fVar12 = fVar12 + (float)CONCAT13(uVar2,CONCAT21(uVar7,uVar5));
        *(float *)(iVar27 + 0x14) = fVar12;
        this_01 = (pOVar28->_0).interopData;
        if (this_01 != (Il2CppInteropData *)0x0) {
          uVar26 = uVar26 & 0xffffff00;
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate((AnimationCurve *)this_01,fVar12 / (float)(pOVar28->_0).fields,(MethodInfo *)0x0);
          pCVar30 = *(Component **)&(pOVar28->_0).this_arg.attrs;
          uVar5 = SUB41(fVar12,0);
          uVar7 = (undefined2)((uint)fVar12 >> 8);
          uVar2 = (undefined1)((uint)fVar12 >> 0x18);
          if (pCVar30 != (Component *)0x0) {
            uVar31 = (undefined3)((uint)uVar29 >> 8);
            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar30,(MethodInfo *)0x0);
            fVar12 = ((float)CONCAT13(uVar2,CONCAT21(uVar7,uVar5)) * 90.0 - 90.0) * 0.017453292;
            uVar26 = CONCAT31((int3)(Quaternion *)&stack0xffffff73,0x10);
            euler_05.x._3_1_ = uVar9;
            euler_05.x._0_3_ = uVar31;
            euler_05.y._0_1_ = SUB41(fVar12,0);
            euler_05.y._1_2_ = (short)((uint)fVar12 >> 8);
            euler_05._7_4_ = (uint)fVar12 >> 0x18;
            euler_05.z._3_1_ = 0;
            pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffff73,euler_05,(MethodInfo *)0x0);
            pOVar28 = (Object__Class *)0x0;
            if (pTVar14 != (Transform *)0x0) {
              fVar12 = pQVar16->z;
              fVar20 = pQVar16->w;
              value_03.y._1_2_ = (short)((uint)pQVar16->y >> 8);
              value_03._0_5_ = *(undefined5 *)pQVar16;
              value_03.y._3_1_ = (char)((uint)pQVar16->y >> 0x18);
              value_03.z._0_1_ = SUB41(fVar12,0);
              value_03.z._1_2_ = (short)((uint)fVar12 >> 8);
              value_03.z._3_1_ = (char)((uint)fVar12 >> 0x18);
              value_03.w._0_1_ = SUB41(fVar20,0);
              value_03.w._1_1_ = (char)((uint)fVar20 >> 8);
              value_03.w._2_1_ = (char)((uint)fVar20 >> 0x10);
              value_03.w._3_1_ = (char)((uint)fVar20 >> 0x18);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar14,value_03,(MethodInfo *)0x0);
              uVar29 = func_?();
              *(undefined4 *)(iVar27 + 0xc) = uVar29;
              func_?();
              *(undefined4 *)(iVar27 + 8) = 1;
              return 1;
            }
          }
        }
      }
    }
    break;
  case 2:
    *(undefined4 *)(iVar27 + 8) = 0xffffffff;
    if (pOVar28 != (Object__Class *)0x0) {
code_?:
      if (1.0 <= *(float *)(iVar27 + 0x14) / (float)(pOVar28->_0).element_class) {
        pIVar34 = (pOVar28->_0).castClass;
        if (pIVar34 != (Il2CppClass *)0x0) {
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate((AnimationCurve *)pIVar34,1.0,(MethodInfo *)0x0);
          pGVar35 = *(Graphic **)&(pOVar28->_0).this_arg.attrs;
          uVar8 = SUB41(fVar12,0);
          uVar7 = (undefined2)((uint)fVar12 >> 8);
          uVar36 = (undefined1)((uint)fVar12 >> 0x18);
          if (pGVar35 != (Graphic *)0x0) {
            uVar26 = CONCAT31((int3)pGVar35,0x10);
            pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar35,(MethodInfo *)0x0);
            if (pRVar13 != (RectTransform *)0x0) {
              uVar9 = 0;
              uVar29 = 0;
              uVar26 = CONCAT31((int3)pRVar13,0x10);
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar13,RectTransform_Axis__Enum_Horizontal,(float)(int)pOVar28->interfaceOffsets * (float)CONCAT13(uVar36,CONCAT21(uVar7,uVar8)),(MethodInfo *)0x0);
              pGVar35 = *(Graphic **)&(pOVar28->_0).this_arg.attrs;
              if ((pGVar35 != (Graphic *)0x0) && (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar35,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar13,RectTransform_Axis__Enum_Vertical,(float)(int)pOVar28->interfaceOffsets * (float)CONCAT13(uVar36,CONCAT21(uVar7,uVar8)),(MethodInfo *)0x0);
                pEVar37 = (pOVar28->_0).events;
                if ((pEVar37 != (EventInfo *)0x0) && (pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pEVar37,(MethodInfo *)0x0), pGVar18 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar18,0,(MethodInfo *)0x0);
                  *(undefined4 *)(iVar27 + 0x14) = 0;
                  goto code_?;
                }
              }
            }
          }
        }
      }
      else {
        uVar29 = *(undefined4 *)(iVar27 + 0x14);
        uVar5 = (undefined1)uVar29;
        uVar2 = (undefined1)((uint)uVar29 >> 8);
        uVar3 = (undefined1)((uint)uVar29 >> 0x10);
        uVar4 = (undefined1)((uint)uVar29 >> 0x18);
        fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
        fVar12 = fVar12 + (float)CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar5)));
        *(float *)(iVar27 + 0x14) = fVar12;
        pIVar34 = (pOVar28->_0).castClass;
        if (pIVar34 != (Il2CppClass *)0x0) {
          uVar26 = uVar26 & 0xffffff00;
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate((AnimationCurve *)pIVar34,fVar12 / (float)(pOVar28->_0).element_class,(MethodInfo *)0x0);
          pGVar35 = *(Graphic **)&(pOVar28->_0).this_arg.attrs;
          uVar5 = SUB41(fVar12,0);
          uVar7 = (undefined2)((uint)fVar12 >> 8);
          uVar2 = (undefined1)((uint)fVar12 >> 0x18);
          if (pGVar35 != (Graphic *)0x0) {
            uVar26 = CONCAT31(0x3f7b2c,(char)uVar26);
            pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar35,(MethodInfo *)0x0);
            if (pRVar13 != (RectTransform *)0x0) {
              uVar26 = CONCAT31(0x3f7b54,(char)uVar26);
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar13,RectTransform_Axis__Enum_Horizontal,(float)(int)pOVar28->interfaceOffsets * (float)CONCAT13(uVar2,CONCAT21(uVar7,uVar5)),(MethodInfo *)0x0);
              pGVar35 = *(Graphic **)&(pOVar28->_0).this_arg.attrs;
              if ((pGVar35 != (Graphic *)0x0) && (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar35,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar13,RectTransform_Axis__Enum_Vertical,(float)(int)pOVar28->interfaceOffsets * (float)CONCAT13(uVar2,CONCAT21(uVar7,uVar5)),(MethodInfo *)0x0);
                pAVar11 = (AnimationCurve *)(pOVar28->_0).nestedTypes;
                if (pAVar11 != (AnimationCurve *)0x0) {
                  fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate(pAVar11,*(float *)(iVar27 + 0x14) / (float)(pOVar28->_0).element_class,(MethodInfo *)0x0);
                  pCVar30 = (Component *)(pOVar28->_0).implementedInterfaces;
                  uVar5 = SUB41(fVar12,0);
                  uVar2 = (undefined1)((uint)fVar12 >> 8);
                  uVar3 = (undefined1)((uint)fVar12 >> 0x10);
                  uVar4 = (undefined1)((uint)fVar12 >> 0x18);
                  if (pCVar30 != (Component *)0x0) {
                    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar30,(MethodInfo *)0x0);
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
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale(pTVar14,value_05,(MethodInfo *)0x0);
                      uVar29 = func_?();
                      *(undefined4 *)(iVar27 + 0xc) = uVar29;
                      func_?();
                      *(undefined4 *)(iVar27 + 8) = 2;
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
    *(undefined4 *)(iVar27 + 8) = 0xffffffff;
    if (pOVar28 != (Object__Class *)0x0) {
code_?:
      if (1.0 <= *(float *)(iVar27 + 0x14) / (float)(pOVar28->_0).fields) {
        pCVar30 = *(Component **)&(pOVar28->_0).this_arg.attrs;
        if (pCVar30 != (Component *)0x0) {
          pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar30,(MethodInfo *)0x0);
          uVar31 = (undefined3)((uint)uVar29 >> 8);
          uVar26 = 0;
          euler_04._3_4_ = (int)(CONCAT44(0x3fc90fdb,CONCAT13(uVar9,uVar31)) >> 0x18);
          euler_04.x._0_3_ = uVar31;
          euler_04._7_4_ = 0x3f;
          euler_04.z._3_1_ = 0;
          pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffff73,euler_04,(MethodInfo *)0x0);
          iVar27 = 0;
          if (pTVar14 != (Transform *)0x0) {
            value_02.z._0_3_ = SUB43(pQVar16->z,0);
            value_02.y._3_1_ = (char)((uint)pQVar16->y >> 0x18);
            value_02.w._0_3_ = SUB43(pQVar16->w,0);
            value_02.z._3_1_ = (char)((uint)pQVar16->z >> 0x18);
            value_02.y._1_2_ = (short)((uint)pQVar16->y >> 8);
            value_02._0_5_ = *(undefined5 *)pQVar16;
            value_02.w._3_1_ = (char)((uint)pQVar16->w >> 0x18);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar14,value_02,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            uVar8 = SUB41(TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30,0);
            uVar7 = (undefined2)((uint)TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30 >> 8);
            uVar9 = (undefined1)((uint)TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30 >> 0x18);
            pOVar21 = (Object *)func_?();
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55(pOVar21,ExceptionArgument__Enum_obj,(MethodInfo *)CONCAT13(uVar9,CONCAT21(uVar7,uVar8)));
            pOVar21[1].klass = (Object__Class *)0x0;
            pOVar21[2].klass = pOVar28;
            func_?();
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)pOVar28,(IEnumerator *)pOVar21,(MethodInfo *)0x0);
            uVar29 = func_?();
            iVar27 = CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar5)));
            *(undefined4 *)(iVar27 + 0xc) = uVar29;
            func_?();
            *(undefined4 *)(iVar27 + 8) = 4;
            return 1;
          }
        }
      }
      else {
        uVar32 = *(undefined4 *)(iVar27 + 0x14);
        uVar5 = (undefined1)uVar32;
        uVar7 = (undefined2)((uint)uVar32 >> 8);
        uVar2 = (undefined1)((uint)uVar32 >> 0x18);
        fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
        fVar12 = fVar12 + (float)CONCAT13(uVar2,CONCAT21(uVar7,uVar5));
        *(float *)(iVar27 + 0x14) = fVar12;
        pIVar34 = (pOVar28->_0).klass;
        if (pIVar34 != (Il2CppClass *)0x0) {
          uVar26 = uVar26 & 0xffffff00;
          fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate((AnimationCurve *)pIVar34,fVar12 / (float)(pOVar28->_0).fields,(MethodInfo *)0x0);
          pCVar30 = *(Component **)&(pOVar28->_0).this_arg.attrs;
          uVar5 = SUB41(fVar12,0);
          uVar7 = (undefined2)((uint)fVar12 >> 8);
          uVar2 = (undefined1)((uint)fVar12 >> 0x18);
          if (pCVar30 != (Component *)0x0) {
            uVar31 = (undefined3)((uint)uVar29 >> 8);
            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar30,(MethodInfo *)0x0);
            fVar12 = (float)CONCAT13(uVar2,CONCAT21(uVar7,uVar5)) * 90.0 * 0.017453292;
            uVar26 = CONCAT31((int3)(Quaternion *)&stack0xffffff73,0x10);
            euler_06.x._3_1_ = uVar9;
            euler_06.x._0_3_ = uVar31;
            euler_06.y._0_1_ = SUB41(fVar12,0);
            euler_06.y._1_2_ = (short)((uint)fVar12 >> 8);
            euler_06._7_4_ = (uint)fVar12 >> 0x18;
            euler_06.z._3_1_ = 0;
            pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffff73,euler_06,(MethodInfo *)0x0);
            pOVar28 = (Object__Class *)0x0;
            if (pTVar14 != (Transform *)0x0) {
              fVar12 = pQVar16->z;
              fVar20 = pQVar16->w;
              value_04.y._1_2_ = (short)((uint)pQVar16->y >> 8);
              value_04._0_5_ = *(undefined5 *)pQVar16;
              value_04.y._3_1_ = (char)((uint)pQVar16->y >> 0x18);
              value_04.z._0_1_ = SUB41(fVar12,0);
              value_04.z._1_2_ = (short)((uint)fVar12 >> 8);
              value_04.z._3_1_ = (char)((uint)fVar12 >> 0x18);
              value_04.w._0_1_ = SUB41(fVar20,0);
              value_04.w._1_1_ = (char)((uint)fVar20 >> 8);
              value_04.w._2_1_ = (char)((uint)fVar20 >> 0x10);
              value_04.w._3_1_ = (char)((uint)fVar20 >> 0x18);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar14,value_04,(MethodInfo *)0x0);
              uVar29 = func_?();
              *(undefined4 *)(iVar27 + 0xc) = uVar29;
              func_?();
              *(undefined4 *)(iVar27 + 8) = 3;
              return 1;
            }
          }
        }
      }
    }
    break;
  case 4:
    *(undefined4 *)(iVar27 + 8) = 0xffffffff;
  default:
    return 0;
  }
  bVar41 = false;
  func_?();
  if (!bVar41 && extraout_EDX + 1 != 0) {
code_?:
    func_?();
    pcVar24 = (code *)swi(3);
    bVar25 = (*pcVar24)();
    return bVar25;
  }
  piVar42 = &pOVar28[-0x677d63]._1.native_size;
  bVar43 = (byte)(extraout_EDX + 1);
  bVar44 = (char)*piVar42 + bVar43;
  bVar45 = CARRY1((byte)*piVar42,bVar43) || CARRY1(bVar44,bVar41);
  *(byte *)piVar42 = bVar44 + bVar41;
  if ((POPCOUNT((char)*piVar42) & 1U) == 0) goto code_?;
  bVar46 = (byte)&stack0xffffffab;
  bVar44 = *extraout_ECX_00;
  bVar43 = *extraout_ECX_00 + bVar46;
  bVar41 = CARRY1(*extraout_ECX_00,bVar46) || CARRY1(bVar43,bVar45);
  *extraout_ECX_00 = bVar43 + bVar45;
  if ((SCARRY1(bVar44,bVar46) != SCARRY1(bVar43,bVar45)) != (char)*extraout_ECX_00 < '\0') {
    bVar44 = *extraout_ECX_00;
    cVar47 = (char)((uint)extraout_ECX_00 >> 8);
    cVar22 = *extraout_ECX_00 + cVar47;
    *extraout_ECX_00 = cVar22 + bVar41;
    if (*extraout_ECX_00 != 0 && (SCARRY1(bVar44,cVar47) != SCARRY1(cVar22,bVar41)) == (char)*extraout_ECX_00 < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar24 = (code *)swi(3);
    bVar25 = (*pcVar24)();
    return bVar25;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32,pOVar28,iVar27);
    cRam_? = '\x01';
  }
  pOVar28 = *(Object__Class **)(uVar26 + 0x10);
  fVar12 = 0.0;
  uVar48 = uVar26;
  switch(*(undefined4 *)(uVar26 + 8)) {
  case 0:
    *(undefined4 *)(uVar26 + 8) = 0xffffffff;
    if ((pOVar28 == (Object__Class *)0x0) || (pGVar35 = (Graphic *)(pOVar28->_0).byval_arg.data.typeHandle, pGVar35 == (Graphic *)0x0)) goto code_?;
    pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar35,(MethodInfo *)0x0);
    if (pRVar13 == (RectTransform *)0x0) goto code_?;
    value_08.y = (float)(int)pOVar28->interfaceOffsets;
    value_08.x = (float)(int)pOVar28->interfaceOffsets;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar13,value_08,(MethodInfo *)0x0);
    pCVar30 = (Component *)(pOVar28->_0).byval_arg.data.typeHandle;
    if (pCVar30 == (Component *)0x0) goto code_?;
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar30,(MethodInfo *)0x0);
    uVar5 = SUB41(pTVar14,0);
    uVar31 = (undefined3)((uint)pTVar14 >> 8);
    euler_01.y = (float)pCVar30;
    euler_01.x = (float)pCVar30;
    euler_01.z = 0.0;
    pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffff2e,euler_01,(MethodInfo *)0x0);
    if ((Transform *)CONCAT31(uVar31,uVar5) == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation((Transform *)CONCAT31(uVar31,uVar5),*pQVar16,(MethodInfo *)0x0);
    pBVar33 = (Behaviour *)(pOVar28->_0).byval_arg.data.typeHandle;
    if (pBVar33 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled(pBVar33,1,(MethodInfo *)0x0);
    pCVar30 = (Component *)(pOVar28->_0).implementedInterfaces;
    if ((pCVar30 == (Component *)0x0) || (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar30,(MethodInfo *)0x0), pTVar14 == (Transform *)0x0)) goto code_?;
    value_00.z = 1.0;
    value_00.x = 1.0;
    value_00.y = 1.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale(pTVar14,value_00,(MethodInfo *)0x0);
    pBVar33 = (Behaviour *)(pOVar28->_0).implementedInterfaces;
    if (pBVar33 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled(pBVar33,0,(MethodInfo *)0x0);
    this_02 = (pOVar28->_0).properties;
    if ((this_02 == (PropertyInfo *)0x0) || (pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this_02,(MethodInfo *)0x0), pGVar18 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar18,0,(MethodInfo *)0x0);
    pCVar30 = (Component *)(pOVar28->_0).methods;
    if ((pCVar30 == (Component *)0x0) || (pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject(pCVar30,(MethodInfo *)0x0), pGVar18 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar18,0,(MethodInfo *)0x0);
    pIVar34 = (pOVar28->_0).declaringType;
    if (pIVar34 == (Il2CppClass *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pIVar34,0,(MethodInfo *)0x0);
    pEVar37 = (pOVar28->_0).events;
    if ((pEVar37 == (EventInfo *)0x0) || (pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pEVar37,(MethodInfo *)0x0), pGVar18 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar18,0,(MethodInfo *)0x0);
    *(undefined4 *)(uVar26 + 0x14) = 0;
    break;
  case 1:
    *(undefined4 *)(uVar26 + 8) = 0xffffffff;
    if (pOVar28 == (Object__Class *)0x0) goto code_?;
    break;
  case 2:
    *(undefined4 *)(uVar26 + 8) = 0xffffffff;
    if (pOVar28 == (Object__Class *)0x0) goto code_?;
    goto code_?;
  case 3:
    *(undefined4 *)(uVar26 + 8) = 0xffffffff;
  default:
    return 0;
  }
  if (1.0 <= *(float *)(uVar26 + 0x14) / *(float *)&(pOVar28->_0).byval_arg.attrs) {
    pAVar11 = (AnimationCurve *)(pOVar28->_0).this_arg.data.typeHandle;
    if (pAVar11 != (AnimationCurve *)0x0) {
      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate(pAVar11,1.0,(MethodInfo *)0x0);
      pGVar35 = (Graphic *)(pOVar28->_0).byval_arg.data.typeHandle;
      uVar5 = SUB41(fVar12,0);
      uVar31 = (undefined3)((uint)fVar12 >> 8);
      if (pGVar35 != (Graphic *)0x0) {
        pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar35,(MethodInfo *)0x0);
        if (pRVar13 != (RectTransform *)0x0) {
          fVar12 = 0.0;
          value_09.y = (float)(int)pOVar28->interfaceOffsets * (float)CONCAT31(uVar31,uVar5);
          value_09.x = (float)(int)pOVar28->interfaceOffsets * (float)CONCAT31(uVar31,uVar5);
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar13,value_09,(MethodInfo *)0x0);
          *(undefined4 *)(uVar26 + 0x14) = 0;
code_?:
          if (1.0 <= *(float *)(uVar26 + 0x14) / (float)(pOVar28->_0).fields) {
            pCVar30 = (Component *)(pOVar28->_0).byval_arg.data.typeHandle;
            if (pCVar30 != (Component *)0x0) {
              pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar30,(MethodInfo *)0x0);
              euler.y = 1.5707964;
              euler.x = fVar12;
              euler.z = 0.0;
              pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffff16,euler,(MethodInfo *)0x0);
              if (pTVar14 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar14,*pQVar16,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                method_00 = TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29;
                pOVar21 = (Object *)func_?();
                mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55(pOVar21,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                pOVar21[1].klass = (Object__Class *)0x0;
                pOVar21[2].klass = pOVar28;
                func_?();
                UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)pOVar28,(IEnumerator *)pOVar21,(MethodInfo *)0x0);
                uVar29 = func_?();
                *(undefined4 *)(uVar48 + 0xc) = uVar29;
                func_?();
                *(undefined4 *)(uVar48 + 8) = 3;
                return 1;
              }
            }
          }
          else {
            uVar5 = (undefined1)*(undefined4 *)(uVar26 + 0x14);
            uVar31 = (undefined3)((uint)*(undefined4 *)(uVar26 + 0x14) >> 8);
            fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
            fVar20 = fVar20 + (float)CONCAT31(uVar31,uVar5);
            *(float *)(uVar26 + 0x14) = fVar20;
            pIVar34 = (pOVar28->_0).klass;
            if (pIVar34 != (Il2CppClass *)0x0) {
              fVar20 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate((AnimationCurve *)pIVar34,fVar20 / (float)(pOVar28->_0).fields,(MethodInfo *)0x0);
              pCVar30 = (Component *)(pOVar28->_0).byval_arg.data.typeHandle;
              uVar5 = SUB41(fVar20,0);
              uVar48 = (uint)fVar20 >> 8;
              if (pCVar30 != (Component *)0x0) {
                pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar30,(MethodInfo *)0x0);
                euler_00.y = (float)CONCAT31((int3)uVar48,uVar5) * 90.0 * 0.017453292;
                euler_00.x = fVar12;
                euler_00.z = 0.0;
                pQVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad((Quaternion *)&stack0xffffff16,euler_00,(MethodInfo *)0x0);
                pOVar28 = (Object__Class *)0x0;
                if (pTVar14 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar14,*pQVar16,(MethodInfo *)0x0);
                  uVar29 = func_?();
                  *(undefined4 *)(uVar26 + 0xc) = uVar29;
                  func_?();
                  *(undefined4 *)(uVar26 + 8) = 2;
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
    uVar5 = (undefined1)*(undefined4 *)(uVar26 + 0x14);
    uVar31 = (undefined3)((uint)*(undefined4 *)(uVar26 + 0x14) >> 8);
    fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar12 = fVar12 + (float)CONCAT31(uVar31,uVar5);
    *(float *)(uVar26 + 0x14) = fVar12;
    pAVar11 = (AnimationCurve *)(pOVar28->_0).this_arg.data.typeHandle;
    if (pAVar11 != (AnimationCurve *)0x0) {
      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate(pAVar11,fVar12 / *(float *)&(pOVar28->_0).byval_arg.attrs,(MethodInfo *)0x0);
      pGVar35 = (Graphic *)(pOVar28->_0).byval_arg.data.typeHandle;
      uVar5 = SUB41(fVar12,0);
      uVar31 = (undefined3)((uint)fVar12 >> 8);
      if ((pGVar35 != (Graphic *)0x0) && (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar35,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar13,RectTransform_Axis__Enum_Horizontal,(float)(int)pOVar28->interfaceOffsets * (float)CONCAT31(uVar31,uVar5),(MethodInfo *)0x0);
        pGVar35 = (Graphic *)(pOVar28->_0).byval_arg.data.typeHandle;
        if ((pGVar35 != (Graphic *)0x0) && (pRVar13 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar35,(MethodInfo *)0x0), pRVar13 != (RectTransform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_SetSizeWithCurrentAnchors(pRVar13,RectTransform_Axis__Enum_Vertical,(float)(int)pOVar28->interfaceOffsets * (float)CONCAT31(uVar31,uVar5),(MethodInfo *)0x0);
          uVar29 = func_?();
          *(undefined4 *)(uVar26 + 0xc) = uVar29;
          func_?();
          *(undefined4 *)(uVar26 + 8) = 1;
          return 1;
        }
      }
    }
  }
code_?:
  func_?();
  iVar27 = func_?();
  *(char *)(iVar27 + -0x33efc07b) = *(char *)(iVar27 + -0x33efc07b) + (char)iVar27 + ((MonoBehaviour__Class *)(pOVar28->_0).image < (MonoBehaviour__Class *)0x3f837010);
  pcVar24 = (code *)swi(3);
  bVar25 = (*pcVar24)();
  return bVar25;
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

