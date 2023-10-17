
/* AvatarRepositoryItem(Dictionary`2[System.Object,System.Object], Int32) */

void Assembly-CSharp.dll::AvatarRepositoryItem::AvatarRepositoryItem__ctor
               (AvatarRepositoryItem *this,Dictionary_2_System_Object_System_Object_ *outData,
               int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_Avatar_);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pIStack_1 = (Int32__Array *)key;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&pIStack_1);
  if (outData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    pOVar2 = (Object *)func_?();
    outData = (Dictionary_2_System_Object_System_Object_ *)unaff_EBX;
code_?:
    func_?(pOVar2);
    unaff_EBX = (Byte__Array__Class *)outData;
  }
  else {
    unaff_ESI = (Int32__Array *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (outData,pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_3 = (Byte__Array__Class *)CONCAT13(0x59,(undefined3)uStack_3);
    unaff_EBX = (Byte__Array__Class *)func_?(TypeInfo__System__Byte,(int)&uStack_3 + 3);
    if (unaff_ESI == (Int32__Array *)0x0) goto code_?;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth <=
         (((Dictionary_2_System_Object_System_Object___Class *)unaff_ESI->klass)->_1).
         typeHierarchyDepth) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (((Dictionary_2_System_Object_System_Object___Class *)unaff_ESI->klass)->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      unaff_ESI = (Int32__Array *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                             (Object *)unaff_EBX,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      unaff_EBX = TypeInfo__System__Byte;
      if (unaff_ESI == (Int32__Array *)0x0) {
        (this->fields).data = (Byte__Array *)0x0;
        uStack_3 = (Byte__Array__Class *)0x0;
      }
      else {
        uStack_3 = TypeInfo__System__Byte;
        pIStack_1 = unaff_ESI;
        pBVar4 = (Byte__Array *)func_?();
        if (pBVar4 == (Byte__Array *)0x0) goto code_?;
        (this->fields).data = pBVar4;
        unaff_EBX = TypeInfo__System__Byte;
        uStack_3 = TypeInfo__System__Byte;
        pIStack_1 = unaff_ESI;
        uStack_3 = (Byte__Array__Class *)func_?();
        if (uStack_3 == (Byte__Array__Class *)0x0) goto code_?;
      }
      pIStack_1 = (Int32__Array *)&this->fields;
      func_?();
      (this->fields).itemID = key;
      pSVar5 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&key,(MethodInfo *)0x0);
      pSVar5 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Avatar_,pSVar5,(MethodInfo *)0x0);
      (this->fields).name = pSVar5;
      func_?();
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
      unaff_ESI = (Int32__Array *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (outData,pOVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      uStack_3._0_3_ = CONCAT12(0x4b,(undefined2)uStack_3);
      pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_3 + 2);
      unaff_EBX = (Byte__Array__Class *)outData;
      if (unaff_ESI == (Int32__Array *)0x0) goto code_?;
      if (((((Dictionary_2_System_Object_System_Object___Class *)unaff_ESI->klass)->_1).
           typeHierarchyDepth <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (((Dictionary_2_System_Object_System_Object___Class *)unaff_ESI->klass)->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 == (Object *)0x0) goto code_?;
      if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar6 = (int32_t *)func_?();
        (this->fields).priceGold = *piVar6;
        pIVar7 = (Int32__Array *)&stack0xffffffec;
        pBVar8 = (Byte__Array__Class *)key;
        pOVar2 = (Object *)func_?(TypeInfo__System__Int32,pIVar7);
        unaff_ESI = (Int32__Array *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__get_Item
                              (outData,pOVar2,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        uStack_3._0_2_ = CONCAT11(0x62,(undefined1)uStack_3);
        unaff_EBX = (Byte__Array__Class *)func_?(TypeInfo__System__Byte,(int)&uStack_3 + 1)
        ;
        if (unaff_ESI != (Int32__Array *)0x0) {
          if (((((Dictionary_2_System_Object_System_Object___Class *)unaff_ESI->klass)->_1).
               typeHierarchyDepth <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).typeHierarchyDepth) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (((Dictionary_2_System_Object_System_Object___Class *)unaff_ESI->klass)->_1).
              typeHierarchy
              [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).typeHierarchyDepth - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                              (Object *)unaff_EBX,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          unaff_EBX = pBVar8;
          unaff_ESI = pIVar7;
          if (pOVar2 != (Object *)0x0) {
            outData = (Dictionary_2_System_Object_System_Object_ *)unaff_EBX;
            if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
              piVar6 = (int32_t *)func_?();
              (this->fields).slotPosition = *piVar6;
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
  func_?(unaff_ESI);
code_?:
  pIStack_1 = unaff_ESI;
  uStack_3 = unaff_EBX;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

