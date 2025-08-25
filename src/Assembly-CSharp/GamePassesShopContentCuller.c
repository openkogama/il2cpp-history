
/* Void AddContentElement(IGamePassShopContent) */

void Assembly-CSharp.dll::GamePassesShopContentCuller::GamePassesShopContentCuller_AddContentElement
               (GamePassesShopContentCuller *this,IGamePassShopContent *gamePassContentElement,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Object_ *)(this->fields).gamePassShopContentList;
  if (this_00 != (List_1_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              (this_00,(Object *)gamePassContentElement,
               MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HideElements(Int32, Int32, Int32) */

void Assembly-CSharp.dll::GamePassesShopContentCuller::GamePassesShopContentCuller_HideElements
               (GamePassesShopContentCuller *this,int32_t previousStartElement,
               int32_t amoutOfElements,int32_t newStartElement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IGamePassShopContent);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  if (previousStartElement < previousStartElement + amoutOfElements) {
    iVar1 = previousStartElement + amoutOfElements;
    do {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                       );
        cRam_? = '\x01';
      }
      if (-1 < previousStartElement) {
        pLVar2 = (this->fields).gamePassShopContentList;
        if (pLVar2 == (List_1_IGamePassShopContent_ *)0x0) {
code_?:
          func_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((previousStartElement < (pLVar2->fields)._size) &&
           ((previousStartElement < newStartElement ||
            ((this->fields).maxSelectionElementsOnScreen + newStartElement < previousStartElement)))
           ) {
          RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                             (this->fields).gamePassShopContentList,previousStartElement,
                             MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Item_int_
                            );
          if (RVar4 == (RegexCharClass_SingleRange)0x0) goto code_?;
          func_?(1,TypeInfo__IGamePassShopContent,RVar4);
        }
      }
      previousStartElement = previousStartElement + 1;
    } while (previousStartElement < iVar1);
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GamePassesShopContentCuller::GamePassesShopContentCuller_Initialize
               (GamePassesShopContentCuller *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).gamePassShopContentList;
  if (pLVar1 != (List_1_IGamePassShopContent_ *)0x0) {
    GamePassesShopContentCuller_HideElements(this,0,(pLVar1->fields)._size,0,(MethodInfo *)0x0);
    GamePassesShopContentCuller_ShowElements(this,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean IsIndexWithinBounds(Int32) */

bool Assembly-CSharp.dll::GamePassesShopContentCuller::
     GamePassesShopContentCuller_IsIndexWithinBounds
               (GamePassesShopContentCuller *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__;
    func_?();
    cRam_? = '\x01';
  }
  if (index < 0) {
    return 0;
  }
  pLVar2 = (this->fields).gamePassShopContentList;
  if (pLVar2 != (List_1_IGamePassShopContent_ *)0x0) {
    return index < (pLVar2->fields)._size;
  }
  ppMStack_1 = (MethodInfo **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void ShowElements(Int32) */

void Assembly-CSharp.dll::GamePassesShopContentCuller::GamePassesShopContentCuller_ShowElements
               (GamePassesShopContentCuller *this,int32_t startElementIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IGamePassShopContent);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  (this->fields).currentSelectionStartIndex = startElementIndex;
  index = startElementIndex;
  if (startElementIndex < (this->fields).maxSelectionElementsOnScreen + startElementIndex) {
    do {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                       );
        cRam_? = '\x01';
      }
      if (-1 < index) {
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).gamePassShopContentList;
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
          func_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (index < (this_00->fields)._size) {
          RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,index,
                             MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Item_int_
                            );
          if (RVar2 == (RegexCharClass_SingleRange)0x0) goto code_?;
          func_?(0,TypeInfo__IGamePassShopContent,RVar2);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).scrollbar;
  if (this_00 != (Scrollbar *)0x0) {
    fVar1 = UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_get_value
                      (this_00,(MethodInfo *)0x0);
    pLVar2 = (this->fields).gamePassShopContentList;
    if (pLVar2 != (List_1_IGamePassShopContent_ *)0x0) {
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
      pLVar2 = (this->fields).gamePassShopContentList;
      if (pLVar2 != (List_1_IGamePassShopContent_ *)0x0) {
        GamePassesShopContentCuller_HideElements
                  (this,(this->fields).currentSelectionStartIndex,(pLVar2->fields)._size,(int)fVar5,
                   (MethodInfo *)0x0);
        GamePassesShopContentCuller_ShowElements(this,(int)fVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* GamePassesShopContentCuller() */

void Assembly-CSharp.dll::GamePassesShopContentCuller::GamePassesShopContentCuller__ctor
               (GamePassesShopContentCuller *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<IGamePassShopContent>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_IGamePassShopContent_ *)
            func_?(TypeInfo__System__Collections__Generic__List<IGamePassShopContent>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__List__);
  (this->fields).gamePassShopContentList = this_00;
  func_?(&(this->fields).gamePassShopContentList,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

