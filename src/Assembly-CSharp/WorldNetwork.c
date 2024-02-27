
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
  this_02 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                           );
  this_01 = this;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_02,(Object *)this,
             MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pWVar1 = (WorldNetwork *)
           KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
                     (queryData,
                      (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                       *)this_02,1,(MethodInfo *)0x0);
  pMVar2 = (this_01->fields)._.worldObjectClientManager;
  if (pMVar2 != (MVWorldObjectClientManagerNetwork *)0x0) {
    if (cRam_? == '\0') {
      instigatorActorNumber =
           (int32_t)&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
      ;
      queryData = (BytePacker *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (pMVar2->fields)._.worldObjects;
    this = (WorldNetwork *)0x0;
    if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      instigatorActorNumber =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
      ;
      queryData = (BytePacker *)&this;
      this = pWVar1;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)pWVar1,
                 (Object **)queryData,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      pWVar1 = this;
      if (this != (WorldNetwork *)0x0) {
        (*(code *)this->klass[2]._1.static_fields_size)();
      }
      method = (MethodInfo *)&UNK_?;
      WorldNetwork_CreateQueryEvent
                (this_01,(MVWorldObjectClient *)pWVar1,instigatorActorNumber,(MethodInfo *)0x0);
      return;
    }
  }
  instigatorActorNumber = (int32_t)&UNK_?;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  this_00 = (Link *)func_?(TypeInfo__MV__WorldObject__Link);
  MVWorldObject.dll::MV::WorldObject::Link::Link__ctor_1(this_00,(MethodInfo *)0x0);
  pOVar1 = (Object *)func_?(TypeInfo__MV__WorldObject__LinkDataParameter,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if ((this_00 != (Link *)0x0) && (TVar2.m_Index != 0)) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar3 = (int32_t *)func_?();
      (this_00->fields).id = *piVar3;
      pOVar1 = (Object *)
               func_?(CONCAT13((char)((uint)TypeInfo__MV__WorldObject__LinkDataParameter >>
                                              0x18),
                                        CONCAT12(1,(short)
                                                  TypeInfo__MV__WorldObject__LinkDataParameter)));
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar2.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar3 = (int32_t *)func_?();
        (this_00->fields).outputWOID = *piVar3;
        pOVar1 = (Object *)
                 func_?(CONCAT22((short)((uint)TypeInfo__MV__WorldObject__LinkDataParameter
                                                 >> 0x10),
                                          CONCAT11(2,(char)
                                                  TypeInfo__MV__WorldObject__LinkDataParameter)));
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                           pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar2.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar3 = (int32_t *)func_?();
            (this_00->fields).inputWOID = *piVar3;
            WorldNetwork_AddLink_1(this,this_00,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AddLink(Link) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddLink_1
               (WorldNetwork *this,Link *link,MethodInfo *method)

{
  link_00 = link;
  pWVar1 = this;
  if (link != (Link *)0x0) {
    link = (Link *)(link->fields).outputWOID;
    pMVar2 = (this->fields)._.worldObjectClientManager;
    if (pMVar2 != (MVWorldObjectClientManagerNetwork *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                       );
        cRam_? = '\x01';
      }
      pDVar3 = (pMVar2->fields)._.worldObjects;
      this = (WorldNetwork *)0x0;
      if (pDVar3 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(int32_t)link,(Object **)&this
                   ,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  );
        pMVar2 = (pWVar1->fields)._.worldObjectClientManager;
        key = (MethodInfo **)(link_00->fields).inputWOID;
        if (pMVar2 != (MVWorldObjectClientManagerNetwork *)0x0) {
          if (cRam_? == '\0') {
            key = &
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
            ;
            func_?();
            cRam_? = '\x01';
          }
          pDVar3 = (pMVar2->fields)._.worldObjects;
          link = (Link *)0x0;
          if (pDVar3 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(int32_t)key,
                       (Object **)&link,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
            this_00 = (pWVar1->fields).links;
            if (this_00 != (Links *)0x0) {
              Links::Links_AddLink
                        (this_00,link_00,(MVWorldObjectClient *)this,(MVWorldObjectClient *)link,
                         (MethodInfo *)0x0);
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
  MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1(this_00,(MethodInfo *)0x0);
  pOVar1 = (Object *)
           func_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if ((this_00 != (ObjectLink *)0x0) && (TVar2.m_Index != 0)) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      piVar3 = (int32_t *)func_?();
      (this_00->fields).id = *piVar3;
      pOVar1 = (Object *)
               func_?(CONCAT13((char)((uint)
                                               TypeInfo__MV__WorldObject__ObjectLinkDataParameter >>
                                              0x18),
                                        CONCAT12(1,(short)
                                                  TypeInfo__MV__WorldObject__ObjectLinkDataParameter
                                                )));
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar1
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar2.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar3 = (int32_t *)func_?();
        (this_00->fields).objectConnectorWOID = *piVar3;
        pOVar1 = (Object *)
                 func_?(CONCAT22((short)((uint)
                                                  TypeInfo__MV__WorldObject__ObjectLinkDataParameter
                                                 >> 0x10),
                                          CONCAT11(2,(char)
                                                  TypeInfo__MV__WorldObject__ObjectLinkDataParameter
                                                  )));
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                           pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar2.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
              (TypeInfo__System__Int32->_0).element_class) {
            piVar3 = (int32_t *)func_?();
            (this_00->fields).objectWOID = *piVar3;
            WorldNetwork_AddObjectLink_1(this,this_00,(MethodInfo *)0x0);
            return;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AddObjectLink(ObjectLink) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddObjectLink_1
               (WorldNetwork *this,ObjectLink *objectLink,MethodInfo *method)

{
  link = objectLink;
  pWVar1 = this;
  if (objectLink != (ObjectLink *)0x0) {
    key = (objectLink->fields).objectConnectorWOID;
    pMVar2 = (this->fields)._.worldObjectClientManager;
    if (pMVar2 != (MVWorldObjectClientManagerNetwork *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                       );
        cRam_? = '\x01';
      }
      pDVar3 = (pMVar2->fields)._.worldObjects;
      objectLink = (ObjectLink *)0x0;
      if (pDVar3 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,(Object **)&objectLink,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  );
        pMVar2 = (pWVar1->fields)._.worldObjectClientManager;
        key_00 = (MethodInfo **)(link->fields).objectWOID;
        if (pMVar2 != (MVWorldObjectClientManagerNetwork *)0x0) {
          if (cRam_? == '\0') {
            key_00 = &
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
            ;
            func_?();
            cRam_? = '\x01';
          }
          pDVar3 = (pMVar2->fields)._.worldObjects;
          this = (WorldNetwork *)0x0;
          if (pDVar3 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(int32_t)key_00,
                       (Object **)&this,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
            pOVar4 = (pWVar1->fields).objectLinks;
            if (pOVar4 != (ObjectLinks *)0x0) {
              if (cRam_? == '\0') {
                func_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
                               );
                func_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Add_int__ObjectLinkObjectScript_
                               );
                func_?(&
                                ObjectLinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<ObjectLinkObjectScript>_ObjectLinkObjectScript_
                               );
                func_?(&TypeInfo__UnityEngine__Object);
                cRam_? = '\x01';
              }
              this_00 = (pOVar4->fields).objectLinks;
              if (((this_00 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) &&
                  (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__Add
                             ((Dictionary_2_System_Int32_System_Object_ *)this_00,(link->fields).id,
                              (Object *)link,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
                             ), objectLink != (ObjectLink *)0x0)) &&
                 (MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddObjectLink
                            ((MVWorldObject *)objectLink,link,(MethodInfo *)0x0), pWVar1 = this,
                 this != (WorldNetwork *)0x0)) {
                this = (WorldNetwork *)0x0;
                MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddObjectLink
                          ((MVWorldObject *)pWVar1,link,(MethodInfo *)0x0);
                this = (WorldNetwork *)0x0;
                MVar5 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
                if (MVar5 != MVGameMode__Enum_Edit) {
                  return;
                }
                if (cRam_? == '\0') {
                  in_stack_6 = &TypeInfo__PrefabPool;
                  in_stack_7 = &UNK_?;
                  func_?();
                  cRam_? = '\x01';
                }
                pPVar8 = TypeInfo__PrefabPool->static_fields->instance;
                if (pPVar8 != (PrefabPool *)0x0) {
                  pOVar9 = (pPVar8->fields).objectLinkObject;
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  pOVar9 = (ObjectLinkObjectScript *)
                           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                     ((Object *)pOVar9,
                                      ObjectLinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<ObjectLinkObjectScript>_ObjectLinkObjectScript_
                                     );
                  if (pOVar9 != (ObjectLinkObjectScript *)0x0) {
                    ObjectLinkObjectScript::ObjectLinkObjectScript_Initialize
                              (pOVar9,link,(MethodInfo *)0x0);
                    this_01 = (pOVar4->fields).objectLinkObjects;
                    if (this_01 != (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__Add
                                ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                                 (link->fields).id,(Object *)pOVar9,
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
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
       (TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                           pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), TVar3.m_Index != 0)) {
      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) {
code_?:
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      func_?();
      pOVar2 = (Object *)func_?();
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar2
                         ,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar3.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
            (TypeInfo__System__Single->_0).element_class) goto code_?;
        pfVar5 = (float *)func_?();
        scale = *pfVar5;
        pOVar2 = (Object *)func_?();
        TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                           pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar3.m_Index != 0) {
          if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
              (TypeInfo__System__Int32->_0).element_class) goto code_?;
          piVar6 = (int32_t *)func_?();
          authorProfileId = *piVar6;
          id = &stack0xfffffff8;
          pOVar2 = (Object *)func_?(TypeInfo__MV__WorldObject__PrototypeDataParameters);
          TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                             pOVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if (TVar3.m_Index == 0) {
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
          RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_1
                    (this_01,(int32_t)id,authorProfileId,scale,data_00,(MethodInfo *)0x0);
          this_00 = (pMVar1->fields).runtimePrototypes;
          if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)id,
                       (Object *)this_01,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                      );
            pMVar7 = (pMVar1->fields).OnWorldInventoryChange;
            if (pMVar7 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
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
  uVar10 = func_?(&stack0xfffffff0);
  func_?(uVar10);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AddWorldObject(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddWorldObject
               (WorldNetwork *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  this_00 = (this->fields)._.worldObjectClientManager;
  if ((this_00 != (MVWorldObjectClientManagerNetwork *)0x0) &&
     (pMVar1 = (this->fields)._.worldInventory, pMVar1 != (MVWorldInventory *)0x0)) {
    this_01 = KoGaMaPackageClient::KoGaMaPackageClient_WorldObjectFactory
                        (data,(this_00->fields)._.worldObjects,(pMVar1->fields).runtimePrototypes,
                         (MethodInfo *)0x0);
    if (this_01 == (MVWorldObjectClient *)0x0) {
code_?:
      MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_AddToWorldObjects
                (this_00,this_01,(MethodInfo *)0x0);
      return;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      pOVar3 = (Object *)(this_01->fields)._.id;
      pTVar4 = (pMVar2->fields).transformNetworkManager;
      if (pTVar4 != (TransformNetworkManager *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pOVar3 = mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                 CollectionExtensions_GetValueOrDefault_1
                           ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                            (pTVar4->fields).networkedObjects,pOVar3,
                            MVNetworkObject_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<int,_MVNetworkObject>_System__Collections__Generic__IReadOnlyDictionary<int,_MVNetworkObject>__int_
                           );
        if (pOVar3 == (Object *)0x0) {
          MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject(this_01,0,(MethodInfo *)0x0);
        }
        goto code_?;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current.First = 0;
  LStack_6._current.Last = 0;
  if ((cloneBookkeeping != (CloneBookkeeping *)0x0) &&
     (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (cloneBookkeeping->fields).linkIds,
     this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    LStack_6._list = pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      do {
        do {
          bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                            (&LStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                            );
          linkID = LStack_6._current;
          if (bVar9 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&LStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                       ,in_stack_10);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          pMStack_11 = (MethodInfo *)(cloneBookkeeping->fields).worldObjectIdsMaps;
          pLVar12 = (this->fields).links;
          if (pLVar12 == (Links *)0x0) goto code_?;
          pLVar13 = Links::Links_GetLink(pLVar12,(int32_t)LStack_6._current,(MethodInfo *)0x0);
          if (pLVar13 == (Link *)0x0) goto code_?;
          if (pMStack_11 == (MethodInfo *)0x0) goto code_?;
          in_stack_10 = pMStack_11;
          bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32_System_Single_ *)pMStack_11,
                             (pLVar13->fields).inputWOID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                            );
        } while (bVar9 == 0);
        pMStack_11 = (MethodInfo *)(cloneBookkeeping->fields).worldObjectIdsMaps;
        pLVar12 = (this->fields).links;
        if (pLVar12 == (Links *)0x0) goto code_?;
        pLVar13 = Links::Links_GetLink(pLVar12,(int32_t)linkID,(MethodInfo *)0x0);
        if (pLVar13 == (Link *)0x0) goto code_?;
        if (pMStack_11 == (MethodInfo *)0x0) goto code_?;
        bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32_System_Single_ *)pMStack_11,
                           (pLVar13->fields).outputWOID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                          );
      } while (bVar9 == 0);
      pMStack_11 = (MethodInfo *)(cloneBookkeeping->fields).worldObjectIdsMaps;
      pLVar12 = (this->fields).links;
      if (pLVar12 == (Links *)0x0) break;
      pLVar13 = Links::Links_GetLink(pLVar12,(int32_t)linkID,(MethodInfo *)0x0);
      if (pLVar13 == (Link *)0x0) break;
      if (pMStack_11 == (MethodInfo *)0x0) break;
      pOStack_14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pMStack_11,
                              (pLVar13->fields).inputWOID,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                             );
      pMStack_11 = (MethodInfo *)(cloneBookkeeping->fields).worldObjectIdsMaps;
      pLVar12 = (this->fields).links;
      if (pLVar12 == (Links *)0x0) break;
      pLVar13 = Links::Links_GetLink(pLVar12,(int32_t)linkID,(MethodInfo *)0x0);
      if (pLVar13 == (Link *)0x0) break;
      if (pMStack_11 == (MethodInfo *)0x0) break;
      pMStack_11 = (MethodInfo *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pMStack_11,
                              (pLVar13->fields).outputWOID,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                             );
      iStack_15 = (cloneBookkeeping->fields).cloneLinkIdIncrement;
      pLVar12 = (this->fields).links;
      if (pLVar12 == (Links *)0x0) break;
      pLVar13 = Links::Links_GetLink(pLVar12,(int32_t)linkID,(MethodInfo *)0x0);
      if (pLVar13 == (Link *)0x0) break;
      _bStack_1c = CONCAT31(uStack_16,(pLVar13->fields).isSet);
      pLVar13 = (Link *)func_?(TypeInfo__MV__WorldObject__Link);
      MVWorldObject.dll::MV::WorldObject::Link::Link__ctor
                (pLVar13,iStack_15,(int32_t)pMStack_11,(int32_t)pOStack_14,(bool)_bStack_1c,
                 (MethodInfo *)0x0);
      WorldNetwork_AddLink_1(this,pLVar13,(MethodInfo *)0x0);
      piVar17 = &(cloneBookkeeping->fields).cloneLinkIdIncrement;
      *piVar17 = *piVar17 + 1;
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current.First = 0;
  LStack_6._current.Last = 0;
  if ((cloneBookkeeping != (CloneBookkeeping *)0x0) &&
     (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (cloneBookkeeping->fields).objectLinkIds,
     this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    LStack_6._list = pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      do {
        do {
          bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                            (&LStack_6,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                            );
          objectLinkID = LStack_6._current;
          if (bVar9 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                      ((Object *)&LStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                       ,in_stack_10);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          pMStack_11 = (MethodInfo *)(cloneBookkeeping->fields).worldObjectIdsMaps;
          pOVar12 = (this->fields).objectLinks;
          if (pOVar12 == (ObjectLinks *)0x0) goto code_?;
          pOVar13 = ObjectLinks::ObjectLinks_GetObjectLink
                             (pOVar12,(int32_t)LStack_6._current,(MethodInfo *)0x0);
          if (pOVar13 == (ObjectLink *)0x0) goto code_?;
          if (pMStack_11 == (MethodInfo *)0x0) goto code_?;
          in_stack_10 = pMStack_11;
          bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                            ((Dictionary_2_System_Int32_System_Single_ *)pMStack_11,
                             (pOVar13->fields).objectConnectorWOID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                            );
        } while (bVar9 == 0);
        pMStack_11 = (MethodInfo *)(cloneBookkeeping->fields).worldObjectIdsMaps;
        pOVar12 = (this->fields).objectLinks;
        if (pOVar12 == (ObjectLinks *)0x0) goto code_?;
        pOVar13 = ObjectLinks::ObjectLinks_GetObjectLink
                           (pOVar12,(int32_t)objectLinkID,(MethodInfo *)0x0);
        if (pOVar13 == (ObjectLink *)0x0) goto code_?;
        if (pMStack_11 == (MethodInfo *)0x0) goto code_?;
        bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32_System_Single_ *)pMStack_11,
                           (pOVar13->fields).objectWOID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                          );
      } while (bVar9 == 0);
      pMStack_11 = (MethodInfo *)(cloneBookkeeping->fields).worldObjectIdsMaps;
      pOVar12 = (this->fields).objectLinks;
      if (pOVar12 == (ObjectLinks *)0x0) break;
      pOVar13 = ObjectLinks::ObjectLinks_GetObjectLink
                         (pOVar12,(int32_t)objectLinkID,(MethodInfo *)0x0);
      if (pOVar13 == (ObjectLink *)0x0) break;
      if (pMStack_11 == (MethodInfo *)0x0) break;
      pOStack_14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pMStack_11,
                              (pOVar13->fields).objectWOID,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                             );
      pMStack_11 = (MethodInfo *)(cloneBookkeeping->fields).worldObjectIdsMaps;
      pOVar12 = (this->fields).objectLinks;
      if (pOVar12 == (ObjectLinks *)0x0) break;
      pOVar13 = ObjectLinks::ObjectLinks_GetObjectLink
                         (pOVar12,(int32_t)objectLinkID,(MethodInfo *)0x0);
      if (pOVar13 == (ObjectLink *)0x0) break;
      if (pMStack_11 == (MethodInfo *)0x0) break;
      pMStack_11 = (MethodInfo *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pMStack_11,
                              (pOVar13->fields).objectConnectorWOID,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_
                             );
      iStack_15 = (cloneBookkeeping->fields).cloneObjectLinkIdIncrement;
      pOVar12 = (this->fields).objectLinks;
      if (pOVar12 == (ObjectLinks *)0x0) break;
      pOVar13 = ObjectLinks::ObjectLinks_GetObjectLink
                         (pOVar12,(int32_t)objectLinkID,(MethodInfo *)0x0);
      if (pOVar13 == (ObjectLink *)0x0) break;
      _bStack_1c = CONCAT31(uStack_16,(pOVar13->fields).isSet);
      pOVar13 = (ObjectLink *)func_?(TypeInfo__MV__WorldObject__ObjectLink);
      MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor
                (pOVar13,iStack_15,(int32_t)pMStack_11,(int32_t)pOStack_14,(bool)_bStack_1c,
                 (MethodInfo *)0x0);
      WorldNetwork_AddObjectLink_1(this,pOVar13,(MethodInfo *)0x0);
      piVar17 = &(cloneBookkeeping->fields).cloneObjectLinkIdIncrement;
      *piVar17 = *piVar17 + 1;
    }
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
    pOVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                       (pMVar1,
                        MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                       );
    pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                (pMVar1,
                 MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                );
      value = (MVCubeModelPrototypeTerrain *)func_?(TypeInfo__RuntimeEventManagerNetwork);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__RuntimeEventManager__AccumulatedCubeDamages,pOVar2);
        cRam_? = '\x01';
      }
      value_00 = (RuntimeEventManager_AccumulatedCubeDamages *)
                 func_?(TypeInfo__RuntimeEventManager__AccumulatedCubeDamages);
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
                        ,pOVar2);
        func_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
                       );
        func_?(&TypeInfo__UpdateController);
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
      IntVector,ChunkInstances+ChunkInstanceVariables]::
      Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
                );
      (value_00->fields).accumulatedCubeDamages =
           (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
            *)this_00;
      pMVar3 = (MethodInfo *)&value_00->fields;
      func_?(pMVar3,this_00);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)value_00,ExceptionArgument__Enum_obj,pMVar3);
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UpdateController::UpdateController_AddUpdateObject
                ((IUpdatecontrollerSubscriberUpdate *)value_00,
                 UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
      pMVar3 = (MethodInfo *)
               &(((RuntimeEventManagerNetwork__Fields *)&value->fields)->_).
                localAccumulatedCubeDamages;
      (((RuntimeEventManagerNetwork__Fields *)&value->fields)->_).localAccumulatedCubeDamages =
           value_00;
      func_?();
      pMVar4 = value;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)value,ExceptionArgument__Enum_obj,pMVar3);
      (((RuntimeEventManagerNetwork__Fields *)&value->fields)->_).cubeModelPrototypeTerrain = pMVar4
      ;
      puVar5 = &UNK_?;
      func_?(&value->fields,pMVar4);
      (value->fields)._._._.groupId = (int32_t)puVar5;
      func_?(&(value->fields)._._._.groupId,puVar5);
      (this->fields)._.runtimeEventManagerNetwork = (RuntimeEventManagerNetwork *)value;
      func_?(&(this->fields)._.runtimeEventManagerNetwork,value);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  method_00 = TypeInfo__WorldNetwork____c__DisplayClass8_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
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
      bp = (BytePacker *)value[1].monitor;
      this_00 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(
                               TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                               );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                 ,(MethodInfo *)0x0);
      this_01 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,value,
                 MethodInfo__WorldNetwork____c__DisplayClass8_0___CreateGameWorldFromQueryData_b__0_int_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaDataAsync
                (bp,(UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                     *)this_00,1,(UnityAction_1_System_Int32_ *)this_01,(MethodInfo *)0x0);
      return;
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
  if ((this->fields)._.InitializedGameQueryData !=
      (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__InitializedGameQueryDataEventArgs);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventArgs);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__EventArgs);
    }
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
    (this_00->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)root;
    func_?(&this_00->fields,root);
    this_00[1].klass =
         (UxmlObjectListAttributeDescription_1_System_Object___Class *)instigatorActorNumber;
    pEVar1 = (this->fields)._.InitializedGameQueryData;
    if (pEVar1 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,this_00,(pEVar1->fields)._._.method);
  }
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
          if (((unaff_ESI->klass->_1).naturalAligment <
               (TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent->_1).
               naturalAligment) ||
             ((unaff_ESI->klass->_1).typeHierarchy
              [(TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent->_1).
               naturalAligment - 1] !=
              (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent))
          goto code_?;
          pRVar4 = this_00;
          RuntimeEventManager::RuntimeEventManager_HandleEvent(this_00,unaff_ESI,(MethodInfo *)0x0);
          in_stack_3 = unaff_ESI;
        }
        else if ((char)RVar5 == '\x02') {
          pSVar6 = (SingleCubeFineGrainedEvent__Class *)
                   TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent;
          if (((unaff_ESI->klass->_1).naturalAligment <
               (TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).naturalAligment) ||
             ((unaff_ESI->klass->_1).typeHierarchy
              [(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).naturalAligment - 1]
              != (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent))
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
    pMVar1 = (this->fields)._.worldInventory;
    if (pMVar1 != (MVWorldInventory *)0x0) {
      MVWorldInventory::MVWorldInventory_AddPrototype(pMVar1,data,(MethodInfo *)0x0);
      return;
    }
    break;
  case KogamaDataType__Enum_WorldObjects:
    this_00 = (this->fields)._.worldObjectClientManager;
    if ((this_00 != (MVWorldObjectClientManagerNetwork *)0x0) &&
       (pMVar1 = (this->fields)._.worldInventory, pMVar1 != (MVWorldInventory *)0x0)) {
      unaff_ESI = KoGaMaPackageClient::KoGaMaPackageClient_WorldObjectFactory
                            (data,(this_00->fields)._.worldObjects,
                             (pMVar1->fields).runtimePrototypes,(MethodInfo *)0x0);
      if (unaff_ESI == (MVWorldObjectClient *)0x0) {
code_?:
        MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_AddToWorldObjects
                  (this_00,unaff_ESI,(MethodInfo *)0x0);
        return;
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 != (MVNetworkGame *)0x0) {
        pOVar3 = (Object *)(unaff_ESI->fields)._.id;
        pTVar4 = (pMVar2->fields).transformNetworkManager;
        if (pTVar4 != (TransformNetworkManager *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pOVar3 = mscorlib.dll::System::Collections::Generic::CollectionExtensions::
                   CollectionExtensions_GetValueOrDefault_1
                             ((IReadOnlyDictionary_2_System_Object_System_Object_ *)
                              (pTVar4->fields).networkedObjects,pOVar3,
                              MVNetworkObject_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<int,_MVNetworkObject>_System__Collections__Generic__IReadOnlyDictionary<int,_MVNetworkObject>__int_
                             );
          if (pOVar3 == (Object *)0x0) {
            MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject(unaff_ESI,0,(MethodInfo *)0x0)
            ;
          }
          goto code_?;
        }
      }
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
  cVar5 = '\0';
  iVar6 = func_?();
  LOCK();
  *(MVWorldObjectClient **)(iVar6 + 0x56) = unaff_ESI;
  UNLOCK();
  cVar7 = (char)((uint)iVar6 >> 8);
  if (SCARRY1(in_stack_8,cVar7) == SCARRY1(in_stack_8 + cVar7,cVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  this_01 = (UnityAction_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                           );
  pWVar1 = this;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__KoGaMaDataHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  key = (WorldNetwork *)
        KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
                  (queryData,
                   (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                    *)this_01,1,(MethodInfo *)0x0);
  pMVar2 = (pWVar1->fields)._.worldObjectClientManager;
  if (pMVar2 != (MVWorldObjectClientManagerNetwork *)0x0) {
    if (cRam_? == '\0') {
      method = (MethodInfo *)
               &
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
      ;
      queryData = (BytePacker *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (pMVar2->fields)._.worldObjects;
    this = (WorldNetwork *)0x0;
    if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      method = 
      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
      ;
      queryData = (BytePacker *)&this;
      this = key;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)key,
                 (Object **)queryData,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      pWVar1 = this;
      if (this != (WorldNetwork *)0x0) {
        uStack3 = this->klass[2]._1.thread_static_fields_size;
        pWStack4 = this;
        (*(code *)this->klass[2]._1.static_fields_size)();
      }
      return (MVWorldObjectClient *)pWVar1;
    }
  }
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar5 = (code *)swi(3);
  pMVar6 = (MVWorldObjectClient *)(*pcVar5)();
  return pMVar6;
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
    this_00 = (pLVar1->fields).links;
    if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)this_00,linkID,
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
    this_00 = (pOVar1->fields).objectLinks;
    if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)this_00,linkID,
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
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  (cloneBookkeeping->fields).linkIds = pLVar1;
  func_?(&(cloneBookkeeping->fields).linkIds,pLVar1);
  pLVar1 = (List_1_System_Int32_ *)
           func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  (cloneBookkeeping->fields).objectLinkIds = pLVar1;
  func_?(&(cloneBookkeeping->fields).objectLinkIds,pLVar1);
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  method_00 = (MethodInfo *)&(cloneBookkeeping->fields).worldObjectIdsMaps;
  (cloneBookkeeping->fields).worldObjectIdsMaps = (Dictionary_2_System_Int32_System_Int32_ *)this_00
  ;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)cloneBookkeeping,ExceptionArgument__Enum_obj,method_00);
  pMVar2 = (this->fields)._.worldObjectClientManager;
  if (pMVar2 != (MVWorldObjectClientManagerNetwork *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pDVar3 = (pMVar2->fields)._.worldObjects;
    pOStack_4 = (Object *)0x0;
    if (pDVar3 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,originalId,&pOStack_4,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      (cloneBookkeeping->fields).cloneIdIncrement = cloneId;
      (cloneBookkeeping->fields).cloneLinkIdIncrement = cloneLinkId;
      (cloneBookkeeping->fields).cloneObjectLinkIdIncrement = cloneObjectLinkId;
      if ((((this->fields)._.worldObjectClientManager != (MVWorldObjectClientManagerNetwork *)0x0)
          && (pOStack_4 != (Object *)0x0)) &&
         ((this->fields)._.worldInventory != (MVWorldInventory *)0x0)) {
        pDVar3 = (((this->fields)._.worldObjectClientManager)->fields)._.worldObjects;
        pMVar5 = (MVWorldObjectClient *)(*(code *)pOStack_4->klass[2]._1.instance_size)();
        if (cloneBookkeeping != (CloneBookkeeping *)0x0) {
          if (pMVar5 == (MVWorldObjectClient *)0x0) goto code_?;
          (pMVar5->fields)._.previewOwnerProfileId = (int32_t)cloneBookkeeping;
        }
        cloneToRootGroup = (bool)pDVar3;
        if (cloneToRootGroup == 0) {
          WorldNetwork_CloneLinks(this,cloneBookkeeping,(MethodInfo *)0x0);
          WorldNetwork_CloneObjectLinks(this,cloneBookkeeping,(MethodInfo *)0x0);
          if (pMVar5 != (MVWorldObjectClient *)0x0) {
code_?:
            (*(code *)(pMVar5->klass->vtable).Initialize.method)();
            return pMVar5;
          }
        }
        else {
          pMVar2 = (this->fields)._.worldObjectClientManager;
          if (pMVar2 != (MVWorldObjectClientManagerNetwork *)0x0) {
            if (cRam_? == '\0') {
              func_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             );
              func_?(&TypeInfo__MVGroup);
              cRam_? = '\x01';
            }
            pDVar3 = (pMVar2->fields)._.worldObjects;
            if (pDVar3 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
              key = (WorldNetwork *)(pMVar2->fields)._.rootGroupId;
              pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(int32_t)key,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                                 );
              if ((pOVar6 != (Object *)0x0) &&
                 (((pOVar6->klass->_1).naturalAligment < (TypeInfo__MVGroup->_1).naturalAligment ||
                  (this = key,
                  (MVGroup__Class *)
                  (pOVar6->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).naturalAligment - 1] !=
                  TypeInfo__MVGroup)))) goto code_?;
              if ((pMVar5 != (MVWorldObjectClient *)0x0) && (pOVar6 != (Object *)0x0)) {
                (*pOVar6->klass[3].vtable.Finalize.methodPtr)();
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
code_?:
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pMVar5 = (MVWorldObjectClient *)(*pcVar7)();
  return pMVar5;
}


/* Void OnGameDataDeserialized(BytePacker, Int32, Int32) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_OnGameDataDeserialized
               (WorldNetwork *this,BytePacker *queryData,int32_t instigatorActorNumber,
               int32_t rootId,MethodInfo *method)

{
  this_02 = (this->fields)._.worldObjectClientManager;
  if (this_02 != (MVWorldObjectClientManagerNetwork *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                     );
      cRam_? = '\x01';
    }
    this_00 = (Int32__Array *)(this_02->fields)._.worldObjects;
    pOVar1 = (Object *)0x0;
    if (this_00 != (Int32__Array *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryGetValue
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,rootId,
                 (Object **)&stack0xfffffff8,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                );
      if (pOVar1 != (Object *)0x0) {
        (*(code *)pOVar1->klass[2]._1.static_fields_size)
                  (pOVar1,pOVar1->klass[2]._1.thread_static_fields_size);
      }
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
      pMVar2 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
      if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
        runtimeEventType =
             (SingleCubeFineGrainedEvent__Class **)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                       (pMVar2,
                        MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                       );
        pMVar2 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
        if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
          MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                    (pMVar2,
                     MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                    );
          value = (RuntimeEventManagerNetwork *)
                  func_?(TypeInfo__RuntimeEventManagerNetwork);
          if (cRam_? == '\0') {
            func_?(&TypeInfo__RuntimeEventManager__AccumulatedCubeDamages);
            cRam_? = '\x01';
          }
          value_00 = (RuntimeEventManager_AccumulatedCubeDamages *)
                     func_?(TypeInfo__RuntimeEventManager__AccumulatedCubeDamages);
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
          this_02 = (MVWorldObjectClientManagerNetwork *)
                    func_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
                                   );
          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
          IntVector,ChunkInstances+ChunkInstanceVariables]::
          Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
                    ((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *
                     )this_02,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
                    );
          pMVar3 = (MethodInfo *)&value_00->fields;
          (value_00->fields).accumulatedCubeDamages =
               (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                *)this_02;
          func_?(pMVar3,this_02);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)value_00,ExceptionArgument__Enum_obj,pMVar3);
          if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UpdateController::UpdateController_AddUpdateObject
                    ((IUpdatecontrollerSubscriberUpdate *)value_00,
                     UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,(MethodInfo *)0x0);
          pMVar3 = (MethodInfo *)&(value->fields)._.localAccumulatedCubeDamages;
          (value->fields)._.localAccumulatedCubeDamages = value_00;
          func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)value,ExceptionArgument__Enum_obj,pMVar3);
          (value->fields)._.cubeModelPrototypeTerrain =
               (MVCubeModelPrototypeTerrain *)runtimeEventType;
          func_?(&value->fields);
          (value->fields)._.cubeModelFineGrainedTerrain =
               (MVCubeModelFineGrainedTerrain *)runtimeEventType;
          func_?(&(value->fields)._.cubeModelFineGrainedTerrain,runtimeEventType);
          (this->fields)._.runtimeEventManagerNetwork = value;
          func_?(&(this->fields)._.runtimeEventManagerNetwork,value);
          this_01 = (RuntimeEventManager *)(this->fields)._.runtimeEventManagerNetwork;
          if ((this_01 != (RuntimeEventManager *)0x0) &&
             (this_02 = (MVWorldObjectClientManagerNetwork *)0x0, queryData != (BytePacker *)0x0)) {
            iVar4 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                              (queryData,(MethodInfo *)0x0);
            iVar5 = 0;
            if (0 < iVar4) {
              do {
                puVar6 = (undefined *)0x0;
                this_02 = (MVWorldObjectClientManagerNetwork *)
                          MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                          RuntimeEvent_Create(queryData,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  runtimeEventType =
                       &TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
                  puVar6 = &UNK_?;
                  func_?(&
                                  TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent
                                 );
                  cRam_? = '\x01';
                }
                if (this_02 == (MVWorldObjectClientManagerNetwork *)0x0) goto code_?;
                runtimeEventType =
                     (SingleCubeFineGrainedEvent__Class **)
                     CONCAT31((int3)((uint)runtimeEventType >> 8),
                              *(undefined1 *)((int)&(this_02->fields)._.pendingUngroupQueue + 2));
                RVar7 = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                        RuntimeEvent_GetRuntimeEventObjectType
                                  ((RuntimeEventType__Enum)runtimeEventType,(MethodInfo *)0x0);
                if ((char)RVar7 == '\x01') {
                  pSVar8 = TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent;
                  if (((((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                          *)this_02->klass)->_1).naturalAligment <
                       (TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent->_1).
                       naturalAligment) ||
                     ((((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                         *)this_02->klass)->_1).typeHierarchy
                      [(TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent->_1).
                       naturalAligment - 1] !=
                      (Il2CppClass *)
                      TypeInfo__MV__WorldObject__RuntimeEvents__SingleCubeFineGrainedEvent))
                  goto code_?;
                  RuntimeEventManager::RuntimeEventManager_HandleEvent
                            (this_01,(SingleCubeFineGrainedEvent *)this_02,(MethodInfo *)0x0);
                }
                else if ((char)RVar7 == '\x02') {
                  pSVar8 = (SingleCubeFineGrainedEvent__Class *)
                           TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent;
                  if (((((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                          *)this_02->klass)->_1).naturalAligment <
                       (TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).
                       naturalAligment) ||
                     ((((Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___Class
                         *)this_02->klass)->_1).typeHierarchy
                      [(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent->_1).
                       naturalAligment - 1] !=
                      (Il2CppClass *)TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent))
                  goto code_?;
                  RuntimeEventManager::RuntimeEventManager_HandleEvent_1
                            (this_01,(ExplosionEvent *)this_02,(MethodInfo *)0x0);
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < (int)puVar6);
            }
            (this_01->fields).doEffects = 1;
            WorldNetwork_CreateQueryEvent
                      (this,(MVWorldObjectClient *)instigatorActorNumber,instigatorActorNumber,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pSVar8 = extraout_EDX;
code_?:
  func_?(this_02,pSVar8);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean OnUnregisterWorldObject(Int32) */

bool Assembly-CSharp.dll::WorldNetwork::WorldNetwork_OnUnregisterWorldObject
               (WorldNetwork *this,int32_t id,MethodInfo *method)

{
  pMVar1 = (this->fields)._.worldObjectClientManager;
  if (pMVar1 != (MVWorldObjectClientManagerNetwork *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                     );
      cRam_? = '\x01';
    }
    this_00 = (pMVar1->fields)._.worldObjects;
    if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)this_00,id,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                        );
      if (bVar2 == 0) {
        return 0;
      }
      pMVar1 = (this->fields)._.worldObjectClientManager;
      if (pMVar1 != (MVWorldObjectClientManagerNetwork *)0x0) {
        MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_DestroyWO
                  (pMVar1,id,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
    pDVar3 = (pOVar2->fields).objectLinks;
    if (pDVar3 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar3,objectLinkID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                        );
      if (bVar4 == 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
          this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
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
            pDVar3 = (pOVar2->fields).objectLinks;
            if (pDVar3 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
              bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Single]::Dictionary_2_System_Int32_System_Single__ContainsKey
                                ((Dictionary_2_System_Int32_System_Single_ *)pDVar3,
                                 (link->fields).id,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                                );
              if (bVar4 == 0) {
                if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Debug);
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                          ((Object *)StringLiteral_Attempt_to_remove_ObjectLink__bu,
                           (MethodInfo *)0x0);
                return;
              }
              pDVar3 = (pOVar2->fields).objectLinks;
              if (((pDVar3 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) &&
                  (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__Remove
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(link->fields).id,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Remove_int_
                             ), this != (WorldNetwork *)0x0)) &&
                 (MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveObjectLink
                            ((MVWorldObject *)this,link,(MethodInfo *)0x0),
                 this_00 != (MVWorldObject *)0x0)) {
                MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_RemoveObjectLink
                          (this_00,link,(MethodInfo *)0x0);
                MVar6 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
                if (MVar6 != MVGameMode__Enum_Edit) {
                  return;
                }
                pDVar7 = (pOVar2->fields).objectLinkObjects;
                if ((pDVar7 != (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) &&
                   (this_01 = (Component *)
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32,System::Object]::
                              Dictionary_2_System_Int32_System_Object__get_Item
                                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,
                                         (link->fields).id,
                                         MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__get_Item_int_
                                        ), this_01 != (Component *)0x0)) {
                  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_01,(MethodInfo *)0x0);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (MVWorldInventory *)func_?(TypeInfo__MVWorldInventory);
  MVWorldInventory::MVWorldInventory__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._.worldInventory = this_00;
  func_?(&(this->fields)._.worldInventory,this_00);
  this_01 = (Links *)func_?(TypeInfo__Links);
  Links::Links__ctor(this_01,(MethodInfo *)0x0);
  (this->fields).links = this_01;
  func_?(&(this->fields).links,this_01);
  this_02 = (MVWorldObjectClientManager *)
            func_?(TypeInfo__MVWorldObjectClientManagerNetwork);
  MVWorldObjectClientManager::MVWorldObjectClientManager__ctor(this_02,(MethodInfo *)0x0);
  (this->fields)._.worldObjectClientManager = (MVWorldObjectClientManagerNetwork *)this_02;
  func_?(&this->fields,this_02);
  ppMStack1 = (MethodInfo **)TypeInfo__ObjectLinks;
  value = (ObjectLinks *)func_?();
  if (cRam_? == '\0') {
    ppMStack1 =
         &
         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
    ;
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  ppMStack1 =
       (MethodInfo **)
       TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>;
  pDVar2 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?();
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar2,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
            );
  (value->fields).objectLinks = (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)pDVar2;
  func_?();
  pDVar2 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?();
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar2,
             MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Dictionary__
            );
  method_00 = (MethodInfo *)&(value->fields).objectLinkObjects;
  (value->fields).objectLinkObjects = (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)pDVar2;
  func_?(method_00,pDVar2);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,method_00);
  (this->fields).objectLinks = value;
  func_?(&(this->fields).objectLinks,value);
  return;
}

