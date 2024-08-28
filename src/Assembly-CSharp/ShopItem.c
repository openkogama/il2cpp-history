
/* Void ApplyLocalDescriptionOverride(MVWorldObjectDocumentationType) */

void Assembly-CSharp.dll::ShopItem::ShopItem_ApplyLocalDescriptionOverride
               (ShopItem *this,MVWorldObjectDocumentationType__Enum t,MethodInfo *method)

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
      *(undefined4 *)(unaff_EDI + 0x14) = pOVar3[1].klass;
      func_?((undefined4 *)(unaff_EDI + 0x14));
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat_4
                         ((String *)pOVar3[1].monitor,StringLiteral_u000Au000A,
                          (String *)pOVar3[2].klass,(MethodInfo *)0x0);
      *(undefined4 *)(unaff_EDI + 0x18) = pSVar4;
      func_?((undefined4 *)(unaff_EDI + 0x18));
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ShopItem(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ShopItem::ShopItem__ctor
               (ShopItem *this,int32_t key,Dictionary_2_System_Object_System_Object_ *outData,
               MethodInfo *method)

{
  value = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)unaff_EDI.m_Index);
  key_00 = (Byte__Array__Class *)key;
  (value->fields).itemID = key;
  pIStack_1 = (Il2CppClass *)key;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&pIStack_1);
  if (outData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    uVar3 = func_?();
code_?:
    func_?(uVar3);
    pDVar4 = extraout_EDX;
code_?:
    func_?(unaff_EDI.m_Index,pDVar4);
code_?:
    pBStack_5 = pBStack_6;
    pSStack_7 = (String__Class *)unaff_EDI.m_Index;
    func_?();
  }
  else {
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData,
                           pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    this = (ShopItem *)CONCAT13(0x70,this._0_3_);
    pBStack_6 = (Byte__Array__Class *)func_?(TypeInfo__System__Byte,(int)&this + 3);
    if (unaff_EDI.m_Index == 0) goto code_?;
    bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)(*(int *)unaff_EDI.m_Index + 0xb8) < bVar8) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)unaff_EDI.m_Index + 100) + -4 + (uint)bVar8 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (unaff_EDI.m_Index,(Object *)pBStack_6,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar3 = CONCAT44(TypeInfo__System__Int32,TVar9.m_Index);
    if (TVar9.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar9.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar10 = (int32_t *)func_?(TVar9.m_Index);
    (value->fields).itemCategoryID = *piVar10;
    _Stack_18.__klassIndex = (TypeDefinitionIndex)key_00;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&_Stack_18);
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData,
                           pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_11 = 0xf;
    pBStack_6 = (Byte__Array__Class *)func_?(TypeInfo__System__Byte,&uStack_11);
    if (unaff_EDI.m_Index == 0) goto code_?;
    bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)(*(int *)unaff_EDI.m_Index + 0xb8) < bVar8) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)unaff_EDI.m_Index + 100) + -4 + (uint)bVar8 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (unaff_EDI.m_Index,(Object *)pBStack_6,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar3 = CONCAT44(TypeInfo__System__Int32,TVar9.m_Index);
    if (TVar9.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar9.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar10 = (int32_t *)func_?(TVar9.m_Index);
    (value->fields).itemTypeID = *piVar10;
    iStack_12 = (int32_t)key_00;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_12);
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData,
                           pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_13 = 10;
    pBStack_6 = (Byte__Array__Class *)func_?(TypeInfo__System__Byte,&uStack_13);
    if (unaff_EDI.m_Index == 0) goto code_?;
    bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)(*(int *)unaff_EDI.m_Index + 0xb8) < bVar8) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)unaff_EDI.m_Index + 100) + -4 + (uint)bVar8 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (unaff_EDI.m_Index,(Object *)pBStack_6,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar3 = CONCAT44(TypeInfo__System__String,TVar14.m_Index);
    TVar9.m_Index = 0;
    if (TVar14.m_Index == 0) {
      (value->fields).name = (String *)0x0;
    }
    else {
      if (*(String__Class **)TVar14.m_Index == TypeInfo__System__String) {
        TVar9 = TVar14;
      }
      if ((String *)TVar9.m_Index == (String *)0x0) goto code_?;
      (value->fields).name = (String *)TVar9.m_Index;
      TVar9.m_Index = (int32_t)(String *)0x0;
      if (*(String__Class **)TVar14.m_Index == TypeInfo__System__String) {
        TVar9 = TVar14;
      }
      unaff_EDI.m_Index = (int32_t)TypeInfo__System__String;
      if ((String *)TVar9.m_Index == (String *)0x0) goto code_?;
    }
    func_?(&(value->fields).name,TVar9.m_Index);
    _Stack_20.__klassIndex = (TypeDefinitionIndex)key_00;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&_Stack_20);
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData,
                           pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_15 = 0x67;
    pBStack_6 = (Byte__Array__Class *)func_?(TypeInfo__System__Byte,&uStack_15);
    if (unaff_EDI.m_Index == 0) goto code_?;
    bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)(*(int *)unaff_EDI.m_Index + 0xb8) < bVar8) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)unaff_EDI.m_Index + 100) + -4 + (uint)bVar8 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (unaff_EDI.m_Index,(Object *)pBStack_6,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar3 = CONCAT44(TypeInfo__System__String,TVar14.m_Index);
    TVar9.m_Index = 0;
    if (TVar14.m_Index == 0) {
      (value->fields).description = (String *)0x0;
    }
    else {
      if (*(String__Class **)TVar14.m_Index == TypeInfo__System__String) {
        TVar9 = TVar14;
      }
      if ((String *)TVar9.m_Index == (String *)0x0) goto code_?;
      (value->fields).description = (String *)TVar9.m_Index;
      TVar9.m_Index = (int32_t)(String *)0x0;
      if (*(String__Class **)TVar14.m_Index == TypeInfo__System__String) {
        TVar9 = TVar14;
      }
      unaff_EDI.m_Index = (int32_t)TypeInfo__System__String;
      if ((String *)TVar9.m_Index == (String *)0x0) goto code_?;
    }
    func_?(&(value->fields).description,TVar9.m_Index);
    pcStack_16 = (char *)key_00;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&pcStack_16);
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData,
                           pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_17 = 0xb;
    key_00 = (Byte__Array__Class *)func_?(TypeInfo__System__Byte,&uStack_17);
    if (unaff_EDI.m_Index == 0) goto code_?;
    bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)(*(int *)unaff_EDI.m_Index + 0xb8) < bVar8) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)unaff_EDI.m_Index + 100) + -4 + (uint)bVar8 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (unaff_EDI.m_Index,(Object *)key_00,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    key_00 = TypeInfo__System__Byte;
    if (unaff_EDI.m_Index == 0) {
      (value->fields).data = (Byte__Array *)0x0;
      pBStack_5 = (Byte__Array__Class *)0x0;
code_?:
      pSStack_7 = (String__Class *)&(value->fields).data;
      func_?();
      key_00 = (Byte__Array__Class *)key;
      pcStack_18 = (char *)key;
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&pcStack_18);
      unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData
                             ,pOVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      uStack_19 = 100;
      key = func_?(TypeInfo__System__Byte,&uStack_19);
      if (unaff_EDI.m_Index == 0) goto code_?;
      bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if ((*(byte *)(*(int *)unaff_EDI.m_Index + 0xb8) < bVar8) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)unaff_EDI.m_Index + 100) + -4 + (uint)bVar8 * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      TVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (unaff_EDI.m_Index,key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Boolean,TVar9.m_Index);
      if (TVar9.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar9.m_Index + 0x20) !=
          (TypeInfo__System__Boolean->_0).element_class) goto code_?;
      pbVar20 = (bool *)func_?(TVar9.m_Index);
      (value->fields).resellable = *pbVar20;
      pBStack_5 = key_00;
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&pBStack_5);
      unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData
                             ,pOVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      uStack_21 = 0x4b;
      key = func_?(TypeInfo__System__Byte,&uStack_21);
      if (unaff_EDI.m_Index == 0) goto code_?;
      bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if ((*(byte *)(*(int *)unaff_EDI.m_Index + 0xb8) < bVar8) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)unaff_EDI.m_Index + 100) + -4 + (uint)bVar8 * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      TVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (unaff_EDI.m_Index,key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Int32,TVar9.m_Index);
      if (TVar9.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar9.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar10 = (int32_t *)func_?(TVar9.m_Index);
        (value->fields).priceGold = *piVar10;
        pSVar22 = (String__Class *)&pSStack_7;
        pSStack_7 = (String__Class *)key_00;
        pOVar2 = (Object *)func_?(TypeInfo__System__Int32,pSVar22);
        unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               outData,pOVar2,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        uStack_23 = 0x62;
        key_00 = (Byte__Array__Class *)func_?(TypeInfo__System__Byte,&uStack_23);
        if (unaff_EDI.m_Index != 0) {
          bVar8 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          pDVar4 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          if ((*(byte *)(*(int *)unaff_EDI.m_Index + 0xb8) < bVar8) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)unaff_EDI.m_Index + 100) + -4 + (uint)bVar8 * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (unaff_EDI.m_Index,(Object *)key_00,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          key_00 = (Byte__Array__Class *)TVar9.m_Index;
          unaff_EDI.m_Index = (int32_t)pSVar22;
          uVar3 = CONCAT44(TypeInfo__System__Int32,TVar14.m_Index);
          if (TVar14.m_Index != 0) {
            if (*(Il2CppClass **)(*(int *)TVar14.m_Index + 0x20) ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar10 = (int32_t *)func_?(TVar14.m_Index);
              (value->fields).slotPosition = *piVar10;
              return;
            }
            goto code_?;
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    pBStack_5 = TypeInfo__System__Byte;
    pSStack_7 = (String__Class *)unaff_EDI;
    pBVar24 = (Byte__Array *)func_?();
    if (pBVar24 != (Byte__Array *)0x0) {
      key_00 = (Byte__Array__Class *)&(value->fields).data;
      *(Byte__Array **)key_00 = pBVar24;
      pBStack_5 = TypeInfo__System__Byte;
      pBStack_6 = TypeInfo__System__Byte;
      pSStack_7 = (String__Class *)unaff_EDI;
      pBStack_5 = (Byte__Array__Class *)func_?();
      if (pBStack_5 != (Byte__Array__Class *)0x0) goto code_?;
      goto code_?;
    }
  }
  pSStack_7 = (String__Class *)unaff_EDI.m_Index;
  pBStack_5 = key_00;
  TVar14.m_Index = func_?();
code_?:
  func_?(TVar14.m_Index,unaff_EDI.m_Index);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* ShopItem(InventoryItem) */

void Assembly-CSharp.dll::ShopItem::ShopItem__ctor_1
               (ShopItem *this,InventoryItem *inventoryItem,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (inventoryItem != (InventoryItem *)0x0) {
    ppSVar1 = &(this->fields).name;
    (this->fields).itemID = (inventoryItem->fields).itemID;
    (this->fields).itemCategoryID = (inventoryItem->fields).itemCategoryID;
    (this->fields).itemTypeID = (inventoryItem->fields).itemTypeID;
    pSVar2 = (inventoryItem->fields).name;
    *ppSVar1 = pSVar2;
    func_?(ppSVar1,pSVar2);
    pSVar2 = (inventoryItem->fields).description;
    ppSVar1 = &(this->fields).description;
    *ppSVar1 = pSVar2;
    func_?(ppSVar1,pSVar2);
    pBVar3 = (inventoryItem->fields).data;
    ppBVar4 = &(this->fields).data;
    *ppBVar4 = pBVar3;
    func_?(ppBVar4,pBVar3);
    (this->fields).resellable = (inventoryItem->fields).resellable;
    (this->fields).priceGold = (inventoryItem->fields).priceGold;
    (this->fields).slotPosition = (inventoryItem->fields).slotPosition;
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

