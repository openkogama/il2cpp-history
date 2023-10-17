
/* Void AddItemToTierShop(GamePassTier, MVWorldObjectDocumentationType, MVWorldObjectClient) */

void Assembly-CSharp.dll::GameTierShopRepository::GameTierShopRepository_AddItemToTierShop
               (GameTierShopRepository *this,GamePassTier__Enum tier,
               MVWorldObjectDocumentationType__Enum documentationType,
               MVWorldObjectClient *worldObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Add_MV__Common__GamePassTier__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__ContainsKey_MVWorldObjectDocumentationType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).tierShopData;
  if (pDVar1 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
  goto code_?;
  bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Object,GUILoginHandler+PlanetData]::
          Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                    (pDVar1,(Object *)tier,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                    );
  if (bVar2 == 0) {
    pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).tierShopData;
    this_00 = (ParameterOverride_1_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                             );
    if (this_00 == (ParameterOverride_1_System_Object_ *)0x0) goto code_?;
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
              );
    if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (pDVar3,(Object *)tier,(Object *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Add_MV__Common__GamePassTier__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_
              );
  }
  pDVar4 = (this->fields).tierShopData;
  if (pDVar4 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                 *)0x0) {
    pDVar1 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
             Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                       ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,tier,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                       );
    if (pDVar1 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (pDVar1,(Object *)documentationType,
                         MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__ContainsKey_MVWorldObjectDocumentationType_
                        );
      if (bVar2 == 0) {
        pDVar4 = (this->fields).tierShopData;
        if (pDVar4 == (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                       *)0x0) goto code_?;
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,tier,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                           );
        worldObject = (MVWorldObjectClient *)
                      TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>;
        this_01 = (LowLevelList_1_System_Object_ *)func_?();
        if (this_01 == (LowLevelList_1_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
        if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar3,(Object *)documentationType,(Object *)this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                  );
      }
      pDVar4 = (this->fields).tierShopData;
      if (pDVar4 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                     *)0x0) {
        this_02 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar4,tier,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                            );
        if (this_02 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
          this_03 = (List_1_System_Object_ *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              (this_02,documentationType,
                               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                              );
          if (this_03 != (List_1_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      (this_03,(Object *)worldObject,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                      );
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]
   GetTierItemData(GamePassTier) */

Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::GameTierShopRepository::GameTierShopRepository_GetTierItemData
          (GameTierShopRepository *this,GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).tierShopData;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)tier,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                      );
    if (bVar1 == 0) {
      return (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0;
    }
    this_01 = (this->fields).tierShopData;
    if (this_01 !=
        (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
         *)0x0) {
      pDVar2 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_01,tier,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                         );
      return pDVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pDVar2 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)(*pcVar3)();
  return pDVar2;
}


/* Void RemoveItemToTierShop(GamePassTier, MVWorldObjectDocumentationType, Int32) */

void Assembly-CSharp.dll::GameTierShopRepository::GameTierShopRepository_RemoveItemToTierShop
               (GameTierShopRepository *this,GamePassTier__Enum tier,
               MVWorldObjectDocumentationType__Enum documentationType,int32_t woid,
               MethodInfo *method)

{
  pGVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__ContainsKey_MVWorldObjectDocumentationType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Remove_MV__Common__GamePassTier_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Remove_MVWorldObjectDocumentationType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                   );
    func_?(&TypeInfo__MV__Common__GamePassTier);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&TypeInfo__MVWorldObjectDocumentationType);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral__data_from_tier_shop_since_);
    func_?(&StringLiteral__data_from_tier_shop_since_there);
    func_?(&StringLiteral__does_not_have_its_data);
    func_?(&StringLiteral_Cant_remove_item_);
    cRam_? = '\x01';
  }
  pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).tierShopData;
  if (pDVar2 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
  goto code_?;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Object,GUILoginHandler+PlanetData]::
          Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                    (pDVar2,(Object *)tier,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                    );
  if (bVar3 == 0) {
    pSVar4 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffe4,(MethodInfo *)0x0);
    str3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
    pSVar4 = mscorlib.dll::System::String::String_Concat_5
                        (StringLiteral_Cant_remove_item_,pSVar4,
                         StringLiteral__data_from_tier_shop_since_there,str3,(MethodInfo *)0x0);
