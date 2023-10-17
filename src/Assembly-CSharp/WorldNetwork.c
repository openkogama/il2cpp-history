
/* Void AddGameQueryDataToGameWorld(BytePacker, Int32) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddGameQueryDataToGameWorld
               (WorldNetwork *this,BytePacker *queryData,int32_t instigatorActorNumber,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__KoGaMaDataHandler);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                   );
    func_?(&
                    MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                   );
    cRam_? = '\x01';
  }
  this_01 = (UnityAction_2_System_Object_System_ByteEnum_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                           );
  if (this_01 != (UnityAction_2_System_Object_System_ByteEnum_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::ByteEnum]
    ::UnityAction_2_System_Object_System_ByteEnum___ctor
              (this_01,(Object *)this,
               MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
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
        (*(root->klass->vtable).Initialize.methodPtr)();
      }
      WorldNetwork_CreateQueryEvent(this,root,id,(MethodInfo *)0x0);
      return;
    }
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__LinkDataParameter);
    func_?(&TypeInfo__MV__WorldObject__Link);
    cRam_? = '\x01';
  }
  this_01 = (Link *)func_?(TypeInfo__MV__WorldObject__Link);
  if (this_01 != (Link *)0x0) {
    MVWorldObject.dll::MV::WorldObject::Link::Link__ctor_1(this_01,(MethodInfo *)0x0);
    uStack_1 = uStack_1 & 0xffffff;
    pOVar2 = (Object *)
             func_?(TypeInfo__MV__WorldObject__LinkDataParameter,(int)&uStack_1 + 3);
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar4 = (int32_t *)func_?(pOVar2);
        (this_01->fields).id = *piVar4;
        uStack_1._0_3_ = CONCAT12(1,(undefined2)uStack_1);
        pOVar2 = (Object *)
                 func_?(TypeInfo__MV__WorldObject__LinkDataParameter,(int)&uStack_1 + 2);
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (data,pOVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
        if (pOVar2 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar4 = (int32_t *)func_?(pOVar2);
          (this_01->fields).outputWOID = *piVar4;
          uStack_1._0_2_ = CONCAT11(2,(undefined1)uStack_1);
          pOVar2 = (Object *)
                   func_?(TypeInfo__MV__WorldObject__LinkDataParameter,(int)&uStack_1 + 1);
          pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (data,pOVar2,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
          if (pOVar2 != (Object *)0x0) {
            if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
            goto code_?;
            piVar4 = (int32_t *)func_?(pOVar2);
            (this_01->fields).inputWOID = *piVar4;
            pMVar5 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
            if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
              outputWo = (MVWorldObjectClient *)
                         MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                   (pMVar5,(this_01->fields).outputWOID,(MethodInfo *)0x0);
              pMVar5 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
              if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
                inputWo = (MVWorldObjectClient *)
                          MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                    (pMVar5,(this_01->fields).inputWOID,(MethodInfo *)0x0);
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
  }
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AddLink(Link) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddLink_1
               (WorldNetwork *this,Link *link,MethodInfo *method)

{
  if (link != (Link *)0x0) {
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MV__WorldObject__ObjectLinkDataParameter);
    func_?(&TypeInfo__MV__WorldObject__ObjectLink);
    cRam_? = '\x01';
  }
  this_00 = (ObjectLink *)func_?(TypeInfo__MV__WorldObject__ObjectLink);
  if (this_00 != (ObjectLink *)0x0) {
    MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1(this_00,(MethodInfo *)0x0);
    uStack_1 = uStack_1 & 0xffffff;
    pOVar2 = (Object *)
             func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,(int)&uStack_1 + 3);
    if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar4 = (int32_t *)func_?(pOVar2);
        (this_00->fields).id = *piVar4;
        uStack_1._0_3_ = CONCAT12(1,(undefined2)uStack_1);
        pOVar2 = (Object *)
                 func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,
                                 (int)&uStack_1 + 2);
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (data,pOVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
        if (pOVar2 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar4 = (int32_t *)func_?(pOVar2);
          (this_00->fields).objectConnectorWOID = *piVar4;
          uStack_1._0_2_ = CONCAT11(2,(undefined1)uStack_1);
          pOVar2 = (Object *)
                   func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,
                                   (int)&uStack_1 + 1);
          pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (data,pOVar2,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          uVar3 = CONCAT44(TypeInfo__System__Int32,pOVar2);
          if (pOVar2 != (Object *)0x0) {
            if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              piVar4 = (int32_t *)func_?(pOVar2);
              (this_00->fields).objectWOID = *piVar4;
              WorldNetwork_AddObjectLink_1(this,this_00,(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
        }
      }
    }
  }
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddObjectLink(ObjectLink) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddObjectLink_1
               (WorldNetwork *this,ObjectLink *objectLink,MethodInfo *method)

{
  if ((objectLink != (ObjectLink *)0x0) &&
     (pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager,
     pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar1,(objectLink->fields).objectConnectorWOID,(MethodInfo *)0x0);
    pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar1,(objectLink->fields).objectWOID,(MethodInfo *)0x0);
      pOVar2 = (this->fields).objectLinks;
      if (pOVar2 != (ObjectLinks *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          func_?();
          func_?(&
                          ObjectLinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<ObjectLinkObjectScript>_ObjectLinkObjectScript_
                         );
          func_?(&TypeInfo__UnityEngine__Object);
          cRam_? = '\x01';
        }
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(pOVar2->fields).objectLinks;
        if (((pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
            (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__Add
                       (pDVar3,(Object *)(objectLink->fields).id,(Object *)objectLink,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
                       ), this_00 != (MVWorldObject *)0x0)) &&
           (MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddObjectLink
                      (this_00,objectLink,(MethodInfo *)0x0), this_01 != (MVWorldObject *)0x0)) {
          MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddObjectLink
                    (this_01,objectLink,(MethodInfo *)0x0);
          MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
          if (MVar4 != MVGameMode__Enum_Edit) {
            return;
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar5 = TypeInfo__PrefabPool->static_fields->instance;
          if (pPVar5 != (PrefabPool *)0x0) {
            pOVar6 = (pPVar5->fields).objectLinkObject;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            pOVar6 = (ObjectLinkObjectScript *)
                     UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                               ((Object *)pOVar6,
                                ObjectLinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<ObjectLinkObjectScript>_ObjectLinkObjectScript_
                               );
            if (pOVar6 != (ObjectLinkObjectScript *)0x0) {
              ObjectLinkObjectScript::ObjectLinkObjectScript_Initialize
                        (pOVar6,objectLink,(MethodInfo *)0x0);
              pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(this_00->fields).groupId;
              if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__Add
                          (pDVar3,(Object *)(objectLink->fields).id,(Object *)pOVar6,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Add_int__ObjectLinkObjectScript_
                          );
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void AddPrototype(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddPrototype
               (WorldNetwork *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  pMVar1 = (this->fields)._.worldInventory;
  if (pMVar1 != (MVWorldInventory *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Byte);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&TypeInfo__MV__WorldObject__PrototypeDataParameters);
      func_?(&TypeInfo__RuntimePrototypeCubeModel);
      func_?(&TypeInfo__System__Single);
      cRam_? = '\x01';
    }
    pOVar2 = (Object *)
             func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&stack0xfffffffb);
    if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (data,pOVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           ), pOVar2 != (Object *)0x0)) {
      if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class) {
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      func_?();
      pOVar2 = (Object *)func_?();
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class)
        goto code_?;
        pfVar4 = (float *)func_?();
        scale = *pfVar4;
        pOVar2 = (Object *)func_?();
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (data,pOVar2,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pOVar2 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
          goto code_?;
          piVar5 = (int32_t *)func_?();
          authorProfileId = *piVar5;
          pOVar2 = (Object *)&stack0xfffffff8;
          pOVar6 = (Object *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters);
          pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (data,pOVar6,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pOVar6 == (Object *)0x0) {
            data_00 = (Byte__Array *)0x0;
          }
          else {
            data_00 = (Byte__Array *)func_?();
            if (data_00 == (Byte__Array *)0x0) {
              func_?();
              goto code_?;
            }
          }
          this_01 = (RuntimePrototypeCubeModel *)func_?();
          if (this_01 != (RuntimePrototypeCubeModel *)0x0) {
            RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_1
                      (this_01,(int32_t)pOVar2,authorProfileId,scale,data_00,(MethodInfo *)0x0);
            this_00 = (Dictionary_2_System_Object_System_Object_ *)
                      (pMVar1->fields).runtimePrototypes;
            if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__Add
                        (this_00,pOVar2,(Object *)this_01,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                        );
              if ((pMVar1->fields).OnWorldInventoryChange !=
                  (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
                pMVar7 = (pMVar1->fields).OnWorldInventoryChange;
                pvStack8 = (pMVar7->fields)._._.method;
                pMStack9 = pMVar1;
                (*(pMVar7->fields)._._.invoke_impl)();
              }
              return;
            }
          }
        }
      }
    }
  }
  uVar10 = func_?(&stack0xfffffff0);
  func_?(uVar10);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void CloneLinks(CloneBookkeeping) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_CloneLinks
               (WorldNetwork *this,CloneBookkeeping *cloneBookkeeping,MethodInfo *method)

{
  this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&TypeInfo__MV__WorldObject__Link);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    cRam_? = '\x01';
  }
  if ((cloneBookkeeping != (CloneBookkeeping *)0x0) &&
     (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (cloneBookkeeping->fields).linkIds,
     this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
              ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               &stack0xffffffc8,this_00,
               MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    while( true ) {
      do {
        do {
          bVar1 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                            ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                              *)&stack0xffffffb8,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                            );
          if (bVar1 == 0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&stack0xffffffb8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                       ,in_stack_2);
            *unaff_FS_OFFSET = this_01;
            return;
          }
          in_stack_2 = (MethodInfo *)(cloneBookkeeping->fields).worldObjectIdsMaps;
          pLVar3 = (this->fields).links;
          if (pLVar3 == (Links *)0x0) goto code_?;
          pLVar4 = Links::Links_GetLink(pLVar3,0xADDR,(MethodInfo *)0x0);
          if (pLVar4 == (Link *)0x0) goto code_?;
          if (in_stack_2 == (MethodInfo *)0x0) goto code_?;
          bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                             in_stack_2,(Object *)(pLVar4->fields).inputWOID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                            );
        } while (bVar1 == 0);
        pLVar3 = (this->fields).links;
        if (pLVar3 == (Links *)0x0) goto code_?;
        this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)&UNK_?;
        pLVar4 = Links::Links_GetLink(pLVar3,0xADDR,(MethodInfo *)0x0);
        if (pLVar4 == (Link *)0x0) goto code_?;
        if (this_01 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
        goto code_?;
        bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_01,(Object *)(pLVar4->fields).outputWOID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                          );
      } while (bVar1 == 0);
      this_02 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                (cloneBookkeeping->fields).worldObjectIdsMaps;
      pLVar3 = (this->fields).links;
      if (pLVar3 == (Links *)0x0) break;
      pLVar4 = Links::Links_GetLink(pLVar3,0xADDR,(MethodInfo *)0x0);
      if (pLVar4 == (Link *)0x0) break;
      if (this_02 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) break;
      this = (WorldNetwork *)&UNK_?;
      inputWOID = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            (this_02,(pLVar4->fields).inputWOID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                            );
      this_03 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                (cloneBookkeeping->fields).worldObjectIdsMaps;
      if (_UNK_? == (Links *)0x0) break;
      pLVar4 = Links::Links_GetLink(_UNK_?,(int32_t)this_02,(MethodInfo *)0x0);
      if (pLVar4 == (Link *)0x0) break;
      if (this_03 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) break;
      outputWOID = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             (this_03,(pLVar4->fields).outputWOID,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                             );
      id = (cloneBookkeeping->fields).cloneLinkIdIncrement;
      if (_UNK_? == (Links *)0x0) break;
      pLVar4 = Links::Links_GetLink(_UNK_?,(int32_t)this_02,(MethodInfo *)0x0);
      if (pLVar4 == (Link *)0x0) break;
      bVar1 = (pLVar4->fields).isSet;
      pLVar4 = (Link *)func_?();
      if (pLVar4 == (Link *)0x0) break;
      MVWorldObject.dll::MV::WorldObject::Link::Link__ctor
                (pLVar4,id,(int32_t)outputWOID,(int32_t)inputWOID,bVar1,(MethodInfo *)0x0);
      WorldNetwork_AddLink_1((WorldNetwork *)&UNK_?,pLVar4,(MethodInfo *)0x0);
      piVar5 = &(cloneBookkeeping->fields).cloneLinkIdIncrement;
      *piVar5 = *piVar5 + 1;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void CloneObjectLinks(CloneBookkeeping) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_CloneObjectLinks
               (WorldNetwork *this,CloneBookkeeping *cloneBookkeeping,MethodInfo *method)

{
  this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    func_?(&TypeInfo__MV__WorldObject__ObjectLink);
    cRam_? = '\x01';
  }
  if ((cloneBookkeeping != (CloneBookkeeping *)0x0) &&
     (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (cloneBookkeeping->fields).objectLinkIds,
     this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
              ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               &stack0xffffffc8,this_00,
               MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    while( true ) {
      do {
        do {
          bVar1 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                            ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                              *)&stack0xffffffb8,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                            );
          if (bVar1 == 0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&stack0xffffffb8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                       ,in_stack_2);
            *unaff_FS_OFFSET = this_01;
            return;
          }
          in_stack_2 = (MethodInfo *)(cloneBookkeeping->fields).worldObjectIdsMaps;
          pOVar3 = (this->fields).objectLinks;
          if (pOVar3 == (ObjectLinks *)0x0) goto code_?;
          pOVar4 = ObjectLinks::ObjectLinks_GetObjectLink(pOVar3,0xADDR,(MethodInfo *)0x0);
          if (pOVar4 == (ObjectLink *)0x0) goto code_?;
          if (in_stack_2 == (MethodInfo *)0x0) goto code_?;
          bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,GUILoginHandler+PlanetData]::
                  Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                            ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                             in_stack_2,(Object *)(pOVar4->fields).objectConnectorWOID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                            );
        } while (bVar1 == 0);
        pOVar3 = (this->fields).objectLinks;
        if (pOVar3 == (ObjectLinks *)0x0) goto code_?;
        this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)&UNK_?;
        pOVar4 = ObjectLinks::ObjectLinks_GetObjectLink(pOVar3,0xADDR,(MethodInfo *)0x0);
        if (pOVar4 == (ObjectLink *)0x0) goto code_?;
        if (this_01 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
        goto code_?;
        bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                Object,GUILoginHandler+PlanetData]::
                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                          (this_01,(Object *)(pOVar4->fields).objectWOID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                          );
      } while (bVar1 == 0);
      this_02 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                (cloneBookkeeping->fields).worldObjectIdsMaps;
      pOVar3 = (this->fields).objectLinks;
      if (pOVar3 == (ObjectLinks *)0x0) break;
      pOVar4 = ObjectLinks::ObjectLinks_GetObjectLink(pOVar3,0xADDR,(MethodInfo *)0x0);
      if (pOVar4 == (ObjectLink *)0x0) break;
      if (this_02 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) break;
      this = (WorldNetwork *)&UNK_?;
      objectWOID = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             (this_02,(pOVar4->fields).objectWOID,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                             );
      this_03 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                (cloneBookkeeping->fields).worldObjectIdsMaps;
      if (_UNK_? == (ObjectLinks *)0x0) break;
      pOVar4 = ObjectLinks::ObjectLinks_GetObjectLink
                         (_UNK_?,(int32_t)this_02,(MethodInfo *)0x0);
      if (pOVar4 == (ObjectLink *)0x0) break;
      if (this_03 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) break;
      objectConnectorWOID =
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
           Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                     (this_03,(pOVar4->fields).objectConnectorWOID,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_)
      ;
      id = (cloneBookkeeping->fields).cloneObjectLinkIdIncrement;
      if (_UNK_? == (ObjectLinks *)0x0) break;
      pOVar4 = ObjectLinks::ObjectLinks_GetObjectLink
                         (_UNK_?,(int32_t)this_02,(MethodInfo *)0x0);
      if (pOVar4 == (ObjectLink *)0x0) break;
      bVar1 = (pOVar4->fields).isSet;
      pOVar4 = (ObjectLink *)func_?();
      if (pOVar4 == (ObjectLink *)0x0) break;
      MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor
                (pOVar4,id,(int32_t)objectConnectorWOID,(int32_t)objectWOID,bVar1,(MethodInfo *)0x0)
      ;
      WorldNetwork_AddObjectLink_1((WorldNetwork *)&UNK_?,pOVar4,(MethodInfo *)0x0);
      piVar5 = &(cloneBookkeeping->fields).cloneObjectLinkIdIncrement;
      *piVar5 = *piVar5 + 1;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ConstructRuntimeEventManager() */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_ConstructRuntimeEventManager
               (WorldNetwork *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                   );
    func_?(&
                    MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                   );
    func_?(&TypeInfo__RuntimeEventManagerNetwork);
    cRam_? = '\x01';
  }
  pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
              (pMVar1,
               MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
              );
    pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                (pMVar1,
                 MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                );
      value = (RuntimeEventManagerNetwork *)func_?(TypeInfo__RuntimeEventManagerNetwork);
      if (value != (RuntimeEventManagerNetwork *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__RuntimeEventManager__AccumulatedCubeDamages);
          cRam_? = '\x01';
        }
        value_00 = (RuntimeEventManager_AccumulatedCubeDamages *)
                   func_?(TypeInfo__RuntimeEventManager__AccumulatedCubeDamages);
        if (value_00 != (RuntimeEventManager_AccumulatedCubeDamages *)0x0) {
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
                           );
            func_?(&
                            TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
                           );
            func_?(&TypeInfo__UpdateController);
            cRam_? = '\x01';
          }
          this_00 = (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                     *)func_?(
                                      TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
                                      );
          if (this_00 !=
              (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
               *)0x0) {
            Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                      ((ParameterOverride_1_System_Object_ *)this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
                      );
            (value_00->fields).accumulatedCubeDamages = this_00;
            method_00 = (MethodInfo *)&value_00->fields;
            func_?(method_00,this_00);
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)value_00,ExceptionArgument__Enum_obj,method_00);
            if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UpdateController);
            }
            UpdateController::UpdateController_AddUpdateObject
                      ((IUpdatecontrollerSubscriberUpdate *)value_00,
                       UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
            method_01 = (MVCubeModelFineGrainedTerrain *)
                        &(value->fields)._.localAccumulatedCubeDamages;
            (value->fields)._.localAccumulatedCubeDamages = value_00;
            func_?(method_01,value_00);
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
            (value->fields)._.cubeModelPrototypeTerrain = (MVCubeModelPrototypeTerrain *)method_01;
            func_?(&value->fields);
            (value->fields)._.cubeModelFineGrainedTerrain = method_01;
            func_?(&(value->fields)._.cubeModelFineGrainedTerrain,method_01);
            (this->fields)._.runtimeEventManagerNetwork = value;
            func_?(&(this->fields)._.runtimeEventManagerNetwork,value);
            return;
          }
        }
      }
    }
  }
  func_?();
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
    func_?(&TypeInfo__CullingApiWrapper);
    func_?(&TypeInfo__KoGaMaDataHandler);
    func_?(&
                    MethodInfo__WorldNetwork____c__DisplayClass8_0___CreateGameWorldFromQueryData_b__0_int_
                   );
    func_?(&TypeInfo__WorldNetwork____c__DisplayClass8_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                   );
    func_?(&
                    MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                   );
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__WorldNetwork____c__DisplayClass8_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    value[1].monitor = (MonitorData *)queryData;
    func_?(&value[1].monitor,queryData);
    value[2].klass = (Object__Class *)instigatorActorNumber;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar1 != (MainCameraManager *)0x0) {
      camera = (pMVar1->fields).mainCamera;
      if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CullingApiWrapper);
      }
      CullingApiWrapper::CullingApiWrapper_Init
                (10000,camera,TypeInfo__CullingApiWrapper->static_fields->baseDistance,
                 (MethodInfo *)0x0);
      this_00 = (UnityAction_2_System_Object_System_ByteEnum_ *)
                func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                               );
      if (this_00 != (UnityAction_2_System_Object_System_ByteEnum_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        ByteEnum]::UnityAction_2_System_Object_System_ByteEnum___ctor
                  (this_00,(Object *)this,
                   MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                   ,(MethodInfo *)0x0);
        this_01 = (UnityAction_1_System_Int32Enum_ *)
                  func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
        if (this_01 != (UnityAction_1_System_Int32Enum_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_01,value,
                     MethodInfo__WorldNetwork____c__DisplayClass8_0___CreateGameWorldFromQueryData_b__0_int_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__KoGaMaDataHandler);
          }
          KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaDataAsync
                    ((BytePacker *)0x0,
                     (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                      *)this_00,1,(UnityAction_1_System_Int32_ *)this_01,(MethodInfo *)0x0);
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


/* Void CreateQueryEvent(MVWorldObjectClient, Int32) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_CreateQueryEvent
               (WorldNetwork *this,MVWorldObjectClient *root,int32_t instigatorActorNumber,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__InitializedGameQueryDataEventArgs);
    cRam_? = '\x01';
  }
  if ((this->fields)._.InitializedGameQueryData ==
      (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    return;
  }
  this_00 = (InitializedGameQueryDataEventArgs *)
            func_?(TypeInfo__InitializedGameQueryDataEventArgs);
  if (this_00 != (InitializedGameQueryDataEventArgs *)0x0) {
    InitializedGameQueryDataEventArgs::InitializedGameQueryDataEventArgs__ctor
              (this_00,root,instigatorActorNumber,(MethodInfo *)0x0);
    pEVar1 = (this->fields)._.InitializedGameQueryData;
    if (pEVar1 != (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      (*(pEVar1->fields)._._.invoke_impl)((pEVar1->fields)._._.method_code,this,this_00);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DeserializeRuntimeEvents(BytePacker) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_DeserializeRuntimeEvents
               (WorldNetwork *this,BytePacker *queryData,MethodInfo *method)

{
  this_00 = (RuntimeEventManager *)(this->fields)._.runtimeEventManagerNetwork;
  if ((this_00 != (RuntimeEventManager *)0x0) &&
     (unaff_ESI = (SingleCubeFineGrainedEvent *)0x0, queryData != (BytePacker *)0x0)) {
    iVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                      (queryData,(MethodInfo *)0x0);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        unaff_ESI = (SingleCubeFineGrainedEvent *)
                    MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                    RuntimeEvent_Create(queryData,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
          func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent);
          cRam_? = '\x01';
        }
        if (unaff_ESI == (SingleCubeFineGrainedEvent *)0x0) goto code_?;
        in_stack_3 =
             (SingleCubeFineGrainedEvent *)
             CONCAT31((int3)((uint)in_stack_3 >> 8),
                      (unaff_ESI->fields)._._RuntimeEventType_k__BackingField);
        pRVar4 = (RuntimeEventManager *)0x0;
        RVar5 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                RuntimeEvent_GetRuntimeEventObjectType
                          ((RuntimeEventType__Enum)in_stack_3,(MethodInfo *)0x0);
        if ((char)RVar5 == '\x01') {
          pSVar6 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
          if (((unaff_ESI->klass->_1).typeHierarchyDepth <
               (TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent->_1).
               typeHierarchyDepth) ||
             ((unaff_ESI->klass->_1).typeHierarchy
              [(TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent->_1).
               typeHierarchyDepth - 1] !=
              (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent))
          goto code_?;
          pRVar4 = this_00;
          RuntimeEventManager::RuntimeEventManager_HandleEvent(this_00,unaff_ESI,(MethodInfo *)0x0);
          in_stack_3 = unaff_ESI;
        }
        else if ((char)RVar5 == '\x02') {
          pSVar6 = (SingleCubeFineGrainedEvent__Class *)
                   TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent;
          if (((unaff_ESI->klass->_1).typeHierarchyDepth <
               (TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).typeHierarchyDepth) ||
             ((unaff_ESI->klass->_1).typeHierarchy
              [(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).typeHierarchyDepth - 1
              ] != (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent))
          goto code_?;
          pRVar4 = this_00;
          RuntimeEventManager::RuntimeEventManager_HandleEvent_1
                    (this_00,(ExplosionEvent *)unaff_ESI,(MethodInfo *)0x0);
          in_stack_3 = unaff_ESI;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)pRVar4);
    }
    (this_00->fields).doEffects = 1;
    return;
  }
code_?:
  func_?();
  pSVar6 = extraout_EDX;
code_?:
  func_?(unaff_ESI,pSVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVWorldObjectClient InitializeQueryData(BytePacker) */

MVWorldObjectClient *
Assembly-CSharp.dll::WorldNetwork::WorldNetwork_InitializeQueryData
          (WorldNetwork *this,BytePacker *queryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__KoGaMaDataHandler);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                   );
    func_?(&
                    MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                   );
    cRam_? = '\x01';
  }
  this_01 = (UnityAction_2_System_Object_System_ByteEnum_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                           );
  if (this_01 != (UnityAction_2_System_Object_System_ByteEnum_ *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::ByteEnum]
    ::UnityAction_2_System_Object_System_ByteEnum___ctor
              (this_01,(Object *)this,
               MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
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
        pMStack2 = (pMVar1->klass->vtable).Initialize.method;
        pMStack3 = pMVar1;
        (*(pMVar1->klass->vtable).Initialize.methodPtr)();
      }
      return pMVar1;
    }
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
  if (pLVar1 != (Links *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(pLVar1->fields).links;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)linkID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__ContainsKey_int_
                        );
      return bVar2;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Boolean ObjectLinksContains(Int32) */

