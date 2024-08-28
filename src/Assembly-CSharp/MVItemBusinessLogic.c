
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
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddItemWithNoData(Int32, Boolean, Int32, Int32, String) */

void Assembly-CSharp.dll::MVItemBusinessLogic::MVItemBusinessLogic_AddItemWithNoData
               (MVItemBusinessLogic *this,int32_t itemID,bool resellable,int32_t itemCategoryID,
               int32_t itemTypeID,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__set_Item_int__MV__WorldObject__MVItem_
                   );
    func_?(&TypeInfo__MV__WorldObject__MVItem);
    func_?(&StringLiteral_Item_already_added_to_business_l);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).items;
  if (pDVar1 != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,itemID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                      );
    if (bVar2 != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Item_already_added_to_business_l,(MethodInfo *)0x0);
      return;
    }
    this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__MV__WorldObject__MVItem);
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
    if (this_00 != (UxmlObjectListAttributeDescription_1_System_Object_ *)0x0) {
      *(bool *)((int)&this_00[3].monitor + 1) = resellable;
      this_00[1].klass =
           (UxmlObjectListAttributeDescription_1_System_Object___Class *)itemCategoryID;
      this_00[1].monitor = (MonitorData *)itemTypeID;
      (this_00->fields)._._defaultValue_k__BackingField = (List_1_System_Object_ *)itemID;
      this_00[2].monitor = (MonitorData *)name;
      func_?(&this_00[2].monitor,name);
      pDVar1 = (this->fields).items;
      if (pDVar1 != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__set_Item
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                   (int32_t)(this_00->fields)._._defaultValue_k__BackingField,(Object *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__set_Item_int__MV__WorldObject__MVItem_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean CanAddItemToInventory(Int32) */

bool Assembly-CSharp.dll::MVItemBusinessLogic::MVItemBusinessLogic_CanAddItemToInventory
               (MVItemBusinessLogic *this,int32_t itemID,MethodInfo *method)

{
  iVar1 = itemID;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields).items;
  if (pDVar2 == (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) goto code_?;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
          Dictionary_2_System_Int32_System_Single__ContainsKey
                    ((Dictionary_2_System_Int32_System_Single_ *)pDVar2,itemID,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                    );
  pDVar2 = (this->fields).items;
  if (bVar3 == 0) {
    if (pDVar2 == (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) goto code_?;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar2,itemID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                      );
    if (bVar3 == 0) {
      return 0;
    }
    unaff_retaddr = (this->fields).items;
    if (unaff_retaddr == (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0)
    goto code_?;
    itemID = (int32_t)
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
    ;
    this = (MVItemBusinessLogic *)iVar1;
  }
  else if (pDVar2 == (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) goto code_?;
  pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
           Dictionary_2_System_Int32_System_Object__get_Item
                     ((Dictionary_2_System_Int32_System_Object_ *)unaff_retaddr,(int32_t)this,
                      (MethodInfo *)itemID);
  if (pOVar4 != (Object *)0x0) {
    return *(bool *)((int)&pOVar4[5].klass + 1);
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar3 = (*pcVar5)();
  return bVar3;
}


/* MVItem GetItem(Int32) */

MVItem * Assembly-CSharp.dll::MVItemBusinessLogic::MVItemBusinessLogic_GetItem
                   (MVItemBusinessLogic *this,int32_t itemID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).items;
  if (pDVar1 != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,itemID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      return (MVItem *)0x0;
    }
    pDVar1 = (this->fields).items;
    if (pDVar1 != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
      pMVar3 = (MVItem *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,itemID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
                         );
      return pMVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pMVar3 = (MVItem *)(*pcVar4)();
  return pMVar3;
}


/* MVItemBusinessLogic() */

void Assembly-CSharp.dll::MVItemBusinessLogic::MVItemBusinessLogic__ctor
               (MVItemBusinessLogic *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
            );
  method_00 = (MethodInfo *)&this->fields;
  ((MVItemBusinessLogic__Fields *)method_00)->items =
       (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

