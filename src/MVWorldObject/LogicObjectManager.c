
/* Void AddLogicObjectToUpdate(Int32, IInputSignalReceiver) */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_AddLogicObjectToUpdate
               (LogicObjectManager *this,int32_t worldObjectID,
               IInputSignalReceiver *logicWorldObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).logicWorldObjects;
  if (this_00 != (Dictionary_2_System_Int32_IInputSignalReceiver_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,worldObjectID,
               (Object *)logicWorldObject,
               MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Add_int__IInputSignalReceiver_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ClearDebugIds() */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ClearDebugIds
               (LogicObjectManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)(this->fields).updatedIds;
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3__Clear
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void DebugAddId(Int32) */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_DebugAddId
               (LogicObjectManager *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)(this->fields).updatedIds;
  if (this_00 != (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)0x0) {
    bVar1 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      (this_00,id,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar1 != 0) goto code_?;
    this_01 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)(this->fields).updatedIds;
    if (this_01 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
      UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                (this_01,(UnityWebRequest *)id,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      return;
    }
  }
  func_?();
code_?:
  this_02 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_02,StringLiteral_Id_already_evaluated__This_is_a_,(MethodInfo *)0x0);
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean DoesLinkExist(MVWorldObject, Int32) */

bool MVWorldObject.dll::LogicObjectManager::LogicObjectManager_DoesLinkExist
               (MVWorldObject *outputWo,int32_t inputWOID,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  bStack_6 = 0;
  uStack_7 = 0;
  iStack_8 = 0;
  LStack_9.klass = (List_1_UnityEngine_Color32___Class *)0x0;
  LStack_9.monitor = (MonitorData *)0x0;
  LStack_9.fields._items = (Color32__Array *)0x0;
  LStack_9.fields._size = 0;
  func_?();
  uStack_10 = 0xffffffff;
  puStack_11 = &stack0xffffffac;
  puStack_4 = &stack0xffffffac;
  if (outputWo != (MVWorldObject *)0x0) {
    puStack_11 = &stack0xffffffac;
    puStack_4 = &stack0xffffffac;
    this = (List_1_UnityEngine_Color32_ *)
           System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
           Int32]::
           Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                     ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)outputWo,
                      (MethodInfo *)0x0);
    if (this != (List_1_UnityEngine_Color32_ *)0x0) {
      pLVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_13,this,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                         );
      LStack_9.klass = (List_1_UnityEngine_Color32___Class *)pLVar12->l;
      LStack_9.monitor = (MonitorData *)pLVar12->next;
      LStack_9.fields._items = (Color32__Array *)pLVar12->ver;
      LStack_9.fields._size = (pLVar12->current).rgba;
      uStack_1 = 0;
      do {
        auStack_13._4_4_ =
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
        ;
        auStack_13._0_4_ = &LStack_9;
        cVar14 = func_?();
        if (cVar14 == '\0') {
          iVar15 = 0x3c;
          goto code_?;
        }
        pOVar16 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&LStack_9,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                           );
        if (pOVar16 == (Object *)0x0) goto code_?;
      } while (pOVar16[2].klass != (Object__Class *)inputWOID);
      bStack_6 = 1;
      iVar15 = 0x3e;
code_?:
      uStack_1 = 0xffffffff;
      auStack_13._4_4_ =
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
      ;
      auStack_13._0_4_ = &LStack_9;
      func_?();
      if (iStack_8 == 0) {
        if (iVar15 != 0x3e) {
          *unaff_FS_OFFSET = uStack_3;
          return 0;
        }
        *unaff_FS_OFFSET = uStack_3;
        return bStack_6;
      }
      goto code_?;
    }
code_?:
    auStack_13._4_4_ = 0;
  }
  auStack_13._0_4_ = &UNK_?;
  func_?();
code_?:
  auStack_13._4_4_ = 0;
  auStack_13._0_4_ = (List_1_UnityEngine_Color32_ *)0x0;
  func_?();
  pcVar17 = (code *)swi(3);
  bVar18 = (*pcVar17)();
  return bVar18;
}


