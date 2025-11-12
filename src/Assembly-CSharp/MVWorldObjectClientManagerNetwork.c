
/* Void AddToWorldObjects(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_AddToWorldObjects
               (MVWorldObjectClientManagerNetwork *this,MVWorldObjectClient *wo,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
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
  pOStackX_8 = (Object *)0x0;
  if ((wo != (MVWorldObjectClient *)0x0) &&
     (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._.worldObjects,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,(wo->fields)._.id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar1) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Key_already_in_WorldObjects_dict,(MethodInfo *)0x0);
      return;
    }
    this_01 = (this->fields)._.worldObjects;
    if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_01,(wo->fields)._.id,(Object *)wo,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                 ->klass->rgctx_data[0x22].method);
      this_02 = (this->fields)._.worldObjectMapping;
      if (this_02 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
        MVWorldObjectClientManager+WorldObjectMapping::
        MVWorldObjectClientManager_WorldObjectMapping_AddWorldObjectToTypeSet
                  (this_02,wo,(MethodInfo *)0x0);
        pOVar2 = (Object *)FUN_?(&(wo->klass->_0).byval_arg);
        this_03 = (this->fields)._.woCreatedEventSubscribers;
        if (this_03 !=
            (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    ((Dictionary_2_System_Object_System_Object_ *)this_03,pOVar2,&pOStackX_8,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__TryGetValue_System__Type__System__Action<System::Object,_WorldObjectCreatedEventArgs>__
                    );
          pOVar2 = pOStackX_8;
          if (pOStackX_8 != (Object *)0x0) {
            lVar3 = FUN_?(TypeInfo__WorldObjectCreatedEventArgs);
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
            *(MVWorldObjectClient **)(lVar3 + 0x10) = wo;
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
            if (pOVar2 == (Object *)0x0) goto code_?;
            (*(code *)pOVar2[1].monitor)(pOVar2[4].klass,this,lVar3,pOVar2[2].monitor);
          }
          if ((wo->fields)._.groupId != -1) {
            return;
          }
          bVar9 = (TypeInfo__MVGroup->_1).naturalAligment;
          if ((bVar9 <= (wo->klass->_1).naturalAligment) &&
             ((MVGroup__Class *)(wo->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] ==
              TypeInfo__MVGroup)) {
            (this->fields)._.rootGroupId = (wo->fields)._.id;
            return;
          }
          FUN_?(wo);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void AddWorldObject(Dictionary`2[System.Object,System.Object], MVWorldInventory) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_AddWorldObject
               (MVWorldObjectClientManagerNetwork *this,
               Dictionary_2_System_Object_System_Object_ *data,MVWorldInventory *worldInventory,
               MethodInfo *method)

{
  if (worldInventory != (MVWorldInventory *)0x0) {
    uVar1 = 0;
    this_05 = KoGaMaPackageClient::KoGaMaPackageClient_WorldObjectFactory
                        (data,(this->fields)._.worldObjects,
                         (worldInventory->fields).runtimePrototypes,(MethodInfo *)0x0);
    if (this_05 != (MVWorldObjectClient *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar2 == (MVGameControllerBase *)0x0) ||
          (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
         (this_04 = (pMVar3->fields).transformNetworkManager,
         this_04 == (TransformNetworkManager *)0x0)) goto code_?;
      pMVar4 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                         (this_04,(this_05->fields)._.id,(MethodInfo *)0x0);
      if (pMVar4 == (MVNetworkObject *)0x0) {
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
       (this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._.worldObjects,
       this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_00,(this_05->fields)._.id,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      if (-1 < iVar5) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Key_already_in_WorldObjects_dict,(MethodInfo *)0x0);
        return;
      }
      this_01 = (this->fields)._.worldObjects;
      if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,(this_05->fields)._.id,
                   (Object *)this_05,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Add_int__MVWorldObjectClient_
                   ->klass->rgctx_data[0x22].method);
        this_02 = (this->fields)._.worldObjectMapping;
        if (this_02 != (MVWorldObjectClientManager_WorldObjectMapping *)0x0) {
          MVWorldObjectClientManager+WorldObjectMapping::
          MVWorldObjectClientManager_WorldObjectMapping_AddWorldObjectToTypeSet
                    (this_02,this_05,(MethodInfo *)0x0);
          key = (Object *)FUN_?(&(this_05->klass->_0).byval_arg);
          this_03 = (this->fields)._.woCreatedEventSubscribers;
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
            bVar6 = (TypeInfo__MVGroup->_1).naturalAligment;
            if ((bVar6 <= (this_05->klass->_1).naturalAligment) &&
               ((MVGroup__Class *)(this_05->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] ==
                TypeInfo__MVGroup)) {
              (this->fields)._.rootGroupId = (this_05->fields)._.id;
              return;
            }
            FUN_?(this_05);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
      }
    }
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Cleanup() */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_Cleanup
               (MVWorldObjectClientManagerNetwork *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           (this->fields)._.worldObjects;
  if ((pDVar1 == (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0) ||
     (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               TypeConverterRegistry+ConverterKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                         (pDVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                         ),
     pDVar2 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0)) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    uVar3 = uStack_4;
code_?:
    uStack_4 = uVar3;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    uStack_5 = (pDVar2->fields)._dictionary;
    puStack_6 = (undefined4 *)0x0;
    uStack_7 = 0;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_5 >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    if (uStack_5 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iStack_12 = (uStack_5->fields)._version;
    uStack_7 = 0;
    uStack_5._4_4_ = (undefined4)((ulonglong)uStack_5 >> 0x20);
    uStack_13 = (undefined4)uStack_5;
    uStack_14 = uStack_5._4_4_;
    uStack_4 = 0;
    aplStack_15[0] = (longlong *)0x0;
    uStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_6 = &uStack_13;
    while (lVar16 = CONCAT44(uStack_14,uStack_13), lVar16 != 0) {
      if (iStack_12 != *(int *)(lVar16 + 0x2c)) goto code_?;
      do {
        if (lVar16 == 0) goto code_?;
        if (*(uint *)(lVar16 + 0x20) <= uStack_4) {
          uStack_4 = *(int *)(lVar16 + 0x20) + 1;
          aplStack_15[0] = (longlong *)0x0;
          pDVar1 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)(this->fields)._.worldObjects;
          if (pDVar1 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            TypeConverterRegistry+ConverterKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                      (pDVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Clear__
                      );
            return;
          }
          goto code_?;
        }
        lVar17 = *(longlong *)(lVar16 + 0x18);
        lVar18 = (longlong)(int)uStack_4;
        uVar3 = uStack_4 + 1;
        if (lVar17 == 0) goto code_?;
        bVar19 = *(uint *)(lVar17 + 0x18) <= uStack_4;
        uStack_4 = uVar3;
        if (bVar19) goto code_?;
      } while (*(int *)(lVar17 + 0x20 + lVar18 * 0x18) < 0);
      aplStack_15[0] = *(longlong **)(lVar17 + (lVar18 + 2) * 0x18);
      func_?(aplStack_15);
      if (aplStack_15[0] == (longlong *)0x0) goto code_?;
      (**(code **)(*aplStack_15[0] + 0x4a8))
                (aplStack_15[0],*(undefined8 *)(*aplStack_15[0] + 0x4b0));
    }
  }
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* MVWorldObjectClient Clone(Int32, MVWorldObjectClient, CloneBookkeeping, MVWorldInventory) */

MVWorldObjectClient *
Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork_Clone
          (MVWorldObjectClientManagerNetwork *this,int32_t ownerActorNumber,
          MVWorldObjectClient *rootOriginal,CloneBookkeeping *cloneBookkeeping,
          MVWorldInventory *worldInventory,MethodInfo *method)

{
  if ((rootOriginal != (MVWorldObjectClient *)0x0) && (worldInventory != (MVWorldInventory *)0x0)) {
    pMVar1 = (MVWorldObjectClient *)
             (*(rootOriginal->klass->vtable).Clone.methodPtr)
                       (rootOriginal,ownerActorNumber,
                        (ulonglong)(uint)(rootOriginal->fields)._.groupId,cloneBookkeeping,
                        (this->fields)._.worldObjects,(worldInventory->fields).runtimePrototypes,
                        (rootOriginal->klass->vtable).Clone.method);
    return pMVar1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVWorldObjectClient *)(*pcVar2)();
  return pMVar1;
}


/* Void DeleteWO(Int32) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_DeleteWO
               (MVWorldObjectClientManagerNetwork *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_World_object_is_attached_to_non_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Wo_not_found__This_is_most_likel);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_find_group_when_destro);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMStack_1 = (MVGroup *)0x0;
  wo = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                 ((MVWorldObjectClientManager *)this,id,(MethodInfo *)0x0);
  if (wo == (MVWorldObjectClient *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Wo_not_found__This_is_most_likel,(MethodInfo *)0x0);
    return;
  }
  this_00 = (this->fields)._.worldObjectMapping;
  if (this_00 == (MVWorldObjectClientManager_WorldObjectMapping *)0x0) goto code_?;
  MVWorldObjectClientManager+WorldObjectMapping::
  MVWorldObjectClientManager_WorldObjectMapping_RemoveWorldObjectFromTypeSet
            (this_00,wo,(MethodInfo *)0x0);
  key = (wo->fields)._.id;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectDestroyedEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields)._.woDestroyedEventSubscribers;
  pOStackX_20 = (Object *)0x0;
  if (pDVar2 == (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *)
                0x0) goto code_?;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryGetValue
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,key,&pOStackX_20,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                    );
  pOVar4 = pOStackX_20;
  if (bVar3 != 0) {
    lVar5 = FUN_?(TypeInfo__WorldObjectDestroyedEventArgs);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    *(int32_t *)(lVar5 + 0x10) = key;
    if (pOVar4 == (Object *)0x0) {
code_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (*(code *)pOVar4[1].monitor)(pOVar4[4].klass,this,lVar5,pOVar4[2].monitor);
    pDVar2 = (this->fields)._.woDestroyedEventSubscribers;
    if (pDVar2 == (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *
                  )0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,key,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Remove_int_
              );
  }
  key_00 = (wo->fields)._.groupId;
  if (key_00 != -1) {
    pDVar7 = (this->fields)._.worldObjects;
    if (pDVar7 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) goto code_?;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,key_00,
                       (Object **)&pMStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
    if (bVar3 == 0) {
      pSVar8 = StringLiteral_Could_not_find_group_when_destro;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
        pSVar8 = StringLiteral_Could_not_find_group_when_destro;
      }
    }
    else {
      if (pMStack_1 == (MVGroup *)0x0) goto code_?;
      pMVar9 = pMStack_1->klass;
      bVar10 = (TypeInfo__MVGroup->_1).naturalAligment;
      if ((bVar10 <= (pMVar9->_1).naturalAligment) &&
         ((MVGroup__Class *)(pMVar9->_1).typeHierarchy[(ulonglong)bVar10 - 1] == TypeInfo__MVGroup))
      {
        if (pMStack_1 == (MVGroup *)0x0) goto code_?;
        bVar10 = (TypeInfo__MVGroup->_1).naturalAligment;
        if ((((pMVar9->_1).naturalAligment < bVar10) ||
            ((MVGroup__Class *)(pMVar9->_1).typeHierarchy[(ulonglong)bVar10 - 1] != TypeInfo__MVGroup
            )) || (pMStack_1 == (MVGroup *)0x0)) {
          FUN_?(pMStack_1);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        MVGroup::MVGroup_RemoveChild(pMStack_1,id,(MethodInfo *)0x0);
        goto code_?;
      }
      if (pMStack_1 == (MVGroup *)0x0) goto code_?;
      EStack_11.klass = (Enum__Class *)TypeInfo__MV__WorldObject__WorldObjectType;
      iStack_12 = (pMStack_1->fields)._._.type;
      EStack_11.monitor = (MonitorData *)0xffffffffffffffff;
      pSVar8 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_11,(MethodInfo *)0x0);
      pSVar8 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_World_object_is_attached_to_non_,pSVar8,(MethodInfo *)0x0)
      ;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar8,(MethodInfo *)0x0);
  }
code_?:
  (*(wo->klass->vtable).Destroy.methodPtr)(wo,(wo->klass->vtable).Destroy.method);
  pDVar7 = (this->fields)._.worldObjects;
  if (pDVar7 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,(wo->fields)._.id,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Remove_int_
              );
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar13 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar13 != (MVGameControllerBase *)0x0) &&
        (pMVar14 = (pMVar13->fields).game, pMVar14 != (MVNetworkGame *)0x0)) &&
       (this_01 = (LogicObjectManager *)(pMVar14->fields)._LogicObjectManager_k__BackingField,
       this_01 != (LogicObjectManager *)0x0)) {
      MVWorldObject.dll::LogicObjectManager::LogicObjectManager_RemoveLogicObjectFromUpdate
                (this_01,id,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void DestroyWO(Int32) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_DestroyWO
               (MVWorldObjectClientManagerNetwork *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                     ((MVWorldObjectClientManager *)this,id,(MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClient *)0x0) {
    bVar3 = (TypeInfo__MVGroup->_1).naturalAligment;
    if ((bVar3 <= (pMVar2->klass->_1).naturalAligment) &&
       ((MVGroup__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
        TypeInfo__MVGroup)) {
      this_00 = (MVGroup *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          ((MVWorldObjectClientManager *)this,id,(MethodInfo *)0x0);
      if (this_00 != (MVGroup *)0x0) {
        bVar3 = (TypeInfo__MVGroup->_1).naturalAligment;
        if (((this_00->klass->_1).naturalAligment < bVar3) ||
           ((MVGroup__Class *)(this_00->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
            TypeInfo__MVGroup)) {
          FUN_?(this_00);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pLVar5 = MVGroup::MVGroup_get_Children(this_00,(MethodInfo *)0x0);
        if (pLVar5 != (List_1_MVWorldObjectClient_ *)0x0) {
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)&uStack_7 >> 0xc);
            puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar9 = *puVar8;
              LOCK();
              uVar10 = *puVar8;
              if (uVar9 == uVar10) {
                *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (uVar9 != uVar10);
          }
          pLStack_11 = (List_1_T_Enumerator_System_Object_ *)
                       ((ulonglong)(uint)(pLVar5->fields)._version << 0x20);
          uStack_12 = 0;
          LStack_1._8_8_ = pLStack_11;
          LStack_1._current = (Object *)0x0;
          uStack_7 = 0;
          pLStack_11 = &LStack_1;
          LStack_1._list = (List_1_System_Object_ *)pLVar5;
          while (bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                         Object]::List_1_T_Enumerator_System_Object__MoveNext
                                   (&LStack_1,
                                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                                   ), bVar13 != 0) {
            if (LStack_1._current == (Object *)0x0) goto code_?;
            MVWorldObjectClientManagerNetwork_DestroyWO
                      (this,*(int32_t *)&LStack_1._current[1].klass,(MethodInfo *)0x0);
          }
          goto code_?;
        }
      }
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
code_?:
  MVWorldObjectClientManagerNetwork_DeleteWO(this,id,(MethodInfo *)0x0);
  return;
}


/* Void HandleTransferWorldObjectsToGroup(Boolean) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_HandleTransferWorldObjectsToGroup
               (MVWorldObjectClientManagerNetwork *this,bool success,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__OnTransferWosResponseEventArgs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_HandleTransferWorldObjectsToGrou);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (success == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_HandleTransferWorldObjectsToGrou,(MethodInfo *)0x0);
  }
  if ((this->fields)._.OnTransferWosResponse !=
      (EventHandler_1_OnTransferWosResponseEventArgs_ *)0x0) {
    pEVar1 = (this->fields)._.OnTransferWosResponse;
    lVar2 = FUN_?(TypeInfo__OnTransferWosResponseEventArgs);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    *(bool *)(lVar2 + 0x10) = success;
    (*(pEVar1->fields)._._.invoke_impl)
              ((pEVar1->fields)._._.method_code,this,lVar2,(pEVar1->fields)._._.method);
  }
  return;
}


/* Boolean LockHierarchyProxy(Int32, Int32) */

bool Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_LockHierarchyProxy
               (MVWorldObjectClientManagerNetwork *this,int32_t id,int32_t actorNr,
               MethodInfo *method)

{
  aIStackX_10[0].m_value = id;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_LockHierarchyProxy_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_LockHierarchyProxy_,pSVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  MVWorldObjectClientManagerNetwork_SetOwnerInHierarchy(this,id,actorNr,(MethodInfo *)0x0);
  return 1;
}


/* Boolean LockHierarchyResponse(Int32, Boolean, Boolean) */

bool Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_LockHierarchyResponse
               (MVWorldObjectClientManagerNetwork *this,int32_t id,bool lockObject,bool success,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__OnHierarchyLockedEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._.worldObjects;
  if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                    (this_00,id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                     ->klass->rgctx_data[0x21].method);
  if (iVar1 < 0) {
    bVar2 = 0;
  }
  else {
    if (lockObject == 0) {
      iVar1 = 0;
    }
    else {
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 == (MVNetworkGame *)0x0) ||
         (this_01 = (pMVar3->fields).playerContainer, this_01 == (MVPlayerContainer *)0x0)) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        bVar2 = (*pcVar4)();
        return bVar2;
      }
      pMVar5 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_01,(MethodInfo *)0x0);
      if (pMVar5 == (MVLocalPlayer *)0x0) goto code_?;
      iVar1 = (pMVar5->fields)._._ActorNr_k__BackingField;
    }
    MVWorldObjectClientManagerNetwork_SetOwnerInHierarchy(this,id,iVar1,(MethodInfo *)0x0);
    if ((this->fields)._.OnHierarchyLockedResponse !=
        (EventHandler_1_OnHierarchyLockedEventArgs_ *)0x0) {
      pEVar6 = (this->fields)._.OnHierarchyLockedResponse;
      lVar7 = FUN_?(TypeInfo__OnHierarchyLockedEventArgs);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventArgs);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
        FUN_?();
      }
      *(int32_t *)(lVar7 + 0x10) = id;
      *(bool *)(lVar7 + 0x14) = success;
      (*(pEVar6->fields)._._.invoke_impl)
                ((pEVar6->fields)._._.method_code,this,lVar7,(pEVar6->fields)._._.method);
    }
    bVar2 = 1;
  }
  return bVar2;
}


