
/* Void Clone(MVWorldObjectClient, Boolean, Boolean, Boolean) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::EditorWorldObjectCreation_Clone
               (EditorWorldObjectCreation *this,MVWorldObjectClient *original,bool cloneToRoot,
               bool setAsPreviewItem,bool goToInsert,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (goToInsert != 0) {
    pEVar1 = (this->fields).esm;
    if ((pEVar1 == (EditorStateMachine *)0x0) ||
       (this_00 = (pEVar1->fields)._.data,
       this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0)) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_00,StringLiteral_goToInsert,(CrossPlatformInputManager_VirtualButton *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
  }
  pEVar1 = (this->fields).esm;
  _goToInsert = 0x23;
  value = (Object *)func_?(TypeInfo__EditorEvent,&goToInsert);
  if (pEVar1 != (EditorStateMachine *)0x0) {
    FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar1,value,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
      pEVar3 = (pMVar2->fields).CloneWorldObjectTreeResponse;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__EditorWorldObjectCreation__CloneWorldObjectTreeResponseHandler_System__Object__CloneWorldObjectTreeResponseEventArgs_
                 ,
                 MethodInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>__EventHandler_System__Object__void__
                );
      pEVar4 = (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pEVar3,(Delegate *)this_01,(MethodInfo *)0x0);
      pEVar3 = (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0;
      if (pEVar4 != (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
        if (pEVar4->klass == TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>)
        {
          pEVar3 = pEVar4;
        }
        if (pEVar3 == (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
          func_?(pEVar4,
                          TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>);
          goto code_?;
        }
      }
      (pMVar2->fields).CloneWorldObjectTreeResponse = pEVar3;
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
        MVWorldObjectClientManager::MVWorldObjectClientManager_CloneWorldObjectTree
                  (pMVar2,original,0,setAsPreviewItem,cloneToRoot,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void CloneWorldObjectTreeResponseHandler(Object, CloneWorldObjectTreeResponseEventArgs) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::
     EditorWorldObjectCreation_CloneWorldObjectTreeResponseHandler
               (EditorWorldObjectCreation *this,Object *sender,
               CloneWorldObjectTreeResponseEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = e;
  if (e != (CloneWorldObjectTreeResponseEventArgs *)0x0) {
    if ((e->fields).Success == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameSessionData((MethodInfo *)0x0);
      if (pGVar2 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar2->fields).gameMode == 0) {
        e = (CloneWorldObjectTreeResponseEventArgs *)0x2f;
        pEVar3 = (this->fields).esm;
        value = (Object *)func_?(TypeInfo__EditorEvent,&e);
        if (pEVar3 == (EditorStateMachine *)0x0) goto code_?;
        FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar3,value,(MethodInfo *)0x0);
      }
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    e = (CloneWorldObjectTreeResponseEventArgs *)
        MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((MVWorldObjectClientManager *)e != (MVWorldObjectClientManager *)0x0) {
      source = (((MVWorldObjectClientManager *)e)->fields).CloneWorldObjectTreeResponse;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(
                                  TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__EditorWorldObjectCreation__CloneWorldObjectTreeResponseHandler_System__Object__CloneWorldObjectTreeResponseEventArgs_
                 ,
                 MethodInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>__EventHandler_System__Object__void__
                );
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
      pDVar5 = (Delegate *)0x0;
      if (pDVar4 != (Delegate *)0x0) {
        if ((EventHandler_1_CloneWorldObjectTreeResponseEventArgs___Class *)pDVar4->klass ==
            TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>) {
          pDVar5 = pDVar4;
        }
        pEVar6 = TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>;
        if (pDVar5 == (Delegate *)0x0) goto code_?;
      }
      e[4].fields.RootId = (int32_t)pDVar5;
      pEVar3 = (this->fields).esm;
      if ((pEVar3 != (EditorStateMachine *)0x0) &&
         (this_00 = (pEVar3->fields).selectionController, this_00 != (SelectionController *)0x0)) {
        SelectionController::SelectionController_SelectWO
                  (this_00,(pCVar1->fields).RootId,0,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pDVar4 = extraout_ECX;
  pEVar6 = extraout_EDX;
code_?:
  func_?(pDVar4,pEVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* KoGaMaPackageClient GetKoGaMaPackageFromItem(InventoryItem) */