bool Assembly-CSharp.dll::WorldNetwork::WorldNetwork_ObjectLinksContains
               (WorldNetwork *this,int32_t linkID,MethodInfo *method)

{
  pOVar1 = (this->fields).objectLinks;
  if (pOVar1 != (ObjectLinks *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                     );
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(pOVar1->fields).objectLinks
    ;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)linkID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                        );
      return bVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* MVWorldObjectClient OnCloneWorldObjectTreeEvent(Int32, Int32, Boolean, Int32, Int32, Int32,
   Int32) */

MVWorldObjectClient *
Assembly-CSharp.dll::WorldNetwork::WorldNetwork_OnCloneWorldObjectTreeEvent
          (WorldNetwork *this,int32_t ownerActorNumber,int32_t previewProfileOwnerId,
          bool cloneToRootGroup,int32_t originalId,int32_t cloneId,int32_t cloneLinkId,
          int32_t cloneObjectLinkId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CloneBookkeeping);
    cRam_? = '\x01';
  }
  cloneBookkeeping = (CloneBookkeeping *)func_?(TypeInfo__CloneBookkeeping);
  if (cloneBookkeeping != (CloneBookkeeping *)0x0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__)
      ;
      func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
      func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
      func_?(&TypeInfo__System__Collections__Generic__List<int>);
      cRam_? = '\x01';
    }
    (cloneBookkeeping->fields).cloneIdIncrement = -1;
    (cloneBookkeeping->fields).cloneLinkIdIncrement = -1;
    (cloneBookkeeping->fields).cloneObjectLinkIdIncrement = -1;
    pLVar1 = (List_1_System_Int32_ *)
             func_?(TypeInfo__System__Collections__Generic__List<int>);
    if (pLVar1 != (List_1_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)pLVar1,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
      (cloneBookkeeping->fields).linkIds = pLVar1;
      func_?(&(cloneBookkeeping->fields).linkIds,pLVar1);
      pLVar1 = (List_1_System_Int32_ *)
               func_?(TypeInfo__System__Collections__Generic__List<int>);
      if (pLVar1 != (List_1_System_Int32_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)pLVar1,
                   MethodInfo__System__Collections__Generic__List<int>__List__);
        (cloneBookkeeping->fields).objectLinkIds = pLVar1;
        func_?(&(cloneBookkeeping->fields).objectLinkIds,pLVar1);
        this_01 = (Dictionary_2_System_Int32_System_Int32_ *)
                  func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
        if (this_01 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    ((ParameterOverride_1_System_Object_ *)this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
          (cloneBookkeeping->fields).worldObjectIdsMaps = this_01;
          func_?(&(cloneBookkeeping->fields).worldObjectIdsMaps,this_01);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)cloneBookkeeping,ExceptionArgument__Enum_obj,in_stack_2);
          pMVar3 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
          if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
            pMVar4 = (MVWorldObjectClient *)
                     MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (pMVar3,originalId,(MethodInfo *)0x0);
            (cloneBookkeeping->fields).cloneIdIncrement = cloneId;
            (cloneBookkeeping->fields).cloneLinkIdIncrement = cloneLinkId;
            (cloneBookkeeping->fields).cloneObjectLinkIdIncrement = cloneObjectLinkId;
            this_00 = (this->fields)._.worldObjectClientManager;
            if (this_00 != (MVWorldObjectClientManagerNetwork *)0x0) {
              pMVar4 = MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_Clone
                                 (this_00,ownerActorNumber,pMVar4,cloneBookkeeping,
                                  (this->fields)._.worldInventory,(MethodInfo *)0x0);
              if (previewProfileOwnerId != 0) {
                if (pMVar4 == (MVWorldObjectClient *)0x0) goto code_?;
                (pMVar4->fields)._.previewOwnerProfileId = previewProfileOwnerId;
              }
              if (cloneToRootGroup == 0) {
                WorldNetwork_CloneLinks(this,cloneBookkeeping,(MethodInfo *)0x0);
                WorldNetwork_CloneObjectLinks(this,cloneBookkeeping,(MethodInfo *)0x0);
                if (pMVar4 != (MVWorldObjectClient *)0x0) {
code_?:
                  (*(pMVar4->klass->vtable).Initialize.methodPtr)
                            (pMVar4,(pMVar4->klass->vtable).Initialize.method);
                  return pMVar4;
                }
              }
              else {
                pMVar3 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
                if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
                  pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                                     (pMVar3,(MethodInfo *)0x0);
                  if ((pMVar4 != (MVWorldObjectClient *)0x0) && (pMVar5 != (MVGroup *)0x0)) {
                    (*(pMVar5->klass->vtable).TransferChild.methodPtr)
                              (pMVar5,(pMVar4->fields)._.id,
                               (pMVar5->klass->vtable).TransferChild.method);
                    WorldNetwork_CloneLinks(this,cloneBookkeeping,(MethodInfo *)0x0);
                    WorldNetwork_CloneObjectLinks(this,cloneBookkeeping,(MethodInfo *)0x0);
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
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  pMVar4 = (MVWorldObjectClient *)(*pcVar6)();
  return pMVar4;
}


/* Void OnGameDataDeserialized(BytePacker, Int32, Int32) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_OnGameDataDeserialized
               (WorldNetwork *this,BytePacker *queryData,int32_t instigatorActorNumber,
               int32_t rootId,MethodInfo *method)

{
  this_00 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,rootId,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObject *)0x0) {
      (*(code *)pMVar1->klass[1].vtable.Equals.method)
                (pMVar1,pMVar1->klass[1].vtable.Finalize.methodPtr,pMVar1);
    }
    WorldNetwork_ConstructRuntimeEventManager(this,(MethodInfo *)0x0);
    this_01 = (RuntimeEventManager *)(this->fields)._.runtimeEventManagerNetwork;
    if ((this_01 != (RuntimeEventManager *)0x0) &&
       (unaff_ESI = (SingleCubeFineGrainedEvent *)0x0, queryData != (BytePacker *)0x0)) {
      root = (MVWorldObjectClient *)queryData;
      iVar2 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                        (queryData,(MethodInfo *)0x0);
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          pBVar4 = queryData;
          unaff_ESI = (SingleCubeFineGrainedEvent *)
                      MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                      RuntimeEvent_Create(queryData,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            this = (WorldNetwork *)&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent;
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          if (unaff_ESI == (SingleCubeFineGrainedEvent *)0x0) goto code_?;
          root = (MVWorldObjectClient *)
                 CONCAT31((int3)((uint)pBVar4 >> 8),
                          (unaff_ESI->fields)._._RuntimeEventType_k__BackingField);
          pRVar5 = (RuntimeEventManager *)0x0;
          RVar6 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                  RuntimeEvent_GetRuntimeEventObjectType
                            ((RuntimeEventType__Enum)root,(MethodInfo *)0x0);
          if ((char)RVar6 == '\x01') {
            pSVar7 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
            if (((unaff_ESI->klass->_1).typeHierarchyDepth <
                 (TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent->_1).
                 typeHierarchyDepth) ||
               ((unaff_ESI->klass->_1).typeHierarchy
                [(TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent->_1).
                 typeHierarchyDepth - 1] !=
                (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent)
               ) goto code_?;
            root = (MVWorldObjectClient *)&UNK_?;
            pRVar5 = this_01;
            RuntimeEventManager::RuntimeEventManager_HandleEvent
                      (this_01,unaff_ESI,(MethodInfo *)0x0);
          }
          else if ((char)RVar6 == '\x02') {
            pSVar7 = (SingleCubeFineGrainedEvent__Class *)
                     TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent;
            if (((unaff_ESI->klass->_1).typeHierarchyDepth <
                 (TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).typeHierarchyDepth)
               || ((unaff_ESI->klass->_1).typeHierarchy
                   [(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).
                    typeHierarchyDepth - 1] !=
                   (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent))
            goto code_?;
            root = (MVWorldObjectClient *)&UNK_?;
            pRVar5 = this_01;
            RuntimeEventManager::RuntimeEventManager_HandleEvent_1
                      (this_01,(ExplosionEvent *)unaff_ESI,(MethodInfo *)0x0);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)pRVar5);
      }
      (this_01->fields).doEffects = 1;
      WorldNetwork_CreateQueryEvent(this,root,instigatorActorNumber,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pSVar7 = extraout_EDX;
code_?:
  func_?(unaff_ESI,pSVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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

Link * Assembly-CSharp.dll::WorldNetwork::WorldNetwork_RemoveLink
                 (WorldNetwork *this,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_RemoveLink_event__but_link_not_r);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).links;
  if (pLVar1 != (Links *)0x0) {
    bVar2 = Links::Links_Contains(pLVar1,linkID,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_RemoveLink_event__but_link_not_r,(MethodInfo *)0x0);
      return (Link *)0x0;
    }
    pLVar1 = (this->fields).links;
    if (pLVar1 != (Links *)0x0) {
      pLVar3 = Links::Links_GetLink(pLVar1,linkID,(MethodInfo *)0x0);
      if ((pLVar3 != (Link *)0x0) &&
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
  pLVar3 = (Link *)(*pcVar5)();
  return pLVar3;
}


/* Void RemoveObjectLink(Int32) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_RemoveObjectLink
               (WorldNetwork *this,int32_t objectLinkID,MethodInfo *method)

{
  pWVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_RemoveLink_event__but_link_not_r);
    cRam_? = '\x01';
  }
  pOVar2 = (this->fields).objectLinks;
  if (pOVar2 != (ObjectLinks *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                     );
      cRam_? = '\x01';
    }
    pDVar3 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(pOVar2->fields).objectLinks;
    if (pDVar3 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (pDVar3,(Object *)objectLinkID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                        );
      if (bVar4 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_RemoveLink_event__but_link_not_r,(MethodInfo *)0x0);
        return;
      }
      pOVar2 = (this->fields).objectLinks;
      if (((pOVar2 != (ObjectLinks *)0x0) &&
          (link = ObjectLinks::ObjectLinks_GetObjectLink(pOVar2,objectLinkID,(MethodInfo *)0x0),
          link != (ObjectLink *)0x0)) &&
         (pMVar5 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager,
         pMVar5 != (MVWorldObjectClientManager *)0x0)) {
        MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                  (pMVar5,(link->fields).objectConnectorWOID,(MethodInfo *)0x0);
        pMVar5 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
        if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
          this = (WorldNetwork *)&UNK_?;
          this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar5,(link->fields).objectWOID,(MethodInfo *)0x0);
          pOVar2 = (pWVar1->fields).objectLinks;
          if (pOVar2 != (ObjectLinks *)0x0) {
            if (cRam_? == '\0') {
              func_?();
              func_?();
              func_?();
              func_?();
              func_?();
              func_?();
              this = (WorldNetwork *)&StringLiteral_Attempt_to_remove_ObjectLink__bu;
              func_?();
              cRam_? = '\x01';
            }
            pDVar3 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                     (pOVar2->fields).objectLinks;
            if (pDVar3 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
              bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,GUILoginHandler+PlanetData]::
                      Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                (pDVar3,(Object *)(link->fields).id,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                                );
              if (bVar4 == 0) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                          ((Object *)StringLiteral_Attempt_to_remove_ObjectLink__bu,
                           (MethodInfo *)0x0);
                return;
              }
              this_00 = (pOVar2->fields).objectLinks;
              if (((this_00 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) &&
                  (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__Remove
                             ((Dictionary_2_System_Int32_System_Object_ *)this_00,(link->fields).id,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Remove_int_
                             ), this != (WorldNetwork *)0x0)) &&
                 (MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveObjectLink
                            ((MVWorldObject *)this,link,(MethodInfo *)0x0),
                 this_01 != (MVWorldObject *)0x0)) {
                MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveObjectLink
                          (this_01,link,(MethodInfo *)0x0);
                MVar6 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
                if (MVar6 != MVGameMode__Enum_Edit) {
                  return;
                }
                pDVar7 = (pOVar2->fields).objectLinkObjects;
                if ((pDVar7 != (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) &&
                   (this_02 = (Component *)
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7,
                                         (link->fields).id,
                                         MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__get_Item_int_
                                        ), this_02 != (Component *)0x0)) {
                  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_02,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                            ((Object_1 *)obj,(MethodInfo *)0x0);
                  pDVar7 = (pOVar2->fields).objectLinkObjects;
                  if (pDVar7 != (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__Remove
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,(link->fields).id,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Remove_int_
                              );
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
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    func_?(&TypeInfo__Links);
    func_?(&TypeInfo__MVWorldInventory);
    func_?(&TypeInfo__MVWorldObjectClientManagerNetwork);
    func_?(&TypeInfo__ObjectLinks);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (MVWorldInventory *)func_?(TypeInfo__MVWorldInventory);
  if (this_00 != (MVWorldInventory *)0x0) {
    MVWorldInventory::MVWorldInventory__ctor(this_00,(MethodInfo *)0x0);
    (this->fields)._.worldInventory = this_00;
    func_?(&(this->fields)._.worldInventory,this_00);
    this_01 = (Links *)func_?(TypeInfo__Links);
    if (this_01 != (Links *)0x0) {
      Links::Links__ctor(this_01,(MethodInfo *)0x0);
      (this->fields).links = this_01;
      func_?(&(this->fields).links,this_01);
      this_02 = (MVWorldObjectClientManagerNetwork *)
                func_?(TypeInfo__MVWorldObjectClientManagerNetwork);
      if (this_02 != (MVWorldObjectClientManagerNetwork *)0x0) {
        MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork__ctor
                  (this_02,(MethodInfo *)0x0);
        (this->fields)._.worldObjectClientManager = this_02;
        func_?(&this->fields,this_02);
        value = (ObjectLinks *)func_?(TypeInfo__ObjectLinks);
        if (value != (ObjectLinks *)0x0) {
          if (cRam_? == '\0') {
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
                           );
            func_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Dictionary__
                           );
            func_?(&
                            TypeInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>
                           );
            func_?(&
                            TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>
                           );
            cRam_? = '\x01';
          }
          this_03 = (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)
                    func_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>
                                   );
          if (this_03 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
            Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
            ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                      ((ParameterOverride_1_System_Object_ *)this_03,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
                      );
            (value->fields).objectLinks = this_03;
            func_?(&value->fields,this_03);
            this_04 = (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)
                      func_?(
                                     TypeInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>
                                     );
            if (this_04 != (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) {
              Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
              ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                        ((ParameterOverride_1_System_Object_ *)this_04,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Dictionary__
                        );
              method_00 = (MethodInfo *)&(value->fields).objectLinkObjects;
              (value->fields).objectLinkObjects = this_04;
              func_?(method_00,this_04);
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)value,ExceptionArgument__Enum_obj,method_00);
              (this->fields).objectLinks = value;
              func_?(&(this->fields).objectLinks,value);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

