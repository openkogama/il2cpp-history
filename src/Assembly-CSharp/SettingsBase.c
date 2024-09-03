
/* Void Initialize(Int32, GameObject, MVWorldObjectDocumentationType) */

void Assembly-CSharp.dll::SettingsBase::SettingsBase_Initialize
               (SettingsBase *this,int32_t woID,GameObject *root,
               MVWorldObjectDocumentationType__Enum documentationType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                   );
    func_?(&TypeInfo__InventoryItem);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).headerText;
  (this->fields).woID = woID;
  if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__InventoryItem);
  }
  this_00 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
  if (this_00 != (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0)
  {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,documentationType,
                        MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                       );
    if ((pOVar2 != (Object *)0x0) && (pTVar1 != (Text *)0x0)) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,pOVar2[1].klass,
                 (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      SettingsBase_InitializeHierarchy(this,woID,root,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void InitializeHierarchy(Int32, GameObject) */

void Assembly-CSharp.dll::SettingsBase::SettingsBase_InitializeHierarchy
               (SettingsBase *this,int32_t woID,GameObject *root,MethodInfo *method)

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
                    MethodInfo__SettingsBase____c__DisplayClass6_0___InitializeHierarchy_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__SettingsBase____c__DisplayClass6_0___InitializeHierarchy_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SettingsBase____c__DisplayClass6_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__SettingsBase____c__DisplayClass6_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].monitor = (MonitorData *)this;
    func_?(&value[1].monitor,this);
    value[2].klass = (Object__Class *)0x16;
    value[1].klass = (Object__Class *)0x10;
    pEVar1 = (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar1,value,
               MethodInfo__SettingsBase____c__DisplayClass6_0___InitializeHierarchy_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,pEVar1,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pEVar1 = (ExecuteEvents_EventFunction_1_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)pEVar1,value,
               MethodInfo__SettingsBase____c__DisplayClass6_0___InitializeHierarchy_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,pEVar1,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Initialize(Int32, GameObject, String) */

void Assembly-CSharp.dll::SettingsBase::SettingsBase_Initialize_1
               (SettingsBase *this,int32_t woID,GameObject *root,String *header,MethodInfo *method)

{
  pTVar1 = (this->fields).headerText;
  (this->fields).woID = woID;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,header,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    SettingsBase_InitializeHierarchy(this,woID,root,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::SettingsBase::SettingsBase_OnPop(SettingsBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Count__
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).woID != -1) {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 == (MVWorldObjectClientManager *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,(this->fields).woID,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObject *)0x0) {
      this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(this->fields).result;
      if (this_00 ==
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) goto code_?;
      iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Count__
                        );
      if (iVar3 != 0) {
        this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
                  (this_02,(this->fields).woID,(this->fields).result,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


/* Void OnSettingChanged(String, Object) */

void Assembly-CSharp.dll::SettingsBase::SettingsBase_OnSettingChanged
               (SettingsBase *this,String *key,Object *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__WorldObjectDataValidator);
    cRam_? = '\x01';
  }
  if (((this->fields).woID != -1) &&
     (bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(key,(MethodInfo *)0x0), bVar1 == 0)
     ) {
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      wo = (MVWorldObjectClient *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (this_01,(this->fields).woID,(MethodInfo *)0x0);
      if (wo == (MVWorldObjectClient *)0x0) {
        return;
      }
      if ((TypeInfo__WorldObjectDataValidator->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      WorldObjectDataValidator::WorldObjectDataValidator_Validate(wo,key,value,(MethodInfo *)0x0);
      this_00 = (this->fields).result;
      if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (this_00,(Object *)key,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
        this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        if (this_02 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          (*(code *)(wo->klass->vtable).PartialUpdateWOData.method)();
          return;
        }
      }
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}


/* Void RemoveData(String) */

void Assembly-CSharp.dll::SettingsBase::SettingsBase_RemoveData
               (SettingsBase *this,String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).result;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Remove
              (this_00,(Object *)key,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SettingsBase::SettingsBase_Update(SettingsBase *this,MethodInfo *method)

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
                    MethodInfo__SettingsBase____c___Update_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SettingsBase____c);
    cRam_? = '\x01';
  }
  if ((this->fields).woID != -1) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(this->fields).woID,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObject *)0x0) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__SettingsBase____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      callbackFunction = TypeInfo__SettingsBase____c->static_fields->__9__10_0;
      if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if ((TypeInfo__SettingsBase____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        object = TypeInfo__SettingsBase____c->static_fields->__9;
        callbackFunction = (ExecuteEvents_EventFunction_1_IUIStack_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                   MethodInfo__SettingsBase____c___Update_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__SettingsBase____c->static_fields->__9__10_0 = callbackFunction;
        func_?(&TypeInfo__SettingsBase____c->static_fields->__9__10_0);
      }
      if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0)
      {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
  }
  return;
}


/* SettingsBase() */

void Assembly-CSharp.dll::SettingsBase::SettingsBase__ctor(SettingsBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  (this->fields).result = (Dictionary_2_System_Object_System_Object_ *)this_00;
  func_?(&(this->fields).result,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

