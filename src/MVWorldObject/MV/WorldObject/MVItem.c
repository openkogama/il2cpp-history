
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::MVItem::MVItem_ToString
                   (MVItem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Object);
    func_?(&StringLiteral_Name___0__ItemID___1__ItemTypeID);
    cRam_? = '\x01';
  }
  args = (Object__Array *)func_?(TypeInfo__System__Object,5);
  pSVar1 = (this->fields).name;
  if (args == (Object__Array *)0x0) {
    func_?();
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
code_?:
    uVar2 = func_?(0);
    func_?(uVar2);
  }
  else {
    if (pSVar1 != (String *)0x0) {
      iVar3 = func_?(pSVar1,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)pSVar1;
    func_?(args->vector,pSVar1);
    iStack_4 = (this->fields).itemID;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_4);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 2) goto code_?;
    args->vector[1] = pOVar5;
    func_?(args->vector + 1,pOVar5);
    iStack_6 = (this->fields).itemTypeID;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 3) goto code_?;
    args->vector[2] = pOVar5;
    func_?(args->vector + 2,pOVar5);
    iStack_7 = (this->fields).priceGold;
    pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_7);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (args->max_length < 4) goto code_?;
    args->vector[3] = pOVar5;
    func_?(args->vector + 3,pOVar5);
    bStack_8 = (this->fields).resellable;
    pOVar5 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_8);
    if (pOVar5 != (Object *)0x0) {
      iVar3 = func_?(pOVar5,(args->klass->_0).element_class);
      if (iVar3 == 0) goto code_?;
    }
    if (4 < args->max_length) {
      args->vector[4] = pOVar5;
      func_?(args->vector + 4,pOVar5);
      pSVar1 = mscorlib.dll::System::String::String_Format_3
                         (StringLiteral_Name___0__ItemID___1__ItemTypeID,args,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar9)();
  return pSVar1;
}


