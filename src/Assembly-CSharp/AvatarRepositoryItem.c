
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pAStack_1 = (AvatarRepositoryItem__Fields *)key;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&pAStack_1);
  if (outData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    TVar3.m_Index = func_?();
    outData = (Dictionary_2_System_Object_System_Object_ *)unaff_EBX;
code_?:
    func_?(TVar3.m_Index);
    unaff_EBX = (Byte__Array__Class *)outData;
  }
  else {
    unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData,
                           pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_4 = (Byte__Array__Class *)CONCAT13(0x59,(undefined3)uStack_4);
    unaff_EBX = (Byte__Array__Class *)func_?(TypeInfo__System__Byte,(int)&uStack_4 + 3);
    if (unaff_ESI.m_Index == 0) goto code_?;
    if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         naturalAligment <= *(byte *)(*(int *)unaff_ESI.m_Index + 0xb8)) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
         (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (unaff_ESI.m_Index,(Object *)unaff_EBX,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      unaff_EBX = TypeInfo__System__Byte;
      if (unaff_ESI.m_Index == 0) {
        (this->fields).data = (Byte__Array *)0x0;
        uStack_4 = (Byte__Array__Class *)0x0;
      }
      else {
        uStack_4 = TypeInfo__System__Byte;
        pAStack_1 = (AvatarRepositoryItem__Fields *)unaff_ESI;
        pBVar5 = (Byte__Array *)func_?();
        if (pBVar5 == (Byte__Array *)0x0) goto code_?;
        (this->fields).data = pBVar5;
        unaff_EBX = TypeInfo__System__Byte;
        uStack_4 = TypeInfo__System__Byte;
        pAStack_1 = (AvatarRepositoryItem__Fields *)unaff_ESI;
        uStack_4 = (Byte__Array__Class *)func_?();
        if (uStack_4 == (Byte__Array__Class *)0x0) goto code_?;
      }
      pAStack_1 = &this->fields;
      func_?();
      (this->fields).itemID = key;
      pSVar6 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&key,(MethodInfo *)0x0);
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Avatar_,pSVar6,(MethodInfo *)0x0);
      (this->fields).name = pSVar6;
      func_?();
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff0);
      unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData
                             ,pOVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      uStack_4._0_3_ = CONCAT12(0x4b,(undefined2)uStack_4);
      pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&uStack_4 + 2);
      unaff_EBX = (Byte__Array__Class *)outData;
      if (unaff_ESI.m_Index == 0) goto code_?;
      if ((*(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (unaff_ESI.m_Index,pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar3.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar7 = (int32_t *)func_?();
        (this->fields).priceGold = *piVar7;
        pAVar8 = (AvatarRepositoryItem__Fields *)&stack0xffffffec;
        pBVar9 = (Byte__Array__Class *)key;
        pOVar2 = (Object *)func_?(TypeInfo__System__Int32,pAVar8);
        unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               outData,pOVar2,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        uStack_4._0_2_ = CONCAT11(0x62,(undefined1)uStack_4);
        unaff_EBX = (Byte__Array__Class *)func_?(TypeInfo__System__Byte,(int)&uStack_4 + 1)
        ;
        if (unaff_ESI.m_Index != 0) {
          if ((*(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) <
               (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
               _1).naturalAligment) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 +
               (uint)(
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     ->_1).naturalAligment * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (unaff_ESI.m_Index,(Object *)unaff_EBX,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          unaff_EBX = pBVar9;
          unaff_ESI.m_Index = (int32_t)pAVar8;
          if (TVar3.m_Index != 0) {
            outData = (Dictionary_2_System_Object_System_Object_ *)unaff_EBX;
            if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar7 = (int32_t *)func_?();
              (this->fields).slotPosition = *piVar7;
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
  func_?(unaff_ESI.m_Index);
code_?:
  pAStack_1 = (AvatarRepositoryItem__Fields *)unaff_ESI.m_Index;
  uStack_4 = unaff_EBX;
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

