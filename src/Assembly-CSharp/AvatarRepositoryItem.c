
/* AvatarRepositoryItem(Dictionary`2[System.Object,System.Object], Int32) */

void Assembly-CSharp.dll::AvatarRepositoryItem::AvatarRepositoryItem__ctor
               (AvatarRepositoryItem *this,Dictionary_2_System_Object_System_Object_ *outData,
               int32_t key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  pTStack_1 = (Type__Array *)key;
  pTVar2 = (Type *)func_?(TypeInfo__System__Int32,&pTStack_1);
  if (outData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    uVar3 = func_?(0);
code_?:
    func_?(uVar3);
    pDVar4 = extraout_EDX;
code_?:
    func_?(unaff_ESI,pDVar4);
  }
  else {
    unaff_ESI = (Dictionary_2_System_Type_Pool_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)outData,pTVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_5 = 0x59;
    pTVar2 = (Type *)func_?(TypeInfo__System__Byte,&uStack_5);
    if (unaff_ESI == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    pDVar6 = unaff_ESI->klass;
    bStack_7 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment;
    if (((pDVar6->_1).naturalAligment < bStack_7) ||
       (cStack_8 = '\x01',
       (Dictionary_2_System_Object_System_Object___Class *)(pDVar6->_1).typeHierarchy[bStack_7 - 1]
       != TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      cStack_8 = '\0';
    }
    pDVar9 = (Dictionary_2_System_Type_Pool_ *)0x0;
    if (cStack_8 != '\0') {
      pDVar9 = unaff_ESI;
    }
    pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar9 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    if (((pDVar6->_1).naturalAligment < bStack_7) ||
       ((Dictionary_2_System_Object_System_Object___Class *)(pDVar6->_1).typeHierarchy[bStack_7 - 1]
        != TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    pDVar9 = (Dictionary_2_System_Type_Pool_ *)0x0;
    if (bVar10) {
      pDVar9 = unaff_ESI;
    }
    if (pDVar9 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
    unaff_ESI = (Dictionary_2_System_Type_Pool_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          (pDVar9,pTVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    pBVar11 = (Byte__Array *)0x0;
    if (unaff_ESI == (Dictionary_2_System_Type_Pool_ *)0x0) {
code_?:
      (this->fields).data = pBVar11;
      (this->fields).itemID = key;
      arg1 = (Object *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar12 = mscorlib.dll::System::String::String_Concat
                         ((Object *)StringLiteral_Avatar_,arg1,(MethodInfo *)0x0);
      (this->fields).name = pSVar12;
      pTVar2 = (Type *)func_?();
      unaff_ESI = (Dictionary_2_System_Type_Pool_ *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            ((Dictionary_2_System_Type_Pool_ *)outData,pTVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      uStack_13 = 0x4b;
      pTVar2 = (Type *)func_?(TypeInfo__System__Byte,&uStack_13);
      if (unaff_ESI == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
      pDVar6 = unaff_ESI->klass;
      bStack_14 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment;
      if (((pDVar6->_1).naturalAligment < bStack_14) ||
         (cStack_8 = '\x01',
         (Dictionary_2_System_Object_System_Object___Class *)
         (pDVar6->_1).typeHierarchy[bStack_14 - 1] !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        cStack_8 = '\0';
      }
      pDVar9 = (Dictionary_2_System_Type_Pool_ *)0x0;
      if (cStack_8 != '\0') {
        pDVar9 = unaff_ESI;
      }
      pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (pDVar9 != (Dictionary_2_System_Type_Pool_ *)0x0) {
        if (((pDVar6->_1).naturalAligment < bStack_14) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (pDVar6->_1).typeHierarchy[bStack_14 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        pDVar9 = (Dictionary_2_System_Type_Pool_ *)0x0;
        if (bVar10) {
          pDVar9 = unaff_ESI;
        }
        if (pDVar9 == (Dictionary_2_System_Type_Pool_ *)0x0) goto code_?;
        pPVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                  Dictionary_2_System_Type_Pool__get_Item
                            (pDVar9,pTVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        uVar3 = CONCAT44(TypeInfo__System__Int32,pPVar15);
        if (pPVar15 == (Pool *)0x0) goto code_?;
        if ((pPVar15->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar16 = (int32_t *)func_?(pPVar15);
          (this->fields).priceGold = *piVar16;
          pDVar9 = (Dictionary_2_System_Type_Pool_ *)&stack0xffffffe0;
          pTVar2 = (Type *)func_?(TypeInfo__System__Int32,pDVar9);
          unaff_ESI = (Dictionary_2_System_Type_Pool_ *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                      Dictionary_2_System_Type_Pool__get_Item
                                ((Dictionary_2_System_Type_Pool_ *)outData,pTVar2,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
          uStack_17 = 0x62;
          pTVar2 = (Type *)func_?(TypeInfo__System__Byte,&uStack_17);
          if (unaff_ESI != (Dictionary_2_System_Type_Pool_ *)0x0) {
            pDVar6 = unaff_ESI->klass;
            bVar18 = (
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment;
            bVar19 = (pDVar6->_1).naturalAligment;
            if ((bVar19 < bVar18) ||
               ((Dictionary_2_System_Object_System_Object___Class *)
                (pDVar6->_1).typeHierarchy[bVar18 - 1] !=
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
            {
              bVar10 = false;
            }
            else {
              bVar10 = true;
            }
            pDVar20 = (Dictionary_2_System_Type_Pool_ *)0x0;
            if (bVar10) {
              pDVar20 = unaff_ESI;
            }
            pDVar4 = 
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
            if (pDVar20 != (Dictionary_2_System_Type_Pool_ *)0x0) {
              if ((bVar19 < bVar18) ||
                 ((Dictionary_2_System_Object_System_Object___Class *)
                  (pDVar6->_1).typeHierarchy[bVar18 - 1] !=
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 )) {
                bVar10 = false;
              }
              else {
                bVar10 = true;
              }
              pDVar20 = (Dictionary_2_System_Type_Pool_ *)0x0;
              if (bVar10) {
                pDVar20 = unaff_ESI;
              }
              if (pDVar20 != (Dictionary_2_System_Type_Pool_ *)0x0) {
                unaff_ESI = pDVar9;
                pPVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Type,Pool]::Dictionary_2_System_Type_Pool__get_Item
                                    (pDVar20,pTVar2,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                uVar3 = CONCAT44(TypeInfo__System__Int32,pPVar15);
                if (pPVar15 != (Pool *)0x0) {
                  if ((pPVar15->klass->_0).element_class ==
                      (TypeInfo__System__Int32->_0).element_class) {
                    piVar16 = (int32_t *)func_?(pPVar15);
                    (this->fields).slotPosition = *piVar16;
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
      goto code_?;
    }
    pBVar11 = (Byte__Array *)func_?();
    if (pBVar11 != (Byte__Array *)0x0) goto code_?;
  }
  func_?();
  pDVar4 = extraout_ECX;
code_?:
  func_?(unaff_ESI,pDVar4);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}

