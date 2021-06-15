
/* Void FindStackParent(Transform, Int32 ByRef) */

void Assembly-CSharp.dll::UIStack::UIStack_FindStackParent
               (UIStack *this,Transform *uiElement,int32_t *index,MethodInfo *method)

{
  while( true ) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    index_00 = 0;
    while( true ) {
      pLVar1 = (this->fields).stackableUiElements;
      if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                         );
      if ((int)pOVar2 <= index_00) break;
      pLVar1 = (this->fields).stackableUiElements;
      if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index_00,
                          MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                         );
      if ((pIVar3 == (IEventSystemHandler *)0x0) ||
         (pIVar3[1].klass == (IEventSystemHandler__Class *)0x0)) goto code_?;
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)pIVar3[1].klass,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      uiElement = (Transform *)0x0;
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        *index = index_00;
        return;
      }
      index_00 = index_00 + 1;
    }
    if (uiElement == (Transform *)0x0) break;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)uiElement,(MethodInfo *)0x0);
    if (pTVar4 == (Transform *)0x0) break;
    uiElement = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                          (pTVar4,(MethodInfo *)0x0);
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HideAll() */

void Assembly-CSharp.dll::UIStack::UIStack_HideAll(UIStack *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
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
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).stackableUiElements;
  puStack_4 = &stack0xffffffbc;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_4 = &stack0xffffffbc;
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar7->l;
    CStack_6.monitor = (MonitorData *)pLVar7->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar7->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar7->current).rgba;
    uStack_1 = 0;
    while( true ) {
      cVar9 = func_?();
      if (cVar9 == '\0') {
        uStack_1 = 0xffffffff;
        func_?(&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
                       );
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__get_Current__
                         );
      if ((pOVar10 == (Object *)0x0) || (pOVar10[1].klass == (Object__Class *)0x0)) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pOVar10[1].klass,0,(MethodInfo *)0x0);
    }
  }
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void HideAllExceptStackBottom() */

void Assembly-CSharp.dll::UIStack::UIStack_HideAllExceptStackBottom
               (UIStack *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
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
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).stackableUiElements;
  puStack_4 = &stack0xffffffbc;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_4 = &stack0xffffffbc;
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_8,this_00,
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__GetEnumerator__
                       );
    CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar7->l;
    CStack_6.monitor = (MonitorData *)pLVar7->next;
    CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar7->ver;
    CStack_6.fields.syncRoot = (Object *)(pLVar7->current).rgba;
    uStack_1 = 0;
    while( true ) {
      do {
        cVar9 = func_?(&CStack_6,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                               );
        if (cVar9 == '\0') {
          uStack_1 = 0xffffffff;
          func_?(&CStack_6,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
                         );
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pOVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           (&CStack_6,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__get_Current__
                           );
        if (pOVar10 == (Object *)0x0) goto code_?;
      } while (pOVar10[3].klass == (Object__Class *)0x100);
      if (pOVar10[1].klass == (Object__Class *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pOVar10[1].klass,0,(MethodInfo *)0x0);
    }
  }
code_?:
  func_?(0);
  func_?(0,0,0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean IsStackEmpty() */

bool Assembly-CSharp.dll::UIStack::UIStack_IsStackEmpty(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).stackableUiElements;
  if (this_00 != (List_1_UIStack_StackElement_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                       );
    return (int)pOVar1 < 3;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsUIElementBlocked(GameObject) */

bool Assembly-CSharp.dll::UIStack::UIStack_IsUIElementBlocked
               (UIStack *this,GameObject *uiElement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0xffffffff;
  if (uiElement != (GameObject *)0x0) {
    uiElement_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (uiElement,(MethodInfo *)0x0);
    UIStack_FindStackParent(this,uiElement_00,(int32_t *)&puStack_1,(MethodInfo *)0x0);
    if (puStack_1 == (undefined *)0xffffffff) {
      pSVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)uiElement,(MethodInfo *)0x0);
      pOVar3 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar2 = mscorlib.dll::System::String::String_Concat_1
                         ((Object *)pSVar2,(Object *)StringLiteral_IsUIElementBlocked_index____,
                          pOVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)pSVar2,(MethodInfo *)0x0);
      return 0;
    }
    puStack_1 = puStack_1 + 1;
    pLVar4 = (this->fields).stackableUiElements;
    if (pLVar4 != (List_1_UIStack_StackElement_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                          MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                         );
      if ((int)pOVar3 <= (int)puStack_1) {
        return 0;
      }
      pLVar4 = (this->fields).stackableUiElements;
      index = puStack_1;
      while (pLVar4 != (List_1_UIStack_StackElement_ *)0x0) {
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar4,
                            MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                           );
        if ((int)pOVar3 <= (int)index) {
          return 0;
        }
        pLVar4 = (this->fields).stackableUiElements;
        if ((pLVar4 == (List_1_UIStack_StackElement_ *)0x0) ||
           (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar4,
                                (int32_t)index,
                                MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                               ), pIVar5 == (IEventSystemHandler *)0x0)) break;
        if (*(char *)&pIVar5[1].monitor != '\0') {
          return 1;
        }
        index = index + 1;
        pLVar4 = (this->fields).stackableUiElements;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::UIStack::UIStack_LateUpdate(UIStack *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
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
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).stackableUiElements;
  puStack_4 = &stack0xffffffbc;
  if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) {
code_?:
    func_?(0);
    func_?(0,0);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puStack_4 = &stack0xffffffbc;
  pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
           List_1_UnityEngine_Color32__GetEnumerator
                     ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_9,this_00,
                      MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__GetEnumerator__
                     );
  CStack_6.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar8->l;
  CStack_6.monitor = (MonitorData *)pLVar8->next;
  CStack_6.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar8->ver;
  CStack_6.fields.syncRoot = (Object *)(pLVar8->current).rgba;
  uStack_1 = 0;
  do {
    cVar10 = func_?(&CStack_6,
                            MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                           );
    if (cVar10 == '\0') goto code_?;
    pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       (&CStack_6,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__get_Current__
                       );
    if (pOVar11 == (Object *)0x0) goto code_?;
  } while (*(char *)&pOVar11[1].monitor == '\0');
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  MVInputWrapper::MVInputWrapper_SuppressShortcutKeys((MethodInfo *)0x0);
code_?:
  uStack_1 = 0xffffffff;
  func_?(&CStack_6);
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* GameObject Peak() */

GameObject * Assembly-CSharp.dll::UIStack::UIStack_Peak(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).stackableUiElements;
  if (this_00 != (List_1_UIStack_StackElement_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                       );
    pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                        (int32_t)((int)&pOVar1[-1].monitor + 3),
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                       );
    if (pIVar2 != (IEventSystemHandler *)0x0) {
      return (GameObject *)pIVar2[1].klass;
    }
  }
  uStack3 = 0;
  func_?();
  pcVar4 = (code *)swi(3);
  pGVar5 = (GameObject *)(*pcVar4)();
  return pGVar5;
}