KoGaMaPackageClient *
Assembly-CSharp.dll::EditorWorldObjectCreation::EditorWorldObjectCreation_GetKoGaMaPackageFromItem
          (InventoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (item != (InventoryItem *)0x0) {
    buffer = (item->fields).data;
    this = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this,buffer,(MethodInfo *)0x0);
    pKVar1 = (KoGaMaPackageClient *)func_?(TypeInfo__KoGaMaPackageClient);
    KoGaMaPackageClient::KoGaMaPackageClient__ctor(pKVar1,this,0,(MethodInfo *)0x0);
    if (pKVar1 != (KoGaMaPackageClient *)0x0) {
      KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(pKVar1,(MethodInfo *)0x0);
      return pKVar1;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pKVar1 = (KoGaMaPackageClient *)(*pcVar2)();
  return pKVar1;
}


/* List`1[MVWorldObjectClient] GetPlacedWinningConditions() */

List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::EditorWorldObjectCreation::EditorWorldObjectCreation_GetPlacedWinningConditions
          (EditorWorldObjectCreation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
     (pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                         (pMVar1,WorldObjectType__Enum_OculusKillLimit,(MethodInfo *)0x0),
     pLVar2 != (List_1_MVWorldObjectClient_ *)0x0)) {
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                       );
    if (0 < (int)pOVar3) {
      return pLVar2;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
       (pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                           (pMVar1,WorldObjectType__Enum_KillLimit,(MethodInfo *)0x0),
       pLVar2 != (List_1_MVWorldObjectClient_ *)0x0)) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                         );
      if (0 < (int)pOVar3) {
        return pLVar2;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
         (pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                             (pMVar1,WorldObjectType__Enum_CollectibleItem,(MethodInfo *)0x0),
         pLVar2 != (List_1_MVWorldObjectClient_ *)0x0)) {
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                            MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                           );
        if (0 < (int)pOVar3) {
          return pLVar2;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
           (pLVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                               (pMVar1,WorldObjectType__Enum_Flag,(MethodInfo *)0x0),
           pLVar2 != (List_1_MVWorldObjectClient_ *)0x0)) {
          pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                             );
          if (0 < (int)pOVar3) {
            return pLVar2;
          }
          return (List_1_MVWorldObjectClient_ *)0x0;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pLVar2 = (List_1_MVWorldObjectClient_ *)(*pcVar4)();
  return pLVar2;
}


/* Void Initialize(EditorStateMachine) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::EditorWorldObjectCreation_Initialize
               (EditorWorldObjectCreation *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).esm = esm;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pSVar1 = CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)this_00,(MethodInfo *)0x0);
    if (pSVar1 != (String *)0x0) {
      pDVar2 = (Delegate *)pSVar1[1].monitor;
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>
                                  );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__EditorWorldObjectCreation__WOCM_InitializedGameQueryData_System__Object__InitializedGameQueryDataEventArgs_
                 ,
                 MethodInfo__System__EventHandler<InitializedGameQueryDataEventArgs>__EventHandler_System__Object__void__
                );
      pDStack3 =
           mscorlib.dll::System::Delegate::Delegate_Combine
                     (pDVar2,(Delegate *)this_01,(MethodInfo *)0x0);
      pDVar2 = (Delegate *)0x0;
      if (pDStack3 == (Delegate *)0x0) {
code_?:
        pSVar1[1].monitor = (MonitorData *)pDVar2;
        return;
      }
      if ((EventHandler_1_InitializedGameQueryDataEventArgs___Class *)pDStack3->klass ==
          TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>) {
        pDVar2 = pDStack3;
      }
      pEStack4 = TypeInfo__System__EventHandler<InitializedGameQueryDataEventArgs>;
      if (pDVar2 != (Delegate *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
  pDStack3 = extraout_ECX;
  pEStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean IsItemAnAllowedWinningCondition(MVWorldObjectClient) */

