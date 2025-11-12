
/* Void AddItem(MVItem) */

void Assembly-CSharp.dll::MVItemBusinessLogic::MVItemBusinessLogic_AddItem
               (MVItemBusinessLogic *this,MVItem *item,MethodInfo *method)

{
  if (item != (MVItem *)0x0) {
    MVItemBusinessLogic_AddItemWithNoData
              (this,(item->fields).itemID,(item->fields).resellable,(item->fields).itemCategoryID,
               (item->fields).itemTypeID,(item->fields).name,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void AddItemWithNoData(Int32, Boolean, Int32, Int32, String) */

void Assembly-CSharp.dll::MVItemBusinessLogic::MVItemBusinessLogic_AddItemWithNoData
               (MVItemBusinessLogic *this,int32_t itemID,bool resellable,int32_t itemCategoryID,
               int32_t itemTypeID,String *name,MethodInfo *method)

{
  iVar1 = itemCategoryID;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__set_Item_int__MV__WorldObject__MVItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVItem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Item_already_added_to_business_l);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).items;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,itemID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (-1 < iVar2) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Item_already_added_to_business_l,(MethodInfo *)0x0);
      return;
    }
    value = (Object *)FUN_?(TypeInfo__MV__WorldObject__MVItem);
    if (value != (Object *)0x0) {
      bVar3 = iRam_? != 0;
      *(int32_t *)&value[1].monitor = itemTypeID;
      value[2].monitor = (MonitorData *)name;
      *(int32_t *)&value[1].klass = itemID;
      *(bool *)((longlong)&value[4].klass + 1) = resellable;
      *(int32_t *)((longlong)&value[1].klass + 4) = itemCategoryID;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&value[2].monitor >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
      this_01 = (this->fields).items;
      if (this_01 != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,*(int32_t *)&value[1].klass,
                   value,CONCAT31((int3)((uint)iVar1 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__set_Item_int__MV__WorldObject__MVItem_
                   ->klass->rgctx_data[0x22].method);
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean CanAddItemToInventory(Int32) */

bool Assembly-CSharp.dll::MVItemBusinessLogic::MVItemBusinessLogic_CanAddItemToInventory
               (MVItemBusinessLogic *this,int32_t itemID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).items;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (pDVar1,itemID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).items;
    if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      if (iVar2 < 0) {
        iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                          (pDVar1,itemID,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                           ->klass->rgctx_data[0x21].method);
        if (iVar2 < 0) {
          return 0;
        }
        pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).items;
        if (pDVar1 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
        goto code_?;
      }
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,itemID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
                         );
      if (pOVar3 != (Object *)0x0) {
        return *(bool *)((longlong)&pOVar3[4].klass + 1);
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* MVItem GetItem(Int32) */

MVItem * Assembly-CSharp.dll::MVItemBusinessLogic::MVItemBusinessLogic_GetItem
                   (MVItemBusinessLogic *this,int32_t itemID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).items;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (pDVar1,itemID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
    ;
    if (iVar2 < 0) {
      return (MVItem *)0x0;
    }
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).items;
    if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (pDVar1,itemID,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar4 < 0) {
        uVar5 = func_?(pMVar3->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar5);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        pMVar7 = (MVItem *)(*pcVar6)();
        return pMVar7;
      }
      pDVar8 = (pDVar1->fields)._entries;
      if (pDVar8 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0)
      {
        if (uVar4 < (uint)pDVar8->max_length) {
          return *(MVItem **)&pDVar8->vector[(int)uVar4].value.y;
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        pMVar7 = (MVItem *)(*pcVar6)();
        return pMVar7;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      pMVar7 = (MVItem *)(*pcVar6)();
      return pMVar7;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pMVar7 = (MVItem *)(*pcVar6)();
  return pMVar7;
}


/* MVItemBusinessLogic() */

void Assembly-CSharp.dll::MVItemBusinessLogic::MVItemBusinessLogic__ctor
               (MVItemBusinessLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).items = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)this_00;
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

