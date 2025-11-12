
/* Void InitializeObjectPreview(AvatarRepositoryItem, MVWorldObjectClient, Transform) */

void Assembly-CSharp.dll::AvatarShopPreviewItem::AvatarShopPreviewItem_InitializeObjectPreview
               (AvatarShopPreviewItem *this,AvatarRepositoryItem *item,MVWorldObjectClient *wo,
               Transform *previewItemsRoot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).item = item;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).item >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pAVar6 = (this->fields).previewer;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pAVar6 = (AvatarPreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pAVar6,
                      AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                     );
  bVar1 = iRam_? != 0;
  (this->fields).previewer = pAVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).previewer >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pAVar6 = (this->fields).previewer;
  if ((wo != (MVWorldObjectClient *)0x0) && (item != (AvatarRepositoryItem *)0x0)) {
    auStack_7._0_8_ = 0;
    if (pAVar6 != (AvatarPreviewer *)0x0) {
      VStack_8.z = 0.0;
      VStack_8.x = 0.0;
      VStack_8.y = 0.0;
      VStack_9.y = _UNK_?;
      VStack_9.x = _UNK_?;
      auStack_7._8_8_ = auStack_7._8_8_ & 0xffffffff00000000;
      auStack_7._0_8_ = 0;
      VStack_9.z = (float)(item->fields).slotPosition * _UNK_?;
      AvatarPreviewer::AvatarPreviewer_Initialize
                (pAVar6,(this->fields).previewWidth,(this->fields).previewHeight,
                 CameraClearFlags__Enum_Color,(wo->fields).previewLayerMask,(Vector3 *)auStack_7,
                 previewItemsRoot,&VStack_9,(item->fields).name,wo,(wo->fields).gameObject,
                 &VStack_8,(MethodInfo *)0x0);
      pAVar6 = (this->fields).previewer;
      if (((pAVar6 != (AvatarPreviewer *)0x0) &&
          (this_00 = (pAVar6->fields)._PreviewGameObject_k__BackingField,
          this_00 != (GameObject *)0x0)) &&
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_00,(MethodInfo *)0x0), this_01 != (Transform *)0x0)) {
        auStack_7._8_8_ = auStack_7._8_8_ & 0xffffffff00000000;
        auStack_7._0_8_ = (ulonglong)_UNK_? << 0x20;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate
                  (this_01,(Vector3 *)auStack_7,Space__Enum_Self,(MethodInfo *)0x0);
        pAVar6 = (this->fields).previewer;
        if ((pAVar6 != (AvatarPreviewer *)0x0) &&
           (pRVar10 = (this->fields).previewImage, pRVar10 != (RawImage *)0x0)) {
          pRVar11 = (pAVar6->fields).previewTexture;
          if (cRam_? == '\0') {
            auStack_7._8_8_ = &UNK_?;
            FUN_?(&TypeInfo__UnityEngine__Object,pRVar11,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pRVar12 = (RenderTexture *)(pRVar10->fields).m_Texture;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            auStack_7._8_8_ = &UNK_?;
            FUN_?();
          }
          if (cRam_? == '\0') {
            auStack_7._8_8_ = &UNK_?;
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            auStack_7._8_8_ = &UNK_?;
            FUN_?();
          }
          if (cRam_? == '\0') {
            auStack_7._8_8_ = &UNK_?;
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pRVar11 != (RenderTexture *)0x0 || pRVar12 != (RenderTexture *)0x0) {
            if (pRVar11 == (RenderTexture *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                auStack_7._8_8_ = &UNK_?;
                FUN_?();
              }
              if (pRVar12 == (RenderTexture *)0x0) {
                auStack_7._8_8_ = &UNK_?;
                FUN_?();
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              bVar1 = (pRVar12->fields)._._.m_CachedPtr == (void *)0x0;
            }
            else if (pRVar12 == (RenderTexture *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                auStack_7._8_8_ = &UNK_?;
                FUN_?();
              }
              bVar1 = (pRVar11->fields)._._.m_CachedPtr == (void *)0x0;
            }
            else {
              bVar1 = pRVar12 == pRVar11;
            }
            if (!bVar1) {
              bVar1 = iRam_? != 0;
              (pRVar10->fields).m_Texture = (Texture *)pRVar11;
              if (bVar1) {
                uVar2 = (uint)((ulonglong)&(pRVar10->fields).m_Texture >> 0xc);
                puVar5 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar4 = *puVar5;
                  LOCK();
                  uVar3 = *puVar5;
                  if (uVar4 == uVar3) {
                    *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar4 != uVar3);
              }
              auStack_7._8_8_ = &UNK_?;
              (*(pRVar10->klass->vtable).SetVerticesDirty.methodPtr)
                        (pRVar10,(pRVar10->klass->vtable).SetVerticesDirty.method);
              auStack_7._8_8_ = &UNK_?;
              (*(pRVar10->klass->vtable).SetMaterialDirty.methodPtr)
                        (pRVar10,(pRVar10->klass->vtable).SetMaterialDirty.method);
            }
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void SlotPressed() */

void Assembly-CSharp.dll::AvatarShopPreviewItem::AvatarShopPreviewItem_SlotPressed
               (AvatarShopPreviewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarPurchasePopup>_AvatarPurchasePopup_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarShopPreviewItem____c__DisplayClass7_0___SlotPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarShopPreviewItem____c__DisplayClass7_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__AvatarShopPreviewItem____c__DisplayClass7_0);
  original = (this->fields).popup;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       AvatarPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarPurchasePopup>_AvatarPurchasePopup_
                      );
  if (object != (Object *)0x0) {
    object[1].klass = pOVar1;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    iVar7 = iRam_?;
    pOVar1 = object[1].klass;
    pRVar8 = (this->fields).previewImage;
    pAVar9 = (this->fields).item;
    if (pOVar1 != (Object__Class *)0x0) {
      (pOVar1->_0).this_arg.data.generic_class = (Il2CppGenericClass *)pAVar9;
      if (iVar7 != 0) {
        uVar2 = (uint)((ulonglong)&(pOVar1->_0).this_arg >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      pIVar10 = (pOVar1->_0).byval_arg.data.array;
      if ((((pAVar9 != (AvatarRepositoryItem *)0x0) &&
           (pSVar11 = mscorlib.dll::System::Int32::Int32_ToString
                                ((Int32 *)&(pAVar9->fields).priceGold,(MethodInfo *)0x0),
           pIVar10 != (Il2CppArrayType *)0x0)) &&
          ((**(code **)&pIVar10->etype[0x5e].attrs)(pIVar10,pSVar11), pRVar8 != (RawImage *)0x0)) &&
         (this_00 = *(RawImage **)&(pOVar1->_0).byval_arg.attrs, this_00 != (RawImage *)0x0)) {
        UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                  (this_00,(pRVar8->fields).m_Texture,(MethodInfo *)0x0);
        pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_02,object,
                   MethodInfo__AvatarShopPreviewItem____c__DisplayClass7_0___SlotPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar13 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
        ;
        if ((
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
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
          if ((pMVar13->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar13);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar12,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar14 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar3 = (longlong)(pLVar14->fields)._size;
          uVar2 = 0;
          if (0 < lVar3) {
            lVar15 = 0;
            lVar16 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar14 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar14->fields)._size <= uVar2) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              pTVar18 = (pLVar14->fields)._items;
              if (pTVar18 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar18->max_length <= uVar2) {
                FUN_?();
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              this_01 = *(Component **)((longlong)pTVar18->vector + lVar16 + -0x20);
              if (this_01 == (Component *)0x0) goto code_?;
              pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_01,(MethodInfo *)0x0);
              bVar19 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                       ExecuteEvents_Execute_18
                                 (pGVar12,(BaseEventData *)0x0,this_02,
                                  (pMVar13->field7_0x38).rgctx_data[1].method);
              if (bVar19 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_01,(MethodInfo *)0x0);
                return;
              }
              uVar2 = uVar2 + 1;
              lVar15 = lVar15 + 1;
              lVar16 = lVar16 + 8;
            } while (lVar15 < lVar3);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarShopPreviewItem::AvatarShopPreviewItem_Update
               (AvatarShopPreviewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).previewer;
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
  if (pAVar1 != (AvatarPreviewer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pAVar1 = (this->fields).previewer;
      if (pAVar1 == (AvatarPreviewer *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      AvatarPreviewer::AvatarPreviewer_UpdateRotation(pAVar1,_UNK_?,(MethodInfo *)0x0);
    }
  }
  return;
}

