
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).items;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)itemID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                      );
    if (bVar1 != 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Item_already_added_to_business_l,(MethodInfo *)0x0);
      return;
    }
    this_02 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__MV__WorldObject__MVItem);
    if (this_02 != (TweenRunner_1_FloatTween_ *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
      TweenRunner_1_FloatTween___ctor(this_02,(MethodInfo *)0x0);
      (this_02->fields).m_Tween = (IEnumerator *)itemCategoryID;
      this_02[1].klass = (TweenRunner_1_FloatTween___Class *)itemTypeID;
      this_02[1].fields.m_Tween = (IEnumerator *)name;
      (this_02->fields).m_CoroutineContainer = (MonoBehaviour *)itemID;
      *(bool *)((int)&this_02[2].fields.m_CoroutineContainer + 1) = resellable;
      func_?(&this_02[1].fields.m_Tween,name);
      this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).items;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (this_01,(Object *)(this_02->fields).m_CoroutineContainer,(Object *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__set_Item_int__MV__WorldObject__MVItem_
                  );
        return;
      }
    }
  }
  func_?();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).items;
  if (pDVar2 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
  goto code_?;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Object,GUILoginHandler+PlanetData]::
          Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                    (pDVar2,(Object *)itemID,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                    );
  pDVar2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).items;
  if (bVar3 == 0) {
    if (pDVar2 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
    goto code_?;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (pDVar2,(Object *)itemID,
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
  else if (pDVar2 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
  goto code_?;
  pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
           Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                     ((Dictionary_2_System_Int32Enum_System_Object_ *)unaff_retaddr,
                      (Int32Enum__Enum)this,(MethodInfo *)itemID);
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).items;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)itemID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return (MVItem *)0x0;
    }
    this_01 = (this->fields).items;
    if (this_01 != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
      pMVar2 = (MVItem *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,itemID,
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                           );
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
              );
    method_00 = (MethodInfo *)&this->fields;
    (this->fields).items = this_00;
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

