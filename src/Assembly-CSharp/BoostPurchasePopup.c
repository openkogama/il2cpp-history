
/* Void CreateBoostImage(BoostType) */

void Assembly-CSharp.dll::BoostPurchasePopup::BoostPurchasePopup_CreateBoostImage
               (BoostPurchasePopup *this,BoostType__Enum boostType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).boosterList;
  do {
    if (pLVar1 == (List_1_BoostPurchasePopup_BoosterDef_ *)0x0) {
code_?:
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<BoostPurchasePopup::BoosterDef>__get_Count__
                       );
    if ((int)pOVar3 <= index) {
      return;
    }
    pLVar1 = (this->fields).boosterList;
    if (pLVar1 == (List_1_BoostPurchasePopup_BoosterDef_ *)0x0) goto code_?;
    BVar4 = mscorlib.dll::System::Collections::Generic::List`1[BoostPurchasePopup+BoosterDef]::
            List_1_BoostPurchasePopup_BoosterDef__get_Item
                      (pLVar1,index,
                       MethodInfo__System__Collections__Generic__List<BoostPurchasePopup::BoosterDef>__get_Item_int_
                      );
    pLVar1 = (this->fields).boosterList;
    if (BVar4.type == boostType) {
      if (pLVar1 != (List_1_BoostPurchasePopup_BoosterDef_ *)0x0) {
        BVar4 = mscorlib.dll::System::Collections::Generic::List`1[BoostPurchasePopup+BoosterDef]::
                List_1_BoostPurchasePopup_BoosterDef__get_Item
                          (pLVar1,index,
                           MethodInfo__System__Collections__Generic__List<BoostPurchasePopup::BoosterDef>__get_Item_int_
                          );
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            ((XpBoostParticlePreviewer *)BVar4.iconPrefab,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                            );
        if ((this_00 != (XpBoostParticlePreviewer *)0x0) &&
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                ((GameObject *)this_00,(MethodInfo *)0x0),
           this_01 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_01,(Transform *)(this->fields).boostImageParent,0,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    index = index + 1;
  } while( true );
}


/* Void HandleSuccessfulPurchase() */

void Assembly-CSharp.dll::BoostPurchasePopup::BoostPurchasePopup_HandleSuccessfulPurchase
               (BoostPurchasePopup *this,MethodInfo *method)

