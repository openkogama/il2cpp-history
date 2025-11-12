
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadePrevBadge>d__28::LevelRewardAnimation_DisplayAndFadePrevBadge_d_28_MoveNext(LevelRewardAnimation_DisplayAndFadePrevBadge_d_28 *this,MethodInfo *method)

{
  this_00 = (IEnumerator__Class *)(this->fields).__4__this;
  iVar1 = (this->fields).__1__state;
  VVar2.x = 0.0;
  VVar2.y = 0.0;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((this_00 == (IEnumerator__Class *)0x0) || (pGVar3 = (Graphic *)(this_00->_0).byval_arg.data.typeHandle, pGVar3 == (Graphic *)0x0)) goto code_?;
    pRVar4 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar3,(MethodInfo *)0x0);
    VVar5.x = (float)*(int *)&this_00->interfaceOffsets;
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    VVar5.y = (float)*(int *)&this_00->interfaceOffsets;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar4,VVar5,(MethodInfo *)0x0);
    pCVar6 = (Component *)(this_00->_0).byval_arg.data.typeHandle;
    if (pCVar6 == (Component *)0x0) goto code_?;
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar6,(MethodInfo *)0x0);
    VStack_8.x = 0.0;
    VStack_8.y = 0.0;
    uStack_9 = 0;
    uStack_10 = 0;
    uStack_11 = 0;
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar12 = (code *)swi(3);
      bVar14 = (*pcVar12)();
      return bVar14;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(&VStack_8);
    if (pTVar7 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      bVar14 = (*pcVar12)();
      return bVar14;
    }
    uStack_15 = uStack_10;
    uStack_16 = uStack_11;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar17 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar17 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      bVar14 = (*pcVar12)();
      return bVar14;
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar12 = (code *)swi(3);
      bVar14 = (*pcVar12)();
      return bVar14;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(pvVar17,&uStack_15);
    pBVar18 = (Behaviour *)(this_00->_0).byval_arg.data.typeHandle;
    if (pBVar18 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled(pBVar18,1,(MethodInfo *)0x0);
    pCVar6 = (Component *)(this_00->_0).implementedInterfaces;
    if ((pCVar6 == (Component *)0x0) || (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar6,(MethodInfo *)0x0), pTVar7 == (Transform *)0x0)) goto code_?;
    lStack_19 = 0x3f8000003f800000;
    uStack_20 = 0x3f800000;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar17 = (pTVar7->fields)._._.m_CachedPtr;
    if (pvVar17 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      bVar14 = (*pcVar12)();
      return bVar14;
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar12 = (code *)swi(3);
      bVar14 = (*pcVar12)();
      return bVar14;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(pvVar17);
    pBVar18 = (Behaviour *)(this_00->_0).implementedInterfaces;
    if (pBVar18 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled(pBVar18,0,(MethodInfo *)0x0);
    this_01 = (this_00->_0).properties;
    if ((this_01 == (PropertyInfo *)0x0) || (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this_01,(MethodInfo *)0x0), pGVar21 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar21,0,(MethodInfo *)0x0);
    pCVar6 = (Component *)(this_00->_0).methods;
    if ((pCVar6 == (Component *)0x0) || (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject(pCVar6,(MethodInfo *)0x0), pGVar21 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar21,0,(MethodInfo *)0x0);
    pIVar22 = (this_00->_0).declaringType;
    if (pIVar22 == (Il2CppClass *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pIVar22,0,(MethodInfo *)0x0);
    this_02 = (this_00->_0).events;
    if ((this_02 == (EventInfo *)0x0) || (pGVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)this_02,(MethodInfo *)0x0), pGVar21 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar21,0,(MethodInfo *)0x0);
    (this->fields)._currentTime_5__2 = 0.0;
code_?:
    if ((this->fields)._currentTime_5__2 / *(float *)&(this_00->_0).byval_arg.attrs < 1.0) {
      fVar23 = (this->fields)._currentTime_5__2;
      fVar24 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      (this->fields)._currentTime_5__2 = fVar24 + fVar23;
      pIVar25 = (this_00->_0).this_arg.data.type;
      if (pIVar25 != (Il2CppType *)0x0) {
        pOVar26 = pIVar25[1].data.dummy;
        if (pOVar26 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar25,(MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          bVar14 = (*pcVar12)();
          return bVar14;
        }
        pcVar12 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar12 = (code *)swi(3);
          bVar14 = (*pcVar12)();
          return bVar14;
        }
        pcRam_? = pcVar12;
        fVar23 = (float)(*pcRam_?)(pOVar26);
        pGVar3 = (Graphic *)(this_00->_0).byval_arg.data.typeHandle;
        if ((pGVar3 != (Graphic *)0x0) && (pRVar4 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar3,(MethodInfo *)0x0), pRVar4 != (RectTransform *)0x0)) {
          iVar1 = *(int *)&this_00->interfaceOffsets;
          VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta(pRVar4,(MethodInfo *)0x0);
          fVar24 = VStackX_8.y;
          VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize(pRVar4,(MethodInfo *)0x0);
          VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax(pRVar4,(MethodInfo *)0x0);
          VVar27 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin(pRVar4,(MethodInfo *)0x0);
          fStackX_18 = VVar27.x;
          fStackX_20 = VVar5.x;
          VVar27.x = (float)iVar1 * fVar23 - (VStackX_8.x - fStackX_18) * fStackX_20;
          VVar27.y = fVar24;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar4,VVar27,(MethodInfo *)0x0);
          pGVar3 = (Graphic *)(this_00->_0).byval_arg.data.typeHandle;
          if ((pGVar3 != (Graphic *)0x0) && (pRVar4 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar3,(MethodInfo *)0x0), pRVar4 != (RectTransform *)0x0)) {
            iVar1 = *(int *)&this_00->interfaceOffsets;
            VStack_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta(pRVar4,(MethodInfo *)0x0);
            VVar5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize(pRVar4,(MethodInfo *)0x0);
            VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax(pRVar4,(MethodInfo *)0x0);
            VVar27 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin(pRVar4,(MethodInfo *)0x0);
            fStackX_1c = VVar27.y;
            fStackX_24 = VVar5.y;
            value.y = (float)iVar1 * fVar23 - (VStackX_8.y - fStackX_1c) * fStackX_24;
            value.x = VStack_8.x;
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar4,value,(MethodInfo *)0x0);
            lVar28 = lRam_?;
            VStackX_8 = (Vector2)((ulonglong)VStackX_8 & 0xffffffff00000000);
            VVar5 = VStackX_8;
            if ((*(int *)(lRam_? + 0x28) < 0) && ((*(longlong *)(lRam_? + 0x60) == 0 || (VVar5 = VVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
              VVar5 = (Vector2)FUN_?(lRam_?);
              FUN_?((Object *)((longlong)VVar5 + 0x10),&VStackX_8,(longlong)*(int *)(lVar28 + 0xf8) + -0x10);
              if (iRam_? != 0) {
                uVar29 = (uint)((ulonglong)((longlong)VVar5 + 0x10U) >> 0xc);
                uVar30 = (ulonglong)((uVar29 & 0x1fffff) >> 6);
                do {
                  uVar31 = *(ulonglong *)(uVar30 * 8 + 0xADDR);
                  puVar32 = (ulonglong *)(uVar30 * 8 + 0xADDR);
                  LOCK();
                  bVar33 = uVar31 == *puVar32;
                  if (bVar33) {
                    *puVar32 = uVar31 | 1L << (uVar29 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar33);
              }
            }
            bVar33 = iRam_? != 0;
            (this->fields).__2__current = (Object *)VVar5;
            if (bVar33) {
              uVar29 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
              uVar30 = (ulonglong)((uVar29 & 0x1fffff) >> 6);
              do {
                uVar31 = *(ulonglong *)(uVar30 * 8 + 0xADDR);
                puVar32 = (ulonglong *)(uVar30 * 8 + 0xADDR);
                LOCK();
                bVar33 = uVar31 == *puVar32;
                if (bVar33) {
                  *puVar32 = uVar31 | 1L << (uVar29 & 0x3f);
                }
                UNLOCK();
              } while (!bVar33);
            }
            (this->fields).__1__state = 1;
            return 1;
          }
        }
      }
      goto code_?;
    }
    pIVar25 = (this_00->_0).this_arg.data.type;
    if (pIVar25 == (Il2CppType *)0x0) goto code_?;
    pOVar26 = pIVar25[1].data.dummy;
    if (pOVar26 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar25,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      bVar14 = (*pcVar12)();
      return bVar14;
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar12 = (code *)swi(3);
      bVar14 = (*pcVar12)();
      return bVar14;
    }
    pcRam_? = pcVar12;
    fVar23 = (float)(*pcRam_?)(pOVar26);
    pGVar3 = (Graphic *)(this_00->_0).byval_arg.data.typeHandle;
    if (pGVar3 == (Graphic *)0x0) goto code_?;
    pRVar4 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar3,(MethodInfo *)0x0);
    value_00.x = (float)*(int *)&this_00->interfaceOffsets * fVar23;
    if (pRVar4 == (RectTransform *)0x0) goto code_?;
    value_00.y = (float)*(int *)&this_00->interfaceOffsets * fVar23;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar4,value_00,(MethodInfo *)0x0);
    (this->fields)._currentTime_5__2 = 0.0;
  }
  else {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      if (this_00 == (IEnumerator__Class *)0x0) goto code_?;
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
    if (this_00 == (IEnumerator__Class *)0x0) goto code_?;
  }
  if (1.0 <= (this->fields)._currentTime_5__2 / *(float *)&(this_00->_0).fields) {
    pCVar6 = (Component *)(this_00->_0).byval_arg.data.typeHandle;
    if (pCVar6 != (Component *)0x0) {
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar6,(MethodInfo *)0x0);
      lStack_19 = 0x3fc90fdb00000000;
      uStack_20 = 0;
      uStack_10 = 0;
      uStack_11 = 0;
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar12 = (code *)swi(3);
        bVar14 = (*pcVar12)();
        return bVar14;
      }
      pcRam_? = pcVar12;
      (*pcRam_?)(&lStack_19);
      if (pTVar7 == (Transform *)0x0) {
        FUN_?();
        pcVar12 = (code *)swi(3);
        bVar14 = (*pcVar12)();
        return bVar14;
      }
      uStack_15 = uStack_10;
      uStack_16 = uStack_11;
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar17 = (pTVar7->fields)._._.m_CachedPtr;
      if (pvVar17 != (void *)0x0) {
        pcVar12 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar12 = (code *)swi(3);
          bVar14 = (*pcVar12)();
          return bVar14;
        }
        pcRam_? = pcVar12;
        (*pcRam_?)(pvVar17,&uStack_15);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        routine = (IEnumerator *)FUN_?(TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29);
        bVar33 = iRam_? != 0;
        *(undefined4 *)&routine[1].klass = 0;
        routine[2].klass = this_00;
        if (bVar33) {
          uVar29 = (uint)((ulonglong)(routine + 2) >> 0xc);
          uVar30 = (ulonglong)((uVar29 & 0x1fffff) >> 6);
          do {
            uVar31 = *(ulonglong *)(uVar30 * 8 + 0xADDR);
            puVar32 = (ulonglong *)(uVar30 * 8 + 0xADDR);
            LOCK();
            bVar33 = uVar31 == *puVar32;
            if (bVar33) {
              *puVar32 = uVar31 | 1L << (uVar29 & 0x3f);
            }
            UNLOCK();
          } while (!bVar33);
        }
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0);
        lVar28 = lRam_?;
        VStackX_8 = (Vector2)((ulonglong)(uint)VStackX_8.y << 0x20);
        VVar5 = VStackX_8;
        if ((*(int *)(lRam_? + 0x28) < 0) && ((*(longlong *)(lRam_? + 0x60) == 0 || (VVar5 = VVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
          VVar5 = (Vector2)FUN_?(lRam_?);
          FUN_?((Object *)((longlong)VVar5 + 0x10),&VStackX_8,(longlong)*(int *)(lVar28 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar29 = (uint)((ulonglong)((longlong)VVar5 + 0x10U) >> 0xc);
            uVar30 = (ulonglong)((uVar29 & 0x1fffff) >> 6);
            do {
              uVar31 = *(ulonglong *)(uVar30 * 8 + 0xADDR);
              puVar32 = (ulonglong *)(uVar30 * 8 + 0xADDR);
              LOCK();
              bVar33 = uVar31 == *puVar32;
              if (bVar33) {
                *puVar32 = uVar31 | 1L << (uVar29 & 0x3f);
              }
              UNLOCK();
            } while (!bVar33);
          }
        }
        bVar33 = iRam_? != 0;
        (this->fields).__2__current = (Object *)VVar5;
        if (bVar33) {
          uVar29 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
          uVar30 = (ulonglong)((uVar29 & 0x1fffff) >> 6);
          do {
            uVar31 = *(ulonglong *)(uVar30 * 8 + 0xADDR);
            puVar32 = (ulonglong *)(uVar30 * 8 + 0xADDR);
            LOCK();
            bVar33 = uVar31 == *puVar32;
            if (bVar33) {
              *puVar32 = uVar31 | 1L << (uVar29 & 0x3f);
            }
            UNLOCK();
          } while (!bVar33);
        }
        (this->fields).__1__state = 3;
        return 1;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      bVar14 = (*pcVar12)();
      return bVar14;
    }
  }
  else {
    fVar23 = (this->fields)._currentTime_5__2;
    fVar24 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._currentTime_5__2 = fVar24 + fVar23;
    pIVar22 = (this_00->_0).klass;
    if (pIVar22 != (Il2CppClass *)0x0) {
      pcVar34 = pIVar22->name;
      if (pcVar34 == (char *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar22,(MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        bVar14 = (*pcVar12)();
        return bVar14;
      }
      pcVar12 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar12 = (code *)swi(3);
        bVar14 = (*pcVar12)();
        return bVar14;
      }
      pcRam_? = pcVar12;
      fVar23 = (float)(*pcRam_?)(pcVar34);
      pCVar6 = (Component *)(this_00->_0).byval_arg.data.typeHandle;
      if (pCVar6 != (Component *)0x0) {
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar6,(MethodInfo *)0x0);
        lStack_19 = (ulonglong)(uint)(fVar23 * 90.0 * 0.017453292) << 0x20;
        uStack_20 = 0;
        uStack_10 = 0;
        uStack_11 = 0;
        pcVar12 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar12 = (code *)swi(3);
          bVar14 = (*pcVar12)();
          return bVar14;
        }
        pcRam_? = pcVar12;
        (*pcRam_?)(&lStack_19);
        if (pTVar7 == (Transform *)0x0) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          bVar14 = (*pcVar12)();
          return bVar14;
        }
        uStack_15 = uStack_10;
        uStack_16 = uStack_11;
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar17 = (pTVar7->fields)._._.m_CachedPtr;
        if (pvVar17 != (void *)0x0) {
          pcVar12 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
            uVar13 = func_?(&UNK_?);
            FUN_?(uVar13,0);
            pcVar12 = (code *)swi(3);
            bVar14 = (*pcVar12)();
            return bVar14;
          }
          pcRam_? = pcVar12;
          (*pcRam_?)(pvVar17,&uStack_15);
          lVar28 = lRam_?;
          VStackX_8 = (Vector2)((ulonglong)(uint)VStackX_8.y << 0x20);
          VVar5 = VStackX_8;
          if ((*(int *)(lRam_? + 0x28) < 0) && ((*(longlong *)(lRam_? + 0x60) == 0 || (VVar5 = VVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
            VVar5 = (Vector2)FUN_?(lRam_?);
            FUN_?((Object *)((longlong)VVar5 + 0x10),&VStackX_8,(longlong)*(int *)(lVar28 + 0xf8) + -0x10);
            if (iRam_? != 0) {
              uVar29 = (uint)((ulonglong)((longlong)VVar5 + 0x10U) >> 0xc);
              uVar30 = (ulonglong)((uVar29 & 0x1fffff) >> 6);
              do {
                uVar31 = *(ulonglong *)(uVar30 * 8 + 0xADDR);
                puVar32 = (ulonglong *)(uVar30 * 8 + 0xADDR);
                LOCK();
                bVar33 = uVar31 == *puVar32;
                if (bVar33) {
                  *puVar32 = uVar31 | 1L << (uVar29 & 0x3f);
                }
                UNLOCK();
              } while (!bVar33);
            }
          }
          bVar33 = iRam_? != 0;
          (this->fields).__2__current = (Object *)VVar5;
          if (bVar33) {
            uVar29 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
            uVar30 = (ulonglong)((uVar29 & 0x1fffff) >> 6);
            do {
              uVar31 = *(ulonglong *)(uVar30 * 8 + 0xADDR);
              puVar32 = (ulonglong *)(uVar30 * 8 + 0xADDR);
              LOCK();
              bVar33 = uVar31 == *puVar32;
              if (bVar33) {
                *puVar32 = uVar31 | 1L << (uVar29 & 0x3f);
              }
              UNLOCK();
            } while (!bVar33);
          }
          (this->fields).__1__state = 2;
          return 1;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
        pcVar12 = (code *)swi(3);
        bVar14 = (*pcVar12)();
        return bVar14;
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  bVar14 = (*pcVar12)();
  return bVar14;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadePrevBadge>d__28::LevelRewardAnimation_DisplayAndFadePrevBadge_d_28_System_Collections_IEnumerator_Reset(LevelRewardAnimation_DisplayAndFadePrevBadge_d_28 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__LevelRewardAnimation___DisplayAndFadePrevBadge_d__28__System_Collections_IEnumerator_Reset__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