/* Void OnAttachWorldObjectToSeat(Int32, Int32, Int32, Int32) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnAttachWorldObjectToSeat
               (MVWorldObjectClientManagerNetwork *this,int32_t instigatorActorNr,
               int32_t seatOwnerWoID,int32_t worldObjectID,int32_t seatID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,CONCAT44(in_register_00000014,instigatorActorNr));
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatar);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVVehicleBase);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_worldObjectClient_not_found);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SeatOwnerWorldObject_Not_found);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.worldObjects;
  vehicleUser = (MVAvatar *)0x0;
  pMStackX_8 = (MVVehicleBase *)0x0;
  apMStack_2[0] = (MVAvatar *)0x0;
  if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,seatOwnerWoID,
                       (Object **)&pMStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
    if (bVar3 == 0) {
      message = StringLiteral_SeatOwnerWorldObject_Not_found;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
        message = StringLiteral_SeatOwnerWorldObject_Not_found;
      }
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)message,(MethodInfo *)0x0);
      return;
    }
    pDVar1 = (this->fields)._.worldObjects;
    if (pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryGetValue
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,worldObjectID,
                         (Object **)apMStack_2,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                        );
      if (bVar3 == 0) {
        message = StringLiteral_worldObjectClient_not_found;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
          message = StringLiteral_worldObjectClient_not_found;
        }
        goto code_?;
      }
      if (pMStackX_8 != (MVVehicleBase *)0x0) {
        bVar4 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
        if ((((pMStackX_8->klass->_1).naturalAligment < bVar4) ||
            ((MVVehicleBase__Class *)(pMStackX_8->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
             TypeInfo__MVVehicleBase)) || (pMStackX_8 == (MVVehicleBase *)0x0)) {
          FUN_?(pMStackX_8);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (apMStack_2[0] != (MVAvatar *)0x0) {
          bVar4 = (TypeInfo__MVAvatar->_1).naturalAligment;
          if ((((apMStack_2[0]->klass->_1).naturalAligment < bVar4) ||
              ((MVAvatar__Class *)(apMStack_2[0]->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
               TypeInfo__MVAvatar)) ||
             (vehicleUser = apMStack_2[0], apMStack_2[0] == (MVAvatar *)0x0)) {
            FUN_?(apMStack_2[0]);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        MVVehicleBase::MVVehicleBase_Enter(pMStackX_8,vehicleUser,seatID,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnCloneWorldObjectTreeResponse(Boolean, Int32) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnCloneWorldObjectTreeResponse
               (MVWorldObjectClientManagerNetwork *this,bool success,int32_t rootId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CloneWorldObjectTreeResponseEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.CloneWorldObjectTreeResponse !=
      (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
    lVar1 = FUN_?(TypeInfo__CloneWorldObjectTreeResponseEventArgs);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    *(bool *)(lVar1 + 0x14) = success;
    *(int32_t *)(lVar1 + 0x10) = rootId;
    pEVar2 = (this->fields)._.CloneWorldObjectTreeResponse;
    if (pEVar2 == (EventHandler_1_CloneWorldObjectTreeResponseEventArgs_ *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(pEVar2->fields)._._.invoke_impl)
              ((pEVar2->fields)._._.method_code,this,lVar1,(pEVar2->fields)._._.method);
  }
  return;
}


/* Void OnRemoveWorldObjectDataPartialEvent(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnRemoveWorldObjectDataPartialEvent
               (MVWorldObjectClientManagerNetwork *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *worldObjectDataToRemove,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempt_to_remove_data_from_Worl);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_Attempt_to_remove_data_from_Worl;
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
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
        return;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_01 = (this->fields)._.worldObjects;
    if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_01,worldObjectID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pOVar5 != (Object *)0x0) {
        UNRECOVERED_JUMPTABLE = pOVar5->klass[1].vtable.Equals.method;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE)
                  (pOVar5,worldObjectDataToRemove,pOVar5->klass[1].vtable.Finalize.methodPtr,
                   UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean OnSetWorldObjectsToPurchasedEvent(Int32, Int32) */

