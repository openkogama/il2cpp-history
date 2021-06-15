
/* Void AdditionalItemSettingsPressed() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::
     PlayerInventoryPreviewItem_AdditionalItemSettingsPressed
               (PlayerInventoryPreviewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PlayerInventoryPreviewItem___AdditionalItemSettingsPressed_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 == (ScaleAnimationBase *)0x0) goto code_?;
  (this_00->fields)._._._._.m_CachedPtr = (void *)0x0;
  pIVar1 = (this->fields).item;
  if (pIVar1 == (InventoryItem *)0x0) goto code_?;
  pXVar2 = (XpBoostParticlePreviewer *)0x0;
  if ((pIVar1->fields).resellable != 0) {
    if (pIVar1 == (InventoryItem *)0x0) goto code_?;
    if ((pIVar1->fields).isDefaultInvItem == 0) {
      if (pIVar1 == (InventoryItem *)0x0) goto code_?;
      if ((pIVar1->fields).itemCategoryID != 1) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pIVar3 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
        if (pIVar3 == (IEditModeUI *)0x0) goto code_?;
        this_01 = (PlayerInventoryRepository *)func_?(6,TypeInfo__IEditModeUI,pIVar3);
        if (this_01 == (PlayerInventoryRepository *)0x0) goto code_?;
        iVar4 = PlayerInventoryRepository::PlayerInventoryRepository_CountItemsWithOriginalID
                          (this_01,(this->fields).item,(MethodInfo *)0x0);
        if (iVar4 < 2) {
          pXVar2 = (this_00->fields)._._._._.m_CachedPtr;
          goto code_?;
        }
      }
      original = (this->fields).itemPreviewerCubeModelPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)original,
                          InventoryItemCubeModelHandler_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemCubeModelHandler>_InventoryItemCubeModelHandler_
                         );
      (this_00->fields)._._._._.m_CachedPtr = pXVar2;
    }
  }
code_?:
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pXVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar5 != 0) {
    pXVar2 = (XpBoostParticlePreviewer *)(this->fields).itemPreviewerPrefab;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar2,
                        InventoryItemPreview_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreview>_InventoryItemPreview_
                       );
    (this_00->fields)._._._._.m_CachedPtr = pXVar2;
  }
  piVar6 = (this_00->fields)._._._._.m_CachedPtr;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0xe0))
              (piVar6,(this->fields).item,(this->fields).previewImage,
               *(undefined4 *)(*piVar6 + 0xe4));
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
              ((Component_1 *)this,(MethodInfo *)0x0);
    if (TypeInfo__PlayerInventoryPreviewItem->static_fields->__f__am_cache0 ==
        (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar7,(Object *)0x0,
                 MethodInfo__PlayerInventoryPreviewItem___AdditionalItemSettingsPressed_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      TypeInfo__PlayerInventoryPreviewItem->static_fields->__f__am_cache0 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar7;
    }
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
         TypeInfo__PlayerInventoryPreviewItem->static_fields->__f__am_cache0;
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              ((GameObject *)
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
               ,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar7 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar7,(Object *)this_00,
               MethodInfo__PlayerInventoryPreviewItem___AdditionalItemSettingsPressed_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar7,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Initialize(Transform, InventoryItem, MVWorldObjectClient, Boolean) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Initialize
               (PlayerInventoryPreviewItem *this,Transform *rootTransform,InventoryItem *item,
               MVWorldObjectClient *woPreviewObject,bool draggable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  uStack_3._0_4_ = 0.0;
  uStack_3._4_4_ = 0.0;
  fStack_4 = 0.0;
  if (woPreviewObject != (MVWorldObjectClient *)0x0) {
    MVar5 = (*(code *)(woPreviewObject->klass->vtable).get_DocumentationType.method)
                      (woPreviewObject,
                       (woPreviewObject->klass->vtable).TraverseRecursiveTail.methodPtr);
    if (item != (InventoryItem *)0x0) {
      InventoryItem::InventoryItem_ApplyLocalDescriptionOverride(item,MVar5,(MethodInfo *)0x0);
      iVar6 = (*(code *)(woPreviewObject->klass->vtable).get_DocumentationType.method)
                        (woPreviewObject,
                         (woPreviewObject->klass->vtable).TraverseRecursiveTail.methodPtr);
      (this->fields).DocumentationType = iVar6;
      this_00 = (this->fields).toolTip;
      if (this_00 != (ToolTip *)0x0) {
        ToolTip::ToolTip_SetText(this_00,(item->fields).name,(MethodInfo *)0x0);
        this_01 = (this->fields).dragHandler;
        if (this_01 != (InventoryItemDragHandler *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this_01,draggable,(MethodInfo *)0x0);
          this_02 = (LockCursorManager3DMode *)(this->fields).metaData;
          (this->fields).item = item;
          if (this_02 != (LockCursorManager3DMode *)0x0) {
            LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                      (this_02,(Action_1_Boolean_ *)(item->fields).slotPosition,(MethodInfo *)0x0);
            pIVar7 = (this->fields).objectPreviewerPrefab;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pIVar7 = (InventoryItemPreviewer *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                               ((XpBoostParticlePreviewer *)pIVar7,
                                InventoryItemPreviewer_MethodInfo__UnityEngine__Object__Instantiate<InventoryItemPreviewer>_InventoryItemPreviewer_
                               );
            (this->fields).objectPreviewer = pIVar7;
            uStack_1 = (ulonglong)(uint)((float)(item->fields).slotPosition * _UNK_?);
            func_?(&uStack_1,0x42c80000,0x42c80000);
            uStack_1 = 0;
            func_?(&uStack_3,0,0);
            if ((((uint)(TypeInfo__InventoryItem->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__InventoryItem->_1).cctor_started == 0)) {
              uStack_1 = CONCAT44(TypeInfo__InventoryItem,&UNK_?);
              func_?();
            }
            pDVar8 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
            uStack_1 = CONCAT44((woPreviewObject->klass->vtable).TraverseRecursiveTail.methodPtr,
                                 woPreviewObject);
            MVar5 = (*(code *)(woPreviewObject->klass->vtable).get_DocumentationType.method)();
            if (pDVar8 != (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_
                           *)0x0) {
              bVar9 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
                      Dictionary_2_MVWorldObjectDocumentationType_System_Object__ContainsKey
                                ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)
                                 pDVar8,MVar5,
                                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                                );
              if (bVar9 != 0) {
                if ((((uint)(TypeInfo__InventoryItem->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__InventoryItem->_1).cctor_started == 0)) {
                  func_?(TypeInfo__InventoryItem);
                }
                pDVar8 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
                MVar5 = (*(code *)(woPreviewObject->klass->vtable).get_DocumentationType.method)
                                  (woPreviewObject,
                                   (woPreviewObject->klass->vtable).TraverseRecursiveTail.methodPtr)
                ;
                if (pDVar8 == (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_
                               *)0x0) goto code_?;
                this_04 = (InventoryItem_ItemDescription *)
                          mscorlib.dll::System::Collections::Generic::
                          Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
                          Dictionary_2_MVWorldObjectDocumentationType_System_Object__get_Item
                                    ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)
                                     pDVar8,MVar5,
                                     MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                                    );
                if (this_04 == (InventoryItem_ItemDescription *)0x0) goto code_?;
                pVVar10 = InventoryItem+ItemDescription::
                         InventoryItem_ItemDescription_get_CameraPreviewerOffset
                                   (&VStack_11,this_04,(MethodInfo *)0x0);
                uStack_3._0_4_ = pVVar10->x;
                uStack_3._4_4_ = pVVar10->y;
                fStack_4 = pVVar10->z;
              }
              pIVar7 = (this->fields).objectPreviewer;
              iStack_12 = (this->fields).previewWidth;
              iStack_13 = (this->fields).previewHeight;
              pOStack_14 = PrefabPool::PrefabPool_get_MVSpawnPointYellowPrefab
                                    ((PrefabPool *)woPreviewObject,(MethodInfo *)0x0);
              fVar15 = fStack_2;
              name = (item->fields).name;
              VStack_11.y = (float)uStack_3;
              VStack_11.z = uStack_3._4_4_;
              fStack_16 = fStack_4;
              uStack_17 = uStack_1;
              woGameObjectCopy =
                   DayNightCycle::DayNightCycle_get_CurrentMoonParam
                             ((DayNightCycle *)woPreviewObject,(MethodInfo *)0x0);
              if (pIVar7 != (InventoryItemPreviewer *)0x0) {
                cameraOffset.z = fStack_16;
                cameraOffset.x = VStack_11.y;
                cameraOffset.y = VStack_11.z;
                previewPosition.z = fVar15;
                previewPosition.x = (float)(undefined4)uStack_17;
                previewPosition.y = (float)uStack_17._4_4_;
                InventoryItemPreviewer::InventoryItemPreviewer_Initialize
                          (pIVar7,iStack_12,iStack_13,CameraClearFlags__Enum_Color,
                           (LayerFlags__Enum)pOStack_14,cameraOffset,rootTransform,previewPosition,
                           name,woPreviewObject,(GameObject *)woGameObjectCopy,(MethodInfo *)0x0);
                pIVar7 = (this->fields).objectPreviewer;
                this_03 = (this->fields).previewImage;
                if (pIVar7 != (InventoryItemPreviewer *)0x0) {
                  value = (Texture *)
                          GamePointGainEffect::GamePointGainEffect_get_ID
                                    ((GamePointGainEffect *)pIVar7,(MethodInfo *)0x0);
                  if (this_03 != (RawImage *)0x0) {
                    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                              (this_03,value,(MethodInfo *)0x0);
                    (this->fields).initialized = 1;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_OnDestroy
               (PlayerInventoryPreviewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = (this->fields).objectPreviewer;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* Void SlotPressed() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_SlotPressed
               (PlayerInventoryPreviewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__PlayerInventoryPreviewItem->static_fields->__f__am_cache1 ==
      (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__PlayerInventoryPreviewItem___SlotPressed_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
              );
    TypeInfo__PlayerInventoryPreviewItem->static_fields->__f__am_cache1 =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar2;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__PlayerInventoryPreviewItem->static_fields->__f__am_cache1;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__PlayerInventoryPreviewItem___SlotPressed_m__2_UnityEngine__EventSystems__IAddItemFromInventory__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>__EventFunction_System__Object__void__
            );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAddItemFromInventory>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAddItemFromInventory>_
            );
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Update
               (PlayerInventoryPreviewItem *this,MethodInfo *method)

{
  if ((this->fields).initialized != 0) {
    this_00 = (this->fields).objectPreviewer;
    if (this_00 == (InventoryItemPreviewer *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    InventoryItemPreviewer::InventoryItemPreviewer_UpdateRotation(this_00,0.0,(MethodInfo *)0x0);
  }
  return;
}


/* Void <AdditionalItemSettingsPressed>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::
     PlayerInventoryPreviewItem__AdditionalItemSettingsPressed_m__0
               (IUIStack *handler,BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (handler != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,handler,8);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <SlotPressed>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem__SlotPressed_m__1
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(2,TypeInfo__UnityEngine__EventSystems__IUIStack,x);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <SlotPressed>m__2(IAddItemFromInventory, BaseEventData) */

void Assembly-CSharp.dll::PlayerInventoryPreviewItem::PlayerInventoryPreviewItem__SlotPressed_m__2
               (PlayerInventoryPreviewItem *this,IAddItemFromInventory *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).item;
  if (x != (IAddItemFromInventory *)0x0) {
    pIVar2 = x->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IAddItemFromInventory) {
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          (*(code *)(&x->klass->vtable)[iVar5].OnAddItemFromInventory.method)
                    (x,pIVar1,(&x->klass[1]._0.image)[iVar5 * 2]);
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)
             func_?(x,TypeInfo__UnityEngine__EventSystems__IAddItemFromInventory,0);
    (*(code *)*puVar6)(x,pIVar1,puVar6[1]);
    return;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

