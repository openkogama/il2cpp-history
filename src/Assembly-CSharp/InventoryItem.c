
/* Void ApplyLocalDescriptionOverride(MVWorldObjectDocumentationType) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem_ApplyLocalDescriptionOverride
               (InventoryItem *this,MVWorldObjectDocumentationType__Enum t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                   );
    func_?(&TypeInfo__InventoryItem);
    cRam_? = '\x01';
  }
  if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__InventoryItem);
  }
  pDVar1 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
  if (pDVar1 != (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,t,
                       MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                      );
    if (bVar2 == 0) {
      return;
    }
    if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pDVar1 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
    if ((pDVar1 != (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0
        ) && (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,t,
                                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                                 ), pOVar3 != (Object *)0x0)) {
      (this->fields).name = (String *)pOVar3[1].klass;
      func_?(&(this->fields).name);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat_4
                         ((String *)pOVar3[1].monitor,StringLiteral_u000Au000A,
                          (String *)pOVar3[2].klass,(MethodInfo *)0x0);
      (this->fields).description = pSVar4;
      func_?(&(this->fields).description);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

/* decompilation failed: Exception while decompiling 103b4a20: process: timeout */


/* InventoryItem() */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor(InventoryItem *this,MethodInfo *method)

{
  (this->fields).hasData = 1;
  (this->fields).purchased = 1;
  return;
}


