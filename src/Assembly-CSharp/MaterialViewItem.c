
/* Void Initialize(Byte, Boolean, Texture2D, Boolean, Boolean) */

void Assembly-CSharp.dll::MaterialViewItem::MaterialViewItem_Initialize
               (MaterialViewItem *this,uint8_t id,bool locked,Texture2D *texture2D,bool isAvailable,
               bool isSelected,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MaterialDescription);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).toolTip;
  if ((TypeInfo__MaterialDescription->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MaterialDescription);
  }
  pMVar1 = TypeInfo__MaterialDescription->static_fields->materialDescriptions;
  if (pMVar1 != (MaterialDescription__Array *)0x0) {
    if (pMVar1->max_length <= (uint)id) goto code_?;
    if ((pMVar1->vector[id] != (MaterialDescription *)0x0) && (this_00 != (ToolTip *)0x0)) {
      ToolTip::ToolTip_SetText
                (this_00,(pMVar1->vector[id]->fields)._Name_k__BackingField,(MethodInfo *)0x0);
      (this->fields).isAvailable = isAvailable;
      (this->fields).id = id;
      (this->fields).locked = locked;
      if (locked != 0) {
        this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((this_02 == (MVNetworkGame *)0x0) ||
            (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0),
            pMVar2 == (MVLocalPlayer *)0x0)) ||
           (this_01 = (pMVar2->fields)._._SubscriptionRules_k__BackingField,
           this_01 == (SubscriptionRulesWrapper *)0x0)) goto code_?;
        bVar3 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_HasBenefit
                          (this_01,SubscriptionBenefit__Enum_FreeBuildingMaterials,(MethodInfo *)0x0
                          );
        if (bVar3 != 0) {
          (this->fields).locked = 0;
        }
      }
      pIVar4 = (this->fields).lockedImage;
      if ((pIVar4 != (Image *)0x0) &&
         (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pIVar4,(MethodInfo *)0x0), pGVar5 != (GameObject *)0x0))
      {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5,(this->fields).locked,(MethodInfo *)0x0);
        pRVar6 = (this->fields).buttonImage;
        if (pRVar6 != (RawImage *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
                    (pRVar6,(Texture *)texture2D,(MethodInfo *)0x0);
          if (isAvailable == 0) {
            pRVar6 = (this->fields).buttonImage;
            if (pRVar6 != (RawImage *)0x0) {
              puVar7 = (undefined4 *)(*(pRVar6->klass->vtable).get_color.methodPtr)();
              pRVar6 = (this->fields).buttonImage;
              if (pRVar6 != (RawImage *)0x0) {
                (*(pRVar6->klass->vtable).set_color.methodPtr)
                          (pRVar6,*puVar7,puVar7[1],puVar7[2],(this->fields).unavailableAlpha,
                           (pRVar6->klass->vtable).set_color.method);
                goto code_?;
              }
            }
          }
          else {
code_?:
            if (isSelected == 0) {
              return;
            }
            pIVar4 = (this->fields).selectedBackground;
            if ((pIVar4 != (Image *)0x0) &&
               (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)pIVar4,(MethodInfo *)0x0),
               pGVar5 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar5,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnClick() */

void Assembly-CSharp.dll::MaterialViewItem::MaterialViewItem_OnClick
               (MaterialViewItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IMaterialClicked>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IMaterialClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IMaterialClicked>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__MaterialViewItem__PurchaseCallback_bool__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__MaterialViewItem___OnClick_b__11_1_UnityEngine__EventSystems__IMaterialClicked__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MaterialPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<MaterialPurchasePopup>_MaterialPurchasePopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__MaterialViewItem____c___OnClick_b__11_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__MaterialViewItem____c___OnClick_b__11_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__MaterialViewItem____c__DisplayClass11_0___OnClick_b__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__MaterialViewItem____c__DisplayClass11_0);
    func_?(&TypeInfo__MaterialViewItem____c);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<bool,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).locked == 0) {
    if ((this->fields).isAvailable == 0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__MaterialViewItem____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MaterialViewItem____c);
      }
      callbackFunction = TypeInfo__MaterialViewItem____c->static_fields->__9__11_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
        if ((TypeInfo__MaterialViewItem____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MaterialViewItem____c);
        }
        object = TypeInfo__MaterialViewItem____c->static_fields->__9;
        callbackFunction =
             (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0)
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__MaterialViewItem____c___OnClick_b__11_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__MaterialViewItem____c->static_fields->__9__11_0 = callbackFunction;
        func_?(&TypeInfo__MaterialViewItem____c->static_fields->__9__11_0,callbackFunction)
        ;
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                );
      return;
    }
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IMaterialClicked>
                            );
    if (pEVar2 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)pEVar2,(Object *)this,
                 MethodInfo__MaterialViewItem___OnClick_b__11_1_UnityEngine__EventSystems__IMaterialClicked__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,pEVar2,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IMaterialClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IMaterialClicked>_
                );
      return;
    }
  }
  else {
    value = (Object *)func_?(TypeInfo__MaterialViewItem____c__DisplayClass11_0);
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,unaff_EBX);
      original = (this->fields).materialPurchasePopupPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pOVar3 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          MaterialPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<MaterialPurchasePopup>_MaterialPurchasePopup_
                         );
      value[1].klass = pOVar3;
      func_?(value + 1,pOVar3);
      pOVar3 = value[1].klass;
      materialID = (this->fields).id;
      this_00 = (UnityAction_2_System_Boolean_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<bool,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                               );
      if (this_00 != (UnityAction_2_System_Boolean_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::
        Object]::UnityAction_2_System_Boolean_System_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__MaterialViewItem__PurchaseCallback_bool__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   ,(MethodInfo *)0x0);
        if (pOVar3 != (Object__Class *)0x0) {
          MaterialPurchasePopup::MaterialPurchasePopup_Initialize
                    ((MaterialPurchasePopup *)pOVar3,materialID,
                     (UnityAction_2_System_Boolean_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                      *)this_00,(MethodInfo *)0x0);
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          if ((TypeInfo__MaterialViewItem____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          callbackFunction_00 = TypeInfo__MaterialViewItem____c->static_fields->__9__11_2;
          if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
            if ((TypeInfo__MaterialViewItem____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            callbackFunction_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
            if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
            goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                       (Object *)&UNK_?,
                       MethodInfo__MaterialViewItem____c___OnClick_b__11_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__MaterialViewItem____c->static_fields->__9__11_2 = callbackFunction_00;
            func_?(&TypeInfo__MaterialViewItem____c->static_fields->__9__11_2,
                            callbackFunction_00);
          }
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (pGVar1,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
          pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
          if (pEVar2 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)pEVar2,value,
                       MethodInfo__MaterialViewItem____c__DisplayClass11_0___OnClick_b__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar1,(BaseEventData *)0x0,pEVar2,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnInfoClick() */

void Assembly-CSharp.dll::MaterialViewItem::MaterialViewItem_OnInfoClick
               (MaterialViewItem *this,MethodInfo *method)

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
                    MethodInfo__MaterialViewItem__PurchaseCallback_bool__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MaterialPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<MaterialPurchasePopup>_MaterialPurchasePopup_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__MaterialViewItem____c___OnInfoClick_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__MaterialViewItem____c__DisplayClass13_0___OnInfoClick_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__MaterialViewItem____c__DisplayClass13_0);
    func_?(&TypeInfo__MaterialViewItem____c);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<bool,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__MaterialViewItem____c__DisplayClass13_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    original = (this->fields).materialPurchasePopupPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        MaterialPurchasePopup_MethodInfo__UnityEngine__Object__Instantiate<MaterialPurchasePopup>_MaterialPurchasePopup_
                       );
    value[1].klass = pOVar1;
    func_?(value + 1,pOVar1);
    pOVar1 = value[1].klass;
    materialID = (this->fields).id;
    this_00 = (UnityAction_2_System_Boolean_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<bool,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                             );
    if (this_00 != (UnityAction_2_System_Boolean_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Boolean,System::Object]
      ::UnityAction_2_System_Boolean_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MaterialViewItem__PurchaseCallback_bool__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,(MethodInfo *)0x0);
      if (pOVar1 != (Object__Class *)0x0) {
        MaterialPurchasePopup::MaterialPurchasePopup_Initialize
                  ((MaterialPurchasePopup *)pOVar1,materialID,
                   (UnityAction_2_System_Boolean_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                    *)this_00,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__MaterialViewItem____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MaterialViewItem____c);
        }
        callbackFunction = TypeInfo__MaterialViewItem____c->static_fields->__9__13_0;
        if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
          if ((TypeInfo__MaterialViewItem____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MaterialViewItem____c);
          }
          object = TypeInfo__MaterialViewItem____c->static_fields->__9;
          callbackFunction =
               (ExecuteEvents_EventFunction_1_IUIStack_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                              );
          if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0)
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object
                     ,
                     MethodInfo__MaterialViewItem____c___OnInfoClick_b__13_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__MaterialViewItem____c->static_fields->__9__13_0 = callbackFunction;
          func_?(&TypeInfo__MaterialViewItem____c->static_fields->__9__13_0,
                          callbackFunction);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  ((GameObject *)callbackFunction,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        callbackFunction_00 =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        if (callbackFunction_00 != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,value,
                     MethodInfo__MaterialViewItem____c__DisplayClass13_0___OnInfoClick_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,callbackFunction_00,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPointerEnter(PointerEventData) */

void Assembly-CSharp.dll::MaterialViewItem::MaterialViewItem_OnPointerEnter
               (MaterialViewItem *this,PointerEventData *eventData,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields).mouseHoverDescriptionFrame;
  if (pGVar2 != (GameObject *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    puStack_1 = (undefined1 *)0x1;
    pGStack_3 = pGVar2;
    (*pcRam_?)();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPointerExit(PointerEventData) */

void Assembly-CSharp.dll::MaterialViewItem::MaterialViewItem_OnPointerExit
               (MaterialViewItem *this,PointerEventData *eventData,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pGVar2 = (this->fields).mouseHoverDescriptionFrame;
  if (pGVar2 != (GameObject *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    puStack_1 = (undefined1 *)0x0;
    pGStack_3 = pGVar2;
    (*pcRam_?)();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void PurchaseCallback(Boolean, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MaterialViewItem::MaterialViewItem_PurchaseCallback
               (MaterialViewItem *this,bool success,
               Dictionary_2_System_Object_System_Object_ *purchaseData,MethodInfo *method)

{
  if (success == 0) {
    return;
  }
  this_00 = (this->fields).lockedImage;
  (this->fields).locked = 0;
  if ((this_00 != (Image *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,0,(MethodInfo *)0x0);
    MaterialViewItem_OnClick(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <OnClick>b__11_1(IMaterialClicked, BaseEventData) */

void Assembly-CSharp.dll::MaterialViewItem::MaterialViewItem__OnClick_b__11_1
               (MaterialViewItem *this,IMaterialClicked *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IMaterialClicked);
    cRam_? = '\x01';
  }
  this = (MaterialViewItem *)CONCAT31(this._1_3_,(this->fields).id);
  if (x != (IMaterialClicked *)0x0) {
    uVar1 = 0;
    uVar2 = (x->klass->_1).interface_offsets_count;
    if (uVar2 != 0) {
      do {
        if (x->klass->interfaceOffsets[uVar1].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IMaterialClicked) {
          pIVar3 = &x->klass->vtable + x->klass->interfaceOffsets[uVar1].offset;
          (*(pIVar3->OnMaterialClicked).methodPtr)(x,this,(pIVar3->OnMaterialClicked).method);
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
    }
    puVar4 = (undefined4 *)
             func_?(x,TypeInfo__UnityEngine__EventSystems__IMaterialClicked,0);
    (*(code *)*puVar4)(x,this,puVar4[1]);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MaterialViewItem() */

void Assembly-CSharp.dll::MaterialViewItem::MaterialViewItem__ctor
               (MaterialViewItem *this,MethodInfo *method)

{
  (this->fields).isAvailable = 1;
  (this->fields).unavailableAlpha = 0.1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

