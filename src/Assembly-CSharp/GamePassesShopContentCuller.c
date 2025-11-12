
/* Void AddContentElement(IGamePassShopContent) */

void Assembly-CSharp.dll::GamePassesShopContentCuller::GamePassesShopContentCuller_AddContentElement
               (GamePassesShopContentCuller *this,IGamePassShopContent *gamePassContentElement,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_;
  pLVar2 = (this->fields).gamePassShopContentList;
  if (pLVar2 != (List_1_IGamePassShopContent_ *)0x0) {
    piVar3 = &(pLVar2->fields)._version;
    *piVar3 = *piVar3 + 1;
    pIVar4 = (pLVar2->fields)._items;
    if (pIVar4 != (IGamePassShopContent__Array *)0x0) {
      uVar5 = (pLVar2->fields)._size;
      if (uVar5 < (uint)pIVar4->max_length) {
        (pLVar2->fields)._size = uVar5 + 1;
      }
      else {
        uVar5 = (pLVar2->fields)._size;
        FUN_?(pLVar2,uVar5 + 1,
                      (pMVar1->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy
                      ,pIVar4,unaff_RDI);
        pIVar4 = (pLVar2->fields)._items;
        (pLVar2->fields)._size = uVar5 + 1;
        if (pIVar4 == (IGamePassShopContent__Array *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((uint)pIVar4->max_length <= uVar5) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = iRam_? != 0;
      pIVar4->vector[(int)uVar5] = gamePassContentElement;
      if (bVar7) {
        uVar5 = (uint)((ulonglong)(pIVar4->vector + (int)uVar5) >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HideElements(Int32, Int32, Int32) */

void Assembly-CSharp.dll::GamePassesShopContentCuller::GamePassesShopContentCuller_HideElements
               (GamePassesShopContentCuller *this,int32_t previousStartElement,
               int32_t amoutOfElements,int32_t newStartElement,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IGamePassShopContent);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (previousStartElement < previousStartElement + amoutOfElements) {
    iVar1 = amoutOfElements + previousStartElement;
    do {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (-1 < previousStartElement) {
        this_00 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                  (this->fields).gamePassShopContentList;
        if (this_00 == (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) {
code_?:
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((previousStartElement < (this_00->fields)._size) &&
           ((previousStartElement < newStartElement ||
            ((this->fields).maxSelectionElementsOnScreen + newStartElement < previousStartElement)))
           ) {
          EVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                  EntryPreProcessor+AllocSize]::
                  List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                            (this_00,previousStartElement,
                             MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Item_int_
                            );
          if (EVar3 == (EntryPreProcessor_AllocSize)0x0) goto code_?;
          FUN_?(1,TypeInfo__IGamePassShopContent,EVar3);
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).gamePassShopContentList;
  if (pLVar1 == (List_1_IGamePassShopContent_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  GamePassesShopContentCuller_HideElements(this,0,(pLVar1->fields)._size,0,(MethodInfo *)0x0);
  index = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IGamePassShopContent,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).currentSelectionStartIndex = 0;
  if (0 < (this->fields).maxSelectionElementsOnScreen) {
    do {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (-1 < index) {
        this_00 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                  (this->fields).gamePassShopContentList;
        if (this_00 == (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) {
code_?:
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (index < (this_00->fields)._size) {
          EVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                  EntryPreProcessor+AllocSize]::
                  List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                            (this_00,index,
                             MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Item_int_
                            );
          if (EVar3 == (EntryPreProcessor_AllocSize)0x0) goto code_?;
          FUN_?(0,TypeInfo__IGamePassShopContent,EVar3);
        }
      }
      index = index + 1;
    } while (index < (this->fields).maxSelectionElementsOnScreen);
  }
  return;
}


/* Boolean IsIndexWithinBounds(Int32) */

bool Assembly-CSharp.dll::GamePassesShopContentCuller::
     GamePassesShopContentCuller_IsIndexWithinBounds
               (GamePassesShopContentCuller *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (index < 0) {
    return 0;
  }
  pLVar1 = (this->fields).gamePassShopContentList;
  if (pLVar1 != (List_1_IGamePassShopContent_ *)0x0) {
    return index < (pLVar1->fields)._size;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void ShowElements(Int32) */

void Assembly-CSharp.dll::GamePassesShopContentCuller::GamePassesShopContentCuller_ShowElements
               (GamePassesShopContentCuller *this,int32_t startElementIndex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IGamePassShopContent);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).currentSelectionStartIndex = startElementIndex;
  index = startElementIndex;
  if (startElementIndex < (this->fields).maxSelectionElementsOnScreen + startElementIndex) {
    do {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (-1 < index) {
        this_00 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                  (this->fields).gamePassShopContentList;
        if (this_00 == (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) {
code_?:
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (index < (this_00->fields)._size) {
          EVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                  EntryPreProcessor+AllocSize]::
                  List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                            (this_00,index,
                             MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Item_int_
                            );
          if (EVar2 == (EntryPreProcessor_AllocSize)0x0) goto code_?;
          FUN_?(0,TypeInfo__IGamePassShopContent,EVar2);
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).scrollbar;
  if (pSVar1 != (Scrollbar *)0x0) {
    fVar2 = (pSVar1->fields).m_Value;
    if (1 < (pSVar1->fields).m_NumberOfSteps) {
      fVar2 = (float)FUN_?((float)((pSVar1->fields).m_NumberOfSteps + -1) * fVar2);
      fVar2 = fVar2 / (float)((pSVar1->fields).m_NumberOfSteps + -1);
    }
    pLVar3 = (this->fields).gamePassShopContentList;
    if (pLVar3 != (List_1_IGamePassShopContent_ *)0x0) {
      iVar4 = FUN_?((float)(pLVar3->fields)._size * fVar2);
      iVar4 = FUN_?((float)iVar4 -
                            (float)(this->fields).maxSelectionElementsOnScreen * _UNK_?);
      pLVar3 = (this->fields).gamePassShopContentList;
      if (pLVar3 != (List_1_IGamePassShopContent_ *)0x0) {
        GamePassesShopContentCuller_HideElements
                  (this,(this->fields).currentSelectionStartIndex,(pLVar3->fields)._size,iVar4,
                   (MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__IGamePassShopContent,iVar4,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        (this->fields).currentSelectionStartIndex = iVar4;
        index = iVar4;
        if (iVar4 < (this->fields).maxSelectionElementsOnScreen + iVar4) {
          do {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (-1 < index) {
              this_00 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                        (this->fields).gamePassShopContentList;
              if (this_00 == (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0)
              {
code_?:
                FUN_?();
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (index < (this_00->fields)._size) {
                EVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                        UIR::EntryPreProcessor+AllocSize]::
                        List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                                  (this_00,index,
                                   MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Item_int_
                                  );
                if (EVar6 == (EntryPreProcessor_AllocSize)0x0) goto code_?;
                FUN_?(0,TypeInfo__IGamePassShopContent,EVar6);
              }
            }
            index = index + 1;
          } while (index < (this->fields).maxSelectionElementsOnScreen + iVar4);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* GamePassesShopContentCuller() */

void Assembly-CSharp.dll::GamePassesShopContentCuller::GamePassesShopContentCuller__ctor
               (GamePassesShopContentCuller *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<IGamePassShopContent>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_IGamePassShopContent_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<IGamePassShopContent>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).gamePassShopContentList = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).gamePassShopContentList >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

