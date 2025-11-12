
/* Void Clear() */

void Assembly-CSharp.dll::InventorySlot::InventorySlot_Clear(InventorySlot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = InventorySlot_get_Item(this,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar1 = InventorySlot_get_Item(this,(MethodInfo *)0x0);
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
                ((Object_1 *)pGVar1,0.0,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void HighlightSlot() */

void Assembly-CSharp.dll::InventorySlot::InventorySlot_HighlightSlot
               (InventorySlot *this,MethodInfo *method)

{
  pNVar1 = (this->fields).fade;
  if (pNVar1 != (NotificationFade *)0x0) {
    this_00 = (pNVar1->fields).group;
    (pNVar1->fields).playing = 1;
    (pNVar1->fields).pauseAt = (pNVar1->fields).duration;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      (pNVar1->fields).currentTime = 0.0;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDrop(PointerEventData) */

void Assembly-CSharp.dll::InventorySlot::InventorySlot_OnDrop
               (InventorySlot *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGameObjectDroppedInSlot>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGameObjectDroppedInSlot>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGameObjectDroppedInSlot>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  InventoryItemMetaData_MethodInfo__UnityEngine__GameObject__GetComponent<InventoryItemMetaData>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__InventorySlot____c__DisplayClass11_0___OnDrop_b__0_UnityEngine__EventSystems__IGameObjectDroppedInSlot__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventorySlot____c__DisplayClass11_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__InventorySlot____c__DisplayClass11_0);
  if (object != (Object *)0x0) {
    object[1].klass = (Object__Class *)eventData;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    iVar6 = iRam_?;
    object[1].monitor = (MonitorData *)this;
    if (iVar6 != 0) {
      uVar1 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    if ((object[1].klass != (Object__Class *)0x0) &&
       (pcVar7 = ((object[1].klass)->_0).namespaze, pcVar7 != (char *)0x0)) {
      lVar2 = *(longlong *)(pcVar7 + 0x40);
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
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (lVar2 != 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (*(longlong *)(lVar2 + 0x10) != 0) {
          if (((object[1].klass == (Object__Class *)0x0) ||
              (pcVar7 = ((object[1].klass)->_0).namespaze, pcVar7 == (char *)0x0)) ||
             (pGVar8 = *(GameObject **)(pcVar7 + 0x40), pGVar8 == (GameObject *)0x0))
          goto code_?;
          pOVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (pGVar8,
                              InventoryItemMetaData_MethodInfo__UnityEngine__GameObject__GetComponent<InventoryItemMetaData>__
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
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pOVar9 != (Object *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (pOVar9[1].klass != (Object__Class *)0x0) {
              pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this,(MethodInfo *)0x0);
              this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGameObjectDroppedInSlot>
                                     );
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
              Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                        (this_00,object,
                         MethodInfo__InventorySlot____c__DisplayClass11_0___OnDrop_b__0_UnityEngine__EventSystems__IGameObjectDroppedInSlot__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar8,(BaseEventData *)0x0,this_00,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGameObjectDroppedInSlot>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGameObjectDroppedInSlot>_
                        );
            }
          }
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Set(GameObject) */

void Assembly-CSharp.dll::InventorySlot::InventorySlot_Set
               (InventorySlot *this,GameObject *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (item != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((item->fields)._.m_CachedPtr != (void *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (item,(MethodInfo *)0x0);
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (this_00 == (Transform *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_00,parent,0,(MethodInfo *)0x0);
      obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                      (item,
                       UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                      );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
      if (obj == (Object *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uStack_3._0_4_ = (pVVar2->zeroVector).x;
      uStack_3._4_4_ = (pVVar2->zeroVector).y;
      fStack_4 = (pVVar2->zeroVector).z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar5 = obj[1].klass;
      if (pOVar5 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pOVar5,&uStack_3);
    }
  }
  return;
}


/* GameObject get_Item() */

GameObject *
Assembly-CSharp.dll::InventorySlot::InventorySlot_get_Item(InventorySlot *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 == (Transform *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    pGVar4 = (GameObject *)(*pcVar3)();
    return pGVar4;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar3 = (code *)swi(3);
    pGVar4 = (GameObject *)(*pcVar3)();
    return pGVar4;
  }
  pcRam_? = pcVar3;
  iVar6 = (*pcRam_?)(pvVar2);
  if (iVar6 < 2) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 == (Transform *)0x0) goto code_?;
    iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                      (pTVar1,(MethodInfo *)0x0);
    if (iVar7 < 1) {
      return (GameObject *)0x0;
    }
    pNVar8 = (this->fields).fade;
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
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pNVar8 != (NotificationFade *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pNVar8->fields)._._._._.m_CachedPtr != (void *)0x0) {
        return (GameObject *)0x0;
      }
    }
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar1 == (Transform *)0x0) goto code_?;
    iVar6 = 0;
  }
  else {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if ((this_00 == (Transform *)0x0) ||
       (iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_childCount
                          (this_00,(MethodInfo *)0x0), pTVar1 == (Transform *)0x0))
    goto code_?;
    iVar6 = iVar7 + -1;
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetChild
                     (pTVar1,iVar6,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
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
    if (pTVar1 == (Transform *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      pGVar4 = (GameObject *)(*pcVar3)();
      return pGVar4;
    }
    pvVar2 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      pGVar4 = (GameObject *)(*pcVar3)();
      return pGVar4;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      pGVar4 = (GameObject *)(*pcVar3)();
      return pGVar4;
    }
    pcRam_? = pcVar3;
    plVar9 = (longlong *)(*pcRam_?)(pvVar2);
    pMVar10 = 
    UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
    ;
    if ((
        UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                   );
    }
    if (plVar9 != (longlong *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      System__Runtime__InteropServices__GCHandle__MethodInfo__Unity__Collections__LowLevel__Unsafe__UnsafeUtility__As<void*,_System::Runtime::InteropServices::GCHandle>_System__IntPtr__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (((ulonglong)plVar9 & 1) == 0) {
        lVar11 = *plVar9;
      }
      else {
        lVar11 = FUN_?(plVar9);
      }
      pvVar2 = ((pMVar10->field7_0x38).rgctx_data)->rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar2 + 0x135) & 1) == 0) {
        pvVar2 = (void *)FUN_?(pvVar2);
      }
      if (lVar11 != 0) {
        pGVar4 = (GameObject *)FUN_?(lVar11,pvVar2);
        if (pGVar4 != (GameObject *)0x0) {
          return pGVar4;
        }
        FUN_?(lVar11,pvVar2);
        pcVar3 = (code *)swi(3);
        pGVar4 = (GameObject *)(*pcVar3)();
        return pGVar4;
      }
    }
    return (GameObject *)0x0;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  pGVar4 = (GameObject *)(*pcVar3)();
  return pGVar4;
}