/* Void RemoveLogicObjectFromUpdate(Int32) */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_RemoveLogicObjectFromUpdate
               (LogicObjectManager *this,int32_t worldObjectID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).logicWorldObjects;
  if (this_00 != (Dictionary_2_System_Int32_IInputSignalReceiver_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,worldObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__ContainsKey_int_
                      );
    if (bVar1 != 0) {
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).logicWorldObjects;
      if (this_01 ==
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                (this_01,worldObjectID,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Remove_int_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Int32 ResetChunk(Int32, IWorldObjectManager) */

int32_t MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetChunk
                  (int32_t woID,IWorldObjectManager *worldObjectManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  LogicObjectManager_ResetNode
            (woID,(HashSet_1_System_Int32_ *)this,worldObjectManager,(MethodInfo *)0x0);
  if (this != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
    JVar1 = System.Core.dll::System::Linq::
            Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
            JsonSchemaType]::
            Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                      ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                        *)this,MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    return JVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Void ResetNode(Int32, HashSet`1[System.Int32], IWorldObjectManager) */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetNode
               (int32_t woID,HashSet_1_System_Int32_ *resetNodes,
               IWorldObjectManager *worldObjectManager,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff88;
  puVar5 = &stack0xffffff88;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  _Stack_4c.genericMethod = (Il2CppGenericMethod *)0x0;
  _Stack_48.genericMethod = (Il2CppGenericMethod *)0x0;
  _Stack_44.genericMethod = (Il2CppGenericMethod *)0x0;
  _Stack_40.genericMethod = (Il2CppGenericMethod *)0x0;
  auStack_7._16_4_ = (Il2CppClass *)0x0;
  pIStack_8 = (Il2CppType *)0x0;
  ppIStack_9 = (Il2CppType **)0x0;
  _Stack_50.rgctx_data = (Il2CppRGCTXData *)0x0;
  func_?();
  uStack_10 = 0xffffffff;
  piStack_11 = (int *)&stack0xffffff88;
  puStack_4 = &stack0xffffff88;
  if (resetNodes != (HashSet_1_System_Int32_ *)0x0) {
    piStack_11 = (int *)&stack0xffffff88;
    puStack_4 = &stack0xffffff88;
    bVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[GoogleMobileAds::Api::
            NativeAdType]::HashSet_1_GoogleMobileAds_Api_NativeAdType__Contains
                      ((HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)resetNodes,woID,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
    if (bVar12 != 0) {
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    unaff_EDI = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                 *)woID;
    if (worldObjectManager != (IWorldObjectManager *)0x0) {
      unaff_EDI = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                   *)func_?(0);
      pIStack_13 = TypeInfo__ILogicWorldObject;
      pEStack_14 = unaff_EDI;
      if (unaff_EDI !=
          (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_ *)
          0x0) {
        iVar15 = func_?(unaff_EDI,TypeInfo__ILogicWorldObject);
        if (iVar15 == 0) goto code_?;
        pIStack_13 = TypeInfo__ILogicWorldObject;
        iVar15 = func_?(unaff_EDI,TypeInfo__ILogicWorldObject);
        if (iVar15 == 0) goto code_?;
        piStack_16 = (int *)func_?(0,TypeInfo__ILogicWorldObject,iVar15);
        if (piStack_16 != (int *)0x0) {
          iStack_17 = *piStack_16;
          uVar18 = 0;
          uStack_19 = 0;
          uVar20 = *(ushort *)(iStack_17 + 0xb6);
          pIStack_13 = (ILogicWorldObject__Class *)(uint)uVar20;
          if (uVar20 != 0) {
            do {
              unaff_EDI = pEStack_14;
              if (*(IInputSignalReceiver__Class **)(*(int *)(iStack_17 + 0x58) + (uint)uVar18 * 8)
                  == TypeInfo__IInputSignalReceiver) {
                puVar21 = (undefined4 *)
                         (iStack_17 +
                         (*(int *)(*(int *)(iStack_17 + 0x58) + 4 + (uint)uVar18 * 8) + 0x1b) * 8);
                goto code_?;
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 < uVar20);
          }
          puVar21 = (undefined4 *)func_?(piStack_16,TypeInfo__IInputSignalReceiver,3);
code_?:
          (*(code *)*puVar21)(piStack_16,puVar21[1]);
          (*(code *)unaff_EDI->klass[1]._0.klass)(unaff_EDI,unaff_EDI->klass[1]._0.fields);
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
          UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                    ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)resetNodes,
                     (UnityWebRequest *)woID,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
          pLVar22 = (List_1_UnityEngine_Color32_ *)
                   System.Core.dll::System::Linq::
                   Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                   JsonSchemaType]::
                   Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                             (unaff_EDI,(MethodInfo *)0x0);
          if (pLVar22 != (List_1_UnityEngine_Color32_ *)0x0) {
            method_00 = (MethodInfo *)auStack_7;
            p_Var9 = (_union_155 *)
                     mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                     List_1_UnityEngine_Color32__GetEnumerator
                               ((List_1_T_Enumerator_UnityEngine_Color32_ *)method_00,pLVar22,
                                MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                               );
            _Stack_4c = *p_Var9;
            _Stack_48 = p_Var9[1];
            _Stack_44 = p_Var9[2];
            _Stack_40 = p_Var9[3];
            uStack_1 = 0;
            while( true ) {
              auStack_7._0_4_ =
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
              ;
              cVar23 = func_?();
              if (cVar23 == '\0') break;
              pOVar24 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                   &_Stack_4c,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                                  );
              if (pOVar24 == (Object *)0x0) goto code_?;
              method_00 = (MethodInfo *)worldObjectManager;
              LogicObjectManager_ResetNode
                        ((int32_t)pOVar24[1].monitor,resetNodes,worldObjectManager,(MethodInfo *)0x0
                        );
            }
            iVar15 = 0;
            *piStack_11 = 0x6c;
            uStack_1 = 0xffffffff;
            func_?(&_Stack_4c,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                           );
            if (iStack_6 == 0) {
              iVar25 = iVar15;
              if (*piStack_11 == 0x6c) {
                iVar25 = -1;
              }
              if ((unaff_EDI ==
                   (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                    *)0x0) ||
                 (pLVar22 = (List_1_UnityEngine_Color32_ *)
                           System.Core.dll::System::Linq::
                           Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                           Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                     ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                                      unaff_EDI,method_00),
                 pLVar22 == (List_1_UnityEngine_Color32_ *)0x0)) goto code_?;
              pLVar26 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                        List_1_UnityEngine_Color32__GetEnumerator
                                  ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_7,pLVar22,
                                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                                  );
              auStack_7._16_4_ = pLVar26->l;
              pIStack_8 = (Il2CppType *)pLVar26->next;
              ppIStack_9 = (Il2CppType **)pLVar26->ver;
              _Stack_50 = (_union_154)(pLVar26->current).rgba;
              uStack_1 = 2;
              while( true ) {
                auStack_7._0_4_ =
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                ;
                cVar23 = func_?();
                iVar15 = iStack_6;
                unaff_EDI = (Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                             *)worldObjectManager;
                if (cVar23 == '\0') break;
                pOVar24 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                     (auStack_7 + 0x10),
                                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                                    );
                if (pOVar24 == (Object *)0x0) goto code_?;
                LogicObjectManager_ResetNode
                          ((int32_t)pOVar24[2].klass,resetNodes,worldObjectManager,(MethodInfo *)0x0
                          );
              }
              piStack_11[iVar25 + 1] = 0xa9;
              uStack_1 = 0xffffffff;
              func_?(auStack_7 + 0x10,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                             );
              if (iVar15 == 0) goto code_?;
            }
            else {
              func_?(iStack_6,0,0);
            }
            func_?(iVar15,0,0);
          }
        }
      }
    }
  }
code_?:
  func_?(0);
code_?:
  func_?(unaff_EDI,pIStack_13);
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* String ToString() */

String * MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ToString
                   (LogicObjectManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).logicWorldObjects;
  if (this_00 != (Dictionary_2_System_Int32_IInputSignalReceiver_ *)0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
              Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                        ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__get_Values__
                        );
    if (this_01 !=
        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0) {
      this = (LogicObjectManager *)
             mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                       (this_01,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_IInputSignalReceiver>__get_Count__
                       );
      arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        this = (LogicObjectManager *)TypeInfo__System__String;
        func_?();
      }
      this = (LogicObjectManager *)0x0;
      pSVar1 = mscorlib.dll::System::String::String_Format
                         (StringLiteral_logicWorldObjects_Count__0__,arg0,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* Void Update() */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_Update
               (LogicObjectManager *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  DStack_4.fields.generation = (int32_t)&stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = (undefined1 *)DStack_4.fields.generation;
  }
  DStack_4.fields.generation = (int32_t)puVar5;
  DStack_4.fields.keySlots = (WinningConditionType__Enum__Array *)0x0;
  DStack_4.klass = (Dictionary_2_WinningConditionType_System_Object___Class *)0x0;
  DStack_4.monitor = (MonitorData *)0x0;
  DStack_4.fields.table = (Int32__Array *)0x0;
  DStack_4.fields.linkSlots = (Link__Array *)0x0;
  func_?();
  this_00 = (this->fields).logicWorldObjects;
  DStack_4.fields.touchedSlots = (int32_t)&stack0xffffff9c;
  DStack_4.fields.generation = (int32_t)&stack0xffffff9c;
  if ((this_00 != (Dictionary_2_System_Int32_IInputSignalReceiver_ *)0x0) &&
     (DStack_4.fields.touchedSlots = (int32_t)&stack0xffffff9c,
     DStack_4.fields.generation = (int32_t)&stack0xffffff9c,
     this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                         ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__get_Values__
                         ),
     this_02 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
              Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                        (&DStack_7,this_02,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_IInputSignalReceiver>__GetEnumerator__
                        );
    DStack_4.klass =
         (Dictionary_2_WinningConditionType_System_Object___Class *)
         (pDVar6->host_enumerator).dictionary;
    DStack_4.monitor = (MonitorData *)(pDVar6->host_enumerator).next;
    DStack_4.fields.table = (Int32__Array *)(pDVar6->host_enumerator).stamp;
    DStack_4.fields.linkSlots = (Link__Array *)(pDVar6->host_enumerator).current.key;
    DStack_4.fields.keySlots =
         (WinningConditionType__Enum__Array *)(pDVar6->host_enumerator).current.value;
    uStack_1 = 0;
code_?:
    DStack_7.host_enumerator.next =
         (int32_t)
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__MoveNext__
    ;
    DStack_7.host_enumerator.dictionary = &DStack_4;
    cVar8 = func_?();
    if (cVar8 != '\0') {
      DStack_7.host_enumerator.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__get_Current__
      ;
      DStack_7.host_enumerator.dictionary = &DStack_4;
      pSVar9 = (SerializationInfo *)func_?();
      unaff_ESI = (LogicObjectManager *)0x0;
      DStack_4.fields.serialization_info = pSVar9;
      if (pSVar9 == (SerializationInfo *)0x0) goto code_?;
      DStack_4.fields.threshold = (int32_t)pSVar9->klass;
      uVar10 = 0;
      DStack_4.fields.hcp = (IEqualityComparer_1_WinningConditionType_ *)0x0;
      uVar11._0_1_ = (((SerializationInfo__Class *)DStack_4.fields.threshold)->_1).rank;
      uVar11._1_1_ = (((SerializationInfo__Class *)DStack_4.fields.threshold)->_1).minimumAlignment;
      DStack_4.fields.count = (int32_t)uVar11;
      if (uVar11 != 0) {
        do {
          if (((SerializationInfo__Class *)DStack_4.fields.threshold)->interfaceOffsets[uVar10].
              interfaceType == (Il2CppClass *)TypeInfo__IInputSignalReceiver) {
            ppMVar12 = &(&(pSVar9->klass->vtable).GetHashCode)
                        [pSVar9->klass->interfaceOffsets[uVar10].offset].method;
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      ppMVar12 = (MethodInfo **)func_?(pSVar9,TypeInfo__IInputSignalReceiver,2);
code_?:
      uVar13 = (*(code *)*ppMVar12)(pSVar9,ppMVar12[1]);
      DStack_4.fields.threshold = (int32_t)pSVar9->klass;
      DStack_4.fields.emptySlot = CONCAT31(DStack_4.fields.emptySlot._1_3_,uVar13);
      uVar11 = 0;
      uVar10._0_1_ = (((SerializationInfo__Class *)DStack_4.fields.threshold)->_1).rank;
      uVar10._1_1_ = (((SerializationInfo__Class *)DStack_4.fields.threshold)->_1).minimumAlignment;
      DStack_4.fields.hcp = (IEqualityComparer_1_WinningConditionType_ *)(uint)uVar10;
      DStack_4.fields.count = 0;
      if (uVar10 != 0) {
        do {
          if (((SerializationInfo__Class *)DStack_4.fields.threshold)->interfaceOffsets[uVar11].
              interfaceType == (Il2CppClass *)TypeInfo__IInputSignalReceiver) {
            pSVar14 = (DStack_4.fields.serialization_info)->klass;
            iVar15 = pSVar14->interfaceOffsets[uVar11].offset;
            (*(code *)(&(pSVar14->vtable).Equals)[iVar15].method)
                      (DStack_4.fields.serialization_info,DStack_4.fields.emptySlot,
                       (&(pSVar14->vtable).Finalize)[iVar15].methodPtr);
            goto code_?;
          }
          uVar11 = uVar11 + 1;
          pSVar9 = DStack_4.fields.serialization_info;
        } while (uVar11 < uVar10);
      }
      puVar16 = (undefined4 *)func_?(pSVar9,TypeInfo__IInputSignalReceiver,0);
      (*(code *)*puVar16)(pSVar9,DStack_4.fields.emptySlot,puVar16[1]);
      goto code_?;
    }
    *(undefined4 *)DStack_4.fields.touchedSlots = 0x40;
    uStack_1 = 0xffffffff;
    DStack_7.host_enumerator.next =
         (int32_t)
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_IInputSignalReceiver>__Dispose__
    ;
    DStack_7.host_enumerator.dictionary = &DStack_4;
    func_?();
    piVar17 = &(this->fields)._TimeStamp_k__BackingField;
    *piVar17 = *piVar17 + 100;
    if ((this->fields).trackLoops != 0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      this_01 = (HashSet_1_UnityEngine_Vector3_ *)(this->fields).updatedIds;
      unaff_ESI = this;
      if (this_01 == (HashSet_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
      HashSet_1_UnityEngine_Vector3__Clear
                (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    }
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  func_?(0);
  func_?(unaff_ESI,0,0);
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* LogicObjectManager+ValidateLinkStatus ValidateLink(Int32, Int32, IWorldObjectManager,
   LogicObjectManager+ReportSeverity ByRef) */

LogicObjectManager_ValidateLinkStatus__Enum
MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ValidateLink
          (int32_t linkOutputWoId,int32_t linkInputWoId,IWorldObjectManager *worldObjectManager,
          LogicObjectManager_ReportSeverity__Enum *reportSeverity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVWorldObject *)0x0;
  iVar2 = 0;
  bStack_3 = 0;
  if (linkInputWoId < 1) {
    *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
    return LogicObjectManager_ValidateLinkStatus__Enum_InputObjectIdIsZeroOrLess;
  }
  if (linkOutputWoId < 1) {
    *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
    return LogicObjectManager_ValidateLinkStatus__Enum_OutputObjectIdIsZeroOrLess;
  }
  if (worldObjectManager != (IWorldObjectManager *)0x0) {
    cVar4 = func_?(1,TypeInfo__MV__WorldObject__IWorldObjectManager,worldObjectManager,
                            linkOutputWoId,&pMStack_1);
    cVar5 = func_?(1,TypeInfo__MV__WorldObject__IWorldObjectManager,worldObjectManager,
                            linkInputWoId,&stack0xfffffff0);
    if (cVar4 == '\0') {
      *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
      if (cVar5 != '\0') {
        return LogicObjectManager_ValidateLinkStatus__Enum_OutputObjectIsNull;
      }
      return LogicObjectManager_ValidateLinkStatus__Enum_BothInputAndOutputIsNull;
    }
    if (cVar5 == '\0') {
      *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
      return LogicObjectManager_ValidateLinkStatus__Enum_InputObjectIsNull;
    }
    if (iVar2 != 0) {
      cVar4 = func_?(0xf,iVar2);
      if (cVar4 == '\0') {
        *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
        return LogicObjectManager_ValidateLinkStatus__Enum_InputObjectDoesNotHaveConnector;
      }
      if (pMStack_1 != (MVWorldObject *)0x0) {
        cVar4 = func_?(0xe,pMStack_1);
        if (cVar4 == '\0') {
          *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
          return LogicObjectManager_ValidateLinkStatus__Enum_OutputObjectDoesNotHaveConnector;
        }
        bVar6 = LogicObjectManager_DoesLinkExist(pMStack_1,linkInputWoId,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          LogicObjectManager_ValidateLink_1
                    (linkOutputWoId,linkInputWoId,worldObjectManager,&bStack_3,(MethodInfo *)0x0);
          if (bStack_3 == 0) {
            *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
            return LogicObjectManager_ValidateLinkStatus__Enum_Ok;
          }
          *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
          return LogicObjectManager_ValidateLinkStatus__Enum_LoopDetected;
        }
        *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
        return LogicObjectManager_ValidateLinkStatus__Enum_LinkAlreadyExists;
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  LVar8 = (*pcVar7)();
  return LVar8;
}


/* Void ValidateLink(Int32, Int32, IWorldObjectManager, Boolean ByRef) */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ValidateLink_1
               (int32_t woIdFrom,int32_t woIdTo,IWorldObjectManager *worldObjectManager,
               bool *loopDetected,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb4;
  puVar5 = &stack0xffffffb4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  LStack_7.klass = (List_1_UnityEngine_Color32___Class *)0x0;
  LStack_7.monitor = (MonitorData *)0x0;
  LStack_7.fields._items = (Color32__Array *)0x0;
  LStack_7.fields._size = 0;
  func_?();
  if (woIdFrom != woIdTo) {
    puStack_8 = (undefined4 *)&stack0xffffffb4;
    puStack_4 = &stack0xffffffb4;
    if (((worldObjectManager != (IWorldObjectManager *)0x0) &&
        (puStack_8 = (undefined4 *)&stack0xffffffb4, puStack_4 = &stack0xffffffb4,
        this = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
               func_?(0,TypeInfo__MV__WorldObject__IWorldObjectManager,worldObjectManager,
                               woIdTo),
        this != (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0)) &&
       (this_00 = (List_1_UnityEngine_Color32_ *)
                  System.Core.dll::System::Linq::
                  Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                            (this,(MethodInfo *)0x0), this_00 != (List_1_UnityEngine_Color32_ *)0x0)
       ) {
      pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
               List_1_UnityEngine_Color32__GetEnumerator
                         ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_10,this_00,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::Link>__GetEnumerator__
                         );
      LStack_7.klass = (List_1_UnityEngine_Color32___Class *)pLVar9->l;
      LStack_7.monitor = (MonitorData *)pLVar9->next;
      LStack_7.fields._items = (Color32__Array *)pLVar9->ver;
      LStack_7.fields._size = (pLVar9->current).rgba;
      uStack_1 = 0;
      do {
        auStack_10._4_4_ =
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
        ;
        auStack_10._0_4_ = &LStack_7;
        cVar11 = func_?();
        if (cVar11 == '\0') break;
        pOVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&LStack_7,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                           );
        if (pOVar12 == (Object *)0x0) goto code_?;
        LogicObjectManager_ValidateLink_1
                  (woIdFrom,(int32_t)pOVar12[2].klass,worldObjectManager,loopDetected,
                   (MethodInfo *)0x0);
      } while (*loopDetected == 0);
      *puStack_8 = 0x53;
      uStack_1 = 0xffffffff;
      auStack_10._4_4_ =
           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
      ;
      auStack_10._0_4_ = &LStack_7;
      func_?();
      if (iStack_6 == 0) goto code_?;
      auStack_10._4_4_ = (MethodInfo *)0x0;
      auStack_10._0_4_ = (List_1_UnityEngine_Color32_ *)0x0;
      func_?();
    }
code_?:
    func_?(0);
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  *loopDetected = 1;
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* LogicObjectManager+ValidateObjectLinkStatus ValidateObjectLink(ObjectLink, IWorldObjectManager,
   LogicObjectManager+ReportSeverity ByRef) */

LogicObjectManager_ValidateObjectLinkStatus__Enum
MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ValidateObjectLink
          (ObjectLink *objectLink,IWorldObjectManager *worldObjectManager,
          LogicObjectManager_ReportSeverity__Enum *reportSeverity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVWorldObject *)0x0;
  pMStack_2 = (MVWorldObject *)0x0;
  if (objectLink != (ObjectLink *)0x0) {
    iVar3 = (objectLink->fields).objectConnectorWOID;
    if (iVar3 < 1) {
      *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
      return LogicObjectManager_ValidateObjectLinkStatus__Enum_ObjectConnectorWOIDIsZeroOrLess;
    }
    if ((objectLink->fields).objectWOID < 1) {
      *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
      return LogicObjectManager_ValidateObjectLinkStatus__Enum_ObjectWOIDIsZeroOrLess;
    }
    if (worldObjectManager != (IWorldObjectManager *)0x0) {
      cVar4 = func_?(1,TypeInfo__MV__WorldObject__IWorldObjectManager,worldObjectManager,
                              iVar3,&pMStack_1);
      cVar5 = func_?(1,TypeInfo__MV__WorldObject__IWorldObjectManager,worldObjectManager,
                              (objectLink->fields).objectWOID,&pMStack_2);
      if (cVar4 == '\0') {
        *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
        if (cVar5 != '\0') {
          return LogicObjectManager_ValidateObjectLinkStatus__Enum_ObjectConnector;
        }
        return 
        LogicObjectManager_ValidateObjectLinkStatus__Enum_BothObjectConnectorAndObjectWOIsNull;
      }
      if (cVar5 == '\0') {
        *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
        return LogicObjectManager_ValidateObjectLinkStatus__Enum_ObjectWO;
      }
      if (pMStack_1 != (MVWorldObject *)0x0) {
        cVar4 = func_?(0x10,pMStack_1);
        if (cVar4 == '\0') {
          *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Error;
          return 
          LogicObjectManager_ValidateObjectLinkStatus__Enum_ObjectConnectorHasNoObjectConnector;
        }
        if (pMStack_1 != (MVWorldObject *)0x0) {
          bVar6 = MV::WorldObject::MVWorldObject::MVWorldObject_ContainObjectLink
                            (pMStack_1,objectLink,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
            return 
            LogicObjectManager_ValidateObjectLinkStatus__Enum_ObjectConnectorContainsLinkAlready;
          }
          if (pMStack_2 != (MVWorldObject *)0x0) {
            bVar6 = MV::WorldObject::MVWorldObject::MVWorldObject_ContainObjectLink
                              (pMStack_2,objectLink,(MethodInfo *)0x0);
            *reportSeverity = LogicObjectManager_ReportSeverity__Enum_Info;
            return (bVar6 == 0) +
                   LogicObjectManager_ValidateObjectLinkStatus__Enum_ObjectWOContainsLinkAlready;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  LVar8 = (*pcVar7)();
  return LVar8;
}


/* LogicObjectManager(Int32, Boolean) */

void MVWorldObject.dll::LogicObjectManager::LogicObjectManager__ctor
               (LogicObjectManager *this,int32_t timeStamp,bool trackLoops,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_IInputSignalReceiver_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_IInputSignalReceiver>__Dictionary__
            );
  (this->fields).logicWorldObjects = this_00;
  method_00 = TypeInfo__System__Collections__Generic__HashSet<int>;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields).updatedIds = (HashSet_1_System_Int32_ *)this_01;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  (this->fields).trackLoops = trackLoops;
  (this->fields)._TimeStamp_k__BackingField = timeStamp;
  return;
}

