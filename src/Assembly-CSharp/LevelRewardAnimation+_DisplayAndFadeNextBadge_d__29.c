
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeNextBadge>d__29::LevelRewardAnimation_DisplayAndFadeNextBadge_d_29_MoveNext(LevelRewardAnimation_DisplayAndFadeNextBadge_d_29 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_LEVEL_UP_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  VVar2.x = 0.0;
  VVar2.y = 0.0;
  this_00 = (IEnumerator__Class *)(this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((this_00 == (IEnumerator__Class *)0x0) || (pCVar3 = *(Component **)&(this_00->_0).this_arg.attrs, pCVar3 == (Component *)0x0)) goto code_?;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar3,(MethodInfo *)0x0);
    VStack_5.x = 0.0;
    VStack_5.y = -1.5707964;
    uStack_6 = uStack_6 & 0xffffffff00000000;
    VStack_7.x = 0.0;
    VStack_7.y = 0.0;
    uStack_8 = 0;
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      bVar11 = (*pcVar9)();
      return bVar11;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(&VStack_5);
    if (pTVar4 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      bVar11 = (*pcVar9)();
      return bVar11;
    }
    VStack_12 = VStack_7;
    uStack_13 = uStack_8;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar14 = (pTVar4->fields)._._.m_CachedPtr;
    if (pvVar14 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      bVar11 = (*pcVar9)();
      return bVar11;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      bVar11 = (*pcVar9)();
      return bVar11;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar14,(Quaternion *)&VStack_12);
    pBVar15 = *(Behaviour **)&(this_00->_0).this_arg.attrs;
    if (pBVar15 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled(pBVar15,1,(MethodInfo *)0x0);
    pBVar15 = (Behaviour *)(this_00->_0).byval_arg.data.typeHandle;
    if (pBVar15 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled(pBVar15,0,(MethodInfo *)0x0);
    pIVar16 = (this_00->_0).castClass;
    if (pIVar16 == (Il2CppClass *)0x0) goto code_?;
    pcVar17 = pIVar16->name;
    if (pcVar17 == (char *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar16,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      bVar11 = (*pcVar9)();
      return bVar11;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      bVar11 = (*pcVar9)();
      return bVar11;
    }
    pcRam_? = pcVar9;
    fVar18 = (float)(*pcRam_?)(pcVar17,0);
    pGVar19 = *(Graphic **)&(this_00->_0).this_arg.attrs;
    if ((pGVar19 == (Graphic *)0x0) || (pRVar20 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar19,(MethodInfo *)0x0), pRVar20 == (RectTransform *)0x0)) goto code_?;
    iVar1 = *(int *)&this_00->interfaceOffsets;
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta(pRVar20,(MethodInfo *)0x0);
    fVar21 = VStackX_8.y;
    VVar22 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize(pRVar20,(MethodInfo *)0x0);
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax(pRVar20,(MethodInfo *)0x0);
    VVar23 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin(pRVar20,(MethodInfo *)0x0);
    fStackX_18 = VVar23.x;
    fStackX_20 = VVar22.x;
    VVar22.x = (float)iVar1 * fVar18 - (VStackX_8.x - fStackX_18) * fStackX_20;
    VVar22.y = fVar21;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar20,VVar22,(MethodInfo *)0x0);
    pGVar19 = *(Graphic **)&(this_00->_0).this_arg.attrs;
    if ((pGVar19 == (Graphic *)0x0) || (pRVar20 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar19,(MethodInfo *)0x0), pRVar20 == (RectTransform *)0x0)) goto code_?;
    iVar1 = *(int *)&this_00->interfaceOffsets;
    VStack_5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta(pRVar20,(MethodInfo *)0x0);
    VVar22 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize(pRVar20,(MethodInfo *)0x0);
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax(pRVar20,(MethodInfo *)0x0);
    VVar23 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin(pRVar20,(MethodInfo *)0x0);
    fStackX_1c = VVar23.y;
    fStackX_24 = VVar22.y;
    VVar23.y = (float)iVar1 * fVar18 - (VStackX_8.y - fStackX_1c) * fStackX_24;
    VVar23.x = VStack_5.x;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar20,VVar23,(MethodInfo *)0x0);
    (this->fields)._currentTime_5__2 = 0.0;
