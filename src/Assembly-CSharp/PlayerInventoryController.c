
/* Void Activate(UIPushOption) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_Activate
               (PlayerInventoryController *this,UIPushOption__Enum options,MethodInfo *method)

{
  pIStack_1 = (Il2CppClass *)0xffffffff;
  pIStack_2 = (Il2CppInteropData *)&DAT_?;
  p_Stack_10 = (Il2CppMetadataTypeHandle)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &p_Stack_10;
  pIStack_3 = (Il2CppGenericClass *)&stack0xffffff98;
  pIVar4 = (Il2CppGenericClass *)&stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__get_Current__
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_TabState>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_TabState>__get_Value__
                   );
    func_?(&
                    InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__PlayerInventoryController__InventoryChanged__);
    func_?(&MethodInfo__PlayerInventoryController__PageTurned_int_);
    func_?(&MethodInfo__PlayerInventoryController__SlotChanged_int__int_);
    func_?(&MethodInfo__PlayerInventoryController__TabSelected_int_);
    func_?(&
                    MethodInfo__PlayerInventoryController____c___Activate_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__PlayerInventoryController____c__DisplayClass20_0___Activate_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PlayerInventoryController____c__DisplayClass20_0);
    func_?(&TypeInfo__PlayerInventoryController____c);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int,_int>);
    cRam_? = '\x01';
    pIVar4 = pIStack_3;
  }
  pIStack_3 = pIVar4;
  method_00 = TypeInfo__PlayerInventoryController____c__DisplayClass20_0;
  pIVar5 = (Il2CppClass *)func_?();
  pIStack_6 = pIVar5;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pIVar5,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pIStack_7 = pIVar5;
  if (pIVar5 == (Il2CppClass *)0x0) {
code_?:
    func_?();
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    (((ExecuteEvents_EventFunction_1_IUIStack___Fields *)&pIVar5->name)->_)._.method_ptr = this;
    func_?();
    pIVar5->namespaze = (char *)options;
    ppIVar8 = &(this->fields).inventoryController;
    pIStack_9 = (Il2CppClass *)*ppIVar8;
    pIStack_10 = (Il2CppClass *)ppIVar8;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pIStack_9,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar11 != 0) goto code_?;
    method_01 = (MethodInfo *)&UNK_?;
    PlayerInventoryController_UpdatePageCount(this,(MethodInfo *)0x0);
    pIVar12 = (this->fields).inventoryControllerPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pIVar12 = (InventoryController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pIVar12,
                        InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                       );
    *ppIVar8 = pIVar12;
    func_?();
    pIStack_9 = (Il2CppClass *)*ppIVar8;
    if (pIStack_9 == (Il2CppClass *)0x0) goto code_?;
    pIVar5 = pIStack_9->castClass;
    pUVar13 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar13,(Object *)this,MethodInfo__PlayerInventoryController__TabSelected_int_,
               (MethodInfo *)0x0);
    pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pIVar5,(Delegate *)pUVar13,(MethodInfo *)0x0);
    if (pDVar14 == (Delegate *)0x0) {
      pIStack_9->castClass = (Il2CppClass *)0x0;
code_?:
      func_?();
      pIStack_9 = (Il2CppClass *)pIStack_10->image;
      if (pIStack_9 == (Il2CppClass *)0x0) goto code_?;
      pIVar5 = pIStack_9->element_class;
      pUVar13 = (UnityAction_1_System_Int32Enum_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar13,(Object *)this,MethodInfo__PlayerInventoryController__PageTurned_int_,
                 (MethodInfo *)0x0);
      pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pIVar5,(Delegate *)pUVar13,(MethodInfo *)0x0);
      if (pDVar14 == (Delegate *)0x0) {
        pIStack_9->element_class = (Il2CppClass *)0x0;
      }
      else {
        pIVar5 = (Il2CppClass *)func_?();
        if (pIVar5 == (Il2CppClass *)0x0) goto code_?;
        pIStack_9->element_class = pIVar5;
        pIStack_9 = (Il2CppClass *)TypeInfo__UnityEngine__Events__UnityAction<int>;
        iVar15 = func_?();
        if (iVar15 == 0) goto code_?;
      }
      func_?();
      pIStack_9 = (Il2CppClass *)pIStack_10->image;
      if (pIStack_9 == (Il2CppClass *)0x0) goto code_?;
      pIVar5 = pIStack_9->declaringType;
      this_01 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
      UnityAction_2_System_Int32_System_Int32___ctor
                (this_01,(Object *)this,MethodInfo__PlayerInventoryController__SlotChanged_int__int_
                 ,(MethodInfo *)0x0);
      pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pIVar5,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar14 == (Delegate *)0x0) {
        pIStack_9->declaringType = (Il2CppClass *)0x0;
code_?:
        func_?();
        pIStack_9 = (Il2CppClass *)(this->fields).repository;
        if (pIStack_9 == (Il2CppClass *)0x0) goto code_?;
        pDVar14 = (Delegate *)pIStack_9->namespaze;
        this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_02,(Object *)this,MethodInfo__PlayerInventoryController__InventoryChanged__,
                   (MethodInfo *)0x0);
        pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar14,(Delegate *)this_02,(MethodInfo *)0x0);
        if (pDVar14 == (Delegate *)0x0) {
          pIStack_9->namespaze = (char *)0x0;
code_?:
          func_?();
          if (pIStack_10->image != (Il2CppImage *)0x0) {
            InventoryController::InventoryController_Initialize
                      ((InventoryController *)pIStack_10->image,(this->fields).numberOfSlotsPrPage,
                       (MethodInfo *)0x0);
            this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabs;
            if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
              pDVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        UInt32,System::Object]::
                        Dictionary_2_System_UInt32_System_Object__GetEnumerator
                                  ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                    *)&stack0xffffffa4,this_00,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                                  );
              pIStack_17 = (Il2CppClass *)0x0;
              DStack_18._dictionary = pDVar16->_dictionary;
              DStack_18._version = pDVar16->_version;
              DStack_18._index = pDVar16->_index;
              DStack_18._current.key = (pDVar16->_current).key;
              DStack_18._16_8_ = *(undefined8 *)&(pDVar16->_current).value;
              pIStack_1 = (Il2CppClass *)0x1;
              pIStack_9 = (Il2CppClass *)&DStack_18;
              while( true ) {
                bVar11 = mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                        Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                  (&DStack_18,
                                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__MoveNext__
                                  );
                if (bVar11 == 0) break;
                pIVar12 = (this->fields).inventoryController;
                if ((DStack_18._current.value == (void *)0x0) ||
                   (pIVar12 == (InventoryController *)0x0)) goto code_?;
                InventoryController::InventoryController_AddTab
                          (pIVar12,DStack_18._current.key,
                           (String *)*(Il2CppClass **)((int)DStack_18._current.value + 0xc),
                           (MethodInfo *)0x0);
              }
              pIStack_1 = (Il2CppClass *)0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&DStack_18,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__Dispose__
                         ,method_01);
              pIStack_1 = (Il2CppClass *)0xffffffff;
              pIStack_9 = (Il2CppClass *)
                           UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
              if ((TypeInfo__PlayerInventoryController____c->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pIVar5 = (Il2CppClass *)
                       TypeInfo__PlayerInventoryController____c->static_fields->__9__20_0;
              if (pIVar5 == (Il2CppClass *)0x0) {
                if ((TypeInfo__PlayerInventoryController____c->_1).cctor_finished_or_no_cctor == 0)
                {
                  func_?();
                }
                object = TypeInfo__PlayerInventoryController____c->static_fields->__9;
                pIVar5 = (Il2CppClass *)func_?();
                pIStack_7 = pIVar5;
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)pIVar5,(Object *)object,
                           MethodInfo__PlayerInventoryController____c___Activate_b__20_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                TypeInfo__PlayerInventoryController____c->static_fields->__9__20_0 =
                     (ExecuteEvents_EventFunction_1_IUIStack_ *)pIVar5;
                func_?();
              }
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        ((GameObject *)pIStack_9,(BaseEventData *)0x0,
                         (ExecuteEvents_EventFunction_1_System_Object_ *)pIVar5,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
              callbackFunction = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                         (Object *)pIStack_6,
                         MethodInfo__PlayerInventoryController____c__DisplayClass20_0___Activate_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (root,(BaseEventData *)0x0,callbackFunction,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
code_?:
              *unaff_FS_OFFSET = p_Stack_10;
              return;
            }
          }
          goto code_?;
        }
        pDVar19 = (Delegate *)0x0;
        if ((Action__Class *)pDVar14->klass == TypeInfo__System__Action) {
          pDVar19 = pDVar14;
        }
        if (pDVar19 != (Delegate *)0x0) {
          pIStack_9->namespaze = (char *)pDVar19;
          pDVar19 = (Delegate *)0x0;
          if ((Action__Class *)pDVar14->klass == TypeInfo__System__Action) {
            pDVar19 = pDVar14;
          }
          if (pDVar19 != (Delegate *)0x0) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
      pIVar5 = (Il2CppClass *)func_?();
      if (pIVar5 == (Il2CppClass *)0x0) goto code_?;
      pIStack_9->declaringType = pIVar5;
      pIStack_9 = (Il2CppClass *)TypeInfo__UnityEngine__Events__UnityAction<int,_int>;
      iVar15 = func_?();
      if (iVar15 != 0) goto code_?;
      goto code_?;
    }
    pIVar5 = (Il2CppClass *)func_?();
    if (pIVar5 != (Il2CppClass *)0x0) {
      pIStack_9->castClass = pIVar5;
      pIStack_9 = (Il2CppClass *)TypeInfo__UnityEngine__Events__UnityAction<int>;
      iVar15 = func_?();
      if (iVar15 == 0) {
        func_?();
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void ActivateAtCategoryWithSlot(UIPushOption, Int32, Int32) */

