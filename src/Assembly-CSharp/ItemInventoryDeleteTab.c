
/* Void Initialize(RawImage, InventoryItem) */

void Assembly-CSharp.dll::ItemInventoryDeleteTab::ItemInventoryDeleteTab_Initialize
               (ItemInventoryDeleteTab *this,RawImage *image,InventoryItem *item,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).previewedItem = item;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).previewedItem >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if ((((image != (RawImage *)0x0) && (this_00 = (this->fields).preview, this_00 != (RawImage *)0x0)
       ) && (UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                       (this_00,(image->fields).m_Texture,(MethodInfo *)0x0),
            item != (InventoryItem *)0x0)) &&
     (pTVar6 = (this->fields).itemName, pTVar6 != (Text *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pTVar6->klass->vtable).set_text.methodPtr)
              (pTVar6,(item->fields).name,(pTVar6->klass->vtable).set_text.method);
    return;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnConfirmation(Boolean, ConfirmationPopup) */

void Assembly-CSharp.dll::ItemInventoryDeleteTab::ItemInventoryDeleteTab_OnConfirmation
               (ItemInventoryDeleteTab *this,bool affirmative,ConfirmationPopup *popup,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
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
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ItemInventoryDeleteTab____c___OnConfirmation_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ItemInventoryDeleteTab____c__DisplayClass5_0___OnConfirmation_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ItemInventoryDeleteTab____c__DisplayClass5_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ItemInventoryDeleteTab____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_item);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (popup != (ConfirmationPopup *)0x0) {
    ConfirmationPopup::ConfirmationPopup_Pop(popup,(MethodInfo *)0x0);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__ItemInventoryDeleteTab____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ItemInventoryDeleteTab____c);
    }
    this_00 = TypeInfo__ItemInventoryDeleteTab____c->static_fields->__9__5_0;
    if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if (*(int *)&(TypeInfo__ItemInventoryDeleteTab____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ItemInventoryDeleteTab____c);
      }
      object = TypeInfo__ItemInventoryDeleteTab____c->static_fields->__9;
      this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                 MethodInfo__ItemInventoryDeleteTab____c___OnConfirmation_b__5_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ItemInventoryDeleteTab____c->static_fields->__9__5_0 = this_00;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&TypeInfo__ItemInventoryDeleteTab____c->static_fields->__9__5_0
                       >> 0xc);
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
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if (affirmative == 0) {
      return;
    }
    object_00 = (Object *)FUN_?();
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pIVar7 = (this->fields).previewedItem;
    if ((pIVar7 != (InventoryItem *)0x0) && (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RemoveItemFromInventory
                (this_01,(pIVar7->fields).itemID,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
           (IEditModeUI *)0x0) &&
         (this_02 = (PlayerShopInventoryRepository *)FUN_?(),
         this_02 != (PlayerShopInventoryRepository *)0x0)) {
        UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
        PlayerShopInventoryRepository_RemoveInventoryItem
                  (this_02,(this->fields).previewedItem,(MethodInfo *)0x0);
        pTVar8 = (this->fields).itemName;
        if ((pTVar8 != (Text *)0x0) &&
           (pOVar9 = (Object__Class *)
                     (*(pTVar8->klass->vtable).get_text.methodPtr)
                               (pTVar8,(pTVar8->klass->vtable).get_text.method),
           object_00 != (Object *)0x0)) {
          bVar6 = iRam_? != 0;
          object_00[1].klass = pOVar9;
          if (bVar6) {
            uVar2 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
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
          pTVar8 = (this->fields).itemName;
          if (pTVar8 != (Text *)0x0) {
            pSVar10 = (String *)
                      (*(pTVar8->klass->vtable).get_text.methodPtr)
                                (pTVar8,(pTVar8->klass->vtable).get_text.method);
            if (((pSVar10 == ::StringLiteral__) ||
                ((((pSVar10 != (String *)0x0 && (::StringLiteral__ != (String *)0x0)) &&
                  ((pSVar10->fields)._stringLength == (::StringLiteral__->fields)._stringLength)) &&
                 (bVar11 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                    ((uint8_t *)&(pSVar10->fields)._firstChar,
                                     (uint8_t *)&(::StringLiteral__->fields)._firstChar,
                                     (longlong)(pSVar10->fields)._stringLength * 2,(MethodInfo *)0x0
                                    ), bVar11 != 0)))) &&
               (bVar6 = iRam_? != 0,
               object_00[1].klass = (Object__Class *)StringLiteral_item, bVar6)) {
              uVar2 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
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
            pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_03,object_00,
                       MethodInfo__ItemInventoryDeleteTab____c__DisplayClass5_0___OnConfirmation_b__1_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar1,(BaseEventData *)0x0,this_03,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                      );
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnRemoveFromInventory() */

void Assembly-CSharp.dll::ItemInventoryDeleteTab::ItemInventoryDeleteTab_OnRemoveFromInventory
               (ItemInventoryDeleteTab *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&
                  MethodInfo__ItemInventoryDeleteTab___OnRemoveFromInventory_b__4_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__ItemInventoryDeleteTab___OnRemoveFromInventory_b__4_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar2 = 
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
    if ((pMVar2->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar2);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar3 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar3->fields)._size;
    uVar5 = 0;
    if (0 < lVar4) {
      lVar6 = 0;
      lVar7 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar3 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar3 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar3->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pTVar9 = (pLVar3->fields)._items;
        if (pTVar9 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar9->max_length <= uVar5) {
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar9->vector + lVar7 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_01,
                           (pMVar2->field7_0x38).rgctx_data[1].method);
        if (bVar10 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 8;
      } while (lVar6 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <OnRemoveFromInventory>b__4_0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::ItemInventoryDeleteTab::
     ItemInventoryDeleteTab__OnRemoveFromInventory_b__4_0
               (ItemInventoryDeleteTab *this,IModalPopupCreator *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IModalPopupCreator);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ItemInventoryDeleteTab__OnConfirmation_bool__ConfirmationPopup_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Remove);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_This_will_remove_the_current_ite);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_This_will_remove_the_current_ite,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_System_Boolean_System_Object_ *)
            FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_ConfirmationPopup>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]::
  UnityAction_2_System_Boolean_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__ItemInventoryDeleteTab__OnConfirmation_bool__ConfirmationPopup_,
             (MethodInfo *)0x0);
  TM::TM__(StringLiteral_Remove,(MethodInfo *)0x0);
  if (x != (IModalPopupCreator *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

