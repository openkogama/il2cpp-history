
/* Void EvaluateActivatableElements() */

void Assembly-CSharp.dll::FirstTimeElementActivator::
     FirstTimeElementActivator_EvaluateActivatableElements
               (FirstTimeElementActivator *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppClass *)0xffffffff;
  pIStack_2 = (Il2CppClass *)&DAT_?;
  pIStack_3 = (Il2CppClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  pIStack_4 = (Il2CppClass *)&stack0xffffff88;
  pIVar5 = (Il2CppClass *)&stack0xffffff88;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  auStack_6._16_4_ = (Object *)0x0;
  pFStack_7 = (FirstTimeElementActivator *)0x0;
  aKStack_8[0].key = 0;
  aKStack_8[0].value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MethodInfo *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_9.monitor = (MonitorData *)0x0;
  CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_9.fields.syncRoot = (Object *)0x0;
  func_?();
  iVar10 = 0;
  _Stack_24.__klassIndex = -1;
  pDVar11 = (this->fields).activatableUiElements;
  iStack_12 = 0;
  pFVar13 = this;
  _Stack_1c.dummy = &stack0xffffff88;
  pIStack_4 = (Il2CppClass *)&stack0xffffff88;
  if (pDVar11 == (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_
                 *)0x0) {
code_?:
    pFVar14 = (FirstTimeElementActivator *)func_?(0);
  }
  else {
    _Stack_1c.dummy = &stack0xffffff88;
    pIStack_4 = (Il2CppClass *)&stack0xffffff88;
    pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        (auStack_6 + 0x14),
                        (Dictionary_2_WinningConditionType_System_Object_ *)pDVar11,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar15->dictionary;
    auStack_6._4_4_ = pDVar15->next;
    auStack_6._8_4_ = pDVar15->stamp;
    auStack_6._12_4_ = (pDVar15->current).key;
    auStack_6._16_4_ = (pDVar15->current).value;
    pIStack_1 = (Il2CppClass *)0x0;
code_?:
    cVar16 = func_?();
    if (cVar16 != '\0') {
      aKStack_8[0] =
           LevelRewardsManager::LevelRewardsManager_get_NextReward
                     ((LevelRewardsManager *)auStack_6,
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__get_Current__
                     );
      auStack_6._0_4_ = aKStack_8;
      auStack_6._4_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__get_Value__
      ;
      iVar17 = func_?();
      pFVar13 = this;
      if (iVar17 == 0) goto code_?;
      cVar16 = func_?(5,TypeInfo__IActivatableFirstTimeUiElement,iVar17);
      if (cVar16 == '\0') {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_In_rare_cases_when_entering_play,(MethodInfo *)0x0);
        this_00 = (List_1_UIPushOption_ *)(this->fields).elementsToRemove;
        item = func_?();
        pFVar13 = (FirstTimeElementActivator *)0x0;
        if (this_00 == (List_1_UIPushOption_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  (this_00,item,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                  );
        goto code_?;
      }
      iVar17 = func_?(aKStack_8,
                              MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__get_Value__
                             );
      if (iVar17 == 0) goto code_?;
      cVar16 = func_?(2,TypeInfo__IActivatableFirstTimeUiElement,iVar17);
      if (cVar16 != '\0') {
        iVar17 = func_?();
        if (iVar17 == 0) goto code_?;
        FVar18 = func_?(6,TypeInfo__IActivatableFirstTimeUiElement,iVar17);
        if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
          func_?();
        }
        bVar19 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                          (FVar18,(MethodInfo *)0x0);
        if (bVar19 != 0) {
          if (iVar10 != 0) {
            iVar17 = func_?();
            if (iVar17 == 0) goto code_?;
            iVar17 = func_?(1,TypeInfo__IActivatableFirstTimeUiElement,iVar17);
            iVar20 = func_?(1,TypeInfo__IActivatableFirstTimeUiElement,iVar10);
            if (iVar17 <= iVar20) goto code_?;
          }
          iVar10 = func_?();
          iStack_12 = iVar10;
        }
      }
      goto code_?;
    }
    pFVar21 = (FirstTimeElementActivator *)0x0;
    ((_Stack_1c.type)->data).__klassIndex = 0xc5;
    pIStack_1 = (Il2CppClass *)0xffffffff;
    func_?();
    pFVar14 = pFStack_7;
    pFVar13 = pFVar21;
    if (pFStack_7 == (FirstTimeElementActivator *)0x0) {
      if ((_Stack_1c.array)->etype == (Il2CppType *)0xc5) {
        pFVar21 = (FirstTimeElementActivator *)0xffffffff;
      }
      pFVar13 = pFVar21;
      if ((iVar10 != 0) &&
         (cVar16 = func_?(3,TypeInfo__IActivatableFirstTimeUiElement,iVar10), cVar16 == '\0')
         ) {
        func_?(4,TypeInfo__IActivatableFirstTimeUiElement,iVar10);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        _Stack_24.typeHandle =
             (Il2CppMetadataTypeHandle)
             MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        FVar18 = func_?(0,TypeInfo__IActivatableFirstTimeUiElement,iVar10);
        if (_Stack_24.dummy == (GameEventManager *)0x0) goto code_?;
        GameEventManager::GameEventManager_NotifyFirstTimeEvent
                  ((GameEventManager *)_Stack_24.typeHandle,FVar18,(MethodInfo *)0x0);
      }
      this_01 = (List_1_UnityEngine_Color32_ *)(this->fields).elementsToRemove;
      if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
        pLVar22 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                  List_1_UnityEngine_Color32__GetEnumerator
                            ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_23,this_01,
                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__GetEnumerator__
                            );
        CStack_9.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar22->l;
        CStack_9.monitor = (MonitorData *)pLVar22->next;
        CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar22->ver;
        CStack_9.fields.syncRoot = (Object *)(pLVar22->current).rgba;
        pIStack_1 = (Il2CppClass *)0x2;
        while (cVar16 = func_?(), pFVar13 = pFStack_7, cVar16 != '\0') {
          key = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_9,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__get_Current__
                          );
          pDVar11 = (this->fields).activatableUiElements;
          pFVar13 = pFVar21;
          if (pDVar11 == (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_
                         *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MetaData::
          FirstTimeEvent,System::Object]::
          Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_System_Object__Remove
                    ((Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_System_Object_ *)pDVar11,
                     (FirstTimeEvent__Enum)key,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Remove_MV__WorldObject__MetaData__FirstTimeEvent_
                    );
        }
        *(undefined4 *)((int)_Stack_1c.dummy + (int)pFVar21 * 4 + 4) = 0x132;
        pIStack_1 = (Il2CppClass *)0xffffffff;
        func_?(&CStack_9,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__Dispose__
                       );
        if (pFVar13 != (FirstTimeElementActivator *)0x0) goto code_?;
        this_02 = (List_1_UnityEngine_UIVertex_ *)(this->fields).elementsToRemove;
        if (this_02 != (List_1_UnityEngine_UIVertex_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
          List_1_UnityEngine_UIVertex__Clear
                    (this_02,
                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__Clear__
                    );
          *unaff_FS_OFFSET = pIStack_3;
          return;
        }
      }
      goto code_?;
    }
  }
  func_?(pFVar14,0,0);