void Assembly-CSharp.dll::PlayerInventoryController::
     PlayerInventoryController_ActivateAtCategoryWithSlot
               (PlayerInventoryController *this,UIPushOption__Enum options,int32_t categoryId,
               int32_t slotPosition,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Value__
                   );
    cRam_? = '\x01';
  }
  PlayerInventoryController_Activate(this,options,(MethodInfo *)0x0);
  this_00 = (this->fields).repository;
  if (this_00 != (PlayerShopInventoryRepository *)0x0) {
    this_03 = (Dictionary_2_System_Int32Enum_System_Object_ *)
              RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_get_RadiusTickType
                        ((TerrainGizmoLookAndFeel *)this_00,(MethodInfo *)0x0);
    if (this_03 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
      a = (String *)
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__get_Item
                    (this_03,categoryId,
                     MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                    );
      this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabsNonLocalized;
      if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            &stack0xffffffa4,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__GetEnumerator__
                           );
        uVar5 = *(undefined8 *)&(pDVar4->_current).value;
        uStack_1 = 1;
        uVar6 = (pDVar4->_current).key;
        do {
          uVar7 = uVar6;
          bVar8 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                             &stack0xffffffbc,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                            );
          pMVar9 = (MethodInfo *)uVar5;
          if (bVar8 == 0) goto code_?;
          uVar6 = 0;
          bVar8 = mscorlib.dll::System::String::String_op_Equality
                            (a,(String *)pMVar9,(MethodInfo *)0x0);
          pMVar9 = (MethodInfo *)uVar5;
        } while (bVar8 == 0);
        (this->fields).selectedTab = uVar7;
