
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeGoldIcon>d__30::LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30_MoveNext(LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_REWARD_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  VVar2.x = 0.0;
  VVar2.y = 0.0;
  pLVar3 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((pLVar3 == (LevelRewardAnimation *)0x0) || (pIVar4 = (pLVar3->fields).goldImage, pIVar4 == (Image *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pIVar4,1,(MethodInfo *)0x0);
    this_00 = (pLVar3->fields).nextLevelBadge;
    if (this_00 == (RawImage *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)this_00,0,(MethodInfo *)0x0);
    pAVar5 = (pLVar3->fields).goldBounceEffect;
    if (pAVar5 == (AnimationCurve *)0x0) goto code_?;
    pvVar6 = (pAVar5->fields).m_Ptr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar5,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    fVar10 = (float)(*pcRam_?)(pvVar6,0);
    pIVar4 = (pLVar3->fields).goldImage;
    if ((pIVar4 == (Image *)0x0) || (pRVar11 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pIVar4,(MethodInfo *)0x0), pRVar11 == (RectTransform *)0x0)) goto code_?;
    iVar1 = (pLVar3->fields).targetSize;
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta(pRVar11,(MethodInfo *)0x0);
    fVar12 = VStackX_8.y;
    VVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize(pRVar11,(MethodInfo *)0x0);
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax(pRVar11,(MethodInfo *)0x0);
    VVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin(pRVar11,(MethodInfo *)0x0);
    fStackX_18 = VVar14.x;
    fStackX_20 = VVar13.x;
    VVar13.x = (float)iVar1 * fVar10 - (VStackX_8.x - fStackX_18) * fStackX_20;
    VVar13.y = fVar12;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar11,VVar13,(MethodInfo *)0x0);
    pIVar4 = (pLVar3->fields).goldImage;
    if ((pIVar4 == (Image *)0x0) || (pRVar11 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pIVar4,(MethodInfo *)0x0), pRVar11 == (RectTransform *)0x0)) goto code_?;
    iVar1 = (pLVar3->fields).targetSize;
    VStack_15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta(pRVar11,(MethodInfo *)0x0);
    VVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize(pRVar11,(MethodInfo *)0x0);
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax(pRVar11,(MethodInfo *)0x0);
    VVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin(pRVar11,(MethodInfo *)0x0);
    fStackX_1c = VVar14.y;
    fStackX_24 = VVar13.y;
    VVar14.y = (float)iVar1 * fVar10 - (VStackX_8.y - fStackX_1c) * fStackX_24;
    VVar14.x = VStack_15.x;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar11,VVar14,(MethodInfo *)0x0);
    pIVar4 = (pLVar3->fields).goldImage;
    if (pIVar4 == (Image *)0x0) goto code_?;
    pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar4,(MethodInfo *)0x0);
    VStack_15.x = 0.0;
    VStack_15.y = -1.5707964;
    uStack_17 = 0;
    uStack_18 = 0;
    uStack_19 = 0;
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(&VStack_15);
    if (pTVar16 == (Transform *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    uStack_20 = (undefined4)uStack_18;
    uStack_21 = uStack_18._4_4_;
    uStack_22 = (undefined4)uStack_19;
    uStack_23 = uStack_19._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pTVar16->fields)._._.m_CachedPtr == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar16,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)();
    (this->fields)._currentTime_5__2 = 0.0;
