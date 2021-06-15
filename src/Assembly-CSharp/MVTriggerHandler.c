
/* List`1[System.Int32]
   GetMissingKeysInDictionary(Dictionary`2[TKey,TValue]+KeyCollection[System.Int32,TriggerBoxEvents],
   Dictionary`2[System.Int32,TriggerBoxEvents]) */

List_1_System_Int32_ *
Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_GetMissingKeysInDictionary
          (MVTriggerHandler *this,
          Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_ *keys,
          Dictionary_2_System_Int32_TriggerBoxEvents_ *dictionary,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_TriggerBoxEvents_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_00,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  index = 0;
  if (keys == (Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_ *)0x0) {
code_?:
    func_?(0);
    pcVar1 = (code *)swi(3);
    pLVar2 = (List_1_System_Int32_ *)(*pcVar1)();
    return pLVar2;
  }
  do {
    iVar3 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                      ((Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                        *)keys,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_TriggerBoxEvents>__get_Count__
                      );
    if (iVar3 <= index) {
      return (List_1_System_Int32_ *)this_00;
    }
    item = System.Core.dll::System::Linq::Enumerable::Enumerable_ElementAt_2
                     ((IEnumerable_1_System_Int32_ *)keys,index,
                      int_MethodInfo__System__Linq__Enumerable__ElementAt<int>_System__Collections__Generic__IEnumerable<int>__int_
                     );
    if (dictionary == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) goto code_?;
    keys = (Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_ *)
           MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__ContainsKey_int_
    ;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)dictionary,item,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__ContainsKey_int_
                      );
    if (bVar4 == 0) {
      if (this_00 == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) goto code_?;
      keys = (Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_ *)&UNK_?;
      mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                ((List_1_UIPushOption_ *)this_00,item,
                 MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      dictionary = this_00;
    }
    index = index + 1;
  } while( true );
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_OnDestroy
               (MVTriggerHandler *this,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  pOStack_3 = (Object *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_3;
  pOStack_4 = (Object__Array *)&stack0xffffffa4;
  pOVar5 = (Object__Array *)&stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pOVar5 = pOStack_4;
  }
  pOStack_4 = pOVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  this_00 = (this->fields).triggerBoxEvents;
  (this->fields).wasResetThisFrame = 1;
  pLStack_8 = (Link__Array *)&stack0xffffffa4;
  pOStack_4 = (Object__Array *)&stack0xffffffa4;
  if (this_00 != (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) {
    pLStack_8 = (Link__Array *)&stack0xffffffa4;
    pOStack_4 = (Object__Array *)&stack0xffffffa4;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_10,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar9->dictionary;
    auStack_6._4_4_ = pDVar9->next;
    auStack_6._8_4_ = pDVar9->stamp;
    auStack_6._12_4_ = (pDVar9->current).key;
    auStack_6._16_4_ = (pDVar9->current).value;
    iStack_1 = 0;
    while (cVar11 = func_?(), cVar11 != '\0') {
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__get_Current__
                            );
      DStack_10.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_10.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<int,_TriggerBoxEvents>__get_Value__
      ;
      this_01 = (TriggerBoxEvents *)func_?();
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pWStack_12 = (WinningConditionType__Enum__Array *)(this->fields).triggingCollider;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pWStack_12,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar13 != 0) {
        pMVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                           ((Component_1 *)this,
                            UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                           );
        (this->fields).triggingCollider = (Collider *)pMVar14;
      }
      unaff_EDI = 0;
      if (this_01 == (TriggerBoxEvents *)0x0) goto code_?;
      TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
                (this_01,(this->fields).triggingCollider,(MethodInfo *)0x0);
    }
    unaff_EDI = 0;
    pLStack_8->klass = (Link__Array__Class *)0x51;
    iStack_1 = -1;
    func_?();
    pDVar15 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).newTriggerBoxEvents;
    if (pDVar15 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                (pDVar15,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                );
      pDVar15 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).triggerBoxEvents;
      if (pDVar15 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                  (pDVar15,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                  );
        *unaff_FS_OFFSET = pOStack_3;
        return;
      }
    }
  }