/* MVItem(Int32, Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::MVItem::MVItem__ctor_1
               (MVItem *this,int32_t itemID,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)value,ExceptionArgument__Enum_obj,unaff_EDI);
  (value->fields).itemID = itemID;
  this = (MVItem *)CONCAT13(0x70,this._0_3_);
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  this_00 = itemData;
  if (itemData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (itemData,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar1 == (Object *)0x0) goto code_?;
    if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar2 = (int32_t *)func_?();
      (value->fields).itemCategoryID = *piVar2;
      pOVar1 = (Object *)func_?(TypeInfo__System__Byte);
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_00,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar1 == (Object *)0x0) goto code_?;
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar2 = (int32_t *)func_?();
        (value->fields).itemTypeID = *piVar2;
        pOVar1 = (Object *)func_?(TypeInfo__System__Byte);
        pSVar3 = (String *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_00,pOVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pSVar3 == (String *)0x0) {
          (value->fields).name = (String *)0x0;
code_?:
          func_?();
          pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffff9);
          pSVar3 = (String *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (this_00,pOVar1,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pSVar3 == (String *)0x0) {
            (value->fields).description = (String *)0x0;
code_?:
            func_?();
            pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffff8);
            pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (this_00,pOVar1,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (pOVar1 == (Object *)0x0) goto code_?;
            if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class)
            {
              pbVar4 = (bool *)func_?();
              (value->fields).resellable = *pbVar4;
              pOVar1 = (Object *)func_?(TypeInfo__System__Byte);
              pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (this_00,pOVar1,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (pOVar1 == (Object *)0x0) goto code_?;
              if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class)
              {
                piVar2 = (int32_t *)func_?();
                (value->fields).priceGold = *piVar2;
                pOVar1 = (Object *)func_?(TypeInfo__System__Byte);
                pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (this_00,pOVar1,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if (pOVar1 == (Object *)0x0) goto code_?;
                if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class
                   ) {
                  piVar2 = (int32_t *)func_?();
                  (value->fields).shopInventoryID = *piVar2;
                  pOVar1 = (Object *)func_?(TypeInfo__System__Byte);
                  pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__get_Item
                                     (this_00,pOVar1,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                  if (pOVar1 == (Object *)0x0) goto code_?;
                  if ((pOVar1->klass->_0).element_class ==
                      (TypeInfo__System__Int32->_0).element_class) {
                    piVar2 = (int32_t *)func_?();
                    (value->fields).authorProfileID = *piVar2;
                    pOVar1 = (Object *)func_?(TypeInfo__System__Byte);
                    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Object]::
                             Dictionary_2_System_Object_System_Object__get_Item
                                       (this_00,pOVar1,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       );
                    if (pOVar1 == (Object *)0x0) goto code_?;
                    if ((pOVar1->klass->_0).element_class ==
                        (TypeInfo__System__Int32->_0).element_class) {
                      piVar2 = (int32_t *)func_?();
                      (value->fields).originalItemID = *piVar2;
                      pOVar1 = (Object *)
                               func_?(CONCAT13(0x69,(int3)TypeInfo__System__Byte));
                      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Object,System::Object]::
                               Dictionary_2_System_Object_System_Object__get_Item
                                         (this_00,pOVar1,
                                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                         );
                      if (pOVar1 == (Object *)0x0) goto code_?;
                      if ((pOVar1->klass->_0).element_class ==
                          (TypeInfo__System__Boolean->_0).element_class) {
                        pbVar4 = (bool *)func_?();
                        (value->fields).isDeleted = *pbVar4;
                        pOVar1 = (Object *)
                                 func_?(CONCAT13((char)((uint)TypeInfo__System__Byte >>
                                                                0x18),
                                                          CONCAT12(0xc,(short)TypeInfo__System__Byte
                                                                  )));
                        bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,GUILoginHandler+PlanetData]::
                                Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                                          ((Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *
                                           )this_00,pOVar1,
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                                          );
                        if (bVar5 != 0) {
                          this = (MVItem *)((int)&this + 3);
                          pOVar1 = (Object *)func_?();
                          pSVar3 = (String *)
                                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Object,System::Object]::
                                   Dictionary_2_System_Object_System_Object__get_Item
                                             (this_00,pOVar1,
                                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                             );
                          if (pSVar3 != (String *)0x0) {
                            pSVar6 = (String *)0x0;
                            if (pSVar3->klass == TypeInfo__System__String) {
                              pSVar6 = pSVar3;
                            }
                            if (pSVar6 != (String *)0x0) {
                              (value->fields).imagePath = pSVar6;
                              pSVar6 = (String *)0x0;
                              if (pSVar3->klass == TypeInfo__System__String) {
                                pSVar6 = pSVar3;
                              }
                              if (pSVar6 != (String *)0x0) goto code_?;
                            }
                            goto code_?;
                          }
                          (value->fields).imagePath = (String *)0x0;
code_?:
                          func_?();
                        }
                        if ((value->fields).isDeleted != 0) {
                          (value->fields).hasData = 0;
                          return;
                        }
                        this._0_3_ = SUB43(unaff_EBX,0);
                        this = (MVItem *)CONCAT13(0xb,this._0_3_);
                        pOVar1 = (Object *)func_?();
                        this_00 = (Dictionary_2_System_Object_System_Object_ *)
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Object,System::Object]::
                                  Dictionary_2_System_Object_System_Object__get_Item
                                            (this_00,pOVar1,
                                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                            );
                        unaff_EBX = TypeInfo__System__Byte;
                        if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
                          (value->fields).data = (Byte__Array *)0x0;
                          itemData = (Dictionary_2_System_Object_System_Object_ *)0x0;
code_?:
                          itemID = (int32_t)&(value->fields).data;
                          this = (MVItem *)&UNK_?;
                          func_?();
                          (value->fields).hasData = 1;
                          return;
                        }
                        itemData = (Dictionary_2_System_Object_System_Object_ *)
                                   TypeInfo__System__Byte;
                        this = (MVItem *)&UNK_?;
                        itemID = (int32_t)this_00;
                        pBVar7 = (Byte__Array *)func_?();
                        if (pBVar7 != (Byte__Array *)0x0) {
                          (value->fields).data = pBVar7;
                          unaff_EBX = TypeInfo__System__Byte;
                          itemData = (Dictionary_2_System_Object_System_Object_ *)
                                     TypeInfo__System__Byte;
                          this = (MVItem *)&UNK_?;
                          itemID = (int32_t)this_00;
                          itemData = (Dictionary_2_System_Object_System_Object_ *)func_?();
                          if (itemData != (Dictionary_2_System_Object_System_Object_ *)0x0)
                          goto code_?;
                        }
                        goto code_?;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pSVar6 = (String *)0x0;
            if (pSVar3->klass == TypeInfo__System__String) {
              pSVar6 = pSVar3;
            }
            if (pSVar6 != (String *)0x0) {
              (value->fields).description = pSVar6;
              pSVar6 = (String *)0x0;
              if (pSVar3->klass == TypeInfo__System__String) {
                pSVar6 = pSVar3;
              }
              if (pSVar6 != (String *)0x0) goto code_?;
            }
          }
        }
        else {
          pSVar6 = (String *)0x0;
          if (pSVar3->klass == TypeInfo__System__String) {
            pSVar6 = pSVar3;
          }
          if (pSVar6 != (String *)0x0) {
            (value->fields).name = pSVar6;
            pSVar6 = (String *)0x0;
            if (pSVar3->klass == TypeInfo__System__String) {
              pSVar6 = pSVar3;
            }
            if (pSVar6 != (String *)0x0) goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  this = (MVItem *)&UNK_?;
  itemID = (int32_t)this_00;
  itemData = (Dictionary_2_System_Object_System_Object_ *)unaff_EBX;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

