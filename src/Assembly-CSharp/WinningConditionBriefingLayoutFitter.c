
/* Void AdjustElement(WinningConditionBriefingLayoutFitter+LayoutGroupAspectFitterDef) */

void Assembly-CSharp.dll::WinningConditionBriefingLayoutFitter::
     WinningConditionBriefingLayoutFitter_AdjustElement
               (WinningConditionBriefingLayoutFitter *this,
               WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef *layoutElement,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__UI__HorizontalLayoutGroup);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UI::LayoutElement>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UI::LayoutElement>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((layoutElement != (WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef *)0x0) &&
      (pLVar1 = (layoutElement->fields).group, pLVar1 != (LayoutElement *)0x0)) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pLVar1,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    pTVar3 = (Transform *)0x0;
    if (pTVar2->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar3 = pTVar2;
    }
    if (pTVar3 == (Transform *)0x0) {
      FUN_?(pTVar2);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar3 = (Transform *)0x0;
    if (pTVar2->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar3 = pTVar2;
    }
    VStackX_10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_sizeDelta
                           ((RectTransform *)pTVar3,(MethodInfo *)0x0);
    pLVar5 = (layoutElement->fields).layoutGroup;
    if (pLVar5 != (LayoutGroup *)0x0) {
      bVar6 = (TypeInfo__UnityEngine__UI__HorizontalLayoutGroup->_1).naturalAligment;
      if ((bVar6 <= (pLVar5->klass->_1).naturalAligment) &&
         (ppIVar7 = (pLVar5->klass->_1).typeHierarchy,
         (HorizontalLayoutGroup__Class *)ppIVar7[(ulonglong)bVar6 - 1] ==
         TypeInfo__UnityEngine__UI__HorizontalLayoutGroup)) {
        pLVar8 = (LayoutGroup *)0x0;
        if ((HorizontalLayoutGroup__Class *)
            ppIVar7[(ulonglong)
                    (TypeInfo__UnityEngine__UI__HorizontalLayoutGroup->_1).naturalAligment - 1] ==
            TypeInfo__UnityEngine__UI__HorizontalLayoutGroup) {
          pLVar8 = pLVar5;
        }
        (*(pLVar1->klass->vtable).set_minHeight.methodPtr)
                  (pLVar1,(VStackX_10.x - *(float *)&pLVar8[1].monitor) /
                          (this->fields).groupAspectRatio,
                   (pLVar1->klass->vtable).set_minHeight.method);
        pHVar9 = (HorizontalOrVerticalLayoutGroup *)(layoutElement->fields).layoutGroup;
        fVar10 = (this->fields).defaultSpacing;
        fVar11 = (this->fields).referenceRes.y;
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        iVar13 = (*pcRam_?)();
        if (pHVar9 != (HorizontalOrVerticalLayoutGroup *)0x0) {
          bVar6 = (TypeInfo__UnityEngine__UI__HorizontalLayoutGroup->_1).naturalAligment;
          if ((bVar6 <= (pHVar9->klass->_1).naturalAligment) &&
             (ppIVar7 = (pHVar9->klass->_1).typeHierarchy,
             (HorizontalLayoutGroup__Class *)ppIVar7[(ulonglong)bVar6 - 1] ==
             TypeInfo__UnityEngine__UI__HorizontalLayoutGroup)) {
            this_00 = (HorizontalOrVerticalLayoutGroup *)0x0;
            if ((HorizontalLayoutGroup__Class *)
                ppIVar7[(ulonglong)
                        (TypeInfo__UnityEngine__UI__HorizontalLayoutGroup->_1).naturalAligment - 1]
                == TypeInfo__UnityEngine__UI__HorizontalLayoutGroup) {
              this_00 = pHVar9;
            }
            UnityEngine.UI.dll::UnityEngine::UI::HorizontalOrVerticalLayoutGroup::
            HorizontalOrVerticalLayoutGroup_set_spacing
                      (this_00,(fVar10 / fVar11) * (float)iVar13,(MethodInfo *)0x0);
            uVar14 = 0;
            lVar15 = 0x20;
            while (pLVar16 = (layoutElement->fields).elements,
                  pLVar16 != (List_1_UnityEngine_UI_LayoutElement_ *)0x0) {
              if ((pLVar16->fields)._size <= (int)uVar14) {
                return;
              }
              if ((uint)(pLVar16->fields)._size <= uVar14) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pLVar17 = (pLVar16->fields)._items;
              if (pLVar17 == (LayoutElement__Array *)0x0) break;
              if ((uint)pLVar17->max_length <= uVar14) {
                FUN_?();
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              plVar18 = *(longlong **)((longlong)pLVar17->vector + lVar15 + -0x20);
              pOVar19 = *(Object **)
                         ((longlong)((((layoutElement->fields).elements)->fields)._items)->vector +
                         lVar15 + -0x20);
              if (pOVar19 == (Object *)0x0) break;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pOVar20 = pOVar19[1].klass;
              if (pOVar20 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(pOVar19,(MethodInfo *)0x0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcVar4 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                uVar12 = func_?(&UNK_?);
                FUN_?(uVar12,0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcRam_? = pcVar4;
              gcHandlePtr = (void *)(*pcRam_?)(pOVar20);
              pOVar19 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                        Unmarshal_UnmarshalUnityObject
                                  (gcHandlePtr,
                                   UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                  );
              if (pOVar19 == (Object *)0x0) break;
              pOVar21 = (Object *)0x0;
              if ((RectTransform__Class *)pOVar19->klass == TypeInfo__UnityEngine__RectTransform) {
                pOVar21 = pOVar19;
              }
              if (pOVar21 == (Object *)0x0) {
                FUN_?(pOVar19);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pOVar21 = (Object *)0x0;
              if ((RectTransform__Class *)pOVar19->klass == TypeInfo__UnityEngine__RectTransform) {
                pOVar21 = pOVar19;
              }
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              VStackX_10.x = 0.0;
              VStackX_10.y = 0.0;
              pOVar20 = pOVar21[1].klass;
              if (pOVar20 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(pOVar21,(MethodInfo *)0x0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcVar4 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                uVar12 = func_?(&UNK_?);
                FUN_?(uVar12,0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcRam_? = pcVar4;
              (*pcRam_?)(pOVar20,&VStackX_10);
              pLVar1 = (layoutElement->fields).group;
              fVar10 = (layoutElement->fields).elementAspectRatio;
              if (pLVar1 == (LayoutElement *)0x0) break;
              fVar11 = (float)(*(pLVar1->klass->vtable).get_minHeight_1.methodPtr)();
              fVar10 = VStackX_10.x / fVar10;
              if (fVar11 <= fVar10) {
                fVar10 = fVar11;
              }
              lVar22 = *plVar18;
              (**(code **)(lVar22 + 0x358))(plVar18,fVar10,*(undefined8 *)(lVar22 + 0x360));
              uVar14 = uVar14 + 1;
              lVar15 = lVar15 + 8;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void FixAspectRatio() */

void Assembly-CSharp.dll::WinningConditionBriefingLayoutFitter::
     WinningConditionBriefingLayoutFitter_FixAspectRatio
               (WinningConditionBriefingLayoutFitter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WinningConditionBriefingLayoutFitter::LayoutGroupAspectFitterDef>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WinningConditionBriefingLayoutFitter::LayoutGroupAspectFitterDef>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<WinningConditionBriefingLayoutFitter::LayoutGroupAspectFitterDef>__set_Item_int__WinningConditionBriefingLayoutFitter__LayoutGroupAspectFitterDef_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (this->fields).layoutGroup;
  if (pVVar1 != (VerticalLayoutGroup *)0x0) {
    (*(pVVar1->klass->vtable).CalculateLayoutInputVertical_1.methodPtr)
              (pVVar1,(pVVar1->klass->vtable).CalculateLayoutInputVertical_1.method);
    pVVar1 = (this->fields).layoutGroup;
    fVar2 = (this->fields).defaultSpacing;
    fVar3 = (this->fields).referenceRes.y;
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    iVar6 = (*pcRam_?)();
    if (pVVar1 != (VerticalLayoutGroup *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::HorizontalOrVerticalLayoutGroup::
      HorizontalOrVerticalLayoutGroup_set_spacing
                ((HorizontalOrVerticalLayoutGroup *)pVVar1,(fVar2 / fVar3) * (float)iVar6,
                 (MethodInfo *)0x0);
      pVVar1 = (this->fields).layoutGroup;
      if (pVVar1 != (VerticalLayoutGroup *)0x0) {
        (*(pVVar1->klass->vtable).CalculateLayoutInputVertical_1.methodPtr)
                  (pVVar1,(pVVar1->klass->vtable).CalculateLayoutInputVertical_1.method);
        pLVar7 = (this->fields).elements;
        uVar8 = 0;
        if (pLVar7 !=
            (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)0x0) {
          lVar9 = 0x20;
          while( true ) {
            if ((pLVar7->fields)._size <= (int)uVar8) {
              return;
            }
            if (pLVar7 ==
                (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)0x0)
            break;
            if ((uint)(pLVar7->fields)._size <= uVar8) {
code_?:
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pWVar10 = (pLVar7->fields)._items;
            if (pWVar10 == (WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef__Array *)
                          0x0) break;
            if ((uint)pWVar10->max_length <= uVar8) {
code_?:
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar11 = *(longlong *)((longlong)pWVar10->vector + lVar9 + -0x20);
            if ((lVar11 == 0) || (plVar12 = *(longlong **)(lVar11 + 0x10), plVar12 == (longlong *)0x0))
            break;
            (**(code **)(*plVar12 + 0x2f8))(plVar12,*(undefined8 *)(*plVar12 + 0x300));
            pLVar7 = (this->fields).elements;
            if (pLVar7 ==
                (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)0x0)
            break;
            if ((uint)(pLVar7->fields)._size <= uVar8) goto code_?;
            pWVar10 = (pLVar7->fields)._items;
            if (pWVar10 == (WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef__Array *)
                          0x0) break;
            if ((uint)pWVar10->max_length <= uVar8) goto code_?;
            WinningConditionBriefingLayoutFitter_AdjustElement
                      (this,*(WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef **)
                             ((longlong)pWVar10->vector + lVar9 + -0x20),(MethodInfo *)0x0);
            pLVar7 = (this->fields).elements;
            if (pLVar7 ==
                (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)0x0)
            break;
            if ((uint)(pLVar7->fields)._size <= uVar8) goto code_?;
            pWVar10 = (pLVar7->fields)._items;
            if (pWVar10 == (WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef__Array *)
                          0x0) break;
            FUN_?(pWVar10,(longlong)(int)uVar8);
            piVar13 = &(pLVar7->fields)._version;
            *piVar13 = *piVar13 + 1;
            uVar8 = uVar8 + 1;
            pLVar7 = (this->fields).elements;
            lVar9 = lVar9 + 8;
            if (pLVar7 ==
                (List_1_WinningConditionBriefingLayoutFitter_LayoutGroupAspectFitterDef_ *)0x0)
            break;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::WinningConditionBriefingLayoutFitter::
     WinningConditionBriefingLayoutFitter_Start
               (WinningConditionBriefingLayoutFitter *this,MethodInfo *method)

{
  (this->fields).referenceRes.x = (this->fields).desktopReferenceRes.x;
  (this->fields).referenceRes.y = (this->fields).desktopReferenceRes.y;
  pVVar1 = (this->fields).layoutGroup;
  if (pVVar1 != (VerticalLayoutGroup *)0x0) {
    (this->fields).defaultSpacing = *(float *)&(pVVar1->fields)._.m_ChildScaleWidth;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* WinningConditionBriefingLayoutFitter() */

void Assembly-CSharp.dll::WinningConditionBriefingLayoutFitter::
     WinningConditionBriefingLayoutFitter__ctor
               (WinningConditionBriefingLayoutFitter *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).groupAspectRatio = 1.0;
  (this->fields).desktopReferenceRes.x = 1920.0;
  (this->fields).desktopReferenceRes.y = 1440.0;
  (this->fields).defaultSpacing = 20.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x30529dd4,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