bool Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnSetWorldObjectsToPurchasedEvent
               (MVWorldObjectClientManagerNetwork *this,int32_t profileID,int32_t itemID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 0;
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields)._.worldObjects;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                            ),
        pDVar2 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    uVar3 = uStack_4;
code_?:
    uStack_4 = uVar3;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    uStack_5 = (pDVar2->fields)._dictionary;
    puStack_6 = (undefined4 *)0x0;
    uStack_7 = 0;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_5 >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    if (uStack_5 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar11 = (code *)swi(3);
      bVar12 = (*pcVar11)();
      return bVar12;
    }
    iStack_13 = (uStack_5->fields)._version;
    uStack_7 = 0;
    uStack_5._4_4_ = (undefined4)((ulonglong)uStack_5 >> 0x20);
    uStack_14 = (undefined4)uStack_5;
    uStack_15 = uStack_5._4_4_;
    uStack_4 = 0;
    aplStack_16[0] = (longlong *)0x0;
    uStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_6 = &uStack_14;
    while (lVar17 = CONCAT44(uStack_15,uStack_14), lVar17 != 0) {
      if (iStack_13 != *(int *)(lVar17 + 0x2c)) goto code_?;
      do {
        if (lVar17 == 0) goto code_?;
        if (*(uint *)(lVar17 + 0x20) <= uStack_4) {
          return 0 < iVar1;
        }
        lVar18 = *(longlong *)(lVar17 + 0x18);
        lVar19 = (longlong)(int)uStack_4;
        uVar3 = uStack_4 + 1;
        if (lVar18 == 0) goto code_?;
        bVar20 = *(uint *)(lVar18 + 0x18) <= uStack_4;
        uStack_4 = uVar3;
        if (bVar20) goto code_?;
      } while (*(int *)(lVar18 + 0x20 + lVar19 * 0x18) < 0);
      aplStack_16[0] = *(longlong **)(lVar18 + (lVar19 + 2) * 0x18);
      func_?(aplStack_16);
      if (aplStack_16[0] == (longlong *)0x0) goto code_?;
      if ((*(int *)((longlong)aplStack_16[0] + 0x3c) == profileID) &&
         ((int)aplStack_16[0][3] == itemID)) {
        (**(code **)(*aplStack_16[0] + 0x448))
                  (aplStack_16[0],*(undefined8 *)(*aplStack_16[0] + 0x450));
        iVar1 = iVar1 + 1;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Void OnTransferWorldObjectsToGroupEvent(Int32, Int32[]) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnTransferWorldObjectsToGroupEvent
               (MVWorldObjectClientManagerNetwork *this,int32_t groupId,
               Int32__Array *worldObjectsToGroup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,groupId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                       );
    pOVar2 = (Object *)0x0;
    pOVar3 = pOVar2;
    if (pOVar1 != (Object *)0x0) {
      bVar4 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((pOVar1->klass->_1).naturalAligment < bVar4) ||
         (pOVar3 = pOVar1,
         (MVGroup__Class *)(pOVar1->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
         TypeInfo__MVGroup)) {
        FUN_?(pOVar1);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (worldObjectsToGroup != (Int32__Array *)0x0) {
      piVar6 = worldObjectsToGroup->vector;
      while( true ) {
        uVar7 = (uint)pOVar2;
        if ((int)worldObjectsToGroup->max_length <= (int)uVar7) {
          return;
        }
        if ((uint)worldObjectsToGroup->max_length <= uVar7) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (pOVar3 == (Object *)0x0) break;
        (*(code *)pOVar3->klass[4]._0.methods)(pOVar3,*piVar6,pOVar3->klass[4]._0.nestedTypes);
        pOVar2 = (Object *)(ulonglong)(uVar7 + 1);
        piVar6 = piVar6 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnUpdateWorldObjectDataEvent(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataEvent
               (MVWorldObjectClientManagerNetwork *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *worldObjectData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempt_to_update_WorldObjectDat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_Attempt_to_update_WorldObjectDat;
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
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
      return;
    }
    pDVar5 = (this->fields)._.worldObjects;
    if ((pDVar5 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) &&
       (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,worldObjectID,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           ), pOVar6 != (Object *)0x0)) {
      bVar7 = iRam_? != 0;
      pOVar6[7].klass = (Object__Class *)worldObjectData;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)(pOVar6 + 7) >> 0xc);
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
      pDVar5 = (this->fields)._.worldObjects;
      if ((pDVar5 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) &&
         (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,worldObjectID,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             ), pOVar6 != (Object *)0x0)) {
        UNRECOVERED_JUMPTABLE = pOVar6->klass[3]._0.declaringType;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE)(pOVar6,pOVar6->klass[3]._0.parent,UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnUpdateWorldObjectDataPartialEvent(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectDataPartialEvent
               (MVWorldObjectClientManagerNetwork *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *worldObjectData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempt_to_update_WorldObjectDat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_Attempt_to_update_WorldObjectDat;
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
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
        return;
      }
      FUN_?();
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    this_01 = (this->fields)._.worldObjects;
    if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_01,worldObjectID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pOVar4 != (Object *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)&pOVar4->klass[1]._1.naturalAligment;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (pOVar4,worldObjectData,pOVar4->klass[1].vtable.Equals.methodPtr,
                   UNRECOVERED_JUMPTABLE);
        return;
      }
    }
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void OnUpdateWorldObjectRunTimeDataEvent(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnUpdateWorldObjectRunTimeDataEvent
               (MVWorldObjectClientManagerNetwork *this,int32_t worldObjectID,
               Dictionary_2_System_Object_System_Object_ *delta,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Attempt_to_update_WorldObjectDat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_Attempt_to_update_WorldObjectDat;
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
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
        return;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_01 = (this->fields)._.worldObjects;
    if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)this_01,worldObjectID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if ((pOVar5 != (Object *)0x0) && (pOVar5[0x13].klass != (Object__Class *)0x0)) {
        MVRuntimeDataVariables::MVRuntimeDataVariables_Receive
                  ((MVRuntimeDataVariables *)pOVar5[0x13].klass,delta,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)pOVar5->klass[3]._0.generic_class)(pOVar5,pOVar5->klass[3]._0.typeMetadataHandle);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnWorldObjectDestroyed(Int32) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_OnWorldObjectDestroyed
               (MVWorldObjectClientManagerNetwork *this,int32_t woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectDestroyedEventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.woDestroyedEventSubscribers;
  pOStackX_8 = (Object *)0x0;
  if (pDVar1 != (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *)
                0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,woID,&pOStackX_8,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__TryGetValue_int__System__Action<System::Object,_WorldObjectDestroyedEventArgs>__
                      );
    pOVar3 = pOStackX_8;
    if (bVar2 == 0) {
      return;
    }
    lVar4 = FUN_?(TypeInfo__WorldObjectDestroyedEventArgs);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventArgs);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
      FUN_?();
    }
    *(int32_t *)(lVar4 + 0x10) = woID;
    if (pOVar3 != (Object *)0x0) {
      (*(code *)pOVar3[1].monitor)(pOVar3[4].klass,this,lVar4,pOVar3[2].monitor);
      pDVar1 = (this->fields)._.woDestroyedEventSubscribers;
      if (pDVar1 != (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,woID,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Remove_int_
                  );
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ResetLocalWorldObject() */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_ResetLocalWorldObject
               (MVWorldObjectClientManagerNetwork *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list =
       (List_1_System_Object_ *)
       MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                 ((MVWorldObjectClientManager *)this,WorldObjectType__Enum_CollectibleItem,
                  (MethodInfo *)0x0);
  if ((List_1_MVWorldObjectClient_ *)LStack_1._list == (List_1_MVWorldObjectClient_ *)0x0) {
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
  pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
               ((ulonglong)(uint)(((List_1_MVWorldObjectClient_ *)LStack_1._list)->fields)._version
               << 0x20);
  uStack_9 = 0;
  LStack_1._8_8_ = pLStack_8;
  LStack_1._current = (Object *)0x0;
  uStack_4 = 0;
  pLStack_8 = &LStack_1;
  while( true ) {
    bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
            List_1_T_Enumerator_System_Object__MoveNext
                      (&LStack_1,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                      );
    if (bVar10 == 0) {
      return;
    }
    if (LStack_1._current == (Object *)0x0) break;
    (**(code **)&(LStack_1._current)->klass[1]._1.cctor_finished_or_no_cctor)
              (LStack_1._current,(LStack_1._current)->klass[1]._1.cctor_thread);
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetWorld() */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_ResetWorld
               (MVWorldObjectClientManagerNetwork *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILogicWorldObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields)._.worldObjects;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Values__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    uVar2 = FUN_?(unaff_RBX,unaff_RDI);
    pIVar3 = unaff_RDI;
code_?:
    FUN_?(uVar2,pIVar3);
code_?:
    FUN_?();
    uVar4 = uStack_5;
code_?:
    uStack_5 = uVar4;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    uStack_6 = (pDVar1->fields)._dictionary;
    puStack_7 = (undefined4 *)0x0;
    uStack_8 = 0;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_6 >> 0xc);
      puVar9 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar10 = *puVar9;
        LOCK();
        uVar11 = *puVar9;
        if (uVar10 == uVar11) {
          *puVar9 = uVar10 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (uVar10 != uVar11);
    }
    if (uStack_6 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iStack_13 = (uStack_6->fields)._version;
    uStack_8 = 0;
    uStack_6._4_4_ = (undefined4)((ulonglong)uStack_6 >> 0x20);
    uStack_14 = (undefined4)uStack_6;
    uStack_15 = uStack_6._4_4_;
    uStack_5 = 0;
    pMStack_16 = (MVGameCoinManager *)0x0;
    uStack_6 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_7 = &uStack_14;
    while (lVar17 = CONCAT44(uStack_15,uStack_14), lVar17 != 0) {
      if (iStack_13 != *(int *)(lVar17 + 0x2c)) goto code_?;
      do {
        if (lVar17 == 0) goto code_?;
        if (*(uint *)(lVar17 + 0x20) <= uStack_5) {
          uStack_5 = *(int *)(lVar17 + 0x20) + 1;
          pMStack_16 = (MVGameCoinManager *)0x0;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar18 = TypeInfo__MVGameControllerBase->static_fields->instance;
          unaff_RBX = (MVGameCoinManager *)0x0;
          if (pMVar18 != (MVGameControllerBase *)0x0) {
            pMVar19 = (pMVar18->fields).game;
            unaff_RBX = (MVGameCoinManager *)0x0;
            if (pMVar19 != (MVNetworkGame *)0x0) {
              unaff_RBX = (pMVar19->fields)._GameCoinManager_k__BackingField;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar18 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((pMVar18 != (MVGameControllerBase *)0x0) && (unaff_RBX != (MVGameCoinManager *)0x0)
                 ) {
                MVGameCoinManager::MVGameCoinManager_Reset
                          (unaff_RBX,(pMVar18->fields).game,(MethodInfo *)0x0);
                if ((this->fields)._.OnResetWorldDone != (EventHandler_1_EventArgs_ *)0x0) {
                  pEVar20 = (this->fields)._.OnResetWorldDone;
                  uVar21 = FUN_?(TypeInfo__System__EventArgs);
                  (*(pEVar20->fields)._._.invoke_impl)
                            ((pEVar20->fields)._._.method_code,this,uVar21,
                             (pEVar20->fields)._._.method);
                }
                return;
              }
            }
          }
          goto code_?;
        }
        lVar22 = *(longlong *)(lVar17 + 0x18);
        lVar23 = (longlong)(int)uStack_5;
        uVar4 = uStack_5 + 1;
        if (lVar22 == 0) goto code_?;
        bVar24 = *(uint *)(lVar22 + 0x18) <= uStack_5;
        uStack_5 = uVar4;
        if (bVar24) goto code_?;
      } while (*(int *)(lVar22 + 0x20 + lVar23 * 0x18) < 0);
      pMStack_16 = *(MVGameCoinManager **)(lVar22 + (lVar23 + 2) * 0x18);
      func_?();
      unaff_RBX = pMStack_16;
      if (pMStack_16 == (MVGameCoinManager *)0x0) goto code_?;
      (**(code **)&pMStack_16->klass[1]._1.cctor_finished_or_no_cctor)
                (pMStack_16,pMStack_16->klass[1]._1.cctor_thread);
      lVar17 = FUN_?(unaff_RBX,TypeInfo__ILogicWorldObject);
      pIVar3 = TypeInfo__ILogicWorldObject;
      if (lVar17 != 0) {
        lVar17 = FUN_?(unaff_RBX,TypeInfo__ILogicWorldObject);
        unaff_RDI = TypeInfo__ILogicWorldObject;
        uVar2 = extraout_XMM0_Da;
        if (lVar17 == 0) goto code_?;
        lVar17 = FUN_?(unaff_RBX,TypeInfo__ILogicWorldObject);
        if (lVar17 == 0) goto code_?;
        lVar17 = FUN_?(0,TypeInfo__ILogicWorldObject,lVar17);
        if (lVar17 == 0) goto code_?;
        FUN_?(3,TypeInfo__IInputSignalReceiver,lVar17);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void SetOwnerInHierarchy(Int32, Int32) */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_SetOwnerInHierarchy
               (MVWorldObjectClientManagerNetwork *this,int32_t id,int32_t actorNr,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeRef__MVGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SetOwnerInHierarchy_has_been_cal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_SetOwnerInHierarchy_has_been_cal,(MethodInfo *)0x0);
  pDVar1 = (this->fields)._.worldObjects;
  if ((pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,id,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         ), pOVar2 != (Object *)0x0)) {
    *(int32_t *)&pOVar2[3].monitor = actorNr;
    pDVar1 = (this->fields)._.worldObjects;
    if ((pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,id,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           ), pOVar2 != (Object *)0x0)) {
      lVar3 = FUN_?(&(pOVar2->klass->_0).byval_arg);
      pIVar4 = TypeRef__MVGroup;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (pIVar4 == (Il2CppType *)0x0) {
        lVar5 = 0;
      }
      else {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar5 = FUN_?(pIVar4,1);
        lVar5 = FUN_?(lVar5 + 0x20);
      }
      if (lVar3 != lVar5) {
        return;
      }
      pDVar1 = (this->fields)._.worldObjects;
      if ((pDVar1 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) &&
         (this_00 = (MVGroup *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,id,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                              ), this_00 != (MVGroup *)0x0)) {
        bVar6 = (TypeInfo__MVGroup->_1).naturalAligment;
        if (((this_00->klass->_1).naturalAligment < bVar6) ||
           ((MVGroup__Class *)(this_00->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
            TypeInfo__MVGroup)) {
          FUN_?(this_00);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        LStack_8._list =
             (List_1_System_Object_ *)MVGroup::MVGroup_get_Children(this_00,(MethodInfo *)0x0);
        if ((List_1_MVWorldObjectClient_ *)LStack_8._list != (List_1_MVWorldObjectClient_ *)0x0) {
          if (iRam_? != 0) {
            uVar9 = (uint)((ulonglong)&uStack_10 >> 0xc);
            puVar11 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar12 = *puVar11;
              LOCK();
              uVar13 = *puVar11;
              if (uVar12 == uVar13) {
                *puVar11 = uVar12 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (uVar12 != uVar13);
          }
          pLStack_14 = (List_1_T_Enumerator_System_Object_ *)
                       ((ulonglong)
                        (uint)(((List_1_MVWorldObjectClient_ *)LStack_8._list)->fields)._version <<
                       0x20);
          uStack_15 = 0;
          LStack_8._8_8_ = pLStack_14;
          LStack_8._current = (Object *)0x0;
          uStack_10 = 0;
          pLStack_14 = &LStack_8;
          while( true ) {
            bVar16 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_8,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVWorldObjectClient>__MoveNext__
                              );
            if (bVar16 == 0) {
              return;
            }
            if (LStack_8._current == (Object *)0x0) break;
            *(int32_t *)&LStack_8._current[3].monitor = actorNr;
          }
          FUN_?();
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean TransferOwnershipProxy(Int32, Int32) */

bool Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_TransferOwnershipProxy
               (MVWorldObjectClientManagerNetwork *this,int32_t id,int32_t ownerActorNr,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return 0;
    }
    pDVar2 = (this->fields)._.worldObjects;
    if (pDVar2 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,id,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pOVar3 != (Object *)0x0) {
        *(int32_t *)&pOVar3[3].monitor = ownerActorNr;
        pDVar2 = (this->fields)._.worldObjects;
        if (pDVar2 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,id,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             );
          if (ownerActorNr == 0) {
            if (pOVar3 != (Object *)0x0) {
              (*(code *)pOVar3->klass[3].vtable.Equals.method)
                        (pOVar3,pOVar3->klass[3].vtable.Finalize.methodPtr);
              return 1;
            }
          }
          else if (pOVar3 != (Object *)0x0) {
            uStack_4 = _UNK_?;
            uStack_5 = _UNK_?;
            (**(code **)&pOVar3->klass[3]._1.naturalAligment)
                      (pOVar3,&uStack_4,pOVar3->klass[3].vtable.Equals.methodPtr);
            return 1;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Boolean TransferOwnershipResponse(Int32, Int32, Boolean) */

bool Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_TransferOwnershipResponse
               (MVWorldObjectClientManagerNetwork *this,int32_t id,int32_t ownerActorNr,bool success
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVNetworkReporter);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__OnTransferOwnershipResponseEventArgs);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_set_ownership___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._.worldObjects;
  if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) goto code_?;
  iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                    (this_00,id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                     ->klass->rgctx_data[0x21].method);
  if (iVar1 < 0) {
    bVar2 = 0;
  }
  else {
    if (success == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Failed_to_set_ownership___,(MethodInfo *)0x0);
    }
    else {
      pDVar3 = (this->fields)._.worldObjects;
      if (pDVar3 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        bVar2 = (*pcVar4)();
        return bVar2;
      }
      pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,id,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                         );
      if (pOVar5 == (Object *)0x0) goto code_?;
      *(int32_t *)&pOVar5[3].monitor = ownerActorNr;
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (ownerActorNr == 0) {
        if ((pMVar6 == (MVNetworkGame *)0x0) ||
           (pTVar7 = (pMVar6->fields).transformNetworkManager,
           pTVar7 == (TransformNetworkManager *)0x0)) goto code_?;
        pMVar8 = TransformNetworkManager::TransformNetworkManager_GetNetworkObject
                            (pTVar7,id,(MethodInfo *)0x0);
        if (pMVar8 != (MVNetworkObject *)0x0) {
          bVar9 = (TypeInfo__MVNetworkReporter->_1).naturalAligment;
          if ((bVar9 <= (pMVar8->klass->_1).naturalAligment) &&
             ((pMVar8->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] ==
              (Il2CppClass *)TypeInfo__MVNetworkReporter)) {
            pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((pMVar6 == (MVNetworkGame *)0x0) ||
               (pTVar7 = (pMVar6->fields).transformNetworkManager,
               pTVar7 == (TransformNetworkManager *)0x0)) goto code_?;
            TransformNetworkManager::TransformNetworkManager_RemoveNetworkObject
                      (pTVar7,id,(MethodInfo *)0x0);
          }
        }
      }
      else {
        if (pMVar6 == (MVNetworkGame *)0x0) goto code_?;
        pDVar3 = (this->fields)._.worldObjects;
        pTVar7 = (pMVar6->fields).transformNetworkManager;
        if (pDVar3 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)
        goto code_?;
        owner = (MVWorldObjectClient *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,id,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                          );
        this_01 = (MVNetworkReporter *)FUN_?(TypeInfo__MVNetworkReporter);
        MVNetworkReporter::MVNetworkReporter__ctor(this_01,owner,(MethodInfo *)0x0);
        if (pTVar7 == (TransformNetworkManager *)0x0) goto code_?;
        TransformNetworkManager::TransformNetworkManager_AddReporter
                  (pTVar7,id,this_01,(MethodInfo *)0x0);
      }
    }
    if ((this->fields)._.OnWorldObjectTransferOwnershipResponse !=
        (EventHandler_1_OnTransferOwnershipResponseEventArgs_ *)0x0) {
      pEVar10 = (this->fields)._.OnWorldObjectTransferOwnershipResponse;
      lVar11 = FUN_?(TypeInfo__OnTransferOwnershipResponseEventArgs);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventArgs);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
        FUN_?();
      }
      *(int32_t *)(lVar11 + 0x10) = id;
      *(int32_t *)(lVar11 + 0x14) = ownerActorNr;
      *(bool *)(lVar11 + 0x18) = success;
      (*(pEVar10->fields)._._.invoke_impl)
                ((pEVar10->fields)._._.method_code,this,lVar11,(pEVar10->fields)._._.method);
    }
    bVar2 = 1;
  }
  return bVar2;
}


/* Boolean Ungroup(Int32) */

bool Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::
     MVWorldObjectClientManagerNetwork_Ungroup
               (MVWorldObjectClientManagerNetwork *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<int>__Enqueue_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields)._.worldObjects;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,id,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return 0;
    }
    pQVar2 = (this->fields)._.pendingUngroupQueue;
    if (pQVar2 != (Queue_1_System_Int32_ *)0x0) {
      FUN_?(pQVar2,id);
      return 1;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* MVWorldObjectClientManagerNetwork() */

void Assembly-CSharp.dll::MVWorldObjectClientManagerNetwork::MVWorldObjectClientManagerNetwork__ctor
               (MVWorldObjectClientManagerNetwork *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MoveableController);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClientManager__WorldObjectMapping);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields)._.worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)pDVar1;
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
  pQVar7 = (Queue_1_System_Int32_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Queue<int>);
  FUN_?(pQVar7);
  bVar2 = iRam_? != 0;
  (this->fields)._.pendingUngroupQueue = pQVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.pendingUngroupQueue >> 0xc);
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
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Action<System::Object,_WorldObjectDestroyedEventArgs>_>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields)._.woDestroyedEventSubscribers =
       (Dictionary_2_System_Int32_System_Action_2_Object_WorldObjectDestroyedEventArgs_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.woDestroyedEventSubscribers >> 0xc);
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
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Type,_System::Action<System::Object,_WorldObjectCreatedEventArgs>_>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields)._.woCreatedEventSubscribers =
       (Dictionary_2_System_Type_System_Action_2_Object_WorldObjectCreatedEventArgs_ *)this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.woCreatedEventSubscribers >> 0xc);
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
  (this->fields)._.rootGroupId = -1;
  this_01 = (MoveableController *)FUN_?(TypeInfo__MoveableController);
  MoveableController::MoveableController__ctor(this_01,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._._MoveableController_k__BackingField = this_01;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._._MoveableController_k__BackingField >> 0xc);
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
  this_02 = (MVWorldObjectClientManager_WorldObjectMapping *)
            FUN_?(TypeInfo__MVWorldObjectClientManager__WorldObjectMapping);
  MVWorldObjectClientManager+WorldObjectMapping::MVWorldObjectClientManager_WorldObjectMapping__ctor
            (this_02,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._.worldObjectMapping = this_02;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.worldObjectMapping >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&void_MethodInfo__Newtonsoft__Json__Utilities__AotHelper__EnsureList<int>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Newtonsoft__Json__Utilities__AotHelper);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__RangeValidator__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__AntiCheat__ApplicationDesc__RegistryKey);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  plVar8 = (longlong *)FUN_?(TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
  if (plVar8 == (longlong *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FUN_?(*plVar8 + 0x20);
  if (*(int *)&(TypeInfo__Newtonsoft__Json__Utilities__AotHelper->_1).field_0x1c == 0) {
    FUN_?();
  }
  Newtonsoft.Json.dll::Newtonsoft::Json::Utilities::AotHelper::AotHelper_EnsureList_1
            (void_MethodInfo__Newtonsoft__Json__Utilities__AotHelper__EnsureList<int>__);
  pIVar10 = (Il2CppClass *)TypeInfo__MV__WorldObject__AntiCheat__ApplicationDesc__RegistryKey;
  FUN_?();
  if (((((ApplicationDesc_RegistryKey__Class *)pIVar10)->_0).generic_class !=
       (Il2CppGenericClass *)0x0) &&
     (((((ApplicationDesc_RegistryKey__Class *)pIVar10)->_1).field_0x6d & 8) != 0)) {
    pIVar10 = (((ApplicationDesc_RegistryKey__Class *)pIVar10)->_0).element_class;
  }
  uVar11 = pIVar10->instance_size;
  if ((pIVar10->field_0x135 & 0x20) == 0) {
    puVar12 = (undefined8 *)FUN_?(uVar11);
    *puVar12 = pIVar10;
    puVar13 = puVar12 + 2;
    puVar12[1] = 0;
    if (pIVar10->instance_size < 0x80) {
      puVar14 = (undefined8 *)((longlong)puVar12 + (ulonglong)pIVar10->instance_size);
      uVar5 = (ulonglong)((longlong)puVar14 + (7 - (longlong)puVar13)) >> 3;
      if (puVar14 < puVar13) {
        uVar5 = 0;
      }
      if (uVar5 != 0) {
        FUN_?(puVar13,0,uVar5 << 3);
      }
    }
    else {
      FUN_?(puVar13,0,(ulonglong)pIVar10->instance_size - 0x10);
    }
  }
  else {
    if (pIVar10->gc_desc != (void *)0x0) {
      puVar12 = (undefined8 *)FUN_?(uVar11,pIVar10);
      goto code_?;
    }
    puVar12 = (undefined8 *)FUN_?(uVar11,1);
    *puVar12 = pIVar10;
  }
  LOCK();
  lRam_? = lRam_? + 1;
  UNLOCK();
code_?:
  if ((pIVar10->field_0x136 & 2) != 0) {
    FUN_?(puVar12,FUN_?);
  }
  if ((bRam_? & 0x80) != 0) {
    FUN_?(puVar12,pIVar10);
  }
  FUN_?(pIVar10);
  return;
}

