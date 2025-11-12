
/* Void AddGameQueryDataToGameWorld(BytePacker, Int32) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddGameQueryDataToGameWorld
               (WorldNetwork *this,BytePacker *queryData,int32_t instigatorActorNumber,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (UnityAction_2_System_Object_System_ByteEnum_ *)
            FUN_?(
                         TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::ByteEnum]::
  UnityAction_2_System_Object_System_ByteEnum___ctor
            (this_01,(Object *)this,
             MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
    FUN_?();
  }
  id = KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
                 (queryData,
                  (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                   *)this_01,1,(MethodInfo *)0x0);
  this_00 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
  if (this_00 == (MVWorldObjectClientManager *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                     (this_00,id,(MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClient *)0x0) {
    (*(pMVar2->klass->vtable).Initialize.methodPtr)
              (pMVar2,(pMVar2->klass->vtable).Initialize.method);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__InitializedGameQueryDataEventArgs,pMVar2,instigatorActorNumber,0,
                  unaff_RDI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.InitializedGameQueryData !=
      (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    lVar3 = FUN_?(TypeInfo__InitializedGameQueryDataEventArgs);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar4 = iRam_? != 0;
    *(MVWorldObjectClient **)(lVar3 + 0x10) = pMVar2;
    if (bVar4) {
      uVar5 = (uint)(lVar3 + 0x10U >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    *(int32_t *)(lVar3 + 0x18) = instigatorActorNumber;
    pEVar9 = (this->fields)._.InitializedGameQueryData;
    if (pEVar9 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(pEVar9->fields)._._.invoke_impl)
              ((pEVar9->fields)._._.method_code,this,lVar3,(pEVar9->fields)._._.method);
  }
  return;
}


/* Void AddLink(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddLink
               (WorldNetwork *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__LinkDataParameter);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Link);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  link = (Link *)FUN_?(TypeInfo__MV__WorldObject__Link);
  pOStackX_10 = (Object *)((ulonglong)pOStackX_10 & 0xffffffffffffff00);
  (link->fields).id = -1;
  (link->fields).outputWOID = -1;
  (link->fields).inputWOID = -1;
  pLVar1 = TypeInfo__MV__WorldObject__LinkDataParameter;
  iVar2._0_2_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.attrs;
  iVar2._2_1_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.type;
  iVar2._3_1_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.field_0xb;
  pOVar3 = pOStackX_10;
  if (iVar2 < 0) {
    if (((TypeInfo__MV__WorldObject__LinkDataParameter->_0).generic_class ==
         (Il2CppGenericClass *)0x0) ||
       (((TypeInfo__MV__WorldObject__LinkDataParameter->_1).field_0x6d & 8) == 0)) {
      pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter);
      FUN_?(pOVar3 + 1,&pOStackX_10,(longlong)(int)(pLVar1->_1).instance_size + -0x10);
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
    }
    else {
      pOVar3 = (Object *)0x0;
    }
  }
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (data,pOVar3,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar3 != (Object *)0x0)) {
    if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar3,lRam_?);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (link->fields).id = *(int32_t *)&pOVar3[1].klass;
    pOStackX_10 = (Object *)CONCAT71(pOStackX_10._1_7_,1);
    pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter,&pOStackX_10);
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,pOVar3,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar3 != (Object *)0x0) {
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (link->fields).outputWOID = *(int32_t *)&pOVar3[1].klass;
      pOStackX_10 = (Object *)CONCAT71(pOStackX_10._1_7_,2);
      pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter,&pOStackX_10);
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (data,pOVar3,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (pOVar3 != (Object *)0x0) {
        if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar3,lRam_?);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (link->fields).inputWOID = *(int32_t *)&pOVar3[1].klass;
        pMVar9 = (this->fields)._.worldObjectClientManager;
        iVar10 = (link->fields).outputWOID;
        if (pMVar9 != (MVWorldObjectClientManagerNetwork *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar11 = (pMVar9->fields)._.worldObjects;
          pOStackX_10 = (Object *)0x0;
          if (pDVar11 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryGetValue
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar11,iVar10,&pOStackX_10,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                    );
          pMVar9 = (this->fields)._.worldObjectClientManager;
          iVar10 = (link->fields).inputWOID;
          if (pMVar9 != (MVWorldObjectClientManagerNetwork *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pDVar11 = (pMVar9->fields)._.worldObjects;
            pOStackX_20 = (Object *)0x0;
            if (pDVar11 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pMVar12 = 
            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
            ;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar11,iVar10,&pOStackX_20,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
            pLVar13 = (this->fields).links;
            if (pLVar13 != (Links *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Add_int__MV__WorldObject__Link_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__Add_int__LinkObjectScript_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              LinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<LinkObjectScript>_LinkObjectScript_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_00 = (pLVar13->fields).links;
              if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) {
                uVar14 = CONCAT71((int7)((ulonglong)pMVar12 >> 8),2);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                          ((Dictionary_2_System_Int32_System_Object_ *)this_00,(link->fields).id,
                           (Object *)link,(InsertionBehavior__Enum)uVar14,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Add_int__MV__WorldObject__Link_
                           ->klass->rgctx_data[0x22].method);
                if (pOStackX_10 != (Object *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pOVar3 = pOStackX_10;
                  if (pOStackX_10[2].klass != (Object__Class *)0x0) {
                    FUN_?(pOStackX_10[2].klass,link);
                    (link->fields).outputWOID = *(int32_t *)&pOVar3[1].klass;
                    if (pOVar3[9].klass != (Object__Class *)0x0) {
                      (*(code *)((pOVar3[9].klass)->_0).namespaze)
                                (((pOVar3[9].klass)->_0).element_class,pOVar3[2].klass);
                    }
                    if (pOStackX_20 != (Object *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pOVar3 = pOStackX_20;
                      if (pOStackX_20[2].monitor != (MonitorData *)0x0) {
                        FUN_?(pOStackX_20[2].monitor,link);
                        (link->fields).inputWOID = *(int32_t *)&pOVar3[1].klass;
                        if (pOVar3[8].monitor != (MonitorData *)0x0) {
                          (**(code **)(pOVar3[8].monitor + 0x18))
                                    (*(undefined8 *)(pOVar3[8].monitor + 0x40),pOVar3[2].monitor);
                        }
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__MVGameControllerBase);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pGVar15 = TypeInfo__MVGameControllerBase->static_fields->
                                 _GameSessionData_k__BackingField;
                        if (pGVar15 != (GameSessionData *)0x0) {
                          if ((pGVar15->fields).gameMode != 0) {
                            return;
                          }
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__PrefabPool);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pPVar16 = TypeInfo__PrefabPool->static_fields->instance;
                          if (pPVar16 != (PrefabPool *)0x0) {
                            pLVar17 = (pPVar16->fields).linkObject;
                            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                              FUN_?();
                            }
                            pLVar17 = (LinkObjectScript *)
                                      UnityEngine.CoreModule.dll::UnityEngine::Object::
                                      Object_1_Instantiate_4
                                                ((Object *)pLVar17,
                                                 LinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<LinkObjectScript>_LinkObjectScript_
                                                );
                            if (pLVar17 != (LinkObjectScript *)0x0) {
                              (pLVar17->fields)._.isObjectLink = 0;
                              (pLVar17->fields)._.linkID = (link->fields).id;
                              LinkObjectScript::LinkObjectScript_UpdateLinkVisual
                                        (pLVar17,link,(MethodInfo *)0x0);
                              this_01 = (pLVar13->fields).linkObjects;
                              if (this_01 != (Dictionary_2_System_Int32_LinkObjectScript_ *)0x0) {
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32,System::Object]::
                                Dictionary_2_System_Int32_System_Object__TryInsert
                                          ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                                           (link->fields).id,(Object *)pLVar17,
                                           (InsertionBehavior__Enum)
                                           CONCAT71((int7)((ulonglong)uVar14 >> 8),2),
                                           MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__Add_int__LinkObjectScript_
                                           ->klass->rgctx_data[0x22].method);
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
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void AddLink(Link) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddLink_1
               (WorldNetwork *this,Link *link,MethodInfo *method)

{
  if ((link != (Link *)0x0) &&
     (pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager,
     pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    outputWo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (pMVar1,(link->fields).outputWOID,(MethodInfo *)0x0);
    pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      inputWo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar1,(link->fields).inputWOID,(MethodInfo *)0x0);
      this_00 = (this->fields).links;
      if (this_00 != (Links *)0x0) {
        Links::Links_AddLink(this_00,link,outputWo,inputWo,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__ObjectLinkDataParameter);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__ObjectLink);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  link = (ObjectLink *)FUN_?(TypeInfo__MV__WorldObject__ObjectLink);
  pMStackX_10 = (MVWorldObject *)((ulonglong)pMStackX_10 & 0xffffffffffffff00);
  (link->fields).id = -1;
  (link->fields).objectConnectorWOID = -1;
  (link->fields).objectWOID = -1;
  (link->fields).isSet = 1;
  pOVar1 = TypeInfo__MV__WorldObject__ObjectLinkDataParameter;
  iVar2._0_2_ = (TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).byval_arg.attrs;
  iVar2._2_1_ = (TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).byval_arg.type;
  iVar2._3_1_ = (TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).byval_arg.field_0xb;
  key = pMStackX_10;
  if (iVar2 < 0) {
    if (((TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).generic_class ==
         (Il2CppGenericClass *)0x0) ||
       (((TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_1).field_0x6d & 8) == 0)) {
      key = (MVWorldObject *)FUN_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter);
      FUN_?(&key->fields,&pMStackX_10,(longlong)(int)(pOVar1->_1).instance_size + -0x10);
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&key->fields >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
    }
    else {
      key = (MVWorldObject *)0x0;
    }
  }
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (data,(Object *)key,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          ), pOVar8 != (Object *)0x0)) {
    if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar8);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (link->fields).id = *(int32_t *)&pOVar8[1].klass;
    pMStackX_10 = (MVWorldObject *)CONCAT71(pMStackX_10._1_7_,1);
    pOVar8 = (Object *)
              FUN_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&pMStackX_10);
    pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (data,pOVar8,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (pOVar8 != (Object *)0x0) {
      if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar8);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      (link->fields).objectConnectorWOID = *(int32_t *)&pOVar8[1].klass;
      pMStackX_10 = (MVWorldObject *)CONCAT71(pMStackX_10._1_7_,2);
      pOVar8 = (Object *)
                FUN_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&pMStackX_10);
      pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (data,pOVar8,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (pOVar8 != (Object *)0x0) {
        if ((pOVar8->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar8);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        (link->fields).objectWOID = *(int32_t *)&pOVar8[1].klass;
        pMVar10 = (this->fields)._.worldObjectClientManager;
        iVar11 = (link->fields).objectConnectorWOID;
        if (pMVar10 != (MVWorldObjectClientManagerNetwork *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pDVar12 = (pMVar10->fields)._.worldObjects;
          pMStackX_10 = (MVWorldObject *)0x0;
          if (pDVar12 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryGetValue
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,iVar11,
                     (Object **)&pMStackX_10,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                    );
          pMVar10 = (this->fields)._.worldObjectClientManager;
          iVar11 = (link->fields).objectWOID;
          if (pMVar10 != (MVWorldObjectClientManagerNetwork *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pDVar12 = (pMVar10->fields)._.worldObjects;
            pMStackX_20 = (MVWorldObject *)0x0;
            if (pDVar12 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
              FUN_?();
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pMVar13 = 
            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
            ;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar12,iVar11,
                       (Object **)&pMStackX_20,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
            pOVar14 = (this->fields).objectLinks;
            if (pOVar14 != (ObjectLinks *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Add_int__ObjectLinkObjectScript_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              ObjectLinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<ObjectLinkObjectScript>_ObjectLinkObjectScript_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_00 = (pOVar14->fields).objectLinks;
              if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)0x0) {
                uVar15 = CONCAT71((int7)((ulonglong)pMVar13 >> 8),2);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                          ((Dictionary_2_System_Int32_System_Object_ *)this_00,(link->fields).id,
                           (Object *)link,(InsertionBehavior__Enum)uVar15,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Add_int__MV__WorldObject__ObjectLink_
                           ->klass->rgctx_data[0x22].method);
                if ((pMStackX_10 != (MVWorldObject *)0x0) &&
                   (MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddObjectLink
                              (pMStackX_10,link,(MethodInfo *)0x0),
                   pMStackX_20 != (MVWorldObject *)0x0)) {
                  MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_AddObjectLink
                            (pMStackX_20,link,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pGVar16 = TypeInfo__MVGameControllerBase->static_fields->
                           _GameSessionData_k__BackingField;
                  if (pGVar16 != (GameSessionData *)0x0) {
                    if ((pGVar16->fields).gameMode != 0) {
                      return;
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__PrefabPool);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pPVar17 = TypeInfo__PrefabPool->static_fields->instance;
                    if (pPVar17 != (PrefabPool *)0x0) {
                      pOVar18 = (pPVar17->fields).objectLinkObject;
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      pOVar18 = (ObjectLinkObjectScript *)
                                UnityEngine.CoreModule.dll::UnityEngine::Object::
                                Object_1_Instantiate_4
                                          ((Object *)pOVar18,
                                           ObjectLinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<ObjectLinkObjectScript>_ObjectLinkObjectScript_
                                          );
                      if (pOVar18 != (ObjectLinkObjectScript *)0x0) {
                        (pOVar18->fields)._.isObjectLink = 1;
                        (pOVar18->fields)._.linkID = (link->fields).id;
                        ObjectLinkObjectScript::ObjectLinkObjectScript_UpdateLinkVisual
                                  (pOVar18,link,(MethodInfo *)0x0);
                        this_01 = (pOVar18->fields).lineRenderer;
                        if ((this_01 != (LineRenderer *)0x0) &&
                           (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                                      Renderer_get_material((Renderer *)this_01,(MethodInfo *)0x0),
                           this_03 != (Material *)0x0)) {
                          CStack_19.r = _UNK_?;
                          CStack_19.g = _UNK_?;
                          CStack_19.b = _UNK_?;
                          CStack_19.a = _UNK_?;
                          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                                    (this_03,&CStack_19,(MethodInfo *)0x0);
                          this_02 = (pOVar14->fields).objectLinkObjects;
                          if (this_02 != (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) {
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::
                            Dictionary_2_System_Int32_System_Object__TryInsert
                                      ((Dictionary_2_System_Int32_System_Object_ *)this_02,
                                       (link->fields).id,(Object *)pOVar18,
                                       (InsertionBehavior__Enum)
                                       CONCAT71((int7)((ulonglong)uVar15 >> 8),2),
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Add_int__ObjectLinkObjectScript_
                                       ->klass->rgctx_data[0x22].method);
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
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void AddObjectLink(ObjectLink) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddObjectLink_1
               (WorldNetwork *this,ObjectLink *objectLink,MethodInfo *method)

{
  if ((objectLink != (ObjectLink *)0x0) &&
     (pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager,
     pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    objectConnectorWo =
         MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                   (pMVar1,(objectLink->fields).objectConnectorWOID,(MethodInfo *)0x0);
    pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      objectWo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (pMVar1,(objectLink->fields).objectWOID,(MethodInfo *)0x0);
      this_00 = (this->fields).objectLinks;
      if (this_00 != (ObjectLinks *)0x0) {
        ObjectLinks::ObjectLinks_AddObjectLink
                  (this_00,objectLink,objectConnectorWo,objectWo,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddPrototype(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddPrototype
               (WorldNetwork *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  pMVar1 = (this->fields)._.worldInventory;
  if (pMVar1 == (MVWorldInventory *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte,data,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__PrototypeDataParameters);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RuntimePrototypeCubeModel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar3 = TypeInfo__MV__WorldObject__PrototypeDataParameters;
  uStackX_10 = 0;
  iVar4._0_2_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.attrs;
  iVar4._2_1_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.type;
  iVar4._3_1_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.field_0xb;
  if (iVar4 < 0) {
    if (((TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).generic_class ==
         (Il2CppGenericClass *)0x0) ||
       (((TypeInfo__MV__WorldObject__PrototypeDataParameters->_1).field_0x6d & 8) == 0)) {
      pOVar5 = (Object *)FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters);
      FUN_?(pOVar5 + 1,&uStackX_10,(longlong)(int)(pPVar3->_1).instance_size + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(pOVar5 + 1) >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
    }
    else {
      pOVar5 = (Object *)0x0;
    }
  }
  else {
    pOVar5 = (Object *)((ulonglong)uStackX_11 << 8);
  }
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar5,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar5 != (Object *)0x0)) {
    if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar5,lRam_?);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    id = *(int32_t *)&pOVar5[1].klass;
    uStackX_10 = 1;
    pOVar5 = (Object *)FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStackX_10)
    ;
    pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar5,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar5 != (Object *)0x0) {
      if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar5,lRam_?);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      scale = *(float *)&pOVar5[1].klass;
      uStackX_10 = 3;
      pOVar5 = (Object *)
               FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStackX_10);
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar5,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar5 != (Object *)0x0) {
        if ((pOVar5->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar5,lRam_?);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        authorProfileId = *(int32_t *)&pOVar5[1].klass;
        uStackX_10 = 2;
        pOVar5 = (Object *)
                 FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&uStackX_10);
        pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (data,pOVar5,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pBVar11 = TypeInfo__System__Byte;
        if (pOVar5 == (Object *)0x0) {
          data_00 = (Byte__Array *)0x0;
        }
        else {
          data_00 = (Byte__Array *)FUN_?(pOVar5,TypeInfo__System__Byte);
          if (data_00 == (Byte__Array *)0x0) {
            FUN_?(pOVar5,pBVar11);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        this_01 = (RuntimePrototypeCubeModel *)FUN_?(TypeInfo__RuntimePrototypeCubeModel);
        RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_1
                  (this_01,id,authorProfileId,scale,data_00,(MethodInfo *)0x0);
        this_00 = (pMVar1->fields).runtimePrototypes;
        if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryInsert
                    ((Dictionary_2_System_Int32_System_Object_ *)this_00,id,(Object *)this_01,
                     (InsertionBehavior__Enum)
                     CONCAT71((int7)((ulonglong)
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                                     ->klass >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                     ->klass->rgctx_data[0x22].method);
          pMVar12 = (pMVar1->fields).OnWorldInventoryChange;
          if (pMVar12 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
            (*(pMVar12->fields)._._.invoke_impl)
                      ((pMVar12->fields)._._.method_code,pMVar1,(pMVar12->fields)._._.method);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddWorldObject(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_AddWorldObject
               (WorldNetwork *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  pMVar1 = (this->fields)._.worldObjectClientManager;
  if ((pMVar1 != (MVWorldObjectClientManagerNetwork *)0x0) &&
     (pMVar2 = (this->fields)._.worldInventory, pMVar2 != (MVWorldInventory *)0x0)) {
    uVar3 = 0;
    this_05 = KoGaMaPackageClient::KoGaMaPackageClient_WorldObjectFactory
                        (data,(pMVar1->fields)._.worldObjects,(pMVar2->fields).runtimePrototypes,
                         (MethodInfo *)0x0);
    if (this_05 != (MVWorldObjectClient *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar4 == (MVGameControllerBase *)0x0) ||
          (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0)) ||
         (this_04 = (pMVar5->fields).transformNetworkManager,
         this_04 == (TransformNetworkManager *)0x0)) goto code_?;
      pMVar6 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                         (this_04,(this_05->fields)._.id,(MethodInfo *)0x0);
      if (pMVar6 == (MVNetworkObject *)0x0) {
        MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject(this_05,0,(MethodInfo *)0x0);
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,this_05,0);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__MVGroup);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__WorldObjectCreatedEventArgs);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Key_already_in_WorldObjects_dict);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((this_05 != (MVWorldObjectClient *)0x0) &&
       (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pMVar1->fields)._.worldObjects,
       this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
      iVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_00,(this_05->fields)._.id,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar7) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Key_already_in_WorldObjects_dict,(MethodInfo *)0x0);
        return;
      }
      this_01 = (pMVar1->fields)._.worldObjects;
      if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,(this_05->fields)._.id,
                   (Object *)this_05,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                   ->klass->rgctx_data[0x22].method);
        this_02 = (pMVar1->fields)._.worldObjectMapping;
        if (this_02 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
          MVWorldObjectClientManager+WorldObjectMapping::
          MVWorldObjectClientManager_WorldObjectMapping_AddWorldObjectToTypeSet
                    (this_02,this_05,(MethodInfo *)0x0);
          key = (Object *)FUN_?(&(this_05->klass->_0).byval_arg);
          this_03 = (pMVar1->fields)._.woCreatedEventSubscribers;
          if (this_03 !=
              (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      ((Dictionary_2_System_Object_System_Object_ *)this_03,key,
                       (Object **)&stack0x00000008,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                      );
            if ((this_05->fields)._.groupId != -1) {
              return;
            }
            bVar8 = (TypeInfo__MVGroup->_1).naturalAligment;
            if ((bVar8 <= (this_05->klass->_1).naturalAligment) &&
               ((MVGroup__Class *)(this_05->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] ==
                TypeInfo__MVGroup)) {
              (pMVar1->fields)._.rootGroupId = (this_05->fields)._.id;
              return;
            }
            FUN_?(this_05);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
      }
    }
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void CloneLinks(CloneBookkeeping) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_CloneLinks
               (WorldNetwork *this,CloneBookkeeping *cloneBookkeeping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__Link);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((cloneBookkeeping == (CloneBookkeeping *)0x0) ||
     (pLStack_1 = (cloneBookkeeping->fields).linkIds, pLStack_1 == (List_1_System_Int32_ *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  ppLStack_8 = (List_1_System_Int32_ **)((ulonglong)(uint)(pLStack_1->fields)._version << 0x20);
  uStack_9 = 0;
  uStack_10 = (longlong)ppLStack_8;
  uStack_11 = 0;
  uStack_4 = 0;
  ppLStack_8 = &pLStack_1;
code_?:
  if (pLStack_1 != (List_1_System_Int32_ *)0x0) {
    if (uStack_10._4_4_ == (pLStack_1->fields)._version) {
      if ((uint)(pLStack_1->fields)._size <= (uint)uStack_10) goto code_?;
      pIVar12 = (pLStack_1->fields)._items;
      if (pIVar12 != (Int32__Array *)0x0) {
        if ((uint)pIVar12->max_length <= (uint)uStack_10) {
          FUN_?();
          goto code_?;
        }
        linkID = pIVar12->vector[(int)(uint)uStack_10];
        uStack_11 = CONCAT44(uStack_11._4_4_,linkID);
        uStack_10 = CONCAT44(uStack_10._4_4_,(uint)uStack_10 + 1);
        pDVar13 = (Dictionary_2_System_Int32_System_Single_ *)
                 (cloneBookkeeping->fields).worldObjectIdsMaps;
        pLVar14 = (this->fields).links;
        if (pLVar14 != (Links *)0x0) {
          pLVar15 = Links::Links_GetLink(pLVar14,linkID,(MethodInfo *)0x0);
          if (pLVar15 != (Link *)0x0) {
            if (pDVar13 != (Dictionary_2_System_Int32_System_Single_ *)0x0)
            goto code_?;
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__->klass->
         field_0x135 & 1) == 0) {
      FUN_?();
    }
    if (pLStack_1 != (List_1_System_Int32_ *)0x0) {
      if (uStack_10._4_4_ == (pLStack_1->fields)._version) {
        return;
      }
      goto code_?;
    }
    goto code_?;
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
code_?:
  iVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
           Dictionary_2_System_Int32_System_Single__FindEntry
                     (pDVar13,(pLVar15->fields).inputWOID,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                      ->klass->rgctx_data[0x21].method);
  if (-1 < iVar16) {
    pDVar13 = (Dictionary_2_System_Int32_System_Single_ *)
             (cloneBookkeeping->fields).worldObjectIdsMaps;
    pLVar14 = (this->fields).links;
    if (pLVar14 != (Links *)0x0) {
      pLVar15 = Links::Links_GetLink(pLVar14,linkID,(MethodInfo *)0x0);
      if (pLVar15 != (Link *)0x0) {
        if (pDVar13 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
          iVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Single]::Dictionary_2_System_Int32_System_Single__FindEntry
                             (pDVar13,(pLVar15->fields).outputWOID,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                              ->klass->rgctx_data[0x21].method);
          if (iVar16 < 0) goto code_?;
          pDVar17 = (cloneBookkeeping->fields).worldObjectIdsMaps;
          pLVar14 = (this->fields).links;
          if (pLVar14 != (Links *)0x0) {
            pLVar15 = Links::Links_GetLink(pLVar14,linkID,(MethodInfo *)0x0);
            if (pLVar15 != (Link *)0x0) {
              if (pDVar17 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
                iVar16 = FUN_?(pDVar17,(pLVar15->fields).inputWOID);
                pDVar17 = (cloneBookkeeping->fields).worldObjectIdsMaps;
                pLVar14 = (this->fields).links;
                if (pLVar14 != (Links *)0x0) {
                  pLVar15 = Links::Links_GetLink(pLVar14,linkID,(MethodInfo *)0x0);
                  if (pLVar15 != (Link *)0x0) {
                    if (pDVar17 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
                      iVar18 = FUN_?(pDVar17,(pLVar15->fields).outputWOID);
                      iVar19 = (cloneBookkeeping->fields).cloneLinkIdIncrement;
                      pLVar14 = (this->fields).links;
                      if (pLVar14 != (Links *)0x0) {
                        pLVar15 = Links::Links_GetLink(pLVar14,linkID,(MethodInfo *)0x0);
                        if (pLVar15 != (Link *)0x0) {
                          bVar20 = (pLVar15->fields).isSet;
                          pLVar15 = (Link *)FUN_?(TypeInfo__MV__WorldObject__Link);
                          (pLVar15->fields).id = iVar19;
                          (pLVar15->fields).outputWOID = iVar18;
                          (pLVar15->fields).inputWOID = iVar16;
                          (pLVar15->fields).isSet = bVar20;
                          WorldNetwork_AddLink_1(this,pLVar15,(MethodInfo *)0x0);
                          piVar21 = &(cloneBookkeeping->fields).cloneLinkIdIncrement;
                          *piVar21 = *piVar21 + 1;
                          goto code_?;
                        }
code_?:
                        FUN_?();
                      }
                      FUN_?();
                    }
                    FUN_?();
                  }
                  FUN_?();
                }
                FUN_?();
              }
              FUN_?();
            }
            FUN_?();
          }
          FUN_?();
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
    goto code_?;
  }
  goto code_?;
}


/* Void CloneObjectLinks(CloneBookkeeping) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_CloneObjectLinks
               (WorldNetwork *this,CloneBookkeeping *cloneBookkeeping,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((cloneBookkeeping == (CloneBookkeeping *)0x0) ||
     (pLStack_1 = (cloneBookkeeping->fields).objectLinkIds,
     pLStack_1 == (List_1_System_Int32_ *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  ppLStack_8 = (List_1_System_Int32_ **)((ulonglong)(uint)(pLStack_1->fields)._version << 0x20);
  uStack_9 = 0;
  uStack_10 = (longlong)ppLStack_8;
  uStack_11 = 0;
  uStack_4 = 0;
  ppLStack_8 = &pLStack_1;
code_?:
  if (pLStack_1 != (List_1_System_Int32_ *)0x0) {
    if (uStack_10._4_4_ == (pLStack_1->fields)._version) {
      if ((uint)(pLStack_1->fields)._size <= (uint)uStack_10) goto code_?;
      pIVar12 = (pLStack_1->fields)._items;
      if (pIVar12 != (Int32__Array *)0x0) {
        if ((uint)pIVar12->max_length <= (uint)uStack_10) {
          FUN_?();
          goto code_?;
        }
        objectLinkID = pIVar12->vector[(int)(uint)uStack_10];
        uStack_11 = CONCAT44(uStack_11._4_4_,objectLinkID);
        uStack_10 = CONCAT44(uStack_10._4_4_,(uint)uStack_10 + 1);
        pDVar13 = (Dictionary_2_System_Int32_System_Single_ *)
                 (cloneBookkeeping->fields).worldObjectIdsMaps;
        pOVar14 = (this->fields).objectLinks;
        if (pOVar14 != (ObjectLinks *)0x0) {
          pOVar15 = ObjectLinks::ObjectLinks_GetObjectLink(pOVar14,objectLinkID,(MethodInfo *)0x0);
          if (pOVar15 != (ObjectLink *)0x0) {
            if (pDVar13 != (Dictionary_2_System_Int32_System_Single_ *)0x0)
            goto code_?;
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
code_?:
    if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__->klass->
         field_0x135 & 1) == 0) {
      FUN_?();
    }
    if (pLStack_1 != (List_1_System_Int32_ *)0x0) {
      if (uStack_10._4_4_ == (pLStack_1->fields)._version) {
        return;
      }
      goto code_?;
    }
    goto code_?;
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
code_?:
  iVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
           Dictionary_2_System_Int32_System_Single__FindEntry
                     (pDVar13,(pOVar15->fields).objectConnectorWOID,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                      ->klass->rgctx_data[0x21].method);
  if (-1 < iVar16) {
    pDVar13 = (Dictionary_2_System_Int32_System_Single_ *)
             (cloneBookkeeping->fields).worldObjectIdsMaps;
    pOVar14 = (this->fields).objectLinks;
    if (pOVar14 != (ObjectLinks *)0x0) {
      pOVar15 = ObjectLinks::ObjectLinks_GetObjectLink(pOVar14,objectLinkID,(MethodInfo *)0x0);
      if (pOVar15 != (ObjectLink *)0x0) {
        if (pDVar13 != (Dictionary_2_System_Int32_System_Single_ *)0x0) {
          iVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Single]::Dictionary_2_System_Int32_System_Single__FindEntry
                             (pDVar13,(pOVar15->fields).objectWOID,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_int>__ContainsKey_int_
                              ->klass->rgctx_data[0x21].method);
          if (iVar16 < 0) goto code_?;
          pDVar17 = (cloneBookkeeping->fields).worldObjectIdsMaps;
          pOVar14 = (this->fields).objectLinks;
          if (pOVar14 != (ObjectLinks *)0x0) {
            pOVar15 = ObjectLinks::ObjectLinks_GetObjectLink(pOVar14,objectLinkID,(MethodInfo *)0x0);
            if (pOVar15 != (ObjectLink *)0x0) {
              if (pDVar17 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
                iVar16 = FUN_?(pDVar17,(pOVar15->fields).objectWOID);
                pDVar17 = (cloneBookkeeping->fields).worldObjectIdsMaps;
                pOVar14 = (this->fields).objectLinks;
                if (pOVar14 != (ObjectLinks *)0x0) {
                  pOVar15 = ObjectLinks::ObjectLinks_GetObjectLink
                                      (pOVar14,objectLinkID,(MethodInfo *)0x0);
                  if (pOVar15 != (ObjectLink *)0x0) {
                    if (pDVar17 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
                      iVar18 = FUN_?(pDVar17,(pOVar15->fields).objectConnectorWOID);
                      iVar19 = (cloneBookkeeping->fields).cloneObjectLinkIdIncrement;
                      pOVar14 = (this->fields).objectLinks;
                      if (pOVar14 != (ObjectLinks *)0x0) {
                        pOVar15 = ObjectLinks::ObjectLinks_GetObjectLink
                                            (pOVar14,objectLinkID,(MethodInfo *)0x0);
                        if (pOVar15 != (ObjectLink *)0x0) {
                          bVar20 = (pOVar15->fields).isSet;
                          pOVar15 = (ObjectLink *)
                                    FUN_?(TypeInfo__MV__WorldObject__ObjectLink);
                          (pOVar15->fields).id = iVar19;
                          (pOVar15->fields).objectConnectorWOID = iVar18;
                          (pOVar15->fields).objectWOID = iVar16;
                          (pOVar15->fields).isSet = bVar20;
                          WorldNetwork_AddObjectLink_1(this,pOVar15,(MethodInfo *)0x0);
                          piVar21 = &(cloneBookkeeping->fields).cloneObjectLinkIdIncrement;
                          *piVar21 = *piVar21 + 1;
                          goto code_?;
                        }
code_?:
                        FUN_?();
                      }
                      FUN_?();
                    }
                    FUN_?();
                  }
                  FUN_?();
                }
                FUN_?();
              }
              FUN_?();
            }
            FUN_?();
          }
          FUN_?();
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
    goto code_?;
  }
  goto code_?;
}


/* Void ConstructRuntimeEventManager() */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_ConstructRuntimeEventManager
               (WorldNetwork *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RuntimeEventManagerNetwork);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    cubeModelPrototypeTerrain =
         (MVCubeModelPrototypeTerrain *)
         MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                   (pMVar1,
                    MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                   );
    pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      cubeModelFineGrainedTerrain =
           (MVCubeModelFineGrainedTerrain *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                     (pMVar1,
                      MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                     );
      this_00 = (RuntimeEventManagerNetwork *)FUN_?(TypeInfo__RuntimeEventManagerNetwork);
      RuntimeEventManagerNetwork::RuntimeEventManagerNetwork__ctor
                (this_00,cubeModelPrototypeTerrain,cubeModelFineGrainedTerrain,(MethodInfo *)0x0);
      bVar2 = iRam_? != 0;
      (this->fields)._.runtimeEventManagerNetwork = this_00;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields)._.runtimeEventManagerNetwork >> 0xc);
        puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar5 = *puVar4;
          LOCK();
          uVar6 = *puVar4;
          if (uVar5 == uVar6) {
            *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (uVar5 != uVar6);
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void CreateGameWorldFromQueryData(BytePacker, Int32) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_CreateGameWorldFromQueryData
               (WorldNetwork *this,BytePacker *queryData,int32_t instigatorActorNumber,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WorldNetwork____c__DisplayClass8_0___CreateGameWorldFromQueryData_b__0_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldNetwork____c__DisplayClass8_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?();
  if (lVar1 != 0) {
    *(WorldNetwork **)(lVar1 + 0x10) = this;
    if (iRam_? != 0) {
      uVar2 = (uint)(lVar1 + 0x10U >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    iVar7 = iRam_?;
    *(BytePacker **)(lVar1 + 0x18) = queryData;
    if (iVar7 != 0) {
      uVar2 = (uint)(lVar1 + 0x18U >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    *(int32_t *)(lVar1 + 0x20) = instigatorActorNumber;
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar8 != (MainCameraManager *)0x0) {
      camera = (pMVar8->fields).mainCamera;
      if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__CullingApiWrapper);
      }
      CullingApiWrapper::CullingApiWrapper_Init
                (10000,camera,TypeInfo__CullingApiWrapper->static_fields->baseDistance,
                 (MethodInfo *)0x0);
      bp = *(BytePacker **)(lVar1 + 0x18);
      this_00 = (UnityAction_2_System_Object_System_ByteEnum_ *)
                FUN_?(
                             TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
      ByteEnum]::UnityAction_2_System_Object_System_ByteEnum___ctor
                (this_00,(Object *)this,
                 MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                 ,(MethodInfo *)0x0);
      doneCallback = (UnityAction_1_System_Int32_ *)
                     FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      FUN_?(doneCallback,lVar1,
                    MethodInfo__WorldNetwork____c__DisplayClass8_0___CreateGameWorldFromQueryData_b__0_int_
                   );
      if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaDataAsync
                (bp,(UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                     *)this_00,1,doneCallback,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void CreateQueryEvent(MVWorldObjectClient, Int32) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_CreateQueryEvent
               (WorldNetwork *this,MVWorldObjectClient *root,int32_t instigatorActorNumber,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__InitializedGameQueryDataEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.InitializedGameQueryData !=
      (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
    lVar1 = FUN_?(TypeInfo__InitializedGameQueryDataEventArgs);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar2 = iRam_? != 0;
    *(MVWorldObjectClient **)(lVar1 + 0x10) = root;
    if (bVar2) {
      uVar3 = (uint)(lVar1 + 0x10U >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    *(int32_t *)(lVar1 + 0x18) = instigatorActorNumber;
    pEVar7 = (this->fields)._.InitializedGameQueryData;
    if (pEVar7 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (*(pEVar7->fields)._._.invoke_impl)
              ((pEVar7->fields)._._.method_code,this,lVar1,(pEVar7->fields)._._.method);
  }
  return;
}


/* Void DeserializeRuntimeEvents(BytePacker) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_DeserializeRuntimeEvents
               (WorldNetwork *this,BytePacker *queryData,MethodInfo *method)

{
  this_00 = (this->fields)._.runtimeEventManagerNetwork;
  if ((this_00 != (RuntimeEventManagerNetwork *)0x0) && (queryData != (BytePacker *)0x0)) {
    uVar1 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                      (queryData,(MethodInfo *)0x0);
    if (0 < (int)uVar1) {
      uVar2 = (ulonglong)uVar1;
      do {
        runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                       RuntimeEvent_Create(queryData,(MethodInfo *)0x0);
        RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                  (this_00,runtimeEvent,(MethodInfo *)0x0);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    (this_00->fields)._.doEffects = 1;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleDeserializedWorldData(Dictionary`2[System.Object,System.Object], KogamaDataType) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_HandleDeserializedWorldData
               (WorldNetwork *this,Dictionary_2_System_Object_System_Object_ *data,
               KogamaDataType__Enum dataType,MethodInfo *method)

{
  if ((char)dataType == '\0') {
    pMVar1 = (this->fields)._.worldInventory;
    if (pMVar1 != (MVWorldInventory *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Byte,data,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__WorldObject__PrototypeDataParameters);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__RuntimePrototypeCubeModel);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__MV__WorldObject__PrototypeDataParameters;
      pOVar3 = (Object *)((ulonglong)in_stack_4 & 0xffffffffffffff00);
      iVar5._0_2_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.attrs;
      iVar5._2_1_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.type;
      iVar5._3_1_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.field_0xb;
      if (iVar5 < 0) {
        if (((TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).generic_class ==
             (Il2CppGenericClass *)0x0) ||
           (((TypeInfo__MV__WorldObject__PrototypeDataParameters->_1).field_0x6d & 8) == 0)) {
          pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters);
          FUN_?(pOVar3 + 1,&stack0x00000010,
                        (longlong)(int)(pPVar2->_1).instance_size + -0x10);
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)(pOVar3 + 1) >> 0xc);
            uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
            do {
              uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
              puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
        }
        else {
          pOVar3 = (Object *)0x0;
        }
      }
      if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (data,pOVar3,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), pOVar3 != (Object *)0x0)) {
        if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar3,lRam_?);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar12 = *(int32_t *)&pOVar3[1].klass;
        pOVar3 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&stack0x00000010)
        ;
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (data,pOVar3,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pOVar3 != (Object *)0x0) {
          if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
          {
            FUN_?(pOVar3,lRam_?);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          scale = *(float *)&pOVar3[1].klass;
          pOVar3 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,
                                  &stack0x00000010);
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (data,pOVar3,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          if (pOVar3 != (Object *)0x0) {
            if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)
               ) {
              FUN_?(pOVar3,lRam_?);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            authorProfileId = *(int32_t *)&pOVar3[1].klass;
            pOVar3 = (Object *)
                      FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,
                                    &stack0x00000010);
            pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (data,pOVar3,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            pBVar13 = TypeInfo__System__Byte;
            if (pOVar3 == (Object *)0x0) {
              data_00 = (Byte__Array *)0x0;
            }
            else {
              data_00 = (Byte__Array *)FUN_?(pOVar3,TypeInfo__System__Byte);
              if (data_00 == (Byte__Array *)0x0) {
                FUN_?(pOVar3,pBVar13);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            this_06 = (RuntimePrototypeCubeModel *)
                      FUN_?(TypeInfo__RuntimePrototypeCubeModel);
            RuntimePrototypeCubeModel::RuntimePrototypeCubeModel__ctor_1
                      (this_06,iVar12,authorProfileId,scale,data_00,(MethodInfo *)0x0);
            this_00 = (pMVar1->fields).runtimePrototypes;
            if (this_00 != (Dictionary_2_System_Int32_RuntimePrototypeCubeModel_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryInsert
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar12,
                         (Object *)this_06,
                         (InsertionBehavior__Enum)
                         CONCAT71((int7)((ulonglong)
                                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                                         ->klass >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<int,_RuntimePrototypeCubeModel>__Add_int__RuntimePrototypeCubeModel_
                         ->klass->rgctx_data[0x22].method);
              pMVar14 = (pMVar1->fields).OnWorldInventoryChange;
              if (pMVar14 != (MVWorldInventory_OnWorldInventoryChangeDelegate *)0x0) {
                (*(pMVar14->fields)._._.invoke_impl)
                          ((pMVar14->fields)._._.method_code,pMVar1,(pMVar14->fields)._._.method);
              }
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  else {
    KVar15 = dataType & 0xff;
    if (KVar15 != KogamaDataType__Enum_WorldObjects) {
      if (KVar15 != KogamaDataType__Enum_Links) {
        if (KVar15 == KogamaDataType__Enum_ObjectLinks) {
          WorldNetwork_AddObjectLink(this,data,(MethodInfo *)0x0);
        }
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      ,data,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__WorldObject__LinkDataParameter);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__WorldObject__Link);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar3 = (Object *)FUN_?(TypeInfo__MV__WorldObject__Link);
      pOVar16 = (Object *)((ulonglong)in_stack_4 & 0xffffffffffffff00);
      pOVar3[1].klass = (Object__Class *)0xffffffffffffffff;
      *(undefined4 *)&pOVar3[1].monitor = 0xffffffff;
      pLVar17 = TypeInfo__MV__WorldObject__LinkDataParameter;
      iVar18._0_2_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.attrs;
      iVar18._2_1_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.type;
      iVar18._3_1_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.field_0xb;
      if (iVar18 < 0) {
        if (((TypeInfo__MV__WorldObject__LinkDataParameter->_0).generic_class ==
             (Il2CppGenericClass *)0x0) ||
           (((TypeInfo__MV__WorldObject__LinkDataParameter->_1).field_0x6d & 8) == 0)) {
          pOVar16 = (Object *)FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter);
          FUN_?(pOVar16 + 1,&stack0x00000010,
                        (longlong)(int)(pLVar17->_1).instance_size + -0x10);
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)(pOVar16 + 1) >> 0xc);
            puVar9 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar8 = *puVar9;
              LOCK();
              uVar7 = *puVar9;
              if (uVar8 == uVar7) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (uVar8 != uVar7);
          }
        }
        else {
          pOVar16 = (Object *)0x0;
        }
      }
      if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
         (pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (data,pOVar16,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              ), pOVar16 != (Object *)0x0)) {
        if ((pOVar16->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar16,lRam_?);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(undefined4 *)&pOVar3[1].klass = *(undefined4 *)&pOVar16[1].klass;
        pOVar16 = (Object *)
                  FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter,&stack0x00000010);
        pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (data,pOVar16,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pOVar16 != (Object *)0x0) {
          if ((pOVar16->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
          {
            FUN_?(pOVar16,lRam_?);
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          *(undefined4 *)((longlong)&pOVar3[1].klass + 4) = *(undefined4 *)&pOVar16[1].klass;
          pOVar16 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter,&stack0x00000010);
          pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (data,pOVar16,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
          if (pOVar16 != (Object *)0x0) {
            if ((pOVar16->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)
               ) {
              FUN_?(pOVar16,lRam_?);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            *(undefined4 *)&pOVar3[1].monitor = *(undefined4 *)&pOVar16[1].klass;
            pMVar19 = (this->fields)._.worldObjectClientManager;
            iVar12 = *(int32_t *)((longlong)&pOVar3[1].klass + 4);
            if (pMVar19 != (MVWorldObjectClientManagerNetwork *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pDVar20 = (pMVar19->fields)._.worldObjects;
              if (pDVar20 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryGetValue
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar20,iVar12,
                         (Object **)&stack0x00000010,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                        );
              pMVar19 = (this->fields)._.worldObjectClientManager;
              iVar12 = *(int32_t *)&pOVar3[1].monitor;
              if (pMVar19 != (MVWorldObjectClientManagerNetwork *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pDVar20 = (pMVar19->fields)._.worldObjects;
                if (pDVar20 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
                  FUN_?();
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pMVar21 = 
                MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                ;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__TryGetValue
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar20,iVar12,
                           (Object **)&stack0x00000020,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                          );
                pLVar22 = (this->fields).links;
                if (pLVar22 != (Links *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Add_int__MV__WorldObject__Link_
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__Add_int__LinkObjectScript_
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  LinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<LinkObjectScript>_LinkObjectScript_
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&TypeInfo__UnityEngine__Object);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  this_05 = (pLVar22->fields).links;
                  if (this_05 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                              ((Dictionary_2_System_Int32_System_Object_ *)this_05,
                               *(int32_t *)&pOVar3[1].klass,pOVar3,
                               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar21 >> 8),2),
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Add_int__MV__WorldObject__Link_
                               ->klass->rgctx_data[0x22].method);
                  }
                }
              }
            }
          }
        }
      }
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pMVar19 = (this->fields)._.worldObjectClientManager;
    if ((pMVar19 != (MVWorldObjectClientManagerNetwork *)0x0) &&
       (pMVar1 = (this->fields)._.worldInventory, pMVar1 != (MVWorldInventory *)0x0)) {
      uVar23 = 0;
      this_07 = KoGaMaPackageClient::KoGaMaPackageClient_WorldObjectFactory
                          (data,(pMVar19->fields)._.worldObjects,(pMVar1->fields).runtimePrototypes,
                           (MethodInfo *)0x0);
      if (this_07 != (MVWorldObjectClient *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar24 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar24 == (MVGameControllerBase *)0x0) ||
            (pMVar25 = (pMVar24->fields).game, pMVar25 == (MVNetworkGame *)0x0)) ||
           (this_04 = (pMVar25->fields).transformNetworkManager,
           this_04 == (TransformNetworkManager *)0x0)) goto code_?;
        pMVar26 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                            (this_04,(this_07->fields)._.id,(MethodInfo *)0x0);
        if (pMVar26 == (MVNetworkObject *)0x0) {
          MVWorldObjectClient::MVWorldObjectClient_SetNetworkObject(this_07,0,(MethodInfo *)0x0);
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,this_07,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MVGroup);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__WorldObjectCreatedEventArgs);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Key_already_in_WorldObjects_dict);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this_07 != (MVWorldObjectClient *)0x0) &&
         (this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                    (pMVar19->fields)._.worldObjects,
         this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
        iVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                           (this_01,(this_07->fields)._.id,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                            ->klass->rgctx_data[0x21].method);
        if (-1 < iVar12) {
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Key_already_in_WorldObjects_dict,(MethodInfo *)0x0);
          return;
        }
        pDVar20 = (pMVar19->fields)._.worldObjects;
        if (pDVar20 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryInsert
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar20,(this_07->fields)._.id,
                     (Object *)this_07,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar23 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                     ->klass->rgctx_data[0x22].method);
          this_02 = (pMVar19->fields)._.worldObjectMapping;
          if (this_02 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
            MVWorldObjectClientManager+WorldObjectMapping::
            MVWorldObjectClientManager_WorldObjectMapping_AddWorldObjectToTypeSet
                      (this_02,this_07,(MethodInfo *)0x0);
            pOVar3 = (Object *)FUN_?(&(this_07->klass->_0).byval_arg);
            this_03 = (pMVar19->fields)._.woCreatedEventSubscribers;
            if (this_03 !=
                (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)0x0)
            {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                        ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar3,
                         (Object **)&stack0x00000008,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                        );
              if ((this_07->fields)._.groupId != -1) {
                return;
              }
              bVar27 = (TypeInfo__MVGroup->_1).naturalAligment;
              if ((bVar27 <= (this_07->klass->_1).naturalAligment) &&
                 ((MVGroup__Class *)(this_07->klass->_1).typeHierarchy[(ulonglong)bVar27 - 1] ==
                  TypeInfo__MVGroup)) {
                (pMVar19->fields)._.rootGroupId = (this_07->fields)._.id;
                return;
              }
              FUN_?(this_07);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
        }
      }
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* MVWorldObjectClient InitializeQueryData(BytePacker) */

MVWorldObjectClient *
Assembly-CSharp.dll::WorldNetwork::WorldNetwork_InitializeQueryData
          (WorldNetwork *this,BytePacker *queryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__KoGaMaDataHandler);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (UnityAction_2_System_Object_System_ByteEnum_ *)
            FUN_?(
                         TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::Dictionary<System::Object,_System::Object>,_MV::WorldObject::KogamaDataType>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::ByteEnum]::
  UnityAction_2_System_Object_System_ByteEnum___ctor
            (this_01,(Object *)this,
             MethodInfo__WorldNetwork__HandleDeserializedWorldData_System__Collections__Generic__Dictionary<System::Object,_System::Object>__MV__WorldObject__KogamaDataType_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__KoGaMaDataHandler->_1).field_0x1c == 0) {
    FUN_?();
  }
  id = KoGaMaDataHandler::KoGaMaDataHandler_GetKoGaMaData
                 (queryData,
                  (UnityAction_2_System_Collections_Generic_Dictionary_2_System_Object_System_Object_MV_WorldObject_KogamaDataType_
                   *)this_01,1,(MethodInfo *)0x0);
  this_00 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,id,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      (*(pMVar1->klass->vtable).Initialize.methodPtr)
                (pMVar1,(pMVar1->klass->vtable).Initialize.method);
    }
    return pMVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar2)();
  return pMVar1;
}


/* Boolean LinksContains(Int32) */

bool Assembly-CSharp.dll::WorldNetwork::WorldNetwork_LinksContains
               (WorldNetwork *this,int32_t linkID,MethodInfo *method)

{
  pLVar1 = (this->fields).links;
  if (pLVar1 == (Links *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__ContainsKey_int_
                  ,CONCAT44(in_register_00000014,linkID),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pLVar1->fields).links;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,linkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar4 >> 0x1f) ^ 1;
  }
  FUN_?();
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
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                  ,CONCAT44(in_register_00000014,linkID),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pOVar1->fields).objectLinks;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,linkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar4 >> 0x1f) ^ 1;
  }
  FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CloneBookkeeping);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (CloneBookkeeping *)FUN_?(TypeInfo__CloneBookkeeping);
  CloneBookkeeping::CloneBookkeeping__ctor(this_00,(MethodInfo *)0x0);
  pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar1,originalId,(MethodInfo *)0x0);
    if (this_00 != (CloneBookkeeping *)0x0) {
      (this_00->fields).cloneIdIncrement = cloneId;
      (this_00->fields).cloneLinkIdIncrement = cloneLinkId;
      (this_00->fields).cloneObjectLinkIdIncrement = cloneObjectLinkId;
      pMVar3 = (this->fields)._.worldObjectClientManager;
      if (((pMVar3 != (MVWorldObjectClientManagerNetwork *)0x0) &&
          (pMVar2 != (MVWorldObjectClient *)0x0)) &&
         (pMVar4 = (this->fields)._.worldInventory, pMVar4 != (MVWorldInventory *)0x0)) {
        pMVar2 = (MVWorldObjectClient *)
                 (*(pMVar2->klass->vtable).Clone.methodPtr)
                           (pMVar2,(ulonglong)(uint)ownerActorNumber,
                            (ulonglong)(uint)(pMVar2->fields)._.groupId,this_00,
                            (pMVar3->fields)._.worldObjects,(pMVar4->fields).runtimePrototypes,
                            (pMVar2->klass->vtable).Clone.method);
        if (previewProfileOwnerId != 0) {
          if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
          (pMVar2->fields)._.previewOwnerProfileId = previewProfileOwnerId;
        }
        if (cloneToRootGroup == 0) {
          WorldNetwork_CloneLinks(this,this_00,(MethodInfo *)0x0);
          WorldNetwork_CloneObjectLinks(this,this_00,(MethodInfo *)0x0);
          if (pMVar2 != (MVWorldObjectClient *)0x0) {
code_?:
            (*(pMVar2->klass->vtable).Initialize.methodPtr)
                      (pMVar2,(pMVar2->klass->vtable).Initialize.method);
            return pMVar2;
          }
        }
        else {
          pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
          if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
            pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                               (pMVar1,(MethodInfo *)0x0);
            if ((pMVar2 != (MVWorldObjectClient *)0x0) && (pMVar5 != (MVGroup *)0x0)) {
              (*(pMVar5->klass->vtable).TransferChild.methodPtr)
                        (pMVar5,(ulonglong)(uint)(pMVar2->fields)._.id);
              WorldNetwork_CloneLinks(this,this_00,(MethodInfo *)0x0);
              WorldNetwork_CloneObjectLinks(this,this_00,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
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
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar1,rootId,(MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClient *)0x0) {
      (*(pMVar2->klass->vtable).Initialize.methodPtr)
                (pMVar2,(pMVar2->klass->vtable).Initialize.method);
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__RuntimeEventManagerNetwork);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      cubeModelPrototypeTerrain =
           (MVCubeModelPrototypeTerrain *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                     (pMVar1,
                      MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                     );
      pMVar1 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
      if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
        cubeModelFineGrainedTerrain =
             (MVCubeModelFineGrainedTerrain *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                       (pMVar1,
                        MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                       );
        pRVar3 = (RuntimeEventManagerNetwork *)FUN_?(TypeInfo__RuntimeEventManagerNetwork);
        RuntimeEventManagerNetwork::RuntimeEventManagerNetwork__ctor
                  (pRVar3,cubeModelPrototypeTerrain,cubeModelFineGrainedTerrain,(MethodInfo *)0x0);
        bVar4 = iRam_? != 0;
        (this->fields)._.runtimeEventManagerNetwork = pRVar3;
        if (bVar4) {
          uVar5 = (uint)((ulonglong)&(this->fields)._.runtimeEventManagerNetwork >> 0xc);
          puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar6;
            LOCK();
            uVar8 = *puVar6;
            if (uVar7 == uVar8) {
              *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar8);
        }
        pRVar3 = (this->fields)._.runtimeEventManagerNetwork;
        if ((pRVar3 != (RuntimeEventManagerNetwork *)0x0) && (queryData != (BytePacker *)0x0)) {
          uVar5 = MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker_ReadInt32
                            (queryData,(MethodInfo *)0x0);
          if (0 < (int)uVar5) {
            uVar8 = (ulonglong)uVar5;
            do {
              runtimeEvent = MVWorldObject.dll::MV::WorldObject::RuntimeEvents::RuntimeEvent::
                             RuntimeEvent_Create(queryData,(MethodInfo *)0x0);
              RuntimeEventManagerNetwork::RuntimeEventManagerNetwork_HandleRuntimeEvent
                        (pRVar3,runtimeEvent,(MethodInfo *)0x0);
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          (pRVar3->fields)._.doEffects = 1;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__InitializedGameQueryDataEventArgs,pMVar2,instigatorActorNumber,
                          0,unaff_RDI);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((this->fields)._.InitializedGameQueryData !=
              (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
            lVar9 = FUN_?(TypeInfo__InitializedGameQueryDataEventArgs);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__EventArgs);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
              FUN_?();
            }
            bVar4 = iRam_? != 0;
            *(MVWorldObjectClient **)(lVar9 + 0x10) = pMVar2;
            if (bVar4) {
              uVar5 = (uint)(lVar9 + 0x10U >> 0xc);
              puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar7 = *puVar6;
                LOCK();
                uVar8 = *puVar6;
                if (uVar7 == uVar8) {
                  *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
                }
                UNLOCK();
              } while (uVar7 != uVar8);
            }
            *(int32_t *)(lVar9 + 0x18) = instigatorActorNumber;
            pEVar10 = (this->fields)._.InitializedGameQueryData;
            if (pEVar10 == (EventHandler_1_InitializedGameQueryDataEventArgs_ *)0x0) {
              FUN_?();
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            (*(pEVar10->fields)._._.invoke_impl)
                      ((pEVar10->fields)._._.method_code,this,lVar9,(pEVar10->fields)._._.method);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Link RemoveLink(Int32) */

Link * Assembly-CSharp.dll::WorldNetwork::WorldNetwork_RemoveLink
                 (WorldNetwork *this,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RemoveLink_event__but_link_not_r);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).links;
  if (pLVar1 != (Links *)0x0) {
    bVar2 = Links::Links_Contains(pLVar1,linkID,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_RemoveLink_event__but_link_not_r,(MethodInfo *)0x0);
      return (Link *)0x0;
    }
    pLVar1 = (this->fields).links;
    if (((pLVar1 != (Links *)0x0) &&
        (pLVar3 = Links::Links_GetLink(pLVar1,linkID,(MethodInfo *)0x0), pLVar3 != (Link *)0x0)) &&
       (pMVar4 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager,
       pMVar4 != (MVWorldObjectClientManager *)0x0)) {
      outputWo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (pMVar4,(pLVar3->fields).outputWOID,(MethodInfo *)0x0);
      pMVar4 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
      if (pMVar4 != (MVWorldObjectClientManager *)0x0) {
        inputWo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar4,(pLVar3->fields).inputWOID,(MethodInfo *)0x0);
        pLVar1 = (this->fields).links;
        if (pLVar1 != (Links *)0x0) {
          Links::Links_RemoveLink(pLVar1,linkID,outputWo,inputWo,(MethodInfo *)0x0);
          return pLVar3;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pLVar3 = (Link *)(*pcVar5)();
  return pLVar3;
}


/* Void RemoveObjectLink(Int32) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_RemoveObjectLink
               (WorldNetwork *this,int32_t objectLinkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RemoveLink_event__but_link_not_r);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields).objectLinks;
  if (pOVar1 != (ObjectLinks *)0x0) {
    bVar2 = ObjectLinks::ObjectLinks_Contains(pOVar1,objectLinkID,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar3 = StringLiteral_RemoveLink_event__but_link_not_r;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__ILogger);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Debug);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar4 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,0,pSVar3);
        return;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pOVar1 = (this->fields).objectLinks;
    if (pOVar1 != (ObjectLinks *)0x0) {
      link = ObjectLinks::ObjectLinks_GetObjectLink(pOVar1,objectLinkID,(MethodInfo *)0x0);
      if ((link != (ObjectLink *)0x0) &&
         (pMVar6 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager,
         pMVar6 != (MVWorldObjectClientManager *)0x0)) {
        objectConnectorWo =
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar6,(link->fields).objectConnectorWOID,(MethodInfo *)0x0);
        pMVar6 = (MVWorldObjectClientManager *)(this->fields)._.worldObjectClientManager;
        if (pMVar6 != (MVWorldObjectClientManager *)0x0) {
          objectWo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                               (pMVar6,(link->fields).objectWOID,(MethodInfo *)0x0);
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
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork_Update
               (WorldNetwork *this,MVNetworkGame *game,MethodInfo *method)

{
  this_02 = (this->fields).links;
  if (this_02 != (Links *)0x0) {
    Links::Links_Update(this_02,(MethodInfo *)0x0);
    pOVar1 = (this->fields).objectLinks;
    if (pOVar1 != (ObjectLinks *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__get_Item_int_
                      ,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Values__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::ObjectLink>__Dispose__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::ObjectLink>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::ObjectLink>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MV::WorldObject::ObjectLink>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar2 != (GameSessionData *)0x0) {
        if ((pGVar2->fields).gameMode != 0) {
          return;
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar3 != (MainCameraManager *)0x0) {
          if ((pMVar3->fields).isLogicRendered == 0) {
            return;
          }
          this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)(pOVar1->fields).objectLinks;
          if ((this_00 !=
               (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0) &&
             (pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                        UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                        Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                  (this_00,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__get_Values__
                                  ),
             pDVar4 !=
             (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)0x0)) {
            uStack_5 = (pDVar4->fields)._dictionary;
            puStack_6 = (undefined4 *)0x0;
            puStack_7 = (undefined *)0x0;
            if (iRam_? != 0) {
              uVar8 = (uint)((ulonglong)&uStack_5 >> 0xc);
              puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar10 = *puVar9;
                LOCK();
                uVar11 = *puVar9;
                if (uVar10 == uVar11) {
                  *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
                }
                UNLOCK();
              } while (uVar10 != uVar11);
            }
            if (uStack_5 ==
                (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0) {
              FUN_?();
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            iStack_13 = (uStack_5->fields)._version;
            puStack_7 = (undefined *)0x0;
            uStack_5._4_4_ = (undefined4)((ulonglong)uStack_5 >> 0x20);
            uStack_14 = (undefined4)uStack_5;
            uStack_15 = uStack_5._4_4_;
            uStack_16 = 0;
            apOStack_17[0] = (ObjectLink *)0x0;
            uStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         *)0x0;
            puStack_6 = &uStack_14;
            do {
              lVar18 = CONCAT44(uStack_15,uStack_14);
              if (lVar18 == 0) {
code_?:
                FUN_?();
                FUN_?();
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if (iStack_13 != *(int *)(lVar18 + 0x2c)) {
code_?:
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                          ((MethodInfo *)0x0);
                goto code_?;
              }
              do {
                if (lVar18 == 0) goto code_?;
                if (*(uint *)(lVar18 + 0x20) <= uStack_16) {
                  return;
                }
                lVar19 = *(longlong *)(lVar18 + 0x18);
                lVar20 = (longlong)(int)uStack_16;
                uVar8 = uStack_16 + 1;
                if (lVar19 == 0) goto code_?;
                if (*(uint *)(lVar19 + 0x18) <= uStack_16) {
                  uStack_16 = uVar8;
                  FUN_?();
                  goto code_?;
                }
                uStack_16 = uVar8;
              } while (*(int *)(lVar19 + 0x20 + lVar20 * 0x18) < 0);
              apOStack_17[0] = *(ObjectLink **)(lVar19 + (lVar20 + 2) * 0x18);
              func_?(apOStack_17);
              link = apOStack_17[0];
              this_01 = (pOVar1->fields).objectLinkObjects;
              if (apOStack_17[0] == (ObjectLink *)0x0) {
code_?:
                FUN_?();
                uVar8 = uStack_16;
code_?:
                uStack_16 = uVar8;
                FUN_?();
code_?:
                FUN_?();
                goto code_?;
              }
              if (this_01 == (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)0x0) {
code_?:
                FUN_?();
                goto code_?;
              }
              this_03 = (ObjectLinkObjectScript *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                                   (apOStack_17[0]->fields).id,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__get_Item_int_
                                  );
              if (this_03 == (ObjectLinkObjectScript *)0x0) {
code_?:
                FUN_?();
                goto code_?;
              }
              ObjectLinkObjectScript::ObjectLinkObjectScript_UpdateLinkVisual
                        (this_03,link,(MethodInfo *)0x0);
            } while( true );
          }
        }
      }
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* WorldNetwork() */

void Assembly-CSharp.dll::WorldNetwork::WorldNetwork__ctor(WorldNetwork *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Links);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldInventory);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClientManagerNetwork);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ObjectLinks);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (MVWorldInventory *)FUN_?(TypeInfo__MVWorldInventory);
  MVWorldInventory::MVWorldInventory__ctor(this_00,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._.worldInventory = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.worldInventory >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pLVar6 = (Links *)FUN_?(TypeInfo__Links);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar7 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar7,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (pLVar6->fields).links = (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)pDVar7;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&pLVar6->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pDVar7 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar7,
             MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__Dictionary__
            );
  iVar8 = iRam_?;
  (pLVar6->fields).linkObjects = (Dictionary_2_System_Int32_LinkObjectScript_ *)pDVar7;
  if (iVar8 != 0) {
    uVar2 = (uint)((ulonglong)&(pLVar6->fields).linkObjects >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar1);
  }
  (this->fields).links = pLVar6;
  if (iVar8 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).links >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (MVWorldObjectClientManager *)FUN_?(TypeInfo__MVWorldObjectClientManagerNetwork)
  ;
  MVWorldObjectClientManager::MVWorldObjectClientManager__ctor(this_01,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._.worldObjectClientManager = (MVWorldObjectClientManagerNetwork *)this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pOVar9 = (ObjectLinks *)FUN_?(TypeInfo__ObjectLinks);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar7 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar7,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::ObjectLink>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (pOVar9->fields).objectLinks = (Dictionary_2_System_Int32_MV_WorldObject_ObjectLink_ *)pDVar7;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&pOVar9->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pDVar7 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar7,
             MethodInfo__System__Collections__Generic__Dictionary<int,_ObjectLinkObjectScript>__Dictionary__
            );
  iVar8 = iRam_?;
  (pOVar9->fields).objectLinkObjects = (Dictionary_2_System_Int32_ObjectLinkObjectScript_ *)pDVar7;
  if (iVar8 != 0) {
    uVar2 = (uint)((ulonglong)&(pOVar9->fields).objectLinkObjects >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar8 = iRam_?;
    } while (!bVar1);
  }
  (this->fields).objectLinks = pOVar9;
  if (iVar8 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).objectLinks >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