code_?:
  func_?(0);
  func_?(unaff_EDI,0,0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnTriggerStay(Collider) */

void Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_OnTriggerStay
               (MVTriggerHandler *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (other != (Collider *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                        ((Component_1 *)other,
                         TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponent<TriggerBoxEvents>__
                        );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if ((this_00 != (MVInteractableBase *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0
       )) {
      key = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                      ((Object_1 *)this_01,(MethodInfo *)0x0);
      pDVar2 = (this->fields).newTriggerBoxEvents;
      if (pDVar2 != (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) {
        bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__ContainsKey
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__ContainsKey_int_
                          );
        if (bVar1 != 0) {
          return;
        }
        pDVar2 = (this->fields).newTriggerBoxEvents;
        if (pDVar2 != (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Add
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,key,(Object *)this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Add_int__TriggerBoxEvents_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_Reset
               (MVTriggerHandler *this,MethodInfo *method)

{
  iStack_1 = -1;
  puStack_2 = &DAT_?;
  pOStack_3 = (Object *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pOStack_3;
  pOStack_4 = (Object__Array *)&stack0xffffffa4;
  pOVar5 = (Object__Array *)&stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pOVar5 = pOStack_4;
  }
  pOStack_4 = pOVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  this_00 = (this->fields).triggerBoxEvents;
  (this->fields).wasResetThisFrame = 1;
  pLStack_8 = (Link__Array *)&stack0xffffffa4;
  pOStack_4 = (Object__Array *)&stack0xffffffa4;
  if (this_00 != (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) {
    pLStack_8 = (Link__Array *)&stack0xffffffa4;
    pOStack_4 = (Object__Array *)&stack0xffffffa4;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       (&DStack_10,(Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar9->dictionary;
    auStack_6._4_4_ = pDVar9->next;
    auStack_6._8_4_ = pDVar9->stamp;
    auStack_6._12_4_ = (pDVar9->current).key;
    auStack_6._16_4_ = (pDVar9->current).value;
    iStack_1 = 0;
    while (cVar11 = func_?(), cVar11 != '\0') {
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TriggerBoxEvents>__get_Current__
                            );
      DStack_10.dictionary = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_7;
      DStack_10.next =
           (int32_t)
           MethodInfo__System__Collections__Generic__KeyValuePair<int,_TriggerBoxEvents>__get_Value__
      ;
      this_01 = (TriggerBoxEvents *)func_?();
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pWStack_12 = (WinningConditionType__Enum__Array *)(this->fields).triggingCollider;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pWStack_12,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar13 != 0) {
        pMVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                           ((Component_1 *)this,
                            UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                           );
        (this->fields).triggingCollider = (Collider *)pMVar14;
      }
      unaff_EDI = 0;
      if (this_01 == (TriggerBoxEvents *)0x0) goto code_?;
      TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
                (this_01,(this->fields).triggingCollider,(MethodInfo *)0x0);
    }
    unaff_EDI = 0;
    pLStack_8->klass = (Link__Array__Class *)0x51;
    iStack_1 = -1;
    func_?();
    pDVar15 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)(this->fields).newTriggerBoxEvents;
    if (pDVar15 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                (pDVar15,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                );
      pDVar15 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).triggerBoxEvents;
      if (pDVar15 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                  (pDVar15,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                  );
        *unaff_FS_OFFSET = pOStack_3;
        return;
      }
    }
  }
code_?:
  func_?(0);
  func_?(unaff_EDI,0,0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_Start
               (MVTriggerHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = MVTriggerHandler_get_TriggingCollider(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Did_not_find_collider,(MethodInfo *)0x0);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_Update
               (MVTriggerHandler *this,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).fixedUpdatedWasExecuted == 0) {
    return;
  }
  pDVar1 = (this->fields).triggerBoxEvents;
  (this->fields).fixedUpdatedWasExecuted = 0;
  (this->fields).wasResetThisFrame = 0;
  if (pDVar1 != (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) {
    pDVar2 = (Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                       ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Keys__
                       );
    pMVar3 = (MVTriggerHandler *)
             MVTriggerHandler_GetMissingKeysInDictionary
                       (this,pDVar2,(this->fields).newTriggerBoxEvents,(MethodInfo *)0x0);
    pDVar1 = (this->fields).newTriggerBoxEvents;
    if (pDVar1 != (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0) {
      pDVar2 = (Dictionary_2_TKey_TValue_KeyCollection_System_Int32_TriggerBoxEvents_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System
               ::Object]::Dictionary_2_WinningConditionType_System_Object__get_Keys
                         ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Keys__
                         );
      this_01 = MVTriggerHandler_GetMissingKeysInDictionary
                          (this,pDVar2,(this->fields).triggerBoxEvents,(MethodInfo *)0x0);
      iVar4 = 0;
      this = pMVar3;
      if (pMVar3 != (MVTriggerHandler *)0x0) {
        for (; pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                        Json::Serialization::JsonProperty]::
                        Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                  ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                                   MethodInfo__System__Collections__Generic__List<int>__get_Count__)
            , iVar4 < (int)pOVar5; iVar4 = iVar4 + 1) {
          iVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                  List_1_System_Int32__get_Item
                            ((List_1_System_Int32_ *)this,iVar4,
                             MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
          pDVar7 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this_00->fields).triggerBoxEvents;
          if (pDVar7 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) goto code_?;
          pTVar8 = (TriggerBoxEvents *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (pDVar7,iVar6,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Item_int_
                             );
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pCVar9 = (this_00->fields).triggingCollider;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          this_01 = (List_1_System_Int32_ *)0x0;
          key = &UNK_?;
          bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pCVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar10 != 0) {
            pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                      Component_1_GetComponent_58
                                ((Component_1 *)this_00,
                                 UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                                );
            (this_00->fields).triggingCollider = (Collider *)pMVar11;
          }
          if (pTVar8 == (TriggerBoxEvents *)0x0) goto code_?;
          this = (MVTriggerHandler *)&UNK_?;
          TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerExit
                    (pTVar8,(this_00->fields).triggingCollider,(MethodInfo *)0x0);
          pDVar7 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this_00->fields).triggerBoxEvents;
          if (pDVar7 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Remove
                    (pDVar7,(int32_t)key,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Remove_int_
                    );
        }
        iVar4 = 0;
        if (this_01 != (List_1_System_Int32_ *)0x0) {
          for (; pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                          Json::Serialization::JsonProperty]::
                          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                     this_01,
                                     MethodInfo__System__Collections__Generic__List<int>__get_Count__
                                    ), iVar4 < (int)pOVar5; iVar4 = iVar4 + 1) {
            iVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
                    List_1_System_Int32__get_Item
                              (this_01,iVar4,
                               MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
            pDVar1 = (this_00->fields).triggerBoxEvents;
            pDVar7 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)(this_00->fields).newTriggerBoxEvents;
            if ((pDVar7 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                            *)0x0) ||
               (value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                  (pDVar7,iVar6,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Item_int_
                                  ), pDVar1 == (Dictionary_2_System_Int32_TriggerBoxEvents_ *)0x0))
            goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Add
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,iVar6,(Object *)value,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Add_int__TriggerBoxEvents_
                      );
            pDVar7 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)(this_00->fields).triggerBoxEvents;
            if (pDVar7 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                           *)0x0) goto code_?;
            pTVar8 = (TriggerBoxEvents *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                     Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                               (pDVar7,iVar6,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__get_Item_int_
                               );
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pCVar9 = (this_00->fields).triggingCollider;
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)pCVar9,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar10 != 0) {
              pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_GetComponent_58
                                  ((Component_1 *)this_00,
                                   UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                                  );
              (this_00->fields).triggingCollider = (Collider *)pMVar11;
            }
            if (pTVar8 == (TriggerBoxEvents *)0x0) goto code_?;
            TriggerBoxEvents::TriggerBoxEvents_OnMVTriggerEnter
                      (pTVar8,(this_00->fields).triggingCollider,(MethodInfo *)0x0);
            if ((this_00->fields).wasResetThisFrame != 0) break;
          }
          pDVar7 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this_00->fields).newTriggerBoxEvents;
          if (pDVar7 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
            Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__Clear
                      (pDVar7,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Clear__
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* MVTriggerHandler() */

void Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler__ctor
               (MVTriggerHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_TriggerBoxEvents_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Dictionary__
            );
  (this->fields).triggerBoxEvents = pDVar1;
  pDVar1 = (Dictionary_2_System_Int32_TriggerBoxEvents_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TriggerBoxEvents>__Dictionary__
            );
  (this->fields).newTriggerBoxEvents = pDVar1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Collider get_TriggingCollider() */

Collider *
Assembly-CSharp.dll::MVTriggerHandler::MVTriggerHandler_get_TriggingCollider
          (MVTriggerHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).triggingCollider;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                       );
    (this->fields).triggingCollider = (Collider *)pMVar2;
  }
  return (this->fields).triggingCollider;
}

