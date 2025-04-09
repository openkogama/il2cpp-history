
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
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
    VisualTreeAsset+UsingEntry]::List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
              ((VisualTreeAsset_UsingEntry *)&stack0xffffffe4,
               (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,
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
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       (&VStack_2,
                        (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)this_00,
                        (this->fields).promotionIndex,
                        MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                       );
    uStack_3._0_4_ = pVVar1->alias;
    uStack_3._4_4_ = pVVar1->path;
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
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    ppLVar2 = &(this->fields).portalsIndices;
    *ppLVar2 = pLVar1;
    func_?(ppLVar2,pLVar1);
    pLVar1 = (List_1_System_Int32_ *)
             func_?(TypeInfo__System__Collections__Generic__List<int>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    ppLVar3 = &(this->fields).embeddedIndices;
    *ppLVar3 = pLVar1;
    func_?(ppLVar3,pLVar1);
    index_00 = 0;
    pLVar4 = (this->fields).promotionData;
    while (pLVar4 != (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) {
      if ((pLVar4->fields)._size <= index_00) {
        (this->fields).initialized = 1;
        goto code_?;
      }
      pLVar4 = (this->fields).promotionData;
      if (pLVar4 == (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) break;
      pVVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+UsingEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                         (&VStack_6,
                          (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)pLVar4,
                          index_00,
                          MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                         );
      uStack_7._0_4_ = pVVar5->alias;
      uStack_7._4_4_ = pVVar5->path;
      pVStack_8 = pVVar5->asset;
      if ((char)pVStack_8 != '\0') {
        if (*ppLVar2 == (List_1_System_Int32_ *)0x0) break;
        apMStack_9[0] = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
        func_?(*ppLVar2,index_00);
      }
      pLVar4 = (this->fields).promotionData;
      if (pLVar4 == (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) break;
      iVar10 = func_?(apMStack_9,pLVar4,index_00,
                              MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                             );
      if (*(char *)(iVar10 + 9) != '\0') {
        pLVar1 = (this->fields).embeddedIndices;
        if (pLVar1 == (List_1_System_Int32_ *)0x0) break;
        func_?(pLVar1,index_00,
                        MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      index_00 = index_00 + 1;
      pLVar4 = (this->fields).promotionData;
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
      RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
      (this->fields).promotionIndex = (int32_t)RVar11;
      return;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