code_?:
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffbc,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__Dispose__
                   ,pMVar9);
        uStack_1 = 0xffffffff;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_02 = (this->fields).tabs;
        if (this_02 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
          pMVar9 = (MethodInfo *)&UNK_?;
          this_04 = (TabState *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_02,
                               (this->fields).selectedTab,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              );
          if (this_04 != (TabState *)0x0) {
            func_?();
            page = func_?();
            TabState::TabState_SetPage(this_04,page,pMVar9);
            if ((this->fields).inventoryController != (InventoryController *)0x0) {
              InventoryController::InventoryController_HighlightSlot
                        ((this->fields).inventoryController,
                         slotPosition % (this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
              PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void DragFailed() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_DragFailed
               (PlayerInventoryController *this,MethodInfo *method)

{
  ppPVar1 = &(this->fields).draggedPreviewItem;
  *ppPVar1 = (PlayerInventoryPreviewItem *)0x0;
  func_?(ppPVar1,0);
  PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
  return;
}


/* MVWorldObjectClient GetWorldObjectFromItemData(InventoryItem) */

MVWorldObjectClient *
Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_GetWorldObjectFromItemData
          (InventoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__BytePacker);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__KoGaMaPackageClient);
    cRam_? = '\x01';
  }
  if (item != (InventoryItem *)0x0) {
    buffer = (item->fields).data;
    this_00 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this_00,buffer,(MethodInfo *)0x0);
    this_01 = (KoGaMaPackageClient *)func_?(TypeInfo__KoGaMaPackageClient);
    KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_01,this_00,0,(MethodInfo *)0x0);
    if (this_01 != (KoGaMaPackageClient *)0x0) {
      KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_01,(MethodInfo *)0x0);
      this = (this_01->fields).worldObjects;
      if (this != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        pMVar1 = (MVWorldObjectClient *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this,
                            (this_01->fields).worldObjectRoot,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           );
        return pMVar1;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar2)();
  return pMVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_Initialize
               (PlayerInventoryController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__set_Item_int__System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__set_Item_int__TabState_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__get_Current__
                   );
    func_?(&TypeInfo__IEditModeUI);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                   );
    func_?(&TypeInfo__TabState);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar6 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pIVar6 != (IEditModeUI *)0x0) {
    pPVar7 = (PlayerShopInventoryRepository *)func_?(4,TypeInfo__IEditModeUI,pIVar6);
    method_00 = (MethodInfo *)&(this->fields).repository;
    *(PlayerShopInventoryRepository **)method_00 = pPVar7;
    ppPStack_8 = (PlayerShopInventoryRepository **)method_00;
    func_?(method_00,pPVar7);
    pPVar7 = (this->fields).repository;
    (this->fields).selectedTab = 1;
    key_00 = (MethodInfo *)0x1;
    pMStack_9 = (MethodInfo *)0x1;
    if (pPVar7 != (PlayerShopInventoryRepository *)0x0) {
      pDStack_10 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_get_RadiusTickType
                                ((TerrainGizmoLookAndFeel *)pPVar7,(MethodInfo *)0x0);
      if (pDStack_10 !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                            (pDStack_10,
                             MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                            );
        if (this_01 !=
            (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          pDVar11 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                   StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                             (&DStack_12,
                              (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)this_01,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                             );
          pTStack_13 = (TabState__Class *)pDVar11->_currentValue;
          DStack_12._version = 0;
          uStack_1 = 1;
          DStack_12._currentValue = (Object *)&stack0xffffffac;
          while( true ) {
            bVar14 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                *)&stack0xffffffac,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                              );
            if (bVar14 == 0) break;
            pTStack_15 = pTStack_13;
            pDStack_16 = (this->fields).tabsNonLocalized;
            pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Object]::
                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                               ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_10,
                                (Int32Enum__Enum)pTStack_13,
                                MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                               );
            if (pDStack_16 == (Dictionary_2_System_Int32_System_String_ *)0x0)
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__set_Item
                      ((Dictionary_2_System_Int32_System_Object_ *)pDStack_16,(int32_t)key_00,pOVar17
                       ,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__set_Item_int__System__String_
                      );
            pDStack_18 = (this->fields).tabs;
            key = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDStack_10,
                             (Int32Enum__Enum)pTStack_15,
                             MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                            );
            pSStack_19 = TM::TM__(key,(MethodInfo *)0x0);
            pDStack_16 = (Dictionary_2_System_Int32_System_String_ *)
                         (this->fields).numberOfSlotsPrPage;
            pTStack_13 = TypeInfo__TabState;
            this_02 = (TabState *)func_?();
            TabState::TabState__ctor
                      (this_02,(int32_t)pTStack_15,pSStack_19,(int32_t)pDStack_16,(MethodInfo *)0x0)
            ;
            if (*ppPStack_8 == (PlayerShopInventoryRepository *)0x0) goto code_?;
            iVar20 = UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
                    PlayerShopInventoryRepository_HighestSlotIndex
                              (*ppPStack_8,(InventoryCategoryType__Enum)pTStack_15,
                               (MethodInfo *)0x0);
            pMVar21 = pMStack_9;
            if (this_02 == (TabState *)0x0) goto code_?;
            (this_02->fields).highestSlotIndex = iVar20;
            if (pDStack_18 == (Dictionary_2_System_Int32_TabState_ *)0x0) goto code_?;
            method_00 = key_00;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__set_Item
                      ((Dictionary_2_System_Int32_System_Object_ *)pDStack_18,(int32_t)pMStack_9,
                       (Object *)this_02,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__set_Item_int__TabState_
                      );
            key_00 = (MethodInfo *)((int)&pMVar21->methodPointer + 1);
            pMStack_9 = key_00;
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffac,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                     ,method_00);
          uStack_1 = 0xffffffff;
          this_00 = (this->fields).tabs;
          if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
            pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)this_00,1,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                               );
            if (pOVar17 != (Object *)0x0) {
              pOVar17[2].klass =
                   (Object__Class *)
                   ((int)&((pOVar17[2].klass)->_0).image + (this->fields).numberOfSlotsPrPage);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void InventoryChanged() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_InventoryChanged
               (PlayerInventoryController *this,MethodInfo *method)

{
  PlayerInventoryController_UpdatePageCount(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Clear__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVWorldObjectClient);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Preview_Root___PlayerInventory);
    cRam_? = '\x01';
  }
  ppTVar1 = &(in_stack_2->fields).previewRootTransform;
  pTVar3 = *ppTVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)pTVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    if (*ppTVar1 == (Transform *)0x0) goto code_?;
    pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)*ppTVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar5,(MethodInfo *)0x0);
  }
  pGVar5 = (GameObject *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar5,StringLiteral_Preview_Root___PlayerInventory,(MethodInfo *)0x0);
  if (pGVar5 != (GameObject *)0x0) {
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar5,(MethodInfo *)0x0);
    *ppTVar1 = pTVar3;
    func_?(ppTVar1,pTVar3);
    iVar6 = 0;
    pLVar7 = (in_stack_2->fields).previewedObjects;
    while (pLVar7 != (List_1_MVWorldObjectClient_ *)0x0) {
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (in_stack_2->fields).previewedObjects;
      if ((pLVar7->fields)._size <= iVar6) {
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        break;
        iVar6 = (this_00->fields)._size;
        piVar8 = &(this_00->fields)._version;
        *piVar8 = *piVar8 + 1;
        (this_00->fields)._size = 0;
        if (0 < iVar6) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(this_00->fields)._items,0,iVar6,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__InventoryItemDragHandler);
          cRam_? = '\x01';
        }
        if (TypeInfo__InventoryItemDragHandler->static_fields->dragging != 0) {
          pPVar9 = (in_stack_2->fields).draggedPreviewItem;
          if ((pPVar9 == (PlayerInventoryPreviewItem *)0x0) ||
             (pIVar10 = (pPVar9->fields).item, pIVar10 == (InventoryItem *)0x0)) break;
          if ((pIVar10->fields).hasData != 0) {
            pLVar7 = (in_stack_2->fields).previewedObjects;
            if (pLVar7 == (List_1_MVWorldObjectClient_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pLVar7,
                       (Object *)(in_stack_2->fields).worldObjectDataCopy,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                      );
            pMVar11 = (in_stack_2->fields).worldObjectDataCopy;
            if ((pMVar11 == (MVWorldObjectClient *)0x0) ||
               (pTVar3 = (pMVar11->fields).transform, pTVar3 == (Transform *)0x0)) break;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                      (pTVar3,(in_stack_2->fields).previewRootTransform,(MethodInfo *)0x0);
            pIVar12 = (in_stack_2->fields).draggedPreview;
            if ((pIVar12 == (InventoryItemPreviewer *)0x0) ||
               ((this_01 = (pIVar12->fields).previewCam, this_01 == (Camera *)0x0 ||
                (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)this_01,(MethodInfo *)0x0),
                pTVar3 == (Transform *)0x0)))) break;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                      (pTVar3,(in_stack_2->fields).previewRootTransform,(MethodInfo *)0x0);
          }
        }
        pIVar13 = (in_stack_2->fields).inventoryController;
        if (pIVar13 != (InventoryController *)0x0) {
          InventoryController::InventoryController_Clear(pIVar13,(MethodInfo *)0x0);
          this_02 = (in_stack_2->fields).tabs;
          if (this_02 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
            tabState = (TabState *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)this_02,
                                  (in_stack_2->fields).selectedTab,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                 );
            pIVar13 = (in_stack_2->fields).inventoryController;
            tabId = (in_stack_2->fields).selectedTab;
            if (tabState != (TabState *)0x0) {
              this_03 = (TabState *)(tabState->fields).currentPage;
              maxPages = TabState::TabState_get_MaxPages(this_03,(MethodInfo *)0x0);
              if (pIVar13 != (InventoryController *)0x0) {
                InventoryController::InventoryController_SelectTab
                          (pIVar13,tabId,(int32_t)this_03,maxPages,(MethodInfo *)0x0);
                this_04 = (in_stack_2->fields).tabsNonLocalized;
                this_05 = (in_stack_2->fields).repository;
                if ((this_04 != (Dictionary_2_System_Int32_System_String_ *)0x0) &&
                   (s = (String *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)this_04,
                                   (in_stack_2->fields).selectedTab,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                                  ), this_05 != (PlayerShopInventoryRepository *)0x0)) {
                  pLVar14 = UGUI::Desktop::Scripts::EditMode::Inventories::
                            PlayerShopInventoryRepository::
                            PlayerShopInventoryRepository_GetInventoryItemsInCategorySlow
                                      (this_05,s,(MethodInfo *)0x0);
                  (in_stack_2->fields).items = pLVar14;
                  func_?();
                  if ((tabState->fields)._TabID_k__BackingField != 1) {
                    PlayerInventoryController_UpdateSlots
                              (in_stack_2,tabState,(MethodInfo *)0x0);
                    return;
                  }
                  PlayerInventoryController_UpdateSlotsWithDragAndDrop
                            (in_stack_2,tabState,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        break;
      }
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      break;
      wo = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (this_00,iVar6,
                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                     );
      if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive
                ((MVWorldObjectClient *)wo,(MethodInfo *)0x0);
      iVar6 = iVar6 + 1;
      pLVar7 = (in_stack_2->fields).previewedObjects;
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void ItemDataLoaded(PlayerInventoryPreviewItem, InventoryItem) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_ItemDataLoaded
               (PlayerInventoryController *this,PlayerInventoryPreviewItem *itemPreview,
               InventoryItem *inventoryItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    cRam_? = '\x01';
  }
  woPreviewObject =
       PlayerInventoryController_GetWorldObjectFromItemData(inventoryItem,(MethodInfo *)0x0);
  this_00 = (this->fields).previewedObjects;
  if (this_00 != (List_1_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)woPreviewObject,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
              );
    if (itemPreview != (PlayerInventoryPreviewItem *)0x0) {
      PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_LoadItemPreviewer
                (itemPreview,(this->fields).previewRootTransform,inventoryItem,woPreviewObject,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_OnPop
               (PlayerInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Clear__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVWorldObjectClient);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__PlayerInventoryController__InventoryChanged__);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).tempPreviewRoot;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
code_?:
    pTVar1 = (this->fields).previewRootTransform;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pTVar1 = (this->fields).previewRootTransform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar3,(MethodInfo *)0x0);
    }
    pPVar4 = (this->fields).repository;
    if (pPVar4 != (PlayerShopInventoryRepository *)0x0) {
      pAVar5 = (pPVar4->fields).OnInventoryChanged;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__PlayerInventoryController__InventoryChanged__,
                 (MethodInfo *)0x0);
      pAVar5 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar5,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pAVar5 == (Action *)0x0) {
        (pPVar4->fields).OnInventoryChanged = (Action *)0x0;
      }
      else {
        pAVar6 = (Action *)0x0;
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar5;
        }
        if (pAVar6 == (Action *)0x0) {
          func_?();
          goto code_?;
        }
        (pPVar4->fields).OnInventoryChanged = pAVar6;
        pAVar6 = (Action *)0x0;
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar5;
        }
        if (pAVar6 == (Action *)0x0) goto code_?;
      }
      func_?();
      iVar7 = 0;
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).previewedObjects;
      while (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        if ((this_00->fields)._size <= iVar7) {
          pLVar8 = (this->fields).previewedObjects;
          if (pLVar8 != (List_1_MVWorldObjectClient_ *)0x0) {
            iVar7 = (pLVar8->fields)._size;
            piVar9 = &(pLVar8->fields)._version;
            *piVar9 = *piVar9 + 1;
            (pLVar8->fields)._size = 0;
            if (0 < iVar7) {
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(pLVar8->fields)._items,0,iVar7,(MethodInfo *)0x0);
            }
            return;
          }
          break;
        }
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        break;
        wo = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (this_00,iVar7,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                       );
        if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive
                  ((MVWorldObjectClient *)wo,(MethodInfo *)0x0);
        iVar7 = iVar7 + 1;
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).previewedObjects;
      }
    }
  }
  else {
    pTVar1 = (this->fields).tempPreviewRoot;
    if (pTVar1 != (Transform *)0x0) {
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar3,(MethodInfo *)0x0);
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OpenPage(UIPushOption, Int32, Int32) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_OpenPage
               (PlayerInventoryController *this,UIPushOption__Enum options,int32_t categoryId,
               int32_t slotPosition,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Value__
                   );
    cRam_? = '\x01';
  }
  PlayerInventoryController_Activate(this,options,(MethodInfo *)0x0);
  this_00 = (this->fields).repository;
  if (this_00 != (PlayerShopInventoryRepository *)0x0) {
    this_03 = (Dictionary_2_System_Int32Enum_System_Object_ *)
              RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_get_RadiusTickType
                        ((TerrainGizmoLookAndFeel *)this_00,(MethodInfo *)0x0);
    if (this_03 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
      a = (String *)
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__get_Item
                    (this_03,categoryId,
                     MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                    );
      this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabsNonLocalized;
      if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            &stack0xffffffa4,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__GetEnumerator__
                           );
        uVar5 = *(undefined8 *)&(pDVar4->_current).value;
        uStack_1 = 1;
        uVar6 = (pDVar4->_current).key;
        do {
          uVar7 = uVar6;
          bVar8 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                             &stack0xffffffbc,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                            );
          method_00 = (MethodInfo *)uVar5;
          if (bVar8 == 0) goto code_?;
          uVar6 = 0;
          bVar8 = mscorlib.dll::System::String::String_op_Equality
                            (a,(String *)method_00,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)uVar5;
        } while (bVar8 == 0);
        (this->fields).selectedTab = uVar7;