{
  pUVar1 = (this->fields).OnPurchaseSuccessful;
  if (pUVar1 == (UnityAction *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (AvatarMotor_OnActiveBounceDelegate *)(pUVar1->fields)._.prev;
  if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (this_00,(MethodInfo *)0x0);
  }
  pcVar2 = (pUVar1->fields)._._.method_ptr;
  this_01 = (pUVar1->fields)._._.method;
  pOVar3 = (pUVar1->fields)._._.m_target;
  if (this_01->flags == 0xffff) {
    func_?(this_01);
  }
  cVar4 = func_?(this_01);
  if (cVar4 == '\0') {
    if ((char)this_01->iflags == '\0') {
      (*pcVar2)();
      return;
    }
  }
  else if ((this_01->flags != 0xffff) &&
          (((pOVar3 == (Object *)0x0 || (((pOVar3->klass->_1).token & 0x100) == 0)) &&
           ((pUVar1->fields)._._.invoke_impl != (void *)0x0)))) {
    cVar4 = func_?(pOVar3);
    if (cVar4 != '\0') {
      return;
    }
    method_00 = this_01;
    cVar4 = func_?();
    pOVar5 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
             ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                       ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,method_00);
    cVar6 = func_?(pOVar5);
    if (cVar4 != '\0') {
      if (cVar6 != '\0') {
        func_?();
        return;
      }
      func_?(this_01,pOVar3);
      return;
    }
    if (cVar6 != '\0') {
      pOVar3 = mscorlib.dll::System::Collections::Generic::
               KeyValuePair`2[WinningConditionType,System::Object]::
               KeyValuePair_2_WinningConditionType_System_Object__get_Value
                         ((KeyValuePair_2_WinningConditionType_System_Object_ *)this_01,
                          unaff_retaddr);
      func_?(this_01->flags,pOVar3);
      return;
    }
    func_?(this_01->flags,pOVar3);
    return;
  }
  (*pcVar2)(pOVar3,this_01);
  return;
}


/* Void Initialize(BoostType, String, String, Int32, UnityAction) */

void Assembly-CSharp.dll::BoostPurchasePopup::BoostPurchasePopup_Initialize
               (BoostPurchasePopup *this,BoostType__Enum boostType,String *boostKey,
               String *boostName,int32_t price,UnityAction *OnPurchaseSuccessful,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).headerText;
  (this->fields).boostKey = boostKey;
  (this->fields).price = price;
  (this->fields).OnPurchaseSuccessful = OnPurchaseSuccessful;
  if (pTVar1 != (Text *)0x0) {
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,boostName,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar1 = (this->fields).priceText;
    pSVar2 = (String *)func_?(&price,StringLiteral_N0,0);
    if ((pSVar2 != (String *)0x0) &&
       (pSVar2 = mscorlib.dll::System::String::String_Replace_1
                           (pSVar2,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
       pTVar1 != (Text *)0x0)) {
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pLVar3 = (this->fields).boosterList;
      index = 0;
      while (pLVar3 != (List_1_BoostPurchasePopup_BoosterDef_ *)0x0) {
        pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                            MethodInfo__System__Collections__Generic__List<BoostPurchasePopup::BoosterDef>__get_Count__
                           );
        if ((int)pOVar4 <= index) {
          return;
        }
        pLVar3 = (this->fields).boosterList;
        if (pLVar3 == (List_1_BoostPurchasePopup_BoosterDef_ *)0x0) break;
        BVar5 = mscorlib.dll::System::Collections::Generic::List`1[BoostPurchasePopup+BoosterDef]::
                List_1_BoostPurchasePopup_BoosterDef__get_Item
                          (pLVar3,index,
                           MethodInfo__System__Collections__Generic__List<BoostPurchasePopup::BoosterDef>__get_Item_int_
                          );
        pLVar3 = (this->fields).boosterList;
        if (BVar5.type == boostType) {
          if (pLVar3 != (List_1_BoostPurchasePopup_BoosterDef_ *)0x0) {
            BVar5 = mscorlib.dll::System::Collections::Generic::
                    List`1[BoostPurchasePopup+BoosterDef]::
                    List_1_BoostPurchasePopup_BoosterDef__get_Item
                              (pLVar3,index,
                               MethodInfo__System__Collections__Generic__List<BoostPurchasePopup::BoosterDef>__get_Item_int_
                              );
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                ((XpBoostParticlePreviewer *)BVar5.iconPrefab,
                                 UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                                );
            if ((this_00 != (XpBoostParticlePreviewer *)0x0) &&
               (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform((GameObject *)this_00,(MethodInfo *)0x0),
               this_01 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (this_01,(Transform *)(this->fields).boostImageParent,0,(MethodInfo *)0x0);
              return;
            }
          }
          break;
        }
        index = index + 1;
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ProductPurchaseResponseHandler(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BoostPurchasePopup::BoostPurchasePopup_ProductPurchaseResponseHandler
               (BoostPurchasePopup *this,int32_t returnCode,
               Dictionary_2_System_Object_System_Object_ *purchaseResponseData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__BoostPurchasePopup___ProductPurchaseResponseHandler_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    (this_01->fields)._._._._.m_CachedPtr = (void *)returnCode;
    (this_01->fields).state = (int32_t)this;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame *)0x0) {
      pAVar2 = (pMVar1->fields).PurchaseProductResponseHandler;
      pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(
                               TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__BoostPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ,
                 MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
                );
      pAVar4 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pAVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pAVar2 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                *)0x0;
      if (pAVar4 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0) {
        if (pAVar4->klass ==
            TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
           ) {
          pAVar2 = pAVar4;
        }
        pAVar5 = 
        TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
        ;
        if (pAVar2 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                       *)0x0) goto code_?;
      }
      (pMVar1->fields).PurchaseProductResponseHandler = pAVar2;
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__BoostPurchasePopup->static_fields->__f__am_cache1 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__BoostPurchasePopup___ProductPurchaseResponseHandler_m__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__BoostPurchasePopup->static_fields->__f__am_cache1 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
      }
      pEVar7 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__BoostPurchasePopup->static_fields->__f__am_cache1;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar6,(BaseEventData *)0x0,pEVar7,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (TypeInfo__BoostPurchasePopup->static_fields->__f__am_cache2 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)0x0,
                   MethodInfo__BoostPurchasePopup___ProductPurchaseResponseHandler_m__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__BoostPurchasePopup->static_fields->__f__am_cache2 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar3;
      }
      pEVar7 = (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
               TypeInfo__BoostPurchasePopup->static_fields->__f__am_cache2;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar6,(BaseEventData *)0x0,pEVar7,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if ((this_01->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)this,(MethodInfo *)0x0);
        pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar3,(Object *)this_01,
                   MethodInfo__BoostPurchasePopup___ProductPurchaseResponseHandler_c__AnonStorey0____m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar6,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar3,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                  );
        return;
      }
      this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields).OnPurchaseSuccessful;
      if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
        AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                  (this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pAVar4 = extraout_ECX;
  pAVar5 = extraout_EDX;
code_?:
  func_?(pAVar4,pAVar5);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Purchase() */

void Assembly-CSharp.dll::BoostPurchasePopup::BoostPurchasePopup_Purchase
               (BoostPurchasePopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__BoostPurchasePopup->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)0x0,
               MethodInfo__BoostPurchasePopup___Purchase_m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
              );
    TypeInfo__BoostPurchasePopup->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar1;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__BoostPurchasePopup->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 != (MVNetworkGame *)0x0) {
    pAVar3 = (pMVar2->fields).PurchaseProductResponseHandler;
    pUVar1 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar1,(Object *)&UNK_?,
               MethodInfo__BoostPurchasePopup__ProductPurchaseResponseHandler_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ,
               MethodInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Action_System__Object__void__
              );
    pAVar4 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)pUVar1,(MethodInfo *)0x0);
    pAVar3 = (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             0x0;
    if (pAVar4 != (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                   *)0x0) {
      if (pAVar4->klass ==
          TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
         ) {
        pAVar3 = pAVar4;
      }
      pAVar5 = 
      TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
      ;
      if (pAVar3 == (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                     *)0x0) goto code_?;
    }
    (pMVar2->fields).PurchaseProductResponseHandler = pAVar3;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_PurchaseGameBooster
                (this_00,_UNK_?,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pAVar4 = extraout_ECX;
  pAVar5 = extraout_EDX;
code_?:
  func_?(pAVar4,pAVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <ProductPurchaseResponseHandler>m__1(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BoostPurchasePopup::
     BoostPurchasePopup__ProductPurchaseResponseHandler_m__1
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


/* Void <ProductPurchaseResponseHandler>m__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::BoostPurchasePopup::
     BoostPurchasePopup__ProductPurchaseResponseHandler_m__2
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


/* Void <Purchase>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::BoostPurchasePopup::BoostPurchasePopup__Purchase_m__0
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IModalPopupCreator *)0x0) {
    pIVar1 = x->klass;
    uVar2 = 0;
    uVar3._0_1_ = (pIVar1->_1).rank;
    uVar3._1_1_ = (pIVar1->_1).minimumAlignment;
    if (uVar3 != 0) {
      do {
        if (pIVar1->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
          iVar4 = pIVar1->interfaceOffsets[uVar2].offset;
          (*(code *)(&(x->klass->vtable).Create_1)[iVar4].method)
                    (x,(&(x->klass->vtable).Create_2)[iVar4].methodPtr);
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    puVar5 = (undefined4 *)
             func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,2);
    (*(code *)*puVar5)(x,puVar5[1]);
    return;
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