/* Void Pop() */

void Assembly-CSharp.dll::UIStack::UIStack_Pop(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).stackableUiElements;
  if (this_00 != (List_1_UIStack_StackElement_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                       );
    UIStack_RemoveElement(this,(int32_t)((int)&pOVar1[-1].monitor + 3),(MethodInfo *)0x0);
    UIStack_UpdateStack(this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PopGroups(UIGroupFlags) */

void Assembly-CSharp.dll::UIStack::UIStack_PopGroups
               (UIStack *this,UIGroupFlags__Enum popGroups,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) {
code_?:
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                      MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                     );
  if (0 < (int)pOVar3) {
    index = (undefined1 *)((int)&pOVar3[-1].monitor + 3);
    do {
      pLVar1 = (this->fields).stackableUiElements;
      if ((pLVar1 == (List_1_UIStack_StackElement_ *)0x0) ||
         (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                              (int32_t)index,
                              MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                             ), pIVar4 == (IEventSystemHandler *)0x0)) goto code_?;
      if (0 < (int)((uint)pIVar4[3].klass & popGroups)) {
        UIStack_RemoveElement(this,(int32_t)index,(MethodInfo *)0x0);
      }
      index = index + -1;
    } while (-1 < (int)index);
  }
  UIStack_UpdateStack(this,(MethodInfo *)0x0);
  return;
}


/* Void PopToGroup(UIGroupFlags) */

void Assembly-CSharp.dll::UIStack::UIStack_PopToGroup
               (UIStack *this,UIGroupFlags__Enum group,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb0;
  puVar5 = &stack0xffffffb0;
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
  func_?();
  cStack_8 = '\0';
  uStack_9 = 0;
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).stackableUiElements;
  puStack_10 = (undefined4 *)&stack0xffffffb0;
  puStack_4 = &stack0xffffffb0;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    puStack_10 = (undefined4 *)&stack0xffffffb0;
    puStack_4 = &stack0xffffffb0;
    pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)auStack_12,this_00,
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__GetEnumerator__
                       );
    CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar11->l;
    CStack_7.monitor = (MonitorData *)pLVar11->next;
    CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar11->ver;
    CStack_7.fields.syncRoot = (Object *)(pLVar11->current).rgba;
    uStack_1 = 0;
    do {
      cVar13 = func_?(&CStack_7,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__MoveNext__
                             );
      if (cVar13 == '\0') goto code_?;
      pOVar14 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         (&CStack_7,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__get_Current__
                         );
      if (pOVar14 == (Object *)0x0) goto code_?;
    } while (pOVar14[3].klass != (Object__Class *)group);
    cStack_8 = '\x01';
