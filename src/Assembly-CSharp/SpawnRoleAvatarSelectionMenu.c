
/* Void AddSelectionElement(Int32) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::
     SpawnRoleAvatarSelectionMenu_AddSelectionElement
               (SpawnRoleAvatarSelectionMenu *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).avatarSelectionDataList;
  if (pLVar1 != (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
    pSVar2 = mscorlib.dll::System::Collections::Generic::List`1[SpawnRoleAvatarSelectionData]::
             List_1_SpawnRoleAvatarSelectionData__get_Item
                       ((SpawnRoleAvatarSelectionData *)&stack0xffffffe4,pLVar1,index,
                        MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                       );
    this_00 = pSVar2->avatar;
    if ((DayNightCycle *)this_00 != (DayNightCycle *)0x0) {
      pCVar3 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                         ((DayNightCycle *)this_00,(MethodInfo *)0x0);
      if (pCVar3 != (CelestialParam *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)pCVar3,1,(MethodInfo *)0x0);
        original = (this->fields).avatarSelectionElementPrefab;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            ((XpBoostParticlePreviewer *)original,
                             SpawnRoleAvatarSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleAvatarSelectionElement>_SpawnRoleAvatarSelectionElement_
                            );
        if (this_03 != (XpBoostParticlePreviewer *)0x0) {
          this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)this_03,(MethodInfo *)0x0);
          if (this_04 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      (this_04,(Transform *)(this->fields).avatarElementContainer,0,
                       (MethodInfo *)0x0);
            pLVar1 = (this->fields).avatarSelectionDataList;
            if (pLVar1 != (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
              pSVar2 = mscorlib.dll::System::Collections::Generic::
                       List`1[SpawnRoleAvatarSelectionData]::
                       List_1_SpawnRoleAvatarSelectionData__get_Item
                                 ((SpawnRoleAvatarSelectionData *)&stack0xffffffe4,pLVar1,index,
                                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                                 );
              iVar4 = pSVar2->avatarId;
              this_05 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                         *)func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (this_05,(Object *)this,
                         MethodInfo__SpawnRoleAvatarSelectionMenu__OnAvatarSelected_int_,
                         MethodInfo__UnityEngine__Events__UnityAction<int>__UnityAction_System__Object__void__
                        );
              puRam_? = &UNK_?;
              pLVar1 = (this->fields).avatarSelectionDataList;
              iRam_? = iVar4;
              pURam0000002c = this_05;
              if (pLVar1 != (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
                pSVar2 = mscorlib.dll::System::Collections::Generic::
                         List`1[SpawnRoleAvatarSelectionData]::
                         List_1_SpawnRoleAvatarSelectionData__get_Item
                                   ((SpawnRoleAvatarSelectionData *)&stack0xffffffe4,pLVar1,
                                    0xADDR,
                                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                                   );
                this_01 = pSVar2->avatar;
                if ((DayNightCycle *)this_01 != (DayNightCycle *)0x0) {
                  pCVar3 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                     ((DayNightCycle *)this_01,(MethodInfo *)0x0);
                  SpawnRoleAvatarSelectionElement::SpawnRoleAvatarSelectionElement_SetupPreviewImage
                            ((SpawnRoleAvatarSelectionElement *)0x0,(GameObject *)pCVar3,
                             (MethodInfo *)0x0);
                  this_02 = (this->fields).selectionElements;
                  if (this_02 != (List_1_SpawnRoleAvatarSelectionElement_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                    List_1_UIPushOption__Add
                              ((List_1_UIPushOption_ *)this_02,UIPushOption__Enum_None,
                               MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__Add_SpawnRoleAvatarSelectionElement_
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HideElements(Int32, Int32, Int32) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::SpawnRoleAvatarSelectionMenu_HideElements
               (SpawnRoleAvatarSelectionMenu *this,int32_t previousStartElement,
               int32_t amoutOfElements,int32_t newStartElement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = amoutOfElements + previousStartElement;
  do {
    if (iVar1 <= previousStartElement) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (-1 < previousStartElement) {
      pLVar2 = (this->fields).selectionElements;
      if (pLVar2 == (List_1_SpawnRoleAvatarSelectionElement_ *)0x0) goto code_?;
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Count__
                         );
      if ((previousStartElement < (int)pOVar3) &&
         ((previousStartElement < newStartElement ||
          ((this->fields).maxSelectionElementsOnScreen + newStartElement < previousStartElement))))
      {
        pLVar2 = (this->fields).selectionElements;
        if ((pLVar2 == (List_1_SpawnRoleAvatarSelectionElement_ *)0x0) ||
           ((this_00 = (SpawnRoleAvatarSelectionElement *)
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                                  previousStartElement,
                                  MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Item_int_
                                 ), this_00 == (SpawnRoleAvatarSelectionElement *)0x0 ||
            (SpawnRoleAvatarSelectionElement::SpawnRoleAvatarSelectionElement_Deactivate
                       (this_00,(MethodInfo *)0x0),
            (this->fields).avatarSelectionDataList == (List_1_SpawnRoleAvatarSelectionData_ *)0x0)))
           ) {
code_?:
          func_?(0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar5 = (undefined8 *)func_?();
        pDStack_6 = (DayNightCycle *)*puVar5;
        if ((pDStack_6 == (DayNightCycle *)0x0) ||
           (this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                (pDStack_6,(MethodInfo *)0x0), this_01 == (CelestialParam *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)this_01,0,(MethodInfo *)0x0);
      }
    }
    previousStartElement = previousStartElement + 1;
  } while( true );
}


/* Void Initialize(Int32) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::SpawnRoleAvatarSelectionMenu_Initialize
               (SpawnRoleAvatarSelectionMenu *this,int32_t spawnRoleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).spawnRoleId = spawnRoleId;
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__SpawnRoleAvatarSelectionMenu___Initialize_m__0_UnityEngine__EventSystems__IHandleSpawnRoleAvatarSelectionData__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>_
            );
  return;
}


/* Boolean IsIndexWithinBounds(Int32) */