code_?:
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffbc,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__Dispose__
                   ,method_00);
        uStack_1 = 0xffffffff;
        iVar9 = (this->fields).numberOfSlotsPrPage;
        fVar10 = (float)slotPosition + _UNK_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_02 = (this->fields).tabs;
        if (this_02 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
          this_04 = (TabState *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_02,
                               (this->fields).selectedTab,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              );
          if (this_04 != (TabState *)0x0) {
            func_?();
            page = func_?();
            TabState::TabState_SetPage(this_04,page,SUB84((double)(fVar10 / (float)iVar9),0));
            PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OpenTab(UIPushOption, Int32) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_OpenTab
               (PlayerInventoryController *this,UIPushOption__Enum options,int32_t categoryId,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Value__
                   );
    cRam_? = '\x01';
  }
  PlayerInventoryController_Activate(this,options,(MethodInfo *)0x0);
  this_00 = (this->fields).repository;
  if (this_00 != (PlayerShopInventoryRepository *)0x0) {
    this_03 = (Dictionary_2_System_Int32Enum_System_Object_ *)
              RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_get_RadiusTickType
                        ((TerrainGizmoLookAndFeel *)this_00,(MethodInfo *)0x0);
    if (this_03 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
      a = (String *)
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__get_Item
                    (this_03,categoryId,
                     MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                    );
      this_01 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabsNonLocalized;
      if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                 Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                            &stack0xffffffa4,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__GetEnumerator__
                           );
        uVar5 = *(undefined8 *)&(pDVar4->_current).value;
        uStack_1 = 1;
        uVar6 = (pDVar4->_current).key;
        do {
          uVar7 = uVar6;
          bVar8 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                             &stack0xffffffbc,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                            );
          method_00 = (MethodInfo *)uVar5;
          if (bVar8 == 0) goto code_?;
          uVar6 = 0;
          bVar8 = mscorlib.dll::System::String::String_op_Equality
                            (a,(String *)method_00,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)uVar5;
        } while (bVar8 == 0);
        (this->fields).selectedTab = uVar7;
code_?:
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&stack0xffffffbc,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__Dispose__
                   ,method_00);
        uStack_1 = 0xffffffff;
        fVar9 = _UNK_? / (float)(this->fields).numberOfSlotsPrPage;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_02 = (this->fields).tabs;
        if (this_02 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
          this_04 = (TabState *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_02,
                               (this->fields).selectedTab,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              );
          if (this_04 != (TabState *)0x0) {
            func_?();
            page = func_?();
            TabState::TabState_SetPage(this_04,page,SUB84((double)fVar9,0));
            PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_PageTurned
               (PlayerInventoryController *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_temp_Root___PlayerInventory);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tabs;
  if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
    this_01 = (TabState *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                         (this->fields).selectedTab,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                        );
    if (this_01 != (TabState *)0x0) {
      bVar1 = TabState::TabState_UpdatePage(this_01,dir,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pTVar2 = (this->fields).tempPreviewRoot;
        ppTVar3 = &(this->fields).tempPreviewRoot;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          pTVar2 = *ppTVar3;
          if (pTVar2 == (Transform *)0x0) goto code_?;
          pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar2,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)pGVar4,(MethodInfo *)0x0);
        }
        pGVar4 = (GameObject *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (pGVar4,StringLiteral_temp_Root___PlayerInventory,(MethodInfo *)0x0);
        if (pGVar4 == (GameObject *)0x0) goto code_?;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar4,(MethodInfo *)0x0);
        *ppTVar3 = pTVar2;
        func_?();
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__InventoryItemDragHandler->static_fields->dragging != 0) {
          PlayerInventoryController_PreserveDraggedItemAcrossPages(this,(MethodInfo *)0x0);
        }
        PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void PreserveDraggedItemAcrossPages() */

