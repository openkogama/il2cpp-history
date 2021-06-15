
/* Void AddItemToTierShop(GamePassTier, MVWorldObjectDocumentationType, MVWorldObjectClient) */

void Assembly-CSharp.dll::GameTierShopRepository::GameTierShopRepository_AddItemToTierShop
               (GameTierShopRepository *this,GamePassTier__Enum tier,
               MVWorldObjectDocumentationType__Enum documentationType,
               MVWorldObjectClient *worldObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).tierShopData;
  if (pDVar1 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                 *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System
            ::Object]::Dictionary_2_MV_Common_GamePassTier_System_Object__ContainsKey
                      ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,tier,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).tierShopData;
      this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                               );
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
                );
      if (pDVar1 == (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                     *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System::
      Object]::Dictionary_2_MV_Common_GamePassTier_System_Object__Add
                ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,tier,(Object *)this_00
                 ,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Add_MV__Common__GamePassTier__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_
                );
    }
    pDVar1 = (this->fields).tierShopData;
    if (pDVar1 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                   *)0x0) {
      pDVar3 = (Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
               GamePassTier,System::Object]::
               Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                         ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,tier,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                         );
      if (pDVar3 != (Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)0x0) {
        bVar2 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
                Dictionary_2_MVWorldObjectDocumentationType_System_Object__ContainsKey
                          (pDVar3,documentationType,
                           MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__ContainsKey_MVWorldObjectDocumentationType_
                          );
        if (bVar2 == 0) {
          pDVar1 = (this->fields).tierShopData;
          if (pDVar1 == (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                         *)0x0) goto code_?;
          pDVar3 = (Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                   GamePassTier,System::Object]::
                   Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                             ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,tier,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                             );
          worldObject = (MVWorldObjectClient *)
                        TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>;
          this_01 = (List_1_UnityEngine_Vector4_ *)func_?();
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
          List_1_UnityEngine_Vector4___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
          if (pDVar3 == (Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::
          Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
          Dictionary_2_MVWorldObjectDocumentationType_System_Object__Add
                    (pDVar3,documentationType,(Object *)this_01,
                     MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                    );
        }
        pDVar1 = (this->fields).tierShopData;
        if (pDVar1 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                       *)0x0) {
          pDVar3 = (Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                   GamePassTier,System::Object]::
                   Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                             ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,tier,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                             );
          if (pDVar3 != (Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)0x0) {
            this_02 = (List_1_UIPushOption_ *)
                      mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
                      Dictionary_2_MVWorldObjectDocumentationType_System_Object__get_Item
                                (pDVar3,documentationType,
                                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                                );
            if (this_02 != (List_1_UIPushOption_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
              List_1_UIPushOption__Add
                        (this_02,(UIPushOption__Enum)worldObject,
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).tierShopData;
  if (pDVar1 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                 *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System
            ::Object]::Dictionary_2_MV_Common_GamePassTier_System_Object__ContainsKey
                      ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,tier,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                      );
    if (bVar2 == 0) {
      return (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0;
    }
    pDVar1 = (this->fields).tierShopData;
    if (pDVar1 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                   *)0x0) {
      pDVar3 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
               GamePassTier,System::Object]::
               Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                         ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,tier,
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).tierShopData;
  if (pDVar1 ==
      (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
       *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0,0);
    func_?(uVar2);
  }
  else {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::GamePassTier,System
            ::Object]::Dictionary_2_MV_Common_GamePassTier_System_Object__ContainsKey
                      ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,tier,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                      );
    if (bVar3 == 0) {
      piVar4 = (int *)func_?(TypeInfo__MVWorldObjectDocumentationType,&documentationType);
      if (piVar4 != (int *)0x0) {
        pSVar5 = (String *)(**(code **)(*piVar4 + 0xd8))(piVar4,*(undefined4 *)(*piVar4 + 0xdc));
        pMVar6 = (MVWorldObjectDocumentationType__Enum *)func_?(piVar4);
        documentationType = *pMVar6;
        piVar4 = (int *)func_?(TypeInfo__MV__Common__GamePassTier,&tier);
        if (piVar4 != (int *)0x0) {
          str3 = (String *)(**(code **)(*piVar4 + 0xd8))(piVar4,*(undefined4 *)(*piVar4 + 0xdc));
          puVar7 = (undefined1 *)func_?(piVar4);
          tier = CONCAT31(tier._1_3_,*puVar7);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar5 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral_Cant_remove_item_,pSVar5,
                              StringLiteral__data_from_tier_shop_since_there,str3,(MethodInfo *)0x0)
          ;
code_?:
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)pSVar5,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
    pDVar1 = (this->fields).tierShopData;
    if ((pDVar1 ==
         (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
          *)0x0) ||
       (pDVar8 = (Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                 GamePassTier,System::Object]::
                 Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                           ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,tier,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                           ),
       pDVar8 == (Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)0x0))
    goto code_?;
    bVar3 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
            Dictionary_2_MVWorldObjectDocumentationType_System_Object__ContainsKey
                      (pDVar8,documentationType,
                       MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__ContainsKey_MVWorldObjectDocumentationType_
                      );
    if (bVar3 != 0) {
      pDVar1 = (this->fields).tierShopData;
      iVar9 = 0;
      if (pDVar1 !=
          (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
           *)0x0) {
        while( true ) {
          pDVar8 = (Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                   GamePassTier,System::Object]::
                   Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                             ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,tier,
                              MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                             );
          if ((pDVar8 == (Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)0x0) ||
             (pCVar10 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                       mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
                       Dictionary_2_MVWorldObjectDocumentationType_System_Object__get_Item
                                 (pDVar8,documentationType,
                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                                 ),
             pCVar10 == (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0))
          goto code_?;
          pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (pCVar10,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                             );
          if ((int)pOVar11 <= iVar9) break;
          pDVar1 = (this->fields).tierShopData;
          if ((((pDVar1 ==
                 (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                  *)0x0) ||
               (pDVar8 = (Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                         GamePassTier,System::Object]::
                         Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                   ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,
                                    tier,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                   ),
               pDVar8 == (Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)0x0)) ||
              (this_00 = (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                         mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
                         Dictionary_2_MVWorldObjectDocumentationType_System_Object__get_Item
                                   (pDVar8,documentationType,
                                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                                   ),
              this_00 == (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0)) ||
             (this_01 = (Collection_1_VoxelHit_ *)
                        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  (this_00,iVar9,
                                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                  ), this_01 == (Collection_1_VoxelHit_ *)0x0))
          goto code_?;
          pIVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
          pDVar1 = (this->fields).tierShopData;
          if (pIVar12 == (IList_1_VoxelHit_ *)woid) {
            if (((pDVar1 !=
                  (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                   *)0x0) &&
                (pDVar8 = (Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                          GamePassTier,System::Object]::
                          Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                    ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,
                                     tier,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                    ),
                pDVar8 != (Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)0x0)) &&
               (this_02 = (List_1_MVPlayer_ *)
                          mscorlib.dll::System::Collections::Generic::
                          Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
                          Dictionary_2_MVWorldObjectDocumentationType_System_Object__get_Item
                                    (pDVar8,documentationType,
                                     MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                                    ), this_02 != (List_1_MVPlayer_ *)0x0)) {
              mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::
              List_1_MVPlayer__RemoveAt
                        (this_02,iVar9,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                        );
              break;
            }
            goto code_?;
          }
          iVar9 = iVar9 + 1;
          if (pDVar1 ==
              (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
               *)0x0) goto code_?;
        }
        pDVar1 = (this->fields).tierShopData;
        if (((pDVar1 !=
              (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
               *)0x0) &&
            (pDVar8 = (Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                      GamePassTier,System::Object]::
                      Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,tier,
                                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                ),
            pDVar8 != (Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)0x0)) &&
           (pCVar10 = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                     mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
                     Dictionary_2_MVWorldObjectDocumentationType_System_Object__get_Item
                               (pDVar8,documentationType,
                                MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                               ),
           pCVar10 != (Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0)) {
          woid = (int32_t)
                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__;
          tier = (GamePassTier__Enum)&UNK_?;
          documentationType = (MVWorldObjectDocumentationType__Enum)pCVar10;
          pOVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             (pCVar10,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                             );
          if (pOVar11 == (Object *)0x0) {
            pDVar1 = (this->fields).tierShopData;
            if (pDVar1 !=
                (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                 *)0x0) {
              method = (MethodInfo *)tier;
              documentationType = (MVWorldObjectDocumentationType__Enum)&UNK_?;
              woid = (int32_t)pDVar1;
              pDVar8 = (Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                       GamePassTier,System::Object]::
                       Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                 ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,tier
                                  ,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                 );
              if (pDVar8 != (Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::
                Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
                Dictionary_2_MVWorldObjectDocumentationType_System_Object__Remove
                          (pDVar8,documentationType,
                           MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Remove_MVWorldObjectDocumentationType_
                          );
                goto code_?;
              }
            }
          }
          else {
code_?:
            pDVar1 = (this->fields).tierShopData;
            if ((pDVar1 !=
                 (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                  *)0x0) &&
               (this_03 = (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                           *)mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                             GamePassTier,System::Object]::
                             Dictionary_2_MV_Common_GamePassTier_System_Object__get_Item
                                       ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)
                                        pDVar1,tier,
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                       ),
               this_03 !=
               (Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                *)0x0)) {
              pOVar11 = System.Core.dll::System::Linq::
                       Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic
                       ::KeyValuePair`2[System::Object,System::Object],System::Object]::
                       Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                 (this_03,
                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Count__
                                 );
              if (pOVar11 != (Object *)0x0) {
                return;
              }
              pDVar1 = (this->fields).tierShopData;
              if (pDVar1 !=
                  (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                   *)0x0) {
                documentationType =
                     (MVWorldObjectDocumentationType__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Remove_MV__Common__GamePassTier_
                ;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::Common::
                GamePassTier,System::Object]::
                Dictionary_2_MV_Common_GamePassTier_System_Object__Remove
                          ((Dictionary_2_MV_Common_GamePassTier_System_Object_ *)pDVar1,tier,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Remove_MV__Common__GamePassTier_
                          );
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    woid = 5;
    documentationType = (MVWorldObjectDocumentationType__Enum)TypeInfo__System__String;
    tier = (GamePassTier__Enum)&UNK_?;
    values = (String__Array *)func_?();
    if (values == (String__Array *)0x0) goto code_?;
    if ((StringLiteral_Cant_remove_item_ != (String *)0x0) &&
       (iVar9 = func_?(StringLiteral_Cant_remove_item_,(values->klass->_0).element_class),
       iVar9 == 0)) goto code_?;
    if (values->max_length == 0) goto code_?;
    values->vector[0] = StringLiteral_Cant_remove_item_;
    piVar4 = (int *)func_?(TypeInfo__MVWorldObjectDocumentationType,&documentationType);
    if (piVar4 == (int *)0x0) goto code_?;
    pSVar5 = (String *)(**(code **)(*piVar4 + 0xd8))(piVar4,*(undefined4 *)(*piVar4 + 0xdc));
    pMVar6 = (MVWorldObjectDocumentationType__Enum *)func_?(piVar4);
    documentationType = *pMVar6;
    if ((pSVar5 != (String *)0x0) &&
       (iVar9 = func_?(pSVar5,(values->klass->_0).element_class), iVar9 == 0))
    goto code_?;
    if (values->max_length < 2) goto code_?;
    values->vector[1] = pSVar5;
    if ((StringLiteral__data_from_tier_shop_since_ != (String *)0x0) &&
       (iVar9 = func_?(StringLiteral__data_from_tier_shop_since_,
                                 (values->klass->_0).element_class), iVar9 == 0))
    goto code_?;
    if (values->max_length < 3) goto code_?;
    values->vector[2] = StringLiteral__data_from_tier_shop_since_;
    piVar4 = (int *)func_?(TypeInfo__MV__Common__GamePassTier,&tier);
    if (piVar4 == (int *)0x0) goto code_?;
    pSVar5 = (String *)(**(code **)(*piVar4 + 0xd8))(piVar4,*(undefined4 *)(*piVar4 + 0xdc));
    puVar7 = (undefined1 *)func_?(piVar4);
    tier = CONCAT31(tier._1_3_,*puVar7);
    if ((pSVar5 != (String *)0x0) &&
       (iVar9 = func_?(pSVar5,(values->klass->_0).element_class), iVar9 == 0))
    goto code_?;
    if (values->max_length < 4) goto code_?;
    values->vector[3] = pSVar5;
    if ((StringLiteral__does_not_have_its_data == (String *)0x0) ||
       (iVar9 = func_?(StringLiteral__does_not_have_its_data,
                                 (values->klass->_0).element_class), iVar9 != 0)) {
      if (4 < values->max_length) {
        values->vector[4] = StringLiteral__does_not_have_its_data;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar5 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
  }
  uVar2 = func_?(0,0);
  func_?(uVar2);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* GameTierShopRepository() */

void Assembly-CSharp.dll::GameTierShopRepository::GameTierShopRepository__ctor
               (GameTierShopRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Dictionary__
            );
  (this->fields).tierShopData = this_00;
  return;
}