code_?:
    if ((this->fields)._currentTime_5__2 / *(float *)&(this_00->_0).fields < 1.0) {
      fVar18 = (this->fields)._currentTime_5__2;
      fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      fVar21 = fVar21 + fVar18;
      (this->fields)._currentTime_5__2 = fVar21;
      obj = (this_00->_0).interopData;
      if (obj != (Il2CppInteropData *)0x0) {
        pPVar24 = obj->pinvokeMarshalFromNativeFunction;
        if (pPVar24 == (PInvokeMarshalFromNativeFunc)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          bVar11 = (*pcVar9)();
          return bVar11;
        }
        fVar18 = *(float *)&(this_00->_0).fields;
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          bVar11 = (*pcVar9)();
          return bVar11;
        }
        pcRam_? = pcVar9;
        fVar18 = (float)(*pcRam_?)(pPVar24,fVar21 / fVar18);
        pCVar3 = *(Component **)&(this_00->_0).this_arg.attrs;
        if (pCVar3 != (Component *)0x0) {
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar3,(MethodInfo *)0x0);
          VStack_5 = (Vector2)((ulonglong)(uint)((fVar18 * 90.0 - 90.0) * 0.017453292) << 0x20);
          uStack_6 = uStack_6 & 0xffffffff00000000;
          VStack_7.x = 0.0;
          VStack_7.y = 0.0;
          uStack_8._0_4_ = 0.0;
          uStack_8._4_4_ = 0.0;
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar9 = (code *)swi(3);
            bVar11 = (*pcVar9)();
            return bVar11;
          }
          pcRam_? = pcVar9;
          (*pcRam_?)(&VStack_5);
          if (pTVar4 == (Transform *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            bVar11 = (*pcVar9)();
            return bVar11;
          }
          VStack_12 = VStack_7;
          uStack_13._0_4_ = (float)(undefined4)uStack_8;
          uStack_13._4_4_ = (float)uStack_8._4_4_;
          if (cRam_? == '\0') {
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar14 = (pTVar4->fields)._._.m_CachedPtr;
          if (pvVar14 != (void *)0x0) {
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar9 = (code *)swi(3);
              bVar11 = (*pcVar9)();
              return bVar11;
            }
            pcRam_? = pcVar9;
            (*pcRam_?)(pvVar14,(Quaternion *)&VStack_12);
            lVar25 = lRam_?;
            VStackX_8 = (Vector2)((ulonglong)VStackX_8 & 0xffffffff00000000);
            VVar22 = VStackX_8;
            if ((*(int *)(lRam_? + 0x28) < 0) && ((*(longlong *)(lRam_? + 0x60) == 0 || (VVar22 = VVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
              VVar22 = (Vector2)FUN_?(lRam_?);
              FUN_?((Object *)((longlong)VVar22 + 0x10),&VStackX_8,(longlong)*(int *)(lVar25 + 0xf8) + -0x10);
              if (iRam_? != 0) {
                uVar26 = (uint)((ulonglong)((longlong)VVar22 + 0x10U) >> 0xc);
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
            (this->fields).__2__current = (Object *)VVar22;
            func_?(&(this->fields).__2__current);
            (this->fields).__1__state = 1;
            return 1;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          bVar11 = (*pcVar9)();
          return bVar11;
        }
      }
      goto code_?;
    }
    pBVar15 = (Behaviour *)(this_00->_0).implementedInterfaces;
    if (pBVar15 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled(pBVar15,1,(MethodInfo *)0x0);
    pEVar31 = (this_00->_0).events;
    if ((pEVar31 == (EventInfo *)0x0) || (pGVar32 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pEVar31,(MethodInfo *)0x0), pGVar32 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar32,1,(MethodInfo *)0x0);
    pEVar31 = (this_00->_0).events;
    TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
    if (pEVar31 == (EventInfo *)0x0) goto code_?;
    (**(code **)(pEVar31->name + 0x5e8))(pEVar31);
    pCVar3 = *(Component **)&(this_00->_0).this_arg.attrs;
    if (pCVar3 == (Component *)0x0) goto code_?;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar3,(MethodInfo *)0x0);
    VStack_5.x = 0.0;
    VStack_5.y = 0.0;
    uStack_6 = uStack_6 & 0xffffffff00000000;
    VStack_7.x = 0.0;
    VStack_7.y = 0.0;
    uStack_8 = 0;
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      bVar11 = (*pcVar9)();
      return bVar11;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(&VStack_5);
    if (pTVar4 == (Transform *)0x0) {
      FUN_?();
      pcVar9 = (code *)swi(3);
      bVar11 = (*pcVar9)();
      return bVar11;
    }
    VStack_12 = VStack_7;
    uStack_13 = uStack_8;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pTVar4->fields)._._.m_CachedPtr == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      bVar11 = (*pcVar9)();
      return bVar11;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      bVar11 = (*pcVar9)();
      return bVar11;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)();
    (this->fields)._currentTime_5__2 = 0.0;
code_?:
    if ((this->fields)._currentTime_5__2 / *(float *)&(this_00->_0).element_class < 1.0) {
      fVar18 = (this->fields)._currentTime_5__2;
      fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      fVar21 = fVar21 + fVar18;
      (this->fields)._currentTime_5__2 = fVar21;
      pIVar16 = (this_00->_0).castClass;
      if (pIVar16 != (Il2CppClass *)0x0) {
        pcVar17 = pIVar16->name;
        if (pcVar17 == (char *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar16,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          bVar11 = (*pcVar9)();
          return bVar11;
        }
        fVar18 = *(float *)&(this_00->_0).element_class;
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          bVar11 = (*pcVar9)();
          return bVar11;
        }
        pcRam_? = pcVar9;
        fVar18 = (float)(*pcRam_?)(pcVar17,fVar21 / fVar18);
        pGVar19 = *(Graphic **)&(this_00->_0).this_arg.attrs;
        if ((pGVar19 != (Graphic *)0x0) && (pRVar20 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar19,(MethodInfo *)0x0), pRVar20 != (RectTransform *)0x0)) {
          iVar1 = *(int *)&this_00->interfaceOffsets;
          VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta(pRVar20,(MethodInfo *)0x0);
          fVar21 = VStackX_8.y;
          VVar22 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize(pRVar20,(MethodInfo *)0x0);
          VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax(pRVar20,(MethodInfo *)0x0);
          VVar23 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin(pRVar20,(MethodInfo *)0x0);
          fStackX_18 = VVar23.x;
          fStackX_20 = VVar22.x;
          value_01.x = (float)iVar1 * fVar18 - (VStackX_8.x - fStackX_18) * fStackX_20;
          value_01.y = fVar21;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar20,value_01,(MethodInfo *)0x0);
          pGVar19 = *(Graphic **)&(this_00->_0).this_arg.attrs;
          if ((pGVar19 != (Graphic *)0x0) && (pRVar20 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar19,(MethodInfo *)0x0), pRVar20 != (RectTransform *)0x0)) {
            iVar1 = *(int *)&this_00->interfaceOffsets;
            VStack_5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta(pRVar20,(MethodInfo *)0x0);
            VVar22 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize(pRVar20,(MethodInfo *)0x0);
            VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax(pRVar20,(MethodInfo *)0x0);
            VVar23 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin(pRVar20,(MethodInfo *)0x0);
            fStackX_1c = VVar23.y;
            fStackX_24 = VVar22.y;
            value.y = (float)iVar1 * fVar18 - (VStackX_8.y - fStackX_1c) * fStackX_24;
            value.x = VStack_5.x;
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar20,value,(MethodInfo *)0x0);
            pOVar33 = (Object *)(this_00->_0).nestedTypes;
            if (pOVar33 != (Object *)0x0) {
              pOVar34 = pOVar33[1].klass;
              if (pOVar34 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(pOVar33,(MethodInfo *)0x0);
                pcVar9 = (code *)swi(3);
                bVar11 = (*pcVar9)();
                return bVar11;
              }
              fVar18 = (this->fields)._currentTime_5__2;
              fVar21 = *(float *)&(this_00->_0).element_class;
              pcVar9 = pcRam_?;
              if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar9 = (code *)swi(3);
                bVar11 = (*pcVar9)();
                return bVar11;
              }
              pcRam_? = pcVar9;
              fVar18 = (float)(*pcRam_?)(pOVar34,fVar18 / fVar21);
              pCVar3 = (Component *)(this_00->_0).implementedInterfaces;
              if ((pCVar3 != (Component *)0x0) && (pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar3,(MethodInfo *)0x0), pTVar4 != (Transform *)0x0)) {
                VStack_7.y = fVar18;
                VStack_7.x = fVar18;
                uStack_8 = CONCAT44(uStack_8._4_4_,0x3f800000);
                if (cRam_? == '\0') {
                  FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar14 = (pTVar4->fields)._._.m_CachedPtr;
                if (pvVar14 != (void *)0x0) {
                  pcVar9 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                    uVar10 = func_?(&UNK_?);
                    FUN_?(uVar10,0);
                    pcVar9 = (code *)swi(3);
                    bVar11 = (*pcVar9)();
                    return bVar11;
                  }
                  pcRam_? = pcVar9;
                  (*pcRam_?)(pvVar14,&VStack_7);
                  lVar25 = lRam_?;
                  VStackX_8 = (Vector2)((ulonglong)VStackX_8 & 0xffffffff00000000);
                  VVar22 = VStackX_8;
                  if ((*(int *)(lRam_? + 0x28) < 0) && ((*(longlong *)(lRam_? + 0x60) == 0 || (VVar22 = VVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
                    VVar22 = (Vector2)FUN_?(lRam_?);
                    FUN_?((Object *)((longlong)VVar22 + 0x10),&VStackX_8,(longlong)*(int *)(lVar25 + 0xf8) + -0x10);
                    if (iRam_? != 0) {
                      uVar26 = (uint)((ulonglong)((longlong)VVar22 + 0x10U) >> 0xc);
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
                  (this->fields).__2__current = (Object *)VVar22;
                  func_?(&(this->fields).__2__current);
                  (this->fields).__1__state = 2;
                  return 1;
                }
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
                pcVar9 = (code *)swi(3);
                bVar11 = (*pcVar9)();
                return bVar11;
              }
            }
          }
        }
      }
      FUN_?();
      pcVar9 = (code *)swi(3);
      bVar11 = (*pcVar9)();
      return bVar11;
    }
    pIVar16 = (this_00->_0).castClass;
    if (pIVar16 == (Il2CppClass *)0x0) goto code_?;
    pcVar17 = pIVar16->name;
    if (pcVar17 == (char *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar16,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      bVar11 = (*pcVar9)();
      return bVar11;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      bVar11 = (*pcVar9)();
      return bVar11;
    }
    pcRam_? = pcVar9;
    fVar18 = (float)(*pcRam_?)(pcVar17);
    pGVar19 = *(Graphic **)&(this_00->_0).this_arg.attrs;
    if ((pGVar19 == (Graphic *)0x0) || (pRVar20 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar19,(MethodInfo *)0x0), pRVar20 == (RectTransform *)0x0)) goto code_?;
    iVar1 = *(int *)&this_00->interfaceOffsets;
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta(pRVar20,(MethodInfo *)0x0);
    fVar21 = VStackX_8.y;
    VVar22 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize(pRVar20,(MethodInfo *)0x0);
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax(pRVar20,(MethodInfo *)0x0);
    VVar23 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin(pRVar20,(MethodInfo *)0x0);
    fStackX_18 = VVar23.x;
    fStackX_20 = VVar22.x;
    value_02.x = (float)iVar1 * fVar18 - (VStackX_8.x - fStackX_18) * fStackX_20;
    value_02.y = fVar21;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar20,value_02,(MethodInfo *)0x0);
    pGVar19 = *(Graphic **)&(this_00->_0).this_arg.attrs;
    if ((pGVar19 == (Graphic *)0x0) || (pRVar20 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform(pGVar19,(MethodInfo *)0x0), pRVar20 == (RectTransform *)0x0)) goto code_?;
    iVar1 = *(int *)&this_00->interfaceOffsets;
    VStack_5 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta(pRVar20,(MethodInfo *)0x0);
    VVar22 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize(pRVar20,(MethodInfo *)0x0);
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax(pRVar20,(MethodInfo *)0x0);
    VVar23 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin(pRVar20,(MethodInfo *)0x0);
    fStackX_1c = VVar23.y;
    fStackX_24 = VVar22.y;
    value_00.y = (float)iVar1 * fVar18 - (VStackX_8.y - fStackX_1c) * fStackX_24;
    value_00.x = VStack_5.x;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta(pRVar20,value_00,(MethodInfo *)0x0);
    pEVar31 = (this_00->_0).events;
    if ((pEVar31 == (EventInfo *)0x0) || (pGVar32 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pEVar31,(MethodInfo *)0x0), pGVar32 == (GameObject *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar32,0,(MethodInfo *)0x0);
    (this->fields)._currentTime_5__2 = 0.0;
  }
  else {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      if (this_00 == (IEnumerator__Class *)0x0) goto code_?;
      goto code_?;
    }
    if (iVar1 == 2) {
      (this->fields).__1__state = -1;
      if (this_00 == (IEnumerator__Class *)0x0) goto code_?;
      goto code_?;
    }
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        (this->fields).__1__state = -1;
        return 0;
      }
      return 0;
    }
    (this->fields).__1__state = -1;
    if (this_00 == (IEnumerator__Class *)0x0) goto code_?;
  }
  if (1.0 <= (this->fields)._currentTime_5__2 / *(float *)&(this_00->_0).fields) {
    pCVar3 = *(Component **)&(this_00->_0).this_arg.attrs;
    if (pCVar3 != (Component *)0x0) {
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar3,(MethodInfo *)0x0);
      pQVar35 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler((Quaternion *)&VStack_12,0.0,90.0,0.0,in_stack_36);
      if (pTVar4 != (Transform *)0x0) {
        VStack_12.x = pQVar35->x;
        VStack_12.y = pQVar35->y;
        uStack_13._0_4_ = pQVar35->z;
        uStack_13._4_4_ = pQVar35->w;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation(pTVar4,(Quaternion *)&VStack_12,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        routine = (IEnumerator *)FUN_?(TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30);
        *(undefined4 *)&routine[1].klass = 0;
        routine[2].klass = this_00;
        func_?(routine + 2);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0);
        VStackX_8 = (Vector2)((ulonglong)VStackX_8 & 0xffffffff00000000);
        pOVar33 = (Object *)FUN_?(lRam_?,&VStackX_8);
        (this->fields).__2__current = pOVar33;
        func_?(&(this->fields).__2__current);
        (this->fields).__1__state = 4;
        return 1;
      }
      FUN_?();
      pcVar9 = (code *)swi(3);
      bVar11 = (*pcVar9)();
      return bVar11;
    }
  }
  else {
    fVar18 = (this->fields)._currentTime_5__2;
    fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar21 = fVar21 + fVar18;
    (this->fields)._currentTime_5__2 = fVar21;
    pIVar16 = (this_00->_0).klass;
    if (pIVar16 != (Il2CppClass *)0x0) {
      pcVar17 = pIVar16->name;
      if (pcVar17 == (char *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar16,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        bVar11 = (*pcVar9)();
        return bVar11;
      }
      fVar18 = *(float *)&(this_00->_0).fields;
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar9 = (code *)swi(3);
        bVar11 = (*pcVar9)();
        return bVar11;
      }
      pcRam_? = pcVar9;
      fVar18 = (float)(*pcRam_?)(pcVar17,fVar21 / fVar18);
      pCVar3 = *(Component **)&(this_00->_0).this_arg.attrs;
      if (pCVar3 != (Component *)0x0) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar3,(MethodInfo *)0x0);
        VStack_7 = (Vector2)((ulonglong)(uint)(fVar18 * 90.0 * 0.017453292) << 0x20);
        uStack_8 = uStack_8 & 0xffffffff00000000;
        VStack_5.x = 0.0;
        VStack_5.y = 0.0;
        uStack_6._0_4_ = 0.0;
        uStack_6._4_4_ = 0.0;
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          bVar11 = (*pcVar9)();
          return bVar11;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(&VStack_7);
        if (pTVar4 == (Transform *)0x0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          bVar11 = (*pcVar9)();
          return bVar11;
        }
        VStack_12 = VStack_5;
        uStack_13._0_4_ = (float)(undefined4)uStack_6;
        uStack_13._4_4_ = (float)uStack_6._4_4_;
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar14 = (pTVar4->fields)._._.m_CachedPtr;
        if (pvVar14 != (void *)0x0) {
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar9 = (code *)swi(3);
            bVar11 = (*pcVar9)();
            return bVar11;
          }
          pcRam_? = pcVar9;
          (*pcRam_?)(pvVar14,(Quaternion *)&VStack_12);
          lVar25 = lRam_?;
          VStackX_8 = (Vector2)((ulonglong)VStackX_8 & 0xffffffff00000000);
          VVar22 = VStackX_8;
          if ((*(int *)(lRam_? + 0x28) < 0) && ((*(longlong *)(lRam_? + 0x60) == 0 || (VVar22 = VVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
            VVar22 = (Vector2)FUN_?(lRam_?);
            FUN_?((Object *)((longlong)VVar22 + 0x10),&VStackX_8,(longlong)*(int *)(lVar25 + 0xf8) + -0x10);
            if (iRam_? != 0) {
              uVar26 = (uint)((ulonglong)((longlong)VVar22 + 0x10U) >> 0xc);
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
          (this->fields).__2__current = (Object *)VVar22;
          func_?(&(this->fields).__2__current);
          (this->fields).__1__state = 3;
          return 1;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        bVar11 = (*pcVar9)();
        return bVar11;
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  bVar11 = (*pcVar9)();
  return bVar11;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeNextBadge>d__29::LevelRewardAnimation_DisplayAndFadeNextBadge_d_29_System_Collections_IEnumerator_Reset(LevelRewardAnimation_DisplayAndFadeNextBadge_d_29 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor(this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&MethodInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29__System_Collections_IEnumerator_Reset__);
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

