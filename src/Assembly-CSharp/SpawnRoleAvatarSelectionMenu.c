
/* Void AddSelectionElement(Int32) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::
     SpawnRoleAvatarSelectionMenu_AddSelectionElement
               (SpawnRoleAvatarSelectionMenu *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__Add_SpawnRoleAvatarSelectionElement_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                   );
    func_?(&
                    SpawnRoleAvatarSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleAvatarSelectionElement>_SpawnRoleAvatarSelectionElement__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__SpawnRoleAvatarSelectionMenu__OnAvatarSelected_int_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
           (this->fields).avatarSelectionDataList;
  if (pLVar1 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       ((VisualTreeAsset_UsingEntry *)&stack0xffffffe4,pLVar1,index,
                        MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                       );
    uVar3 = pVVar2->alias;
    if ((uVar3 != 0) && (*(GameObject **)(uVar3 + 0x88) != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (*(GameObject **)(uVar3 + 0x88),1,(MethodInfo *)0x0);
      parent = (Transform *)(this->fields).avatarElementContainer;
      pSVar4 = (this->fields).avatarSelectionElementPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar4 = (SpawnRoleAvatarSelectionElement *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)pSVar4,parent,0,
                          SpawnRoleAvatarSelectionElement_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleAvatarSelectionElement>_SpawnRoleAvatarSelectionElement__UnityEngine__Transform__bool_
                         );
      pLVar1 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
               (this->fields).avatarSelectionDataList;
      if (pLVar1 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
        pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                 VisualTreeAsset+UsingEntry]::
                 List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                           ((VisualTreeAsset_UsingEntry *)&stack0xffffffe4,pLVar1,index,
                            MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                           );
        pVVar5 = pVVar2->asset;
        this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
        UnityAction_1_System_Int32Enum___ctor
                  (this_01,(Object *)this,
                   MethodInfo__SpawnRoleAvatarSelectionMenu__OnAvatarSelected_int_,(MethodInfo *)0x0
                  );
        if (pSVar4 != (SpawnRoleAvatarSelectionElement *)0x0) {
          (pSVar4->fields).avatarId = (int32_t)pVVar5;
          (pSVar4->fields).elementIndex = index;
          (pSVar4->fields).onSelectedCallback = (UnityAction_1_System_Int32_ *)this_01;
          func_?();
          pLVar1 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                   (this->fields).avatarSelectionDataList;
          if (pLVar1 != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
            pVVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                     VisualTreeAsset+UsingEntry]::
                     List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                               ((VisualTreeAsset_UsingEntry *)&stack0xffffffe4,pLVar1,index,
                                MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                               );
            uVar6 = pVVar2->alias;
            if (uVar6 != 0) {
              SpawnRoleAvatarSelectionElement::SpawnRoleAvatarSelectionElement_SetupPreviewImage
                        (pSVar4,*(GameObject **)(uVar6 + 0x88),(MethodInfo *)0x0);
              this_00 = (this->fields).selectionElements;
              if (this_00 != (List_1_SpawnRoleAvatarSelectionElement_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__Add
                          ((List_1_System_Object_ *)this_00,(Object *)pSVar4,
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
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HideElements(Int32, Int32, Int32) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::SpawnRoleAvatarSelectionMenu_HideElements
               (SpawnRoleAvatarSelectionMenu *this,int32_t previousStartElement,
               int32_t amountOfElements,int32_t newStartElement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  iVar1 = amountOfElements + previousStartElement;
  do {
    if (iVar1 <= previousStartElement) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Count__
                     );
      cRam_? = '\x01';
    }
    if (-1 < previousStartElement) {
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).selectionElements;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      if ((previousStartElement < (this_00->fields)._size) &&
         ((previousStartElement < newStartElement ||
          ((this->fields).maxSelectionElementsOnScreen + newStartElement < previousStartElement))))
      {
        this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,previousStartElement,
                             MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Item_int_
                            );
        if (this_02 == (RegexCharClass_SingleRange)0x0) {
code_?:
          func_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        SpawnRoleAvatarSelectionElement::SpawnRoleAvatarSelectionElement_Deactivate
                  ((SpawnRoleAvatarSelectionElement *)this_02,(MethodInfo *)0x0);
        pLVar3 = (this->fields).avatarSelectionDataList;
        if (pLVar3 == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) goto code_?;
        pMStack_4 = 
        MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_;
        iStack_5 = previousStartElement;
        piVar6 = (int *)func_?(&iStack_5,pLVar3);
        if ((*piVar6 == 0) ||
           (this_01 = *(GameObject **)(*piVar6 + 0x88), this_01 == (GameObject *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,0,(MethodInfo *)0x0);
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
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__SpawnRoleAvatarSelectionMenu___Initialize_b__9_0_UnityEngine__EventSystems__IHandleSpawnRoleAvatarSelectionData__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  (this->fields).spawnRoleId = spawnRoleId;
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleSpawnRoleAvatarSelectionData>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__SpawnRoleAvatarSelectionMenu___Initialize_b__9_0_UnityEngine__EventSystems__IHandleSpawnRoleAvatarSelectionData__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,callbackFunction,
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
    ppMStack_1 = &
                 MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Count__
    ;
    func_?();
    cRam_? = '\x01';
  }
  if (index < 0) {
    return 0;
  }
  pLVar2 = (this->fields).selectionElements;
  if (pLVar2 != (List_1_SpawnRoleAvatarSelectionElement_ *)0x0) {
    return index < (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void OnAvatarSelected(Int32) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::
     SpawnRoleAvatarSelectionMenu_OnAvatarSelected
               (SpawnRoleAvatarSelectionMenu *this,int32_t avatarId,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).operationRequests,
     this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetSpawnRoleBody
              (this_00,(this->fields).spawnRoleId,avatarId,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::SpawnRoleAvatarSelectionMenu_OnDestroy
               (SpawnRoleAvatarSelectionMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
            (this->fields).avatarSelectionDataList;
  if (this_00 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
    return;
  }
  index = 0;
  while( true ) {
    if ((this_00->fields)._size <= index) {
      return;
    }
    if (this_00 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) break;
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       ((VisualTreeAsset_UsingEntry *)&stack0xffffffe4,this_00,index,
                        MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                       );
    uVar2 = pVVar1->alias;
    if ((uVar2 == 0) || (*(GameObject **)(uVar2 + 0x88) == (GameObject *)0x0)) break;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (*(GameObject **)(uVar2 + 0x88),0,(MethodInfo *)0x0);
    this_00 = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
              (this->fields).avatarSelectionDataList;
    index = index + 1;
    if (this_00 == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) break;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Count__
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).scrollBar;
  if (this_00 != (Scrollbar *)0x0) {
    fVar1 = UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_get_value
                      (this_00,(MethodInfo *)0x0);
    pLVar2 = (this->fields).avatarSelectionDataList;
    if (pLVar2 != (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
      iVar3 = (pLVar2->fields)._size;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      cVar4 = cRam_?;
      fVar5 = (float10)func_?((double)((float)iVar3 * fVar1));
      fVar1 = (float)(this->fields).maxSelectionElementsOnScreen * _UNK_?;
      if (cVar4 == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fVar5 = (float10)func_?((double)((float)(int)fVar5 - fVar1));
      pLVar6 = (this->fields).selectionElements;
      if (pLVar6 != (List_1_SpawnRoleAvatarSelectionElement_ *)0x0) {
        SpawnRoleAvatarSelectionMenu_HideElements
                  (this,(this->fields).currentSelectionStartIndex,(pLVar6->fields)._size,(int)fVar5,
                   (MethodInfo *)0x0);
        SpawnRoleAvatarSelectionMenu_ShowElements(this,(int)fVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnSpawnRoleAvatarDataRecieved(List`1[SpawnRoleAvatarSelectionData]) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::
     SpawnRoleAvatarSelectionMenu_OnSpawnRoleAvatarDataRecieved
               (SpawnRoleAvatarSelectionMenu *this,
               List_1_SpawnRoleAvatarSelectionData_ *avatarSelectionDataList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Count__
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).loadingWheel;
  if (this_00 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    ppLVar1 = &(this->fields).avatarSelectionDataList;
    *ppLVar1 = avatarSelectionDataList;
    func_?(ppLVar1,avatarSelectionDataList);
    index = 0;
    if (avatarSelectionDataList != (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
      for (; index < (avatarSelectionDataList->fields)._size; index = index + 1) {
        SpawnRoleAvatarSelectionMenu_AddSelectionElement(this,index,(MethodInfo *)0x0);
      }
      SpawnRoleAvatarSelectionMenu_HideElements
                (this,0,(this->fields).maxSelectionElementsOnScreen,0,(MethodInfo *)0x0);
      SpawnRoleAvatarSelectionMenu_ShowElements(this,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowElements(Int32) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::SpawnRoleAvatarSelectionMenu_ShowElements
               (SpawnRoleAvatarSelectionMenu *this,int32_t startElementIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  (this->fields).currentSelectionStartIndex = startElementIndex;
  index = startElementIndex;
  if (startElementIndex < (this->fields).maxSelectionElementsOnScreen + startElementIndex) {
    do {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Count__
                       );
        cRam_? = '\x01';
      }
      if (-1 < index) {
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).selectionElements;
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        if (index < (this_00->fields)._size) {
          this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_00,index,
                               MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Item_int_
                              );
          if (this_02 == (RegexCharClass_SingleRange)0x0) {
code_?:
            func_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          SpawnRoleAvatarSelectionElement::SpawnRoleAvatarSelectionElement_Activate
                    ((SpawnRoleAvatarSelectionElement *)this_02,(MethodInfo *)0x0);
          pLVar2 = (this->fields).avatarSelectionDataList;
          if (pLVar2 == (List_1_SpawnRoleAvatarSelectionData_ *)0x0) goto code_?;
          pMStack_3 = 
          MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Item_int_
          ;
          iStack_4 = index;
          piVar5 = (int *)func_?(&iStack_4,pLVar2);
          if ((*piVar5 == 0) ||
             (this_01 = *(GameObject **)(*piVar5 + 0x88), this_01 == (GameObject *)0x0))
          goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,1,(MethodInfo *)0x0);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionData>__get_Count__
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).scrollBar;
  if (this_00 != (Scrollbar *)0x0) {
    fVar1 = UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_get_value
                      (this_00,(MethodInfo *)0x0);
    pLVar2 = (this->fields).avatarSelectionDataList;
    if (pLVar2 != (List_1_SpawnRoleAvatarSelectionData_ *)0x0) {
      iVar3 = (pLVar2->fields)._size;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      cVar4 = cRam_?;
      fVar5 = (float10)func_?((double)((float)iVar3 * fVar1));
      fVar1 = (float)(this->fields).maxSelectionElementsOnScreen * _UNK_?;
      if (cVar4 == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      fVar5 = (float10)func_?((double)((float)(int)fVar5 - fVar1));
      pLVar6 = (this->fields).selectionElements;
      if (pLVar6 != (List_1_SpawnRoleAvatarSelectionElement_ *)0x0) {
        SpawnRoleAvatarSelectionMenu_HideElements
                  (this,(this->fields).currentSelectionStartIndex,(pLVar6->fields)._size,(int)fVar5,
                   (MethodInfo *)0x0);
        SpawnRoleAvatarSelectionMenu_ShowElements(this,(int)fVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <Initialize>b__9_0(IHandleSpawnRoleAvatarSelectionData, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleAvatarSelectionMenu::
     SpawnRoleAvatarSelectionMenu__Initialize_b__9_0
               (SpawnRoleAvatarSelectionMenu *this,IHandleSpawnRoleAvatarSelectionData *handler,
               BaseEventData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IHandleSpawnRoleAvatarSelectionData);
    func_?(&
                    MethodInfo__SpawnRoleAvatarSelectionMenu__OnSpawnRoleAvatarDataRecieved_System__Collections__Generic__List<SpawnRoleAvatarSelectionData>_
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::List<SpawnRoleAvatarSelectionData>_>
                   );
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<System::Collections::Generic::List<SpawnRoleAvatarSelectionData>_>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__SpawnRoleAvatarSelectionMenu__OnSpawnRoleAvatarDataRecieved_System__Collections__Generic__List<SpawnRoleAvatarSelectionData>_
             ,(MethodInfo *)0x0);
  if (handler == (IHandleSpawnRoleAvatarSelectionData *)0x0) {
    func_?();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>);
    cRam_? = '\x01';
  }
  (this->fields).maxSelectionElementsOnScreen = 10;
  this_00 = (List_1_SpawnRoleAvatarSelectionElement_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<SpawnRoleAvatarSelectionElement>__List__
            );
  ppLVar1 = &(this->fields).selectionElements;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