bool Assembly-CSharp.dll::EditorWorldObjectCreation::
     EditorWorldObjectCreation_IsItemAnAllowedWinningCondition
               (EditorWorldObjectCreation *this,MVWorldObjectClient *worldObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (worldObject == (MVWorldObjectClient *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pOVar3 = System.Core.dll::System::Linq::Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::
           Object,System::Object]::
           Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                     ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *
                      )worldObject,(MethodInfo *)0x0);
  method_00 = 
  bool_MethodInfo__EditorWorldObjectCreation__IsWinningConditionPlaceable<KillLimitClient>__;
  if (((pOVar3 == (Object *)0x3f) ||
      (method_00 = 
       bool_MethodInfo__EditorWorldObjectCreation__IsWinningConditionPlaceable<OculusKillLimitClient>__
      , pOVar3 == (Object *)0x40)) ||
     (method_00 = 
      bool_MethodInfo__EditorWorldObjectCreation__IsWinningConditionPlaceable<FlagReachedClient>__,
     pOVar3 == (Object *)0x11)) {
    bVar2 = EditorWorldObjectCreation_IsWinningConditionPlaceable_4(this,method_00);
  }
  else {
    if (pOVar3 != (Object *)0x31) {
      return 1;
    }
    bVar2 = EditorWorldObjectCreation_IsWinningConditionPlaceable_4
                      (this,
                       bool_MethodInfo__EditorWorldObjectCreation__IsWinningConditionPlaceable<AllCollectiblesCollectedClient>__
                      );
  }
  if (bVar2 != 0) {
    return 1;
  }
  return 0;
}


/* Boolean IsWinningConditionPlaceable[OculusKillLimitClient]() */