void Assembly-CSharp.dll::PlayerInventoryController::
     PlayerInventoryController_PreserveDraggedItemAcrossPages
               (PlayerInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVWorldObjectClient);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).draggedPreviewItem;
  if ((pPVar1 != (PlayerInventoryPreviewItem *)0x0) &&
     (item = (pPVar1->fields).item, item != (InventoryItem *)0x0)) {
    if ((item->fields).hasData == 0) {
      return;
    }
    pMVar2 = PlayerInventoryController_GetWorldObjectFromItemData(item,(MethodInfo *)0x0);
    ppMVar3 = &(this->fields).worldObjectDataCopy;
    *ppMVar3 = pMVar2;
    func_?(ppMVar3,pMVar2);
    pPVar1 = (this->fields).draggedPreviewItem;
    if (pPVar1 != (PlayerInventoryPreviewItem *)0x0) {
      pIVar4 = (pPVar1->fields).objectPreviewer;
      ppIVar5 = &(this->fields).draggedPreview;
      *ppIVar5 = pIVar4;
      func_?(ppIVar5,pIVar4);
      pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).previewedObjects;
      index = 0;
      while (pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        if ((pLVar6->fields)._size <= index) {
          pMVar2 = (this->fields).worldObjectDataCopy;
          if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MVWorldObjectClient);
          }
          MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(pMVar2,(MethodInfo *)0x0);
          return;
        }
        pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).previewedObjects;
        if ((pLVar6 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar6,index,
                               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                              ), RVar7 == (RegexCharClass_SingleRange)0x0)) break;
        iVar8 = *(int *)((int)RVar7 + 0x80);
        pIVar4 = (this->fields).draggedPreview;
        if ((pIVar4 == (InventoryItemPreviewer *)0x0) ||
           (this_00 = (pIVar4->fields)._PreviewGameObject_k__BackingField,
           this_00 == (GameObject *)0x0)) break;
        iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                           ((Object_1 *)this_00,(MethodInfo *)0x0);
        pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).previewedObjects;
        if (iVar8 == iVar9) {
          if (((pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
              && (RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (pLVar6,index,
                                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                    ), RVar7 != (RegexCharClass_SingleRange)0x0)) &&
             (*(Transform **)((int)RVar7 + 0x90) != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                      (*(Transform **)((int)RVar7 + 0x90),(this->fields).tempPreviewRoot,
                       (MethodInfo *)0x0);
            pIVar4 = (this->fields).draggedPreview;
            if (((pIVar4 != (InventoryItemPreviewer *)0x0) &&
                (this_01 = (pIVar4->fields).previewCam, this_01 != (Camera *)0x0)) &&
               (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this_01,(MethodInfo *)0x0),
               this_03 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                        (this_03,(this->fields).tempPreviewRoot,(MethodInfo *)0x0);
              pMVar2 = (this->fields).worldObjectDataCopy;
              if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(pMVar2,(MethodInfo *)0x0);
              pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       (this->fields).previewedObjects;
              if (pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) {
                RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                  (pLVar6,index,
                                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                  );
                ppMVar3 = &(this->fields).worldObjectDataCopy;
                *ppMVar3 = (MVWorldObjectClient *)RVar7;
                func_?(ppMVar3,RVar7);
                this_02 = (this->fields).previewedObjects;
                if (this_02 != (List_1_MVWorldObjectClient_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__RemoveAt
                            ((List_1_System_Object_ *)this_02,index,
                             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                            );
                  return;
                }
              }
            }
          }
          break;
        }
        index = index + 1;
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetCurrentDragTarget(GameObject) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_SetCurrentDragTarget
               (PlayerInventoryController *this,GameObject *draggingGameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (draggingGameObject != (GameObject *)0x0) {
    pPVar1 = (PlayerInventoryPreviewItem *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (draggingGameObject,
                        PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                       );
    (this->fields).draggedPreviewItem = pPVar1;
    func_?();
    return;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SlotChanged(Int32, Int32) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_SlotChanged
               (PlayerInventoryController *this,int32_t from,int32_t to,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__InventoryItemDragHandler);
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_);
    func_?(&StringLiteral_destination_isDefaultInvItem);
    cRam_? = '\x01';
  }
  if (from == to) {
    return;
  }
  index = 0;
  source.First = 0;
  source.Last = 0;
  RStack_1.First = 0;
  RStack_1.Last = 0;
  pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)(this->fields).items
  ;
  if (pLVar2 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    while (iVar3 = to, index < (pLVar2->fields)._size) {
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                            ), RVar4 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).items;
      if (*(int *)((int)RVar4 + 0x3c) == from) {
        if (pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        source = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar2,index,
                            MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                           );
      }
      else {
        if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar2,index,
                               MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                              ), RVar4 == (RegexCharClass_SingleRange)0x0)) goto code_?;
        if (*(int *)((int)RVar4 + 0x3c) == to) {
          pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).items;
          if (pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          goto code_?;
          RStack_1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar2,index,
                                MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                               );
        }
      }
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).items;
      index = index + 1;
      if (pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
    }
    if (RStack_1 == (RegexCharClass_SingleRange)0x0) {
      if (source != (RegexCharClass_SingleRange)0x0) {
        *(int32_t *)((int)source + 0x3c) = to;
        pDVar5 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)func_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                   );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (pDVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        to = *(int32_t *)((int)source + 8);
        pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&to);
        from = iVar3;
        pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&from);
        if (pDVar5 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar5,pOVar6,pOVar7,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                             ((MethodInfo *)0x0);
          if (pMVar8 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateInventorySlots
                      (pMVar8,(Dictionary_2_System_Object_System_Object_ *)pDVar5,(MethodInfo *)0x0)
            ;
            return;
          }
        }
      }
    }
    else {
      if (*(char *)((int)RStack_1 + 0x35) != '\0') {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_destination_isDefaultInvItem,(MethodInfo *)0x0);
        TypeInfo__InventoryItemDragHandler->static_fields->dragRejected = 1;
        return;
      }
      this_00 = (this->fields).repository;
      if (this_00 != (PlayerShopInventoryRepository *)0x0) {
        UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
        PlayerShopInventoryRepository_SwapInventoryItemSlotPositions
                  (this_00,(InventoryItem *)source,(InventoryItem *)RStack_1,(MethodInfo *)0x0);
        pDVar5 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                  *)func_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                   );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (pDVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (source != (RegexCharClass_SingleRange)0x0) {
          RStack_1 = *(RegexCharClass_SingleRange *)((int)source + 8);
          pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&RStack_1);
          pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
          if (pDVar5 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar5,pOVar6,pOVar7,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            pOVar6 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
            pOVar7 = (Object *)func_?(TypeInfo__System__Int32,&stack0xffffffec);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)pDVar5,pOVar6,pOVar7,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            pMVar8 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                               ((MethodInfo *)0x0);
            if (pMVar8 != (MVNetworkGame_OperationRequests *)0x0) {
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateInventorySlots
                        (pMVar8,(Dictionary_2_System_Object_System_Object_ *)pDVar5,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void TabSelected(Int32) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_TabSelected
               (PlayerInventoryController *this,int32_t tab,MethodInfo *method)

{
  if (tab != (this->fields).selectedTab) {
    (this->fields).selectedTab = tab;
    PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_UpdateContent
               (PlayerInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Clear__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVWorldObjectClient);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Preview_Root___PlayerInventory);
    cRam_? = '\x01';
  }
  ppTVar1 = &(this->fields).previewRootTransform;
  pTVar2 = *ppTVar1;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if (*ppTVar1 == (Transform *)0x0) goto code_?;
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)*ppTVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar4,(MethodInfo *)0x0);
  }
  pGVar4 = (GameObject *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (pGVar4,StringLiteral_Preview_Root___PlayerInventory,(MethodInfo *)0x0);
  if (pGVar4 != (GameObject *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar4,(MethodInfo *)0x0);
    *ppTVar1 = pTVar2;
    func_?(ppTVar1,pTVar2);
    iVar5 = 0;
    pLVar6 = (this->fields).previewedObjects;
    while (pLVar6 != (List_1_MVWorldObjectClient_ *)0x0) {
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).previewedObjects;
      if ((pLVar6->fields)._size <= iVar5) {
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        break;
        iVar5 = (this_00->fields)._size;
        piVar7 = &(this_00->fields)._version;
        *piVar7 = *piVar7 + 1;
        (this_00->fields)._size = 0;
        if (0 < iVar5) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(this_00->fields)._items,0,iVar5,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__InventoryItemDragHandler);
          cRam_? = '\x01';
        }
        if (TypeInfo__InventoryItemDragHandler->static_fields->dragging != 0) {
          pPVar8 = (this->fields).draggedPreviewItem;
          if ((pPVar8 == (PlayerInventoryPreviewItem *)0x0) ||
             (pIVar9 = (pPVar8->fields).item, pIVar9 == (InventoryItem *)0x0)) break;
          if ((pIVar9->fields).hasData != 0) {
            pLVar6 = (this->fields).previewedObjects;
            if (pLVar6 == (List_1_MVWorldObjectClient_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pLVar6,(Object *)(this->fields).worldObjectDataCopy,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                      );
            pMVar10 = (this->fields).worldObjectDataCopy;
            if ((pMVar10 == (MVWorldObjectClient *)0x0) ||
               (pTVar2 = (pMVar10->fields).transform, pTVar2 == (Transform *)0x0)) break;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                      (pTVar2,(this->fields).previewRootTransform,(MethodInfo *)0x0);
            pIVar11 = (this->fields).draggedPreview;
            if ((pIVar11 == (InventoryItemPreviewer *)0x0) ||
               ((this_01 = (pIVar11->fields).previewCam, this_01 == (Camera *)0x0 ||
                (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)this_01,(MethodInfo *)0x0),
                pTVar2 == (Transform *)0x0)))) break;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                      (pTVar2,(this->fields).previewRootTransform,(MethodInfo *)0x0);
          }
        }
        pIVar12 = (this->fields).inventoryController;
        if (pIVar12 != (InventoryController *)0x0) {
          InventoryController::InventoryController_Clear(pIVar12,(MethodInfo *)0x0);
          this_02 = (this->fields).tabs;
          if (this_02 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
            tabState = (TabState *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)this_02,
                                  (this->fields).selectedTab,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                 );
            pIVar12 = (this->fields).inventoryController;
            tabId = (this->fields).selectedTab;
            if (tabState != (TabState *)0x0) {
              this_03 = (TabState *)(tabState->fields).currentPage;
              maxPages = TabState::TabState_get_MaxPages(this_03,(MethodInfo *)0x0);
              if (pIVar12 != (InventoryController *)0x0) {
                InventoryController::InventoryController_SelectTab
                          (pIVar12,tabId,(int32_t)this_03,maxPages,(MethodInfo *)0x0);
                this_04 = (this->fields).tabsNonLocalized;
                this_05 = (this->fields).repository;
                if ((this_04 != (Dictionary_2_System_Int32_System_String_ *)0x0) &&
                   (s = (String *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)this_04,
                                   (this->fields).selectedTab,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                                  ), this_05 != (PlayerShopInventoryRepository *)0x0)) {
                  pLVar13 = UGUI::Desktop::Scripts::EditMode::Inventories::
                            PlayerShopInventoryRepository::
                            PlayerShopInventoryRepository_GetInventoryItemsInCategorySlow
                                      (this_05,s,(MethodInfo *)0x0);
                  (this->fields).items = pLVar13;
                  func_?();
                  if ((tabState->fields)._TabID_k__BackingField != 1) {
                    PlayerInventoryController_UpdateSlots(this,tabState,(MethodInfo *)0x0);
                    return;
                  }
                  PlayerInventoryController_UpdateSlotsWithDragAndDrop
                            (this,tabState,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        break;
      }
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      break;
      wo = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (this_00,iVar5,
                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                     );
      if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive
                ((MVWorldObjectClient *)wo,(MethodInfo *)0x0);
      iVar5 = iVar5 + 1;
      pLVar6 = (this->fields).previewedObjects;
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void UpdatePageCount() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_UpdatePageCount
               (PlayerInventoryController *this,MethodInfo *method)

{
  pPVar1 = this;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffffb0;
  puVar6 = &stack0xffffffb0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__get_Current__
                   );
    in_stack_7 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
    ;
    func_?();
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  iStack_8 = 1;
  this_00 = (this->fields).repository;
  if (this_00 != (PlayerShopInventoryRepository *)0x0) {
    this_02 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)RTG::TerrainGizmoLookAndFeel::TerrainGizmoLookAndFeel_get_RadiusTickType
                           ((TerrainGizmoLookAndFeel *)this_00,(MethodInfo *)0x0);
    if (this_02 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                          (this_02,
                           MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                          );
      if (this_03 !=
          (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        pDVar9 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                 StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                           (&DStack_10,
                            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                             *)this_03,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                           );
        pOVar11 = pDVar9->_currentValue;
        DStack_10._version = 0;
        uStack_2 = 1;
        DStack_10._currentValue = (Object *)&stack0xffffffbc;
        while( true ) {
          bVar12 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+KeyCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                              *)&stack0xffffffbc,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                            );
          if (bVar12 == 0) {
            uStack_2 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&stack0xffffffbc,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                       ,(MethodInfo *)in_stack_7);
            *unaff_FS_OFFSET = uStack_4;
            return;
          }
          this = (PlayerInventoryController *)0x0;
          if (pOVar11 == (Object *)0x1) {
            this = (PlayerInventoryController *)(pPVar1->fields).numberOfSlotsPrPage;
          }
          this_01 = (pPVar1->fields).tabs;
          pOStack_13 = pOVar11;
          if (this_01 == (Dictionary_2_System_Int32_TabState_ *)0x0) break;
          pOStack_14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)this_01,iStack_8,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                 );
          in_stack_7 = (MethodInfo **)(pPVar1->fields).repository;
          if ((MethodInfo *)in_stack_7 == (MethodInfo *)0x0) break;
          iVar15 = UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
                  PlayerShopInventoryRepository_HighestSlotIndex
                            ((PlayerShopInventoryRepository *)in_stack_7,
                             (InventoryCategoryType__Enum)pOStack_13,(MethodInfo *)0x0);
          if (pOStack_14 == (Object *)0x0) break;
          iStack_8 = iStack_8 + 1;
          pOStack_14[2].klass = (Object__Class *)((int)&this->klass + iVar15);
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void UpdateSlots(TabState) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_UpdateSlots
               (PlayerInventoryController *this,TabState *tabState,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<InventoryItem>__Add_InventoryItem_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__GetEnumerator__)
    ;
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_);
    func_?(&
                    PlayerInventoryPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<PlayerInventoryPreviewItem>_PlayerInventoryPreviewItem_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pLVar6 = (this->fields).itemsWithData;
  if (pLVar6 != (List_1_InventoryItem_ *)0x0) {
    iVar7 = (pLVar6->fields)._size;
    piVar8 = &(pLVar6->fields)._version;
    *piVar8 = *piVar8 + 1;
    (pLVar6->fields)._size = 0;
    if (0 < iVar7) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar6->fields)._items,0,iVar7,(MethodInfo *)0x0);
    }
    method_00 = (MethodInfo *)(this->fields).items;
    if (method_00 != (MethodInfo *)0x0) {
      pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_10,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          method_00,
                          MethodInfo__System__Collections__Generic__List<InventoryItem>__GetEnumerator__
                         );
      LStack_11._list = (List_1_System_Object_ *)pLVar9->_list;
      LStack_11._index = pLVar9->_index;
      LStack_11._version = pLVar9->_version;
      LStack_11._current = *(Object **)&pLVar9->_current;
      LStack_10._version = 0;
      uStack_1 = 1;
      LStack_10._current = (RegexCharClass_SingleRange)&LStack_11;
      while (bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_11,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__MoveNext__
                               ), bVar12 != 0) {
        if ((RegexCharClass_SingleRange)LStack_11._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        if (*(char *)((int)LStack_11._current + 0x20) != '\0') {
          pLVar6 = (this->fields).itemsWithData;
          if (pLVar6 == (List_1_InventoryItem_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar6,LStack_11._current,
                     MethodInfo__System__Collections__Generic__List<InventoryItem>__Add_InventoryItem_
                    );
        }
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&LStack_11,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      iVar7 = 0;
      if (0 < (this->fields).numberOfSlotsPrPage) {
        do {
          if ((tabState == (TabState *)0x0) ||
             (pIVar13 = TabState::TabState_get_SlotRange(tabState,(MethodInfo *)0x0),
             pIVar13 == (Int32__Array *)0x0)) goto code_?;
          if (pIVar13->max_length == 0) {
            func_?();
            goto code_?;
          }
          this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    (this->fields).itemsWithData;
          index = pIVar13->vector[0] + iVar7;
          if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
          goto code_?;
          if ((this_00->fields)._size <= index) break;
          LStack_10._current =
               mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                         (this_00,index,
                          MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                         );
          woPreviewObject =
               PlayerInventoryController_GetWorldObjectFromItemData
                         ((InventoryItem *)LStack_10._current,(MethodInfo *)0x0);
          pPStack_14 = (this->fields).previewItemPrefab;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            LStack_11._current = (Object *)TypeInfo__UnityEngine__Object;
            LStack_11._version = (int32_t)&UNK_?;
            func_?();
          }
          pPStack_14 = (PlayerInventoryPreviewItem *)
                       UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                 ((Object *)pPStack_14,
                                  PlayerInventoryPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<PlayerInventoryPreviewItem>_PlayerInventoryPreviewItem_
                                 );
          if (pPStack_14 == (PlayerInventoryPreviewItem *)0x0) goto code_?;
          PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Initialize_1
                    (pPStack_14,(this->fields).previewRootTransform,
                     (InventoryItem *)LStack_10._current,woPreviewObject,0,(MethodInfo *)0x0);
          LStack_10._current = (RegexCharClass_SingleRange)(this->fields).inventoryController;
          item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pPStack_14,(MethodInfo *)0x0);
          if (LStack_10._current == (RegexCharClass_SingleRange)0x0) goto code_?;
          InventoryController::InventoryController_AddObject
                    ((InventoryController *)LStack_10._current,item,iVar7,(MethodInfo *)0x0);
          this_01 = (this->fields).previewedObjects;
          if (this_01 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)this_01,(Object *)woPreviewObject,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                    );
          iVar7 = iVar7 + 1;
        } while (iVar7 < (this->fields).numberOfSlotsPrPage);
      }
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void UpdateSlotsWithDragAndDrop(TabState) */

