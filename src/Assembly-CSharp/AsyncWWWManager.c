
/* Void AddRequestsToActiveRequests(Queue`1[AsyncWebRequest], Int32) */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_AddRequestsToActiveRequests
               (Queue_1_AsyncWebRequest_ *requestQueue,int32_t maxRequestForQueue,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  while( true ) {
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__AsyncWWWManager);
    }
    pHVar1 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
    if (pHVar1 == (HashSet_1_AsyncWebRequest_ *)0x0) break;
    JVar2 = System.Core.dll::System::Linq::
            Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
            JsonSchemaType]::
            Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                      ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                        *)pHVar1,
                       MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__get_Count__
                      );
    if (maxRequestForQueue <= (int)JVar2) {
      return;
    }
    if (requestQueue == (Queue_1_AsyncWebRequest_ *)0x0) break;
    pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)requestQueue,
                        MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__get_Count__
                       );
    if ((int)pIVar3 < 1) {
      return;
    }
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__AsyncWWWManager);
    }
    pHVar1 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
    item = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
           Queue_1_SmoothPhysicsMovement_Package__Dequeue
                     ((Queue_1_SmoothPhysicsMovement_Package_ *)requestQueue,
                      MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Dequeue__);
    if (pHVar1 == (HashSet_1_AsyncWebRequest_ *)0x0) break;
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
    UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
              ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)pHVar1,(UnityWebRequest *)item,
               MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Add_AsyncWebRequest_
              );
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void BackgroundUpdate() */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_BackgroundUpdate(MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_9 = 0xffffffff;
  piStack_10 = (int *)&stack0xffffff90;
  puStack_4 = &stack0xffffff90;
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (piStack_10 = (int *)&stack0xffffff90, puStack_4 = &stack0xffffff90,
     (TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    piStack_10 = (int *)&stack0xffffff90;
    puStack_4 = &stack0xffffff90;
    func_?(TypeInfo__AsyncWWWManager);
  }
  pDVar11 = TypeInfo__AsyncWWWManager->static_fields->requests;
  if (pDVar11 == (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
code_?:
    iVar12 = func_?(0);
    pAVar13 = unaff_ESI;
  }
  else {
    pQVar14 = (Queue_1_AsyncWebRequest_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[WWWRequestPriority,System::
             Object]::Dictionary_2_WWWRequestPriority_System_Object__get_Item
                       ((Dictionary_2_WWWRequestPriority_System_Object_ *)pDVar11,
                        WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,
                        MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                       );
    AsyncWWWManager_AddRequestsToActiveRequests(pQVar14,0x7fffffff,(MethodInfo *)0x0);
    pDVar11 = TypeInfo__AsyncWWWManager->static_fields->requests;
    if (pDVar11 == (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)
    goto code_?;
    pQVar14 = (Queue_1_AsyncWebRequest_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[WWWRequestPriority,System::
             Object]::Dictionary_2_WWWRequestPriority_System_Object__get_Item
                       ((Dictionary_2_WWWRequestPriority_System_Object_ *)pDVar11,
                        WWWRequestPriority__Enum_ExecuteWhileSyncronizing,
                        MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                       );
    AsyncWWWManager_AddRequestsToActiveRequests(pQVar14,4,(MethodInfo *)0x0);
    this = TypeInfo__AsyncWWWManager->static_fields->tempHashSet;
    uStack_1 = 0;
    pAStack_15 = this;
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      CStack_7.klass =
           (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
           TypeInfo__AsyncWWWManager;
      CStack_8.fields.syncRoot = (Object *)&UNK_?;
      func_?();
    }
    this_00 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
    if (this_00 == (HashSet_1_AsyncWebRequest_ *)0x0) goto code_?;
    pHVar16 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                        &stack0xffffff9c,
                        (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)this_00,
                        MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                       );
    CStack_7.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar16->hashset;
    CStack_7.monitor = (MonitorData *)pHVar16->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar16->stamp;
    CStack_7.fields.syncRoot = (Object *)pHVar16->current;
    uStack_1 = CONCAT31(uStack_1._1_3_,1);
    while (cVar17 = func_?(&CStack_7,
                                   MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                                  ), cVar17 != '\0') {
      unaff_ESI = (AsyncWebRequest *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_7,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                            );
      if (unaff_ESI == (AsyncWebRequest *)0x0) goto code_?;
      if (((unaff_ESI->fields).requestPriority != 0) &&
         (bVar18 = AsyncWebRequest::AsyncWebRequest_Update(unaff_ESI,(MethodInfo *)0x0), bVar18 != 0))
      {
        if (this == (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0)
        goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
        UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                  ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this,
                   (UnityWebRequest *)unaff_ESI,
                   MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Add_AsyncWebRequest_
                  );
      }
    }
    unaff_ESI = (AsyncWebRequest *)0x0;
    uStack_9 = 0;
    uStack_1 = uStack_1 & 0xffffff00;
    *piStack_10 = 0x81;
    func_?(&CStack_7,
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                   );
    iVar12 = iStack_6;
    pAVar13 = unaff_ESI;
    if (iStack_6 == 0) {
      if (*piStack_10 == 0x81) {
        unaff_ESI = (AsyncWebRequest *)0xffffffff;
        uStack_9 = 0xffffffff;
      }
      if (this != (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0) {
        pHVar16 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData
                 ::FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                           ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                            &stack0xffffff9c,
                            (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)this,
                            MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                           );
        CStack_8.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar16->hashset;
        CStack_8.monitor = (MonitorData *)pHVar16->next;
        CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar16->stamp
        ;
        CStack_8.fields.syncRoot = (Object *)pHVar16->current;
        uStack_1 = CONCAT31(uStack_1._1_3_,3);
        while (cVar17 = func_?(), cVar17 != '\0') {
          pMStack_19 = (MVRotator *)
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 (&CStack_8,
                                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                                 );
          if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
            func_?(TypeInfo__AsyncWWWManager);
          }
          this_01 = (HashSet_1_MVRotator_ *)TypeInfo__AsyncWWWManager->static_fields->activeRequests
          ;
          if (this_01 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[MVRotator]::
          HashSet_1_MVRotator__Remove
                    (this_01,pMStack_19,
                     MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Remove_AsyncWebRequest_
                    );
        }
        pAVar13 = (AsyncWebRequest *)((int)&unaff_ESI->klass + 1);
        uStack_1 = uStack_1 & 0xffffff00;
        piStack_10[(int)pAVar13] = 0xc1;
        func_?(&CStack_8,
                        MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                       );
        iVar12 = iStack_6;
        if (iStack_6 == 0) {
          if (((pAVar13 != (AsyncWebRequest *)0xffffffff) && (piStack_10[(int)pAVar13] == 0xc1)) &&
             (-1 < (int)pAVar13)) {
            pAVar13 = unaff_ESI;
          }
          piStack_10[(int)((int)&pAVar13->klass + 1)] = 0xd3;
          uStack_1 = 0xffffffff;
          if (this != (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0) {
            func_?(0,TypeInfo__System__IDisposable,this);
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  iVar12 = func_?(iVar12,0,0);
code_?:
  func_?(iVar12,0,0);
  func_?(pAVar13,0,0);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void PostResetCleanup() */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_PostResetCleanup(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  if (TypeInfo__AsyncWWWManager->static_fields->quitCallback != (Action *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_AsyncWWWManager_quitCallback_is_,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__AsyncWWWManager->static_fields->quitCallback = (Action *)0x0;
  }
  return;
}


/* Void Quit() */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_Quit(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  if (TypeInfo__AsyncWWWManager->static_fields->quitCallback == (Action *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  this = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
  if (this != (HashSet_1_AsyncWebRequest_ *)0x0) {
    JVar1 = System.Core.dll::System::Linq::
            Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
            JsonSchemaType]::
            Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                      ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                        *)this,
                       MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__get_Count__
                      );
    if (JVar1 == JsonSchemaType__Enum_None) {
      message = StringLiteral_AsyncWWWManager_successfully_han;
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
        message = StringLiteral_AsyncWWWManager_successfully_han;
      }
    }
    else {
      if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
        func_?();
      }
      iVar2 = WaitForTicksLocal::WaitForTicksLocal_Diff
                        (TypeInfo__AsyncWWWManager->static_fields->quitTime,(MethodInfo *)0x0);
      if (iVar2 < 0x1389) {
        return;
      }
      message = StringLiteral_AsyncWWWManager_failed_to_handle;
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
        message = StringLiteral_AsyncWWWManager_failed_to_handle;
      }
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0)
    ;
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__AsyncWWWManager);
    }
    this_00 = (JumpState_OnWallJumpDelegate *)TypeInfo__AsyncWWWManager->static_fields->quitCallback
    ;
    if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
      JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
      TypeInfo__AsyncWWWManager->static_fields->quitCallback = (Action *)0x0;
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_Reset(MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff94;
  puVar5 = &stack0xffffff94;
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
  uStack_7 = 0xffffffff;
  piStack_8 = (int *)&stack0xffffff94;
  puStack_4 = &stack0xffffff94;
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (piStack_8 = (int *)&stack0xffffff94, puStack_4 = &stack0xffffff94,
     (TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    piStack_8 = (int *)&stack0xffffff94;
    puStack_4 = &stack0xffffff94;
    func_?(TypeInfo__AsyncWWWManager);
  }
  TypeInfo__AsyncWWWManager->static_fields->retries = 3;
  TypeInfo__AsyncWWWManager->static_fields->isQuiting = 0;
  this = TypeInfo__AsyncWWWManager->static_fields->requests;
  if ((this != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) &&
     (this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
                ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                          ((Dictionary_2_WinningConditionType_System_Object_ *)this,
                           MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Values__
                          ),
     this_04 != (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_ *)0x0)
     ) {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                *)auStack_9,this_04,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__GetEnumerator__
              );
    uStack_1 = 0;
    while( true ) {
      cVar10 = func_?();
      if (cVar10 == '\0') break;
      this_05 = (Queue_1_UnityEngine_Vector3_ *)func_?();
      if (this_05 == (Queue_1_UnityEngine_Vector3_ *)0x0) goto code_?;
      System.dll::System::Collections::Generic::Queue`1[System::Int32]::Queue_1_System_Int32__Clear
                ((Queue_1_System_Int32_ *)this_05,
                 MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Clear__);
      System.dll::System::Collections::Generic::Queue`1[UnityEngine::Vector3]::
      Queue_1_UnityEngine_Vector3__TrimExcess
                (this_05,
                 MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__TrimExcess__);
    }
    iVar11 = 0;
    *piStack_8 = 0x54;
    uStack_1 = 0xffffffff;
    func_?();
    if (*piStack_8 == 0x54) {
      iVar11 = -1;
    }
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__AsyncWWWManager);
    }
    this_00 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
    if (this_00 != (HashSet_1_AsyncWebRequest_ *)0x0) {
      pHVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
               FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                         ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                          (auStack_9 + 4),
                          (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)this_00,
                          MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                         );
      CStack_6.klass =
           (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar12->hashset;
      CStack_6.monitor = (MonitorData *)pHVar12->next;
      CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar12->stamp;
      CStack_6.fields.syncRoot = (Object *)pHVar12->current;
      uStack_1 = 2;
      while (cVar10 = func_?(&CStack_6,
                                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__MoveNext__
                                    ), cVar10 != '\0') {
        pOVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           (&CStack_6,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                           );
        if (pOVar13 == (Object *)0x0) goto code_?;
        if ((UnityWebRequest *)pOVar13[6].monitor != (UnityWebRequest *)0x0) {
          UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
          UnityWebRequest_Dispose((UnityWebRequest *)pOVar13[6].monitor,(MethodInfo *)0x0);
        }
      }
      piStack_8[iVar11 + 1] = 0x91;
      uStack_1 = 0xffffffff;
      func_?(&CStack_6,
                      MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                     );
      if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__AsyncWWWManager);
      }
      this_01 = (HashSet_1_UnityEngine_Vector3_ *)
                TypeInfo__AsyncWWWManager->static_fields->activeRequests;
      if (this_01 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
        HashSet_1_UnityEngine_Vector3__Clear
                  (this_01,
                   MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Clear__);
        this_02 = TypeInfo__AsyncWWWManager->static_fields->tempHashSet;
        if (this_02 != (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
          HashSet_1_UnityEngine_Vector3__TrimExcess
                    ((HashSet_1_UnityEngine_Vector3_ *)this_02,
                     MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__TrimExcess__
                    );
          pAVar14 = TypeInfo__AsyncWWWManager->static_fields->cache;
          if (pAVar14 != (AsyncWWWManager_Cache *)0x0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            this_03 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)(pAVar14->fields).cachedRequests;
            if (this_03 !=
                (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
              Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                        (this_03,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Clear__
                        );
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  func_?(0,0,0);
  func_?(0,0,0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void ShutDown(Action) */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_ShutDown
               (Action *quitHandled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  if (TypeInfo__AsyncWWWManager->static_fields->isQuiting != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Handle_quit_called_twice,(MethodInfo *)0x0);
    return;
  }
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  TypeInfo__AsyncWWWManager->static_fields->isQuiting = 1;
  pDVar1 = TypeInfo__AsyncWWWManager->static_fields->requests;
  if (pDVar1 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
    this = (Queue_1_System_Int32_ *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[WWWRequestPriority,System::
           Object]::Dictionary_2_WWWRequestPriority_System_Object__get_Item
                     ((Dictionary_2_WWWRequestPriority_System_Object_ *)pDVar1,
                      WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,
                      MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                     );
    if (this != (Queue_1_System_Int32_ *)0x0) {
      System.dll::System::Collections::Generic::Queue`1[System::Int32]::Queue_1_System_Int32__Clear
                (this,MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Clear__);
      TypeInfo__AsyncWWWManager->static_fields->retries = 0;
      pDVar1 = TypeInfo__AsyncWWWManager->static_fields->requests;
      if (pDVar1 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
        requestQueue = (Action *)
                       mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[WWWRequestPriority,System::Object]::
                       Dictionary_2_WWWRequestPriority_System_Object__get_Item
                                 ((Dictionary_2_WWWRequestPriority_System_Object_ *)pDVar1,
                                  WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,
                                  MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                                 );
        AsyncWWWManager_AddRequestsToActiveRequests
                  ((Queue_1_AsyncWebRequest_ *)requestQueue,0x7fffffff,(MethodInfo *)0x0);
        pDVar1 = TypeInfo__AsyncWWWManager->static_fields->requests;
        if (pDVar1 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
          requestQueue_00 =
               (Queue_1_AsyncWebRequest_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[WWWRequestPriority,System::
               Object]::Dictionary_2_WWWRequestPriority_System_Object__get_Item
                         ((Dictionary_2_WWWRequestPriority_System_Object_ *)pDVar1,
                          WWWRequestPriority__Enum_ExecuteWhileSyncronizing,
                          MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                         );
          AsyncWWWManager_AddRequestsToActiveRequests(requestQueue_00,0x7fffffff,(MethodInfo *)0x0);
          iVar2 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
          TypeInfo__AsyncWWWManager->static_fields->quitTime = iVar2;
          TypeInfo__AsyncWWWManager->static_fields->quitCallback = requestQueue;
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Unsubscribe(AsyncWebRequest, Action`1[UnityEngine.Networking.UnityWebRequest]) */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_Unsubscribe
               (AsyncWebRequest *request,Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (request != (AsyncWebRequest *)0x0) {
    bVar1 = mscorlib.dll::System::Delegate::Delegate_op_Equality
                      ((Delegate *)(request->fields).callback,(Delegate *)callback,(MethodInfo *)0x0
                      );
    if (bVar1 != 0) {
      pAVar2 = (Action_1_UnityEngine_Networking_UnityWebRequest_ *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)(request->fields).callback,(Delegate *)callback,
                          (MethodInfo *)0x0);
      pAVar3 = (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0;
      if (pAVar2 != (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
        if (pAVar2->klass == TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>) {
          pAVar3 = pAVar2;
        }
        if (pAVar3 == (Action_1_UnityEngine_Networking_UnityWebRequest_ *)0x0)
        goto code_?;
      }
      (request->fields).callback = pAVar3;
    }
    return;
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UnsubscribeWWWRequest(Action`1[UnityEngine.Networking.UnityWebRequest]) */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
               (Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,MethodInfo *method)

{
  pIStack_1 = (Il2CppClass *)0xffffffff;
  pIStack_2 = (Il2CppClass *)&DAT_?;
  pIStack_3 = (Il2CppClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  pIStack_4 = (Il2CppClass *)&stack0xffffff7c;
  pIVar5 = (Il2CppClass *)&stack0xffffff7c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  auStack_6._16_4_ = (Object *)0x0;
  iStack_7 = 0;
  auStack_6._20_4_ = (Action *)0x0;
  iStack_8 = 0;
  iStack_9 = 0;
  iStack_10 = 0;
  iStack_11 = 0;
  KStack_12.key = 0;
  KStack_12.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MethodInfo *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  uStack_13 = 0;
  func_?();
  iStack_14 = -1;
  _Stack_1c.dummy = &stack0xffffff7c;
  pIStack_4 = (Il2CppClass *)&stack0xffffff7c;
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (_Stack_1c.dummy = &stack0xffffff7c, pIStack_4 = (Il2CppClass *)&stack0xffffff7c,
     (TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    _Stack_1c.dummy = &stack0xffffff7c;
    pIStack_4 = (Il2CppClass *)&stack0xffffff7c;
    func_?(TypeInfo__AsyncWWWManager);
  }
  this = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
  iVar15 = 0;
  if (this != (HashSet_1_AsyncWebRequest_ *)0x0) {
    pHVar16 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                        (auStack_17 + 4),(HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)this,
                        MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                       );
    auStack_6._20_4_ = pHVar16->hashset;
    iStack_8 = pHVar16->next;
    iStack_9 = pHVar16->stamp;
    iStack_10 = pHVar16->current;
    pIStack_1 = (Il2CppClass *)0x0;
    while (cVar18 = func_?(), cVar18 != '\0') {
      pAVar19 = (AsyncWebRequest *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                          (auStack_6 + 0x14),
                          MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                         );
      if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__AsyncWWWManager);
      }
      AsyncWWWManager_Unsubscribe(pAVar19,callback,(MethodInfo *)0x0);
    }
    iVar20 = 0;
    iStack_14 = 0;
    iVar21 = 0;
    ((_Stack_1c.type)->data).__klassIndex = 0x3e;
    pIStack_1 = (Il2CppClass *)0xffffffff;
    func_?(auStack_6 + 0x14,
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                   );
    if ((_Stack_1c.array)->etype == (Il2CppType *)0x3e) {
      iVar20 = -1;
      iStack_14 = -1;
    }
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__AsyncWWWManager);
    }
    this_00 = TypeInfo__AsyncWWWManager->static_fields->requests;
    iVar15 = iVar21;
    if (this_00 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
      pDVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *
                          )auStack_17,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__GetEnumerator__
                         );
      auStack_6._0_4_ = pDVar22->dictionary;
      auStack_6._4_4_ = pDVar22->next;
      auStack_6._8_4_ = pDVar22->stamp;
      auStack_6._12_4_ = (pDVar22->current).key;
      auStack_6._16_4_ = (pDVar22->current).value;
      pIStack_1 = (Il2CppClass *)0x2;
      while (iVar23 = iVar20, cVar18 = func_?(), iVar15 = iStack_11, cVar18 != '\0') {
        KStack_12 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                              ((LevelRewardsManager *)auStack_6,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Current__
                              );
        auStack_6._0_4_ = &KStack_12;
        auStack_6._4_4_ =
             MethodInfo__System__Collections__Generic__KeyValuePair<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Value__
        ;
        this_02 = (Queue_1_System_Int32_ *)func_?();
        iVar15 = iVar21;
        if (this_02 == (Queue_1_System_Int32_ *)0x0) goto code_?;
        pQVar24 = System.dll::System::Collections::Generic::Queue`1[System::Int32]::
                 Queue_1_System_Int32__GetEnumerator
                           (&QStack_25,this_02,
                            MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__GetEnumerator__
                           );
        uStack_13._0_4_ = pQVar24->q;
        uStack_13._4_4_ = pQVar24->idx;
        iStack_7 = pQVar24->ver;
        pIStack_1._0_1_ = 3;
        while (cVar18 = func_?(), cVar18 != '\0') {
          pAVar19 = (AsyncWebRequest *)func_?();
          if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
            func_?(TypeInfo__AsyncWWWManager);
          }
          AsyncWWWManager_Unsubscribe(pAVar19,callback,(MethodInfo *)0x0);
        }
        iVar21 = iVar23 + 1;
        pIStack_1 = (Il2CppClass *)CONCAT31(pIStack_1._1_3_,2);
        *(undefined4 *)((int)_Stack_1c.dummy + iVar21 * 4) = 0x99;
        iStack_14 = iVar21;
        func_?();
        if (iStack_11 != 0) {
          func_?();
          iVar15 = iVar21;
          goto code_?;
        }
        iVar20 = iVar21;
        if (((iVar21 != -1) && (*(int *)((int)_Stack_1c.dummy + iVar21 * 4) == 0x99)) &&
           (iVar20 = iVar23, iStack_14 = iVar23, iVar21 < 0)) {
          iVar20 = iVar21;
          iStack_14 = iVar21;
        }
      }
      *(undefined4 *)((int)_Stack_1c.dummy + iVar23 * 4 + 4) = 0xb8;
      pIStack_1 = (Il2CppClass *)0xffffffff;
      func_?();
      if (iVar15 != 0) goto code_?;
      if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__AsyncWWWManager);
      }
      this_01 = TypeInfo__AsyncWWWManager->static_fields->cache;
      if (this_01 != (AsyncWWWManager_Cache *)0x0) {
        AsyncWWWManager+Cache::AsyncWWWManager_Cache_UnsubscribeCached
                  (this_01,callback,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = pIStack_3;
        return;
      }
    }
  }
code_?:
  func_?(0);
code_?:
  func_?(iVar15,0,0);
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_Update(MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  CStack_8.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_8.monitor = (MonitorData *)0x0;
  CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_8.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_9 = 0xffffffff;
  piStack_10 = (int *)&stack0xffffff90;
  puStack_4 = &stack0xffffff90;
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (piStack_10 = (int *)&stack0xffffff90, puStack_4 = &stack0xffffff90,
     (TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    piStack_10 = (int *)&stack0xffffff90;
    puStack_4 = &stack0xffffff90;
    func_?(TypeInfo__AsyncWWWManager);
  }
  pDVar11 = TypeInfo__AsyncWWWManager->static_fields->requests;
  if (pDVar11 == (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
code_?:
    iVar12 = func_?(0);
    pAVar13 = unaff_ESI;
  }
  else {
    pQVar14 = (Queue_1_AsyncWebRequest_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[WWWRequestPriority,System::
             Object]::Dictionary_2_WWWRequestPriority_System_Object__get_Item
                       ((Dictionary_2_WWWRequestPriority_System_Object_ *)pDVar11,
                        WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,
                        MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                       );
    AsyncWWWManager_AddRequestsToActiveRequests(pQVar14,0x7fffffff,(MethodInfo *)0x0);
    pDVar11 = TypeInfo__AsyncWWWManager->static_fields->requests;
    if (pDVar11 == (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)
    goto code_?;
    pQVar14 = (Queue_1_AsyncWebRequest_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[WWWRequestPriority,System::
             Object]::Dictionary_2_WWWRequestPriority_System_Object__get_Item
                       ((Dictionary_2_WWWRequestPriority_System_Object_ *)pDVar11,
                        WWWRequestPriority__Enum_ExecuteWhileSyncronizing,
                        MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                       );
    AsyncWWWManager_AddRequestsToActiveRequests(pQVar14,4,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      CStack_7.klass =
           (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)
           TypeInfo__MVGameControllerBase;
      CStack_8.fields.syncRoot = (Object *)&UNK_?;
      func_?();
    }
    MVar15 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
    if (MVar15 == MVJoinState__Enum_Playing) {
      if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__AsyncWWWManager);
      }
      pDVar11 = TypeInfo__AsyncWWWManager->static_fields->requests;
      if (pDVar11 == (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)
      goto code_?;
      pQVar14 = (Queue_1_AsyncWebRequest_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[WWWRequestPriority,System::
               Object]::Dictionary_2_WWWRequestPriority_System_Object__get_Item
                         ((Dictionary_2_WWWRequestPriority_System_Object_ *)pDVar11,
                          WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,
                          MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                         );
      AsyncWWWManager_AddRequestsToActiveRequests(pQVar14,4,(MethodInfo *)0x0);
    }
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__AsyncWWWManager);
    }
    this = TypeInfo__AsyncWWWManager->static_fields->tempHashSet;
    uStack_1 = 0;
    pAStack_16 = this;
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__AsyncWWWManager);
    }
    this_00 = TypeInfo__AsyncWWWManager->static_fields->activeRequests;
    if (this_00 == (HashSet_1_AsyncWebRequest_ *)0x0) goto code_?;
    pHVar17 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData::
             FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                       ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                        &stack0xffffff9c,
                        (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)this_00,
                        MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                       );
    CStack_7.klass =
         (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar17->hashset;
    CStack_7.monitor = (MonitorData *)pHVar17->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar17->stamp;
    CStack_7.fields.syncRoot = (Object *)pHVar17->current;
    uStack_1 = CONCAT31(uStack_1._1_3_,1);
    while (cVar18 = func_?(), cVar18 != '\0') {
      unaff_ESI = (AsyncWebRequest *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            (&CStack_7,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                            );
      if (unaff_ESI == (AsyncWebRequest *)0x0) goto code_?;
      bVar19 = AsyncWebRequest::AsyncWebRequest_Update(unaff_ESI,(MethodInfo *)0x0);
      if (bVar19 != 0) {
        if (this == (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0)
        goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
        UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                  ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this,
                   (UnityWebRequest *)unaff_ESI,
                   MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Add_AsyncWebRequest_
                  );
      }
    }
    unaff_ESI = (AsyncWebRequest *)0x0;
    uStack_9 = 0;
    uStack_1 = uStack_1 & 0xffffff00;
    *piStack_10 = 0x92;
    func_?(&CStack_7,
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                   );
    iVar12 = iStack_6;
    pAVar13 = unaff_ESI;
    if (iStack_6 == 0) {
      if (*piStack_10 == 0x92) {
        unaff_ESI = (AsyncWebRequest *)0xffffffff;
        uStack_9 = 0xffffffff;
      }
      if (this != (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0) {
        pHVar17 = System.Core.dll::System::Collections::Generic::HashSet`1[MV::WorldObject::MetaData
                 ::FirstTimeEvent]::HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent__GetEnumerator
                           ((HashSet_1_T_Enumerator_MV_WorldObject_MetaData_FirstTimeEvent_ *)
                            &stack0xffffff9c,
                            (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)this,
                            MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__GetEnumerator__
                           );
        CStack_8.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pHVar17->hashset;
        CStack_8.monitor = (MonitorData *)pHVar17->next;
        CStack_8.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pHVar17->stamp
        ;
        CStack_8.fields.syncRoot = (Object *)pHVar17->current;
        uStack_1 = CONCAT31(uStack_1._1_3_,3);
        while (cVar18 = func_?(), cVar18 != '\0') {
          pMStack_20 = (MVRotator *)
                       mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                       ::Serialization::JsonProperty]::
                       Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                 (&CStack_8,
                                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__get_Current__
                                 );
          if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
            func_?(TypeInfo__AsyncWWWManager);
          }
          this_01 = (HashSet_1_MVRotator_ *)TypeInfo__AsyncWWWManager->static_fields->activeRequests
          ;
          if (this_01 == (HashSet_1_MVRotator_ *)0x0) goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[MVRotator]::
          HashSet_1_MVRotator__Remove
                    (this_01,pMStack_20,
                     MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__Remove_AsyncWebRequest_
                    );
        }
        pAVar13 = (AsyncWebRequest *)((int)&unaff_ESI->klass + 1);
        uStack_1 = uStack_1 & 0xffffff00;
        piStack_10[(int)pAVar13] = 0xd2;
        func_?(&CStack_8,
                        MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<AsyncWebRequest>__Dispose__
                       );
        iVar12 = iStack_6;
        if (iStack_6 == 0) {
          if (((pAVar13 != (AsyncWebRequest *)0xffffffff) && (piStack_10[(int)pAVar13] == 0xd2)) &&
             (-1 < (int)pAVar13)) {
            pAVar13 = unaff_ESI;
          }
          piStack_10[(int)((int)&pAVar13->klass + 1)] = 0xe4;
          uStack_1 = 0xffffffff;
          if (this != (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)0x0) {
            func_?(0,TypeInfo__System__IDisposable,this);
          }
          if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
            func_?(TypeInfo__AsyncWWWManager);
          }
          if (TypeInfo__AsyncWWWManager->static_fields->isQuiting != 0) {
            if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
              func_?(TypeInfo__AsyncWWWManager);
            }
            AsyncWWWManager_Quit((MethodInfo *)0x0);
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  iVar12 = func_?(iVar12,0,0);
code_?:
  func_?(iVar12,0,0);
  func_?(pAVar13,0,0);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void WWWRequest(AsyncWebRequest) */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_WWWRequest
               (AsyncWebRequest *asyncRequest,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  if (TypeInfo__AsyncWWWManager->static_fields->isQuiting == 0) {
    if (asyncRequest != (AsyncWebRequest *)0x0) {
      bVar1 = (TypeInfo__CachedGetRequest->_1).naturalAligment;
      if (((asyncRequest->klass->_1).naturalAligment < bVar1) ||
         ((asyncRequest->klass->_1).typeHierarchy[bVar1 - 1] !=
          (Il2CppClass *)TypeInfo__CachedGetRequest)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      pAVar3 = (AsyncWebRequest *)0x0;
      if (bVar2) {
        pAVar3 = asyncRequest;
      }
      if (pAVar3 != (AsyncWebRequest *)0x0) {
        piVar4 = (int *)func_?(asyncRequest,TypeInfo__CachedGetRequest);
        if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
          func_?(TypeInfo__AsyncWWWManager);
        }
        if (piVar4 == (int *)0x0) goto code_?;
        cVar5 = (**(code **)(*piVar4 + 0xf0))
                          (piVar4,TypeInfo__AsyncWWWManager->static_fields->cache,
                           *(undefined4 *)(*piVar4 + 0xf4));
        if (cVar5 != '\0') {
          return;
        }
      }
    }
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__AsyncWWWManager);
    }
    this = TypeInfo__AsyncWWWManager->static_fields->requests;
    if (((asyncRequest == (AsyncWebRequest *)0x0) ||
        (this == (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0)) ||
       (this_00 = (Queue_1_SmoothPhysicsMovement_Package_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[WWWRequestPriority,System
                  ::Object]::Dictionary_2_WWWRequestPriority_System_Object__get_Item
                            ((Dictionary_2_WWWRequestPriority_System_Object_ *)this,
                             (asyncRequest->fields).requestPriority,
                             MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__get_Item_WWWRequestPriority_
                            ), this_00 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0)) {
code_?:
      func_?(0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
    Queue_1_SmoothPhysicsMovement_Package__Enqueue
              (this_00,(SmoothPhysicsMovement_Package *)asyncRequest,
               MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Enqueue_AsyncWebRequest_
              );
  }
  return;
}


/* AsyncWWWManager() */

void Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
           func_?(TypeInfo__System__Collections__Generic__HashSet<AsyncWebRequest>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar1,MethodInfo__System__Collections__Generic__HashSet<AsyncWebRequest>__HashSet__);
  TypeInfo__AsyncWWWManager->static_fields->activeRequests = (HashSet_1_AsyncWebRequest_ *)pHVar1;
  this = (AsyncWWWManager_TemporaryHashSet_1_AsyncWebRequest_ *)
         func_?(TypeInfo__AsyncWWWManager__TemporaryHashSet<AsyncWebRequest>);
  System.Core.dll::System::Linq::OrderedEnumerable`1[System::Collections::Generic::
  KeyValuePair`2[System::Int32,System::Int32]]::
  OrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32__System_Collections_IEnumerable_GetEnumerator
            ((OrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_
              *)this,
             MethodInfo__AsyncWWWManager__TemporaryHashSet<AsyncWebRequest>__TemporaryHashSet__);
  TypeInfo__AsyncWWWManager->static_fields->tempHashSet = this;
  TypeInfo__AsyncWWWManager->static_fields->retries = 3;
  array = (Int32__Array *)func_?(TypeInfo__System__Int32,3);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)array,__field_2B66D5FD203619B430FEFD12728434197CB1E6F3_Field,(MethodInfo *)0x0
            );
  TypeInfo__AsyncWWWManager->static_fields->RetryTimeouts = array;
  TypeInfo__AsyncWWWManager->static_fields->isQuiting = 0;
  this_00 = (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Dictionary__
            );
  pQVar2 = (Queue_1_SmoothPhysicsMovement_Package_ *)
           func_?(TypeInfo__System__Collections__Generic__Queue<AsyncWebRequest>);
  System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
  Queue_1_SmoothPhysicsMovement_Package___ctor
            (pQVar2,MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Queue__);
  if (this_00 != (Dictionary_2_WWWRequestPriority_Queue_1_AsyncWebRequest_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WWWRequestPriority,System::Object]::
    Dictionary_2_WWWRequestPriority_System_Object__Add
              ((Dictionary_2_WWWRequestPriority_System_Object_ *)this_00,
               WWWRequestPriority__Enum_WaitUntilSyncronizingIsDone,(Object *)pQVar2,
               MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Add_WWWRequestPriority__System__Collections__Generic__Queue<AsyncWebRequest>_
              );
    pQVar2 = (Queue_1_SmoothPhysicsMovement_Package_ *)func_?();
    System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
    Queue_1_SmoothPhysicsMovement_Package___ctor
              (pQVar2,MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Queue__);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WWWRequestPriority,System::Object]::
    Dictionary_2_WWWRequestPriority_System_Object__Add
              ((Dictionary_2_WWWRequestPriority_System_Object_ *)this_00,
               WWWRequestPriority__Enum_ExecuteWhileSyncronizing,(Object *)pQVar2,
               MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Add_WWWRequestPriority__System__Collections__Generic__Queue<AsyncWebRequest>_
              );
    pQVar2 = (Queue_1_SmoothPhysicsMovement_Package_ *)func_?();
    System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
    Queue_1_SmoothPhysicsMovement_Package___ctor
              (pQVar2,MethodInfo__System__Collections__Generic__Queue<AsyncWebRequest>__Queue__);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[WWWRequestPriority,System::Object]::
    Dictionary_2_WWWRequestPriority_System_Object__Add
              ((Dictionary_2_WWWRequestPriority_System_Object_ *)this_00,
               WWWRequestPriority__Enum_ExecuteIgnoreAllConstraints,(Object *)pQVar2,
               MethodInfo__System__Collections__Generic__Dictionary<WWWRequestPriority,_System::Collections::Generic::Queue<AsyncWebRequest>_>__Add_WWWRequestPriority__System__Collections__Generic__Queue<AsyncWebRequest>_
              );
    TypeInfo__AsyncWWWManager->static_fields->requests = this_00;
    this_01 = (ScaleAnimationBase *)func_?();
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    method_00 = TypeInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>
    ;
    pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (pHVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_CachedGetRequest>__Dictionary__
              );
    (this_01->fields)._._._._.m_CachedPtr = pHVar1;
    ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_00);
    TypeInfo__AsyncWWWManager->static_fields->cache = (AsyncWWWManager_Cache *)this_01;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 get_Retries() */

int32_t Assembly-CSharp.dll::AsyncWWWManager::AsyncWWWManager_get_Retries(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  return TypeInfo__AsyncWWWManager->static_fields->retries;
}

