
/* Void InitializeObjectPreview(AvatarRepositoryItem, MVWorldObjectClient, Transform) */

void Assembly-CSharp.dll::AvatarShopPreviewItem::AvatarShopPreviewItem_InitializeObjectPreview
               (AvatarShopPreviewItem *this,AvatarRepositoryItem *item,MVWorldObjectClient *wo,
               Transform *previewItemsRoot,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).item;
  *ppAVar1 = item;
  func_?(ppAVar1,item);
  pAVar2 = (this->fields).previewer;
  ppAVar3 = &(this->fields).previewer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pAVar2 = (AvatarPreviewer *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pAVar2,
                      AvatarPreviewer_MethodInfo__UnityEngine__Object__Instantiate<AvatarPreviewer>_AvatarPreviewer_
                     );
  *ppAVar3 = pAVar2;
  func_?(ppAVar3,pAVar2);
  if (wo != (MVWorldObjectClient *)0x0) {
    if (item != (AvatarRepositoryItem *)0x0) {
      if (*ppAVar3 != (AvatarPreviewer *)0x0) {
        previewPosition.z = (float)(item->fields).slotPosition * _UNK_?;
        previewPosition.x = 100.0;
        previewPosition.y = 100.0;
        AvatarPreviewer::AvatarPreviewer_Initialize
                  (*ppAVar3,(this->fields).previewWidth,(this->fields).previewHeight,
                   CameraClearFlags__Enum_Color,(wo->fields).previewLayerMask,(Vector3)ZEXT812(0),
                   previewItemsRoot,previewPosition,(item->fields).name,wo,(wo->fields).gameObject,
                   (Vector3)ZEXT812(0),(MethodInfo *)0x0);
        if ((*ppAVar3 != (AvatarPreviewer *)0x0) &&
           (this_00 = ((*ppAVar3)->fields)._PreviewGameObject_k__BackingField,
           this_00 != (GameObject *)0x0)) {
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (this_00,(MethodInfo *)0x0);
          if (this_02 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_3
                      (this_02,0.0,180.0,0.0,(MethodInfo *)0x0);
            if ((*ppAVar3 != (AvatarPreviewer *)0x0) &&
               (this_01 = (this->fields).previewImage, this_01 != (RawImage *)0x0)) {
              UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                        (this_01,(Texture *)((*ppAVar3)->fields).previewTexture,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SlotPressed() */

void Assembly-CSharp.dll::AvatarShopPreviewItem::AvatarShopPreviewItem_SlotPressed
               (AvatarShopPreviewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    AvatarPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarPurchasePopup>_AvatarPurchasePopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__AvatarShopPreviewItem____c__DisplayClass7_0___SlotPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__AvatarShopPreviewItem____c__DisplayClass7_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AvatarShopPreviewItem____c__DisplayClass7_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).popup;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      AvatarPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<AvatarPurchasePopup>_AvatarPurchasePopup_
                     );
  if (value != (Object *)0x0) {
    pOVar2 = value + 1;
    pOVar2->klass = pOVar1;
    func_?(pOVar2,pOVar1);
    pOVar1 = pOVar2->klass;
    if (pOVar1 != (Object__Class *)0x0) {
      pAVar3 = (this->fields).item;
      pIVar4 = &(pOVar1->_0).this_arg;
      (pIVar4->data).generic_class = (Il2CppGenericClass *)pAVar3;
      func_?(pIVar4,pAVar3);
      pIVar5 = (pOVar1->_0).byval_arg.data.array;
      if (pAVar3 != (AvatarRepositoryItem *)0x0) {
        pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&(pAVar3->fields).priceGold,(MethodInfo *)0x0);
        if (pIVar5 != (Il2CppArrayType *)0x0) {
          pIVar4 = pIVar5->etype;
          iVar7._0_2_ = pIVar4[99].attrs;
          iVar7._2_1_ = pIVar4[99].type;
          iVar7._3_1_ = pIVar4[99].field_0x7;
          (*(code *)pIVar4[99].data)(pIVar5,pSVar6);
          if ((iVar7 != 0) &&
             (this_00 = *(RawImage **)&(pOVar1->_0).byval_arg.attrs, this_00 != (RawImage *)0x0)) {
            UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                      (this_00,*(Texture **)(iVar7 + 0x84),(MethodInfo *)0x0);
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_System_Object_ *)
                 func_?(
                                TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                );
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                       MethodInfo__AvatarShopPreviewItem____c__DisplayClass7_0___SlotPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor
                == 0) {
              func_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (root,(BaseEventData *)0x0,callbackFunction,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarShopPreviewItem::AvatarShopPreviewItem_Update
               (AvatarShopPreviewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).previewer;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (this->fields).previewer;
    if (pAVar1 == (AvatarPreviewer *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    AvatarPreviewer::AvatarPreviewer_UpdateRotation(pAVar1,9.3,(MethodInfo *)0x0);
  }
  return;
}

