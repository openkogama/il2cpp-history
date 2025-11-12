
/* Void AddReporter(Int32, MVNetworkReporter) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_AddReporter
               (TransformNetworkManager *this,int32_t woID,MVNetworkReporter *networkReporter,
               MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,CONCAT44(in_register_00000014,woID),networkReporter,
                  uVar1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Add_int__MVNetworkObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Trying_to_add_reporter_while_net);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).networkedObjects;
  if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) goto code_?;
  iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                    (this_00,woID,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                     ->klass->rgctx_data[0x21].method);
  if (-1 < iVar2) {
    pDVar3 = (this->fields).networkedObjects;
    if (pDVar3 == (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) goto code_?;
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,woID,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                       );
    str0 = StringLiteral_Trying_to_add_reporter_while_net;
    pSVar5 = (String *)0x0;
    if (pOVar4 != (Object *)0x0) {
      pSVar5 = (String *)
               (*(pOVar4->klass->vtable).ToString.methodPtr)
                         (pOVar4,(pOVar4->klass->vtable).ToString.method);
    }
    pSVar5 = mscorlib.dll::System::String::String_Concat_4(str0,pSVar5,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)pSVar5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar3 = (this->fields).networkedObjects;
    if (pDVar3 == (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,woID,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
              );
  }
  pDVar3 = (this->fields).networkedObjects;
  if (pDVar3 != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,woID,(Object *)networkReporter,
               CONCAT31((int3)((uint)uVar1 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Add_int__MVNetworkObject_
               ->klass->rgctx_data[0x22].method);
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AddTransformPackage(Int32, NetworkTransformPackage) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_AddTransformPackage
               (TransformNetworkManager *this,int32_t woID,NetworkTransformPackage *p,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Add_int__MVNetworkObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkListener);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__this_is_probably_due_to_ownersh);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempt_to_update_world_object__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    owner = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (this_01,woID,(MethodInfo *)0x0);
    if (owner == (MVWorldObjectClient *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Attempt_to_update_world_object__,(MethodInfo *)0x0);
      return;
    }
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).networkedObjects;
    if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_00,woID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (iVar1 < 0) {
        pDVar2 = (this->fields).networkedObjects;
        this_02 = (MVNetworkListener *)FUN_?(TypeInfo__MVNetworkListener);
        MVNetworkListener::MVNetworkListener__ctor(this_02,owner,(MethodInfo *)0x0);
        if (pDVar2 == (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,woID,(Object *)this_02,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Add_int__MVNetworkObject_
                   ->klass->rgctx_data[0x22].method);
      }
      pDVar2 = (this->fields).networkedObjects;
      if (pDVar2 != (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,woID,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__get_Item_int_
                           );
        if (pOVar3 == (Object *)0x0) {
          return;
        }
        pOVar4 = pOVar3->klass;
        bVar5 = (TypeInfo__MVNetworkListener->_1).naturalAligment;
        if (((pOVar4->_1).naturalAligment < bVar5) ||
           ((pOVar4->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
            (Il2CppClass *)TypeInfo__MVNetworkListener)) {
          plVar6 = (longlong *)FUN_?(&(pOVar4->_0).byval_arg);
          str0 = StringLiteral_worldObjectClientManager_WorldOb;
          pSVar7 = (String *)0x0;
          if (plVar6 != (longlong *)0x0) {
            pSVar7 = (String *)
                     (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          }
          pSVar7 = mscorlib.dll::System::String::String_Concat_5
                             (str0,pSVar7,StringLiteral__this_is_probably_due_to_ownersh,
                              (MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pSVar7,(MethodInfo *)0x0);
          return;
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Enqueue_NetworkTransformPackage_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pOVar3[2].klass != (Object__Class *)0x0) {
          mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
          Queue_1_System_Object__Enqueue
                    ((Queue_1_System_Object_ *)pOVar3[2].klass,(Object *)p,
                     MethodInfo__System__Collections__Generic__Queue<NetworkTransformPackage>__Enqueue_NetworkTransformPackage_
                    );
          *(undefined2 *)&pOVar3[3].monitor = 0;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MVNetworkObject GetNetworkObject(Int32) */

