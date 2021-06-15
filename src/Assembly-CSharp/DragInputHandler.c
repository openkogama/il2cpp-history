
/* Void AddInputReciever(IDragInputReciever) */

void Assembly-CSharp.dll::DragInputHandler::DragInputHandler_AddInputReciever
               (DragInputHandler *this,IDragInputReciever *newInputReciever,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).dragInputRecievers;
  if (this_00 != (List_1_IDragInputReciever_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)newInputReciever,
               MethodInfo__System__Collections__Generic__List<IDragInputReciever>__Add_IDragInputReciever_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnBeginDrag(PointerEventData) */

void Assembly-CSharp.dll::DragInputHandler::DragInputHandler_OnBeginDrag
               (DragInputHandler *this,PointerEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  this_00 = (this->fields).dragInputRecievers;
  while (this_00 != (List_1_IDragInputReciever_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<IDragInputReciever>__get_Count__
                       );
    if ((int)pOVar2 <= iStack_1) {
      return;
    }
    this_01 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
              (this->fields).dragInputRecievers;
    if ((this_01 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
       (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (this_01,iStack_1,
                            MethodInfo__System__Collections__Generic__List<IDragInputReciever>__get_Item_int_
                           ), pIVar3 == (IEventSystemHandler *)0x0)) break;
    pIVar4 = pIVar3->klass;
    uVar5 = 0;
    uVar6._0_1_ = (pIVar4->_1).rank;
    uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
    if (uVar6 != 0) {
      do {
        if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
            (Il2CppClass *)TypeInfo__IDragInputReciever) {
          ppvVar7 = &pIVar3->klass[1]._0.gc_desc + pIVar4->interfaceOffsets[uVar5].offset * 2;
          goto code_?;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    iStack_1 = 0;
    ppvVar7 = (void **)func_?(pIVar3,TypeInfo__IDragInputReciever);
code_?:
    (**ppvVar7)(pIVar3,ppvVar7[1]);
    iStack_1 = iStack_1 + 1;
    this_00 = (this->fields).dragInputRecievers;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDrag(PointerEventData) */

void Assembly-CSharp.dll::DragInputHandler::DragInputHandler_OnDrag
               (DragInputHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  this_00 = (this->fields).dragInputRecievers;
  while (this_00 != (List_1_IDragInputReciever_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<IDragInputReciever>__get_Count__
                       );
    if ((int)pOVar2 <= iStack_1) {
      return;
    }
    this_01 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
              (this->fields).dragInputRecievers;
    if ((this_01 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
       (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (this_01,iStack_1,
                            MethodInfo__System__Collections__Generic__List<IDragInputReciever>__get_Item_int_
                           ), pIVar3 == (IEventSystemHandler *)0x0)) break;
    pIVar4 = pIVar3->klass;
    uVar5 = 0;
    uVar6._0_1_ = (pIVar4->_1).rank;
    uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
    if (uVar6 != 0) {
      do {
        if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
            (Il2CppClass *)TypeInfo__IDragInputReciever) {
          puVar7 = &(&pIVar3->klass[1]._0.byval_arg)[pIVar4->interfaceOffsets[uVar5].offset].attrs;
          goto code_?;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    iStack_1 = 2;
    puVar7 = (ushort *)func_?(pIVar3,TypeInfo__IDragInputReciever);
code_?:
    (**(code **)puVar7)(pIVar3,*(undefined4 *)(puVar7 + 2));
    iStack_1 = iStack_1 + 1;
    this_00 = (this->fields).dragInputRecievers;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnEndDrag(PointerEventData) */

void Assembly-CSharp.dll::DragInputHandler::DragInputHandler_OnEndDrag
               (DragInputHandler *this,PointerEventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  this_00 = (this->fields).dragInputRecievers;
  while (this_00 != (List_1_IDragInputReciever_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<IDragInputReciever>__get_Count__
                       );
    if ((int)pOVar2 <= iStack_1) {
      return;
    }
    this_01 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
              (this->fields).dragInputRecievers;
    if ((this_01 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) ||
       (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (this_01,iStack_1,
                            MethodInfo__System__Collections__Generic__List<IDragInputReciever>__get_Item_int_
                           ), pIVar3 == (IEventSystemHandler *)0x0)) break;
    pIVar4 = pIVar3->klass;
    uVar5 = 0;
    uVar6._0_1_ = (pIVar4->_1).rank;
    uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
    if (uVar6 != 0) {
      do {
        if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
            (Il2CppClass *)TypeInfo__IDragInputReciever) {
          ppcVar7 = &pIVar3->klass[1]._0.namespaze + pIVar4->interfaceOffsets[uVar5].offset * 2;
          goto code_?;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    iStack_1 = 1;
    ppcVar7 = (char **)func_?(pIVar3,TypeInfo__IDragInputReciever);
code_?:
    (*(code *)*ppcVar7)(pIVar3,(((Il2CppType *)(ppcVar7 + 1))->data).dummy);
    iStack_1 = iStack_1 + 1;
    this_00 = (this->fields).dragInputRecievers;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RemoveInputReciever(IDragInputReciever) */

void Assembly-CSharp.dll::DragInputHandler::DragInputHandler_RemoveInputReciever
               (DragInputHandler *this,IDragInputReciever *inputReciever,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).dragInputRecievers;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    item._4_4_ = 
    MethodInfo__System__Collections__Generic__List<IDragInputReciever>__Remove_IDragInputReciever_;
    item.rgba = (int32_t)inputReciever;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
    List_1_UnityEngine_Color32__Remove(this_00,item,unaff_EBP);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* DragInputHandler() */

void Assembly-CSharp.dll::DragInputHandler::DragInputHandler__ctor
               (DragInputHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<IDragInputReciever>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<IDragInputReciever>__List__);
  (this->fields).dragInputRecievers = (List_1_IDragInputReciever_ *)this_00;
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