code_?:
  func_?(pFVar13,0,0);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator_LateUpdate
               (FirstTimeElementActivator *this,MethodInfo *method)

{
  if (((this->fields).isReady == 0) || ((this->fields).evaluateActivatableElements == 0)) {
    return;
  }
  (this->fields).evaluateActivatableElements = 0;
  pIStack_1 = (Il2CppClass *)0xffffffff;
  pIStack_2 = (Il2CppClass *)&DAT_?;
  pIStack_3 = (Il2CppClass *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pIStack_3;
  pIStack_4 = (Il2CppClass *)&stack0xffffff88;
  pIVar5 = (Il2CppClass *)&stack0xffffff88;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    pIVar5 = pIStack_4;
  }
  pIStack_4 = pIVar5;
  auStack_6._16_4_ = (Object *)0x0;
  pFStack_7 = (FirstTimeElementActivator *)0x0;
  aKStack_8[0].key = 0;
  aKStack_8[0].value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MethodInfo *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  CStack_9.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_9.monitor = (MonitorData *)0x0;
  CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_9.fields.syncRoot = (Object *)0x0;
  func_?();
  iVar10 = 0;
  _Stack_24.__klassIndex = -1;
  pDVar11 = (this->fields).activatableUiElements;
  iStack_12 = 0;
  pFVar13 = this;
  _Stack_1c.dummy = &stack0xffffff88;
  pIStack_4 = (Il2CppClass *)&stack0xffffff88;
  if (pDVar11 == (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_
                 *)0x0) {
code_?:
    pFVar14 = (FirstTimeElementActivator *)func_?(0);
  }
  else {
    _Stack_1c.dummy = &stack0xffffff88;
    pIStack_4 = (Il2CppClass *)&stack0xffffff88;
    pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        (auStack_6 + 0x14),
                        (Dictionary_2_WinningConditionType_System_Object_ *)pDVar11,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar15->dictionary;
    auStack_6._4_4_ = pDVar15->next;
    auStack_6._8_4_ = pDVar15->stamp;
    auStack_6._12_4_ = (pDVar15->current).key;
    auStack_6._16_4_ = (pDVar15->current).value;
    pIStack_1 = (Il2CppClass *)0x0;
code_?:
    cVar16 = func_?();
    if (cVar16 != '\0') {
      aKStack_8[0] =
           LevelRewardsManager::LevelRewardsManager_get_NextReward
                     ((LevelRewardsManager *)auStack_6,
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__get_Current__
                     );
      auStack_6._0_4_ = aKStack_8;
      auStack_6._4_4_ =
           MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__get_Value__
      ;
      iVar17 = func_?();
      pFVar13 = this;
      if (iVar17 == 0) goto code_?;
      cVar16 = func_?(5,TypeInfo__IActivatableFirstTimeUiElement,iVar17);
      if (cVar16 == '\0') {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_In_rare_cases_when_entering_play,(MethodInfo *)0x0);
        this_00 = (List_1_UIPushOption_ *)(this->fields).elementsToRemove;
        item = func_?();
        pFVar13 = (FirstTimeElementActivator *)0x0;
        if (this_00 == (List_1_UIPushOption_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  (this_00,item,
                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                  );
        goto code_?;
      }
      iVar17 = func_?(aKStack_8,
                              MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__get_Value__
                             );
      if (iVar17 == 0) goto code_?;
      cVar16 = func_?(2,TypeInfo__IActivatableFirstTimeUiElement,iVar17);
      if (cVar16 != '\0') {
        iVar17 = func_?();
        if (iVar17 == 0) goto code_?;
        FVar18 = func_?(6,TypeInfo__IActivatableFirstTimeUiElement,iVar17);
        if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
          func_?();
        }
        bVar19 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                          (FVar18,(MethodInfo *)0x0);
        if (bVar19 != 0) {
          if (iVar10 != 0) {
            iVar17 = func_?();
            if (iVar17 == 0) goto code_?;
            iVar17 = func_?(1,TypeInfo__IActivatableFirstTimeUiElement,iVar17);
            iVar20 = func_?(1,TypeInfo__IActivatableFirstTimeUiElement,iVar10);
            if (iVar17 <= iVar20) goto code_?;
          }
          iVar10 = func_?();
          iStack_12 = iVar10;
        }
      }
      goto code_?;
    }
    pFVar21 = (FirstTimeElementActivator *)0x0;
    ((_Stack_1c.type)->data).__klassIndex = 0xc5;
    pIStack_1 = (Il2CppClass *)0xffffffff;
    func_?();
    pFVar14 = pFStack_7;
    pFVar13 = pFVar21;
    if (pFStack_7 == (FirstTimeElementActivator *)0x0) {
      if ((_Stack_1c.array)->etype == (Il2CppType *)0xc5) {
        pFVar21 = (FirstTimeElementActivator *)0xffffffff;
      }
      pFVar13 = pFVar21;
      if ((iVar10 != 0) &&
         (cVar16 = func_?(3,TypeInfo__IActivatableFirstTimeUiElement,iVar10), cVar16 == '\0')
         ) {
        func_?(4,TypeInfo__IActivatableFirstTimeUiElement,iVar10);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        _Stack_24.typeHandle =
             (Il2CppMetadataTypeHandle)
             MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        FVar18 = func_?(0,TypeInfo__IActivatableFirstTimeUiElement,iVar10);
        if (_Stack_24.dummy == (GameEventManager *)0x0) goto code_?;
        GameEventManager::GameEventManager_NotifyFirstTimeEvent
                  ((GameEventManager *)_Stack_24.typeHandle,FVar18,(MethodInfo *)0x0);
      }
      this_01 = (List_1_UnityEngine_Color32_ *)(this->fields).elementsToRemove;
      if (this_01 != (List_1_UnityEngine_Color32_ *)0x0) {
        pLVar22 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                  List_1_UnityEngine_Color32__GetEnumerator
                            ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_23,this_01,
                             MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__GetEnumerator__
                            );
        CStack_9.klass =
             (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar22->l;
        CStack_9.monitor = (MonitorData *)pLVar22->next;
        CStack_9.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar22->ver;
        CStack_9.fields.syncRoot = (Object *)(pLVar22->current).rgba;
        pIStack_1 = (Il2CppClass *)0x2;
        while (cVar16 = func_?(), pFVar13 = pFStack_7, cVar16 != '\0') {
          key = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          (&CStack_9,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__get_Current__
                          );
          pDVar11 = (this->fields).activatableUiElements;
          pFVar13 = pFVar21;
          if (pDVar11 == (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_
                         *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MetaData::
          FirstTimeEvent,System::Object]::
          Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_System_Object__Remove
                    ((Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_System_Object_ *)pDVar11,
                     (FirstTimeEvent__Enum)key,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Remove_MV__WorldObject__MetaData__FirstTimeEvent_
                    );
        }
        *(undefined4 *)((int)_Stack_1c.dummy + (int)pFVar21 * 4 + 4) = 0x132;
        pIStack_1 = (Il2CppClass *)0xffffffff;
        func_?(&CStack_9,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::MetaData::FirstTimeEvent>__Dispose__
                       );
        if (pFVar13 != (FirstTimeElementActivator *)0x0) goto code_?;
        this_02 = (List_1_UnityEngine_UIVertex_ *)(this->fields).elementsToRemove;
        if (this_02 != (List_1_UnityEngine_UIVertex_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
          List_1_UnityEngine_UIVertex__Clear
                    (this_02,
                     MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__Clear__
                    );
          *unaff_FS_OFFSET = pIStack_3;
          return;
        }
      }
      goto code_?;
    }
  }
  func_?(pFVar14,0,0);
code_?:
  func_?(pFVar13,0,0);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator_OnDestroy
               (FirstTimeElementActivator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  pAVar1 = TypeInfo__FirstTimeEventManager->static_fields->XPRewarded;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__FirstTimeElementActivator__OnXPRewarded__,
             (MethodInfo *)0x0);
  pAVar3 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action *)0x0;
  if (pAVar3 != (Action *)0x0) {
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 == (Action *)0x0) {
      func_?();
      goto code_?;
    }
  }
  TypeInfo__FirstTimeEventManager->static_fields->XPRewarded = pAVar1;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__FirstTimeElementActivator__FirstTimeStateReceiver_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
             ,
             MethodInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>__Action_System__Object__void__
            );
  FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
            ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
              *)pUVar2,(MethodInfo *)0x0);
  this_00 = (this->fields).uiStack;
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__FirstTimeElementActivator__OnStackChange__,
             (MethodInfo *)0x0);
  if (this_00 != (UIStack *)0x0) {
    UIStack::UIStack_UnSubscribeToStackChanges(this_00,(Action *)pUVar2,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnJoinStateChanged(MVJoinState) */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator_OnJoinStateChanged
               (FirstTimeElementActivator *this,MVJoinState__Enum mvJoinState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (mvJoinState == MVJoinState__Enum_Playing) {
    (this->fields).isReady = 1;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pAVar1 = MVGameControllerBase::MVGameControllerBase_get_OnJoinStateChanged((MethodInfo *)0x0);
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<MVJoinState>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__FirstTimeElementActivator__OnJoinStateChanged_MVJoinState_,
               MethodInfo__System__Action<MVJoinState>__Action_System__Object__void__);
    pAVar2 = (Action_1_MVJoinState_ *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar1 = (Action_1_MVJoinState_ *)0x0;
    if (pAVar2 != (Action_1_MVJoinState_ *)0x0) {
      if (pAVar2->klass == TypeInfo__System__Action<MVJoinState>) {
        pAVar1 = pAVar2;
      }
      if (pAVar1 == (Action_1_MVJoinState_ *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    MVGameControllerBase::MVGameControllerBase_set_OnJoinStateChanged(pAVar1,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnXPRewarded() */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator_OnXPRewarded
               (FirstTimeElementActivator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 != MVGameMode__Enum_Play) {
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?();
    }
    NotificationController::NotificationController_PushNoticationInstruction
              (StringLiteral_Great_job__XP_rewarded_,NotificationLifetime__Enum_Low,
               (MethodInfo *)0x0);
  }
  return;
}


/* Void RegisterActivatableElement(IActivatableFirstTimeUiElement) */

void Assembly-CSharp.dll::FirstTimeElementActivator::
     FirstTimeElementActivator_RegisterActivatableElement
               (FirstTimeElementActivator *this,
               IActivatableFirstTimeUiElement *firstTimeEventHandlerListener,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).activatableUiElements;
  if (firstTimeEventHandlerListener != (IActivatableFirstTimeUiElement *)0x0) {
    FVar2 = func_?(0,TypeInfo__IActivatableFirstTimeUiElement,firstTimeEventHandlerListener
                           );
    if (pDVar1 != (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_
                   *)0x0) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MetaData::
              FirstTimeEvent,System::Object]::
              Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_System_Object__ContainsKey
                        ((Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_System_Object_ *)
                         pDVar1,FVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__ContainsKey_MV__WorldObject__MetaData__FirstTimeEvent_
                        );
      if (bVar3 == 0) {
        pDVar1 = (this->fields).activatableUiElements;
        FVar2 = func_?(0,TypeInfo__IActivatableFirstTimeUiElement,
                                firstTimeEventHandlerListener);
        if (pDVar1 == (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MetaData::
        FirstTimeEvent,System::Object]::
        Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_System_Object__Add
                  ((Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_System_Object_ *)pDVar1,
                   FVar2,(Object *)firstTimeEventHandlerListener,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Add_MV__WorldObject__MetaData__FirstTimeEvent__IActivatableFirstTimeUiElement_
                  );
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RequestEvaluateActivatableElements() */

void Assembly-CSharp.dll::FirstTimeElementActivator::
     FirstTimeElementActivator_RequestEvaluateActivatableElements
               (FirstTimeElementActivator *this,MethodInfo *method)

{
  (this->fields).evaluateActivatableElements = 1;
  return;
}


/* Void SkipFirstTimeEvent(FirstTimeEvent, FirstTimeActivatableElementBase) */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator_SkipFirstTimeEvent
               (FirstTimeElementActivator *this,FirstTimeEvent__Enum firstTimeEvent,
               FirstTimeActivatableElementBase *firstTimeActivatable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  method_00 = (MethodInfo *)&UNK_?;
  bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_SkipEvent,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    this_00 = (ScaleAnimationBase *)
              func_?(
                             TypeInfo__FirstTimeElementActivator___SkipFirstTimeEvent_c__AnonStorey0
                             );
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
    pXVar2 = (XpBoostParticlePreviewer *)(this->fields).firstTimeSkipPopup;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pXVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                       (pXVar2,
                        FirstTimeEventSkipPopup_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventSkipPopup>_FirstTimeEventSkipPopup_
                       );
    if ((this_00 != (ScaleAnimationBase *)0x0) &&
       ((this_00->fields)._._._._.m_CachedPtr = pXVar2, pXVar2 != (XpBoostParticlePreviewer *)0x0))
    {
      (pXVar2->fields).previewCam = (Camera *)firstTimeEvent;
      (pXVar2->fields).layersToRender = (int32_t)firstTimeActivatable;
      pUVar3 = (this->fields).uiStack;
      if (pUVar3 != (UIStack *)0x0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pUVar3,(MethodInfo *)0x0);
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)this_00,
                   MethodInfo__FirstTimeElementActivator___SkipFirstTimeEvent_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
        ExecuteEvents_ExecuteHierarchy_63
                  (pGVar4,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)pUVar5,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  else {
    pUVar3 = (this->fields).uiStack;
    if (pUVar3 != (UIStack *)0x0) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pUVar3,(MethodInfo *)0x0);
      if (TypeInfo__FirstTimeElementActivator->static_fields->__f__am_cache0 ==
          (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar5,(Object *)0x0,
                   MethodInfo__FirstTimeElementActivator___SkipFirstTimeEvent_m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,
                   MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                  );
        TypeInfo__FirstTimeElementActivator->static_fields->__f__am_cache0 =
             (ExecuteEvents_EventFunction_1_IUIStack_ *)pUVar5;
      }
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
           TypeInfo__FirstTimeElementActivator->static_fields->__f__am_cache0;
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (pGVar4,(BaseEventData *)0x0,callbackFunction,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
        func_?();
      }
      FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
                (firstTimeEvent,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)firstTimeEvent,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator_Start
               (FirstTimeElementActivator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pAVar1 = MVGameControllerBase::MVGameControllerBase_get_OnJoinStateChanged((MethodInfo *)0x0);
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<MVJoinState>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,
             MethodInfo__FirstTimeElementActivator__OnJoinStateChanged_MVJoinState_,
             MethodInfo__System__Action<MVJoinState>__Action_System__Object__void__);
  pAVar3 = (Action_1_MVJoinState_ *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)pUVar2,(MethodInfo *)0x0);
  pAVar1 = (Action_1_MVJoinState_ *)0x0;
  if (pAVar3 == (Action_1_MVJoinState_ *)0x0) {
code_?:
    MVGameControllerBase::MVGameControllerBase_set_OnJoinStateChanged(pAVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).uiStack;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,MethodInfo__FirstTimeElementActivator__OnStackChange__,
               (MethodInfo *)0x0);
    if (this_00 == (UIStack *)0x0) goto code_?;
    UIStack::UIStack_SubscribeToStackChanges(this_00,(Action *)pUVar2,(MethodInfo *)0x0);
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__FirstTimeElementActivator__FirstTimeStateReceiver_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
               ,
               MethodInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>__Action_System__Object__void__
              );
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?();
    }
    FirstTimeEventManager::FirstTimeEventManager_SubscribeToFirstTimeState
              ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                *)pUVar2,(MethodInfo *)0x0);
    (this->fields).evaluateActivatableElements = 1;
    pAVar4 = TypeInfo__FirstTimeEventManager->static_fields->XPRewarded;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,MethodInfo__FirstTimeElementActivator__OnXPRewarded__,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar4,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pAVar4 = (Action *)0x0;
    if (pAVar5 == (Action *)0x0) {
code_?:
      TypeInfo__FirstTimeEventManager->static_fields->XPRewarded = pAVar4;
      return;
    }
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar5;
    }
    if (pAVar4 != (Action *)0x0) goto code_?;
  }
  else {
    if (pAVar3->klass == TypeInfo__System__Action<MVJoinState>) {
      pAVar1 = pAVar3;
    }
    if (pAVar1 != (Action_1_MVJoinState_ *)0x0) goto code_?;
    func_?();
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UnRegisterActivatableElement(IActivatableFirstTimeUiElement) */

void Assembly-CSharp.dll::FirstTimeElementActivator::
     FirstTimeElementActivator_UnRegisterActivatableElement
               (FirstTimeElementActivator *this,
               IActivatableFirstTimeUiElement *firstTimeEventHandlerListener,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).activatableUiElements;
  if (firstTimeEventHandlerListener != (IActivatableFirstTimeUiElement *)0x0) {
    key = func_?(0,TypeInfo__IActivatableFirstTimeUiElement,firstTimeEventHandlerListener);
    if (this_00 !=
        (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_ *)0x0)
    {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::MetaData::
      FirstTimeEvent,System::Object]::
      Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_System_Object__Remove
                ((Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_System_Object_ *)this_00,key,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Remove_MV__WorldObject__MetaData__FirstTimeEvent_
                );
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <SkipFirstTimeEvent>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeElementActivator::
     FirstTimeElementActivator__SkipFirstTimeEvent_m__0
               (IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (x != (IUIStack *)0x0) {
    func_?(3,TypeInfo__UnityEngine__EventSystems__IUIStack,x,0x20);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* FirstTimeElementActivator() */

void Assembly-CSharp.dll::FirstTimeElementActivator::FirstTimeElementActivator__ctor
               (FirstTimeElementActivator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_MetaData_FirstTimeEvent_IActivatableFirstTimeUiElement_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::FirstTimeEvent,_IActivatableFirstTimeUiElement>__Dictionary__
            );
  (this->fields).activatableUiElements = this_00;
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::MetaData::FirstTimeEvent>__List__
            );
  (this->fields).elementsToRemove = (List_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)this_01;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

