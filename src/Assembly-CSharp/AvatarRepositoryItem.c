
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
  pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)key;
  pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&pDStack_1);
  if (outData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    uVar3 = func_?();
    outData = (Dictionary_2_System_Object_System_Object_ *)unaff_EBX;
code_?:
    func_?(uVar3);
    pDVar4 = extraout_EDX;
    unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)outData;
code_?:
    func_?(unaff_ESI.m_Index,pDVar4);
  }
  else {
    unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData,
                           pOVar2,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    uStack_5 = 0x59;
    unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                func_?(TypeInfo__System__Byte,&uStack_5);
    if (unaff_ESI.m_Index == 0) goto code_?;
    bVar6 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) < bVar6) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 + (uint)bVar6 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          (unaff_ESI.m_Index,(Object *)unaff_EBX,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__Byte;
    if (unaff_ESI.m_Index == 0) {
      (this->fields).data = (Byte__Array *)0x0;
      pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)0x0;
code_?:
      pAStack_7 = &this->fields;
      func_?();
      (this->fields).itemID = key;
      pSVar8 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&key,(MethodInfo *)0x0);
      pSVar8 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Avatar_,pSVar8,(MethodInfo *)0x0);
      ppSVar9 = &(this->fields).name;
      *ppSVar9 = pSVar8;
      func_?(ppSVar9);
      pAStack_7 = (AvatarRepositoryItem__Fields *)key;
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&pAStack_7);
      unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)outData
                             ,pOVar2,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      uStack_10 = 0x4b;
      pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_10);
      unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)outData;
      if (unaff_ESI.m_Index == 0) goto code_?;
      bVar6 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if ((*(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) < bVar6) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 + (uint)bVar6 * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
      TVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (unaff_ESI.m_Index,pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      uVar3 = CONCAT44(TypeInfo__System__Int32,TVar11.m_Index);
      if (TVar11.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar11.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar12 = (int32_t *)func_?(TVar11.m_Index);
        (this->fields).priceGold = *piVar12;
        pAVar13 = (AvatarRepositoryItem__Fields *)&stack0xffffffec;
        pOVar2 = (Object *)func_?(TypeInfo__System__Int32,pAVar13);
        unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               outData,pOVar2,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        uStack_14 = 0x62;
        unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                    func_?(TypeInfo__System__Byte,&uStack_14);
        if (unaff_ESI.m_Index != 0) {
          bVar6 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          pDVar4 = 
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
          if ((*(byte *)(*(int *)unaff_ESI.m_Index + 0xb8) < bVar6) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(int *)(*(int *)unaff_ESI.m_Index + 100) + -4 + (uint)bVar6 * 4) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          TVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            (unaff_ESI.m_Index,(Object *)unaff_EBX,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
          unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)TVar11.m_Index;
          unaff_ESI.m_Index = (int32_t)pAVar13;
          uVar3 = CONCAT44(TypeInfo__System__Int32,TVar15.m_Index);
          if (TVar15.m_Index != 0) {
            outData = (Dictionary_2_System_Object_System_Object_ *)unaff_EBX;
            if (*(Il2CppClass **)(*(int *)TVar15.m_Index + 0x20) ==
                (TypeInfo__System__Int32->_0).element_class) {
              piVar12 = (int32_t *)func_?(TVar15.m_Index);
              (this->fields).slotPosition = *piVar12;
              return;
            }
            goto code_?;
          }
        }
        goto code_?;
      }
      goto code_?;
    }
    pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__Byte;
    pAStack_7 = (AvatarRepositoryItem__Fields *)unaff_ESI;
    pBVar16 = (Byte__Array *)func_?();
    if (pBVar16 == (Byte__Array *)0x0) goto code_?;
    unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)&this->fields;
    ((AvatarRepositoryItem__Fields *)unaff_EBX)->data = pBVar16;
    pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__Byte;
    pDVar4 = (Dictionary_2_System_Object_System_Object___Class *)TypeInfo__System__Byte;
    pAStack_7 = (AvatarRepositoryItem__Fields *)unaff_ESI;
    pDStack_1 = (Dictionary_2_System_Object_System_Object___Class *)func_?();
    if (pDStack_1 != (Dictionary_2_System_Object_System_Object___Class *)0x0) goto code_?;
  }
  pAStack_7 = (AvatarRepositoryItem__Fields *)unaff_ESI.m_Index;
  pDStack_1 = pDVar4;
  func_?();
code_?:
  pAStack_7 = (AvatarRepositoryItem__Fields *)unaff_ESI.m_Index;
  pDStack_1 = unaff_EBX;
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}