void Assembly-CSharp.dll::PlayerInventoryController::
     PlayerInventoryController_UpdateSlotsWithDragAndDrop
               (PlayerInventoryController *this,TabState *tabState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_);
    func_?(&
                    PlayerInventoryPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<PlayerInventoryPreviewItem>_PlayerInventoryPreviewItem_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Drag_preview_item_found);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).items;
  while (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size <= (int)puStack_1) {
      return;
    }
    if (((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
        (item = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_00,(int32_t)puStack_1,
                           MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_
                          ), item == (RegexCharClass_SingleRange)0x0)) ||
       (tabState == (TabState *)0x0)) break;
    bVar2 = TabState::TabState_SlotIndexIsInRange
                      (tabState,*(int32_t *)((int)item + 0x3c),(MethodInfo *)0x0);
    if (bVar2 != 0) {
      pPVar3 = (this->fields).draggedPreviewItem;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pPVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pPVar3 = (this->fields).draggedPreviewItem;
        if ((pPVar3 == (PlayerInventoryPreviewItem *)0x0) ||
           (pIVar4 = (pPVar3->fields).item, pIVar4 == (InventoryItem *)0x0)) break;
        if (*(int *)((int)item + 8) == (pIVar4->fields).itemID) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          tabState = (TabState *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Drag_preview_item_found,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      pPVar3 = (this->fields).previewItemPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pPVar3 = (PlayerInventoryPreviewItem *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pPVar3,
                          PlayerInventoryPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<PlayerInventoryPreviewItem>_PlayerInventoryPreviewItem_
                         );
      if (*(char *)((int)item + 0x20) == '\0') {
        if (pPVar3 == (PlayerInventoryPreviewItem *)0x0) break;
        PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Initialize
                  (pPVar3,(this->fields).previewRootTransform,(InventoryItem *)item,
                   *(char *)((int)item + 0x35) == '\0',1,(MethodInfo *)0x0);
      }
      else {
        woPreviewObject =
             PlayerInventoryController_GetWorldObjectFromItemData
                       ((InventoryItem *)item,(MethodInfo *)0x0);
        this_01 = (this->fields).previewedObjects;
        if ((this_01 == (List_1_MVWorldObjectClient_ *)0x0) ||
           (mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_01,(Object *)woPreviewObject,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                      ), pPVar3 == (PlayerInventoryPreviewItem *)0x0)) break;
        PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Initialize_1
                  (pPVar3,(this->fields).previewRootTransform,(InventoryItem *)item,woPreviewObject,
                   *(char *)((int)item + 0x35) == '\0',(MethodInfo *)0x0);
      }
      this_02 = (this->fields).inventoryController;
      item_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pPVar3,(MethodInfo *)0x0);
      if (this_02 == (InventoryController *)0x0) break;
      tabState = (TabState *)0x0;
      InventoryController::InventoryController_AddObject
                (this_02,item_00,*(int *)((int)item + 0x3c) % (this->fields).numberOfSlotsPrPage,
                 (MethodInfo *)0x0);
    }
