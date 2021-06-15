
/* Void AddContentElement(IGamePassShopContent) */

void Assembly-CSharp.dll::GamePassesShopContentCuller::GamePassesShopContentCuller_AddContentElement
               (GamePassesShopContentCuller *this,IGamePassShopContent *gamePassContentElement,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gamePassShopContentList;
  if (this_00 != (List_1_IGamePassShopContent_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)gamePassContentElement,
               MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HideElements(Int32, Int32, Int32) */

void Assembly-CSharp.dll::GamePassesShopContentCuller::GamePassesShopContentCuller_HideElements
               (GamePassesShopContentCuller *this,int32_t previousStartElement,
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
      this_00 = (this->fields).gamePassShopContentList;
      if (this_00 == (List_1_IGamePassShopContent_ *)0x0) {
code_?:
        func_?(0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                         );
      if ((previousStartElement < (int)pOVar3) &&
         ((previousStartElement < newStartElement ||
          ((this->fields).maxSelectionElementsOnScreen + newStartElement < previousStartElement))))
      {
        this_01 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                  (this->fields).gamePassShopContentList;
        if ((this_01 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
           (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               (this_01,previousStartElement,
                                MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Item_int_
                               ), pIVar4 == (IEventSystemHandler *)0x0)) goto code_?;
        func_?(1,TypeInfo__IGamePassShopContent);
      }
    }
    previousStartElement = previousStartElement + 1;
  } while( true );
}


/* Void Initialize() */

void Assembly-CSharp.dll::GamePassesShopContentCuller::GamePassesShopContentCuller_Initialize
               (GamePassesShopContentCuller *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gamePassShopContentList;
  if (this_00 != (List_1_IGamePassShopContent_ *)0x0) {
    amoutOfElements =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
         Serialization::JsonProperty]::
         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                    MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                   );
    GamePassesShopContentCuller_HideElements(this,0,(int32_t)amoutOfElements,0,(MethodInfo *)0x0);
    GamePassesShopContentCuller_ShowElements(this,0,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean IsIndexWithinBounds(Int32) */

bool Assembly-CSharp.dll::GamePassesShopContentCuller::
     GamePassesShopContentCuller_IsIndexWithinBounds
               (GamePassesShopContentCuller *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (index < 0) {
    return 0;
  }
  this_00 = (this->fields).gamePassShopContentList;
  if (this_00 != (List_1_IGamePassShopContent_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                       );
    return index < (int)pOVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void ShowElements(Int32) */

void Assembly-CSharp.dll::GamePassesShopContentCuller::GamePassesShopContentCuller_ShowElements
               (GamePassesShopContentCuller *this,int32_t startElementIndex,MethodInfo *method)

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
        this_00 = (this->fields).gamePassShopContentList;
        if (this_00 == (List_1_IGamePassShopContent_ *)0x0) {
code_?:
          func_?(0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                            MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                           );
        if (index < (int)pOVar2) {
          this_01 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                    (this->fields).gamePassShopContentList;
          if ((this_01 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
             (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 (this_01,index,
                                  MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Item_int_
                                 ), pIVar3 == (IEventSystemHandler *)0x0)) goto code_?;
          func_?(0,TypeInfo__IGamePassShopContent);
        }
      }
      index = index + 1;
    } while (index < (this->fields).maxSelectionElementsOnScreen + startElementIndex);
  }
  return;
}


/* Void UpdateShownElements() */

void Assembly-CSharp.dll::GamePassesShopContentCuller::
     GamePassesShopContentCuller_UpdateShownElements
               (GamePassesShopContentCuller *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).scrollbar;
  if (this_00 != (Scrollbar *)0x0) {
    fVar1 = UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_get_value
                      (this_00,(MethodInfo *)0x0);
    pLVar2 = (this->fields).gamePassShopContentList;
    if (pLVar2 != (List_1_IGamePassShopContent_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                         );
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                        ((float)(int)pOVar3 * fVar1,(MethodInfo *)0x0);
      newStartElement =
           UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                     ((float)iVar4 -
                      (float)(this->fields).maxSelectionElementsOnScreen * _UNK_?,
                      (MethodInfo *)0x0);
      iVar4 = (this->fields).currentSelectionStartIndex;
      pLVar2 = (this->fields).gamePassShopContentList;
      if (pLVar2 != (List_1_IGamePassShopContent_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                            MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                           );
        GamePassesShopContentCuller_HideElements
                  (this,iVar4,(int32_t)pOVar3,newStartElement,(MethodInfo *)0x0);
        GamePassesShopContentCuller_ShowElements(this,newStartElement,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* GamePassesShopContentCuller() */

void Assembly-CSharp.dll::GamePassesShopContentCuller::GamePassesShopContentCuller__ctor
               (GamePassesShopContentCuller *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<IGamePassShopContent>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__List__);
  (this->fields).gamePassShopContentList = (List_1_IGamePassShopContent_ *)this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}

