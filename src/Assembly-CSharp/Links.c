
/* Void AddLink(Link, MVWorldObjectClient, MVWorldObjectClient) */

void Assembly-CSharp.dll::Links::Links_AddLink
               (Links *this,Link *link,MVWorldObjectClient *outputWo,MVWorldObjectClient *inputWo,
               MethodInfo *method)

{
  uVar1 = SUB84(inputWo,0);
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
  if ((link != (Link *)0x0) &&
     (this_00 = (this->fields).links,
     this_00 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0)) {
    behavior = CONCAT31((int3)((uint)uVar1 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,(link->fields).id,(Object *)link,
               behavior,MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Add_int__MV__WorldObject__Link_
                        ->klass->rgctx_data[0x22].method);
    if (outputWo != (MVWorldObjectClient *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar2 = (outputWo->fields)._.outputLinkRefs;
      if (pLVar2 != (List_1_MV_WorldObject_Link_ *)0x0) {
        FUN_?(pLVar2,link);
        (link->fields).outputWOID = (outputWo->fields)._.id;
        if ((outputWo->fields)._.OnOutputLinkChanged !=
            (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) {
          pAVar3 = (outputWo->fields)._.OnOutputLinkChanged;
          (*(pAVar3->fields)._._.invoke_impl)
                    ((pAVar3->fields)._._.method_code,(outputWo->fields)._.outputLinkRefs,
                     (pAVar3->fields)._._.method);
        }
        if (inputWo != (MVWorldObjectClient *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Add_MV__WorldObject__Link_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pLVar2 = (inputWo->fields)._.inputLinkRefs;
          if (pLVar2 != (List_1_MV_WorldObject_Link_ *)0x0) {
            FUN_?(pLVar2,link);
            (link->fields).inputWOID = (inputWo->fields)._.id;
            if ((inputWo->fields)._.OnInputLinkChanged !=
                (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) {
              pAVar3 = (inputWo->fields)._.OnInputLinkChanged;
              (*(pAVar3->fields)._._.invoke_impl)
                        ((pAVar3->fields)._._.method_code,(inputWo->fields)._.inputLinkRefs,
                         (pAVar3->fields)._._.method);
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField
            ;
            if (pGVar4 != (GameSessionData *)0x0) {
              if ((pGVar4->fields).gameMode != 0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pGVar4 = TypeInfo__MVGameControllerBase->static_fields->
                         _GameSessionData_k__BackingField;
                if (pGVar4 == (GameSessionData *)0x0) goto code_?;
                if ((pGVar4->fields).gameMode != 4) {
                  return;
                }
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__PrefabPool);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pPVar5 = TypeInfo__PrefabPool->static_fields->instance;
              if (pPVar5 != (PrefabPool *)0x0) {
                pLVar6 = (pPVar5->fields).linkObject;
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pLVar6 = (LinkObjectScript *)
                         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                   ((Object *)pLVar6,
                                    LinkObjectScript_MethodInfo__UnityEngine__Object__Instantiate<LinkObjectScript>_LinkObjectScript_
                                   );
                if (pLVar6 != (LinkObjectScript *)0x0) {
                  (pLVar6->fields)._.isObjectLink = 0;
                  (pLVar6->fields)._.linkID = (link->fields).id;
                  LinkObjectScript::LinkObjectScript_UpdateLinkVisual(pLVar6,link,(MethodInfo *)0x0)
                  ;
                  this_01 = (this->fields).linkObjects;
                  if (this_01 != (Dictionary_2_System_Int32_LinkObjectScript_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                              ((Dictionary_2_System_Int32_System_Object_ *)this_01,(link->fields).id
                               ,(Object *)pLVar6,CONCAT31((int3)(behavior >> 8),2),
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
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean Contains(Int32) */

bool Assembly-CSharp.dll::Links::Links_Contains(Links *this,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).links;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,linkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    return (byte)((uint)iVar1 >> 0x1f) ^ 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Link GetLink(Int32) */

Link * Assembly-CSharp.dll::Links::Links_GetLink(Links *this,int32_t linkID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Link_not_found);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).links;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (pDVar1,linkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Item_int_;
    if (iVar2 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Link_not_found,(MethodInfo *)0x0);
      return (Link *)0x0;
    }
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).links;
    if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (pDVar1,linkID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Item_int_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar4 < 0) {
        uVar5 = func_?(pMVar3->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar5);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        pLVar7 = (Link *)(*pcVar6)();
        return pLVar7;
      }
      pDVar8 = (pDVar1->fields)._entries;
      if (pDVar8 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0)
      {
        if (uVar4 < (uint)pDVar8->max_length) {
          return *(Link **)&pDVar8->vector[(int)uVar4].value.y;
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        pLVar7 = (Link *)(*pcVar6)();
        return pLVar7;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      pLVar7 = (Link *)(*pcVar6)();
      return pLVar7;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pLVar7 = (Link *)(*pcVar6)();
  return pLVar7;
}


/* Boolean RemoveLink(Int32, MVWorldObjectClient, MVWorldObjectClient) */

bool Assembly-CSharp.dll::Links::Links_RemoveLink
               (Links *this,int32_t linkID,MVWorldObjectClient *outputWo,
               MVWorldObjectClient *inputWo,MethodInfo *method)

{
  aIStackX_10[0].m_value = linkID;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempt_to_remove_link_with_id__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___but_link_not_registered_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).links;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,linkID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      pSVar2 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
      pSVar2 = mscorlib.dll::System::String::String_Concat_5
                         (StringLiteral_Attempt_to_remove_link_with_id__,pSVar2,
                          StringLiteral___but_link_not_registered_,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar2,(MethodInfo *)0x0);
      return 0;
    }
    pDVar3 = (this->fields).links;
    if ((((pDVar3 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0) &&
         (item = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,linkID,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Item_int_
                           ), item != (Object *)0x0)) &&
        (pDVar3 = (this->fields).links,
        pDVar3 != (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)0x0)) &&
       (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,*(int32_t *)&item[1].klass,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Remove_int_
                  ), outputWo != (MVWorldObjectClient *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Remove_MV__WorldObject__Link_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar4 = (outputWo->fields)._.outputLinkRefs;
      if (pLVar4 != (List_1_MV_WorldObject_Link_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Remove
                  ((List_1_System_Object_ *)pLVar4,item,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Remove_MV__WorldObject__Link_
                  );
        if ((outputWo->fields)._.OnOutputLinkChanged !=
            (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) {
          pAVar5 = (outputWo->fields)._.OnOutputLinkChanged;
          (*(pAVar5->fields)._._.invoke_impl)
                    ((pAVar5->fields)._._.method_code,(outputWo->fields)._.outputLinkRefs,
                     (pAVar5->fields)._._.method);
        }
        if (inputWo != (MVWorldObjectClient *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Remove_MV__WorldObject__Link_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pLVar4 = (inputWo->fields)._.inputLinkRefs;
          if (pLVar4 != (List_1_MV_WorldObject_Link_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Remove
                      ((List_1_System_Object_ *)pLVar4,item,
                       MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__Remove_MV__WorldObject__Link_
                      );
            pAVar5 = (inputWo->fields)._.OnInputLinkChanged;
            if (pAVar5 != (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) {
              (*(pAVar5->fields)._._.invoke_impl)
                        ((pAVar5->fields)._._.method_code,(inputWo->fields)._.inputLinkRefs,
                         (pAVar5->fields)._._.method);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pGVar6 = TypeInfo__MVGameControllerBase->static_fields->
                       _GameSessionData_k__BackingField;
              if (pGVar6 != (GameSessionData *)0x0) {
                if ((pGVar6->fields).gameMode != 0) {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pGVar6 = TypeInfo__MVGameControllerBase->static_fields->
                           _GameSessionData_k__BackingField;
                  if (pGVar6 == (GameSessionData *)0x0) goto code_?;
                  if ((pGVar6->fields).gameMode != 4) {
                    return 1;
                  }
                }
                pDVar7 = (this->fields).linkObjects;
                if ((pDVar7 != (Dictionary_2_System_Int32_LinkObjectScript_ *)0x0) &&
                   (this_01 = (Component *)
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32,System::Object]::
                              Dictionary_2_System_Int32_System_Object__get_Item
                                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,
                                         *(int32_t *)&item[1].klass,
                                         MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__get_Item_int_
                                        ), this_01 != (Component *)0x0)) {
                  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_01,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Object);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                            ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
                  pDVar7 = (this->fields).linkObjects;
                  if (pDVar7 != (Dictionary_2_System_Int32_LinkObjectScript_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__Remove
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,
                               *(int32_t *)&item[1].klass,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__Remove_int_
                              );
                    return 1;
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
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void Update() */

void Assembly-CSharp.dll::Links::Links_Update(Links *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::Link>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::Link>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MV::WorldObject::Link>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MV::WorldObject::Link>__GetEnumerator__
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
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar1 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar1->fields).gameMode != 4) {
        return;
      }
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar2 != (MainCameraManager *)0x0) {
      if ((pMVar2->fields).isLogicRendered == 0) {
        return;
      }
      this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(this->fields).links;
      if ((this_00 !=
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0) && (pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                             UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                             Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                       (this_00,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__get_Values__
                                       ),
                   pDVar3 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                              *)0x0)) {
        uStack_4 = (pDVar3->fields)._dictionary;
        puStack_5 = (undefined4 *)0x0;
        uStack_6 = 0;
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&uStack_4 >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar8;
            LOCK();
            uVar10 = *puVar8;
            if (uVar9 == uVar10) {
              *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar10);
        }
        if (uStack_4 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iStack_12 = (uStack_4->fields)._version;
        uStack_6 = 0;
        uStack_4._4_4_ = (undefined4)((ulonglong)uStack_4 >> 0x20);
        uStack_13 = (undefined4)uStack_4;
        uStack_14 = uStack_4._4_4_;
        uStack_15 = 0;
        apLStack_16[0] = (Link *)0x0;
        uStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0;
        puStack_5 = &uStack_13;
        do {
          lVar17 = CONCAT44(uStack_14,uStack_13);
          if (lVar17 == 0) {
code_?:
            FUN_?();
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (iStack_12 != *(int *)(lVar17 + 0x2c)) {
code_?:
            mscorlib.dll::System::ThrowHelper::
            ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                      ((MethodInfo *)0x0);
            goto code_?;
          }
          do {
            if (lVar17 == 0) goto code_?;
            if (*(uint *)(lVar17 + 0x20) <= uStack_15) {
              return;
            }
            lVar18 = *(longlong *)(lVar17 + 0x18);
            lVar19 = (longlong)(int)uStack_15;
            uVar7 = uStack_15 + 1;
            if (lVar18 == 0) goto code_?;
            if (*(uint *)(lVar18 + 0x18) <= uStack_15) {
              uStack_15 = uVar7;
              FUN_?();
              goto code_?;
            }
            uStack_15 = uVar7;
          } while (*(int *)(lVar18 + 0x20 + lVar19 * 0x18) < 0);
          apLStack_16[0] = *(Link **)(lVar18 + (lVar19 + 2) * 0x18);
          func_?(apLStack_16);
          link = apLStack_16[0];
          this_01 = (this->fields).linkObjects;
          if (apLStack_16[0] == (Link *)0x0) {
code_?:
            FUN_?();
            uVar7 = uStack_15;
code_?:
            uStack_15 = uVar7;
            FUN_?();
code_?:
            FUN_?();
            goto code_?;
          }
          if (this_01 == (Dictionary_2_System_Int32_LinkObjectScript_ *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          this_02 = (LinkObjectScript *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                               (apLStack_16[0]->fields).id,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__get_Item_int_
                              );
          if (this_02 == (LinkObjectScript *)0x0) {
code_?:
            FUN_?();
            goto code_?;
          }
          LinkObjectScript::LinkObjectScript_UpdateLinkVisual(this_02,link,(MethodInfo *)0x0);
        } while( true );
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Links() */

void Assembly-CSharp.dll::Links::Links__ctor(Links *this,MethodInfo *method)

{
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
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::Link>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).links = (Dictionary_2_System_Int32_MV_WorldObject_Link_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_LinkObjectScript>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).linkObjects = (Dictionary_2_System_Int32_LinkObjectScript_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).linkObjects >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}

