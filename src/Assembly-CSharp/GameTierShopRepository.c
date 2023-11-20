
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
  pDVar1 = (this->fields).tierShopData;
  if (pDVar1 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                 *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
            Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                      ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar1,tier,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).tierShopData;
      this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Int32Enum,GamePassesHighScoreList+HighScoreListData]::
      Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
                );
      if (pDVar1 == (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                     *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
      Dictionary_2_System_ByteEnum_System_Object__Add
                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,tier,(Object *)this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Add_MV__Common__GamePassTier__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_
                );
    }
    pDVar1 = (this->fields).tierShopData;
    if (pDVar1 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                   *)0x0) {
      this_01 = (Dictionary_2_System_Int32Enum_System_Single_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,tier,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                          );
      if (this_01 != (Dictionary_2_System_Int32Enum_System_Single_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                          (this_01,documentationType,
                           MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__ContainsKey_MVWorldObjectDocumentationType_
                          );
        if (bVar2 == 0) {
          pDVar1 = (this->fields).tierShopData;
          if (pDVar1 == (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                         *)0x0) goto code_?;
          pDVar3 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,tier,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                             );
          worldObject = (MVWorldObjectClient *)
                        TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>;
          this_02 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                    func_?();
          mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
          __Il2CppFullySharedGenericType]::
          LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                    (this_02,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
          if (pDVar3 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__Add
                    (pDVar3,documentationType,(Object *)this_02,
                     MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                    );
        }
        pDVar1 = (this->fields).tierShopData;
        if (pDVar1 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                       *)0x0) {
          pDVar3 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                   ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                             ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,tier,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                             );
          if (pDVar3 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
            this_03 = (List_1_System_Object_ *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                (pDVar3,documentationType,
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
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  pDVar1 = (this->fields).tierShopData;
  if (pDVar1 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                 *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
            Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                      ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar1,tier,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                      );
    if (bVar2 == 0) {
      return (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0;
    }
    pDVar1 = (this->fields).tierShopData;
    if (pDVar1 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                   *)0x0) {
      pDVar3 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar1,tier,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                         );
      return pDVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pDVar3 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)(*pcVar4)();
  return pDVar3;
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
  pDVar2 = (this->fields).tierShopData;
  if (pDVar2 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                 *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
            Single]::Dictionary_2_System_ByteEnum_System_Single__ContainsKey
                      ((Dictionary_2_System_ByteEnum_System_Single_ *)pDVar2,tier,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                      );
    if (bVar3 == 0) {
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffe4,(MethodInfo *)0x0)
      ;
      str3 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_5
                         (StringLiteral_Cant_remove_item_,pSVar4,
                          StringLiteral__data_from_tier_shop_since_there,str3,(MethodInfo *)0x0);
code_?:
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar4,(MethodInfo *)0x0);
      return;
    }
    pDVar2 = (this->fields).tierShopData;
    if ((pDVar2 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                    *)0x0) &&
       (this_00 = (Dictionary_2_System_Int32Enum_System_Single_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,tier,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                            ), this_00 != (Dictionary_2_System_Int32Enum_System_Single_ *)0x0)) {
      bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                        (this_00,documentationType,
                         MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__ContainsKey_MVWorldObjectDocumentationType_
                        );
      if (bVar3 == 0) {
        values = (String__Array *)func_?();
        pSVar4 = StringLiteral_Cant_remove_item_;
        if (values != (String__Array *)0x0) {
          if (values->max_length != 0) {
            values->vector[0] = StringLiteral_Cant_remove_item_;
            func_?(values->vector,pSVar4);
            pSVar4 = mscorlib.dll::System::Enum::Enum_ToString
                               ((Enum *)&stack0xfffffff0,(MethodInfo *)0x0);
            if (1 < values->max_length) {
              values->vector[1] = pSVar4;
              func_?(values->vector + 1,pSVar4);
              pSVar4 = StringLiteral__data_from_tier_shop_since_;
              if (2 < values->max_length) {
                values->vector[2] = StringLiteral__data_from_tier_shop_since_;
                func_?(values->vector + 2,pSVar4);
                pSVar4 = mscorlib.dll::System::Enum::Enum_ToString
                                   ((Enum *)&stack0xffffffe4,(MethodInfo *)0x0);
                if (3 < values->max_length) {
                  values->vector[3] = pSVar4;
                  func_?(values->vector + 3,pSVar4);
                  pSVar4 = StringLiteral__does_not_have_its_data;
                  if (4 < values->max_length) {
                    values->vector[4] = StringLiteral__does_not_have_its_data;
                    func_?(values->vector + 4,pSVar4);
                    pSVar4 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0)
                    ;
                    goto code_?;
                  }
                }
              }
            }
          }
          goto code_?;
        }
      }
      else {
        pDVar2 = (this->fields).tierShopData;
        this = (GameTierShopRepository *)0x0;
        if (pDVar2 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                       *)0x0) {
          while( true ) {
            pDVar5 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,tier,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                               );
            if ((pDVar5 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) ||
               (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32Enum,System::Object]::
                         Dictionary_2_System_Int32Enum_System_Object__get_Item
                                   (pDVar5,documentationType,
                                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                                   ), pOVar6 == (Object *)0x0)) goto code_?;
            if ((int)pOVar6[1].monitor <= (int)this) break;
            pDVar2 = (pGVar1->fields).tierShopData;
            if ((((pDVar2 == (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                              *)0x0) ||
                 (pDVar5 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           ByteEnum,System::Object]::
                           Dictionary_2_System_ByteEnum_System_Object__get_Item
                                     ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,tier,
                                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                     ),
                 pDVar5 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)) ||
                (this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Int32Enum,System::Object]::
                           Dictionary_2_System_Int32Enum_System_Object__get_Item
                                     (pDVar5,documentationType,
                                      MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                                     ),
                this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                ) || (RVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                              RegularExpressions::RegexCharClass+SingleRange]::
                              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                        (this_01,(int32_t)this,
                                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                        ), RVar7 == (RegexCharClass_SingleRange)0x0))
            goto code_?;
            pDVar2 = (pGVar1->fields).tierShopData;
            if (*(int *)((int)RVar7 + 8) == woid) {
              if (((pDVar2 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                               *)0x0) &&
                  (pDVar5 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            ByteEnum,System::Object]::
                            Dictionary_2_System_ByteEnum_System_Object__get_Item
                                      ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,tier,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                      ),
                  pDVar5 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)) &&
                 (this_02 = (List_1_System_Object_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      (pDVar5,documentationType,
                                       MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                                      ), this_02 != (List_1_System_Object_ *)0x0)) {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__RemoveAt
                          (this_02,(int32_t)this,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                          );
                break;
              }
              goto code_?;
            }
            this = (GameTierShopRepository *)((int)&this->klass + 1);
            if (pDVar2 == (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                           *)0x0) goto code_?;
          }
          pDVar2 = (pGVar1->fields).tierShopData;
          if (((pDVar2 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                           *)0x0) &&
              (pDVar5 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,tier,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                  ), pDVar5 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0))
             && (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    (pDVar5,documentationType,
                                     MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                                    ), pOVar6 != (Object *)0x0)) {
            if (pOVar6[1].monitor == (MonitorData *)0x0) {
              pDVar2 = (pGVar1->fields).tierShopData;
              if ((pDVar2 == (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                              *)0x0) ||
                 (pDVar5 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           ByteEnum,System::Object]::
                           Dictionary_2_System_ByteEnum_System_Object__get_Item
                                     ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,tier,
                                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                     ),
                 pDVar5 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0))
              goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__Remove
                        (pDVar5,documentationType,
                         MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Remove_MVWorldObjectDocumentationType_
                        );
            }
            pDVar2 = (pGVar1->fields).tierShopData;
            if ((pDVar2 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                            *)0x0) &&
               (this_03 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             ByteEnum,System::Object]::
                             Dictionary_2_System_ByteEnum_System_Object__get_Item
                                       ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,tier,
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                       ),
               this_03 !=
               (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)0x0)) {
              iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                                (this_03,
                                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Count__
                                );
              if (iVar8 != 0) {
                return;
              }
              pDVar2 = (pGVar1->fields).tierShopData;
              if (pDVar2 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                             *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__Remove
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,tier,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Remove_MV__Common__GamePassTier_
                          );
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Dictionary__
            );
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).tierShopData =
       (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
        *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

