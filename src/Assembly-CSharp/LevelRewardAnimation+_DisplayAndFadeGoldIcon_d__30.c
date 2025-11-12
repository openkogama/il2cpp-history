
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeGoldIcon>d__30::
     LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30_MoveNext
               (LevelRewardAnimation_DisplayAndFadeGoldIcon_d_30 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_REWARD_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  iVar2 = (this->fields).__1__state;
  VVar3.x = 0.0;
  VVar3.y = 0.0;
  pLVar4 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    if ((pLVar4 == (LevelRewardAnimation *)0x0) ||
       (pIVar5 = (pLVar4->fields).goldImage, pIVar5 == (Image *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar5,1,(MethodInfo *)0x0);
    this_00 = (pLVar4->fields).nextLevelBadge;
    if (this_00 == (RawImage *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    pAVar6 = (pLVar4->fields).goldBounceEffect;
    if (pAVar6 == (AnimationCurve *)0x0) goto code_?;
    pvVar7 = (pAVar6->fields).m_Ptr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar6,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
    pcRam_? = pcVar8;
    fVar11 = (float)(*pcRam_?)(pvVar7,0);
    pIVar5 = (pLVar4->fields).goldImage;
    if ((pIVar5 == (Image *)0x0) ||
       (pRVar12 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar5,(MethodInfo *)0x0), pRVar12 == (RectTransform *)0x0))
    goto code_?;
    iVar2 = (pLVar4->fields).targetSize;
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                          (pRVar12,(MethodInfo *)0x0);
    fVar13 = VStackX_8.y;
    VVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize
                       (pRVar12,(MethodInfo *)0x0);
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                          (pRVar12,(MethodInfo *)0x0);
    VVar15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                       (pRVar12,(MethodInfo *)0x0);
    fStackX_18 = VVar15.x;
    fStackX_20 = VVar14.x;
    VVar14.x = (float)iVar2 * fVar11 - (VStackX_8.x - fStackX_18) * fStackX_20;
    VVar14.y = fVar13;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (pRVar12,VVar14,(MethodInfo *)0x0);
    pIVar5 = (pLVar4->fields).goldImage;
    if ((pIVar5 == (Image *)0x0) ||
       (pRVar12 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            ((Graphic *)pIVar5,(MethodInfo *)0x0), pRVar12 == (RectTransform *)0x0))
    goto code_?;
    iVar2 = (pLVar4->fields).targetSize;
    VStack_16 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                          (pRVar12,(MethodInfo *)0x0);
    VVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize
                       (pRVar12,(MethodInfo *)0x0);
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                          (pRVar12,(MethodInfo *)0x0);
    VVar15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                       (pRVar12,(MethodInfo *)0x0);
    fStackX_1c = VVar15.y;
    fStackX_24 = VVar14.y;
    VVar15.y = (float)iVar2 * fVar11 - (VStackX_8.y - fStackX_1c) * fStackX_24;
    VVar15.x = VStack_16.x;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (pRVar12,VVar15,(MethodInfo *)0x0);
    pIVar5 = (pLVar4->fields).goldImage;
    if (pIVar5 == (Image *)0x0) goto code_?;
    pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pIVar5,(MethodInfo *)0x0);
    VStack_16 = (Vector2)((ulonglong)_UNK_? << 0x20);
    uStack_18 = 0;
    uStack_19 = 0;
    uStack_20 = 0;
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(&VStack_16);
    if (pTVar17 == (Transform *)0x0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
    uStack_21 = (undefined4)uStack_19;
    uStack_22 = uStack_19._4_4_;
    uStack_23 = (undefined4)uStack_20;
    uStack_24 = uStack_20._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pTVar17->fields)._._.m_CachedPtr == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)();
    (this->fields)._currentTime_5__2 = 0.0;
code_?:
    if ((this->fields)._currentTime_5__2 / (pLVar4->fields).rotateUIYAxisTime < fVar1) {
      fVar1 = (this->fields)._currentTime_5__2;
      fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar11 = fVar11 + fVar1;
      (this->fields)._currentTime_5__2 = fVar11;
      pAVar6 = (pLVar4->fields).rotateUIYAxisIn;
      if (pAVar6 != (AnimationCurve *)0x0) {
        pvVar7 = (pAVar6->fields).m_Ptr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar6,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        fVar1 = (pLVar4->fields).rotateUIYAxisTime;
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
        pcRam_? = pcVar8;
        fVar1 = (float)(*pcRam_?)(pvVar7,fVar11 / fVar1);
        pIVar5 = (pLVar4->fields).goldImage;
        fVar1 = fVar1 * _UNK_? - _UNK_?;
        if (pIVar5 != (Image *)0x0) {
          pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pIVar5,(MethodInfo *)0x0);
          VStack_16 = (Vector2)((ulonglong)(uint)(fVar1 * _UNK_?) << 0x20);
          uStack_18 = 0;
          uStack_19 = 0;
          uStack_20 = 0;
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar8 = (code *)swi(3);
            bVar9 = (*pcVar8)();
            return bVar9;
          }
          pcRam_? = pcVar8;
          (*pcRam_?)(&VStack_16);
          if (pTVar17 == (Transform *)0x0) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            bVar9 = (*pcVar8)();
            return bVar9;
          }
          uStack_21 = (undefined4)uStack_19;
          uStack_22 = uStack_19._4_4_;
          uStack_23 = (undefined4)uStack_20;
          uStack_24 = uStack_20._4_4_;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar7 = (pTVar17->fields)._._.m_CachedPtr;
          if (pvVar7 != (void *)0x0) {
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar8 = (code *)swi(3);
              bVar9 = (*pcVar8)();
              return bVar9;
            }
            pcRam_? = pcVar8;
            (*pcRam_?)(pvVar7,&uStack_21);
            lVar25 = lRam_?;
            VStackX_8 = (Vector2)((ulonglong)VStackX_8 & 0xffffffff00000000);
            VVar14 = VStackX_8;
            if ((*(int *)(lRam_? + 0x28) < 0) &&
               ((*(longlong *)(lRam_? + 0x60) == 0 ||
                (VVar14 = VVar3, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
              VVar14 = (Vector2)FUN_?(lRam_?);
              FUN_?((Object *)((longlong)VVar14 + 0x10),&VStackX_8,
                            (longlong)*(int *)(lVar25 + 0xf8) + -0x10);
              if (iRam_? != 0) {
                uVar26 = (uint)((ulonglong)((longlong)VVar14 + 0x10U) >> 0xc);
                uVar27 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
                do {
                  uVar28 = *(ulonglong *)(uVar27 * 8 + 0xADDR);
                  puVar29 = (ulonglong *)(uVar27 * 8 + 0xADDR);
                  LOCK();
                  bVar30 = uVar28 == *puVar29;
                  if (bVar30) {
                    *puVar29 = uVar28 | 1L << (uVar26 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar30);
              }
            }
            bVar30 = iRam_? != 0;
            (this->fields).__2__current = (Object *)VVar14;
            if (bVar30) {
              uVar26 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
              uVar27 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
              do {
                uVar28 = *(ulonglong *)(uVar27 * 8 + 0xADDR);
                puVar29 = (ulonglong *)(uVar27 * 8 + 0xADDR);
                LOCK();
                bVar30 = uVar28 == *puVar29;
                if (bVar30) {
                  *puVar29 = uVar28 | 1L << (uVar26 & 0x3f);
                }
                UNLOCK();
              } while (!bVar30);
            }
            (this->fields).__1__state = 1;
            return 1;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          bVar9 = (*pcVar8)();
          return bVar9;
        }
      }
      goto code_?;
    }
    pIVar5 = (pLVar4->fields).goldImage;
    if (pIVar5 == (Image *)0x0) goto code_?;
    pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pIVar5,(MethodInfo *)0x0);
    VStack_16.x = 0.0;
    VStack_16.y = 0.0;
    uStack_18 = 0;
    uStack_19 = 0;
    uStack_20 = 0;
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(&VStack_16);
    if (pTVar17 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
    uStack_21 = (undefined4)uStack_19;
    uStack_22 = uStack_19._4_4_;
    uStack_23 = (undefined4)uStack_20;
    uStack_24 = uStack_20._4_4_;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar7 = (pTVar17->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar7);
    pTVar31 = (pLVar4->fields).header;
    if ((pTVar31 == (Text *)0x0) ||
       (pGVar32 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar31,(MethodInfo *)0x0), pGVar32 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar32,1,(MethodInfo *)0x0);
    pTVar31 = (pLVar4->fields).header;
    TM::TM__(StringLiteral_REWARD_,(MethodInfo *)0x0);
    if (pTVar31 == (Text *)0x0) goto code_?;
    (*(pTVar31->klass->vtable).set_text.methodPtr)(pTVar31);
    pTVar31 = (pLVar4->fields).goldText;
    if ((pTVar31 == (Text *)0x0) ||
       (pGVar32 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar31,(MethodInfo *)0x0), pGVar32 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar32,1,(MethodInfo *)0x0);
    pCVar33 = (pLVar4->fields).claimButton;
    if ((pCVar33 == (CanvasGroup *)0x0) ||
       (pGVar32 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pCVar33,(MethodInfo *)0x0), pGVar32 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar32,1,(MethodInfo *)0x0);
    pCVar33 = (pLVar4->fields).claimButton;
    if (pCVar33 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar33,0.0,(MethodInfo *)0x0);
    (this->fields)._currentTime_5__2 = 0.0;
  }
  else {
    if (iVar2 == 1) {
      (this->fields).__1__state = -1;
      if (pLVar4 == (LevelRewardAnimation *)0x0) goto code_?;
      goto code_?;
    }
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        (this->fields).__1__state = -1;
        return 0;
      }
      return 0;
    }
    (this->fields).__1__state = -1;
    if (pLVar4 == (LevelRewardAnimation *)0x0) goto code_?;
  }
  if (fVar1 <= (this->fields)._currentTime_5__2 / (pLVar4->fields).goldImageDisplayTime) {
    pAVar6 = (pLVar4->fields).goldBounceEffect;
    if (pAVar6 != (AnimationCurve *)0x0) {
      pvVar7 = (pAVar6->fields).m_Ptr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar6,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        bVar9 = (*pcVar8)();
        return bVar9;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar8 = (code *)swi(3);
        bVar9 = (*pcVar8)();
        return bVar9;
      }
      pcRam_? = pcVar8;
      fVar11 = (float)(*pcRam_?)(pvVar7,fVar1);
      pCVar33 = (pLVar4->fields).claimButton;
      if (pCVar33 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (pCVar33,fVar1,(MethodInfo *)0x0);
        pIVar5 = (pLVar4->fields).goldImage;
        if ((pIVar5 != (Image *)0x0) &&
           (pRVar12 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar5,(MethodInfo *)0x0),
           pRVar12 != (RectTransform *)0x0)) {
          iVar2 = (pLVar4->fields).targetSize;
          VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                      RectTransform_get_sizeDelta(pRVar12,(MethodInfo *)0x0);
          fVar1 = VStackX_8.y;
          VVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                   RectTransform_GetParentSize(pRVar12,(MethodInfo *)0x0);
          VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                      RectTransform_get_anchorMax(pRVar12,(MethodInfo *)0x0);
          VVar15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                   RectTransform_get_anchorMin(pRVar12,(MethodInfo *)0x0);
          fStackX_18 = VVar15.x;
          fStackX_20 = VVar14.x;
          value_02.x = (float)iVar2 * fVar11 - (VStackX_8.x - fStackX_18) * fStackX_20;
          value_02.y = fVar1;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar12,value_02,(MethodInfo *)0x0);
          pIVar5 = (pLVar4->fields).goldImage;
          if ((pIVar5 != (Image *)0x0) &&
             (pRVar12 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                  ((Graphic *)pIVar5,(MethodInfo *)0x0),
             pRVar12 != (RectTransform *)0x0)) {
            iVar2 = (pLVar4->fields).targetSize;
            VStack_16 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_get_sizeDelta(pRVar12,(MethodInfo *)0x0);
            VVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                     RectTransform_GetParentSize(pRVar12,(MethodInfo *)0x0);
            VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_get_anchorMax(pRVar12,(MethodInfo *)0x0);
            VVar15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                     RectTransform_get_anchorMin(pRVar12,(MethodInfo *)0x0);
            fStackX_1c = VVar15.y;
            fStackX_24 = VVar14.y;
            value_00.y = (float)iVar2 * fVar11 - (VStackX_8.y - fStackX_1c) * fStackX_24;
            value_00.x = VStack_16.x;
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                      (pRVar12,value_00,(MethodInfo *)0x0);
            lVar25 = lRam_?;
            VStackX_8 = (Vector2)((ulonglong)VStackX_8 & 0xffffffff00000000);
            VVar14 = VStackX_8;
            if ((*(int *)(lRam_? + 0x28) < 0) &&
               ((*(longlong *)(lRam_? + 0x60) == 0 ||
                (VVar14 = VVar3, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
              VVar14 = (Vector2)FUN_?(lRam_?);
              FUN_?((Object *)((longlong)VVar14 + 0x10),&VStackX_8,
                            (longlong)*(int *)(lVar25 + 0xf8) + -0x10);
              if (iRam_? != 0) {
                uVar26 = (uint)((ulonglong)((longlong)VVar14 + 0x10U) >> 0xc);
                uVar27 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
                do {
                  uVar28 = *(ulonglong *)(uVar27 * 8 + 0xADDR);
                  puVar29 = (ulonglong *)(uVar27 * 8 + 0xADDR);
                  LOCK();
                  bVar30 = uVar28 == *puVar29;
                  if (bVar30) {
                    *puVar29 = uVar28 | 1L << (uVar26 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar30);
              }
            }
            bVar30 = iRam_? != 0;
            (this->fields).__2__current = (Object *)VVar14;
            if (bVar30) {
              uVar26 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
              uVar27 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
              do {
                uVar28 = *(ulonglong *)(uVar27 * 8 + 0xADDR);
                puVar29 = (ulonglong *)(uVar27 * 8 + 0xADDR);
                LOCK();
                bVar30 = uVar28 == *puVar29;
                if (bVar30) {
                  *puVar29 = uVar28 | 1L << (uVar26 & 0x3f);
                }
                UNLOCK();
              } while (!bVar30);
            }
            (this->fields).__1__state = 3;
            return 1;
          }
        }
      }
    }
  }
  else {
    fVar1 = (this->fields)._currentTime_5__2;
    fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar11 = fVar11 + fVar1;
    (this->fields)._currentTime_5__2 = fVar11;
    pAVar6 = (pLVar4->fields).goldBounceEffect;
    if (pAVar6 != (AnimationCurve *)0x0) {
      pvVar7 = (pAVar6->fields).m_Ptr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar6,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        bVar9 = (*pcVar8)();
        return bVar9;
      }
      fVar1 = (pLVar4->fields).goldImageDisplayTime;
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar8 = (code *)swi(3);
        bVar9 = (*pcVar8)();
        return bVar9;
      }
      pcRam_? = pcVar8;
      fVar1 = (float)(*pcRam_?)(pvVar7,fVar11 / fVar1);
      pIVar5 = (pLVar4->fields).goldImage;
      if ((pIVar5 != (Image *)0x0) &&
         (pRVar12 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                              ((Graphic *)pIVar5,(MethodInfo *)0x0), pRVar12 != (RectTransform *)0x0
         )) {
        iVar2 = (pLVar4->fields).targetSize;
        VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                    RectTransform_get_sizeDelta(pRVar12,(MethodInfo *)0x0);
        fVar11 = VStackX_8.y;
        VVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize
                           (pRVar12,(MethodInfo *)0x0);
        VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                    RectTransform_get_anchorMax(pRVar12,(MethodInfo *)0x0);
        VVar15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                           (pRVar12,(MethodInfo *)0x0);
        fStackX_18 = VVar15.x;
        fStackX_20 = VVar14.x;
        value_01.x = (float)iVar2 * fVar1 - (VStackX_8.x - fStackX_18) * fStackX_20;
        value_01.y = fVar11;
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                  (pRVar12,value_01,(MethodInfo *)0x0);
        pIVar5 = (pLVar4->fields).goldImage;
        if ((pIVar5 != (Image *)0x0) &&
           (pRVar12 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                ((Graphic *)pIVar5,(MethodInfo *)0x0),
           pRVar12 != (RectTransform *)0x0)) {
          iVar2 = (pLVar4->fields).targetSize;
          VStack_16 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                      RectTransform_get_sizeDelta(pRVar12,(MethodInfo *)0x0);
          VVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                   RectTransform_GetParentSize(pRVar12,(MethodInfo *)0x0);
          VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                      RectTransform_get_anchorMax(pRVar12,(MethodInfo *)0x0);
          VVar15 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                   RectTransform_get_anchorMin(pRVar12,(MethodInfo *)0x0);
          fStackX_1c = VVar15.y;
          fStackX_24 = VVar14.y;
          value.y = (float)iVar2 * fVar1 - (VStackX_8.y - fStackX_1c) * fStackX_24;
          value.x = VStack_16.x;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar12,value,(MethodInfo *)0x0);
          pAVar6 = (pLVar4->fields).goldFadeInCurve;
          pCVar33 = (pLVar4->fields).claimButton;
          if (pAVar6 != (AnimationCurve *)0x0) {
            pvVar7 = (pAVar6->fields).m_Ptr;
            if (pvVar7 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar6,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              bVar9 = (*pcVar8)();
              return bVar9;
            }
            fVar1 = (this->fields)._currentTime_5__2;
            fVar11 = (pLVar4->fields).goldImageDisplayTime;
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar8 = (code *)swi(3);
              bVar9 = (*pcVar8)();
              return bVar9;
            }
            pcRam_? = pcVar8;
            fVar1 = (float)(*pcRam_?)(pvVar7,fVar1 / fVar11);
            if (pCVar33 != (CanvasGroup *)0x0) {
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (pCVar33,fVar1,(MethodInfo *)0x0);
              lVar25 = lRam_?;
              VStackX_8 = (Vector2)((ulonglong)VStackX_8 & 0xffffffff00000000);
              VVar14 = VStackX_8;
              if ((*(int *)(lRam_? + 0x28) < 0) &&
                 ((*(longlong *)(lRam_? + 0x60) == 0 ||
                  (VVar14 = VVar3, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
                VVar14 = (Vector2)FUN_?(lRam_?);
                FUN_?((Object *)((longlong)VVar14 + 0x10),&VStackX_8,
                              (longlong)*(int *)(lVar25 + 0xf8) + -0x10);
                if (iRam_? != 0) {
                  uVar26 = (uint)((ulonglong)((longlong)VVar14 + 0x10U) >> 0xc);
                  uVar27 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
                  do {
                    uVar28 = *(ulonglong *)(uVar27 * 8 + 0xADDR);
                    puVar29 = (ulonglong *)(uVar27 * 8 + 0xADDR);
                    LOCK();
                    bVar30 = uVar28 == *puVar29;
                    if (bVar30) {
                      *puVar29 = uVar28 | 1L << (uVar26 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar30);
                }
              }
              bVar30 = iRam_? != 0;
              (this->fields).__2__current = (Object *)VVar14;
              if (bVar30) {
                uVar26 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
                uVar27 = (ulonglong)((uVar26 & 0x1fffff) >> 6);
                do {
                  uVar28 = *(ulonglong *)(uVar27 * 8 + 0xADDR);
                  puVar29 = (ulonglong *)(uVar27 * 8 + 0xADDR);
                  LOCK();
                  bVar30 = uVar28 == *puVar29;
                  if (bVar30) {
                    *puVar29 = uVar28 | 1L << (uVar26 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar30);
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
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
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
  uVar1 = func_?(&
                              MethodInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