code_?:
    *puStack_10 = 0x4d;
    uStack_1 = 0xffffffff;
    func_?(&CStack_7,
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__Dispose__
                   );
    iVar15 = iStack_6;
    if (iStack_6 != 0) goto code_?;
    if (cStack_8 == '\0') {
      if ((((uint)(TypeInfo__UnityEngine__StackTraceUtility->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__UnityEngine__StackTraceUtility->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__StackTraceUtility);
      }
      message = UnityEngine.CoreModule.dll::UnityEngine::StackTraceUtility::
                StackTraceUtility_ExtractStackTrace((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_PopToGroup__Element_not_found_ab,(MethodInfo *)0x0);
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    this_01 = (this->fields).stackableUiElements;
    while (((this_01 != (List_1_UIStack_StackElement_ *)0x0 &&
            (pOVar14 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01
                                 ,
                                 MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                                ), this_01 != (List_1_UIStack_StackElement_ *)0x0)) &&
           (pIVar16 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,
                                (int32_t)((int)&pOVar14[-1].monitor + 3),
                                MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                               ), pIVar16 != (IEventSystemHandler *)0x0))) {
      if (pIVar16[3].klass == (IEventSystemHandler__Class *)group) goto code_?;
      UIStack_Pop(this,(MethodInfo *)0x0);
      this_01 = (this->fields).stackableUiElements;
    }
  }
code_?:
  iVar15 = func_?(0);
code_?:
  func_?(iVar15,0,0);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Boolean PopToStackElement(GameObject) */

bool Assembly-CSharp.dll::UIStack::UIStack_PopToStackElement
               (UIStack *this,GameObject *gameObject,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCStack_4 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  func_?();
  bVar5 = false;
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).stackableUiElements;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
             List_1_UnityEngine_Color32__GetEnumerator
                       ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffc0,this_00,
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__GetEnumerator__
                       );
    pCStack_4 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar6->l;
    uStack_1 = 0;
    do {
      cVar7 = func_?();
      if (cVar7 == '\0') goto code_?;
      pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)&pCStack_4,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UIStack::StackElement>__get_Current__
                         );
      if (pOVar8 == (Object *)0x0) goto code_?;
      unaff_ESI = pOVar8[1].klass;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)unaff_ESI,(Object_1 *)gameObject,(MethodInfo *)0x0);
    } while (bVar9 == 0);
    bVar5 = true;
code_?:
    uStack_1 = 0xffffffff;
    func_?();
    if (!bVar5) {
      if ((((uint)(TypeInfo__UnityEngine__StackTraceUtility->vtable).Equals.methodPtr & 0x2000000)
           != 0) && ((TypeInfo__UnityEngine__StackTraceUtility->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__StackTraceUtility);
      }
      message = UnityEngine.CoreModule.dll::UnityEngine::StackTraceUtility::
                StackTraceUtility_ExtractStackTrace((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)message,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_PopToStackElement__Element_not_f,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return 0;
    }
    while( true ) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      unaff_ESI = (Object__Class *)(this->fields).stackableUiElements;
      if (unaff_ESI == (Object__Class *)0x0) break;
      pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)unaff_ESI,
                          MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                         );
      pIVar10 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)unaff_ESI,
                          (int32_t)((int)&pOVar8[-1].monitor + 3),
                          MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                         );
      if ((pIVar10 == (IEventSystemHandler *)0x0) ||
         (pIVar10[1].klass == (IEventSystemHandler__Class *)0x0)) break;
      in_stack_11 =
           (MethodInfo *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                     ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)pIVar10[1].klass,in_stack_11);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)in_stack_11,(Object_1 *)gameObject,(MethodInfo *)0x0);
      if (bVar9 == 0) {
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
      UIStack_Pop(this,(MethodInfo *)0x0);
    }
  }
code_?:
  func_?(0);
  func_?(unaff_ESI,0,0);
  pcVar12 = (code *)swi(3);
  bVar9 = (*pcVar12)();
  return bVar9;
}


/* Void Push(GameObject, UIPushOption, UnityAction, UIGroupFlags) */

