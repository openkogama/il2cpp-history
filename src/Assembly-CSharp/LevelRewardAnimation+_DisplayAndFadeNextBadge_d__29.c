
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadeNextBadge>d__29::
     LevelRewardAnimation_DisplayAndFadeNextBadge_d_29_MoveNext
               (LevelRewardAnimation_DisplayAndFadeNextBadge_d_29 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_LEVEL_UP_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  iVar2 = (this->fields).__1__state;
  VVar3.x = 0.0;
  VVar3.y = 0.0;
  this_00 = (IEnumerator__Class *)(this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    if ((this_00 == (IEnumerator__Class *)0x0) ||
       (pCVar4 = *(Component **)&(this_00->_0).this_arg.attrs, pCVar4 == (Component *)0x0))
    goto code_?;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar4,(MethodInfo *)0x0);
    VStack_6 = (Vector2)((ulonglong)_UNK_? << 0x20);
    uStack_7 = uStack_7 & 0xffffffff00000000;
    VStack_8.x = 0.0;
    VStack_8.y = 0.0;
    uStack_9 = 0;
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      bVar12 = (*pcVar10)();
      return bVar12;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(&VStack_6);
    if (pTVar5 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar10 = (code *)swi(3);
      bVar12 = (*pcVar10)();
      return bVar12;
    }
    VStack_13 = VStack_8;
    uStack_14 = uStack_9;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar15 = (pTVar5->fields)._._.m_CachedPtr;
    if (pvVar15 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      bVar12 = (*pcVar10)();
      return bVar12;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      bVar12 = (*pcVar10)();
      return bVar12;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(pvVar15,(Quaternion *)&VStack_13);
    pBVar16 = *(Behaviour **)&(this_00->_0).this_arg.attrs;
    if (pBVar16 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar16,1,(MethodInfo *)0x0);
    pBVar16 = (Behaviour *)(this_00->_0).byval_arg.data.typeHandle;
    if (pBVar16 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar16,0,(MethodInfo *)0x0);
    pIVar17 = (this_00->_0).castClass;
    if (pIVar17 == (Il2CppClass *)0x0) goto code_?;
    pcVar18 = pIVar17->name;
    if (pcVar18 == (char *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar17,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      bVar12 = (*pcVar10)();
      return bVar12;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      bVar12 = (*pcVar10)();
      return bVar12;
    }
    pcRam_? = pcVar10;
    fVar19 = (float)(*pcRam_?)(pcVar18,0);
    pGVar20 = *(Graphic **)&(this_00->_0).this_arg.attrs;
    if ((pGVar20 == (Graphic *)0x0) ||
       (pRVar21 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            (pGVar20,(MethodInfo *)0x0), pRVar21 == (RectTransform *)0x0))
    goto code_?;
    iVar2 = *(int *)&this_00->interfaceOffsets;
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                          (pRVar21,(MethodInfo *)0x0);
    fVar22 = VStackX_8.y;
    VVar23 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize
                       (pRVar21,(MethodInfo *)0x0);
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                          (pRVar21,(MethodInfo *)0x0);
    VVar24 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                       (pRVar21,(MethodInfo *)0x0);
    fStackX_18 = VVar24.x;
    fStackX_20 = VVar23.x;
    VVar23.x = (float)iVar2 * fVar19 - (VStackX_8.x - fStackX_18) * fStackX_20;
    VVar23.y = fVar22;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (pRVar21,VVar23,(MethodInfo *)0x0);
    pGVar20 = *(Graphic **)&(this_00->_0).this_arg.attrs;
    if ((pGVar20 == (Graphic *)0x0) ||
       (pRVar21 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            (pGVar20,(MethodInfo *)0x0), pRVar21 == (RectTransform *)0x0))
    goto code_?;
    iVar2 = *(int *)&this_00->interfaceOffsets;
    VStack_6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                          (pRVar21,(MethodInfo *)0x0);
    VVar23 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize
                       (pRVar21,(MethodInfo *)0x0);
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                          (pRVar21,(MethodInfo *)0x0);
    VVar24 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                       (pRVar21,(MethodInfo *)0x0);
    fStackX_1c = VVar24.y;
    fStackX_24 = VVar23.y;
    VVar24.y = (float)iVar2 * fVar19 - (VStackX_8.y - fStackX_1c) * fStackX_24;
    VVar24.x = VStack_6.x;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (pRVar21,VVar24,(MethodInfo *)0x0);
    (this->fields)._currentTime_5__2 = 0.0;
code_?:
    if ((this->fields)._currentTime_5__2 / *(float *)&(this_00->_0).fields < fVar1) {
      fVar1 = (this->fields)._currentTime_5__2;
      fVar19 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar19 = fVar19 + fVar1;
      (this->fields)._currentTime_5__2 = fVar19;
      obj = (this_00->_0).interopData;
      if (obj != (Il2CppInteropData *)0x0) {
        pPVar25 = obj->pinvokeMarshalFromNativeFunction;
        if (pPVar25 == (PInvokeMarshalFromNativeFunc)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          bVar12 = (*pcVar10)();
          return bVar12;
        }
        fVar1 = *(float *)&(this_00->_0).fields;
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar10 = (code *)swi(3);
          bVar12 = (*pcVar10)();
          return bVar12;
        }
        pcRam_? = pcVar10;
        fVar1 = (float)(*pcRam_?)(pPVar25,fVar19 / fVar1);
        pCVar4 = *(Component **)&(this_00->_0).this_arg.attrs;
        fVar1 = fVar1 * _UNK_? - _UNK_?;
        if (pCVar4 != (Component *)0x0) {
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (pCVar4,(MethodInfo *)0x0);
          VStack_6 = (Vector2)((ulonglong)(uint)(fVar1 * _UNK_?) << 0x20);
          uStack_7 = uStack_7 & 0xffffffff00000000;
          VStack_8.x = 0.0;
          VStack_8.y = 0.0;
          uStack_9._0_4_ = 0.0;
          uStack_9._4_4_ = 0.0;
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar10 = (code *)swi(3);
            bVar12 = (*pcVar10)();
            return bVar12;
          }
          pcRam_? = pcVar10;
          (*pcRam_?)(&VStack_6);
          if (pTVar5 == (Transform *)0x0) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            bVar12 = (*pcVar10)();
            return bVar12;
          }
          VStack_13 = VStack_8;
          uStack_14._0_4_ = (float)(undefined4)uStack_9;
          uStack_14._4_4_ = (float)uStack_9._4_4_;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar15 = (pTVar5->fields)._._.m_CachedPtr;
          if (pvVar15 != (void *)0x0) {
            pcVar10 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
              uVar11 = func_?(&UNK_?);
              FUN_?(uVar11,0);
              pcVar10 = (code *)swi(3);
              bVar12 = (*pcVar10)();
              return bVar12;
            }
            pcRam_? = pcVar10;
            (*pcRam_?)(pvVar15,(Quaternion *)&VStack_13);
            lVar26 = lRam_?;
            VStackX_8 = (Vector2)((ulonglong)VStackX_8 & 0xffffffff00000000);
            VVar23 = VStackX_8;
            if ((*(int *)(lRam_? + 0x28) < 0) &&
               ((*(longlong *)(lRam_? + 0x60) == 0 ||
                (VVar23 = VVar3, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
              VVar23 = (Vector2)FUN_?(lRam_?);
              FUN_?((Object *)((longlong)VVar23 + 0x10),&VStackX_8,
                            (longlong)*(int *)(lVar26 + 0xf8) + -0x10);
              if (iRam_? != 0) {
                uVar27 = (uint)((ulonglong)((longlong)VVar23 + 0x10U) >> 0xc);
                uVar28 = (ulonglong)((uVar27 & 0x1fffff) >> 6);
                do {
                  uVar29 = *(ulonglong *)(uVar28 * 8 + 0xADDR);
                  puVar30 = (ulonglong *)(uVar28 * 8 + 0xADDR);
                  LOCK();
                  bVar31 = uVar29 == *puVar30;
                  if (bVar31) {
                    *puVar30 = uVar29 | 1L << (uVar27 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar31);
              }
            }
            (this->fields).__2__current = (Object *)VVar23;
            func_?(&(this->fields).__2__current);
            (this->fields).__1__state = 1;
            return 1;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          bVar12 = (*pcVar10)();
          return bVar12;
        }
      }
      goto code_?;
    }
    pBVar16 = (Behaviour *)(this_00->_0).implementedInterfaces;
    if (pBVar16 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar16,1,(MethodInfo *)0x0);
    pEVar32 = (this_00->_0).events;
    if ((pEVar32 == (EventInfo *)0x0) ||
       (pGVar33 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pEVar32,(MethodInfo *)0x0), pGVar33 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar33,1,(MethodInfo *)0x0);
    pEVar32 = (this_00->_0).events;
    TM::TM__(StringLiteral_LEVEL_UP_,(MethodInfo *)0x0);
    if (pEVar32 == (EventInfo *)0x0) goto code_?;
    (**(code **)(pEVar32->name + 0x5e8))(pEVar32);
    pCVar4 = *(Component **)&(this_00->_0).this_arg.attrs;
    if (pCVar4 == (Component *)0x0) goto code_?;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar4,(MethodInfo *)0x0);
    VStack_6.x = 0.0;
    VStack_6.y = 0.0;
    uStack_7 = uStack_7 & 0xffffffff00000000;
    VStack_8.x = 0.0;
    VStack_8.y = 0.0;
    uStack_9 = 0;
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      bVar12 = (*pcVar10)();
      return bVar12;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)(&VStack_6);
    if (pTVar5 == (Transform *)0x0) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      bVar12 = (*pcVar10)();
      return bVar12;
    }
    VStack_13 = VStack_8;
    uStack_14 = uStack_9;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pTVar5->fields)._._.m_CachedPtr == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      bVar12 = (*pcVar10)();
      return bVar12;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      bVar12 = (*pcVar10)();
      return bVar12;
    }
    pcRam_? = pcVar10;
    (*pcRam_?)();
    (this->fields)._currentTime_5__2 = 0.0;
