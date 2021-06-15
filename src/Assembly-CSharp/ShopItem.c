
/* Void ApplyLocalDescriptionOverride(MVWorldObjectDocumentationType) */

void Assembly-CSharp.dll::ShopItem::ShopItem_ApplyLocalDescriptionOverride
               (ShopItem *this,MVWorldObjectDocumentationType__Enum t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__InventoryItem->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__InventoryItem->_1).cctor_started == 0)) {
    func_?(TypeInfo__InventoryItem);
  }
  pDVar1 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
  if (pDVar1 != (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
            Dictionary_2_MVWorldObjectDocumentationType_System_Object__ContainsKey
                      ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)pDVar1,t,
                       MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                      );
    if (bVar2 == 0) {
      return;
    }
    if ((((uint)(TypeInfo__InventoryItem->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__InventoryItem->_1).cctor_started == 0)) {
      func_?();
    }
    pDVar1 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
    if ((pDVar1 != (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0
        ) && (this_00 = (InventoryItem_ItemDescription *)
                        mscorlib.dll::System::Collections::Generic::
                        Dictionary`2[MVWorldObjectDocumentationType,System::Object]::
                        Dictionary_2_MVWorldObjectDocumentationType_System_Object__get_Item
                                  ((Dictionary_2_MVWorldObjectDocumentationType_System_Object_ *)
                                   pDVar1,t,
                                   MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                                  ), this_00 != (InventoryItem_ItemDescription *)0x0)) {
      pSVar3 = (String *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0)
      ;
      (this->fields).name = pSVar3;
      pSVar3 = InventoryItem+ItemDescription::InventoryItem_ItemDescription_get_Description
                         (this_00,(MethodInfo *)0x0);
      (this->fields).description = pSVar3;
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ShopItem(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ShopItem::ShopItem__ctor
               (ShopItem *this,int32_t key,Dictionary_2_System_Object_System_Object_ *outData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)unaff_EDI);
  (this->fields).itemID = key;
  _Stack_14.__klassIndex = key;
  pTVar1 = (Type *)func_?(TypeInfo__System__Int32,&_Stack_14);
  if (outData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    uVar2 = func_?(0);
code_?:
    func_?(uVar2);
    pDVar3 = extraout_EDX;
code_?:
    func_?(unaff_ESI,pDVar3);
code_?:
    pDStack_4 = unaff_ESI;
    pDStack_5 = unaff_EDI;
    func_?();
    pDStack_4 = extraout_ECX;
    pDStack_5 = extraout_EDX_00;
  }
  else {
    unaff_ESI = (Dictionary_2_System_Type_Pool___Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)outData,pTVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    INSERT(0,0,7,1);
    INSERT(uStack_6,1,6,1);
    INSERT(uStack_6,1,5,1);
    INSERT(uStack_6,0x10,0,5);
    _Stack_18.dummy = (void *)func_?(TypeInfo__System__Byte,&uStack_6);
    if (unaff_ESI == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
    unaff_EDI = (Dictionary_2_System_Type_Pool___Class *)(unaff_ESI->_0).image;
    bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    bStack_8 = (unaff_EDI->_1).naturalAligment;
    if ((bStack_8 < bVar7) ||
       ((Dictionary_2_System_Object_System_Object___Class *)(unaff_EDI->_1).typeHierarchy[bVar7 - 1]
        != TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    pDVar10 = (Dictionary_2_System_Type_Pool___Class *)0x0;
    if (bVar9) {
      pDVar10 = unaff_ESI;
    }
    pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar10 == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
    if ((bStack_8 < bVar7) ||
       ((Dictionary_2_System_Object_System_Object___Class *)(unaff_EDI->_1).typeHierarchy[bVar7 - 1]
        != TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    pDVar10 = (Dictionary_2_System_Type_Pool___Class *)0x0;
    if (bVar9) {
      pDVar10 = unaff_ESI;
    }
    if (pDVar10 == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
    pPVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pDVar10,(Type *)_Stack_18.typeHandle,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Int32,pPVar11);
    if (pPVar11 == (Pool *)0x0) goto code_?;
    if ((pPVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar12 = (int32_t *)func_?(pPVar11);
    (this->fields).itemCategoryID = *piVar12;
    _Stack_1c.__klassIndex = key;
    pTVar1 = (Type *)func_?(TypeInfo__System__Int32,&_Stack_1c);
    unaff_ESI = (Dictionary_2_System_Type_Pool___Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)outData,pTVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_13 = 0xf;
    _Stack_18.dummy = (void *)func_?(TypeInfo__System__Byte,&uStack_13);
    if (unaff_ESI == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
    unaff_EDI = (Dictionary_2_System_Type_Pool___Class *)(unaff_ESI->_0).image;
    bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    bStack_8 = (unaff_EDI->_1).naturalAligment;
    if ((bStack_8 < bVar7) ||
       ((Dictionary_2_System_Object_System_Object___Class *)(unaff_EDI->_1).typeHierarchy[bVar7 - 1]
        != TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    pDVar10 = (Dictionary_2_System_Type_Pool___Class *)0x0;
    if (bVar9) {
      pDVar10 = unaff_ESI;
    }
    pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar10 == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
    if ((bStack_8 < bVar7) ||
       ((Dictionary_2_System_Object_System_Object___Class *)(unaff_EDI->_1).typeHierarchy[bVar7 - 1]
        != TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    pDVar10 = (Dictionary_2_System_Type_Pool___Class *)0x0;
    if (bVar9) {
      pDVar10 = unaff_ESI;
    }
    if (pDVar10 == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
    pPVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pDVar10,(Type *)_Stack_18.typeHandle,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar2 = CONCAT44(TypeInfo__System__Int32,pPVar11);
    if (pPVar11 == (Pool *)0x0) goto code_?;
    if ((pPVar11->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar12 = (int32_t *)func_?(pPVar11);
    (this->fields).itemTypeID = *piVar12;
    pPStack_14 = (Pool__Array *)key;
    pTVar1 = (Type *)func_?(TypeInfo__System__Int32,&pPStack_14);
    unaff_ESI = (Dictionary_2_System_Type_Pool___Class *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)outData,pTVar1,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_15 = 10;
    _Stack_18.dummy = (void *)func_?(TypeInfo__System__Byte,&uStack_15);
    if (unaff_ESI == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
    unaff_EDI = (Dictionary_2_System_Type_Pool___Class *)(unaff_ESI->_0).image;
    bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    bStack_8 = (unaff_EDI->_1).naturalAligment;
    if ((bStack_8 < bVar7) ||
       ((Dictionary_2_System_Object_System_Object___Class *)(unaff_EDI->_1).typeHierarchy[bVar7 - 1]
        != TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    pDVar10 = (Dictionary_2_System_Type_Pool___Class *)0x0;
    if (bVar9) {
      pDVar10 = unaff_ESI;
    }
    pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar10 == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
    if ((bStack_8 < bVar7) ||
       ((Dictionary_2_System_Object_System_Object___Class *)(unaff_EDI->_1).typeHierarchy[bVar7 - 1]
        != TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    pDVar10 = (Dictionary_2_System_Type_Pool___Class *)0x0;
    if (bVar9) {
      pDVar10 = unaff_ESI;
    }
    if (pDVar10 == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
    pDStack_4 = (Dictionary_2_System_Type_Pool___Class *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)pDVar10,(Type *)_Stack_18.typeHandle,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
    pDVar10 = (Dictionary_2_System_Type_Pool___Class *)0x0;
    if (pDStack_4 == (Dictionary_2_System_Type_Pool___Class *)0x0) {
code_?:
      (this->fields).name = (String *)pDVar10;
      pTStack_16 = (Type__Array *)key;
      pDStack_5 = (Dictionary_2_System_Type_Pool___Class *)&pTStack_16;
      pDStack_4 = (Dictionary_2_System_Type_Pool___Class *)TypeInfo__System__Int32;
      pTVar1 = (Type *)func_?();
      unaff_ESI = (Dictionary_2_System_Type_Pool___Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            ((Dictionary_2_System_Type_Pool_ *)outData,pTVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      _Stack_c.__klassIndex._3_1_ = 0x67;
      _Stack_18.dummy = (void *)func_?(TypeInfo__System__Byte,(int)&_Stack_c + 3);
      if (unaff_ESI == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
      unaff_EDI = (Dictionary_2_System_Type_Pool___Class *)(unaff_ESI->_0).image;
      bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      bStack_8 = (unaff_EDI->_1).naturalAligment;
      if ((bStack_8 < bVar7) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (unaff_EDI->_1).typeHierarchy[bVar7 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      pDVar10 = (Dictionary_2_System_Type_Pool___Class *)0x0;
      if (bVar9) {
        pDVar10 = unaff_ESI;
      }
      pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pDVar10 == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
      if ((bStack_8 < bVar7) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (unaff_EDI->_1).typeHierarchy[bVar7 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      pDVar10 = (Dictionary_2_System_Type_Pool___Class *)0x0;
      if (bVar9) {
        pDVar10 = unaff_ESI;
      }
      if (pDVar10 == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
      pDStack_4 = (Dictionary_2_System_Type_Pool___Class *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                   Dictionary_2_System_Type_Pool__get_Item
                             ((Dictionary_2_System_Type_Pool_ *)pDVar10,(Type *)_Stack_18.typeHandle,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
      pDVar10 = (Dictionary_2_System_Type_Pool___Class *)0x0;
      if (pDStack_4 != (Dictionary_2_System_Type_Pool___Class *)0x0) {
        if ((String__Class *)(pDStack_4->_0).image == TypeInfo__System__String) {
          pDVar10 = pDStack_4;
        }
        pDStack_5 = (Dictionary_2_System_Type_Pool___Class *)TypeInfo__System__String;
        if (pDVar10 == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
      }
      (this->fields).description = (String *)pDVar10;
      pLStack_17 = (Link__Array *)key;
      pDStack_5 = (Dictionary_2_System_Type_Pool___Class *)&pLStack_17;
      pDStack_4 = (Dictionary_2_System_Type_Pool___Class *)TypeInfo__System__Int32;
      pTVar1 = (Type *)func_?();
      unaff_ESI = (Dictionary_2_System_Type_Pool___Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            ((Dictionary_2_System_Type_Pool_ *)outData,pTVar1,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      _Stack_c.__klassIndex._2_1_ = 0xb;
      _Stack_18.dummy = (void *)func_?(TypeInfo__System__Byte,(int)&_Stack_c + 2);
      if (unaff_ESI == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
      unaff_EDI = (Dictionary_2_System_Type_Pool___Class *)(unaff_ESI->_0).image;
      bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      bStack_8 = (unaff_EDI->_1).naturalAligment;
      if ((bStack_8 < bVar7) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (unaff_EDI->_1).typeHierarchy[bVar7 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      pDVar10 = (Dictionary_2_System_Type_Pool___Class *)0x0;
      if (bVar9) {
        pDVar10 = unaff_ESI;
      }
      pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pDVar10 == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
      if ((bStack_8 < bVar7) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (unaff_EDI->_1).typeHierarchy[bVar7 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      pDVar10 = (Dictionary_2_System_Type_Pool___Class *)0x0;
      if (bVar9) {
        pDVar10 = unaff_ESI;
      }
      if (pDVar10 == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
      unaff_ESI = (Dictionary_2_System_Type_Pool___Class *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            ((Dictionary_2_System_Type_Pool_ *)pDVar10,(Type *)_Stack_18.typeHandle,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      unaff_EDI = (Dictionary_2_System_Type_Pool___Class *)TypeInfo__System__Byte;
      pBVar18 = (Byte__Array *)0x0;
      if (unaff_ESI == (Dictionary_2_System_Type_Pool___Class *)0x0) {
code_?:
        (this->fields).data = pBVar18;
        pIStack_19 = (Int32__Array *)key;
        pDStack_5 = (Dictionary_2_System_Type_Pool___Class *)&pIStack_19;
        pDStack_4 = (Dictionary_2_System_Type_Pool___Class *)TypeInfo__System__Int32;
        pTVar1 = (Type *)func_?();
        unaff_ESI = (Dictionary_2_System_Type_Pool___Class *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                    Dictionary_2_System_Type_Pool__get_Item
                              ((Dictionary_2_System_Type_Pool_ *)outData,pTVar1,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        _Stack_c.__klassIndex._1_1_ = 100;
        _Stack_18.dummy = (void *)func_?(TypeInfo__System__Byte,(int)&_Stack_c + 1);
        if (unaff_ESI == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
        unaff_EDI = (Dictionary_2_System_Type_Pool___Class *)(unaff_ESI->_0).image;
        bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        bStack_8 = (unaff_EDI->_1).naturalAligment;
        if ((bStack_8 < bVar7) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (unaff_EDI->_1).typeHierarchy[bVar7 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        pDVar10 = (Dictionary_2_System_Type_Pool___Class *)0x0;
        if (bVar9) {
          pDVar10 = unaff_ESI;
        }
        pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar10 == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
        if ((bStack_8 < bVar7) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (unaff_EDI->_1).typeHierarchy[bVar7 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        pDVar10 = (Dictionary_2_System_Type_Pool___Class *)0x0;
        if (bVar9) {
          pDVar10 = unaff_ESI;
        }
        if (pDVar10 == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
        pPVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)pDVar10,(Type *)_Stack_18.typeHandle,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar2 = CONCAT44(TypeInfo__System__Boolean,pPVar11);
        if (pPVar11 == (Pool *)0x0) goto code_?;
        if ((pPVar11->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
        goto code_?;
        pbVar20 = (bool *)func_?(pPVar11);
        (this->fields).resellable = *pbVar20;
        pDStack_5 = (Dictionary_2_System_Type_Pool___Class *)key;
        pTVar1 = (Type *)func_?(TypeInfo__System__Int32,&pDStack_5);
        unaff_ESI = (Dictionary_2_System_Type_Pool___Class *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                    Dictionary_2_System_Type_Pool__get_Item
                              ((Dictionary_2_System_Type_Pool_ *)outData,pTVar1,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        _Stack_c.__klassIndex._0_1_ = 0x4b;
        _Stack_18.dummy = (void *)func_?(TypeInfo__System__Byte,&_Stack_c);
        if (unaff_ESI == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
        unaff_EDI = (Dictionary_2_System_Type_Pool___Class *)(unaff_ESI->_0).image;
        bVar7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        bStack_8 = (unaff_EDI->_1).naturalAligment;
        if ((bStack_8 < bVar7) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (unaff_EDI->_1).typeHierarchy[bVar7 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        pDVar10 = (Dictionary_2_System_Type_Pool___Class *)0x0;
        if (bVar9) {
          pDVar10 = unaff_ESI;
        }
        pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        ;
        if (pDVar10 == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
        if ((bStack_8 < bVar7) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (unaff_EDI->_1).typeHierarchy[bVar7 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        pDVar10 = (Dictionary_2_System_Type_Pool___Class *)0x0;
        if (bVar9) {
          pDVar10 = unaff_ESI;
        }
        if (pDVar10 == (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
        pPVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)pDVar10,(Type *)_Stack_18.typeHandle,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        uVar2 = CONCAT44(TypeInfo__System__Int32,pPVar11);
        if (pPVar11 == (Pool *)0x0) goto code_?;
        if ((pPVar11->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar12 = (int32_t *)func_?(pPVar11);
          (this->fields).priceGold = *piVar12;
          pDStack_4 = (Dictionary_2_System_Type_Pool___Class *)key;
          pDVar10 = (Dictionary_2_System_Type_Pool___Class *)&pDStack_4;
          pDVar21 = (Dictionary_2_System_Type_Pool___Class *)TypeInfo__System__Int32;
          pTVar1 = (Type *)func_?(TypeInfo__System__Int32,pDVar10);
          unaff_ESI = (Dictionary_2_System_Type_Pool___Class *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                      Dictionary_2_System_Type_Pool__get_Item
                                ((Dictionary_2_System_Type_Pool_ *)outData,pTVar1,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
          uStack_22 = 0x62;
          pTVar1 = (Type *)func_?(TypeInfo__System__Byte,&uStack_22);
          if (unaff_ESI != (Dictionary_2_System_Type_Pool___Class *)0x0) {
            unaff_EDI = (Dictionary_2_System_Type_Pool___Class *)(unaff_ESI->_0).image;
            bVar7 = (
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment;
            bVar23 = (unaff_EDI->_1).naturalAligment;
            if ((bVar23 < bVar7) ||
               ((Dictionary_2_System_Object_System_Object___Class *)
                (unaff_EDI->_1).typeHierarchy[bVar7 - 1] !=
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
            {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            pDVar24 = (Dictionary_2_System_Type_Pool___Class *)0x0;
            if (bVar9) {
              pDVar24 = unaff_ESI;
            }
            pDVar3 = 
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
            if (pDVar24 != (Dictionary_2_System_Type_Pool___Class *)0x0) {
              if ((bVar23 < bVar7) ||
                 ((Dictionary_2_System_Object_System_Object___Class *)
                  (unaff_EDI->_1).typeHierarchy[bVar7 - 1] !=
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 )) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              pDVar24 = (Dictionary_2_System_Type_Pool___Class *)0x0;
              if (bVar9) {
                pDVar24 = unaff_ESI;
              }
              if (pDVar24 != (Dictionary_2_System_Type_Pool___Class *)0x0) {
                unaff_EDI = pDVar21;
                unaff_ESI = pDVar10;
                pPVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]
                         ::Dictionary_2_System_Type_Pool__get_Item
                                   ((Dictionary_2_System_Type_Pool_ *)pDVar24,pTVar1,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                uVar2 = CONCAT44(TypeInfo__System__Int32,pPVar11);
                if (pPVar11 != (Pool *)0x0) {
                  if ((pPVar11->klass->_0).element_class ==
                      (TypeInfo__System__Int32->_0).element_class) {
                    piVar12 = (int32_t *)func_?(pPVar11);
                    (this->fields).slotPosition = *piVar12;
                    return;
                  }
                  goto code_?;
                }
                goto code_?;
              }
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      pDStack_5 = (Dictionary_2_System_Type_Pool___Class *)TypeInfo__System__Byte;
      pDStack_4 = unaff_ESI;
      pBVar18 = (Byte__Array *)func_?();
      if (pBVar18 != (Byte__Array *)0x0) goto code_?;
      goto code_?;
    }
    if ((String__Class *)(pDStack_4->_0).image == TypeInfo__System__String) {
      pDVar10 = pDStack_4;
    }
    pDStack_5 = (Dictionary_2_System_Type_Pool___Class *)TypeInfo__System__String;
    if (pDVar10 != (Dictionary_2_System_Type_Pool___Class *)0x0) goto code_?;
  }
code_?:
  func_?();
  pDVar3 = extraout_ECX_00;
code_?:
  func_?(unaff_ESI,pDVar3);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

