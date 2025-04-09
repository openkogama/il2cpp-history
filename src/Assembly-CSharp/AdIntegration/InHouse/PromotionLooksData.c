
/* String GetActionText(PromotionActionType) */

String * Assembly-CSharp.dll::AdIntegration::InHouse::PromotionLooksData::
         PromotionLooksData_GetActionText
                   (PromotionLooksData *this,PromotionActionType__Enum promotionActionType,
                   MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_JOIN_THE_ELITE);
    func_?(&StringLiteral_SIGN_UP);
    func_?(&StringLiteral_BUY_GOLD);
    cRam_? = '\x01';
  }
  if (promotionActionType != PromotionActionType__Enum_GoldPurchase) {
    if (promotionActionType != PromotionActionType__Enum_EliteSubscription) {
      pSVar1 = TM::TM__(StringLiteral_SIGN_UP,(MethodInfo *)0x0);
      return pSVar1;
    }
    pSVar1 = TM::TM__(StringLiteral_JOIN_THE_ELITE,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = TM::TM__(StringLiteral_BUY_GOLD,(MethodInfo *)0x0);
  return pSVar1;
}


/* PromotionActionType GetActionType() */

PromotionActionType__Enum
Assembly-CSharp.dll::AdIntegration::InHouse::PromotionLooksData::PromotionLooksData_GetActionType
          (PromotionLooksData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).promotionData;
  if (this_00 != (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0) {
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+AssetEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry__get_Item
                       (&VStack_2,
                        (List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_ *)this_00,
                        (this->fields).promotionIndex,
                        MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                       );
    return (PromotionActionType__Enum)pVVar1->m_CachedType;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  PVar4 = (*pcVar3)();
  return PVar4;
}


/* Image GetPromotionImage() */

Image * Assembly-CSharp.dll::AdIntegration::InHouse::PromotionLooksData::
        PromotionLooksData_GetPromotionImage(PromotionLooksData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                   );
    func_?(&
                    UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).promotionData;
  if (this_00 != (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0) {
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+AssetEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry__get_Item
                       ((VisualTreeAsset_AssetEntry *)&stack0xffffffdc,
                        (List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_ *)this_00,
                        (this->fields).promotionIndex,
                        MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                       );
    original = pVVar1->path;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pIVar2 = (Image *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)original,
                                 UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                                );
    return pIVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pIVar2 = (Image *)(*pcVar3)();
  return pIVar2;
}


/* String GetPromotionText() */

String * Assembly-CSharp.dll::AdIntegration::InHouse::PromotionLooksData::
         PromotionLooksData_GetPromotionText(PromotionLooksData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).promotionData;
  if (this_00 != (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0) {
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+AssetEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry__get_Item
                       (&VStack_2,
                        (List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_ *)this_00,
                        (this->fields).promotionIndex,
                        MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                       );
    pSVar3 = TM::TM__(pVVar1->typeFullName,(MethodInfo *)0x0);
    return pSVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* Void RandomizePromotion(Boolean) */

void Assembly-CSharp.dll::AdIntegration::InHouse::PromotionLooksData::
     PromotionLooksData_RandomizePromotion
               (PromotionLooksData *this,bool embedded,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Count__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
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
    (this->fields).portalsIndices = pLVar1;
    func_?(&(this->fields).portalsIndices,pLVar1);
    pLVar1 = (List_1_System_Int32_ *)
             func_?(TypeInfo__System__Collections__Generic__List<int>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
               MethodInfo__System__Collections__Generic__List<int>__List__);
    (this->fields).embeddedIndices = pLVar1;
    func_?(&(this->fields).embeddedIndices,pLVar1);
    index_00 = 0;
    pLVar2 = (this->fields).promotionData;
    while (pLVar2 != (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0) {
      if ((pLVar2->fields)._size <= index_00) {
        (this->fields).initialized = 1;
        goto code_?;
      }
      pLVar2 = (this->fields).promotionData;
      if (pLVar2 == (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0) break;
      pVVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
               VisualTreeAsset+AssetEntry]::
               List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry__get_Item
                         (&VStack_4,
                          (List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_ *)pLVar2,
                          index_00,
                          MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                         );
      if (*(char *)&pVVar3->asset != '\0') {
        pLVar1 = (this->fields).portalsIndices;
        if (pLVar1 == (List_1_System_Int32_ *)0x0) break;
        pMStack_5 = MethodInfo__System__Collections__Generic__List<int>__Add_int_;
        iStack_6 = index_00;
        func_?(pLVar1);
      }
      pLVar2 = (this->fields).promotionData;
      if (pLVar2 == (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0) break;
      iVar7 = func_?(&iStack_6,pLVar2,index_00,
                              MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                             );
      if (*(char *)(iVar7 + 9) != '\0') {
        pLVar1 = (this->fields).embeddedIndices;
        if (pLVar1 == (List_1_System_Int32_ *)0x0) break;
        func_?(pLVar1,index_00,
                        MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      index_00 = index_00 + 1;
      pLVar2 = (this->fields).promotionData;
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
      RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
      (this->fields).promotionIndex = (int32_t)RVar8;
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