bool Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::
     SpawnRoleAvatarSelectionMenu_IsIndexWithinBounds
               (SpawnRoleAvatarSelectionMenu *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (index < 0) {
    return 0;
  }
  this_00 = (this->fields).selectionElements;
  if (this_00 != (List_1_SpawnRoleAvatarSelectionElement_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Count__
                       );
    return index < (int)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void OnAvatarSelected(Int32) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::
     SpawnRoleAvatarSelectionMenu_OnAvatarSelected
               (SpawnRoleAvatarSelectionMenu *this,int32_t avatarId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (MVJetPack *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVJetPack *)0x0) {
    this_01 = MVJetPack::MVJetPack_get_Shield(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSpawnRoleBody
                ((MVNetworkGame_OperationRequests *)this_01,(this->fields).spawnRoleId,avatarId,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::SpawnRoleAvatarSelectionMenu_OnDestroy
               (SpawnRoleAvatarSelectionMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).avatarSelectionDataList;
  if (pLVar1 == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
    return;
  }
  index = 0;
  do {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Count__
                       );
    if ((int)pOVar2 <= index) {
      return;
    }
    pLVar1 = (this->fields).avatarSelectionDataList;
    if (pLVar1 == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) break;
    pSVar3 = mscorlib.dll::System::Collections::Generic::List`1[SpawnRoleAvatarSelectionData]::
             List_1_SpawnRoleAvatarSelectionData__get_Item
                       ((SpawnRoleAvatarSelectionData *)&pMStack_4,pLVar1,index,
                        MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                       );
    this_00 = pSVar3->avatar;
    if ((DayNightCycle *)this_00 == (DayNightCycle *)0x0) break;
    this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)this_00,(MethodInfo *)0x0);
    if (this_01 == (CelestialParam *)0x0) break;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              ((GameObject *)this_01,0,(MethodInfo *)0x0);
    pLVar1 = (this->fields).avatarSelectionDataList;
    index = index + 1;
  } while (pLVar1 != (List_1_SpawnRoleAvatarSelectionData_ *)0x0);
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnScrollValueChanged() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::
     SpawnRoleAvatarSelectionMenu_OnScrollValueChanged
               (SpawnRoleAvatarSelectionMenu *this,MethodInfo *method)

{
  if ((this->fields).avatarSelectionDataList == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).scrollBar;
  if (this_00 != (Scrollbar *)0x0) {
    fVar1 = UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_get_value
                      (this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).avatarSelectionDataList;
    if (this_01 != (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Count__
                         );
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                        ((float)(int)pOVar2 * fVar1,(MethodInfo *)0x0);
      newStartElement =
           UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                     ((float)iVar3 -
                      (float)(this->fields).maxSelectionElementsOnScreen * _UNK_?,
                      (MethodInfo *)0x0);
      iVar3 = (this->fields).currentSelectionStartIndex;
      this_02 = (this->fields).selectionElements;
      if (this_02 != (List_1_SpawnRoleAvatarSelectionElement_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                            MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Count__
                           );
        SpawnRoleAvatarSelectionMenu_HideElements
                  (this,iVar3,(int32_t)pOVar2,newStartElement,(MethodInfo *)0x0);
        SpawnRoleAvatarSelectionMenu_ShowElements(this,newStartElement,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnSpawnRoleAvatarDataRecieved(List`1[SpawnRoleAvatarSelectionData]) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::
     SpawnRoleAvatarSelectionMenu_OnSpawnRoleAvatarDataRecieved
               (SpawnRoleAvatarSelectionMenu *this,
               List_1_SpawnRoleAvatarSelectionData_ *avatarSelectionDataList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).loadingWheel;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    index = 0;
    (this->fields).avatarSelectionDataList = avatarSelectionDataList;
    if (avatarSelectionDataList != (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
      while( true ) {
        pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                            avatarSelectionDataList,
                            MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Count__
                           );
        if ((int)pOVar1 <= index) break;
        SpawnRoleAvatarSelectionMenu_AddSelectionElement(this,index,(MethodInfo *)0x0);
        index = index + 1;
      }
      SpawnRoleAvatarSelectionMenu_HideElements
                (this,0,(this->fields).maxSelectionElementsOnScreen,0,(MethodInfo *)0x0);
      SpawnRoleAvatarSelectionMenu_ShowElements(this,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowElements(Int32) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::SpawnRoleAvatarSelectionMenu_ShowElements
               (SpawnRoleAvatarSelectionMenu *this,int32_t startElementIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).currentSelectionStartIndex = startElementIndex;
  index = startElementIndex;
  if (startElementIndex < (this->fields).maxSelectionElementsOnScreen + startElementIndex) {
    do {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if (-1 < index) {
        pLVar1 = (this->fields).selectionElements;
        if (pLVar1 == (List_1_SpawnRoleAvatarSelectionElement_ *)0x0) goto code_?;
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                            MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Count__
                           );
        if (index < (int)pOVar2) {
          pLVar1 = (this->fields).selectionElements;
          if (pLVar1 == (List_1_SpawnRoleAvatarSelectionElement_ *)0x0) {
code_?:
            func_?(0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          this_00 = (SpawnRoleAvatarSelectionElement *)
                    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                               MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Item_int_
                              );
          if (this_00 == (SpawnRoleAvatarSelectionElement *)0x0) goto code_?;
          SpawnRoleAvatarSelectionElement::SpawnRoleAvatarSelectionElement_Activate
                    (this_00,(MethodInfo *)0x0);
          if ((this->fields).avatarSelectionDataList == (List_1_SpawnRoleAvatarSelectionData_ *)0x0)
          goto code_?;
          puVar4 = (undefined8 *)func_?();
          pDStack_5 = (DayNightCycle *)*puVar4;
          if (pDStack_5 == (DayNightCycle *)0x0) goto code_?;
          this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(pDStack_5,(MethodInfo *)0x0);
          if (this_01 == (CelestialParam *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_01,1,(MethodInfo *)0x0);
        }
      }
      index = index + 1;
    } while (index < (this->fields).maxSelectionElementsOnScreen + startElementIndex);
  }
  return;
}


/* Void UpdateShownElements() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::
     SpawnRoleAvatarSelectionMenu_UpdateShownElements
               (SpawnRoleAvatarSelectionMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).scrollBar;
  if (this_00 != (Scrollbar *)0x0) {
    fVar1 = UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_get_value
                      (this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).avatarSelectionDataList;
    if (this_01 != (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                          MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Count__
                         );
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                        ((float)(int)pOVar2 * fVar1,(MethodInfo *)0x0);
      newStartElement =
           UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                     ((float)iVar3 -
                      (float)(this->fields).maxSelectionElementsOnScreen * _UNK_?,
                      (MethodInfo *)0x0);
      iVar3 = (this->fields).currentSelectionStartIndex;
      this_02 = (this->fields).selectionElements;
      if (this_02 != (List_1_SpawnRoleAvatarSelectionElement_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_02,
                            MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Count__
                           );
        SpawnRoleAvatarSelectionMenu_HideElements
                  (this,iVar3,(int32_t)pOVar2,newStartElement,(MethodInfo *)0x0);
        SpawnRoleAvatarSelectionMenu_ShowElements(this,newStartElement,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <Initialize>m__0(IHandleSpawnRoleAvatarSelectionData, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::
     SpawnRoleAvatarSelectionMenu__Initialize_m__0
               (SpawnRoleAvatarSelectionMenu *this,IHandleSpawnRoleAvatarSelectionData *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::List<SpawnRoleAvatarSelectionData>_>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__SpawnRoleAvatarSelectionMenu__OnSpawnRoleAvatarDataRecieved_System__Collections__Generic__List<SpawnRoleAvatarSelectionData>_
             ,
             MethodInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::List<SpawnRoleAvatarSelectionData>_>__UnityAction_System__Object__void__
            );
  if (handler == (IHandleSpawnRoleAvatarSelectionData *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = handler->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IHandleSpawnRoleAvatarSelectionData) {
        ppMVar5 = &(&handler->klass->vtable)[pIVar2->interfaceOffsets[uVar3].offset].
                   TryGetSpawnRoleAvatarSelectionData.method;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  ppMVar5 = (MethodInfo **)
            func_?(handler,
                            TypeInfo__UnityEngine__EventSystems__IHandleSpawnRoleAvatarSelectionData
                            ,0);
code_?:
  (*(code *)*ppMVar5)(handler,ppMVar5[1]);
  return;
}


/* SpawnRoleAvatarSelectionMenu() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::SpawnRoleAvatarSelectionMenu__ctor
               (SpawnRoleAvatarSelectionMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).maxSelectionElementsOnScreen = 10;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__List__
            );
  (this->fields).selectionElements = (List_1_SpawnRoleAvatarSelectionElement_ *)this_00;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

