
/* Void Activate(UIPushOption) */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_Activate
               (AvatarShopController *this,UIPushOption__Enum pushOption,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AvatarShopController__PageTurned_int_);
    LOCK();
    UNLOCK();
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
                  InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarShopController____c___Activate_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarShopController____c__DisplayClass10_0___Activate_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarShopController____c__DisplayClass10_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarShopController____c);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__AvatarShopController____c__DisplayClass10_0);
  if (object_00 == (Object *)0x0) {
DAT_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  object_00[1].klass = (Object__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  *(UIPushOption__Enum *)&object_00[1].monitor = pushOption;
  pIVar7 = (this->fields).inventoryControllerPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar7 = (InventoryController *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pIVar7,
                       InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                      );
  bVar2 = iRam_? != 0;
  (this->fields).inventoryController = pIVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).inventoryController >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pIVar7 = (this->fields).inventoryController;
  if (pIVar7 == (InventoryController *)0x0) goto DAT_?;
  InventoryController::InventoryController_Initialize
            (pIVar7,(this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
  pTVar8 = (this->fields).tab;
  if (((pTVar8 == (TabState *)0x0) ||
      (pIVar7 = (this->fields).inventoryController, pIVar7 == (InventoryController *)0x0)) ||
     (pTVar9 = (pIVar7->fields).tabMenu, pTVar9 == (TabMenuBase *)0x0)) goto DAT_?;
  (*(pTVar9->klass->vtable).__unknown.methodPtr)(pTVar9,0,(pTVar8->fields).name);
  pIVar7 = (this->fields).inventoryController;
  if (pIVar7 == (InventoryController *)0x0) goto DAT_?;
  pUVar10 = (pIVar7->fields).OnPageTurned;
  pDVar11 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
  FUN_?(pDVar11,this);
  pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pUVar10,pDVar11,(MethodInfo *)0x0);
  pUVar12 = TypeInfo__UnityEngine__Events__UnityAction<int>;
  if (pDVar11 == (Delegate *)0x0) {
    (pIVar7->fields).OnPageTurned = (UnityAction_1_System_Int32_ *)0x0;
  }
  else {
    pUVar10 = (UnityAction_1_System_Int32_ *)
              FUN_?(pDVar11,TypeInfo__UnityEngine__Events__UnityAction<int>);
    if (pUVar10 == (UnityAction_1_System_Int32_ *)0x0) {
      FUN_?(pDVar11,pUVar12);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (pIVar7->fields).OnPageTurned = pUVar10;
    pUVar12 = TypeInfo__UnityEngine__Events__UnityAction<int>;
    lVar4 = FUN_?();
    if (lVar4 == 0) {
      FUN_?(pDVar11,pUVar12);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&(pIVar7->fields).OnPageTurned >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarShopController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarShopController____c);
  }
  this_01 = TypeInfo__AvatarShopController____c->static_fields->__9__10_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarShopController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarShopController____c);
    }
    object = TypeInfo__AvatarShopController____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__AvatarShopController____c___Activate_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarShopController____c->static_fields->__9__10_0 = this_01;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__AvatarShopController____c->static_fields->__9__10_0 >>
                     0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar13,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_02,object_00,
             MethodInfo__AvatarShopController____c__DisplayClass10_0___Activate_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar13,(BaseEventData *)0x0,this_02,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AvatarRepositoryItem>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_Root___AvatarShopControl);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar14 = (this->fields).previewRootTransform;
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
  if (pTVar14 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar14->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar14 = (this->fields).previewRootTransform;
      if (pTVar14 == (Transform *)0x0) goto code_?;
      pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar14,(MethodInfo *)0x0);
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
                ((Object_1 *)pGVar13,0.0,(MethodInfo *)0x0);
    }
  }
  pGVar13 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  name = StringLiteral_Preview_Root___AvatarShopControl;
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
            (pGVar13,name,(MethodInfo *)0x0);
  if (pGVar13 != (GameObject *)0x0) {
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar13,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).previewRootTransform = pTVar14;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).previewRootTransform >> 0xc);
      uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar15 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar15 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar15 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pIVar7 = (this->fields).inventoryController;
    if ((pIVar7 != (InventoryController *)0x0) &&
       (pIVar16 = (pIVar7->fields).inventorySlots, pIVar16 != (InventorySlots *)0x0)) {
      InventorySlots::InventorySlots_Clear(pIVar16,(MethodInfo *)0x0);
      pTVar8 = (this->fields).tab;
      pIVar7 = (this->fields).inventoryController;
      if (pTVar8 != (TabState *)0x0) {
        uVar3 = (pTVar8->fields).currentPage;
        uVar17 = FUN_?((float)(pTVar8->fields).highestSlotIndex /
                              (float)(pTVar8->fields).slotsPrPage);
        uVar18 = 1;
        if (1 < (int)uVar17) {
          uVar18 = uVar17;
        }
        if ((pIVar7 != (InventoryController *)0x0) &&
           (pTVar9 = (pIVar7->fields).tabMenu, pTVar9 != (TabMenuBase *)0x0)) {
          (*(pTVar9->klass->vtable).__unknown_1.methodPtr)
                    (pTVar9,0,(ulonglong)uVar3,(ulonglong)uVar18,
                     (pTVar9->klass->vtable).__unknown_1.method);
          pIVar16 = (pIVar7->fields).inventorySlots;
          if (pIVar16 != (InventorySlots *)0x0) {
            InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                      (pIVar16,uVar3,(pIVar7->fields).numberOfSlots,(MethodInfo *)0x0);
            this_00 = (this->fields).avatarRepository;
            if (this_00 != (AvatarRepository *)0x0) {
              pLVar19 = AvatarRepository::AvatarRepository_GetAvatars(this_00,(MethodInfo *)0x0);
              index = 0;
              if (pLVar19 != (List_1_AvatarRepositoryItem_ *)0x0) {
                while( true ) {
                  if ((pLVar19->fields)._size <= index) {
                    return;
                  }
                  pTVar8 = (this->fields).tab;
                  if ((pTVar8 == (TabState *)0x0) ||
                     (pIVar20 = TabState::TabState_get_SlotRange(pTVar8,(MethodInfo *)0x0),
                     pIVar20 == (Int32__Array *)0x0)) break;
                  if ((int)pIVar20->max_length == 0) {
code_?:
                    FUN_?();
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  if (pIVar20->vector[0] <= index) {
                    if ((uint)pIVar20->max_length < 2) goto code_?;
                    if (index < pIVar20->vector[1]) {
                      AvatarShopController_AddPreviewObjectForIndex(this,index,(MethodInfo *)0x0);
                    }
                  }
                  index = index + 1;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void AddPreviewObjectForIndex(Int32) */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_AddPreviewObjectForIndex
               (AvatarShopController *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AvatarShopPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<AvatarShopPreviewItem>_AvatarShopPreviewItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).avatarRepository;
  if (pAVar1 != (AvatarRepository *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (pAVar1->fields).avatars;
    if (this_00 != (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)0x0) {
      item = (AvatarRepositoryItem *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,index,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Item_int_
                       );
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__KoGaMaPackageClient);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (item != (AvatarRepositoryItem *)0x0) {
        buffer = (item->fields).data;
        this_03 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
        MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
                  (this_03,buffer,(MethodInfo *)0x0);
        this_04 = (KoGaMaPackageClient *)FUN_?(TypeInfo__KoGaMaPackageClient);
        KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_04,this_03,0,(MethodInfo *)0x0);
        if (this_04 != (KoGaMaPackageClient *)0x0) {
          KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_04,(MethodInfo *)0x0);
          this_01 = (this_04->fields).worldObjects;
          if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
            wo = (MVWorldObjectClient *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                            (this_04->fields).worldObjectRoot,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
            pAVar2 = (this->fields).previewItemPrefab;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            pAVar2 = (AvatarShopPreviewItem *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                               ((Object *)pAVar2,
                                AvatarShopPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<AvatarShopPreviewItem>_AvatarShopPreviewItem_
                               );
            if (pAVar2 != (AvatarShopPreviewItem *)0x0) {
              AvatarShopPreviewItem::AvatarShopPreviewItem_InitializeObjectPreview
                        (pAVar2,item,wo,(this->fields).previewRootTransform,(MethodInfo *)0x0);
              pIVar3 = (this->fields).inventoryController;
              this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pAVar2,(MethodInfo *)0x0);
              if (pIVar3 != (InventoryController *)0x0) {
                iVar4 = (this->fields).numberOfSlotsPrPage;
                pIVar5 = (pIVar3->fields).inventorySlots;
                if (pIVar5 != (InventorySlots *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Item_int_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  this_02 = (pIVar5->fields).inventorySlots;
                  if ((this_02 != (Dictionary_2_System_Int32_InventorySlot_ *)0x0) &&
                     (this_06 = (Component *)
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32,System::Object]::
                                Dictionary_2_System_Int32_System_Object__get_Item
                                          ((Dictionary_2_System_Int32_System_Object_ *)this_02,
                                           index % iVar4,
                                           MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Item_int_
                                          ), this_06 != (Component *)0x0)) {
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
                    if (this_05 != (GameObject *)0x0) {
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      if ((this_05->fields)._.m_CachedPtr != (void *)0x0) {
                        this_07 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(this_05,(MethodInfo *)0x0);
                        parent = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_get_transform(this_06,(MethodInfo *)0x0);
                        if (this_07 == (Transform *)0x0) {
                          FUN_?();
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                                  (this_07,parent,0,(MethodInfo *)0x0);
                        obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_GetComponent_1
                                        (this_05,
                                         UnityEngine__RectTransform_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::RectTransform>__
                                        );
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if (obj == (Object *)0x0) {
                          FUN_?();
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pOVar7 = obj[1].klass;
                        if (pOVar7 == (Object__Class *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        pcVar6 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0))
                        {
                          uVar8 = func_?(&UNK_?);
                          FUN_?(uVar8,0);
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        pcRam_? = pcVar6;
                        (*pcRam_?)(pOVar7,&stack0xffffffffffffffe8);
                      }
                    }
                    return;
                  }
                }
                FUN_?();
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* MVWorldObjectClient GetWorldObjectFromItemData(AvatarRepositoryItem) */

MVWorldObjectClient *
Assembly-CSharp.dll::AvatarShopController::AvatarShopController_GetWorldObjectFromItemData
          (AvatarRepositoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KoGaMaPackageClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (item != (AvatarRepositoryItem *)0x0) {
    buffer = (item->fields).data;
    this_00 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this_00,buffer,(MethodInfo *)0x0);
    this_01 = (KoGaMaPackageClient *)FUN_?(TypeInfo__KoGaMaPackageClient);
    KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_01,this_00,0,(MethodInfo *)0x0);
    if (this_01 != (KoGaMaPackageClient *)0x0) {
      KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_01,(MethodInfo *)0x0);
      pMVar1 = 
      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_;
      this = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this_01->fields).worldObjects;
      if (this != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                          (this,(this_01->fields).worldObjectRoot,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           ->klass->rgctx_data[0x21].method);
        if ((int)uVar2 < 0) {
          uVar3 = func_?(pMVar1->klass->rgctx_data,0xe);
          key = (Object *)func_?(uVar3);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                    (key,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
          return pMVar5;
        }
        pDVar6 = (this->fields)._entries;
        if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0
           ) {
          if (uVar2 < (uint)pDVar6->max_length) {
            return *(MVWorldObjectClient **)&pDVar6->vector[(int)uVar2].value.y;
          }
          FUN_?();
          pcVar4 = (code *)swi(3);
          pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
          return pMVar5;
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
        return pMVar5;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
  return pMVar5;
}


/* Void Initialize(AvatarEditModeBodyController) */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_Initialize
               (AvatarShopController *this,AvatarEditModeBodyController *editModeBodyController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TabState);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Avatars);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).avatarEditModeBodyController = editModeBodyController;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarEditModeBodyController >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar6 != (MVGameControllerBase *)0x0) &&
     (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) {
    bVar1 = iRam_? != 0;
    (this->fields).avatarRepository = (pMVar7->fields)._AvatarShopRepository_k__BackingField;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).avatarRepository >> 0xc);
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
    pSVar8 = TM::TM__(StringLiteral_Avatars,(MethodInfo *)0x0);
    iVar9 = (this->fields).numberOfSlotsPrPage;
    pTVar10 = (TabState *)FUN_?(TypeInfo__TabState);
    bVar1 = iRam_? != 0;
    (pTVar10->fields).name = pSVar8;
    (pTVar10->fields).currentPage = 1;
    (pTVar10->fields)._TabID_k__BackingField = 1;
    (pTVar10->fields).slotsPrPage = iVar9;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(pTVar10->fields).name >> 0xc);
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
    pAVar11 = (this->fields).avatarRepository;
    if (pAVar11 != (AvatarRepository *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_AvatarRepositoryItem>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar12 = (pAVar11->fields).avatars;
      if (pDVar12 != (Dictionary_2_System_Int32_AvatarRepositoryItem_ *)0x0) {
        bVar1 = iRam_? != 0;
        (pTVar10->fields).highestSlotIndex =
             ((pDVar12->fields)._count - (pDVar12->fields)._freeCount) + -1;
        (this->fields).tab = pTVar10;
        if (bVar1) {
          uVar2 = (uint)((ulonglong)&(this->fields).tab >> 0xc);
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
        return;
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_OnPop
               (AvatarShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewRootTransform;
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
      pTVar1 = (this->fields).previewRootTransform;
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
    }
  }
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_PageTurned
               (AvatarShopController *this,int32_t dir,MethodInfo *method)

{
  pTVar1 = (this->fields).tab;
  if (pTVar1 == (TabState *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = TabState::TabState_UpdatePage(pTVar1,dir,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AvatarRepositoryItem>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_Root___AvatarShopControl);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar4 = (this->fields).previewRootTransform;
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
  if (pTVar4 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar4->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar4 = (this->fields).previewRootTransform;
      if (pTVar4 == (Transform *)0x0) goto code_?;
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar4,(MethodInfo *)0x0);
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
                ((Object_1 *)pGVar5,0.0,(MethodInfo *)0x0);
    }
  }
  pGVar5 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  name = StringLiteral_Preview_Root___AvatarShopControl;
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
            (pGVar5,name,(MethodInfo *)0x0);
  if (pGVar5 != (GameObject *)0x0) {
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar5,(MethodInfo *)0x0);
    bVar6 = iRam_? != 0;
    (this->fields).previewRootTransform = pTVar4;
    if (bVar6) {
      uVar7 = (uint)((ulonglong)&(this->fields).previewRootTransform >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar9 == *puVar10;
        if (bVar6) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pIVar11 = (this->fields).inventoryController;
    if ((pIVar11 != (InventoryController *)0x0) &&
       (pIVar12 = (pIVar11->fields).inventorySlots, pIVar12 != (InventorySlots *)0x0)) {
      InventorySlots::InventorySlots_Clear(pIVar12,(MethodInfo *)0x0);
      pTVar1 = (this->fields).tab;
      pIVar11 = (this->fields).inventoryController;
      if (pTVar1 != (TabState *)0x0) {
        uVar7 = (pTVar1->fields).currentPage;
        uVar13 = FUN_?((float)(pTVar1->fields).highestSlotIndex /
                               (float)(pTVar1->fields).slotsPrPage);
        uVar14 = 1;
        if (1 < (int)uVar13) {
          uVar14 = uVar13;
        }
        if ((pIVar11 != (InventoryController *)0x0) &&
           (pTVar15 = (pIVar11->fields).tabMenu, pTVar15 != (TabMenuBase *)0x0)) {
          (*(pTVar15->klass->vtable).__unknown_1.methodPtr)
                    (pTVar15,0,(ulonglong)uVar7,(ulonglong)uVar14,
                     (pTVar15->klass->vtable).__unknown_1.method);
          pIVar12 = (pIVar11->fields).inventorySlots;
          if (pIVar12 != (InventorySlots *)0x0) {
            InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                      (pIVar12,uVar7,(pIVar11->fields).numberOfSlots,(MethodInfo *)0x0);
            this_00 = (this->fields).avatarRepository;
            if (this_00 != (AvatarRepository *)0x0) {
              pLVar16 = AvatarRepository::AvatarRepository_GetAvatars(this_00,(MethodInfo *)0x0);
              index = 0;
              if (pLVar16 != (List_1_AvatarRepositoryItem_ *)0x0) {
                while( true ) {
                  if ((pLVar16->fields)._size <= index) {
                    return;
                  }
                  pTVar1 = (this->fields).tab;
                  if ((pTVar1 == (TabState *)0x0) ||
                     (pIVar17 = TabState::TabState_get_SlotRange(pTVar1,(MethodInfo *)0x0),
                     pIVar17 == (Int32__Array *)0x0)) break;
                  if ((int)pIVar17->max_length == 0) {
code_?:
                    FUN_?();
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (pIVar17->vector[0] <= index) {
                    if ((uint)pIVar17->max_length < 2) goto code_?;
                    if (index < pIVar17->vector[1]) {
                      AvatarShopController_AddPreviewObjectForIndex(this,index,(MethodInfo *)0x0);
                    }
                  }
                  index = index + 1;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PurchaseAvatar(AvatarRepositoryItem) */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_PurchaseAvatar
               (AvatarShopController *this,AvatarRepositoryItem *item,MethodInfo *method)

{
  this_00 = (this->fields).avatarEditModeBodyController;
  if (this_00 == (AvatarEditModeBodyController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AvatarEditModeBodyController___PurchaseAvatar_b__35_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = iRam_? != 0;
  (this_00->fields).purchasingItem = item;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this_00->fields).purchasingItem >> 0xc);
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
                     ((Component *)this_00,(MethodInfo *)0x0);
  this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_02,(Object *)this_00,
             MethodInfo__AvatarEditModeBodyController___PurchaseAvatar_b__35_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar8 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
        this_01 = *(Component **)((longlong)pTVar13->vector + lVar12 + -0x20);
        if (this_01 == (Component *)0x0) goto code_?;
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_01,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar7,(BaseEventData *)0x0,this_02,
                           (pMVar8->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_01,(MethodInfo *)0x0);
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


/* Void UpdateContent() */

void Assembly-CSharp.dll::AvatarShopController::AvatarShopController_UpdateContent
               (AvatarShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AvatarRepositoryItem>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_Root___AvatarShopControl);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewRootTransform;
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
      pTVar1 = (this->fields).previewRootTransform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
                ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
    }
  }
  pGVar2 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  name = StringLiteral_Preview_Root___AvatarShopControl;
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
            (pGVar2,name,(MethodInfo *)0x0);
  if (pGVar2 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar2,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).previewRootTransform = pTVar1;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).previewRootTransform >> 0xc);
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
    pIVar8 = (this->fields).inventoryController;
    if ((pIVar8 != (InventoryController *)0x0) &&
       (pIVar9 = (pIVar8->fields).inventorySlots, pIVar9 != (InventorySlots *)0x0)) {
      InventorySlots::InventorySlots_Clear(pIVar9,(MethodInfo *)0x0);
      pTVar10 = (this->fields).tab;
      pIVar8 = (this->fields).inventoryController;
      if (pTVar10 != (TabState *)0x0) {
        uVar4 = (pTVar10->fields).currentPage;
        uVar11 = FUN_?((float)(pTVar10->fields).highestSlotIndex /
                              (float)(pTVar10->fields).slotsPrPage);
        uVar12 = 1;
        if (1 < (int)uVar11) {
          uVar12 = uVar11;
        }
        if ((pIVar8 != (InventoryController *)0x0) &&
           (pTVar13 = (pIVar8->fields).tabMenu, pTVar13 != (TabMenuBase *)0x0)) {
          (*(pTVar13->klass->vtable).__unknown_1.methodPtr)
                    (pTVar13,0,(ulonglong)uVar4,(ulonglong)uVar12,
                     (pTVar13->klass->vtable).__unknown_1.method);
          pIVar9 = (pIVar8->fields).inventorySlots;
          if (pIVar9 != (InventorySlots *)0x0) {
            InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                      (pIVar9,uVar4,(pIVar8->fields).numberOfSlots,(MethodInfo *)0x0);
            this_00 = (this->fields).avatarRepository;
            if (this_00 != (AvatarRepository *)0x0) {
              pLVar14 = AvatarRepository::AvatarRepository_GetAvatars(this_00,(MethodInfo *)0x0);
              index = 0;
              if (pLVar14 != (List_1_AvatarRepositoryItem_ *)0x0) {
                while( true ) {
                  if ((pLVar14->fields)._size <= index) {
                    return;
                  }
                  pTVar10 = (this->fields).tab;
                  if ((pTVar10 == (TabState *)0x0) ||
                     (pIVar15 = TabState::TabState_get_SlotRange(pTVar10,(MethodInfo *)0x0),
                     pIVar15 == (Int32__Array *)0x0)) break;
                  if ((int)pIVar15->max_length == 0) {
code_?:
                    FUN_?();
                    pcVar16 = (code *)swi(3);
                    (*pcVar16)();
                    return;
                  }
                  if (pIVar15->vector[0] <= index) {
                    if ((uint)pIVar15->max_length < 2) goto code_?;
                    if (index < pIVar15->vector[1]) {
                      AvatarShopController_AddPreviewObjectForIndex(this,index,(MethodInfo *)0x0);
                    }
                  }
                  index = index + 1;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