code_?:
    if ((this->fields)._currentTime_5__2 / (pLVar3->fields).rotateUIYAxisTime < 1.0) {
      fVar10 = (this->fields)._currentTime_5__2;
      fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      fVar12 = fVar12 + fVar10;
      (this->fields)._currentTime_5__2 = fVar12;
      pAVar5 = (pLVar3->fields).rotateUIYAxisIn;
      if (pAVar5 != (AnimationCurve *)0x0) {
        pvVar6 = (pAVar5->fields).m_Ptr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar5,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          bVar8 = (*pcVar7)();
          return bVar8;
        }
        fVar10 = (pLVar3->fields).rotateUIYAxisTime;
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar7 = (code *)swi(3);
          bVar8 = (*pcVar7)();
          return bVar8;
        }
        pcRam_? = pcVar7;
        fVar10 = (float)(*pcRam_?)(pvVar6,fVar12 / fVar10);
        pIVar4 = (pLVar3->fields).goldImage;
        if (pIVar4 != (Image *)0x0) {
          pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar4,(MethodInfo *)0x0);
          VStack_15 = (Vector2)((ulonglong)(uint)((fVar10 * 90.0 - 90.0) * 0.017453292) << 0x20);
          uStack_17 = 0;
          uStack_18 = 0;
          uStack_19 = 0;
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar7 = (code *)swi(3);
            bVar8 = (*pcVar7)();
            return bVar8;
          }
          pcRam_? = pcVar7;
          (*pcRam_?)(&VStack_15);
          if (pTVar16 == (Transform *)0x0) {
            FUN_?();
            pcVar7 = (code *)swi(3);
            bVar8 = (*pcVar7)();
            return bVar8;
          }
          uStack_20 = (undefined4)uStack_18;
          uStack_21 = uStack_18._4_4_;
          uStack_22 = (undefined4)uStack_19;
          uStack_23 = uStack_19._4_4_;
          if (cRam_? == '\0') {
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar6 = (pTVar16->fields)._._.m_CachedPtr;
          if (pvVar6 != (void *)0x0) {
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar7 = (code *)swi(3);
              bVar8 = (*pcVar7)();
              return bVar8;
            }
            pcRam_? = pcVar7;
            (*pcRam_?)(pvVar6,&uStack_20);
            lVar24 = lRam_?;
            VStackX_8 = (Vector2)((ulonglong)VStackX_8 & 0xffffffff00000000);
            VVar13 = VStackX_8;
            if ((*(int *)(lRam_? + 0x28) < 0) && ((*(longlong *)(lRam_? + 0x60) == 0 || (VVar13 = VVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
              VVar13 = (Vector2)FUN_?(lRam_?);
              FUN_?((Object *)((longlong)VVar13 + 0x10),&VStackX_8,(longlong)*(int *)(lVar24 + 0xf8) + -0x10);
              if (iRam_? != 0) {
                uVar25 = (uint)((ulonglong)((longlong)VVar13 + 0x10U) >> 0xc);
                uVar26 = (ulonglong)((uVar25 & 0x1fffff) >> 6);
                do {
                  uVar27 = *(ulonglong *)(uVar26 * 8 + 0xADDR);
                  puVar28 = (ulonglong *)(uVar26 * 8 + 0xADDR);
                  LOCK();
                  bVar29 = uVar27 == *puVar28;
                  if (bVar29) {
                    *puVar28 = uVar27 | 1L << (uVar25 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar29);
              }
            }
            bVar29 = iRam_? != 0;
            (this->fields).__2__current = (Object *)VVar13;
            if (bVar29) {
              uVar25 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
              uVar26 = (ulonglong)((uVar25 & 0x1fffff) >> 6);
              do {
                uVar27 = *(ulonglong *)(uVar26 * 8 + 0xADDR);
                puVar28 = (ulonglong *)(uVar26 * 8 + 0xADDR);
                LOCK();
                bVar29 = uVar27 == *puVar28;
                if (bVar29) {
                  *puVar28 = uVar27 | 1L << (uVar25 & 0x3f);
                }
                UNLOCK();
              } while (!bVar29);
            }
            (this->fields).__1__state = 1;
            return 1;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar16,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          bVar8 = (*pcVar7)();
          return bVar8;
        }
      }
      goto code_?;
    }
    pIVar4 = (pLVar3->fields).goldImage;
    if (pIVar4 == (Image *)0x0) goto code_?;
    pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar4,(MethodInfo *)0x0);
    VStack_15.x = 0.0;
    VStack_15.y = 0.0;
    uStack_17 = 0;
    uStack_18 = 0;
    uStack_19 = 0;
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(&VStack_15);
    if (pTVar16 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    uStack_20 = (undefined4)uStack_18;
    uStack_21 = uStack_18._4_4_;
    uStack_22 = (undefined4)uStack_19;
    uStack_23 = uStack_19._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar6 = (pTVar16->fields)._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar16,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar7 = (code *)swi(3);
      bVar8 = (*pcVar7)();
      return bVar8;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6);
    pTVar30 = (pLVar3->fields).header;
    if ((pTVar30 == (Text *)0x0) || (pGVar31 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pTVar30,(MethodInfo *)0x0), pGVar31 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar31,1,(MethodInfo *)0x0);
    pTVar30 = (pLVar3->fields).header;
    TM::TM__(StringLiteral_REWARD_,(MethodInfo *)0x0);
    if (pTVar30 == (Text *)0x0) goto code_?;
    (*(pTVar30->klass->vtable).set_text.methodPtr)(pTVar30);
    pTVar30 = (pLVar3->fields).goldText;
    if ((pTVar30 == (Text *)0x0) || (pGVar31 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pTVar30,(MethodInfo *)0x0), pGVar31 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar31,1,(MethodInfo *)0x0);
    pCVar32 = (pLVar3->fields).claimButton;
    if ((pCVar32 == (CanvasGroup *)0x0) || (pGVar31 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pCVar32,(MethodInfo *)0x0), pGVar31 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar31,1,(MethodInfo *)0x0);
    pCVar32 = (pLVar3->fields).claimButton;
    if (pCVar32 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar32,0.0,(MethodInfo *)0x0);
    (this->fields)._currentTime_5__2 = 0.0;
  }
  else {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      if (pLVar3 == (LevelRewardAnimation *)0x0) goto code_?;
      goto code_?;
    }
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        (this->fields).__1__state = -1;
        return 0;
      }
      return 0;
    }
    (this->fields).__1__state = -1;
    if (pLVar3 == (LevelRewardAnimation *)0x0) goto code_?;
  }
  if (1.0 <= (this->fields)._currentTime_5__2 / (pLVar3->fields).goldImageDisplayTime) {
    pAVar5 = (pLVar3->fields).goldBounceEffect;
    if (pAVar5 != (AnimationCurve *)0x0) {
      pvVar6 = (pAVar5->fields).m_Ptr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar5,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        bVar8 = (*pcVar7)();
        return bVar8;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar7 = (code *)swi(3);
        bVar8 = (*pcVar7)();
        return bVar8;
      }
      pcRam_? = pcVar7;
      fVar10 = (float)(*pcRam_?)(pvVar6,0x3f800000);
      pCVar32 = (pLVar3->fields).claimButton;
      if (pCVar32 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar32,1.0,(MethodInfo *)0x0);
        pIVar4 = (pLVar3->fields).goldImage;
        if ((pIVar4 != (Image *)0x0) && (pRVar11 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pIVar4,(MethodInfo *)0x0), pRVar11 != (RectTransform *)0x0)) {
          iVar1 = (pLVar3->fields).targetSize;
          VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta(pRVar11,(MethodInfo *)0x0);
          fVar12 = VStackX_8.y;
          VVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize(pRVar11,(MethodInfo *)0x0);
          VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax(pRVar11,(MethodInfo *)0x0);
          VVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin(pRVar11,(MethodInfo *)0x0);
          fStackX_18 = VVar14.x;
          fStackX_20 = VVar13.x;
          value_02.x = (float)iVar1 * fVar10 - (VStackX_8.x - fStackX_18) * fStackX_20;
          value_02.y = fVar12;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar11,value_02,(MethodInfo *)0x0);
          pIVar4 = (pLVar3->fields).goldImage;
          if ((pIVar4 != (Image *)0x0) && (pRVar11 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pIVar4,(MethodInfo *)0x0), pRVar11 != (RectTransform *)0x0)) {
            iVar1 = (pLVar3->fields).targetSize;
            VStack_15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta(pRVar11,(MethodInfo *)0x0);
            VVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize(pRVar11,(MethodInfo *)0x0);
            VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax(pRVar11,(MethodInfo *)0x0);
            VVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin(pRVar11,(MethodInfo *)0x0);
            fStackX_1c = VVar14.y;
            fStackX_24 = VVar13.y;
            value_00.y = (float)iVar1 * fVar10 - (VStackX_8.y - fStackX_1c) * fStackX_24;
            value_00.x = VStack_15.x;
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar11,value_00,(MethodInfo *)0x0);
            lVar24 = lRam_?;
            VStackX_8 = (Vector2)((ulonglong)VStackX_8 & 0xffffffff00000000);
            VVar13 = VStackX_8;
            if ((*(int *)(lRam_? + 0x28) < 0) && ((*(longlong *)(lRam_? + 0x60) == 0 || (VVar13 = VVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
              VVar13 = (Vector2)FUN_?(lRam_?);
              FUN_?((Object *)((longlong)VVar13 + 0x10),&VStackX_8,(longlong)*(int *)(lVar24 + 0xf8) + -0x10);
              if (iRam_? != 0) {
                uVar25 = (uint)((ulonglong)((longlong)VVar13 + 0x10U) >> 0xc);
                uVar26 = (ulonglong)((uVar25 & 0x1fffff) >> 6);
                do {
                  uVar27 = *(ulonglong *)(uVar26 * 8 + 0xADDR);
                  puVar28 = (ulonglong *)(uVar26 * 8 + 0xADDR);
                  LOCK();
                  bVar29 = uVar27 == *puVar28;
                  if (bVar29) {
                    *puVar28 = uVar27 | 1L << (uVar25 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar29);
              }
            }
            bVar29 = iRam_? != 0;
            (this->fields).__2__current = (Object *)VVar13;
            if (bVar29) {
              uVar25 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
              uVar26 = (ulonglong)((uVar25 & 0x1fffff) >> 6);
              do {
                uVar27 = *(ulonglong *)(uVar26 * 8 + 0xADDR);
                puVar28 = (ulonglong *)(uVar26 * 8 + 0xADDR);
                LOCK();
                bVar29 = uVar27 == *puVar28;
                if (bVar29) {
                  *puVar28 = uVar27 | 1L << (uVar25 & 0x3f);
                }
                UNLOCK();
              } while (!bVar29);
            }
            (this->fields).__1__state = 3;
            return 1;
          }
        }
      }
    }
  }
  else {
    fVar10 = (this->fields)._currentTime_5__2;
    fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar12 = fVar12 + fVar10;
    (this->fields)._currentTime_5__2 = fVar12;
    pAVar5 = (pLVar3->fields).goldBounceEffect;
    if (pAVar5 != (AnimationCurve *)0x0) {
      pvVar6 = (pAVar5->fields).m_Ptr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar5,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        bVar8 = (*pcVar7)();
        return bVar8;
      }
      fVar10 = (pLVar3->fields).goldImageDisplayTime;
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar7 = (code *)swi(3);
        bVar8 = (*pcVar7)();
        return bVar8;
      }
      pcRam_? = pcVar7;
      fVar10 = (float)(*pcRam_?)(pvVar6,fVar12 / fVar10);
      pIVar4 = (pLVar3->fields).goldImage;
      if ((pIVar4 != (Image *)0x0) && (pRVar11 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pIVar4,(MethodInfo *)0x0), pRVar11 != (RectTransform *)0x0)) {
        iVar1 = (pLVar3->fields).targetSize;
        VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta(pRVar11,(MethodInfo *)0x0);
        fVar12 = VStackX_8.y;
        VVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize(pRVar11,(MethodInfo *)0x0);
        VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax(pRVar11,(MethodInfo *)0x0);
        VVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin(pRVar11,(MethodInfo *)0x0);
        fStackX_18 = VVar14.x;
        fStackX_20 = VVar13.x;
        value_01.x = (float)iVar1 * fVar10 - (VStackX_8.x - fStackX_18) * fStackX_20;
        value_01.y = fVar12;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar11,value_01,(MethodInfo *)0x0);
        pIVar4 = (pLVar3->fields).goldImage;
        if ((pIVar4 != (Image *)0x0) && (pRVar11 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform((Graphic *)pIVar4,(MethodInfo *)0x0), pRVar11 != (RectTransform *)0x0)) {
          iVar1 = (pLVar3->fields).targetSize;
          VStack_15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta(pRVar11,(MethodInfo *)0x0);
          VVar13 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize(pRVar11,(MethodInfo *)0x0);
          VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax(pRVar11,(MethodInfo *)0x0);
          VVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin(pRVar11,(MethodInfo *)0x0);
          fStackX_1c = VVar14.y;
          fStackX_24 = VVar13.y;
          value.y = (float)iVar1 * fVar10 - (VStackX_8.y - fStackX_1c) * fStackX_24;
          value.x = VStack_15.x;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar11,value,(MethodInfo *)0x0);
          pAVar5 = (pLVar3->fields).goldFadeInCurve;
          pCVar32 = (pLVar3->fields).claimButton;
          if (pAVar5 != (AnimationCurve *)0x0) {
            pvVar6 = (pAVar5->fields).m_Ptr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar5,(MethodInfo *)0x0);
              pcVar7 = (code *)swi(3);
              bVar8 = (*pcVar7)();
              return bVar8;
            }
            fVar10 = (this->fields)._currentTime_5__2;
            fVar12 = (pLVar3->fields).goldImageDisplayTime;
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar7 = (code *)swi(3);
              bVar8 = (*pcVar7)();
              return bVar8;
            }
            pcRam_? = pcVar7;
            fVar10 = (float)(*pcRam_?)(pvVar6,fVar10 / fVar12);
            if (pCVar32 != (CanvasGroup *)0x0) {
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha(pCVar32,fVar10,(MethodInfo *)0x0);
              lVar24 = lRam_?;
              VStackX_8 = (Vector2)((ulonglong)VStackX_8 & 0xffffffff00000000);
              VVar13 = VStackX_8;
              if ((*(int *)(lRam_? + 0x28) < 0) && ((*(longlong *)(lRam_? + 0x60) == 0 || (VVar13 = VVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
                VVar13 = (Vector2)FUN_?(lRam_?);
                FUN_?((Object *)((longlong)VVar13 + 0x10),&VStackX_8,(longlong)*(int *)(lVar24 + 0xf8) + -0x10);
                if (iRam_? != 0) {
                  uVar25 = (uint)((ulonglong)((longlong)VVar13 + 0x10U) >> 0xc);
                  uVar26 = (ulonglong)((uVar25 & 0x1fffff) >> 6);
                  do {
                    uVar27 = *(ulonglong *)(uVar26 * 8 + 0xADDR);
                    puVar28 = (ulonglong *)(uVar26 * 8 + 0xADDR);
                    LOCK();
                    bVar29 = uVar27 == *puVar28;
                    if (bVar29) {
                      *puVar28 = uVar27 | 1L << (uVar25 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar29);
                }
              }
              bVar29 = iRam_? != 0;
              (this->fields).__2__current = (Object *)VVar13;
              if (bVar29) {
                uVar25 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
                uVar26 = (ulonglong)((uVar25 & 0x1fffff) >> 6);
                do {
                  uVar27 = *(ulonglong *)(uVar26 * 8 + 0xADDR);
                  puVar28 = (ulonglong *)(uVar26 * 8 + 0xADDR);
                  LOCK();
                  bVar29 = uVar27 == *puVar28;
                  if (bVar29) {
                    *puVar28 = uVar27 | 1L << (uVar25 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar29);
              }
              (this->fields).__1__state = 2;
              return 1;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeGoldIcon>d__30::LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30_System_Collections_IEnumerator_Reset(LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30__System_Collections_IEnumerator_Reset__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

