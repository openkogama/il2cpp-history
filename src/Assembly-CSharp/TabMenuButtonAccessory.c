
/* Void Initialize(Int32, String) */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory_Initialize
               (TabMenuButtonAccessory *this,int32_t tabId,String *categoryName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TabMenuButtonAccessory___Initialize_c__AnonStorey1;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = (void *)tabId;
    (this_01->fields).state = (int32_t)this;
    pLVar1 = (this->fields).layoutElement;
    (this->fields).category = tabId;
    if (pLVar1 != (LayoutElement *)0x0) {
      fVar2 = (float10)(*(code *)(pLVar1->klass->vtable).get_minHeight_1.method)
                                 (pLVar1,(pLVar1->klass->vtable).set_minHeight.methodPtr);
      (this->fields).defaultHeight = (float)fVar2;
      TabMenuButtonAccessory_UpdateHighlightState(this,(MethodInfo *)0x0);
      pLVar3 = (this->fields).tabDefs;
      tabId = 0;
      index = tabId;
      while (tabId = index, pLVar3 != (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
        pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                            MethodInfo__System__Collections__Generic__List<TabMenuButtonAccessory::AccessoryTabDef>__get_Count__
                           );
        pvVar5 = (this_01->fields)._._._._.m_CachedPtr;
        if ((int)pOVar4 <= tabId) {
          tabId = (int32_t)pvVar5;
          pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&tabId);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          message = mscorlib.dll::System::String::String_Concat
                              ((Object *)StringLiteral_No_TabDef_exists_for_accessory_c,pOVar4,
                               (MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)message,(MethodInfo *)0x0);
          return;
        }
        pLVar3 = (this->fields).tabDefs;
        if (pLVar3 == (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) break;
        TVar6 = mscorlib.dll::System::Collections::Generic::
                List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                          (pLVar3,index,
                           MethodInfo__System__Collections__Generic__List<TabMenuButtonAccessory::AccessoryTabDef>__get_Item_int_
                          );
        pLVar3 = (this->fields).tabDefs;
        if (pvVar5 == (void *)TVar6.tabID) {
          if (pLVar3 != (List_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
            TVar6 = mscorlib.dll::System::Collections::Generic::
                    List`1[TabMenuButtonAccessory+AccessoryTabDef]::
                    List_1_TabMenuButtonAccessory_AccessoryTabDef__get_Item
                              (pLVar3,index,
                               MethodInfo__System__Collections__Generic__List<TabMenuButtonAccessory::AccessoryTabDef>__get_Item_int_
                              );
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pGVar7 = (Graphic *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                               ((XpBoostParticlePreviewer *)TVar6.streamedImagePrefab,
                                UnityEngine__UI__Graphic_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Graphic>_UnityEngine__UI__Graphic_
                               );
            (this->fields).icon = pGVar7;
            if (pGVar7 != (Graphic *)0x0) {
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)pGVar7,(MethodInfo *)0x0);
              parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)this,(MethodInfo *)0x0);
              if (pTVar8 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (pTVar8,parent,0,(MethodInfo *)0x0);
                pGVar7 = (this->fields).icon;
                if ((pGVar7 != (Graphic *)0x0) &&
                   (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_1_get_transform((Component_1 *)pGVar7,(MethodInfo *)0x0),
                   pTVar8 != (Transform *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                            (pTVar8,(MethodInfo *)0x0);
                  this_00 = (HoverCraftMotor *)(this->fields).button;
                  if (this_00 != (HoverCraftMotor *)0x0) {
                    this_02 = (UnityEvent *)
                              HoverCraftMotor::HoverCraftMotor_get_VehicleCamera
                                        (this_00,(MethodInfo *)0x0);
                    this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                               *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (this_03,(Object *)this_01,
                               MethodInfo__TabMenuButtonAccessory___Initialize_c__AnonStorey1____m__0__
                               ,(MethodInfo *)0x0);
                    if (this_02 != (UnityEvent *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::
                      UnityEvent_AddListener(this_02,(UnityAction *)this_03,(MethodInfo *)0x0);
                      return;
                    }
                  }
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
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* IEnumerator LerpToSize(Single) */

IEnumerator *
Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory_LerpToSize
          (TabMenuButtonAccessory *this,float size,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__TabMenuButtonAccessory___LerpToSize_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.x = (float)this;
    (this_00->fields).state = (int32_t)size;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void SetAsDeselected() */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory_SetAsDeselected
               (TabMenuButtonAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).icon;
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  pCVar2 = Styles::Styles_GetColor
                     ((Color *)&stack0xffffffec,ColorStyle__Enum_OffWhite,(MethodInfo *)0x0);
  if (pGVar1 != (Graphic *)0x0) {
    method_00 = (MethodInfo *)pCVar2->b;
    (*(code *)(pGVar1->klass->vtable).set_color.method)
              (pGVar1,pCVar2->r,pCVar2->g,method_00,pCVar2->a);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    fVar3 = (this->fields).defaultHeight;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields).state = (int32_t)fVar3;
      (this_00->fields).originalScale.x = (float)this;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAsSelected() */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory_SetAsSelected
               (TabMenuButtonAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).icon;
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  pCVar2 = Styles::Styles_GetColor
                     ((Color *)&puStack_3,ColorStyle__Enum_SelectedTab,(MethodInfo *)0x0);
  if (pGVar1 != (Graphic *)0x0) {
    method_00 = (MethodInfo *)pCVar2->b;
    (*(code *)(pGVar1->klass->vtable).set_color.method)
              (pGVar1,pCVar2->r,pCVar2->g,method_00,pCVar2->a,
               (pGVar1->klass->vtable).get_raycastTarget.methodPtr);
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar5,(Object *)this,
               MethodInfo__TabMenuButtonAccessory___SetAsSelected_m__0_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>__EventFunction_System__Object__void__
              );
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar4,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
              );
    pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this,(MethodInfo *)0x0);
    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar5,(Object *)this,
               MethodInfo__TabMenuButtonAccessory___SetAsSelected_m__1_UnityEngine__EventSystems__IAccessoryClicked__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>__EventFunction_System__Object__void__
              );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
              (pGVar4,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryClicked>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryClicked>_
              );
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
              ((MonoBehaviour *)this,(MethodInfo *)0x0);
    fVar6 = (this->fields).selectedTabHeight;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields).state = (int32_t)fVar6;
      (this_00->fields).originalScale.x = (float)this;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateHighlightState() */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory_UpdateHighlightState
               (TabMenuButtonAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__HighlightManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__HighlightManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__HighlightManager);
  }
  this_01 = (MethodInfo *)
            HighlightManager::HighlightManager_GetHighLights_2
                      (HighlightType__Enum_Accessory,
                       System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>_MethodInfo__HighlightManager__GetHighLights<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_MV__WorldObject__HighlightSystem__HighlightType_
                      );
  category = (this->fields).category;
  if ((((uint)(TypeInfo__AccessoryDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AccessoryDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AccessoryDataManager,this_01);
  }
  this_02 = AccessoryDataManager::AccessoryDataManager_GetAccessoriesByCategoryId
                      (category,(MethodInfo *)0x0);
  puVar1 = (undefined *)0x0;
  iVar2 = 0;
  if (this_01 != (MethodInfo *)0x0) {
    while( true ) {
      index = iVar2;
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                          MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Count__
                         );
      if ((int)pOVar3 <= iVar2) break;
      iVar2 = 0;
      while( true ) {
        if (this_02 == (List_1_AccessoryDataClient_ *)0x0) goto code_?;
        this_01 = MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__;
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                            MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                           );
        if ((int)pOVar3 <= iVar2) break;
        this_04 = this_02;
        index = iVar2;
        pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,iVar2,
                            MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                           );
        if (pIVar4 == (IEventSystemHandler *)0x0) goto code_?;
        this = (TabMenuButtonAccessory *)
               MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
        ;
        pIVar5 = pIVar4[1].klass;
        puVar1 = &UNK_?;
        pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_04,index,
                            MethodInfo__System__Collections__Generic__List<Highlight<MV::WorldObject::HighlightSystem::HighlightPayloads::HighlightAccessory>_>__get_Item_int_
                           );
        if ((pIVar4 == (IEventSystemHandler *)0x0) || (pIVar4[1].monitor == (MonitorData *)0x0))
        goto code_?;
        if (pIVar5 == *(IEventSystemHandler__Class **)(pIVar4[1].monitor + 8)) {
          this = (TabMenuButtonAccessory *)&UNK_?;
          this_03 = (AccessoryData *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,iVar2
                               ,
                               MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                              );
          if (this_03 == (AccessoryData *)0x0) goto code_?;
          bVar6 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
                  AccessoryData_GetShowInShop(this_03,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_02,
                                iVar2,
                                MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                               );
            if (pIVar4 == (IEventSystemHandler *)0x0) goto code_?;
            if (*(char *)&pIVar4[6].klass == '\0') {
              puVar1 = puVar1 + 1;
            }
          }
        }
        iVar2 = iVar2 + 1;
      }
      iVar2 = index + 1;
    }
    this_00 = (this->fields).redDot;
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0 < (int)puVar1,(MethodInfo *)0x0);
      pTVar7 = (this->fields).redDotCount;
      uVar8 = func_?();
      if (pTVar7 != (Text *)0x0) {
        (*(code *)(pTVar7->klass->vtable).set_text.method)
                  (pTVar7,uVar8,(pTVar7->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void <SetAsSelected>m__0(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory__SetAsSelected_m__0
               (TabMenuButtonAccessory *this,IAccessoryClicked *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IAccessoryClicked *)0x0) {
    func_?(1,TypeInfo__UnityEngine__EventSystems__IAccessoryClicked,x,
                    (this->fields).category != 0xff);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <SetAsSelected>m__1(IAccessoryClicked, BaseEventData) */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory__SetAsSelected_m__1
               (TabMenuButtonAccessory *this,IAccessoryClicked *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IAccessoryClicked *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IAccessoryClicked,x,
                    (this->fields).category);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* TabMenuButtonAccessory() */

void Assembly-CSharp.dll::TabMenuButtonAccessory::TabMenuButtonAccessory__ctor
               (TabMenuButtonAccessory *this,MethodInfo *method)

{
  (this->fields).selectedTabHeight = 140.0;
  (this->fields).lerpTime = 0.5;
  (this->fields).defaultHeight = 120.0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