bool Assembly-CSharp.dll::EditorWorldObjectCreation::
     EditorWorldObjectCreation_IsWinningConditionPlaceable_4
               (EditorWorldObjectCreation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (PrefabPool *)0x0) {
    pSVar1 = PrefabPool::PrefabPool_get_MVSoundEmitterPrefab(this_00,(MethodInfo *)0x0);
    if (pSVar1 != (SoundEmitterObject *)0x0) {
      cVar2 = (*(code *)(*method->parameters)->data)();
      return cVar2 != '\0';
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void OnAddItemFromInventory(InventoryItem) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::
     EditorWorldObjectCreation_OnAddItemFromInventory
               (EditorWorldObjectCreation *this,InventoryItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (item != (InventoryItem *)0x0) {
    buffer = (item->fields).data;
    this_01 = (BytePacker *)func_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this_01,buffer,(MethodInfo *)0x0);
    this_02 = (KoGaMaPackageClient *)func_?(TypeInfo__KoGaMaPackageClient);
    pKStack_1 = this_02;
    KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_02,this_01,0,(MethodInfo *)0x0);
    if (this_02 != (KoGaMaPackageClient *)0x0) {
      KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_02,(MethodInfo *)0x0);
      bVar2 = EditorWorldObjectCreation_ValidateAddItemFromInventory(this,this_02,(MethodInfo *)0x0)
      ;
      if (bVar2 == 0) {
code_?:
        KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_02,(MethodInfo *)0x0);
        return;
      }
      pEVar3 = (this->fields).esm;
      if (pEVar3 != (EditorStateMachine *)0x0) {
        while (bVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                                 (pEVar3,(MethodInfo *)0x0), bVar2 == 0) {
          pEVar3 = (this->fields).esm;
          if (((pEVar3 == (EditorStateMachine *)0x0) ||
              (pSVar4 = (pEVar3->fields).selectionController, pSVar4 == (SelectionController *)0x0))
             || (this_03 = SelectionController::SelectionController_get_ParentGroup
                                     (pSVar4,(MethodInfo *)0x0), this_03 == (MVGroup *)0x0))
          goto code_?;
          bVar2 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                            ((MVWorldObjectClient *)this_03,InteractionFlags__Enum_CantAddChildren,
                             (MethodInfo *)0x0);
          if (bVar2 == 0) break;
          pEVar3 = (this->fields).esm;
          if ((pEVar3 == (EditorStateMachine *)0x0) ||
             (pSVar4 = (pEVar3->fields).selectionController, pSVar4 == (SelectionController *)0x0))
          goto code_?;
          SelectionController::SelectionController_ExitGroup(pSVar4,(MethodInfo *)0x0);
          pEVar3 = (this->fields).esm;
          if (pEVar3 == (EditorStateMachine *)0x0) goto code_?;
        }
        iVar5 = -1;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar6 != (MVWorldObjectClientManager *)0x0) {
          bVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetUnmodifiedWorldObject
                            (pMVar6,this_02,(int32_t *)&stack0xfffffff8,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)StringLiteral_Creating_new_wo,(MethodInfo *)0x0);
            pEVar3 = (this->fields).esm;
            pOVar7 = (Object *)func_?(TypeInfo__EditorEvent,&stack0xfffffff4);
            if (pEVar3 != (EditorStateMachine *)0x0) {
              FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar3,pOVar7,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Quaternion);
              }
              pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                                 ((Quaternion *)&puStack_9,(MethodInfo *)0x0);
              puStack_9 = (undefined *)pQVar8->x;
              fVar10 = pQVar8->y;
              fVar11 = pQVar8->z;
              fVar12 = pQVar8->w;
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                  ((MethodInfo *)0x0);
              item = (InventoryItem *)(item->fields).itemID;
              pEVar3 = (this->fields).esm;
              if ((pEVar3 != (EditorStateMachine *)0x0) &&
                 (pSVar4 = (pEVar3->fields).selectionController,
                 pSVar4 != (SelectionController *)0x0)) {
                iVar5 = SelectionController::SelectionController_get_ParentGroupID
                                   (pSVar4,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  func_?(TypeInfo__UnityEngine__Vector3);
                }
                pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                                   (&VStack_14,(MethodInfo *)0x0);
                pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                   (&VStack_14,*pVVar13,10.0,(MethodInfo *)0x0);
                if (this_04 != (MVNetworkGame_OperationRequests *)0x0) {
                  rotation.y = fVar10;
                  rotation.x = (float)puStack_9;
                  rotation.z = fVar11;
                  rotation.w = fVar12;
                  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AddItemToWorld
                            (this_04,(int32_t)item,iVar5,*pVVar13,rotation,0,1,0,(MethodInfo *)0x0);
                  KoGaMaPackageClient::KoGaMaPackageClient_Destroy(this_02,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          else {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)StringLiteral_Found_wo_for_cloning,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar6 != (MVWorldObjectClientManager *)0x0) {
              pMStack_15 = (MVWorldObjectClient *)
                           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                     (pMVar6,iVar5,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?(_UNK_?);
                cRam_? = '\x01';
              }
              pEVar3 = (this->fields).esm;
              if ((pEVar3 != (EditorStateMachine *)0x0) &&
                 (this_00 = (pEVar3->fields)._.data,
                 this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                String,UnityStandardAssets::CrossPlatformInput::
                CrossPlatformInputManager+VirtualButton]::
                Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                          ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                            *)this_00,StringLiteral_goToInsert,
                           (CrossPlatformInputManager_VirtualButton *)0x0,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                          );
                pEVar3 = (this->fields).esm;
                item = (InventoryItem *)0x23;
                pOVar7 = (Object *)func_?(TypeInfo__EditorEvent,&item);
                if (pEVar3 != (EditorStateMachine *)0x0) {
                  FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar3,pOVar7,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                    func_?(TypeInfo__MVGameControllerBase);
                  }
                  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                  if (pMVar6 != (MVWorldObjectClientManager *)0x0) {
                    pEVar16 = (pMVar6->fields).CloneWorldObjectTreeResponse;
                    this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                               *)func_?(
                                                TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>
                                                );
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (this_05,(Object *)this,
                               MethodInfo__EditorWorldObjectCreation__CloneWorldObjectTreeResponseHandler_System__Object__CloneWorldObjectTreeResponseEventArgs_
                               ,
                               MethodInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>__EventHandler_System__Object__void__
                              );
                    pEVar17 = (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)
                              mscorlib.dll::System::Delegate::Delegate_Combine
                                        ((Delegate *)pEVar16,(Delegate *)this_05,(MethodInfo *)0x0);
                    pEVar16 = (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0;
                    if (pEVar17 != (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
                      if (pEVar17->klass ==
                          TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>) {
                        pEVar16 = pEVar17;
                      }
                      if (pEVar16 == (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
                        func_?(pEVar17,
                                        TypeInfo__System__EventHandler<CloneWorldObjectTreeResponseEventArgs>
                                       );
                        goto code_?;
                      }
                    }
                    (pMVar6->fields).CloneWorldObjectTreeResponse = pEVar16;
                    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                    if (pMVar6 != (MVWorldObjectClientManager *)0x0) {
                      MVWorldObjectClientManager::MVWorldObjectClientManager_CloneWorldObjectTree
                                (pMVar6,pMStack_15,0,0,0,(MethodInfo *)0x0);
                      this_02 = pKStack_1;
                      goto code_?;
                    }
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


/* Void OnAddNewPrototype(String, Single) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::EditorWorldObjectCreation_OnAddNewPrototype
               (EditorWorldObjectCreation *this,String *name,float scale,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pEVar1 = this;
  pEVar2 = (this->fields).esm;
  if (pEVar2 != (EditorStateMachine *)0x0) {
    while (bVar3 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                             (pEVar2,(MethodInfo *)0x0), bVar3 == 0) {
      pEVar2 = (pEVar1->fields).esm;
      if (((pEVar2 == (EditorStateMachine *)0x0) ||
          (pSVar4 = (pEVar2->fields).selectionController, pSVar4 == (SelectionController *)0x0)) ||
         (pMVar5 = SelectionController::SelectionController_get_ParentGroup
                             (pSVar4,(MethodInfo *)0x0), pMVar5 == (MVGroup *)0x0))
      goto code_?;
      fStack_6 = 0.0;
      bVar3 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                        ((MVWorldObjectClient *)pMVar5,InteractionFlags__Enum_CantAddChildren,
                         (MethodInfo *)0x0);
      if (bVar3 == 0) break;
      pEVar2 = (pEVar1->fields).esm;
      if ((pEVar2 == (EditorStateMachine *)0x0) ||
         (pSVar4 = (pEVar2->fields).selectionController, pSVar4 == (SelectionController *)0x0))
      goto code_?;
      SelectionController::SelectionController_ExitGroup(pSVar4,(MethodInfo *)0x0);
      pEVar2 = (pEVar1->fields).esm;
      if (pEVar2 == (EditorStateMachine *)0x0) goto code_?;
    }
    pEVar2 = (pEVar1->fields).esm;
    afStack_7[1] = 2.66247e-44;
    value = (Object *)func_?(TypeInfo__EditorEvent,afStack_7 + 1);
    if (pEVar2 != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar2,value,(MethodInfo *)0x0);
      customData = (Dictionary_2_System_Object_System_Object_ *)
                   func_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)customData,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      this = (EditorWorldObjectCreation *)CONCAT13(1,this._0_3_);
      pSVar8 = (String *)func_?(TypeInfo__System__Byte,(int)&this + 3);
      afStack_7[0] = scale;
      pCVar9 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Single,afStack_7);
      if (customData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                    *)customData,pSVar8,pCVar9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        auStack_10[1] = 2;
        pSVar8 = (String *)func_?(TypeInfo__System__Byte,auStack_10 + 1);
        pEVar2 = (pEVar1->fields).esm;
        if ((pEVar2 != (EditorStateMachine *)0x0) &&
           (this_00 = (pEVar2->fields).cubeModelingStateMachine,
           this_00 != (CubeModelingStateMachine *)0x0)) {
          auStack_10[0] = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                   (this_00,(MethodInfo *)0x0);
          pCVar9 = (CrossPlatformInputManager_VirtualButton *)
                   func_?(TypeInfo__System__Byte,auStack_10);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                      *)customData,pSVar8,pCVar9,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          uStack_11 = 3;
          pSVar8 = (String *)func_?(TypeInfo__System__Byte,&uStack_11);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((this_02 != (MVNetworkGame *)0x0) &&
             (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0),
             this_03 != (MVLocalPlayer *)0x0)) {
            pOStack_12 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                         TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                         TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                   ((TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)this_03,
                                    (MethodInfo *)0x0);
            pCVar9 = (CrossPlatformInputManager_VirtualButton *)
                     func_?(TypeInfo__System__Int32,&pOStack_12);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]
            ::
            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                      ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                        *)customData,pSVar8,pCVar9,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
            pEVar2 = (pEVar1->fields).esm;
            if (pEVar2 != (EditorStateMachine *)0x0) {
              this_01 = (pEVar2->fields)._.data;
              uStack_13 = 1;
              value_00 = (Theme *)func_?(TypeInfo__System__Boolean,&uStack_13);
              if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
                Dictionary_2_System_String_Theme__set_Item
                          ((Dictionary_2_System_String_Theme_ *)this_01,StringLiteral_IsNewPrototype
                           ,value_00,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                          );
                this_04 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                    ((MethodInfo *)0x0);
                this_05 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                if ((this_05 != (MVWorldObjectClientManager *)0x0) &&
                   (pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                                       (this_05,(MethodInfo *)0x0), pMVar5 != (MVGroup *)0x0)) {
                  groupId = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                            Collection_1_VoxelHit__get_Items
                                      ((Collection_1_VoxelHit_ *)pMVar5,(MethodInfo *)0x0);
                  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                    func_?(TypeInfo__UnityEngine__Vector3);
                  }
                  pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                                     (&VStack_15,(MethodInfo *)0x0);
                  pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                     (&VStack_16,*pVVar14,10.0,(MethodInfo *)0x0);
                  VStack_15.y = pVVar14->x;
                  VStack_15.z = pVVar14->y;
                  fStack_17 = pVVar14->z;
                  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                       0x2000000) != 0) &&
                     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                    func_?(TypeInfo__UnityEngine__Quaternion);
                  }
                  pQVar18 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                            Quaternion_get_identity((Quaternion *)&fStack_6,(MethodInfo *)0x0);
                  fStack_6 = pQVar18->x;
                  puStack_19 = (undefined *)pQVar18->y;
                  fVar20 = pQVar18->z;
                  fVar21 = pQVar18->w;
                  pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_one
                                     (&VStack_16,(MethodInfo *)0x0);
                  pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                     (&VStack_16,*pVVar14,scale,(MethodInfo *)0x0);
                  if (this_04 != (MVNetworkGame_OperationRequests *)0x0) {
                    position.z = fStack_17;
                    position.x = VStack_15.y;
                    position.y = VStack_15.z;
                    rotation.y = (float)puStack_19;
                    rotation.x = fStack_6;
                    rotation.z = fVar20;
                    rotation.w = fVar21;
                    MVNetworkGame+OperationRequests::
                    MVNetworkGame_OperationRequests_RequestBuiltInItem
                              (this_04,BuiltInItem__Enum_CubeModel,(int32_t)groupId,customData,
                               position,rotation,*pVVar14,0,1,(MethodInfo *)0x0);
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
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Boolean ValidateAddItemFromInventory(KoGaMaPackageClient) */

bool Assembly-CSharp.dll::EditorWorldObjectCreation::
     EditorWorldObjectCreation_ValidateAddItemFromInventory
               (EditorWorldObjectCreation *this,KoGaMaPackageClient *package,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar4 = in_stack_5 & 0xffffffff00000000;
  func_?();
  if ((package != (KoGaMaPackageClient *)0x0) &&
     (this_00 = (package->fields).worldObjects,
     this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) {
    uVar4 = CONCAT44((int)(uVar4 >> 0x20),
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                     );
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
              Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                        ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                        );
    if (this_01 !=
        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0) {
      uVar4 = CONCAT44(this_01,(Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                                 *)&stack0xffffffb4);
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                  *)&stack0xffffffb4,this_01,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                );
      uStack_1 = 0;
      do {
        cVar6 = func_?();
        if (cVar6 == '\0') {
          iVar7 = 200;
code_?:
          uStack_1 = 0xffffffff;
          func_?();
          if (iVar7 != 0xca) {
            *unaff_FS_OFFSET = uStack_3;
            return 1;
          }
          *unaff_FS_OFFSET = uStack_3;
          return 0;
        }
        worldObject = (MVWorldObjectClient *)func_?();
        if (worldObject == (MVWorldObjectClient *)0x0) break;
        pIVar8 = (worldObject->klass->vtable).ShallowCopy.methodPtr;
        uVar4 = CONCAT44((int)(uVar4 >> 0x20),pIVar8);
        cVar6 = (*(code *)(worldObject->klass->vtable).IsSingletonObject.method)(worldObject,pIVar8)
        ;
        if (cVar6 != '\0') {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          pOVar9 = System.Core.dll::System::Linq::
                   Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                   Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                             ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                               *)worldObject,(MethodInfo *)0x0);
          uVar4 = uVar4 & 0xffffffff00000000;
          if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
          this_03 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                              (this_02,(WorldObjectType__Enum)pOVar9,in_stack_10);
          if (this_03 == (List_1_MVWorldObjectClient_ *)0x0) break;
          pOVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_03,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                             );
          if (0 < (int)pOVar9) {
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            uVar4 = uVar4 & 0xffffffff00000000;
            if (this_04 == (MainCameraManager *)0x0) goto code_?;
            pMVar11 = MainCameraManager::MainCameraManager_get_CurrentCamera
                               (this_04,(MethodInfo *)0x0);
            uVar4 = 0;
            pIVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_03,0,
                                MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                               );
            if (pMVar11 == (MVCameraBase *)0x0) break;
            func_?(0xd,pMVar11,pIVar12,0x40000000,0);
            pSVar13 = TM::TM__(StringLiteral_There_can_be_only_one_of_this_ob,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
              func_?();
            }
            NotificationController::NotificationController_PushNotification
                      (pSVar13,(Sprite *)0x0,5,(MethodInfo *)0x0);
            iVar7 = 0xca;
            goto code_?;
          }
        }
        bVar14 = EditorWorldObjectCreation_IsItemAnAllowedWinningCondition
                          (this,worldObject,(MethodInfo *)0x0);
        if (bVar14 == 0) {
          pSVar13 = TM::TM__(StringLiteral_Only_one_winning_condition_will_,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
            func_?();
          }
          uVar4 = ZEXT48(pSVar13) << 0x20;
          NotificationController::NotificationController_PushNotification
                    (pSVar13,(Sprite *)0x0,5,(MethodInfo *)0x0);
        }
      } while( true );
    }
  }
  uVar4 = uVar4 & 0xffffffff00000000;