code_?:
    if ((this->fields)._currentTime_5__2 / *(float *)&(this_00->_0).element_class < fVar1) {
      fVar19 = (this->fields)._currentTime_5__2;
      fVar22 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar22 = fVar22 + fVar19;
      (this->fields)._currentTime_5__2 = fVar22;
      pIVar17 = (this_00->_0).castClass;
      if (pIVar17 != (Il2CppClass *)0x0) {
        pcVar18 = pIVar17->name;
        if (pcVar18 == (char *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar17,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          bVar12 = (*pcVar10)();
          return bVar12;
        }
        fVar19 = *(float *)&(this_00->_0).element_class;
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar10 = (code *)swi(3);
          bVar12 = (*pcVar10)();
          return bVar12;
        }
        pcRam_? = pcVar10;
        fVar19 = (float)(*pcRam_?)(pcVar18,fVar22 / fVar19);
        pGVar20 = *(Graphic **)&(this_00->_0).this_arg.attrs;
        if ((pGVar20 != (Graphic *)0x0) &&
           (pRVar21 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar20,(MethodInfo *)0x0), pRVar21 != (RectTransform *)0x0)) {
          iVar2 = *(int *)&this_00->interfaceOffsets;
          VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                      RectTransform_get_sizeDelta(pRVar21,(MethodInfo *)0x0);
          fVar22 = VStackX_8.y;
          VVar23 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                   RectTransform_GetParentSize(pRVar21,(MethodInfo *)0x0);
          VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                      RectTransform_get_anchorMax(pRVar21,(MethodInfo *)0x0);
          VVar24 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                   RectTransform_get_anchorMin(pRVar21,(MethodInfo *)0x0);
          fStackX_18 = VVar24.x;
          fStackX_20 = VVar23.x;
          value_01.x = (float)iVar2 * fVar19 - (VStackX_8.x - fStackX_18) * fStackX_20;
          value_01.y = fVar22;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar21,value_01,(MethodInfo *)0x0);
          pGVar20 = *(Graphic **)&(this_00->_0).this_arg.attrs;
          if ((pGVar20 != (Graphic *)0x0) &&
             (pRVar21 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                  (pGVar20,(MethodInfo *)0x0), pRVar21 != (RectTransform *)0x0)) {
            iVar2 = *(int *)&this_00->interfaceOffsets;
            VStack_6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_get_sizeDelta(pRVar21,(MethodInfo *)0x0);
            VVar23 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                     RectTransform_GetParentSize(pRVar21,(MethodInfo *)0x0);
            VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_get_anchorMax(pRVar21,(MethodInfo *)0x0);
            VVar24 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                     RectTransform_get_anchorMin(pRVar21,(MethodInfo *)0x0);
            fStackX_1c = VVar24.y;
            fStackX_24 = VVar23.y;
            value.y = (float)iVar2 * fVar19 - (VStackX_8.y - fStackX_1c) * fStackX_24;
            value.x = VStack_6.x;
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                      (pRVar21,value,(MethodInfo *)0x0);
            pOVar34 = (Object *)(this_00->_0).nestedTypes;
            if (pOVar34 != (Object *)0x0) {
              pOVar35 = pOVar34[1].klass;
              if (pOVar35 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(pOVar34,(MethodInfo *)0x0);
                pcVar10 = (code *)swi(3);
                bVar12 = (*pcVar10)();
                return bVar12;
              }
              fVar19 = (this->fields)._currentTime_5__2;
              fVar22 = *(float *)&(this_00->_0).element_class;
              pcVar10 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                uVar11 = func_?(&UNK_?);
                FUN_?(uVar11,0);
                pcVar10 = (code *)swi(3);
                bVar12 = (*pcVar10)();
                return bVar12;
              }
              pcRam_? = pcVar10;
              fVar19 = (float)(*pcRam_?)(pOVar35,fVar19 / fVar22);
              pCVar4 = (Component *)(this_00->_0).implementedInterfaces;
              if ((pCVar4 != (Component *)0x0) &&
                 (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform(pCVar4,(MethodInfo *)0x0),
                 pTVar5 != (Transform *)0x0)) {
                VStack_8.y = fVar19;
                VStack_8.x = fVar19;
                uStack_9 = CONCAT44(uStack_9._4_4_,fVar1);
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar15 = (pTVar5->fields)._._.m_CachedPtr;
                if (pvVar15 != (void *)0x0) {
                  pcVar10 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                    uVar11 = func_?(&UNK_?);
                    FUN_?(uVar11,0);
                    pcVar10 = (code *)swi(3);
                    bVar12 = (*pcVar10)();
                    return bVar12;
                  }
                  pcRam_? = pcVar10;
                  (*pcRam_?)(pvVar15,&VStack_8);
                  lVar26 = lRam_?;
                  VStackX_8 = (Vector2)((ulonglong)VStackX_8 & 0xffffffff00000000);
                  VVar23 = VStackX_8;
                  if ((*(int *)(lRam_? + 0x28) < 0) &&
                     ((*(longlong *)(lRam_? + 0x60) == 0 ||
                      (VVar23 = VVar3, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
                    VVar23 = (Vector2)FUN_?(lRam_?);
                    FUN_?((Object *)((longlong)VVar23 + 0x10),&VStackX_8,
                                  (longlong)*(int *)(lVar26 + 0xf8) + -0x10);
                    if (iRam_? != 0) {
                      uVar27 = (uint)((ulonglong)((longlong)VVar23 + 0x10U) >> 0xc);
                      uVar28 = (ulonglong)((uVar27 & 0x1fffff) >> 6);
                      do {
                        uVar29 = *(ulonglong *)(uVar28 * 8 + 0xADDR);
                        puVar30 = (ulonglong *)(uVar28 * 8 + 0xADDR);
                        LOCK();
                        bVar31 = uVar29 == *puVar30;
                        if (bVar31) {
                          *puVar30 = uVar29 | 1L << (uVar27 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar31);
                    }
                  }
                  (this->fields).__2__current = (Object *)VVar23;
                  func_?(&(this->fields).__2__current);
                  (this->fields).__1__state = 2;
                  return 1;
                }
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
                pcVar10 = (code *)swi(3);
                bVar12 = (*pcVar10)();
                return bVar12;
              }
            }
          }
        }
      }
      FUN_?();
      pcVar10 = (code *)swi(3);
      bVar12 = (*pcVar10)();
      return bVar12;
    }
    pIVar17 = (this_00->_0).castClass;
    if (pIVar17 == (Il2CppClass *)0x0) goto code_?;
    pcVar18 = pIVar17->name;
    if (pcVar18 == (char *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar17,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      bVar12 = (*pcVar10)();
      return bVar12;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar10 = (code *)swi(3);
      bVar12 = (*pcVar10)();
      return bVar12;
    }
    pcRam_? = pcVar10;
    fVar19 = (float)(*pcRam_?)(pcVar18);
    pGVar20 = *(Graphic **)&(this_00->_0).this_arg.attrs;
    if ((pGVar20 == (Graphic *)0x0) ||
       (pRVar21 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            (pGVar20,(MethodInfo *)0x0), pRVar21 == (RectTransform *)0x0))
    goto code_?;
    iVar2 = *(int *)&this_00->interfaceOffsets;
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                          (pRVar21,(MethodInfo *)0x0);
    fVar22 = VStackX_8.y;
    VVar23 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize
                       (pRVar21,(MethodInfo *)0x0);
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                          (pRVar21,(MethodInfo *)0x0);
    VVar24 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                       (pRVar21,(MethodInfo *)0x0);
    fStackX_18 = VVar24.x;
    fStackX_20 = VVar23.x;
    value_02.x = (float)iVar2 * fVar19 - (VStackX_8.x - fStackX_18) * fStackX_20;
    value_02.y = fVar22;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (pRVar21,value_02,(MethodInfo *)0x0);
    pGVar20 = *(Graphic **)&(this_00->_0).this_arg.attrs;
    if ((pGVar20 == (Graphic *)0x0) ||
       (pRVar21 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                            (pGVar20,(MethodInfo *)0x0), pRVar21 == (RectTransform *)0x0))
    goto code_?;
    iVar2 = *(int *)&this_00->interfaceOffsets;
    VStack_6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                          (pRVar21,(MethodInfo *)0x0);
    VVar23 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetParentSize
                       (pRVar21,(MethodInfo *)0x0);
    VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMax
                          (pRVar21,(MethodInfo *)0x0);
    VVar24 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchorMin
                       (pRVar21,(MethodInfo *)0x0);
    fStackX_1c = VVar24.y;
    fStackX_24 = VVar23.y;
    value_00.y = (float)iVar2 * fVar19 - (VStackX_8.y - fStackX_1c) * fStackX_24;
    value_00.x = VStack_6.x;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (pRVar21,value_00,(MethodInfo *)0x0);
    pEVar32 = (this_00->_0).events;
    if ((pEVar32 == (EventInfo *)0x0) ||
       (pGVar33 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pEVar32,(MethodInfo *)0x0), pGVar33 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar33,0,(MethodInfo *)0x0);
    (this->fields)._currentTime_5__2 = 0.0;
  }
  else {
    if (iVar2 == 1) {
      (this->fields).__1__state = -1;
      if (this_00 == (IEnumerator__Class *)0x0) goto code_?;
      goto code_?;
    }
    if (iVar2 == 2) {
      (this->fields).__1__state = -1;
      if (this_00 == (IEnumerator__Class *)0x0) goto code_?;
      goto code_?;
    }
    if (iVar2 != 3) {
      if (iVar2 == 4) {
        (this->fields).__1__state = -1;
        return 0;
      }
      return 0;
    }
    (this->fields).__1__state = -1;
    if (this_00 == (IEnumerator__Class *)0x0) goto code_?;
  }
  if (fVar1 <= (this->fields)._currentTime_5__2 / *(float *)&(this_00->_0).fields) {
    pCVar4 = *(Component **)&(this_00->_0).this_arg.attrs;
    if (pCVar4 != (Component *)0x0) {
      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (pCVar4,(MethodInfo *)0x0);
      pQVar36 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler
                          ((Quaternion *)&VStack_13,0.0,_UNK_?,0.0,in_stack_37
                          );
      if (pTVar5 != (Transform *)0x0) {
        VStack_13.x = pQVar36->x;
        VStack_13.y = pQVar36->y;
        uStack_14._0_4_ = pQVar36->z;
        uStack_14._4_4_ = pQVar36->w;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar5,(Quaternion *)&VStack_13,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        routine = (IEnumerator *)
                  FUN_?(TypeInfo__LevelRewardAnimation___DisplayAndFadeGoldIcon_d__30);
        *(undefined4 *)&routine[1].klass = 0;
        routine[2].klass = this_00;
        func_?(routine + 2);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                  ((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0);
        VStackX_8 = (Vector2)((ulonglong)VStackX_8 & 0xffffffff00000000);
        pOVar34 = (Object *)FUN_?(lRam_?,&VStackX_8);
        (this->fields).__2__current = pOVar34;
        func_?(&(this->fields).__2__current);
        (this->fields).__1__state = 4;
        return 1;
      }
      FUN_?();
      pcVar10 = (code *)swi(3);
      bVar12 = (*pcVar10)();
      return bVar12;
    }
  }
  else {
    fVar1 = (this->fields)._currentTime_5__2;
    fVar19 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar19 = fVar19 + fVar1;
    (this->fields)._currentTime_5__2 = fVar19;
    pIVar17 = (this_00->_0).klass;
    if (pIVar17 != (Il2CppClass *)0x0) {
      pcVar18 = pIVar17->name;
      if (pcVar18 == (char *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar17,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        bVar12 = (*pcVar10)();
        return bVar12;
      }
      fVar1 = *(float *)&(this_00->_0).fields;
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        bVar12 = (*pcVar10)();
        return bVar12;
      }
      pcRam_? = pcVar10;
      fVar1 = (float)(*pcRam_?)(pcVar18,fVar19 / fVar1);
      pCVar4 = *(Component **)&(this_00->_0).this_arg.attrs;
      fVar1 = fVar1 * _UNK_?;
      if (pCVar4 != (Component *)0x0) {
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar4,(MethodInfo *)0x0);
        VStack_8 = (Vector2)((ulonglong)(uint)(fVar1 * _UNK_?) << 0x20);
        uStack_9 = uStack_9 & 0xffffffff00000000;
        VStack_6.x = 0.0;
        VStack_6.y = 0.0;
        uStack_7._0_4_ = 0.0;
        uStack_7._4_4_ = 0.0;
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar10 = (code *)swi(3);
          bVar12 = (*pcVar10)();
          return bVar12;
        }
        pcRam_? = pcVar10;
        (*pcRam_?)(&VStack_8);
        if (pTVar5 == (Transform *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          bVar12 = (*pcVar10)();
          return bVar12;
        }
        VStack_13 = VStack_6;
        uStack_14._0_4_ = (float)(undefined4)uStack_7;
        uStack_14._4_4_ = (float)uStack_7._4_4_;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar15 = (pTVar5->fields)._._.m_CachedPtr;
        if (pvVar15 != (void *)0x0) {
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar10 = (code *)swi(3);
            bVar12 = (*pcVar10)();
            return bVar12;
          }
          pcRam_? = pcVar10;
          (*pcRam_?)(pvVar15,(Quaternion *)&VStack_13);
          lVar26 = lRam_?;
          VStackX_8 = (Vector2)((ulonglong)VStackX_8 & 0xffffffff00000000);
          VVar23 = VStackX_8;
          if ((*(int *)(lRam_? + 0x28) < 0) &&
             ((*(longlong *)(lRam_? + 0x60) == 0 ||
              (VVar23 = VVar3, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
            VVar23 = (Vector2)FUN_?(lRam_?);
            FUN_?((Object *)((longlong)VVar23 + 0x10),&VStackX_8,
                          (longlong)*(int *)(lVar26 + 0xf8) + -0x10);
            if (iRam_? != 0) {
              uVar27 = (uint)((ulonglong)((longlong)VVar23 + 0x10U) >> 0xc);
              uVar28 = (ulonglong)((uVar27 & 0x1fffff) >> 6);
              do {
                uVar29 = *(ulonglong *)(uVar28 * 8 + 0xADDR);
                puVar30 = (ulonglong *)(uVar28 * 8 + 0xADDR);
                LOCK();
                bVar31 = uVar29 == *puVar30;
                if (bVar31) {
                  *puVar30 = uVar29 | 1L << (uVar27 & 0x3f);
                }
                UNLOCK();
              } while (!bVar31);
            }
          }
          (this->fields).__2__current = (Object *)VVar23;
          func_?(&(this->fields).__2__current);
          (this->fields).__1__state = 3;
          return 1;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        bVar12 = (*pcVar10)();
        return bVar12;
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  bVar12 = (*pcVar10)();
  return bVar12;
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
  uVar1 = func_?(&
                              MethodInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

