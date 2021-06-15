
/* Void AddItem(MVItem) */

void Assembly-CSharp.dll::MVItemBusinessLogic::MVItemBusinessLogic_AddItem
               (MVItemBusinessLogic *this,MVItem *item,MethodInfo *method)

{
  if (item != (MVItem *)0x0) {
    bVar1 = (item->fields).resellable;
    key = (float)(item->fields).itemID;
    fVar2 = (float)(item->fields).itemCategoryID;
    fVar3 = (float)(item->fields).itemTypeID;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (this->fields).items;
    if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
      bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,(int32_t)key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                        );
      if (bVar4 != 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Item_already_added_to_business_l,(MethodInfo *)0x0);
        return;
      }
      value = (TerrainUtility_TerrainMap *)func_?(TypeInfo__MV__WorldObject__MVItem);
      WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
      WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
                ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)value,(MethodInfo *)0x0);
      if (value != (TerrainUtility_TerrainMap *)0x0) {
        *(bool *)&value[1].fields.m_patchSize.y = bVar1;
        (value->fields).m_patchSize.y = fVar2;
        (value->fields).m_patchSize.z = fVar3;
        (value->fields).m_patchSize.x = key;
        value[1].klass = unaff_ESI;
        this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(this->fields).items;
        if (this_01 !=
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
          Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
          Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                    (this_01,(int32_t)key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__set_Item_int__MV__WorldObject__MVItem_
                    );
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddItemWithNoData(Int32, Boolean, Int32, Int32, String) */

void Assembly-CSharp.dll::MVItemBusinessLogic::MVItemBusinessLogic_AddItemWithNoData
               (MVItemBusinessLogic *this,int32_t itemID,bool resellable,int32_t itemCategoryID,
               int32_t itemTypeID,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).items;
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,itemID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                      );
    if (bVar1 != 0) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Item_already_added_to_business_l,(MethodInfo *)0x0);
      return;
    }
    value = (TerrainUtility_TerrainMap *)func_?(TypeInfo__MV__WorldObject__MVItem);
    WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
    WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
              ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)value,(MethodInfo *)0x0);
    if (value != (TerrainUtility_TerrainMap *)0x0) {
      (value->fields).m_patchSize.y = (float)itemCategoryID;
      (value->fields).m_patchSize.z = (float)itemTypeID;
      (value->fields).m_patchSize.x = (float)itemID;
      *(bool *)&value[1].fields.m_patchSize.y = resellable;
      value[1].klass = (TerrainUtility_TerrainMap__Class *)name;
      this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)(this->fields).items;
      if (this_01 !=
          (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
        Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__set_Item
                  (this_01,itemID,value,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__set_Item_int__MV__WorldObject__MVItem_
                  );
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean CanAddItemToInventory(Int32) */

bool Assembly-CSharp.dll::MVItemBusinessLogic::MVItemBusinessLogic_CanAddItemToInventory
               (MVItemBusinessLogic *this,int32_t itemID,MethodInfo *method)

{
  iVar1 = itemID;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields).items;
  if (pDVar2 == (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) goto code_?;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__ContainsKey
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,itemID,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                    );
  pDVar2 = (this->fields).items;
  if (bVar3 == 0) {
    if (pDVar2 == (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) goto code_?;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,itemID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                      );
    if (bVar3 == 0) {
      return 0;
    }
    unaff_retaddr =
         (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *
         )(this->fields).items;
    if (unaff_retaddr ==
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) goto code_?;
    itemID = (int32_t)
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
    ;
    this = (MVItemBusinessLogic *)iVar1;
  }
  else if (pDVar2 == (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) goto code_?;
  pTVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                     (unaff_retaddr,(int32_t)this,(MethodInfo *)itemID);
  if (pTVar4 != (TerrainUtility_TerrainMap *)0x0) {
    return *(bool *)&pTVar4[1].fields.m_patchSize.y;
  }
code_?:
  uStack5 = 0;
  func_?();
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}


/* MVItem GetItem(Int32) */

MVItem * Assembly-CSharp.dll::MVItemBusinessLogic::MVItemBusinessLogic_GetItem
                   (MVItemBusinessLogic *this,int32_t itemID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).items;
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__ContainsKey
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,itemID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return (MVItem *)0x0;
    }
    this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).items;
    if (this_01 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      pMVar2 = (MVItem *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
               Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                         (this_01,itemID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
                         );
      return pMVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pMVar2 = (MVItem *)(*pcVar3)();
  return pMVar2;
}


/* MVItemBusinessLogic() */

void Assembly-CSharp.dll::MVItemBusinessLogic::MVItemBusinessLogic__ctor
               (MVItemBusinessLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
            );
  (this->fields).items = this_00;
  return;
}

