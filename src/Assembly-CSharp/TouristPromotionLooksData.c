
/* Image GetPromotionImage() */

Image * Assembly-CSharp.dll::TouristPromotionLooksData::TouristPromotionLooksData_GetPromotionImage
                  (TouristPromotionLooksData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                   );
    func_?(&
                    UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).promotionData;
  if (this_00 != (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
    UnitySynchronizationContext+WorkRequest]::
    List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
              ((UnitySynchronizationContext_WorkRequest *)&stack0xffffffe4,
               (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this_00,
               (this->fields).promotionIndex,
               MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
              );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pIVar1 = (Image *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)
                                 UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                                 ,
                                 UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                                );
    return pIVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pIVar1 = (Image *)(*pcVar2)();
  return pIVar1;
}


/* String GetPromotionText() */

String * Assembly-CSharp.dll::TouristPromotionLooksData::TouristPromotionLooksData_GetPromotionText
                   (TouristPromotionLooksData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).promotionData;
  if (this_00 != (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) {
    pUVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
             UnitySynchronizationContext+WorkRequest]::
             List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                       (&UStack_2,
                        (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)this_00,
                        (this->fields).promotionIndex,
                        MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                       );
    uStack_3._0_4_ = pUVar1->m_DelagateCallback;
    uStack_3._4_4_ = pUVar1->m_DelagateState;
    pSVar4 = TM::TM__((String *)uStack_3._4_4_,(MethodInfo *)0x0);
    return pSVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* Void RandomizePromotion(Boolean) */

void Assembly-CSharp.dll::TouristPromotionLooksData::TouristPromotionLooksData_RandomizePromotion
               (TouristPromotionLooksData *this,bool embedded,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Count__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  if ((this->fields).initialized == 0) {
    pLVar1 = (List_1_System_Int32_ *)
             func_?(TypeInfo__System__Collections__Generic__List<int>);
    if (pLVar1 != (List_1_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)pLVar1,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
      (this->fields).portalsIndices = pLVar1;
      func_?(&(this->fields).portalsIndices,pLVar1);
      pLVar1 = (List_1_System_Int32_ *)
               func_?(TypeInfo__System__Collections__Generic__List<int>);
      if (pLVar1 != (List_1_System_Int32_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)pLVar1,
                   MethodInfo__System__Collections__Generic__List<int>__List__);
        (this->fields).embeddedIndices = pLVar1;
        func_?(&(this->fields).embeddedIndices,pLVar1);
        index_00 = 0;
        pLVar2 = (this->fields).promotionData;
        while (pLVar2 != (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) {
          if ((pLVar2->fields)._size <= index_00) {
            (this->fields).initialized = 1;
            goto code_?;
          }
          pLVar2 = (this->fields).promotionData;
          if (pLVar2 == (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) break;
          pUVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                   UnitySynchronizationContext+WorkRequest]::
                   List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__get_Item
                             (&UStack_4,
                              (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pLVar2,
                              index_00,
                              MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                             );
          uStack_5._0_4_ = pUVar3->m_DelagateCallback;
          uStack_5._4_4_ = pUVar3->m_DelagateState;
          pMStack_6 = pUVar3->m_WaitHandle;
          if ((char)pMStack_6 != '\0') {
            pLVar1 = (this->fields).portalsIndices;
            if (pLVar1 == (List_1_System_Int32_ *)0x0) break;
            pMStack_7 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
            iStack_8 = index_00;
            func_?(pLVar1);
          }
          pLVar2 = (this->fields).promotionData;
          if (pLVar2 == (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) break;
          iVar9 = func_?(&iStack_8,pLVar2,index_00,
                                  MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                                 );
          if (*(char *)(iVar9 + 9) != '\0') {
            pLVar1 = (this->fields).embeddedIndices;
            if (pLVar1 == (List_1_System_Int32_ *)0x0) break;
            func_?(pLVar1,index_00,
                            MethodInfo__System__Collections__Generic__List<int>__Add_int_);
          }
          index_00 = index_00 + 1;
          pLVar2 = (this->fields).promotionData;
        }
      }
    }
  }
  else {
code_?:
    if (embedded == 0) {
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).portalsIndices;
    }
    else {
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).embeddedIndices;
    }
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      index = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                        (0,(this_00->fields)._size,(MethodInfo *)0x0);
      RVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
      (this->fields).promotionIndex = (int32_t)RVar10;
      return;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