MVNetworkObject *
Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_GetNetworkObject
          (TransformNetworkManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVNetworkObject_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<int,_MVNetworkObject>_System__Collections__Generic__IReadOnlyDictionary<int,_MVNetworkObject>__int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MVNetworkObject_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<int,_MVNetworkObject>_System__Collections__Generic__IReadOnlyDictionary<int,_MVNetworkObject>__int_
  ;
  pDVar2 = (this->fields).networkedObjects;
  if ((
      MVNetworkObject_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<int,_MVNetworkObject>_System__Collections__Generic__IReadOnlyDictionary<int,_MVNetworkObject>__int_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 MVNetworkObject_MethodInfo__System__Collections__Generic__CollectionExtensions__GetValueOrDefault<int,_MVNetworkObject>_System__Collections__Generic__IReadOnlyDictionary<int,_MVNetworkObject>__int_
                 );
  }
  pMVar1 = (pMVar1->field7_0x38).rgctx_data[3].method;
  if ((pMVar1->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(pMVar1);
  }
  pMStackX_8 = (MVNetworkObject *)0x0;
  if (pDVar2 == (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
    uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
    this_00 = (ArgumentNullException *)func_?(uVar3);
    paramName = (String *)func_?(&StringLiteral_dictionary);
    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
              (this_00,paramName,(MethodInfo *)0x0);
    FUN_?(this_00,pMVar1);
    pcVar4 = (code *)swi(3);
    pMVar5 = (MVNetworkObject *)(*pcVar4)();
    return pMVar5;
  }
  pIVar6 = ((pMVar1->field7_0x38).rgctx_data)->rgctxDataDummy;
  if ((pIVar6->field_0x135 & 1) == 0) {
    pIVar6 = (Il2CppClass *)FUN_?(pIVar6);
  }
  pDVar7 = pDVar2->klass;
  uVar8 = 0;
  uVar9._0_1_ = (pDVar7->_1).rank;
  uVar9._1_1_ = (pDVar7->_1).minimumAlignment;
  if (uVar9 != 0) {
    do {
      if (pDVar7->interfaceOffsets[uVar8].interfaceType == pIVar6) {
        pVVar10 = &(pDVar7->vtable).Equals + (pDVar7->interfaceOffsets[uVar8].offset + 1);
        goto code_?;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  pVVar10 = (VirtualInvokeData *)FUN_?(pDVar2,pIVar6,1);
code_?:
  cVar11 = (*pVVar10->methodPtr)(pDVar2,(ulonglong)(uint)woID,&pMStackX_8,pVVar10->method);
  pMVar5 = (MVNetworkObject *)0x0;
  if (cVar11 != '\0') {
    pMVar5 = pMStackX_8;
  }
  return pMVar5;
}


/* Void RemoveNetworkObject(Int32) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
               (TransformNetworkManager *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_;
  pDVar2 = (this->fields).networkedObjects;
  if (pDVar2 == (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pDVar2->fields)._buckets != (Int32__Array *)0x0) {
    pIVar4 = (pDVar2->fields)._comparer;
    uVar5 = woID;
    if (pIVar4 != (IEqualityComparer_1_System_Int32_ *)0x0) {
      pvVar6 = MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                ->klass->rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
        pvVar6 = (void *)FUN_?(pvVar6);
      }
      uVar5 = FUN_?(1,pvVar6,pIVar4,woID);
    }
    pIVar7 = (pDVar2->fields)._buckets;
    if (pIVar7 == (Int32__Array *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar8 = (int)(uVar5 & 0x7fffffff) % (int)pIVar7->max_length;
    if ((uint)pIVar7->max_length <= uVar8) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar9 = pIVar7->vector[(int)uVar8] - 1;
    uVar10 = 0xffffffff;
    while (uVar11 = uVar9, -1 < (int)uVar11) {
      pDVar12 = (pDVar2->fields)._entries;
      if (pDVar12 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVNetworkObject___Array *)0x0)
      goto code_?;
      if ((uint)pDVar12->max_length <= uVar11) goto code_?;
      if (pDVar12->vector[(int)uVar11].hashCode == (uVar5 & 0x7fffffff)) {
        pIVar13 = pMVar1->klass->rgctx_data;
        if ((pDVar2->fields)._comparer == (IEqualityComparer_1_System_Int32_ *)0x0) {
          pEVar14 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32]::
                    EqualityComparer_1_System_Int32__get_Default(pIVar13[3].method);
          if (pEVar14 == (EqualityComparer_1_System_Int32_ *)0x0) goto code_?;
          cVar15 = (*(pEVar14->klass->vtable).__unknown.methodPtr)
                             (pEVar14,(ulonglong)(uint)pDVar12->vector[(int)uVar11].key,
                              (ulonglong)(uint)woID,(pEVar14->klass->vtable).__unknown.method);
        }
        else {
          pvVar6 = pIVar13[1].rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar6 + 0x135) & 1) == 0) {
            FUN_?(pvVar6);
          }
          cVar15 = FUN_?();
        }
        if (cVar15 != '\0') {
          if ((int)uVar10 < 0) {
            pIVar7 = (pDVar2->fields)._buckets;
            if (pIVar7 == (Int32__Array *)0x0) goto code_?;
            if ((uint)pIVar7->max_length <= uVar8) goto code_?;
            pIVar7->vector[(int)uVar8] = pDVar12->vector[(int)uVar11].next + 1;
          }
          else {
            pDVar16 = (pDVar2->fields)._entries;
            if (pDVar16 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVNetworkObject___Array *)0x0
               ) goto code_?;
            if ((uint)pDVar16->max_length <= uVar10) goto code_?;
            pDVar16->vector[(int)uVar10].next = pDVar12->vector[(int)uVar11].next;
          }
          pDVar12->vector[(int)uVar11].hashCode = -1;
          pDVar12->vector[(int)uVar11].next = (pDVar2->fields)._freeList;
          pDVar12->vector[(int)uVar11].value = (MVNetworkObject *)0x0;
          piVar17 = &(pDVar2->fields)._freeCount;
          *piVar17 = *piVar17 + 1;
          piVar17 = &(pDVar2->fields)._version;
          *piVar17 = *piVar17 + 1;
          (pDVar2->fields)._freeList = uVar11;
          return;
        }
      }
      uVar10 = uVar11;
      uVar9 = pDVar12->vector[(int)uVar11].next;
    }
  }
  return;
}


/* Void Update(MVNetworkGame) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_Update
               (TransformNetworkManager *this,MVNetworkGame *game,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVNetworkObject>__Dispose__
                 );
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
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVNetworkObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVNetworkObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVNetworkObject>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVNetworkObject>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLStack_1 = (List_1_System_Int32_ *)0x0;
  uStack_2 = 0;
  iStack_3 = 0;
  uStack_4 = 0;
  if (game != (MVNetworkGame *)0x0) {
    iVar5 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(game,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__TransformNetworkManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField = iVar5 + -600;
    pDVar6 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).networkedObjects;
    if (pDVar6 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&uStack_8 >> 0xc);
        lVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar11 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      puStack_13 = (undefined1 *)(ulonglong)(uint)(pDVar6->fields)._version;
      uStack_14 = 2;
      uStack_15 = 0;
      uStack_16 = 0;
      uStack_17 = (ulonglong)puStack_13;
      uStack_18 = 0;
      pOStack_19 = (Object *)0x0;
      uStack_20._0_4_ = 2;
      uStack_20._4_4_ = 0;
      uStack_8 = 0;
      puStack_13 = (undefined1 *)&pDStack_21;
      pDStack_21 = pDVar6;
      while (bVar22 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                      Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *
                                 )&pDStack_21,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVNetworkObject>__MoveNext__
                                ), pOVar23 = pOStack_19, uVar10 = uStack_18, bVar22 != 0) {
        iVar5 = (int32_t)uStack_18;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar24 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar24 == (MVGameControllerBase *)0x0) goto code_?;
        pMVar25 = (pMVar24->fields).game;
        if (pMVar25 == (MVNetworkGame *)0x0) goto code_?;
        if (((pMVar25->fields).worldNetwork == (WorldNetwork *)0x0) ||
           (pMVar26 = (((pMVar25->fields).worldNetwork)->fields)._.worldObjectClientManager,
           pMVar26 == (MVWorldObjectClientManagerNetwork *)0x0)) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOStackX_10 = (Object *)0x0;
        this_00 = (pMVar26->fields)._.worldObjects;
        if (this_00 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,iVar5,&pOStackX_10,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  );
        if (pOStackX_10 == (Object *)0x0) {
          pLVar27 = (this->fields).removeList;
          if (pLVar27 == (List_1_System_Int32_ *)0x0) goto code_?;
          FUN_?(pLVar27,uVar10 & 0xffffffff,
                        MethodInfo__System__Collections__Generic__List<int>__Add_int_);
        }
        else {
          if (pOVar23 == (Object *)0x0) goto code_?;
          (*(code *)pOVar23->klass[1]._0.name)(pOVar23,game,pOVar23->klass[1]._0.namespaze);
          cVar28 = (*(code *)pOVar23->klass[1]._0.image)(pOVar23,pOVar23->klass[1]._0.gc_desc);
          if (cVar28 != '\0') {
            pLVar27 = (this->fields).removeList;
            if (pLVar27 == (List_1_System_Int32_ *)0x0) goto code_?;
            FUN_?(pLVar27,uVar10 & 0xffffffff,
                          MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          }
        }
      }
      pLVar27 = (this->fields).removeList;
      if (pLVar27 != (List_1_System_Int32_ *)0x0) {
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&uStack_8 >> 0xc);
          lVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
          do {
            uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
            puVar11 = (ulonglong *)(lVar9 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
        }
        iStack_3 = (pLVar27->fields)._version;
        uStack_15 = 0;
        uStack_2 = 0;
        uStack_4 = 0;
        uStack_8 = 0;
        puStack_13 = (undefined1 *)&pLStack_1;
        pLStack_1 = pLVar27;
        while (pLStack_1 != (List_1_System_Int32_ *)0x0) {
          if ((iStack_3 != (pLStack_1->fields)._version) ||
             (lVar9 = (longlong)(int)uStack_2, (uint)(pLStack_1->fields)._size <= uStack_2)) {
            if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__->
                 klass->field_0x135 & 1) == 0) {
              FUN_?();
            }
            if (pLStack_1 == (List_1_System_Int32_ *)0x0) goto code_?;
            if (iStack_3 != (pLStack_1->fields)._version) goto code_?;
            uStack_2 = (pLStack_1->fields)._size + 1;
            uStack_4 = uStack_4 & 0xffffffff00000000;
            pLVar27 = (this->fields).removeList;
            if (pLVar27 != (List_1_System_Int32_ *)0x0) {
              piVar29 = &(pLVar27->fields)._version;
              *piVar29 = *piVar29 + 1;
              (pLVar27->fields)._size = 0;
              return;
            }
            goto code_?;
          }
          pIVar30 = (pLStack_1->fields)._items;
          if (pIVar30 == (Int32__Array *)0x0) goto code_?;
          if ((uint)pIVar30->max_length <= uStack_2) goto code_?;
          uStack_4 = CONCAT44(uStack_4._4_4_,pIVar30->vector[lVar9]);
          uStack_2 = uStack_2 + 1;
          this_01 = (this->fields).networkedObjects;
          if (this_01 == (Dictionary_2_System_Int32_MVNetworkObject_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)this_01,pIVar30->vector[lVar9],
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Remove_int_
                    );
        }
        goto code_?;
      }
    }
  }
code_?:
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
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* TransformNetworkManager() */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager__ctor
               (TransformNetworkManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>)
  ;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVNetworkObject>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).networkedObjects = (Dictionary_2_System_Int32_MVNetworkObject_ *)this_00;
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
  pLVar6 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(pLVar6,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).removeList = pLVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).removeList >> 0xc);
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


/* Int32 get_DelayedTime() */

int32_t Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_get_DelayedTime
                  (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TransformNetworkManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField;
}


/* Void set_DelayedTime(Int32) */

void Assembly-CSharp.dll::TransformNetworkManager::TransformNetworkManager_set_DelayedTime
               (int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TransformNetworkManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__TransformNetworkManager->static_fields->_DelayedTime_k__BackingField = value;
  return;
}

