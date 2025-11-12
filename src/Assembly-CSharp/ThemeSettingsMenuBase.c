
/* Void Initialize(Theme, RectTransform) */

void Assembly-CSharp.dll::ThemeSettingsMenuBase::ThemeSettingsMenuBase_Initialize
               (ThemeSettingsMenuBase *this,Theme *theme,RectTransform *content,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).theme = theme;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).theme >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  bVar1 = iRam_? != 0;
  (this->fields).content = content;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).content >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if ((theme != (Theme *)0x0) &&
     (pSVar6 = (theme->fields)._Settings_k__BackingField, pSVar6 != (SettingsWrapper *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar1 = iRam_? != 0;
    (pSVar6->fields).menu = (IMenu *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(pSVar6->fields).menu >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    uVar7 = 0;
    pTVar8 = this->klass;
    uVar9._0_1_ = (pTVar8->_1).rank;
    uVar9._1_1_ = (pTVar8->_1).minimumAlignment;
    if (uVar9 != 0) {
      do {
        if (pTVar8->interfaceOffsets[uVar7].interfaceType ==
            (Il2CppClass *)TypeInfo__ThemeSettings__IMenu) {
          pVVar10 = &(pTVar8->vtable).Equals + pTVar8->interfaceOffsets[uVar7].offset;
          UNRECOVERED_JUMPTABLE = pVVar10->methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(this,pVVar10->method,UNRECOVERED_JUMPTABLE);
          return;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar9);
    }
    puVar11 = (undefined8 *)FUN_?(this);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar11)(this,puVar11[1],(code *)*puVar11);
    return;
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ThemeSettingsMenuBase::ThemeSettingsMenuBase_OnDestroy
               (ThemeSettingsMenuBase *this,MethodInfo *method)

{
  pTVar1 = (this->fields).theme;
  if ((pTVar1 != (Theme *)0x0) &&
     (pSVar2 = (pTVar1->fields)._Settings_k__BackingField, pSVar2 != (SettingsWrapper *)0x0)) {
    bVar3 = iRam_? != 0;
    (pSVar2->fields).menu = (IMenu *)0x0;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(pSVar2->fields).menu >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Refresh() */

void Assembly-CSharp.dll::ThemeSettingsMenuBase::ThemeSettingsMenuBase_Refresh
               (ThemeSettingsMenuBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::RectTransform>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::RectTransform>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::RectTransform>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_Object_ *)0x0;
  lStackX_20 = 0;
  aLStack_2[0]._list = (List_1_System_Object_ *)0x0;
  aLStack_2[0]._index = 0;
  aLStack_2[0]._version = 0;
  aLStack_2[0]._current = (Object *)0x0;
  pTVar3 = (Transform *)(this->fields).content;
  if (pTVar3 != (Transform *)0x0) {
    pLStackX_18 = (List_1_System_Object_ *)
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                            (pTVar3,(MethodInfo *)0x0);
    uStack_4 = 0;
    pLStack_5 = (List_1_T_Enumerator_System_Object_ *)&pLStackX_18;
    plStack_6 = &lStackX_20;
    do {
      if (pLStackX_18 == (List_1_System_Object_ *)0x0) {
code_?:
        FUN_?();
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      cVar8 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      pLVar9 = pLStackX_18;
      uVar10 = 0;
      if (cVar8 == '\0') {
        lStackX_20 = FUN_?(pLStackX_18);
        if (lStackX_20 != 0) {
          FUN_?(0,TypeInfo__System__IDisposable,lStackX_20);
        }
        pTVar11 = (this->fields).theme;
        if (((pTVar11 == (Theme *)0x0) ||
            (this_00 = (pTVar11->fields)._Settings_k__BackingField, this_00 == (SettingsWrapper *)0x0
            )) || (pRVar12 = ThemeSettings::SettingsWrapper::SettingsWrapper_get_SettingsUI
                                       (this_00,(MethodInfo *)0x0),
                  pRVar12 == (RectTransform__Array *)0x0)) break;
        ppRVar13 = pRVar12->vector;
        pLVar9 = pLVar1;
        goto code_?;
      }
      if (pLStackX_18 == (List_1_System_Object_ *)0x0) {
code_?:
        FUN_?();
        goto code_?;
      }
      pLVar14 = pLStackX_18->klass;
      uVar15._0_1_ = (pLVar14->_1).rank;
      uVar15._1_1_ = (pLVar14->_1).minimumAlignment;
      if (uVar15 != 0) {
        do {
          if (pLVar14->interfaceOffsets[uVar10].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            pVVar16 = &(pLVar14->vtable).Equals + (pLVar14->interfaceOffsets[uVar10].offset + 1);
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar15);
      }
      pVVar16 = (VirtualInvokeData *)
                FUN_?(pLStackX_18,TypeInfo__System__Collections__IEnumerator);
code_?:
      pLVar9 = (List_1_System_Object_ *)(*pVVar16->methodPtr)(pLVar9,pVVar16->method);
      if (pLVar9 == (List_1_System_Object_ *)0x0) {
code_?:
        FUN_?();
        goto code_?;
      }
      pLVar17 = pLVar1;
      if (pLVar9->klass == (List_1_System_Object___Class *)TypeInfo__UnityEngine__RectTransform) {
        pLVar17 = pLVar9;
      }
      if (pLVar17 == (List_1_System_Object_ *)0x0) {
code_?:
        FUN_?(pLVar9);
        goto code_?;
      }
      pLVar17 = pLVar1;
      if (pLVar9->klass == (List_1_System_Object___Class *)TypeInfo__UnityEngine__RectTransform) {
        pLVar17 = pLVar9;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar18 = (pLVar17->fields)._items;
      if (pOVar18 == (Object__Array *)0x0) {
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar17,(MethodInfo *)0x0);
        pLVar9 = extraout_RAX;
        goto code_?;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar19 = func_?(&UNK_?);
        FUN_?(uVar19);
        goto code_?;
      }
      pcRam_? = pcVar7;
      pvVar20 = (void *)(*pcRam_?)(pOVar18);
      unaff_RBX = (List_1_System_Object_ *)
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar20,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                            );
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)unaff_RBX,0.0,(MethodInfo *)0x0);
    } while( true );
  }
  goto code_?;
code_?:
  uVar21 = (uint)pLVar9;
  if ((int)pRVar12->max_length <= (int)uVar21) goto code_?;
  if ((uint)pRVar12->max_length <= uVar21) {
    FUN_?();
    goto code_?;
  }
  pRVar22 = *ppRVar13;
  pRVar23 = (this->fields).content;
  if (pRVar22 == (RectTransform *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar20 = (pRVar22->fields)._._._.m_CachedPtr;
  if (pvVar20 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar22,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  unaff_RBX = pLVar1;
  if (pRVar23 != (RectTransform *)0x0) {
    unaff_RBX = (pRVar23->fields)._._._.m_CachedPtr;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar19 = func_?(&UNK_?);
    FUN_?(uVar19,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar20);
  pLVar9 = (List_1_System_Object_ *)(ulonglong)(uVar21 + 1);
  ppRVar13 = ppRVar13 + 1;
  goto code_?;
code_?:
  pcRam_? = pcVar7;
  pvVar20 = (void *)(*pcRam_?)(pOVar18);
  obj = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject
                  (pvVar20,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                  );
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy(obj,0.0,(MethodInfo *)0x0);
  goto code_?;
code_?:
  pTVar3 = (Transform *)(this->fields).controllerArea;
  if (pTVar3 != (Transform *)0x0) {
    pLStackX_18 = (List_1_System_Object_ *)
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                            (pTVar3,(MethodInfo *)0x0);
    uStack_4 = 0;
    pLStack_5 = (List_1_T_Enumerator_System_Object_ *)&pLStackX_18;
    plStack_6 = &lStackX_20;
code_?:
    pLVar9 = pLStackX_18;
    unaff_RBX = pLStackX_18;
    if (pLStackX_18 != (List_1_System_Object_ *)0x0) {
      pLVar14 = pLStackX_18->klass;
      uVar24._0_1_ = (pLVar14->_1).rank;
      uVar24._1_1_ = (pLVar14->_1).minimumAlignment;
      if (uVar24 != 0) {
        uVar25 = uVar10;
        do {
          if (pLVar14->interfaceOffsets[uVar25].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            pVVar16 = &(pLVar14->vtable).Equals + pLVar14->interfaceOffsets[uVar25].offset;
            goto code_?;
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar24);
      }
      pVVar16 = (VirtualInvokeData *)
                FUN_?(pLStackX_18,TypeInfo__System__Collections__IEnumerator,0);
code_?:
      cVar8 = (*pVVar16->methodPtr)(pLVar9);
      unaff_RBX = pLStackX_18;
      if (cVar8 == '\0') {
        lStackX_20 = FUN_?(pLStackX_18,TypeInfo__System__IDisposable);
        if (lStackX_20 != 0) {
          FUN_?(0,TypeInfo__System__IDisposable,lStackX_20);
        }
        pTVar11 = (this->fields).theme;
        if ((pTVar11 != (Theme *)0x0) &&
           (pLVar9 = (List_1_System_Object_ *)
                      (*(pTVar11->klass->vtable).get_Controllers.methodPtr)
                                (pTVar11,(pTVar11->klass->vtable).get_Controllers.method),
           pLVar9 != (List_1_System_Object_ *)0x0)) {
          if (iRam_? != 0) {
            uVar21 = (uint)((ulonglong)&uStack_4 >> 0xc);
            uVar26 = (ulonglong)((uVar21 & 0x1fffff) >> 6);
            do {
              uVar27 = *(ulonglong *)(uVar26 * 8 + 0xADDR);
              puVar28 = (ulonglong *)(uVar26 * 8 + 0xADDR);
              LOCK();
              bVar29 = uVar27 == *puVar28;
              if (bVar29) {
                *puVar28 = uVar27 | 1L << (uVar21 & 0x3f);
              }
              UNLOCK();
            } while (!bVar29);
          }
          pLStack_5 = (List_1_T_Enumerator_System_Object_ *)
                       ((ulonglong)(uint)(pLVar9->fields)._version << 0x20);
          plStack_6 = (longlong *)0x0;
          aLStack_2[0]._8_8_ = pLStack_5;
          aLStack_2[0]._current = (Object *)0x0;
          uStack_4 = 0;
          pLStack_5 = aLStack_2;
          aLStack_2[0]._list = pLVar9;
          while( true ) {
            bVar30 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (aLStack_2,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::RectTransform>__MoveNext__
                               );
            unaff_RBX = (List_1_System_Object_ *)aLStack_2[0]._current;
            if (bVar30 == 0) {
              return;
            }
            pRVar22 = (this->fields).controllerArea;
            if ((List_1_System_Object_ *)aLStack_2[0]._current == (List_1_System_Object_ *)0x0)
            goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOVar18 = ((List_1_System_Object___Fields *)((longlong)unaff_RBX + 0x10))->_items;
            if (pOVar18 == (Object__Array *)0x0) break;
            if ((
                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?();
            }
            unaff_RBX = pLVar1;
            if (pRVar22 != (RectTransform *)0x0) {
              unaff_RBX = (pRVar22->fields)._._._.m_CachedPtr;
            }
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0))
            goto code_?;
            pcRam_? = pcVar7;
            (*pcRam_?)(pOVar18,unaff_RBX,0);
          }
          goto code_?;
        }
        goto code_?;
      }
      if (pLStackX_18 != (List_1_System_Object_ *)0x0) {
        pLVar14 = pLStackX_18->klass;
        uVar25._0_1_ = (pLVar14->_1).rank;
        uVar25._1_1_ = (pLVar14->_1).minimumAlignment;
        if (uVar25 != 0) {
          uVar24 = uVar10;
          do {
            if (pLVar14->interfaceOffsets[uVar24].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              pVVar16 = &(pLVar14->vtable).Equals + (pLVar14->interfaceOffsets[uVar24].offset + 1);
              goto code_?;
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 < uVar25);
        }
        pVVar16 = (VirtualInvokeData *)
                  FUN_?(pLStackX_18,TypeInfo__System__Collections__IEnumerator);
code_?:
        pLVar9 = (List_1_System_Object_ *)(*pVVar16->methodPtr)(unaff_RBX,pVVar16->method);
        if (pLVar9 != (List_1_System_Object_ *)0x0) {
          pLVar17 = pLVar1;
          if (pLVar9->klass == (List_1_System_Object___Class *)TypeInfo__UnityEngine__RectTransform
             ) {
            pLVar17 = pLVar9;
          }
          if (pLVar17 != (List_1_System_Object_ *)0x0) {
            unaff_RBX = pLVar1;
            if (pLVar9->klass ==
                (List_1_System_Object___Class *)TypeInfo__UnityEngine__RectTransform) {
              unaff_RBX = pLVar9;
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOVar18 = (unaff_RBX->fields)._items;
            if (pOVar18 != (Object__Array *)0x0) {
              pcVar7 = pcRam_?;
              if ((pcRam_? != (code *)0x0) ||
                 (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 != (code *)0x0))
              goto code_?;
code_?:
              uVar19 = func_?(&UNK_?);
              FUN_?(uVar19);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)unaff_RBX,(MethodInfo *)0x0);
            pLVar9 = extraout_RAX_00;
          }
          FUN_?(pLVar9);
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
    FUN_?();
code_?:
    uVar19 = func_?(&UNK_?);
    FUN_?(uVar19);
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)unaff_RBX,(MethodInfo *)0x0);
code_?:
    FUN_?();
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

