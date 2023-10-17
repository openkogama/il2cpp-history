
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
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)t,
                       MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                      );
    if (bVar1 == 0) {
      return;
    }
    if ((TypeInfo__InventoryItem->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this_01 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
    if ((this_01 !=
         (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,t,
                            MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                           ), pOVar2 != (Object *)0x0)) {
      (this->fields).name = (String *)pOVar2[1].klass;
      func_?(&(this->fields).name);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         ((String *)pOVar2[1].monitor,StringLiteral_u000Au000A,
                          (String *)pOVar2[2].klass,(MethodInfo *)0x0);
      (this->fields).description = pSVar3;
      func_?(&(this->fields).description);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
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
    unaff_EDI = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (outData,pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    this = (ShopItem *)CONCAT13(0x70,this._0_3_);
    _Stack_14.rgctx_data = (Il2CppRGCTXData *)func_?(TypeInfo__System__Byte,(int)&this + 3)
    ;
    if (unaff_EDI == (MethodInfo *)0x0) goto code_?;
    pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI->methodPointer)->_1).
         typeHierarchyDepth <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI->methodPointer)->_1).
        typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                        (Object *)_Stack_14.methodMetadataHandle,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar4 = (int32_t *)func_?(pOVar1);
    (value->fields).itemCategoryID = *piVar4;
    ppIStack_5 = (Il2CppType **)key_00;
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&ppIStack_5);
    unaff_EDI = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (outData,pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_6 = 0xf;
    _Stack_14.rgctx_data = (Il2CppRGCTXData *)func_?(TypeInfo__System__Byte,&uStack_6);
    if (unaff_EDI == (MethodInfo *)0x0) goto code_?;
    pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI->methodPointer)->_1).
         typeHierarchyDepth <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI->methodPointer)->_1).
        typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                        (Object *)_Stack_14.methodMetadataHandle,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar4 = (int32_t *)func_?(pOVar1);
    (value->fields).itemTypeID = *piVar4;
    pIStack_7 = (Il2CppType *)key_00;
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&pIStack_7);
    unaff_EDI = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (outData,pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_8 = 10;
    _Stack_14.rgctx_data = (Il2CppRGCTXData *)func_?(TypeInfo__System__Byte,&uStack_8);
    if (unaff_EDI == (MethodInfo *)0x0) goto code_?;
    pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI->methodPointer)->_1).
         typeHierarchyDepth <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI->methodPointer)->_1).
        typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    pSVar9 = (String *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                        (Object *)_Stack_14.methodMetadataHandle,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar2 = CONCAT44(TypeInfo__System__String,pSVar9);
    pSVar10 = (String *)0x0;
    if (pSVar9 != (String *)0x0) {
      if (pSVar9->klass == TypeInfo__System__String) {
        pSVar10 = pSVar9;
      }
      if (pSVar10 != (String *)0x0) {
        (value->fields).name = pSVar10;
        uVar2 = CONCAT44(TypeInfo__System__String,pSVar9);
        pSVar10 = (String *)0x0;
        if (pSVar9->klass == TypeInfo__System__String) {
          pSVar10 = pSVar9;
        }
        if (pSVar10 != (String *)0x0) goto code_?;
      }
      goto code_?;
    }
    (value->fields).name = (String *)0x0;
code_?:
    func_?(&(value->fields).name,pSVar10);
    pIStack_11 = (Il2CppClass *)key_00;
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&pIStack_11);
    unaff_EDI = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (outData,pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_12 = 0x67;
    _Stack_14.rgctx_data = (Il2CppRGCTXData *)func_?(TypeInfo__System__Byte,&uStack_12);
    if (unaff_EDI == (MethodInfo *)0x0) goto code_?;
    pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI->methodPointer)->_1).
         typeHierarchyDepth <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI->methodPointer)->_1).
        typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    pSVar9 = (String *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                        (Object *)_Stack_14.methodMetadataHandle,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar2 = CONCAT44(TypeInfo__System__String,pSVar9);
    pSVar10 = (String *)0x0;
    if (pSVar9 != (String *)0x0) {
      if (pSVar9->klass == TypeInfo__System__String) {
        pSVar10 = pSVar9;
      }
      if (pSVar10 != (String *)0x0) {
        (value->fields).description = pSVar10;
        uVar2 = CONCAT44(TypeInfo__System__String,pSVar9);
        pSVar10 = (String *)0x0;
        if (pSVar9->klass == TypeInfo__System__String) {
          pSVar10 = pSVar9;
        }
        if (pSVar10 != (String *)0x0) goto code_?;
      }
      goto code_?;
    }
    (value->fields).description = (String *)0x0;
code_?:
    func_?(&(value->fields).description,pSVar10);
    pcStack_13 = (char *)key_00;
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&pcStack_13);
    unaff_EDI = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (outData,pOVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_14 = 0xb;
    key_00 = (Byte__Array__Class *)func_?(TypeInfo__System__Byte,&uStack_14);
    if (unaff_EDI == (MethodInfo *)0x0) goto code_?;
    pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth <=
         (((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI->methodPointer)->_1).
         typeHierarchyDepth) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI->methodPointer)->_1).
        typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      unaff_EDI = (MethodInfo *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,(Object *)key_00
                             ,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      key_00 = TypeInfo__System__Byte;
      if (unaff_EDI == (MethodInfo *)0x0) {
        (value->fields).data = (Byte__Array *)0x0;
        pBStack_15 = (Byte__Array__Class *)0x0;
      }
      else {
        pBStack_15 = TypeInfo__System__Byte;
        pMStack_16 = unaff_EDI;
        pBVar17 = (Byte__Array *)func_?();
        if (pBVar17 == (Byte__Array *)0x0) goto code_?;
        (value->fields).data = pBVar17;
        key_00 = TypeInfo__System__Byte;
        pBStack_15 = TypeInfo__System__Byte;
        pMStack_16 = unaff_EDI;
        pBStack_15 = (Byte__Array__Class *)func_?();
        if (pBStack_15 == (Byte__Array__Class *)0x0) goto code_?;
      }
      pMStack_16 = (MethodInfo *)&(value->fields).data;
      func_?();
      key_00 = (Byte__Array__Class *)key;
      pIStack_18 = (InvokerMethod)key;
      pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&pIStack_18);
      unaff_EDI = (MethodInfo *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (outData,pOVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      uStack_19 = 100;
      key = func_?(TypeInfo__System__Byte,&uStack_19);
      if (unaff_EDI == (MethodInfo *)0x0) goto code_?;
      pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (((((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI->methodPointer)->_1).
           typeHierarchyDepth <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI->methodPointer)->_1).
          typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,(Object *)key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar2 = CONCAT44(TypeInfo__System__Boolean,pOVar1);
      if (pOVar1 == (Object *)0x0) goto code_?;
      if ((pOVar1->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
      goto code_?;
      pbVar20 = (bool *)func_?(pOVar1);
      (value->fields).resellable = *pbVar20;
      pBStack_15 = key_00;
      pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&pBStack_15);
      unaff_EDI = (MethodInfo *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (outData,pOVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      uStack_21 = 0x4b;
      key = func_?(TypeInfo__System__Byte,&uStack_21);
      if (unaff_EDI == (MethodInfo *)0x0) goto code_?;
      pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (((((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI->methodPointer)->_1).
           typeHierarchyDepth <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI->methodPointer)->_1).
          typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      pBVar22 = (Byte__Array__Class *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,(Object *)key,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      uVar2 = CONCAT44(TypeInfo__System__Int32,pBVar22);
      if (pBVar22 == (Byte__Array__Class *)0x0) goto code_?;
      if ((Il2CppClass *)((pBVar22->_0).image)->codeGenModule ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar4 = (int32_t *)func_?(pBVar22);
        (value->fields).priceGold = *piVar4;
        pMVar23 = (MethodInfo *)&pMStack_16;
        pMStack_16 = (MethodInfo *)key_00;
        pOVar1 = (Object *)func_?(TypeInfo__System__Int32,pMVar23);
        unaff_EDI = (MethodInfo *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (outData,pOVar1,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        uStack_24 = 0x62;
        key_00 = (Byte__Array__Class *)func_?(TypeInfo__System__Byte,&uStack_24);
        if (unaff_EDI != (MethodInfo *)0x0) {
          pDVar3 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          if (((((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI->methodPointer)->_1).
               typeHierarchyDepth <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).typeHierarchyDepth) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (((Dictionary_2_System_Object_System_Object___Class *)unaff_EDI->methodPointer)->_1).
              typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).typeHierarchyDepth - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI,
                              (Object *)key_00,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          key_00 = pBVar22;
          unaff_EDI = pMVar23;
          uVar2 = CONCAT44(TypeInfo__System__Int32,pOVar1);
          if (pOVar1 != (Object *)0x0) {
            if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              piVar4 = (int32_t *)func_?(pOVar1);
              (value->fields).slotPosition = *piVar4;
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
  func_?(unaff_EDI,pDVar3);
code_?:
  pMStack_16 = unaff_EDI;
  pBStack_15 = key_00;
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* ShopItem(InventoryItem) */

void Assembly-CSharp.dll::ShopItem::ShopItem__ctor_1
               (ShopItem *this,InventoryItem *inventoryItem,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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

