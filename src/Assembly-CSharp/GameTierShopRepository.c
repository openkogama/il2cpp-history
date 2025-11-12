
/* Void AddItemToTierShop(GamePassTier, MVWorldObjectDocumentationType, MVWorldObjectClient) */

void Assembly-CSharp.dll::GameTierShopRepository::GameTierShopRepository_AddItemToTierShop
               (GameTierShopRepository *this,GamePassTier__Enum tier,
               MVWorldObjectDocumentationType__Enum documentationType,
               MVWorldObjectClient *worldObject,MethodInfo *method)

{
  pMVar1 = worldObject;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Add_MV__Common__GamePassTier__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__ContainsKey_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)(this->fields).tierShopData;
  if (this_00 !=
      (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_ *)
      0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
            WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
            Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                      (this_00,tier & 0xff,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      pDVar3 = (this->fields).tierShopData;
      this_01 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
                FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>
                             );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Int32Enum,GamePassesHighScoreList+HighScoreListData]::
      Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Dictionary__
                );
      if (pDVar3 == (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                     *)0x0) goto code_?;
      pMVar1 = (MVWorldObjectClient *)CONCAT71((int7)((ulonglong)pMVar1 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
      Dictionary_2_System_ByteEnum_System_Object__TryInsert
                ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,tier & 0xff,(Object *)this_01
                 ,(InsertionBehavior__Enum)pMVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Add_MV__Common__GamePassTier__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_
                 ->klass->rgctx_data[0x22].method);
    }
    pDVar3 = (this->fields).tierShopData;
    if ((pDVar3 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                    *)0x0) &&
       (this_02 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,tier & 0xff,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                            ), this_02 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0)
       ) {
      iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine
              ::Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                        (this_02,documentationType,
                         MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__ContainsKey_MVWorldObjectDocumentationType_
                         ->klass->rgctx_data[0x21].method);
      if (iVar2 < 0) {
        pDVar3 = (this->fields).tierShopData;
        if (pDVar3 == (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                       *)0x0) goto code_?;
        pDVar4 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                 Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                           ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,tier & 0xff,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                           );
        this_03 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                  FUN_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
        __Il2CppFullySharedGenericType]::
        LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                  (this_03,
                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
        if (pDVar4 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                  (pDVar4,documentationType,(Object *)this_03,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar1 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Add_MVWorldObjectDocumentationType__System__Collections__Generic__List<MVWorldObjectClient>_
                   ->klass->rgctx_data[0x22].method);
      }
      pDVar3 = (this->fields).tierShopData;
      if (((pDVar3 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                       *)0x0) &&
          (pDVar4 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System
                    ::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar3,tier & 0xff,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                              ), pDVar4 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)) &&
         (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              (pDVar4,documentationType,
                               MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                              ),
         pMVar6 = 
         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
         , pOVar5 != (Object *)0x0)) {
        pOVar7 = pOVar5[1].klass;
        piVar8 = (int *)((longlong)&pOVar5[1].monitor + 4);
        *piVar8 = *piVar8 + 1;
        if (pOVar7 == (Object__Class *)0x0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar10 = *(uint *)&pOVar5[1].monitor;
        if (uVar10 < *(uint *)&(pOVar7->_0).namespaze) {
          *(uint *)&pOVar5[1].monitor = uVar10 + 1;
        }
        else {
          uVar10 = *(uint *)&pOVar5[1].monitor;
          FUN_?(pOVar5,uVar10 + 1,
                        (pMVar6->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                        rgctxDataDummy,pOVar7,unaff_RDI);
          pOVar7 = pOVar5[1].klass;
          *(uint *)&pOVar5[1].monitor = uVar10 + 1;
          if (pOVar7 == (Object__Class *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if (*(uint *)&(pOVar7->_0).namespaze <= uVar10) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        bVar11 = iRam_? != 0;
        (&(pOVar7->_0).byval_arg.data)[(int)uVar10].typeHandle =
             (Il2CppMetadataTypeHandle)worldObject;
        if (bVar11) {
          uVar10 = (uint)((ulonglong)(&(pOVar7->_0).byval_arg.data + (int)uVar10) >> 0xc);
          puVar12 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar13 = *puVar12;
            LOCK();
            uVar14 = *puVar12;
            if (uVar13 == uVar14) {
              *puVar12 = uVar13 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (uVar13 != uVar14);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Dictionary`2[MVWorldObjectDocumentationType,List`1[MVWorldObjectClient]]
   GetTierItemData(GamePassTier) */

Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *
Assembly-CSharp.dll::GameTierShopRepository::GameTierShopRepository_GetTierItemData
          (GameTierShopRepository *this,GamePassTier__Enum tier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
            *)(this->fields).tierShopData;
  if (pDVar1 != (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                 *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
            WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
            Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                      (pDVar1,tier & 0xff,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                       ->klass->rgctx_data[0x21].method);
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
    ;
    if (iVar2 < 0) {
      return (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)0x0;
    }
    pDVar1 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
              *)(this->fields).tierShopData;
    if (pDVar1 != (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
                   *)0x0) {
      uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
              WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
              Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                        (pDVar1,tier & 0xff,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar4 < 0) {
        uVar5 = func_?(pMVar3->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar5);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        pDVar7 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                 (*pcVar6)();
        return pDVar7;
      }
      pDVar8 = (pDVar1->fields)._entries;
      if (pDVar8 != (Dictionary_2_TKey_TValue_Entry_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___Array
                     *)0x0) {
        if (uVar4 < (uint)pDVar8->max_length) {
          return *(Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ **)
                  &pDVar8->vector[(int)uVar4].value.centerDamage;
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        pDVar7 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
                 (*pcVar6)();
        return pDVar7;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      pDVar7 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)
               (*pcVar6)();
      return pDVar7;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pDVar7 = (Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_ *)(*pcVar6)();
  return pDVar7;
}


/* Void RemoveItemToTierShop(GamePassTier, MVWorldObjectDocumentationType, Int32) */

void Assembly-CSharp.dll::GameTierShopRepository::GameTierShopRepository_RemoveItemToTierShop
               (GameTierShopRepository *this,GamePassTier__Enum tier,
               MVWorldObjectDocumentationType__Enum documentationType,int32_t woid,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__ContainsKey_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Remove_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Remove_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__GamePassTier);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectDocumentationType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__data_from_tier_shop_since_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__data_from_tier_shop_since_there);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__does_not_have_its_data);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Cant_remove_item_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)(this->fields).tierShopData;
  if (this_00 !=
      (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_ *)
      0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::
            WorldObject::RuntimeEvents::ExplosionEvent+ExplosionValues]::
            Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues__FindEntry
                      (this_00,tier & 0xff,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__ContainsKey_MV__Common__GamePassTier_
                       ->klass->rgctx_data[0x21].method);
    MStack_2 = documentationType;
    if (iVar1 < 0) {
      EStack_3.klass = (Enum__Class *)TypeInfo__MVWorldObjectDocumentationType;
      EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
      pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
      EStack_3.klass = (Enum__Class *)TypeInfo__MV__Common__GamePassTier;
      EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
      MStack_2 = CONCAT31(MStack_2._1_3_,(char)tier);
      str3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_6
                         (StringLiteral_Cant_remove_item_,pSVar4,
                          StringLiteral__data_from_tier_shop_since_there,str3,(MethodInfo *)0x0);
      iVar5 = *(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c;
code_?:
      if (iVar5 == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)pSVar4,(MethodInfo *)0x0);
      return;
    }
    pDVar6 = (this->fields).tierShopData;
    if ((pDVar6 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                    *)0x0) &&
       (this_01 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                  Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,tier & 0xff,
                             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                            ), this_01 != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0)
       ) {
      iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine
              ::Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                        (this_01,documentationType,
                         MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__ContainsKey_MVWorldObjectDocumentationType_
                         ->klass->rgctx_data[0x21].method);
      if (iVar1 < 0) {
        values = (String__Array *)FUN_?(TypeInfo__System__String);
        if (values != (String__Array *)0x0) {
          FUN_?(values,0,StringLiteral_Cant_remove_item_);
          EStack_3.klass = (Enum__Class *)TypeInfo__MVWorldObjectDocumentationType;
          EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
          pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
          FUN_?(values,1,pSVar4);
          FUN_?(values,2,StringLiteral__data_from_tier_shop_since_);
          EStack_3.klass = (Enum__Class *)TypeInfo__MV__Common__GamePassTier;
          EStack_3.monitor = (MonitorData *)0xffffffffffffffff;
          MStack_2 = CONCAT31(MStack_2._1_3_,(char)tier);
          pSVar4 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_3,(MethodInfo *)0x0);
          FUN_?(values,3,pSVar4);
          FUN_?(values,4,StringLiteral__does_not_have_its_data);
          pSVar4 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
          iVar5 = *(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c;
          goto code_?;
        }
      }
      else {
        pDVar6 = (this->fields).tierShopData;
        index = 0;
        if (pDVar6 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                       *)0x0) {
          lVar7 = 0x20;
          while( true ) {
            pDVar8 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     ByteEnum,System::Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                               ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,tier & 0xff,
                                MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                               );
            if ((pDVar8 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) ||
               (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32Enum,System::Object]::
                         Dictionary_2_System_Int32Enum_System_Object__get_Item
                                   (pDVar8,documentationType,
                                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                                   ), pOVar9 == (Object *)0x0)) goto code_?;
            if (*(int *)&pOVar9[1].monitor <= (int)index) break;
            pDVar6 = (this->fields).tierShopData;
            if (((pDVar6 == (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                             *)0x0) ||
                (pDVar8 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          ByteEnum,System::Object]::
                          Dictionary_2_System_ByteEnum_System_Object__get_Item
                                    ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
                                     tier & 0xff,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                    ), pDVar8 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0
                )) || (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32Enum,System::Object]::
                                Dictionary_2_System_Int32Enum_System_Object__get_Item
                                          (pDVar8,documentationType,
                                           MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                                          ), pOVar9 == (Object *)0x0)) goto code_?;
            if (*(uint *)&pOVar9[1].monitor <= index) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pOVar11 = pOVar9[1].klass;
            if (pOVar11 == (Object__Class *)0x0) goto code_?;
            if (*(uint *)&(pOVar11->_0).namespaze <= index) {
              FUN_?();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            lVar12 = *(longlong *)((longlong)&(pOVar11->_0).image + lVar7);
            if (lVar12 == 0) goto code_?;
            pDVar6 = (this->fields).tierShopData;
            if (*(int *)(lVar12 + 0x10) == woid) {
              if (((pDVar6 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                               *)0x0) &&
                  (pDVar8 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            ByteEnum,System::Object]::
                            Dictionary_2_System_ByteEnum_System_Object__get_Item
                                      ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
                                       tier & 0xff,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                      ),
                  pDVar8 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)) &&
                 (this_02 = (List_1_System_Object_ *)
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      (pDVar8,documentationType,
                                       MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                                      ), this_02 != (List_1_System_Object_ *)0x0)) {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__RemoveAt
                          (this_02,index,
                           MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                          );
                break;
              }
              goto code_?;
            }
            index = index + 1;
            lVar7 = lVar7 + 8;
            if (pDVar6 == (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                           *)0x0) goto code_?;
          }
          pDVar6 = (this->fields).tierShopData;
          if (((pDVar6 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                           *)0x0) &&
              (pDVar8 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        ByteEnum,System::Object]::
                        Dictionary_2_System_ByteEnum_System_Object__get_Item
                                  ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,tier & 0xff
                                   ,
                                   MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                  ), pDVar8 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0))
             && (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    (pDVar8,documentationType,
                                     MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__get_Item_MVWorldObjectDocumentationType_
                                    ), pOVar9 != (Object *)0x0)) {
            if (*(int *)&pOVar9[1].monitor == 0) {
              pDVar6 = (this->fields).tierShopData;
              if ((pDVar6 == (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                              *)0x0) ||
                 (pDVar8 = (Dictionary_2_System_Int32Enum_System_Object_ *)
                           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           ByteEnum,System::Object]::
                           Dictionary_2_System_ByteEnum_System_Object__get_Item
                                     ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
                                      tier & 0xff,
                                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                     ),
                 pDVar8 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0))
              goto code_?;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__Remove
                        (pDVar8,documentationType,
                         MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>__Remove_MVWorldObjectDocumentationType_
                        );
            }
            pDVar6 = (this->fields).tierShopData;
            if ((pDVar6 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                            *)0x0) &&
               (pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         ByteEnum,System::Object]::
                         Dictionary_2_System_ByteEnum_System_Object__get_Item
                                   ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,
                                    tier & 0xff,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__get_Item_MV__Common__GamePassTier_
                                   ), pOVar9 != (Object *)0x0)) {
              if (*(int *)&pOVar9[2].klass != *(int *)&pOVar9[2].monitor) {
                return;
              }
              pDVar6 = (this->fields).tierShopData;
              if (pDVar6 != (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
                             *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__Remove
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar6,tier & 0xff,
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
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* GameTierShopRepository() */

void Assembly-CSharp.dll::GameTierShopRepository::GameTierShopRepository__ctor
               (GameTierShopRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::Common::GamePassTier,_System::Collections::Generic::Dictionary<MVWorldObjectDocumentationType,_System::Collections::Generic::List<MVWorldObjectClient>_>_>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).tierShopData =
       (Dictionary_2_MV_Common_GamePassTier_Dictionary_2_MVWorldObjectDocumentationType_List_1_MVWorldObjectClient_
        *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
  return;
}

