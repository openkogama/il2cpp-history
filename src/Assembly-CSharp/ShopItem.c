
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)unaff_EDI.m_Index);
  key_00 = (Byte__Array__Class *)key;
  (value->fields).itemID = key;
  _Stack_10 = (_union_155)key;
  pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&_Stack_10);
  if (outData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    uVar2 = func_?();
code_?:
    func_?(uVar2);
    pDVar3 = extraout_EDX;
  }
  else {
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData,
                           pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    this = (ShopItem *)CONCAT13(0x70,this._0_3_);
    _Stack_14.rgctx_data = (Il2CppRGCTXData *)func_?(TypeInfo__System__Byte,(int)&this + 3)
    ;
    if (unaff_EDI.m_Index == 0) goto code_?;
    pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)(*(int *)unaff_EDI.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)unaff_EDI.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (unaff_EDI.m_Index,(Object *)_Stack_14.methodMetadataHandle,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar2 = CONCAT44(TypeInfo__System__Int32,TVar4.m_Index);
    if (TVar4.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar5 = (int32_t *)func_?(TVar4.m_Index);
    (value->fields).itemCategoryID = *piVar5;
    ppIStack_6 = (Il2CppType **)key_00;
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&ppIStack_6);
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData,
                           pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_7 = 0xf;
    _Stack_14.rgctx_data = (Il2CppRGCTXData *)func_?(TypeInfo__System__Byte,&uStack_7);
    if (unaff_EDI.m_Index == 0) goto code_?;
    pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)(*(int *)unaff_EDI.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)unaff_EDI.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (unaff_EDI.m_Index,(Object *)_Stack_14.methodMetadataHandle,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar2 = CONCAT44(TypeInfo__System__Int32,TVar4.m_Index);
    if (TVar4.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar5 = (int32_t *)func_?(TVar4.m_Index);
    (value->fields).itemTypeID = *piVar5;
    pIStack_8 = (Il2CppType *)key_00;
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&pIStack_8);
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData,
                           pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_9 = 10;
    _Stack_14.rgctx_data = (Il2CppRGCTXData *)func_?(TypeInfo__System__Byte,&uStack_9);
    if (unaff_EDI.m_Index == 0) goto code_?;
    pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)(*(int *)unaff_EDI.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)unaff_EDI.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (unaff_EDI.m_Index,(Object *)_Stack_14.methodMetadataHandle,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar2 = CONCAT44(TypeInfo__System__String,TVar10.m_Index);
    TVar4.m_Index = 0;
    if (TVar10.m_Index != 0) {
      if (*(String__Class **)TVar10.m_Index == TypeInfo__System__String) {
        TVar4 = TVar10;
      }
      if ((String *)TVar4.m_Index != (String *)0x0) {
        (value->fields).name = (String *)TVar4.m_Index;
        uVar2 = CONCAT44(TypeInfo__System__String,TVar10.m_Index);
        TVar4.m_Index = (int32_t)(String *)0x0;
        if (*(String__Class **)TVar10.m_Index == TypeInfo__System__String) {
          TVar4 = TVar10;
        }
        if ((String *)TVar4.m_Index != (String *)0x0) goto code_?;
      }
      goto code_?;
    }
    (value->fields).name = (String *)0x0;
code_?:
    func_?(&(value->fields).name,TVar4.m_Index);
    pIStack_11 = (Il2CppClass *)key_00;
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&pIStack_11);
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData,
                           pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_12 = 0x67;
    _Stack_14.rgctx_data = (Il2CppRGCTXData *)func_?(TypeInfo__System__Byte,&uStack_12);
    if (unaff_EDI.m_Index == 0) goto code_?;
    pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)(*(int *)unaff_EDI.m_Index + 0xb8) <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)unaff_EDI.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (unaff_EDI.m_Index,(Object *)_Stack_14.methodMetadataHandle,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar2 = CONCAT44(TypeInfo__System__String,TVar10.m_Index);
    TVar4.m_Index = 0;
    if (TVar10.m_Index != 0) {
      if (*(String__Class **)TVar10.m_Index == TypeInfo__System__String) {
        TVar4 = TVar10;
      }
      if ((String *)TVar4.m_Index != (String *)0x0) {
        (value->fields).description = (String *)TVar4.m_Index;
        uVar2 = CONCAT44(TypeInfo__System__String,TVar10.m_Index);
        TVar4.m_Index = (int32_t)(String *)0x0;
        if (*(String__Class **)TVar10.m_Index == TypeInfo__System__String) {
          TVar4 = TVar10;
        }
        if ((String *)TVar4.m_Index != (String *)0x0) goto code_?;
      }
      goto code_?;
    }
    (value->fields).description = (String *)0x0;
code_?:
    func_?(&(value->fields).description,TVar4.m_Index);
    pcStack_13 = (char *)key_00;
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&pcStack_13);
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData,
                           pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_14 = 0xb;
    key_00 = (Byte__Array__Class *)func_?(TypeInfo__System__Byte,&uStack_14);
    if (unaff_EDI.m_Index == 0) goto code_?;
    pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment <= *(byte *)(*(int *)unaff_EDI.m_Index + 0xb8)) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)unaff_EDI.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (unaff_EDI.m_Index,(Object *)key_00,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      key_00 = TypeInfo__System__Byte;
      if (unaff_EDI.m_Index == 0) {
        (value->fields).data = (Byte__Array *)0x0;
        pBStack_15 = (Byte__Array__Class *)0x0;
      }
      else {
        pBStack_15 = TypeInfo__System__Byte;
        pMStack_16 = (MethodInfo *)unaff_EDI;
        pBVar17 = (Byte__Array *)func_?();
        if (pBVar17 == (Byte__Array *)0x0) goto code_?;
        (value->fields).data = pBVar17;
        key_00 = TypeInfo__System__Byte;
        pBStack_15 = TypeInfo__System__Byte;
        pMStack_16 = (MethodInfo *)unaff_EDI;
        pBStack_15 = (Byte__Array__Class *)func_?();
        if (pBStack_15 == (Byte__Array__Class *)0x0) goto code_?;
      }
      pMStack_16 = (MethodInfo *)&(value->fields).data;
      func_?();
      key_00 = (Byte__Array__Class *)key;
      pIStack_18 = (InvokerMethod)key;
      pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&pIStack_18);
      unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData
                             ,pOVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      uStack_19 = 100;
      key = func_?(TypeInfo__System__Byte,&uStack_19);
      if (unaff_EDI.m_Index == 0) goto code_?;
      pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if ((*(byte *)(*(int *)unaff_EDI.m_Index + 0xb8) <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)unaff_EDI.m_Index + 100) + -4 +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (unaff_EDI.m_Index,key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar2 = CONCAT44(TypeInfo__System__Boolean,TVar4.m_Index);
      if (TVar4.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) !=
          (TypeInfo__System__Boolean->_0).element_class) goto code_?;
      pbVar20 = (bool *)func_?(TVar4.m_Index);
      (value->fields).resellable = *pbVar20;
      pBStack_15 = key_00;
      pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&pBStack_15);
      unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData
                             ,pOVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      uStack_21 = 0x4b;
      key = func_?(TypeInfo__System__Byte,&uStack_21);
      if (unaff_EDI.m_Index == 0) goto code_?;
      pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if ((*(byte *)(*(int *)unaff_EDI.m_Index + 0xb8) <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)unaff_EDI.m_Index + 100) + -4 +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (unaff_EDI.m_Index,key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar2 = CONCAT44(TypeInfo__System__Int32,TVar4.m_Index);
      if (TVar4.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar5 = (int32_t *)func_?(TVar4.m_Index);
        (value->fields).priceGold = *piVar5;
        pMVar22 = (MethodInfo *)&pMStack_16;
        pMStack_16 = (MethodInfo *)key_00;
        pOVar1 = (Object *)func_?(TypeInfo__System__Int32,pMVar22);
        unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               outData,pOVar1,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        uStack_23 = 0x62;
        key_00 = (Byte__Array__Class *)func_?(TypeInfo__System__Byte,&uStack_23);
        if (unaff_EDI.m_Index != 0) {
          pDVar3 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          if ((*(byte *)(*(int *)unaff_EDI.m_Index + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)unaff_EDI.m_Index + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          TVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (unaff_EDI.m_Index,(Object *)key_00,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          key_00 = (Byte__Array__Class *)TVar4.m_Index;
          unaff_EDI.m_Index = (int32_t)pMVar22;
          uVar2 = CONCAT44(TypeInfo__System__Int32,TVar10.m_Index);
          if (TVar10.m_Index != 0) {
            if (*(Il2CppClass **)(*(int *)TVar10.m_Index + 0x20) ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar5 = (int32_t *)func_?(TVar10.m_Index);
              (value->fields).slotPosition = *piVar5;
              return;
            }
            goto code_?;
          }
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  func_?(unaff_EDI.m_Index,pDVar3);
code_?:
  pMStack_16 = (MethodInfo *)unaff_EDI.m_Index;
  pBStack_15 = key_00;
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* ShopItem(InventoryItem) */

void Assembly-CSharp.dll::ShopItem::ShopItem__ctor_1
               (ShopItem *this,InventoryItem *inventoryItem,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  if (inventoryItem != (InventoryItem *)0x0) {
    (this->fields).itemID = (inventoryItem->fields).itemID;
    (this->fields).itemCategoryID = (inventoryItem->fields).itemCategoryID;
    (this->fields).itemTypeID = (inventoryItem->fields).itemTypeID;
    pSVar1 = (inventoryItem->fields).name;
    (this->fields).name = pSVar1;
    func_?(&(this->fields).name,pSVar1);
    pSVar1 = (inventoryItem->fields).description;
    (this->fields).description = pSVar1;
    func_?(&(this->fields).description,pSVar1);
    pBVar2 = (inventoryItem->fields).data;
    (this->fields).data = pBVar2;
    func_?(&(this->fields).data,pBVar2);
    (this->fields).resellable = (inventoryItem->fields).resellable;
    (this->fields).priceGold = (inventoryItem->fields).priceGold;
    (this->fields).slotPosition = (inventoryItem->fields).slotPosition;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

