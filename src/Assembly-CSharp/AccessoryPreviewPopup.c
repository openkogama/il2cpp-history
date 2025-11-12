
/* Void Initialize(List`1[AccessoryDataClient]) */

void Assembly-CSharp.dll::AccessoryPreviewPopup::AccessoryPreviewPopup_Initialize
               (AccessoryPreviewPopup *this,List_1_AccessoryDataClient_ *previewedAccessories,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AccessoryPreviewPopup___Initialize_b__4_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AccessoryInventoryViewItem_MethodInfo__UnityEngine__Object__Instantiate<AccessoryInventoryViewItem>_AccessoryInventoryViewItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (pGVar1,(String *)0x0,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (pGVar1,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).tempTransform = pTVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).tempTransform >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pTVar2 = (this->fields).tempTransform;
    if ((pTVar2 != (Transform *)0x0) &&
       (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar2,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
      method_00 = (MethodInfo *)0x0;
      player = (MVPlayer *)0x0;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar8 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar8 != (GameSessionData *)0x0) {
        if ((pGVar8->fields).gameMode == 2) {
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                                 );
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_01,(Object *)this,
                     MethodInfo__AccessoryPreviewPopup___Initialize_b__4_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar1,(BaseEventData *)0x0,this_01,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                    );
        }
        else {
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
          if (extraout_RAX == 0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
          pMVar9 = (MVBody *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                             (this_00,*(int32_t *)(extraout_RAX + 0xa8),
                              MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                             );
          bVar3 = iRam_? != 0;
          (this->fields).body = pMVar9;
          if (bVar3) {
            uVar4 = (uint)((ulonglong)&(this->fields).body >> 0xc);
            lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
            do {
              uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
              puVar7 = (ulonglong *)(lVar5 + 0xADDR);
              LOCK();
              bVar3 = uVar6 == *puVar7;
              if (bVar3) {
                *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
          }
        }
        if (previewedAccessories != (List_1_AccessoryDataClient_ *)0x0) {
          lVar5 = 0x20;
          pOVar10 = (Object__Class *)0x0;
          while( true ) {
            uVar4 = (uint)pOVar10;
            if ((previewedAccessories->fields)._size <= (int)uVar4) {
              return;
            }
            pAVar11 = (this->fields).accessoryPopupItemPrefab;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            pAVar11 = (AccessoryInventoryViewItem *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)pAVar11,
                                 AccessoryInventoryViewItem_MethodInfo__UnityEngine__Object__Instantiate<AccessoryInventoryViewItem>_AccessoryInventoryViewItem_
                                );
            if ((uint)(previewedAccessories->fields)._size <= uVar4) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pAVar13 = (previewedAccessories->fields)._items;
            if (pAVar13 == (AccessoryDataClient__Array *)0x0) break;
            if ((uint)pAVar13->max_length <= uVar4) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if (pAVar11 == (AccessoryInventoryViewItem *)0x0) break;
            AccessoryInventoryViewItem::AccessoryInventoryViewItem_Initialize
                      (pAVar11,*(AccessoryDataClient **)((longlong)pAVar13->vector + lVar5 + -0x20),
                       (this->fields).tempTransform,(this->fields).body,0,(MethodInfo *)0x0);
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
            pvVar14 = (pAVar11->fields)._._._._.m_CachedPtr;
            if (pvVar14 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar11,(MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcVar12 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
              uVar15 = func_?(&UNK_?);
              FUN_?(uVar15,0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcRam_? = pcVar12;
            pvVar14 = (void *)(*pcRam_?)(pvVar14);
            obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                     Unmarshal_UnmarshalUnityObject
                               (pvVar14,
                                UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                               );
            obj = (this->fields).layoutGroup;
            if (obj == (HorizontalLayoutGroup *)0x0) break;
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
            CVar16._.m_CachedPtr = (obj->fields)._._._._._._._;
            if (CVar16._.m_CachedPtr == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcVar12 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
              uVar15 = func_?(&UNK_?);
              FUN_?(uVar15,0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcRam_? = pcVar12;
            pvVar14 = (void *)(*pcRam_?)(CVar16._.m_CachedPtr);
            pOVar17 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                      Unmarshal_UnmarshalUnityObject
                                (pvVar14,
                                 UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                );
            if (obj_00 == (Object *)0x0) break;
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
            pOVar10 = obj_00[1].klass;
            if (pOVar10 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            if ((
                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?();
            }
            pOVar18 = (Object__Class *)0x0;
            if (pOVar17 != (Object *)0x0) {
              pOVar18 = pOVar17[1].klass;
            }
            pcVar12 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
              uVar15 = func_?(&UNK_?);
              FUN_?(uVar15,0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcRam_? = pcVar12;
            (*pcRam_?)(pOVar10,pOVar18,0);
            pOVar10 = (Object__Class *)(ulonglong)(uVar4 + 1);
            lVar5 = lVar5 + 8;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AccessoryPreviewPopup::AccessoryPreviewPopup_OnDestroy
               (AccessoryPreviewPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).tempTransform;
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
  if (pTVar1 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar1 = (this->fields).tempTransform;
      if (pTVar1 == (Transform *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pTVar1,(MethodInfo *)0x0);
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
                ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields).tempTransform = (Transform *)0x0;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).tempTransform >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar6 == *puVar7;
          if (bVar3) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
    }
  }
  return;
}


/* Void OpenAccessoryManagementScreen(AccessoryDataClient) */

void Assembly-CSharp.dll::AccessoryPreviewPopup::AccessoryPreviewPopup_OpenAccessoryManagementScreen
               (AccessoryPreviewPopup *this,AccessoryDataClient *accessoryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryPopupHandler>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryPopupHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryPopupHandler>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryPreviewPopup____c__DisplayClass6_0___OpenAccessoryManagementScreen_b__0_UnityEngine__EventSystems__IAccessoryPopupHandler__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryPreviewPopup____c__DisplayClass6_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__AccessoryPreviewPopup____c__DisplayClass6_0);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  object[1].klass = (Object__Class *)accessoryData;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryPopupHandler>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__AccessoryPreviewPopup____c__DisplayClass6_0___OpenAccessoryManagementScreen_b__0_UnityEngine__EventSystems__IAccessoryPopupHandler__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar8 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryPopupHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryPopupHandler>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryPopupHandler>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryPopupHandler>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar8);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar7,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar10 = (longlong)(pLVar9->fields)._size;
    uVar3 = 0;
    if (0 < lVar10) {
      lVar11 = 0;
      lVar12 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar9->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar13 = (pLVar9->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar3) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar12 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar7,(BaseEventData *)0x0,this_01,
                           (pMVar8->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar3 = uVar3 + 1;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (lVar11 < lVar10);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Initialize>b__4_0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AccessoryPreviewPopup::AccessoryPreviewPopup__Initialize_b__4_0
               (AccessoryPreviewPopup *this,IGetCurrentBody *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AccessoryPreviewPopup__SetBody_MVBody_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<MVBody>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<MVBody>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,MethodInfo__AccessoryPreviewPopup__SetBody_MVBody_,
             (MethodInfo *)0x0);
  if (x == (IGetCurrentBody *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = x->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IGetCurrentBody) {
        pIVar5 = &pIVar2->vtable + pIVar2->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pIVar5 = (IGetCurrentBody__VTable *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody,0,this_00,unaff_RDI)
  ;
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar5->GetCurrentBody).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,this_00,(pIVar5->GetCurrentBody).method,UNRECOVERED_JUMPTABLE);
  return;
}