code_?:
  func_?(uVar4);
  func_?();
  pcVar15 = (code *)swi(3);
  bVar14 = (*pcVar15)();
  return bVar14;
}


/* Void WOCM_InitializedGameQueryData(Object, InitializedGameQueryDataEventArgs) */

void Assembly-CSharp.dll::EditorWorldObjectCreation::
     EditorWorldObjectCreation_WOCM_InitializedGameQueryData
               (EditorWorldObjectCreation *this,Object *sender,InitializedGameQueryDataEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_02 != (MVNetworkGame *)0x0) &&
      (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0),
      this_03 != (MVLocalPlayer *)0x0)) &&
     (pSVar1 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name
                         ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_03,(MethodInfo *)0x0),
     e != (InitializedGameQueryDataEventArgs *)0x0)) {
    if (pSVar1 != (String *)(e->fields).InstigatorActorNumber) {
      return;
    }
    pEVar2 = (this->fields).esm;
    if (pEVar2 != (EditorStateMachine *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pOVar3 = (pEVar2->fields)._.curEvent;
      if (pOVar3 != (Object *)0x0) {
        pEVar4 = TypeInfo__EditorEvent;
        if ((pOVar3->klass->_0).element_class != (TypeInfo__EditorEvent->_0).element_class)
        goto code_?;
        piVar5 = (int *)func_?(pOVar3);
        if (*piVar5 != 0x13) {
          return;
        }
        this_00 = (e->fields).RootWO;
        pEVar2 = (this->fields).esm;
        if (((this_00 != (MVWorldObjectClient *)0x0) &&
            (id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0),
            pEVar2 != (EditorStateMachine *)0x0)) &&
           (this_01 = (pEVar2->fields).selectionController, this_01 != (SelectionController *)0x0))
        {
          SelectionController::SelectionController_SelectWO
                    (this_01,(int32_t)id,0,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pOVar3 = extraout_ECX;
  pEVar4 = extraout_EDX;
code_?:
  func_?(pOVar3,pEVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

