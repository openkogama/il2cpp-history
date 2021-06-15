
/* Void AddGameQueryDataToGameWorld(BytePacker, Int32) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddGameQueryDataToGameWorld
               (WorldNetwork *this,BytePacker *queryData,int32_t instigatorActorNumber,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
             ,
             MethodInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>__UnityAction_System__Object__void__
            );
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?();
  }
  id = KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
                 (queryData,
                  (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                   *)this_01,1,(MethodInfo *)0x0);
  this_00 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    root = (MVWorldObjectClient *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (this_00,id,(MethodInfo *)0x0);
    if (root != (MVWorldObjectClient *)0x0) {
      (*(code *)(root->klass->vtable).Initialize.method)();
    }
    WorldNetwork_CreateQueryEvent(this,root,id,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void AddLink(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddLink
               (WorldNetwork *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (Link_1 *)func_?(TypeInfo__MV__WorldObject__Link);
  MVWorldObject.dll::MV::WorldObject::Link::Link_1__ctor_1(this_01,(MethodInfo *)0x0);
  pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__LinkDataParameter,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((this_01 != (Link_1 *)0x0) && (pPVar2 != (Pool *)0x0)) {
      if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar3 = (int32_t *)func_?();
      (this_01->fields).id = *piVar3;
      pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__LinkDataParameter,
                                       CONCAT13((char)((uint)&stack0xfffffffa >> 0x18),
                                                CONCAT12(1,(short)&stack0xfffffffa)));
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar2 != (Pool *)0x0) {
        if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar3 = (int32_t *)func_?();
        (this_01->fields).outputWOID = *piVar3;
        pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__LinkDataParameter,
                                         CONCAT22((short)((uint)&stack0xfffffff9 >> 0x10),
                                                  CONCAT11(2,(char)&stack0xfffffff9)));
        pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pPVar2 != (Pool *)0x0) {
          if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar3 = (int32_t *)func_?();
          (this_01->fields).inputWOID = *piVar3;
          pMVar4 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
          if (pMVar4 != (MVWorldObjectClientManager *)0x0) {
            outputWo = (MVWorldObjectClient *)
                       MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (pMVar4,(this_01->fields).outputWOID,(MethodInfo *)0x0);
            pMVar4 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
            if (pMVar4 != (MVWorldObjectClientManager *)0x0) {
              inputWo = (MVWorldObjectClient *)
                        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                  (pMVar4,(this_01->fields).inputWOID,(MethodInfo *)0x0);
              this_00 = (this->fields).links;
              if (this_00 != (Links *)0x0) {
                Links::Links_AddLink(this_00,this_01,outputWo,inputWo,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  pPVar2 = (Pool *)func_?();
code_?:
  func_?(pPVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddLink(Link) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddLink_1
               (WorldNetwork *this,Link_1 *link,MethodInfo *method)

{
  if (link != (Link_1 *)0x0) {
    pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      outputWo = (MVWorldObjectClient *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar1,(link->fields).outputWOID,(MethodInfo *)0x0);
      pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        inputWo = (MVWorldObjectClient *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar1,(link->fields).inputWOID,(MethodInfo *)0x0);
        this_00 = (this->fields).links;
        if (this_00 != (Links *)0x0) {
          Links::Links_AddLink(this_00,link,outputWo,inputWo,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddObjectLink(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddObjectLink
               (WorldNetwork *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (ObjectLink *)func_?(TypeInfo__MV__WorldObject__ObjectLink);
  MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1(this_01,(MethodInfo *)0x0);
  pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,
                                   &stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if ((this_01 != (ObjectLink *)0x0) && (pPVar2 != (Pool *)0x0)) {
      if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      piVar3 = (int32_t *)func_?();
      (this_01->fields).id = *piVar3;
      pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,
                                       CONCAT13((char)((uint)&stack0xfffffffa >> 0x18),
                                                CONCAT12(1,(short)&stack0xfffffffa)));
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar2 != (Pool *)0x0) {
        if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar3 = (int32_t *)func_?();
        (this_01->fields).objectConnectorWOID = *piVar3;
        pTVar1 = (Type *)func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,
                                         CONCAT22((short)((uint)&stack0xfffffff9 >> 0x10),
                                                  CONCAT11(2,(char)&stack0xfffffff9)));
        pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pPVar2 != (Pool *)0x0) {
          if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar3 = (int32_t *)func_?();
          (this_01->fields).objectWOID = *piVar3;
          pMVar4 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
          if (pMVar4 != (MVWorldObjectClientManager *)0x0) {
            objectConnectorWo =
                 (MVWorldObjectClient *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar4,(this_01->fields).objectConnectorWOID,(MethodInfo *)0x0);
            pMVar4 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
            if (pMVar4 != (MVWorldObjectClientManager *)0x0) {
              objectWo = (MVWorldObjectClient *)
                         MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                   (pMVar4,(this_01->fields).objectWOID,(MethodInfo *)0x0);
              this_00 = (this->fields).objectLinks;
              if (this_00 != (ObjectLinks *)0x0) {
                ObjectLinks::ObjectLinks_AddObjectLink
                          (this_00,this_01,objectConnectorWo,objectWo,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  pPVar2 = (Pool *)func_?();
code_?:
  func_?(pPVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddObjectLink(ObjectLink) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddObjectLink_1
               (WorldNetwork *this,ObjectLink *objectLink,MethodInfo *method)

{
  if (objectLink != (ObjectLink *)0x0) {
    pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      objectConnectorWo =
           (MVWorldObjectClient *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (pMVar1,(objectLink->fields).objectConnectorWOID,(MethodInfo *)0x0);
      pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        objectWo = (MVWorldObjectClient *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (pMVar1,(objectLink->fields).objectWOID,(MethodInfo *)0x0);
        this_00 = (this->fields).objectLinks;
        if (this_00 != (ObjectLinks *)0x0) {
          ObjectLinks::ObjectLinks_AddObjectLink
                    (this_00,objectLink,objectConnectorWo,objectWo,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddPrototype(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddPrototype
               (WorldNetwork *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  inventory = (this->fields)._.worldInventory;
  if (inventory == (MVWorldInventory *)0x0) {
    uStack_1 = (RuntimePrototypeCubeModel__Class *)0x0;
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = (RuntimePrototypeCubeModel__Class *)((uint)uStack_1 & 0xffffff);
  pTVar3 = (Type *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,
                                   (int)&uStack_1 + 3);
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?(0);
  }
  else {
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,pTVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar5 = CONCAT44(TypeInfo__System__Int32,pPVar4);
    if (pPVar4 == (Pool *)0x0) goto code_?;
    if ((pPVar4->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    func_?(pPVar4);
    uStack_1._0_3_ = CONCAT12(1,(undefined2)uStack_1);
    pTVar3 = (Type *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,
                                     (int)&uStack_1 + 2);
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,pTVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar5 = CONCAT44(TypeInfo__System__Single,pPVar4);
    if (pPVar4 == (Pool *)0x0) goto code_?;
    if ((pPVar4->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
    goto code_?;
    pfVar6 = (float *)func_?(pPVar4);
    scale = *pfVar6;
    uStack_1._0_2_ = CONCAT11(3,(undefined1)uStack_1);
    pTVar3 = (Type *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,
                                     (int)&uStack_1 + 1);
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,pTVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar5 = CONCAT44(TypeInfo__System__Int32,pPVar4);
    if (pPVar4 == (Pool *)0x0) goto code_?;
    if ((pPVar4->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    func_?(pPVar4);
    uStack_1 = (RuntimePrototypeCubeModel__Class *)CONCAT31(uStack_1._1_3_,2);
    pTVar3 = (Type *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStack_1);
    pRVar7 = unaff_EDI;
    unaff_EDI = (RuntimePrototypeCubeModel__Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)data,pTVar3,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    unaff_EBX = (RuntimePrototypeCubeModel__Class *)TypeInfo__System__Byte;
    if (unaff_EDI == (RuntimePrototypeCubeModel__Class *)0x0) {
      data_00 = (Byte__Array *)0x0;
code_?:
      unaff_EBX = pRVar7;
      uStack_1 = TypeInfo__RuntimePrototypeCubeModel;
      authorProfileId = &UNK_?;
      unaff_EDI = (RuntimePrototypeCubeModel__Class *)func_?();
      RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_1
                ((RuntimePrototypeCubeModel *)unaff_EDI,(int32_t)unaff_EBX,(int32_t)authorProfileId,
                 scale,data_00,(MethodInfo *)0x0);
      this_00 = (inventory->fields).runtimePrototypes;
      if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)unaff_EBX,
                   (Object *)unaff_EDI,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                  );
        this_01 = (inventory->fields).OnWorldInventoryChange;
        if (this_01 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
          MVWorldInventory+OnWorldInventoryChangeDelegate::
          MVWorldInventory_OnWorldInventoryChangeDelegate_Invoke
                    (this_01,inventory,(MethodInfo *)0x0);
        }
        return;
      }
      goto code_?;
    }
    uStack_1 = (RuntimePrototypeCubeModel__Class *)TypeInfo__System__Byte;
    pRVar7 = (RuntimePrototypeCubeModel__Class *)&UNK_?;
    data_00 = (Byte__Array *)func_?(unaff_EDI);
    if (data_00 != (Byte__Array *)0x0) goto code_?;
  }
  uStack_1 = unaff_EBX;
  uVar5 = func_?(unaff_EDI);
code_?:
  func_?(uVar5);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddWorldObject(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddWorldObject
               (WorldNetwork *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  this_00 = (this->fields)._.worldObjectClientManager;
  if (this_00 != (MVWorldObjectClientManagerNetwork *)0x0) {
    MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_AddWorldObject
              (this_00,data,(this->fields)._.worldInventory,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void CloneLinks(CloneBookkeeping) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_CloneLinks
               (WorldNetwork *this,CloneBookkeeping *cloneBookkeeping,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  if ((cloneBookkeeping != (CloneBookkeeping *)0x0) &&
     (this_00 = (List_1_UnityEngine_Color32_ *)(cloneBookkeeping->fields).linkIds,
     puStack_7 = (undefined4 *)&stack0xffffffa8, puStack_4 = &stack0xffffffa8,
     this_00 != (List_1_UnityEngine_Color32_ *)0x0)) {
    puStack_7 = (undefined4 *)&stack0xffffffa8;
    puStack_4 = &stack0xffffffa8;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l;
    CStack_6.monitor = (MonitorData *)pLVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
    uStack_1 = 0;
    while( true ) {
      do {
        do {
          method_00 = 
          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__;
          cVar10 = func_?(&CStack_6);
          if (cVar10 == '\0') {
            *puStack_7 = 0xea;
            uStack_1 = 0xffffffff;
            func_?(&CStack_6,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                           );
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          linkID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (&CStack_6,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                             );
          pDStack_11 = (cloneBookkeeping->fields).worldObjectIdsMaps;
          pLVar12 = (this->fields).links;
          if (((pLVar12 == (Links *)0x0) ||
              (pLVar13 = Links::Links_GetLink(pLVar12,(int32_t)linkID,(MethodInfo *)in_stack_14)
              , pLVar13 == (Link_1 *)0x0)) ||
             (pDStack_11 == (Dictionary_2_System_Int32_System_Int32_ *)0x0)) goto code_?;
          in_stack_14 = (Dictionary_2_System_Int32_System_Int32_ *)&UNK_?;
          bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Int32]::Dictionary_2_System_Int32_System_Int32__ContainsKey
                            (pDStack_11,(pLVar13->fields).inputWOID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                            );
        } while (bVar15 == 0);
        pDStack_11 = (cloneBookkeeping->fields).worldObjectIdsMaps;
        pLVar12 = (this->fields).links;
        if (((pLVar12 == (Links *)0x0) ||
            (pLVar13 = Links::Links_GetLink(pLVar12,(int32_t)linkID,in_stack_16),
            pLVar13 == (Link_1 *)0x0)) ||
           (pDStack_11 == (Dictionary_2_System_Int32_System_Int32_ *)0x0)) goto code_?;
        in_stack_16 = (MethodInfo *)&UNK_?;
        bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Int32]::Dictionary_2_System_Int32_System_Int32__ContainsKey
                          (pDStack_11,(pLVar13->fields).outputWOID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                          );
      } while (bVar15 == 0);
      pDStack_11 = (cloneBookkeeping->fields).worldObjectIdsMaps;
      pLVar12 = (this->fields).links;
      if (((pLVar12 == (Links *)0x0) ||
          (pLVar13 = Links::Links_GetLink(pLVar12,(int32_t)linkID,method_00), pLVar13 == (Link_1 *)0x0)
          ) || (pDStack_11 == (Dictionary_2_System_Int32_System_Int32_ *)0x0)) break;
      iStack_17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Int32]::Dictionary_2_System_Int32_System_Int32__get_Item
                            (pDStack_11,(pLVar13->fields).inputWOID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                            );
      pDStack_11 = (cloneBookkeeping->fields).worldObjectIdsMaps;
      pLVar12 = (this->fields).links;
      if (((pLVar12 == (Links *)0x0) ||
          (pLVar13 = Links::Links_GetLink(pLVar12,(int32_t)linkID,in_stack_18),
          pLVar13 == (Link_1 *)0x0)) ||
         (pDStack_11 == (Dictionary_2_System_Int32_System_Int32_ *)0x0)) break;
      in_stack_18 = (MethodInfo *)&UNK_?;
      pDStack_11 = (Dictionary_2_System_Int32_System_Int32_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Int32]::Dictionary_2_System_Int32_System_Int32__get_Item
                             (pDStack_11,(pLVar13->fields).outputWOID,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                             );
      pLVar12 = (this->fields).links;
      iStack_19 = (cloneBookkeeping->fields).cloneLinkIdIncrement;
      if ((pLVar12 == (Links *)0x0) ||
         (pLVar13 = Links::Links_GetLink(pLVar12,(int32_t)linkID,(MethodInfo *)0x0),
         pLVar13 == (Link_1 *)0x0)) break;
      _bStack_1c = CONCAT31(uStack_20,(pLVar13->fields).isSet);
      pLVar13 = (Link_1 *)func_?();
      in_stack_14 = pDStack_11;
      MVWorldObject.dll::MV::WorldObject::Link::Link_1__ctor
                (pLVar13,iStack_19,(int32_t)pDStack_11,iStack_17,(bool)_bStack_1c,(MethodInfo *)0x0);
      in_stack_16 = (MethodInfo *)&UNK_?;
      WorldNetwork_AddLink_1(this,pLVar13,(MethodInfo *)0x0);
      piVar21 = &(cloneBookkeeping->fields).cloneLinkIdIncrement;
      *piVar21 = *piVar21 + 1;
    }
  }
code_?:
  func_?(0);
  func_?(cloneBookkeeping,0,0);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void CloneObjectLinks(CloneBookkeeping) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_CloneObjectLinks
               (WorldNetwork *this,CloneBookkeeping *cloneBookkeeping,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_6.monitor = (MonitorData *)0x0;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_6.fields.syncRoot = (Object *)0x0;
  func_?();
  puStack_7 = (undefined4 *)&stack0xffffffa8;
  puStack_4 = &stack0xffffffa8;
  if ((cloneBookkeeping != (CloneBookkeeping *)0x0) &&
     (this_00 = (List_1_UnityEngine_Color32_ *)(cloneBookkeeping->fields).objectLinkIds,
     puStack_7 = (undefined4 *)&stack0xffffffa8, puStack_4 = &stack0xffffffa8,
     this_00 != (List_1_UnityEngine_Color32_ *)0x0)) {
    puStack_7 = (undefined4 *)&stack0xffffffa8;
    puStack_4 = &stack0xffffffa8;
    pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_9,this_00,
                        MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l;
    CStack_6.monitor = (MonitorData *)pLVar8->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
    uStack_1 = 0;
    while( true ) {
      do {
        do {
          method_00 = 
          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__;
          cVar10 = func_?(&CStack_6);
          if (cVar10 == '\0') {
            *puStack_7 = 0xea;
            uStack_1 = 0xffffffff;
            func_?(&CStack_6,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                           );
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          objectLinkID = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                         Json::Serialization::JsonProperty]::
                         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                   (&CStack_6,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                                   );
          pDStack_11 = (cloneBookkeeping->fields).worldObjectIdsMaps;
          pOVar12 = (this->fields).objectLinks;
          if (((pOVar12 == (ObjectLinks *)0x0) ||
              (pOVar13 = ObjectLinks::ObjectLinks_GetObjectLink
                                  (pOVar12,(int32_t)objectLinkID,(MethodInfo *)in_stack_14),
              pOVar13 == (ObjectLink *)0x0)) ||
             (pDStack_11 == (Dictionary_2_System_Int32_System_Int32_ *)0x0)) goto code_?;
          in_stack_14 = (Dictionary_2_System_Int32_System_Int32_ *)&UNK_?;
          bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Int32]::Dictionary_2_System_Int32_System_Int32__ContainsKey
                            (pDStack_11,(pOVar13->fields).objectConnectorWOID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                            );
        } while (bVar15 == 0);
        pDStack_11 = (cloneBookkeeping->fields).worldObjectIdsMaps;
        pOVar12 = (this->fields).objectLinks;
        if (((pOVar12 == (ObjectLinks *)0x0) ||
            (pOVar13 = ObjectLinks::ObjectLinks_GetObjectLink
                                (pOVar12,(int32_t)objectLinkID,in_stack_16),
            pOVar13 == (ObjectLink *)0x0)) ||
           (pDStack_11 == (Dictionary_2_System_Int32_System_Int32_ *)0x0)) goto code_?;
        in_stack_16 = (MethodInfo *)&UNK_?;
        bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Int32]::Dictionary_2_System_Int32_System_Int32__ContainsKey
                          (pDStack_11,(pOVar13->fields).objectWOID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                          );
      } while (bVar15 == 0);
      pDStack_11 = (cloneBookkeeping->fields).worldObjectIdsMaps;
      pOVar12 = (this->fields).objectLinks;
      if (((pOVar12 == (ObjectLinks *)0x0) ||
          (pOVar13 = ObjectLinks::ObjectLinks_GetObjectLink(pOVar12,(int32_t)objectLinkID,method_00),
          pOVar13 == (ObjectLink *)0x0)) ||
         (pDStack_11 == (Dictionary_2_System_Int32_System_Int32_ *)0x0)) break;
      iStack_17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Int32]::Dictionary_2_System_Int32_System_Int32__get_Item
                            (pDStack_11,(pOVar13->fields).objectWOID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                            );
      pDStack_11 = (cloneBookkeeping->fields).worldObjectIdsMaps;
      pOVar12 = (this->fields).objectLinks;
      if (((pOVar12 == (ObjectLinks *)0x0) ||
          (pOVar13 = ObjectLinks::ObjectLinks_GetObjectLink
                              (pOVar12,(int32_t)objectLinkID,in_stack_18),
          pOVar13 == (ObjectLink *)0x0)) ||
         (pDStack_11 == (Dictionary_2_System_Int32_System_Int32_ *)0x0)) break;
      in_stack_18 = (MethodInfo *)&UNK_?;
      pDStack_11 = (Dictionary_2_System_Int32_System_Int32_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Int32]::Dictionary_2_System_Int32_System_Int32__get_Item
                             (pDStack_11,(pOVar13->fields).objectConnectorWOID,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                             );
      pOVar12 = (this->fields).objectLinks;
      iStack_19 = (cloneBookkeeping->fields).cloneObjectLinkIdIncrement;
      if ((pOVar12 == (ObjectLinks *)0x0) ||
         (pOVar13 = ObjectLinks::ObjectLinks_GetObjectLink
                             (pOVar12,(int32_t)objectLinkID,(MethodInfo *)0x0),
         pOVar13 == (ObjectLink *)0x0)) break;
      _bStack_1c = CONCAT31(uStack_20,(pOVar13->fields).isSet);
      pOVar13 = (ObjectLink *)func_?();
      in_stack_14 = pDStack_11;
      MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor
                (pOVar13,iStack_19,(int32_t)pDStack_11,iStack_17,(bool)_bStack_1c,(MethodInfo *)0x0);
      in_stack_16 = (MethodInfo *)&UNK_?;
      WorldNetwork_AddObjectLink_1(this,pOVar13,(MethodInfo *)0x0);
      piVar21 = &(cloneBookkeeping->fields).cloneObjectLinkIdIncrement;
      *piVar21 = *piVar21 + 1;
    }
  }
code_?:
  func_?(0);
  func_?(cloneBookkeeping,0,0);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void ConstructRuntimeEventManager() */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_ConstructRuntimeEventManager
               (WorldNetwork *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    cubeModelPrototypeTerrain =
         (MVCubeModelPrototypeTerrain *)
         MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                   (pMVar1,
                    MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                   );
    pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      cubeModelFineGrainedTerrain =
           (MVCubeModelFineGrainedTerrain *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                     (pMVar1,
                      MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                     );
      this_00 = (RuntimeEventManagerNetwork *)func_?(TypeInfo__RuntimeEventManagerNetwork);
      RuntimeEventManagerNetwork::RuntimeEventManagerNetwork__ctor
                (this_00,cubeModelPrototypeTerrain,cubeModelFineGrainedTerrain,(MethodInfo *)0x0);
      (this->fields)._.runtimeEventManagerNetwork = this_00;
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CreateGameWorldFromQueryData(BytePacker, Int32) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_CreateGameWorldFromQueryData
               (WorldNetwork *this,BytePacker *queryData,int32_t instigatorActorNumber,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WorldNetwork___CreateGameWorldFromQueryData_c__AnonStorey0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = queryData;
    (this_00->fields).state = instigatorActorNumber;
    (this_00->fields).originalScale.x = (float)this;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (this_01 != (MainCameraManager *)0x0) {
      camera = (Camera *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                          (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      CullingApiWrapper::CullingApiWrapper_Init
                (10000,camera,TypeInfo__CullingApiWrapper->static_fields->baseDistance,
                 (MethodInfo *)0x0);
      bp = (this_00->fields)._._._._.m_CachedPtr;
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this,
                 MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>__UnityAction_System__Object__void__
                );
      this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_03,(Object *)this_00,
                 MethodInfo__WorldNetwork___CreateGameWorldFromQueryData_c__AnonStorey0____m__0_int_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                );
      if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
        func_?();
      }
      KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaDataAsync
                (bp,(UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                     *)this_02,1,(UnityAction_1_System_Int32_ *)this_03,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void CreateQueryEvent(MVWorldObjectClient, Int32) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_CreateQueryEvent
               (WorldNetwork *this,MVWorldObjectClient *root,int32_t instigatorActorNumber,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._.InitializedGameQueryData !=
      (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    this_01 = (InitializedGameQueryDataEventArgs *)
              func_?(TypeInfo__InitializedGameQueryDataEventArgs);
    InitializedGameQueryDataEventArgs::InitializedGameQueryDataEventArgs__ctor
              (this_01,root,instigatorActorNumber,(MethodInfo *)0x0);
    this_00 = (this->fields)._.InitializedGameQueryData;
    if (this_00 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::EventHandler`1[InitializedGameQueryDataEventArgs]::
    EventHandler_1_InitializedGameQueryDataEventArgs__Invoke
              (this_00,(Object *)this,this_01,
               MethodInfo__System__EventHandler<InitializedGameQueryDataEventArgs>__Invoke_System__Object__InitializedGameQueryDataEventArgs_
              );
  }
  return;
}


/* Void DeserializeRuntimeEvents(BytePacker) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_DeserializeRuntimeEvents
               (WorldNetwork *this,BytePacker *queryData,MethodInfo *method)

{
  this_00 = (RuntimeEventManager *)(this->fields)._.runtimeEventManagerNetwork;
  if (this_00 == (RuntimeEventManager *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (queryData != (BytePacker *)0x0) {
    iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                      (queryData,(MethodInfo *)0x0);
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        this_01 = (SingleCubeFineGrainedEvent *)
                  MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                  RuntimeEvent_Create(queryData,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        if (this_01 == (SingleCubeFineGrainedEvent *)0x0) goto code_?;
        RVar4 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                RuntimeEvent_get_RuntimeEventType((RuntimeEvent *)this_01,(MethodInfo *)0x0);
        in_stack_5 = (undefined *)CONCAT31((int3)((uint)in_stack_5 >> 8),(char)RVar4);
        iVar6 = 0;
        RVar7 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                RuntimeEvent_GetRuntimeEventObjectType
                          ((RuntimeEventType__Enum)in_stack_5,(MethodInfo *)0x0);
        if ((char)RVar7 == '\x01') {
          bVar8 = (TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent->_1).
                  naturalAligment;
          if (((((RuntimeEvent__Class *)this_01->klass)->_1).naturalAligment < bVar8) ||
             ((((RuntimeEvent__Class *)this_01->klass)->_1).typeHierarchy[bVar8 - 1] !=
              (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent))
          {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          pSVar10 = (SingleCubeFineGrainedEvent *)0x0;
          if (bVar9) {
            pSVar10 = this_01;
          }
          if (pSVar10 == (SingleCubeFineGrainedEvent *)0x0) goto code_?;
          in_stack_5 = &UNK_?;
          RuntimeEventManager::RuntimeEventManager_HandleEvent(this_00,pSVar10,(MethodInfo *)0x0);
        }
        else if ((char)RVar7 == '\x02') {
          bVar8 = (TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).naturalAligment;
          if (((((RuntimeEvent__Class *)this_01->klass)->_1).naturalAligment < bVar8) ||
             ((((RuntimeEvent__Class *)this_01->klass)->_1).typeHierarchy[bVar8 - 1] !=
              (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          pSVar10 = (SingleCubeFineGrainedEvent *)0x0;
          if (bVar9) {
            pSVar10 = this_01;
          }
          if (pSVar10 == (SingleCubeFineGrainedEvent *)0x0) goto code_?;
          in_stack_5 = &UNK_?;
          RuntimeEventManager::RuntimeEventManager_HandleEvent_1
                    (this_00,(ExplosionEvent *)pSVar10,(MethodInfo *)0x0);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar6);
    }
    (this_00->fields).doEffects = 1;
    return;
  }
code_?:
  func_?(0);
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleDeserializedWorldData(Dictionary`2[System.Object,System.Object], KogamaDataType) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_HandleDeserializedWorldData
               (WorldNetwork *this,Dictionary_2_System_Object_System_Object_ *data,
               KogamaDataType__Enum dataType,MethodInfo *method)

{
  switch(dataType & 0xff) {
  case KogamaDataType__Enum_Prototypes:
    this_00 = (this->fields)._.worldInventory;
    if (this_00 != (MVWorldInventory *)0x0) {
      MVWorldInventory::MVWorldInventory_AddPrototype(this_00,data,(MethodInfo *)0x0);
      return;
    }
    break;
  case KogamaDataType__Enum_WorldObjects:
    this_01 = (this->fields)._.worldObjectClientManager;
    if (this_01 != (MVWorldObjectClientManagerNetwork *)0x0) {
      MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_AddWorldObject
                (this_01,data,(this->fields)._.worldInventory,(MethodInfo *)0x0);
      return;
    }
    break;
  case KogamaDataType__Enum_Links:
    WorldNetwork_AddLink(this,data,(MethodInfo *)0x0);
    return;
  case KogamaDataType__Enum_ObjectLinks:
    WorldNetwork_AddObjectLink(this,data,(MethodInfo *)0x0);
  default:
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MVWorldObjectClient InitializeQueryData(BytePacker) */

MVWorldObjectClient *
Assembly-CSharp.dll::WorldNetwork::WorldNetwork_InitializeQueryData
          (WorldNetwork *this,BytePacker *queryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_01,(Object *)this,
             MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
             ,
             MethodInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>__UnityAction_System__Object__void__
            );
  if ((((uint)(TypeInfo__KoGaMaDataHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__KoGaMaDataHandler->_1).cctor_started == 0)) {
    func_?();
  }
  id = KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
                 (queryData,
                  (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                   *)this_01,1,(MethodInfo *)0x0);
  this_00 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,id,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      pIStack2 = (pMVar1->klass->vtable).InitializeInventory.methodPtr;
      pMStack3 = pMVar1;
      (*(code *)(pMVar1->klass->vtable).Initialize.method)();
    }
    return pMVar1;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar4)();
  return pMVar1;
}


/* Boolean LinksContains(Int32) */

bool Assembly-CSharp.dll::WorldNetwork::WorldNetwork_LinksContains
               (WorldNetwork *this,int32_t linkID,MethodInfo *method)

{
  pLVar1 = (this->fields).links;
  if (pLVar1 == (Links *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (pLVar1->fields).links;
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,linkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__ContainsKey_int_
                      );
    return bVar3;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean ObjectLinksContains(Int32) */

bool Assembly-CSharp.dll::WorldNetwork::WorldNetwork_ObjectLinksContains
               (WorldNetwork *this,int32_t linkID,MethodInfo *method)

{
  pOVar1 = (this->fields).objectLinks;
  if (pOVar1 == (ObjectLinks *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (pOVar1->fields).objectLinks;
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,linkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                      );
    return bVar3;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* MVWorldObjectClient OnCloneWorldObjectTreeEvent(Int32, Int32, Boolean, Int32, Int32, Int32,
   Int32) */

MVWorldObjectClient *
Assembly-CSharp.dll::WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
          (WorldNetwork *this,int32_t ownerActorNumber,int32_t previewProfileOwnerId,
          bool cloneToRootGroup,int32_t originalId,int32_t cloneId,int32_t cloneLinkId,
          int32_t cloneObjectLinkId,MethodInfo *method)

{
  _cloneToRootGroup = (MVWorldObjectClient *)(uint)cloneToRootGroup;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (CloneBookkeeping *)func_?(TypeInfo__CloneBookkeeping);
  CloneBookkeeping::CloneBookkeeping__ctor(this_01,(MethodInfo *)0x0);
  pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar1,originalId,(MethodInfo *)0x0);
    if (this_01 != (CloneBookkeeping *)0x0) {
      (this_01->fields).cloneIdIncrement = cloneId;
      (this_01->fields).cloneLinkIdIncrement = cloneLinkId;
      (this_01->fields).cloneObjectLinkIdIncrement = cloneObjectLinkId;
      this_00 = (this->fields)._.worldObjectClientManager;
      if (this_00 != (MVWorldObjectClientManagerNetwork *)0x0) {
        pMVar2 = MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_Clone
                           (this_00,ownerActorNumber,pMVar2,this_01,(this->fields)._.worldInventory,
                            (MethodInfo *)0x0);
        if (previewProfileOwnerId != 0) {
          if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
          RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_set_PrototypeId
                    ((RuntimePrototypeCubeModel *)pMVar2,previewProfileOwnerId,(MethodInfo *)0x0);
          _cloneToRootGroup = pMVar2;
        }
        if (cloneToRootGroup != 0) {
          pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
          if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
          pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                             (pMVar1,(MethodInfo *)0x0);
          if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
          mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
          Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pMVar2,(MethodInfo *)0x0);
          if (pMVar3 == (MVGroup *)0x0) goto code_?;
          (*(code *)(pMVar3->klass->vtable).TransferChild.method)();
        }
        WorldNetwork_CloneLinks(this,this_01,(MethodInfo *)0x0);
        WorldNetwork_CloneObjectLinks(this,this_01,(MethodInfo *)0x0);
        if (pMVar2 != (MVWorldObjectClient *)0x0) {
          pIStack4 = (pMVar2->klass->vtable).InitializeInventory.methodPtr;
          pMStack5 = pMVar2;
          (*(code *)(pMVar2->klass->vtable).Initialize.method)();
          return pMVar2;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pMVar2 = (MVWorldObjectClient *)(*pcVar6)();
  return pMVar2;
}


/* Void OnGameDataDeserialized(BytePacker, Int32, Int32) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_OnGameDataDeserialized
               (WorldNetwork *this,BytePacker *queryData,int32_t instigatorActorNumber,
               int32_t rootId,MethodInfo *method)

{
  pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    root = (MVWorldObjectClient *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (pMVar1,rootId,(MethodInfo *)0x0);
    if (root != (MVWorldObjectClient *)0x0) {
      (*(code *)(root->klass->vtable).Initialize.method)
                (root,(root->klass->vtable).InitializeInventory.methodPtr);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      cubeModelPrototypeTerrain =
           (MVCubeModelPrototypeTerrain *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                     (pMVar1,
                      MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                     );
      pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        cubeModelFineGrainedTerrain =
             (MVCubeModelFineGrainedTerrain *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                       (pMVar1,
                        MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                       );
        this_00 = (RuntimeEventManagerNetwork *)func_?();
        RuntimeEventManagerNetwork::RuntimeEventManagerNetwork__ctor
                  (this_00,cubeModelPrototypeTerrain,cubeModelFineGrainedTerrain,(MethodInfo *)0x0);
        (this->fields)._.runtimeEventManagerNetwork = this_00;
        if (this_00 != (RuntimeEventManagerNetwork *)0x0) {
          RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_DeserializeRuntimeEvents
                    (this_00,queryData,(MethodInfo *)0x0);
          WorldNetwork_CreateQueryEvent(this,root,instigatorActorNumber,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean OnUnregisterWorldObject(Int32) */

bool Assembly-CSharp.dll::WorldNetwork::WorldNetwork_OnUnregisterWorldObject
               (WorldNetwork *this,int32_t id,MethodInfo *method)

{
  this_00 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    bVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_Contains
                      (this_00,id,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 0;
    }
    this_01 = (this->fields)._.worldObjectClientManager;
    if (this_01 != (MVWorldObjectClientManagerNetwork *)0x0) {
      MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_DestroyWO
                (this_01,id,(MethodInfo *)0x0);
      return 1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Link RemoveLink(Int32) */

Link_1 * Assembly-CSharp.dll::WorldNetwork::WorldNetwork_RemoveLink
                   (WorldNetwork *this,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).links;
  if (pLVar1 != (Links *)0x0) {
    bVar2 = Links::Links_Contains(pLVar1,linkID,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_RemoveLink_event__but_link_not_r,(MethodInfo *)0x0);
      return (Link_1 *)0x0;
    }
    pLVar1 = (this->fields).links;
    if (pLVar1 != (Links *)0x0) {
      pLVar3 = Links::Links_GetLink(pLVar1,linkID,(MethodInfo *)0x0);
      if ((pLVar3 != (Link_1 *)0x0) &&
         (pMVar4 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager,
         pMVar4 != (MVWorldObjectClientManager *)0x0)) {
        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                  (pMVar4,(pLVar3->fields).outputWOID,(MethodInfo *)0x0);
        pMVar4 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
        if (pMVar4 != (MVWorldObjectClientManager *)0x0) {
          inputWo = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar4,(pLVar3->fields).inputWOID,(MethodInfo *)0x0);
          pLVar1 = (this->fields).links;
          if (pLVar1 != (Links *)0x0) {
            Links::Links_RemoveLink
                      (pLVar1,linkID,(MVWorldObjectClient *)&UNK_?,inputWo,(MethodInfo *)0x0)
            ;
            return pLVar3;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pLVar3 = (Link_1 *)(*pcVar5)();
  return pLVar3;
}


/* Void RemoveObjectLink(Int32) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_RemoveObjectLink
               (WorldNetwork *this,int32_t objectLinkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).objectLinks;
  if (pOVar1 != (ObjectLinks *)0x0) {
    bVar2 = ObjectLinks::ObjectLinks_Contains(pOVar1,objectLinkID,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_RemoveLink_event__but_link_not_r,(MethodInfo *)0x0);
      return;
    }
    pOVar1 = (this->fields).objectLinks;
    if (pOVar1 != (ObjectLinks *)0x0) {
      link = ObjectLinks::ObjectLinks_GetObjectLink(pOVar1,objectLinkID,(MethodInfo *)0x0);
      if ((link != (ObjectLink *)0x0) &&
         (pMVar3 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager,
         pMVar3 != (MVWorldObjectClientManager *)0x0)) {
        objectConnectorWo =
             (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar3,(link->fields).objectConnectorWOID,(MethodInfo *)0x0);
        pMVar3 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
        if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
          objectWo = (MVWorldObjectClient *)
                     MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (pMVar3,(link->fields).objectWOID,(MethodInfo *)0x0);
          pOVar1 = (this->fields).objectLinks;
          if (pOVar1 != (ObjectLinks *)0x0) {
            ObjectLinks::ObjectLinks_RemoveObjectLink
                      (pOVar1,link,objectConnectorWo,objectWo,(MethodInfo *)0x0);
            return;
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


/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_Update
               (WorldNetwork *this,MVNetworkGame *game,MethodInfo *method)

{
  this_00 = (this->fields).links;
  if (this_00 != (Links *)0x0) {
    Links::Links_Update(this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).objectLinks;
    if (this_01 != (ObjectLinks *)0x0) {
      ObjectLinks::ObjectLinks_Update(this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* WorldNetwork() */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork__ctor(WorldNetwork *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  this_00 = (MVWorldInventory *)func_?(TypeInfo__MVWorldInventory);
  MVWorldInventory::MVWorldInventory__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._.worldInventory = this_00;
  this_01 = (Links *)func_?(TypeInfo__Links);
  Links::Links__ctor(this_01,(MethodInfo *)0x0);
  (this->fields).links = this_01;
  this_02 = (MVWorldObjectClientManagerNetwork *)
            func_?(TypeInfo__MVWorldObjectClientManagerNetwork);
  MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork__ctor
            (this_02,(MethodInfo *)0x0);
  (this->fields)._.worldObjectClientManager = this_02;
  this_03 = (ObjectLinks *)func_?(TypeInfo__ObjectLinks);
  ObjectLinks::ObjectLinks__ctor(this_03,(MethodInfo *)0x0);
  (this->fields).objectLinks = this_03;
  return;
}