code_?:
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar4,(MethodInfo *)0x0);
    return;
  }
  pDVar5 = (this->fields).tierShopData;
  if ((pDVar5 == (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                  *)0x0) ||
     (pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,tier,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                         ), pDVar2 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
     ) {
code_?:
    func_?();
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
code_?:
    uVar6 = func_?(0);
    func_?(uVar6);
  }
  else {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (pDVar2,(Object *)documentationType,
                       MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__ContainsKey_MVWorldObjectDocumentationType_
                      );
    if (bVar3 != 0) {
      pDVar5 = (this->fields).tierShopData;
      this = (GameTierShopRepository *)0x0;
      if (pDVar5 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                     *)0x0) {
        while( true ) {
          pDVar7 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,tier,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                             );
          if ((pDVar7 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) ||
             (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 (pDVar7,documentationType,
                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                                 ), pOVar8 == (Object *)0x0)) goto code_?;
          if ((int)pOVar8[1].monitor <= (int)this) break;
          pDVar5 = (pGVar1->fields).tierShopData;
          if ((((pDVar5 == (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                            *)0x0) ||
               (pDVar7 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         ByteEnum,System::Object]::
                         Dictionary_2_System_ByteEnum_System_Object__get_Item
                                   ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,tier,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                   ), pDVar7 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)
               ) || (this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Int32Enum,System::Object]::
                               Dictionary_2_System_Int32Enum_System_Object__get_Item
                                         (pDVar7,documentationType,
                                          MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                                         ),
                    this_00 ==
                    (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)) ||
             (RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_00,(int32_t)this,
                                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                ), RVar9 == (RegexCharClass_SingleRange)0x0)) goto code_?;
          pDVar5 = (pGVar1->fields).tierShopData;
          if (*(int *)((int)RVar9 + 8) == woid) {
            if (((pDVar5 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                             *)0x0) &&
                (pDVar7 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,tier,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                    ), pDVar7 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0
                )) && (this_01 = (List_1_System_Object_ *)
                                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Int32Enum,System::Object]::
                                 Dictionary_2_System_Int32Enum_System_Object__get_Item
                                           (pDVar7,documentationType,
                                            MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                                           ), this_01 != (List_1_System_Object_ *)0x0)) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__RemoveAt
                        (this_01,(int32_t)this,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                        );
              break;
            }
            goto code_?;
          }
          this = (GameTierShopRepository *)((int)&this->klass + 1);
          if (pDVar5 == (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                         *)0x0) goto code_?;
        }
        pDVar5 = (pGVar1->fields).tierShopData;
        if (((pDVar5 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                         *)0x0) &&
            (pDVar7 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,tier,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                ), pDVar7 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0))
           && (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__get_Item
                                  (pDVar7,documentationType,
                                   MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                                  ), pOVar8 != (Object *)0x0)) {
          if (pOVar8[1].monitor == (MonitorData *)0x0) {
            pDVar5 = (pGVar1->fields).tierShopData;
            if ((pDVar5 == (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                            *)0x0) ||
               (pDVar7 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         ByteEnum,System::Object]::
                         Dictionary_2_System_ByteEnum_System_Object__get_Item
                                   ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,tier,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                   ), pDVar7 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)
               ) goto code_?;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__Remove
                      (pDVar7,documentationType,
                       MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Remove_MVWorldObjectDocumentationType_
                      );
          }
          pDVar5 = (pGVar1->fields).tierShopData;
          if ((pDVar5 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                          *)0x0) &&
             (this_02 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           ByteEnum,System::Object]::
                           Dictionary_2_System_ByteEnum_System_Object__get_Item
                                     ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,tier,
                                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                     ),
             this_02 !=
             (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
             0x0)) {
            iVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                    RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                    Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                              (this_02,
                               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Count__
                              );
            if (iVar10 != 0) {
              return;
            }
            pDVar5 = (pGVar1->fields).tierShopData;
            if (pDVar5 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                           *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
              Object]::Dictionary_2_System_ByteEnum_System_Object__Remove
                        ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar5,tier,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Remove_MV__Common__GamePassTier_
                        );
              return;
            }
          }
        }
      }
      goto code_?;
    }
    values = (String__Array *)func_?();
    if (values == (String__Array *)0x0) goto code_?;
    if ((StringLiteral_Cant_remove_item_ != (String *)0x0) &&
       (iVar11 = func_?(StringLiteral_Cant_remove_item_,(values->klass->_0).element_class),
       iVar11 == 0)) goto code_?;
    pSVar4 = StringLiteral_Cant_remove_item_;
    if (values->max_length == 0) goto code_?;
    values->vector[0] = StringLiteral_Cant_remove_item_;
    func_?(values->vector,pSVar4);
    pSVar4 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
    if ((pSVar4 != (String *)0x0) &&
       (iVar11 = func_?(pSVar4,(values->klass->_0).element_class), iVar11 == 0))
    goto code_?;
    if (values->max_length < 2) goto code_?;
    values->vector[1] = pSVar4;
    func_?(values->vector + 1,pSVar4);
    if ((StringLiteral__data_from_tier_shop_since_ != (String *)0x0) &&
       (iVar11 = func_?(StringLiteral__data_from_tier_shop_since_,
                                 (values->klass->_0).element_class), iVar11 == 0))
    goto code_?;
    pSVar4 = StringLiteral__data_from_tier_shop_since_;
    if (values->max_length < 3) goto code_?;
    values->vector[2] = StringLiteral__data_from_tier_shop_since_;
    func_?(values->vector + 2,pSVar4);
    pSVar4 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffe4,(MethodInfo *)0x0);
    if ((pSVar4 != (String *)0x0) &&
       (iVar11 = func_?(pSVar4,(values->klass->_0).element_class), iVar11 == 0))
    goto code_?;
    if (values->max_length < 4) goto code_?;
    values->vector[3] = pSVar4;
    func_?(values->vector + 3,pSVar4);
    if ((StringLiteral__does_not_have_its_data == (String *)0x0) ||
       (iVar11 = func_?(StringLiteral__does_not_have_its_data,
                                 (values->klass->_0).element_class), iVar11 != 0)) {
      pSVar4 = StringLiteral__does_not_have_its_data;
      if (4 < values->max_length) {
        values->vector[4] = StringLiteral__does_not_have_its_data;
        func_?(values->vector + 4,pSVar4);
        pSVar4 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar6 = func_?(0);
  func_?(uVar6);
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* GameTierShopRepository() */

void Assembly-CSharp.dll::GameTierShopRepository::GameTierShopRepository__ctor
               (GameTierShopRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>
                              );
  if (this_00 !=
      (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
       *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Dictionary__
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).tierShopData = this_00;
    func_?(method_00,this_00);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this,ExceptionArgument__Enum_obj,method_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

