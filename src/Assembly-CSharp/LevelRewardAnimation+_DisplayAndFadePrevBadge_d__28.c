
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadePrevBadge>d__28::
     LevelRewardAnimation_DisplayAndFadePrevBadge_d_28_MoveNext
               (LevelRewardAnimation_DisplayAndFadePrevBadge_d_28 *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  this_00 = (IEnumerator__Class *)(this->fields).__4__this;
  iVar2 = (this->fields).__1__state;
  VVar3.x = 0.0;
  VVar3.y = 0.0;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    if ((this_00 == (IEnumerator__Class *)0x0) ||
       (pGVar4 = (Graphic *)(this_00->_0).byval_arg.data.typeHandle, pGVar4 == (Graphic *)0x0))
    goto code_?;
    pRVar5 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        (pGVar4,(MethodInfo *)0x0);
    VVar6.x = (float)*(int *)&this_00->interfaceOffsets;
    if (pRVar5 == (RectTransform *)0x0) goto code_?;
    VVar6.y = (float)*(int *)&this_00->interfaceOffsets;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (pRVar5,VVar6,(MethodInfo *)0x0);
    pCVar7 = (Component *)(this_00->_0).byval_arg.data.typeHandle;
    if (pCVar7 == (Component *)0x0) goto code_?;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        (pCVar7,(MethodInfo *)0x0);
    VStack_9.x = 0.0;
    VStack_9.y = 0.0;
    uStack_10 = 0;
    uStack_11 = 0;
    uStack_12 = 0;
    pcVar13 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar13 = (code *)swi(3);
      bVar15 = (*pcVar13)();
      return bVar15;
    }
    pcRam_? = pcVar13;
    (*pcRam_?)(&VStack_9);
    if (pTVar8 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar13 = (code *)swi(3);
      bVar15 = (*pcVar13)();
      return bVar15;
    }
    uStack_16 = uStack_11;
    uStack_17 = uStack_12;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar18 = (pTVar8->fields)._._.m_CachedPtr;
    if (pvVar18 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
      pcVar13 = (code *)swi(3);
      bVar15 = (*pcVar13)();
      return bVar15;
    }
    pcVar13 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar13 = (code *)swi(3);
      bVar15 = (*pcVar13)();
      return bVar15;
    }
    pcRam_? = pcVar13;
    (*pcRam_?)(pvVar18,&uStack_16);
    pBVar19 = (Behaviour *)(this_00->_0).byval_arg.data.typeHandle;
    if (pBVar19 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar19,1,(MethodInfo *)0x0);
    pCVar7 = (Component *)(this_00->_0).implementedInterfaces;
    if ((pCVar7 == (Component *)0x0) ||
       (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar7,(MethodInfo *)0x0), pTVar8 == (Transform *)0x0))
    goto code_?;
    lStack_20 = CONCAT44(fVar1,fVar1);
    fStack_21 = fVar1;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar18 = (pTVar8->fields)._._.m_CachedPtr;
    if (pvVar18 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
      pcVar13 = (code *)swi(3);
      bVar15 = (*pcVar13)();
      return bVar15;
    }
    pcVar13 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar13 = (code *)swi(3);
      bVar15 = (*pcVar13)();
      return bVar15;
    }
    pcRam_? = pcVar13;
    (*pcRam_?)(pvVar18);
    pBVar19 = (Behaviour *)(this_00->_0).implementedInterfaces;
    if (pBVar19 == (Behaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (pBVar19,0,(MethodInfo *)0x0);
    this_01 = (this_00->_0).properties;
    if ((this_01 == (PropertyInfo *)0x0) ||
       (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_01,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar22,0,(MethodInfo *)0x0);
    pCVar7 = (Component *)(this_00->_0).methods;
    if ((pCVar7 == (Component *)0x0) ||
       (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (pCVar7,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar22,0,(MethodInfo *)0x0);
    pIVar23 = (this_00->_0).declaringType;
    if (pIVar23 == (Il2CppClass *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar23,0,(MethodInfo *)0x0);
    this_02 = (this_00->_0).events;
    if ((this_02 == (EventInfo *)0x0) ||
       (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_02,(MethodInfo *)0x0), pGVar22 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar22,0,(MethodInfo *)0x0);
    (this->fields)._currentTime_5__2 = 0.0;
code_?:
    if ((this->fields)._currentTime_5__2 / *(float *)&(this_00->_0).byval_arg.attrs < fVar1) {
      fVar1 = (this->fields)._currentTime_5__2;
      fVar24 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      (this->fields)._currentTime_5__2 = fVar24 + fVar1;
      pIVar25 = (this_00->_0).this_arg.data.type;
      if (pIVar25 != (Il2CppType *)0x0) {
        pOVar26 = pIVar25[1].data.dummy;
        if (pOVar26 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar25,(MethodInfo *)0x0);
          pcVar13 = (code *)swi(3);
          bVar15 = (*pcVar13)();
          return bVar15;
        }
        pcVar13 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar13 = (code *)swi(3);
          bVar15 = (*pcVar13)();
          return bVar15;
        }
        pcRam_? = pcVar13;
        fVar1 = (float)(*pcRam_?)(pOVar26);
        pGVar4 = (Graphic *)(this_00->_0).byval_arg.data.typeHandle;
        if ((pGVar4 != (Graphic *)0x0) &&
           (pRVar5 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                (pGVar4,(MethodInfo *)0x0), pRVar5 != (RectTransform *)0x0)) {
          iVar2 = *(int *)&this_00->interfaceOffsets;
          VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                      RectTransform_get_sizeDelta(pRVar5,(MethodInfo *)0x0);
          fVar24 = VStackX_8.y;
          VVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                   RectTransform_GetParentSize(pRVar5,(MethodInfo *)0x0);
          VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                      RectTransform_get_anchorMax(pRVar5,(MethodInfo *)0x0);
          VVar27 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                   RectTransform_get_anchorMin(pRVar5,(MethodInfo *)0x0);
          fStackX_18 = VVar27.x;
          fStackX_20 = VVar6.x;
          VVar27.x = (float)iVar2 * fVar1 - (VStackX_8.x - fStackX_18) * fStackX_20;
          VVar27.y = fVar24;
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                    (pRVar5,VVar27,(MethodInfo *)0x0);
          pGVar4 = (Graphic *)(this_00->_0).byval_arg.data.typeHandle;
          if ((pGVar4 != (Graphic *)0x0) &&
             (pRVar5 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                                  (pGVar4,(MethodInfo *)0x0), pRVar5 != (RectTransform *)0x0)) {
            iVar2 = *(int *)&this_00->interfaceOffsets;
            VStack_9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_get_sizeDelta(pRVar5,(MethodInfo *)0x0);
            VVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                     RectTransform_GetParentSize(pRVar5,(MethodInfo *)0x0);
            VStackX_8 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                        RectTransform_get_anchorMax(pRVar5,(MethodInfo *)0x0);
            VVar27 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                     RectTransform_get_anchorMin(pRVar5,(MethodInfo *)0x0);
            fStackX_1c = VVar27.y;
            fStackX_24 = VVar6.y;
            value.y = (float)iVar2 * fVar1 - (VStackX_8.y - fStackX_1c) * fStackX_24;
            value.x = VStack_9.x;
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
                      (pRVar5,value,(MethodInfo *)0x0);
            lVar28 = lRam_?;
            VStackX_8 = (Vector2)((ulonglong)VStackX_8 & 0xffffffff00000000);
            VVar6 = VStackX_8;
            if ((*(int *)(lRam_? + 0x28) < 0) &&
               ((*(longlong *)(lRam_? + 0x60) == 0 ||
                (VVar6 = VVar3, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
              VVar6 = (Vector2)FUN_?(lRam_?);
              FUN_?((Object *)((longlong)VVar6 + 0x10),&VStackX_8,
                            (longlong)*(int *)(lVar28 + 0xf8) + -0x10);
              if (iRam_? != 0) {
                uVar29 = (uint)((ulonglong)((longlong)VVar6 + 0x10U) >> 0xc);
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
            (this->fields).__2__current = (Object *)VVar6;
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
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar25,(MethodInfo *)0x0);
      pcVar13 = (code *)swi(3);
      bVar15 = (*pcVar13)();
      return bVar15;
    }
    pcVar13 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar13 = (code *)swi(3);
      bVar15 = (*pcVar13)();
      return bVar15;
    }
    pcRam_? = pcVar13;
    fVar24 = (float)(*pcRam_?)(pOVar26);
    pGVar4 = (Graphic *)(this_00->_0).byval_arg.data.typeHandle;
    if (pGVar4 == (Graphic *)0x0) goto code_?;
    pRVar5 = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                        (pGVar4,(MethodInfo *)0x0);
    value_00.x = (float)*(int *)&this_00->interfaceOffsets * fVar24;
    if (pRVar5 == (RectTransform *)0x0) goto code_?;
    value_00.y = (float)*(int *)&this_00->interfaceOffsets * fVar24;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (pRVar5,value_00,(MethodInfo *)0x0);
    (this->fields)._currentTime_5__2 = 0.0;
  }
  else {
    if (iVar2 == 1) {
      (this->fields).__1__state = -1;
      if (this_00 == (IEnumerator__Class *)0x0) goto code_?;
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
    if (this_00 == (IEnumerator__Class *)0x0) goto code_?;
  }
  if (fVar1 <= (this->fields)._currentTime_5__2 / *(float *)&(this_00->_0).fields) {
    pCVar7 = (Component *)(this_00->_0).byval_arg.data.typeHandle;
    if (pCVar7 != (Component *)0x0) {
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (pCVar7,(MethodInfo *)0x0);
      lStack_20 = (ulonglong)_UNK_? << 0x20;
      fStack_21 = 0.0;
      uStack_11 = 0;
      uStack_12 = 0;
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar13 = (code *)swi(3);
        bVar15 = (*pcVar13)();
        return bVar15;
      }
      pcRam_? = pcVar13;
      (*pcRam_?)(&lStack_20);
      if (pTVar8 == (Transform *)0x0) {
        FUN_?();
        pcVar13 = (code *)swi(3);
        bVar15 = (*pcVar13)();
        return bVar15;
      }
      uStack_16 = uStack_11;
      uStack_17 = uStack_12;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar18 = (pTVar8->fields)._._.m_CachedPtr;
      if (pvVar18 != (void *)0x0) {
        pcVar13 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar13 = (code *)swi(3);
          bVar15 = (*pcVar13)();
          return bVar15;
        }
        pcRam_? = pcVar13;
        (*pcRam_?)(pvVar18,&uStack_16);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        routine = (IEnumerator *)
                  FUN_?(TypeInfo__LevelRewardAnimation___DisplayAndFadeNextBadge_d__29);
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
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                  ((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0);
        lVar28 = lRam_?;
        VStackX_8 = (Vector2)((ulonglong)(uint)VStackX_8.y << 0x20);
        VVar6 = VStackX_8;
        if ((*(int *)(lRam_? + 0x28) < 0) &&
           ((*(longlong *)(lRam_? + 0x60) == 0 ||
            (VVar6 = VVar3, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
          VVar6 = (Vector2)FUN_?(lRam_?);
          FUN_?((Object *)((longlong)VVar6 + 0x10),&VStackX_8,
                        (longlong)*(int *)(lVar28 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar29 = (uint)((ulonglong)((longlong)VVar6 + 0x10U) >> 0xc);
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
        (this->fields).__2__current = (Object *)VVar6;
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
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
      pcVar13 = (code *)swi(3);
      bVar15 = (*pcVar13)();
      return bVar15;
    }
  }
  else {
    fVar1 = (this->fields)._currentTime_5__2;
    fVar24 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (this->fields)._currentTime_5__2 = fVar24 + fVar1;
    pIVar23 = (this_00->_0).klass;
    if (pIVar23 != (Il2CppClass *)0x0) {
      pcVar34 = pIVar23->name;
      if (pcVar34 == (char *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pIVar23,(MethodInfo *)0x0);
        pcVar13 = (code *)swi(3);
        bVar15 = (*pcVar13)();
        return bVar15;
      }
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar13 = (code *)swi(3);
        bVar15 = (*pcVar13)();
        return bVar15;
      }
      pcRam_? = pcVar13;
      fVar1 = (float)(*pcRam_?)(pcVar34);
      pCVar7 = (Component *)(this_00->_0).byval_arg.data.typeHandle;
      fVar1 = fVar1 * _UNK_?;
      if (pCVar7 != (Component *)0x0) {
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (pCVar7,(MethodInfo *)0x0);
        lStack_20 = (ulonglong)(uint)(fVar1 * _UNK_?) << 0x20;
        fStack_21 = 0.0;
        uStack_11 = 0;
        uStack_12 = 0;
        pcVar13 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar13 = (code *)swi(3);
          bVar15 = (*pcVar13)();
          return bVar15;
        }
        pcRam_? = pcVar13;
        (*pcRam_?)(&lStack_20);
        if (pTVar8 == (Transform *)0x0) {
          FUN_?();
          pcVar13 = (code *)swi(3);
          bVar15 = (*pcVar13)();
          return bVar15;
        }
        uStack_16 = uStack_11;
        uStack_17 = uStack_12;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar18 = (pTVar8->fields)._._.m_CachedPtr;
        if (pvVar18 != (void *)0x0) {
          pcVar13 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
            uVar14 = func_?(&UNK_?);
            FUN_?(uVar14,0);
            pcVar13 = (code *)swi(3);
            bVar15 = (*pcVar13)();
            return bVar15;
          }
          pcRam_? = pcVar13;
          (*pcRam_?)(pvVar18,&uStack_16);
          lVar28 = lRam_?;
          VStackX_8 = (Vector2)((ulonglong)(uint)VStackX_8.y << 0x20);
          VVar6 = VStackX_8;
          if ((*(int *)(lRam_? + 0x28) < 0) &&
             ((*(longlong *)(lRam_? + 0x60) == 0 ||
              (VVar6 = VVar3, (*(byte *)(lRam_? + 0x135) & 8) == 0)))) {
            VVar6 = (Vector2)FUN_?(lRam_?);
            FUN_?((Object *)((longlong)VVar6 + 0x10),&VStackX_8,
                          (longlong)*(int *)(lVar28 + 0xf8) + -0x10);
            if (iRam_? != 0) {
              uVar29 = (uint)((ulonglong)((longlong)VVar6 + 0x10U) >> 0xc);
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
          (this->fields).__2__current = (Object *)VVar6;
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
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
        pcVar13 = (code *)swi(3);
        bVar15 = (*pcVar13)();
        return bVar15;
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar15 = (*pcVar13)();
  return bVar15;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::LevelRewardAnimation+<DisplayAndFadePrevBadge>d__28::
     LevelRewardAnimation_DisplayAndFadePrevBadge_d_28_System_Collections_IEnumerator_Reset
               (LevelRewardAnimation_DisplayAndFadePrevBadge_d_28 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__LevelRewardAnimation___DisplayAndFadePrevBadge_d__28__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