/* InventoryItem(Dictionary`2[System.Byte,System.Object]) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor_1
               (InventoryItem *this,Dictionary_2_System_Byte_System_Object_ *data,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  (this->fields).hasData = 1;
  (this->fields).purchased = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (data == (Dictionary_2_System_Byte_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
             Dictionary_2_System_Byte_System_Object__get_Item
                       (data,0x28,
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                       );
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar2 = (int32_t *)func_?();
      (this->fields).itemID = *piVar2;
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
               ::Dictionary_2_System_Byte_System_Object__get_Item
                         (data,0x96,
                          MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                         );
      if (pOVar1 == (Object *)0x0) goto code_?;
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar2 = (int32_t *)func_?();
        (this->fields).itemCategoryID = *piVar2;
        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                 Object]::Dictionary_2_System_Byte_System_Object__get_Item
                           (data,0x29,
                            MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                           );
        if (pOVar1 == (Object *)0x0) goto code_?;
        if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar2 = (int32_t *)func_?();
          (this->fields).itemTypeID = *piVar2;
          pSVar3 = (String *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                   Object]::Dictionary_2_System_Byte_System_Object__get_Item
                             (data,0x2a,
                              MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                             );
          if (pSVar3 == (String *)0x0) {
            (this->fields).name = (String *)0x0;
code_?:
            func_?(&(this->fields).name);
            (this->fields).isDeleted = 0;
            pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                     Object]::Dictionary_2_System_Byte_System_Object__get_Item
                               (data,0x2b,
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                               );
            if (pOVar1 == (Object *)0x0) {
              (this->fields).data = (Byte__Array *)0x0;
            }
            else {
              pBVar4 = (Byte__Array *)func_?();
              if (pBVar4 == (Byte__Array *)0x0) goto code_?;
              (this->fields).data = pBVar4;
              iVar5 = func_?();
              if (iVar5 == 0) goto code_?;
            }
            func_?();
            pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                     Object]::Dictionary_2_System_Byte_System_Object__get_Item
                               (data,0x2d,
                                MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                               );
            if (pOVar1 == (Object *)0x0) goto code_?;
            if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              piVar2 = (int32_t *)func_?();
              (this->fields).slotPosition = *piVar2;
              pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System
                       ::Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                 (data,0x8a,
                                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                 );
              if (pOVar1 == (Object *)0x0) goto code_?;
              if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class
                 ) {
                pbVar6 = (bool *)func_?();
                (this->fields).resellable = *pbVar6;
                pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Byte,System::Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                   (data,0x45,
                                    MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                   );
                if (pOVar1 == (Object *)0x0) goto code_?;
                if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class
                   ) {
                  piVar2 = (int32_t *)func_?();
                  (this->fields).priceGold = *piVar2;
                  pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Byte,System::Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                     (data,0x89,
                                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                     );
                  if (pOVar1 == (Object *)0x0) goto code_?;
                  if ((pOVar1->klass->_0).element_class ==
                      (TypeInfo__System__Int32->_0).element_class) {
                    piVar2 = (int32_t *)func_?();
                    (this->fields).authorProfileID = *piVar2;
                    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Byte,System::Object]::Dictionary_2_System_Byte_System_Object__get_Item
                                       (data,0x8b,
                                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__get_Item_unsigned_char_
                                       );
                    if (pOVar1 == (Object *)0x0) goto code_?;
                    if ((pOVar1->klass->_0).element_class ==
                        (TypeInfo__System__Int32->_0).element_class) {
                      piVar2 = (int32_t *)func_?();
                      (this->fields).originalItemID = *piVar2;
                      (this->fields).purchased = 1;
                      (this->fields).isDefaultInvItem = 0;
                      return;
                    }
                  }
                }
              }
            }
          }
          else {
            pSVar7 = (String *)0x0;
            if (pSVar3->klass == TypeInfo__System__String) {
              pSVar7 = pSVar3;
            }
            if (pSVar7 != (String *)0x0) {
              (this->fields).name = pSVar7;
              pSVar7 = (String *)0x0;
              if (pSVar3->klass == TypeInfo__System__String) {
                pSVar7 = pSVar3;
              }
              if (pSVar7 != (String *)0x0) goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* InventoryItem(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor_2
               (InventoryItem *this,int32_t itemID,
               Dictionary_2_System_Object_System_Object_ *itemData,MethodInfo *method)

{
  value = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  (value->fields).hasData = 1;
  (value->fields).purchased = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
  (value->fields).itemID = itemID;
  this = (InventoryItem *)CONCAT13(0x70,this._0_3_);
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  this_00 = itemData;
  if ((itemData != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)itemData,
                         pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        ), TVar2.m_Index != 0)) {
    if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar3 = (int32_t *)func_?();
      (value->fields).itemCategoryID = *piVar3;
      uStack_4._0_3_ = SUB43(TypeInfo__System__Byte,0);
      uStack_4 = (Byte__Class *)CONCAT13(0xf,(undefined3)uStack_4);
      pOVar1 = (Object *)func_?();
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                         pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar2.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int32_t *)func_?();
        (value->fields).itemTypeID = *piVar3;
        uStack_4._3_1_ = (undefined1)((uint)TypeInfo__System__Byte >> 0x18);
        uStack_4._0_2_ = SUB42(TypeInfo__System__Byte,0);
        uStack_4._0_3_ = CONCAT12(10,(undefined2)uStack_4);
        pOVar1 = (Object *)func_?();
        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                           pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar2.m_Index == 0) {
          (value->fields).name = (String *)0x0;
code_?:
          func_?();
          uStack_4 = (Byte__Class *)((int)&uStack_4 + 1);
          pOVar1 = (Object *)func_?(TypeInfo__System__Byte);
          TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00
                             ,pOVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          if (TVar2.m_Index == 0) {
            (value->fields).description = (String *)0x0;
code_?:
            func_?();
            uStack_4 = (Byte__Class *)&uStack_4;
            pOVar1 = (Object *)func_?(TypeInfo__System__Byte);
            TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               this_00,pOVar1,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
            if (TVar2.m_Index == 0) goto code_?;
            if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
                (TypeInfo__System__Boolean->_0).element_class) {
              pbVar5 = (bool *)func_?();
              bVar6 = *pbVar5;
              (value->fields).isDeleted = bVar6;
              if (bVar6 == 0) {
                this = (InventoryItem *)CONCAT13(0xb,this._0_3_);
                uStack_4 = TypeInfo__System__Byte;
                pOVar1 = (Object *)func_?();
                unaff_EBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,UnityEngine::UIElements::TextureId]::
                            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                        *)this_00,pOVar1,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                      );
                itemData = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__System__Byte;
                if (unaff_EBX.m_Index == 0) {
                  (value->fields).data = (Byte__Array *)0x0;
                  itemID = 0;
                }
                else {
                  itemID = (int32_t)TypeInfo__System__Byte;
                  this = (InventoryItem *)unaff_EBX;
                  pBVar7 = (Byte__Array *)func_?();
                  if (pBVar7 == (Byte__Array *)0x0) goto code_?;
                  (value->fields).data = pBVar7;
                  itemID = (int32_t)TypeInfo__System__Byte;
                  itemData = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__System__Byte;
                  this = (InventoryItem *)unaff_EBX;
                  itemID = func_?();
                  if (itemID == 0) goto code_?;
                }
                this = (InventoryItem *)&(value->fields).data;
                func_?();
                unaff_EBX.m_Index = (int)&itemID + 3;
                itemID = CONCAT13(0x26,(undefined3)itemID);
                pOVar1 = (Object *)func_?();
                TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                   this_00,pOVar1,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
                if (TVar2.m_Index == 0) goto code_?;
                if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
                    (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                pbVar5 = (bool *)func_?();
                (value->fields).hasData = *pbVar5;
              }
              this = (InventoryItem *)CONCAT13(100,this._0_3_);
              pOVar1 = (Object *)func_?();
              TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                 this_00,pOVar1,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
              if (TVar2.m_Index == 0) goto code_?;
              if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
                  (TypeInfo__System__Boolean->_0).element_class) {
                pbVar5 = (bool *)func_?();
                (value->fields).resellable = *pbVar5;
                uStack_4 = TypeInfo__System__Byte;
                itemID = CONCAT13(0x4b,(undefined3)itemID);
                pOVar1 = (Object *)func_?();
                TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,UnityEngine::UIElements::TextureId]::
                        Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                  ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                   this_00,pOVar1,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                  );
                if (TVar2.m_Index == 0) goto code_?;
                if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
                    (TypeInfo__System__Int32->_0).element_class) {
                  piVar3 = (int32_t *)func_?();
                  (value->fields).priceGold = *piVar3;
                  uStack_4 = TypeInfo__System__Byte;
                  itemData = (Dictionary_2_System_Object_System_Object_ *)
                             CONCAT13(0x68,itemData._0_3_);
                  pOVar1 = (Object *)func_?();
                  TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,UnityEngine::UIElements::TextureId]::
                          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                    ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *
                                     )this_00,pOVar1,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                  if (TVar2.m_Index == 0) goto code_?;
                  if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
                      (TypeInfo__System__Int32->_0).element_class) {
                    piVar3 = (int32_t *)func_?();
                    (value->fields).shopInventoryID = *piVar3;
                    uStack_4 = (Byte__Class *)
                               CONCAT31((int3)((uint)TypeInfo__System__Byte >> 8),0x66);
                    pOVar1 = (Object *)func_?();
                    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Object,UnityEngine::UIElements::TextureId]::
                            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                        *)this_00,pOVar1,
                                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                      );
                    if (TVar2.m_Index == 0) goto code_?;
                    if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
                        (TypeInfo__System__Int32->_0).element_class) {
                      piVar3 = (int32_t *)func_?();
                      (value->fields).authorProfileID = *piVar3;
                      uStack_4._2_2_ = (undefined2)((uint)TypeInfo__System__Byte >> 0x10);
                      uStack_4._0_2_ = CONCAT11(0x6a,(char)TypeInfo__System__Byte);
                      pOVar1 = (Object *)func_?();
                      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,UnityEngine::UIElements::TextureId]::
                              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                          *)this_00,pOVar1,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                        );
                      if (TVar2.m_Index == 0) goto code_?;
                      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
                          (TypeInfo__System__Int32->_0).element_class) {
                        piVar3 = (int32_t *)func_?();
                        (value->fields).originalItemID = *piVar3;
                        uStack_4._3_1_ = (undefined1)((uint)TypeInfo__System__Byte >> 0x18);
                        uStack_4._0_2_ = SUB42(TypeInfo__System__Byte,0);
                        uStack_4._0_3_ = CONCAT12(0x22,(undefined2)uStack_4);
                        pOVar1 = (Object *)func_?();
                        bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,UnityEngine::UIElements::TextureId]::
                                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                            *)this_00,pOVar1,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                          );
                        if (bVar6 != 0) {
                          itemData = (Dictionary_2_System_Object_System_Object_ *)((int)&this + 3);
                          itemID = (int32_t)TypeInfo__System__Byte;
                          this = (InventoryItem *)&UNK_?;
                          pOVar1 = (Object *)func_?();
                          TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,UnityEngine::UIElements::TextureId]::
                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                              *)this_00,pOVar1,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                            );
                          if (TVar2.m_Index == 0) goto code_?;
                          if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) !=
                              (TypeInfo__System__Boolean->_0).element_class) goto code_?;
                          pbVar5 = (bool *)func_?();
                          (value->fields).purchased = *pbVar5;
                        }
                        itemData = (Dictionary_2_System_Object_System_Object_ *)((int)&this + 3);
                        itemID = (int32_t)TypeInfo__System__Byte;
                        this = (InventoryItem *)&UNK_?;
                        pOVar1 = (Object *)func_?();
                        TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,UnityEngine::UIElements::TextureId]::
                                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                            *)this_00,pOVar1,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                          );
                        if (TVar2.m_Index == 0) goto code_?;
                        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
                            (TypeInfo__System__Boolean->_0).element_class) {
                          pbVar5 = (bool *)func_?();
                          (value->fields).isDefaultInvItem = *pbVar5;
                          uStack_4 = TypeInfo__System__Byte;
                          itemID = CONCAT13(0xc,(undefined3)itemID);
                          pOVar1 = (Object *)func_?();
                          bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,UnityEngine::UIElements::TextureId]::
                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                              *)this_00,pOVar1,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                            );
                          if (bVar6 == 0) {
                            return;
                          }
                          itemData = (Dictionary_2_System_Object_System_Object_ *)((int)&this + 3);
                          itemID = (int32_t)TypeInfo__System__Byte;
                          this = (InventoryItem *)&UNK_?;
                          pOVar1 = (Object *)func_?();
                          TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,UnityEngine::UIElements::TextureId]::
                                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_
                                              *)this_00,pOVar1,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                            );
                          if (TVar2.m_Index == 0) {
                            (value->fields).imagePath = (String *)0x0;
                            func_?();
                            return;
                          }
                          TVar8.m_Index = (int32_t)(String *)0x0;
                          if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
                            TVar8 = TVar2;
                          }
                          if ((String *)TVar8.m_Index != (String *)0x0) {
                            (value->fields).imagePath = (String *)TVar8.m_Index;
                            TVar8.m_Index = 0;
                            if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
                              TVar8 = TVar2;
                            }
                            if (TVar8.m_Index != 0) {
                              func_?();
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            TVar8.m_Index = (int32_t)(String *)0x0;
            if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
              TVar8 = TVar2;
            }
            if ((String *)TVar8.m_Index != (String *)0x0) {
              (value->fields).description = (String *)TVar8.m_Index;
              TVar8.m_Index = 0;
              if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
                TVar8 = TVar2;
              }
              if (TVar8.m_Index != 0) goto code_?;
            }
          }
        }
        else {
          TVar8.m_Index = (int32_t)(String *)0x0;
          if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
            TVar8 = TVar2;
          }
          if ((String *)TVar8.m_Index != (String *)0x0) {
            (value->fields).name = (String *)TVar8.m_Index;
            TVar8.m_Index = 0;
            if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
              TVar8 = TVar2;
            }
            if (TVar8.m_Index != 0) goto code_?;
          }
        }
      }
    }
code_?:
    func_?();
  }
code_?:
  func_?();
code_?:
  itemID = (int32_t)itemData;
  this = (InventoryItem *)unaff_EBX.m_Index;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* InventoryItem(ShopItem) */

void Assembly-CSharp.dll::InventoryItem::InventoryItem__ctor_3
               (InventoryItem *this,ShopItem *itemToCopy,MethodInfo *method)

{
  (this->fields).hasData = 1;
  (this->fields).purchased = 1;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (itemToCopy != (ShopItem *)0x0) {
    (this->fields).itemID = (itemToCopy->fields).itemID;
    (this->fields).itemCategoryID = (itemToCopy->fields).itemCategoryID;
    (this->fields).itemTypeID = (itemToCopy->fields).itemTypeID;
    pSVar1 = (itemToCopy->fields).name;
    (this->fields).name = pSVar1;
    func_?(&(this->fields).name,pSVar1);
    pSVar1 = (itemToCopy->fields).description;
    (this->fields).description = pSVar1;
    func_?(&(this->fields).description,pSVar1);
    (this->fields).isDeleted = 0;
    pBVar2 = (itemToCopy->fields).data;
    (this->fields).data = pBVar2;
    func_?(&(this->fields).data,pBVar2);
    (this->fields).resellable = (itemToCopy->fields).resellable;
    (this->fields).priceGold = (itemToCopy->fields).priceGold;
    (this->fields).purchased = 1;
    (this->fields).isDefaultInvItem = 0;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

