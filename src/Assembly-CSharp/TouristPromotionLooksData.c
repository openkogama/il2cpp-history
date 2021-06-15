
/* Image GetPromotionImage() */

Image * Assembly-CSharp.dll::TouristPromotionLooksData::TouristPromotionLooksData_GetPromotionImage
                  (TouristPromotionLooksData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).promotionData;
  if (this_00 != (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[TouristPromotionLooksData+PromotionLooksData]
    ::List_1_TouristPromotionLooksData_PromotionLooksData__get_Item
              ((TouristPromotionLooksData_PromotionLooksData *)&stack0xffffffe4,this_00,
               (this->fields).promotionIndex,
               MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
              );
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pIVar1 = (Image *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                                ((XpBoostParticlePreviewer *)
                                 UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                                 ,
                                 UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                                );
    return pIVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pIVar1 = (Image *)(*pcVar2)();
  return pIVar1;
}


/* String GetPromotionText() */

String * Assembly-CSharp.dll::TouristPromotionLooksData::TouristPromotionLooksData_GetPromotionText
                   (TouristPromotionLooksData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).promotionData;
  if (this_00 != (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) {
    pTVar1 = mscorlib.dll::System::Collections::Generic::
             List`1[TouristPromotionLooksData+PromotionLooksData]::
             List_1_TouristPromotionLooksData_PromotionLooksData__get_Item
                       (&TStack_2,this_00,(this->fields).promotionIndex,
                        MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                       );
    uStack_3._0_4_ = pTVar1->PromotionImage;
    uStack_3._4_4_ = pTVar1->PromotionText;
    pSVar4 = TM::TM__((String *)uStack_3._4_4_,(MethodInfo *)0x0);
    return pSVar4;
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar5)();
  return pSVar4;
}


/* Void RandomizePromotion() */

void Assembly-CSharp.dll::TouristPromotionLooksData::TouristPromotionLooksData_RandomizePromotion
               (TouristPromotionLooksData *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).promotionData;
  if (this_00 != (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) {
    max = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
          Serialization::JsonProperty]::
          Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                    ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                     MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Count__
                    );
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                      (0,(int32_t)max,(MethodInfo *)0x0);
    (this->fields).promotionIndex = iVar1;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RandomizePromotion(Boolean) */

void Assembly-CSharp.dll::TouristPromotionLooksData::TouristPromotionLooksData_RandomizePromotion_1
               (TouristPromotionLooksData *this,bool embedded,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).initialized == 0) {
    pLVar1 = (List_1_UnityEngine_Vector4_ *)
             func_?(TypeInfo__System__Collections__Generic__List<int>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar1,MethodInfo__System__Collections__Generic__List<int>__List__);
    (this->fields).portalsIndices = (List_1_System_Int32_ *)pLVar1;
    pLVar1 = (List_1_UnityEngine_Vector4_ *)
             func_?(TypeInfo__System__Collections__Generic__List<int>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar1,MethodInfo__System__Collections__Generic__List<int>__List__);
    pLVar2 = (this->fields).promotionData;
    (this->fields).embeddedIndices = (List_1_System_Int32_ *)pLVar1;
    item = UIPushOption__Enum_None;
    while (pLVar2 != (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Count__
                         );
      if ((int)pOVar3 <= (int)item) {
        (this->fields).initialized = 1;
        goto code_?;
      }
      pLVar2 = (this->fields).promotionData;
      if (pLVar2 == (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) break;
      pTVar4 = mscorlib.dll::System::Collections::Generic::
               List`1[TouristPromotionLooksData+PromotionLooksData]::
               List_1_TouristPromotionLooksData_PromotionLooksData__get_Item
                         (&TStack_5,pLVar2,item,
                          MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                         );
      uStack_6._0_4_ = pTVar4->PromotionImage;
      uStack_6._4_4_ = pTVar4->PromotionText;
      uStack_7._0_1_ = pTVar4->ValidOnKogamaPortal;
      uStack_7._1_1_ = pTVar4->ValidOnAnonymousExternalPortal;
      uStack_7._2_2_ = *(undefined2 *)&pTVar4->field_0xa;
      if ((undefined1)uStack_7 != '\0') {
        pLVar8 = (List_1_UIPushOption_ *)(this->fields).portalsIndices;
        if (pLVar8 == (List_1_UIPushOption_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  (pLVar8,item,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      pLVar2 = (this->fields).promotionData;
      if (pLVar2 == (List_1_TouristPromotionLooksData_PromotionLooksData_ *)0x0) break;
      iVar9 = func_?(auStack_10,pLVar2,item,
                              MethodInfo__System__Collections__Generic__List<TouristPromotionLooksData::PromotionLooksData>__get_Item_int_
                             );
      if ((char)((uint)*(undefined4 *)(iVar9 + 8) >> 8) != '\0') {
        pLVar8 = (List_1_UIPushOption_ *)(this->fields).embeddedIndices;
        if (pLVar8 == (List_1_UIPushOption_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  (pLVar8,item,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
      }
      item = item + UIPushOption__Enum_Blocking;
      pLVar2 = (this->fields).promotionData;
    }
  }
  else {
code_?:
    if (embedded == 0) {
      this_00 = (this->fields).portalsIndices;
    }
    else {
      this_00 = (this->fields).embeddedIndices;
    }
    if (this_00 != (List_1_System_Int32_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                          MethodInfo__System__Collections__Generic__List<int>__get_Count__);
      iVar11 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                        (0,(int32_t)pOVar3,(MethodInfo *)0x0);
      iVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
              List_1_System_Int32__get_Item
                        (this_00,iVar11,
                         MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
      (this->fields).promotionIndex = iVar11;
      return;
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