void Assembly-CSharp.dll::UIStack::UIStack_Push
               (UIStack *this,GameObject *gameObject,UIPushOption__Enum pushOption,
               UnityAction *onPop,UIGroupFlags__Enum group,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (group == UIGroupFlags__Enum_None) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)StringLiteral_Group_cannot_be_none_as_this_mak,(MethodInfo *)0x0);
    return;
  }
  bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_IDictionary_get_IsReadOnly
                    ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0,unaff_EDI);
  if (bVar1 != 0) {
    if ((gameObject == (GameObject *)0x0) ||
       (pWVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                           (gameObject,
                            UIStackDebugElement_MethodInfo__UnityEngine__GameObject__AddComponent<UIStackDebugElement>__
                           ), pWVar2 == (Worker *)0x0)) goto code_?;
    pWVar2[1].klass = (Worker__Class *)pushOption;
    pWVar2[1].monitor = (MonitorData *)group;
  }
  index = 0;
  pLVar3 = (this->fields).stackableUiElements;
  if (pLVar3 != (List_1_UIStack_StackElement_ *)0x0) {
    while (iVar4 = index,
          pOVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar3,
                              MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                             ), iVar4 < (int)pOVar5) {
      pLVar3 = (this->fields).stackableUiElements;
      if (((pLVar3 == (List_1_UIStack_StackElement_ *)0x0) ||
          (pIVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar3,index,
                               MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                              ), pIVar6 == (IEventSystemHandler *)0x0)) ||
         (pIVar6[1].klass == (IEventSystemHandler__Class *)0x0)) goto code_?;
      in_stack_7 = (MethodInfo *)&UNK_?;
      iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                        ((Object_1 *)pIVar6[1].klass,(MethodInfo *)0x0);
      if (gameObject == (GameObject *)0x0) goto code_?;
      iVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                        ((Object_1 *)gameObject,(MethodInfo *)0x0);
      if (iVar8 == iVar9) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)StringLiteral_You_cannot_push_an_object_to_the,(MethodInfo *)0x0);
        return;
      }
      pLVar3 = (this->fields).stackableUiElements;
      index = index + 1;
      if (pLVar3 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
    }
    this_03 = (ScaleAnimationBase *)func_?(TypeInfo__UIStack__StackElement);
    ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,in_stack_7);
    if (gameObject != (GameObject *)0x0) {
      pSVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)gameObject,(MethodInfo *)0x0);
      (this_03->fields).target = (Transform *)pSVar10;
      (this_03->fields)._._._._.m_CachedPtr = gameObject;
      bVar11 = (byte)(pushOption >> 2);
      if ((pushOption & UIPushOption__Enum_Blocking) == UIPushOption__Enum_None) {
        bVar12 = bVar11 & 1;
      }
      else {
        bVar12 = 1;
      }
      *(byte *)&(this_03->fields).state = bVar12;
      *(byte *)((int)&(this_03->fields).state + 2) = bVar11 & 1;
      bVar11 = (byte)(pushOption >> 3) & 1;
      (this_03->fields).originalScale.y = (float)onPop;
      *(byte *)((int)&(this_03->fields).state + 1) = (byte)(pushOption >> 1) & 1;
      *(byte *)((int)&(this_03->fields).state + 3) = bVar11;
      *(byte *)&(this_03->fields).originalScale.x = (byte)(pushOption >> 4) & 1;
      (this_03->fields).originalScale.z = (float)group;
      if ((pushOption >> 1 & 1) != 0) {
        UIStack_HideAll(this,(MethodInfo *)0x0);
        bVar11 = *(byte *)((int)&(this_03->fields).state + 3);
      }
      if (bVar11 != 0) {
        UIStack_HideAllExceptStackBottom(this,(MethodInfo *)0x0);
      }
      if ((char)(this_03->fields).state != '\0') {
        pGVar13 = (this->fields).blockingObject;
        if ((pGVar13 == (GameObject *)0x0) ||
           (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar13,(MethodInfo *)0x0), pTVar14 == (Transform *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                  (pTVar14,(MethodInfo *)0x0);
        this_00 = (this->fields).inputBlocker;
        if (this_00 == (DisableInput *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_00,*(bool *)&(this_03->fields).originalScale.x,
                   (MethodInfo *)0x0);
        this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(this->fields).blockingObject;
        if ((this_01 ==
             (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
              *)0x0) ||
           (pGVar13 = (GameObject *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                (this_01,(MethodInfo *)0x0), pGVar13 == (GameObject *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar13,1,(MethodInfo *)0x0);
      }
      pGVar13 = (this_03->fields)._._._._.m_CachedPtr;
      if (pGVar13 != (GameObject *)0x0) {
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar13,(MethodInfo *)0x0);
        pGVar13 = (this->fields).root;
        if ((pGVar13 != (GameObject *)0x0) &&
           (parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar13,(MethodInfo *)0x0), pTVar14 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (pTVar14,parent,0,(MethodInfo *)0x0);
          pGVar13 = (this_03->fields)._._._._.m_CachedPtr;
          if (pGVar13 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar13,1,(MethodInfo *)0x0);
            pLVar3 = (this->fields).stackableUiElements;
            if (pLVar3 != (List_1_UIStack_StackElement_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        ((List_1_UIPushOption_ *)pLVar3,(UIPushOption__Enum)this_03,
                         MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__Add_UIStack__StackElement_
                        );
              if ((this->fields).stackReady == 0) {
                UIStack_HideAll(this,(MethodInfo *)0x0);
              }
              UIStack_UpdateBlocking(this,(MethodInfo *)0x0);
              this_02 = (JumpState_OnWallJumpDelegate *)(this->fields).uiStackChangedPublisher;
              if (this_02 == (JumpState_OnWallJumpDelegate *)0x0) {
                return;
              }
              JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                        (this_02,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void RemoveElement(Int32) */

void Assembly-CSharp.dll::UIStack::UIStack_RemoveElement
               (UIStack *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).stackableUiElements;
  if (this_00 != (List_1_UIStack_StackElement_ *)0x0) {
    pIVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,index,
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                       );
    this_01 = (List_1_MVPlayer_ *)(this->fields).stackableUiElements;
    if (this_01 != (List_1_MVPlayer_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                (this_01,index,
                 MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__RemoveAt_int_
                );
      if (pIVar1 != (IEventSystemHandler *)0x0) {
        if ((AvatarMotor_OnActiveBounceDelegate *)pIVar1[2].monitor !=
            (AvatarMotor_OnActiveBounceDelegate *)0x0) {
          AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
                    ((AvatarMotor_OnActiveBounceDelegate *)pIVar1[2].monitor,(MethodInfo *)0x0);
        }
        obj = pIVar1[1].klass;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetStackReady() */

void Assembly-CSharp.dll::UIStack::UIStack_SetStackReady(UIStack *this,MethodInfo *method)

{
  (this->fields).stackReady = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                       );
    if (pOVar2 == (Object *)0x0) {
      return;
    }
    pLVar1 = (this->fields).stackableUiElements;
    if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                         );
      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                           (int32_t)((int)&pOVar2[-1].monitor + 3),
                           MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                          );
      if ((pIVar3 != (IEventSystemHandler *)0x0) &&
         (pIVar3[1].klass != (IEventSystemHandler__Class *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)pIVar3[1].klass,1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          in_stack_4 = _UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        pLVar1 = (this->fields).stackableUiElements;
        if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
          pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                              MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                             );
          if (1 < (int)pOVar2) {
            pLVar1 = (this->fields).stackableUiElements;
            if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
            pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                                MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                               );
            for (index = (undefined1 *)((int)&pOVar2[-1].monitor + 2); -1 < (int)index;
                index = index + -1) {
              pOVar2 = (Object *)((int)&pOVar2[-1].monitor + 3);
              pLVar1 = (this->fields).stackableUiElements;
              if ((pLVar1 == (List_1_UIStack_StackElement_ *)0x0) ||
                 (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            EventSystems::IEventSystemHandler]::
                            List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                       pLVar1,(int32_t)pOVar2,
                                       MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                                      ), pIVar3 == (IEventSystemHandler *)0x0))
              goto code_?;
              if (*(char *)((int)&pIVar3[1].monitor + 1) != '\0') break;
              pLVar1 = (this->fields).stackableUiElements;
              if ((pLVar1 == (List_1_UIStack_StackElement_ *)0x0) ||
                 (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            EventSystems::IEventSystemHandler]::
                            List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                       pLVar1,(int32_t)pOVar2,
                                       MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                                      ), pIVar3 == (IEventSystemHandler *)0x0))
              goto code_?;
              if (*(char *)((int)&pIVar3[1].monitor + 3) != '\0') break;
              pLVar1 = (this->fields).stackableUiElements;
              if (((pLVar1 == (List_1_UIStack_StackElement_ *)0x0) ||
                  (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                             EventSystems::IEventSystemHandler]::
                             List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                        pLVar1,(int32_t)index,
                                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                                       ), pIVar3 == (IEventSystemHandler *)0x0)) ||
                 (pIVar3[1].klass == (IEventSystemHandler__Class *)0x0)) goto code_?;
              in_stack_5 = (MethodInfo *)0x0;
              in_stack_4 = 1;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        ((GameObject *)pIVar3[1].klass,1,(MethodInfo *)0x0);
            }
          }
          UIStack_UpdateBlocking(this,(MethodInfo *)0x0);
          if ((this->fields).uiStackChangedPublisher == (Action *)0x0) {
            return;
          }
          if (*(JumpState_OnWallJumpDelegate **)(in_stack_4 + 0x2c) !=
              (JumpState_OnWallJumpDelegate *)0x0) {
            JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                      (*(JumpState_OnWallJumpDelegate **)(in_stack_4 + 0x2c),
                       in_stack_5);
          }
          method_00 = *(MethodInfo **)(in_stack_4 + 0x14);
          pcVar6 = *(code **)(in_stack_4 + 8);
          piVar7 = *(int **)(in_stack_4 + 0x10);
          if (method_00->flags == 0xffff) {
            func_?(method_00);
          }
          cVar8 = func_?(method_00);
          if (cVar8 == '\0') {
            if ((char)method_00->iflags == '\0') {
              (*pcVar6)();
              return;
            }
          }
          else if (((method_00->flags != 0xffff) &&
                   ((piVar7 == (int *)0x0 || ((*(uint *)(*piVar7 + 0xa0) & 0x100) == 0)))) &&
                  (*(int *)(in_stack_4 + 0xc) != 0)) {
            cVar8 = func_?(piVar7);
            if (cVar8 != '\0') {
              return;
            }
            method_01 = method_00;
            cVar8 = func_?();
            pOVar2 = mscorlib.dll::System::Collections::Generic::
                     KeyValuePair`2[WinningConditionType,System::Object]::
                     KeyValuePair_2_WinningConditionType_System_Object__get_Value
                               ((KeyValuePair_2_WinningConditionType_System_Object_ *)method_00,
                                method_01);
            cVar9 = func_?(pOVar2);
            if (cVar8 == '\0') {
              if (cVar9 == '\0') {
                (**(code **)(*piVar7 + 0xc0 + (uint)method_00->flags * 8))();
                return;
              }
              mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
              ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                        ((KeyValuePair_2_WinningConditionType_System_Object_ *)method_00,method_00);
              func_?();
              return;
            }
            if (cVar9 == '\0') {
              puVar10 = (undefined4 *)func_?();
              (*(code *)*puVar10)(piVar7,puVar10);
              return;
            }
            uVar11 = 0;
            uVar12 = *(ushort *)(*piVar7 + 0xb6);
            if (uVar12 != 0) {
              do {
                if (*(char **)(*(int *)(*piVar7 + 0x58) + (uint)uVar11 * 8) == method_00->name)
                goto code_?;
                uVar11 = uVar11 + 1;
              } while (uVar11 < uVar12);
            }
            func_?(piVar7);
code_?:
            puVar10 = (undefined4 *)func_?();
            (*(code *)*puVar10)(piVar7,puVar10);
            return;
          }
          (*pcVar6)(piVar7,method_00);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetStackVisible() */

void Assembly-CSharp.dll::UIStack::UIStack_SetStackVisible(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) {
code_?:
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                      MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                     );
  if (1 < (int)pOVar3) {
    pLVar1 = (this->fields).stackableUiElements;
    if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                       );
    for (index = (undefined1 *)((int)&pOVar3[-1].monitor + 2); -1 < (int)index; index = index + -1)
    {
      pOVar3 = (Object *)((int)&pOVar3[-1].monitor + 3);
      pLVar1 = (this->fields).stackableUiElements;
      if ((pLVar1 == (List_1_UIStack_StackElement_ *)0x0) ||
         (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                              (int32_t)pOVar3,
                              MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                             ), pIVar4 == (IEventSystemHandler *)0x0)) goto code_?;
      if (*(char *)((int)&pIVar4[1].monitor + 1) != '\0') {
        return;
      }
      pLVar1 = (this->fields).stackableUiElements;
      if ((pLVar1 == (List_1_UIStack_StackElement_ *)0x0) ||
         (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                              (int32_t)pOVar3,
                              MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                             ), pIVar4 == (IEventSystemHandler *)0x0)) goto code_?;
      if (*(char *)((int)&pIVar4[1].monitor + 3) != '\0') {
        return;
      }
      pLVar1 = (this->fields).stackableUiElements;
      if (((pLVar1 == (List_1_UIStack_StackElement_ *)0x0) ||
          (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                               (int32_t)index,
                               MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                              ), pIVar4 == (IEventSystemHandler *)0x0)) ||
         (pIVar4[1].klass == (IEventSystemHandler__Class *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pIVar4[1].klass,1,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::UIStack::UIStack_Start(UIStack *this,MethodInfo *method)

{
  pIVar1 = (this->fields).blockingObjectImage;
  if (pIVar1 != (Image *)0x0) {
    iVar2 = (*(code *)(pIVar1->klass->vtable).get_color.method)
                      (auStack_3,pIVar1,(pIVar1->klass->vtable).set_color.methodPtr);
    (this->fields).origBlockerAlpha = *(float *)(iVar2 + 0xc);
    return;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SubscribeToStackChanges(Action) */

void Assembly-CSharp.dll::UIStack::UIStack_SubscribeToStackChanges
               (UIStack *this,Action *onStackChanged,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)(this->fields).uiStackChangedPublisher,(Delegate *)onStackChanged,
                      (MethodInfo *)0x0);
  pAVar2 = (Action *)0x0;
  if (pAVar1 != (Action *)0x0) {
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      func_?(pAVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (this->fields).uiStackChangedPublisher = pAVar2;
  return;
}


/* Void UnSubscribeToStackChanges(Action) */

void Assembly-CSharp.dll::UIStack::UIStack_UnSubscribeToStackChanges
               (UIStack *this,Action *onStackChanged,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)(this->fields).uiStackChangedPublisher,(Delegate *)onStackChanged,
                      (MethodInfo *)0x0);
  pAVar2 = (Action *)0x0;
  if (pAVar1 != (Action *)0x0) {
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      func_?(pAVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (this->fields).uiStackChangedPublisher = pAVar2;
  return;
}


/* Void UpdateBlocking() */

void Assembly-CSharp.dll::UIStack::UIStack_UpdateBlocking(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                       );
    for (index_00 = (undefined1 *)((int)&pOVar2[-1].monitor + 3); -1 < (int)index_00;
        index_00 = index_00 + -1) {
      pLVar1 = (this->fields).stackableUiElements;
      if ((pLVar1 == (List_1_UIStack_StackElement_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                              (int32_t)index_00,
                              MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) goto code_?;
      if (*(char *)&pIVar3[1].monitor != '\0') {
        pLVar1 = (this->fields).stackableUiElements;
        if ((pLVar1 == (List_1_UIStack_StackElement_ *)0x0) ||
           (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                (int32_t)index_00,
                                MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                               ), pIVar3 == (IEventSystemHandler *)0x0)) goto code_?;
        pIVar4 = (this->fields).blockingObjectImage;
        if (*(char *)((int)&pIVar3[1].monitor + 2) == '\0') {
          if (pIVar4 == (Image *)0x0) goto code_?;
          puVar5 = (undefined4 *)func_?();
          uVar6 = *puVar5;
          uVar7 = puVar5[1];
          uVar8 = puVar5[2];
          fVar9 = (this->fields).origBlockerAlpha;
        }
        else {
          if (pIVar4 == (Image *)0x0) goto code_?;
          puVar5 = (undefined4 *)func_?();
          uVar6 = *puVar5;
          uVar7 = puVar5[1];
          uVar8 = puVar5[2];
          fVar9 = 0.0;
        }
        pIVar4 = (this->fields).blockingObjectImage;
        if (pIVar4 != (Image *)0x0) {
          func_?(0x17,pIVar4,uVar6,uVar7,uVar8,fVar9);
          pGVar10 = (this->fields).blockingObject;
          if ((pGVar10 != (GameObject *)0x0) &&
             (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar10,(MethodInfo *)0x0), pTVar11 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                      (pTVar11,(MethodInfo *)0x0);
            pLVar1 = (this->fields).stackableUiElements;
            if ((pLVar1 != (List_1_UIStack_StackElement_ *)0x0) &&
               (((pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                           EventSystems::IEventSystemHandler]::
                           List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                     ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1
                                      ,(int32_t)index_00,
                                      MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                                     ), pIVar3 != (IEventSystemHandler *)0x0 &&
                 (pIVar3[1].klass != (IEventSystemHandler__Class *)0x0)) &&
                (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform((GameObject *)pIVar3[1].klass,(MethodInfo *)0x0),
                pTVar11 != (Transform *)0x0)))) {
              index = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetSiblingIndex
                                (pTVar11,(MethodInfo *)0x0);
              pGVar10 = (this->fields).blockingObject;
              if ((pGVar10 != (GameObject *)0x0) &&
                 (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(pGVar10,(MethodInfo *)0x0),
                 pTVar11 != (Transform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetSiblingIndex
                          (pTVar11,index,(MethodInfo *)0x0);
                pDVar12 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)(this->fields).blockingObject;
                if ((pDVar12 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                                *)0x0) &&
                   (pGVar10 = (GameObject *)
                             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]
                             ::
                             Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                       (pDVar12,(MethodInfo *)0x0), pGVar10 != (GameObject *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar10,1,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        goto code_?;
      }
    }
    pGVar10 = (this->fields).blockingObject;
    if ((pGVar10 != (GameObject *)0x0) &&
       (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar10,(MethodInfo *)0x0), pTVar11 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                (pTVar11,(MethodInfo *)0x0);
      pDVar12 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).blockingObject;
      if ((pDVar12 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0) &&
         (pGVar10 = (GameObject *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                             (pDVar12,(MethodInfo *)0x0), pGVar10 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar10,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateStack() */

void Assembly-CSharp.dll::UIStack::UIStack_UpdateStack(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).stackableUiElements;
  if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                       );
    if (pOVar2 == (Object *)0x0) {
      return;
    }
    pLVar1 = (this->fields).stackableUiElements;
    if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                         );
      pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                           (int32_t)((int)&pOVar2[-1].monitor + 3),
                           MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                          );
      if ((pIVar3 != (IEventSystemHandler *)0x0) &&
         (pIVar3[1].klass != (IEventSystemHandler__Class *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)pIVar3[1].klass,1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          in_stack_4 = _UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        pLVar1 = (this->fields).stackableUiElements;
        if (pLVar1 != (List_1_UIStack_StackElement_ *)0x0) {
          pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                              MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                             );
          if (1 < (int)pOVar2) {
            pLVar1 = (this->fields).stackableUiElements;
            if (pLVar1 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
            pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                                MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                               );
            for (index = (undefined1 *)((int)&pOVar2[-1].monitor + 2); -1 < (int)index;
                index = index + -1) {
              pOVar2 = (Object *)((int)&pOVar2[-1].monitor + 3);
              pLVar1 = (this->fields).stackableUiElements;
              if ((pLVar1 == (List_1_UIStack_StackElement_ *)0x0) ||
                 (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            EventSystems::IEventSystemHandler]::
                            List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                       pLVar1,(int32_t)pOVar2,
                                       MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                                      ), pIVar3 == (IEventSystemHandler *)0x0))
              goto code_?;
              if (*(char *)((int)&pIVar3[1].monitor + 1) != '\0') break;
              pLVar1 = (this->fields).stackableUiElements;
              if ((pLVar1 == (List_1_UIStack_StackElement_ *)0x0) ||
                 (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                            EventSystems::IEventSystemHandler]::
                            List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                       pLVar1,(int32_t)pOVar2,
                                       MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                                      ), pIVar3 == (IEventSystemHandler *)0x0))
              goto code_?;
              if (*(char *)((int)&pIVar3[1].monitor + 3) != '\0') break;
              pLVar1 = (this->fields).stackableUiElements;
              if (((pLVar1 == (List_1_UIStack_StackElement_ *)0x0) ||
                  (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                             EventSystems::IEventSystemHandler]::
                             List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                        pLVar1,(int32_t)index,
                                        MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Item_int_
                                       ), pIVar3 == (IEventSystemHandler *)0x0)) ||
                 (pIVar3[1].klass == (IEventSystemHandler__Class *)0x0)) goto code_?;
              in_stack_5 = (MethodInfo *)0x0;
              in_stack_4 = 1;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        ((GameObject *)pIVar3[1].klass,1,(MethodInfo *)0x0);
            }
          }
          UIStack_UpdateBlocking(this,(MethodInfo *)0x0);
          if ((this->fields).uiStackChangedPublisher == (Action *)0x0) {
            return;
          }
          if (*(JumpState_OnWallJumpDelegate **)(in_stack_4 + 0x2c) !=
              (JumpState_OnWallJumpDelegate *)0x0) {
            JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke
                      (*(JumpState_OnWallJumpDelegate **)(in_stack_4 + 0x2c),
                       in_stack_5);
          }
          method_00 = *(MethodInfo **)(in_stack_4 + 0x14);
          pcVar6 = *(code **)(in_stack_4 + 8);
          piVar7 = *(int **)(in_stack_4 + 0x10);
          if (method_00->flags == 0xffff) {
            func_?(method_00);
          }
          cVar8 = func_?(method_00);
          if (cVar8 == '\0') {
            if ((char)method_00->iflags == '\0') {
              (*pcVar6)();
              return;
            }
          }
          else if (((method_00->flags != 0xffff) &&
                   ((piVar7 == (int *)0x0 || ((*(uint *)(*piVar7 + 0xa0) & 0x100) == 0)))) &&
                  (*(int *)(in_stack_4 + 0xc) != 0)) {
            cVar8 = func_?(piVar7);
            if (cVar8 != '\0') {
              return;
            }
            method_01 = method_00;
            cVar8 = func_?();
            pOVar2 = mscorlib.dll::System::Collections::Generic::
                     KeyValuePair`2[WinningConditionType,System::Object]::
                     KeyValuePair_2_WinningConditionType_System_Object__get_Value
                               ((KeyValuePair_2_WinningConditionType_System_Object_ *)method_00,
                                method_01);
            cVar9 = func_?(pOVar2);
            if (cVar8 == '\0') {
              if (cVar9 == '\0') {
                (**(code **)(*piVar7 + 0xc0 + (uint)method_00->flags * 8))();
                return;
              }
              mscorlib.dll::System::Collections::Generic::KeyValuePair`2[WinningConditionType,System
              ::Object]::KeyValuePair_2_WinningConditionType_System_Object__get_Value
                        ((KeyValuePair_2_WinningConditionType_System_Object_ *)method_00,method_00);
              func_?();
              return;
            }
            if (cVar9 == '\0') {
              puVar10 = (undefined4 *)func_?();
              (*(code *)*puVar10)(piVar7,puVar10);
              return;
            }
            uVar11 = 0;
            uVar12 = *(ushort *)(*piVar7 + 0xb6);
            if (uVar12 != 0) {
              do {
                if (*(char **)(*(int *)(*piVar7 + 0x58) + (uint)uVar11 * 8) == method_00->name)
                goto code_?;
                uVar11 = uVar11 + 1;
              } while (uVar11 < uVar12);
            }
            func_?(piVar7);
code_?:
            puVar10 = (undefined4 *)func_?();
            (*(code *)*puVar10)(piVar7,puVar10);
            return;
          }
          (*pcVar6)(piVar7,method_00);
          return;
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* UIStack() */

void Assembly-CSharp.dll::UIStack::UIStack__ctor(UIStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).origBlockerAlpha = 0.5;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UIStack::StackElement>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__List__);
  (this->fields).stackableUiElements = (List_1_UIStack_StackElement_ *)this_00;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_StackReady() */

bool Assembly-CSharp.dll::UIStack::UIStack_get_StackReady(UIStack *this,MethodInfo *method)

{
  return (this->fields).stackReady;
}