code_?:
    puStack_1 = puStack_1 + 1;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).items;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* PlayerInventoryController() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController__ctor
               (PlayerInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>);
    func_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<InventoryItem>);
    func_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    cRam_? = '\x01';
  }
  (this->fields).selectedTab = 1;
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__);
  ppDVar2 = &(this->fields).tabs;
  *ppDVar2 = (Dictionary_2_System_Int32_TabState_ *)pDVar1;
  func_?(ppDVar2,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
            );
  ppDVar3 = &(this->fields).tabsNonLocalized;
  *ppDVar3 = (Dictionary_2_System_Int32_System_String_ *)pDVar1;
  func_?(ppDVar3,pDVar1);
  this_00 = (List_1_MVWorldObjectClient_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  ppLVar4 = &(this->fields).previewedObjects;
  *ppLVar4 = this_00;
  func_?(ppLVar4,this_00);
  pLVar5 = (List_1_InventoryItem_ *)
           func_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar5,
             MethodInfo__System__Collections__Generic__List<InventoryItem>__List__);
  (this->fields).items = pLVar5;
  func_?();
  pLVar5 = (List_1_InventoryItem_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar5,
             MethodInfo__System__Collections__Generic__List<InventoryItem>__List__);
  ppLVar6 = &(this->fields).itemsWithData;
  *ppLVar6 = pLVar5;
  func_?(ppLVar6,pLVar5);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

