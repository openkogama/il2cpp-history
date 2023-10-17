
/* Boolean ContainsSubDictionary(Dictionary`2[System.Object,System.Object], List`1[System.String])
    */

bool MVWorldObject.dll::MV::WorldObject::HashtableFunctions::
     HashtableFunctions_ContainsSubDictionary
               (Dictionary_2_System_Object_System_Object_ *data,
               List_1_System_String_ *subDictionaryPath,MethodInfo *method)

{
  pDStack_1 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  bVar2 = HashtableFunctions_TryGetSubDictionary
                    (&pDStack_1,data,subDictionaryPath,(MethodInfo *)0x0);
  return bVar2;
}


/* Dictionary`2[System.Object,System.Object] CreateDictionaryUpdate(String, Object,
   List`1[System.String]) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_CreateDictionaryUpdate
          (String *key,Object *value,List_1_System_String_ *dictionaryBasePath,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar2 = pDVar1;
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    index = 0;
    if (dictionaryBasePath != (List_1_System_String_ *)0x0) {
      while( true ) {
        if ((dictionaryBasePath->fields)._size <= index) {
          return pDVar2;
        }
        this = (Dictionary_2_System_Object_System_Object_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
        if (this == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
        Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
        ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                  ((ParameterOverride_1_System_Object_ *)this,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        key_00 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            dictionaryBasePath,index,
                            MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                           );
        if (pDVar1 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (pDVar1,(Object *)key_00,(Object *)this,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        pDVar1 = this;
        if (index == (dictionaryBasePath->fields)._size + -1) {
          pDVar2 = (Dictionary_2_System_Object_System_Object_ *)key;
          pDVar1 = (Dictionary_2_System_Object_System_Object_ *)value;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    (this,(Object *)key,value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        }
        index = index + 1;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar3)();
  return pDVar1;
}


/* Dictionary`2[System.Object,System.Object]
   DeepCopyHashTable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Object,System.Object]) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_DeepCopyHashTable
          (Dictionary_2_System_Object_System_Object_ *from,
          Dictionary_2_System_Object_System_Object_ *to,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeRef__System__Byte);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    TypeRef__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    in_stack_4 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeRef__System__Int32);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&TypeRef__System__Single);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeRef__System__String);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (from == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
    pBStack_5 = unaff_ESI;
    pIVar6 = (Int32__Array__Class *)pBStack_7;
code_?:
    func_?(unaff_ESI,pIVar6);
code_?:
    func_?(from,pBStack_7);
code_?:
    func_?(pBStack_5,from);
code_?:
    func_?();
code_?:
    func_?();
    pcVar8 = (code *)swi(3);
    pDVar9 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar8)();
    return pDVar9;
  }
  pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
           Dictionary_2_System_Object_System_Object__GetEnumerator
                     ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                      &stack0xffffff98,from,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                     );
  pOVar11 = (pDVar10->_current).key;
  uVar12 = *(undefined8 *)&(pDVar10->_current).value;
  uStack_1 = 1;
code_?:
  bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System::
          Object,System::Object]::
          Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                    ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                     &stack0xffffffb0,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                    );
  if (bVar13 == 0) {
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&stack0xffffffb0,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,(MethodInfo *)in_stack_4);
    *unaff_FS_OFFSET = uStack_3;
    return to;
  }
  pBStack_5 = (Byte__Array__Class *)uVar12;
  pBStack_7 = pBStack_5;
  if (pBStack_5 == (Byte__Array__Class *)0x0) goto code_?;
  from = (Dictionary_2_System_Object_System_Object_ *)
         mscorlib.dll::System::Object::Object_GetType((Object *)pBStack_5,(MethodInfo *)0x0);
  in_stack_4 = (MethodInfo **)TypeRef__System__Single;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  pDVar9 = (Dictionary_2_System_Object_System_Object_ *)
           mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)in_stack_4,(MethodInfo *)0x0);
  pIVar6 = (Int32__Array__Class *)TypeInfo__System__Single;
  pIVar14 = TypeRef__System__Int32;
  unaff_ESI = pBStack_5;
  if (from != pDVar9) {
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Type);
    }
    pDVar9 = (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar14,(MethodInfo *)0x0);
    pIVar6 = TypeInfo__System__Int32;
    pIVar14 = TypeRef__System__Byte;
    if (from == pDVar9) {
      from = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__System__Int32;
      if (pBStack_5 == (Byte__Array__Class *)0x0) goto code_?;
      iVar15 = func_?(pBStack_5,TypeInfo__System__Int32);
      pIVar16 = TypeInfo__System__Int32;
      if (iVar15 == 0) goto code_?;
      from = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__System__Int32;
      iVar15 = func_?(pBStack_5,TypeInfo__System__Int32);
      pIVar6 = pIVar16;
      if (iVar15 == 0) goto code_?;
      iStack_17 = *(int32_t *)(iVar15 + 0xc);
      from = (Dictionary_2_System_Object_System_Object_ *)
             func_?(TypeInfo__System__Int32,iStack_17);
      pIVar6 = TypeInfo__System__Int32;
      pBStack_7 = (Byte__Array__Class *)TypeInfo__System__Int32;
      if ((Byte__Array__Class *)from == (Byte__Array__Class *)0x0) {
        pAStack_18 = (Array *)0x0;
        pBVar19 = pBStack_7;
      }
      else {
        pAStack_18 = (Array *)func_?(from,TypeInfo__System__Int32);
        unaff_ESI = (Byte__Array__Class *)from;
        pBVar19 = (Byte__Array__Class *)TypeInfo__System__Int32;
        if (pAStack_18 == (Array *)0x0) goto code_?;
      }
    }
    else {
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type);
      }
      pDVar9 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar14,(MethodInfo *)0x0);
      unaff_ESI = (Byte__Array__Class *)
                  TypeRef__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (from != pDVar9) {
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        pDVar9 = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)unaff_ESI,(MethodInfo *)0x0);
        if (from == pDVar9) {
          if (pBStack_5 == (Byte__Array__Class *)0x0) {
            pBVar19 = (Byte__Array__Class *)
                     HashtableFunctions_DeepCopyHashTable_1
                               ((Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
            unaff_ESI = pBStack_5;
          }
          else {
            pDVar9 = (Dictionary_2_System_Object_System_Object_ *)func_?();
            if (pDVar9 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
            pBVar19 = (Byte__Array__Class *)
                     HashtableFunctions_DeepCopyHashTable_1(pDVar9,(MethodInfo *)0x0);
            unaff_ESI = pBStack_5;
          }
        }
        else {
          if (from == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          bVar13 = mscorlib.dll::System::Type::Type_get_IsPrimitive((Type *)from,(MethodInfo *)0x0);
          pIVar14 = TypeRef__System__String;
          pBVar19 = pBStack_5;
          if (bVar13 == 0) {
            if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pDVar9 = (Dictionary_2_System_Object_System_Object_ *)
                     mscorlib.dll::System::Type::Type_GetTypeFromHandle
                               ((RuntimeTypeHandle)pIVar14,(MethodInfo *)0x0);
            unaff_ESI = (Byte__Array__Class *)pIVar14;
            if (from != pDVar9) {
              func_?();
              pOVar11 = (Object *)func_?();
              func_?();
              arg1 = mscorlib.dll::System::Object::Object_GetType(pOVar11,(MethodInfo *)0x0);
              pOVar11 = (Object *)func_?();
              message = mscorlib.dll::System::String::String_Concat
                                  (pOVar11,(Object *)arg1,(MethodInfo *)0x0);
              func_?();
              pBStack_5 = (Byte__Array__Class *)func_?();
              func_?();
              mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
                        ((ArgumentException *)pBStack_5,message,(MethodInfo *)0x0);
              func_?();
              func_?();
code_?:
              func_?(pBStack_5,
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
              unaff_ESI = pBStack_5;
              goto code_?;
            }
          }
        }
        goto code_?;
      }
      from = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__System__Byte;
      unaff_ESI = pBStack_5;
      if (pBStack_5 == (Byte__Array__Class *)0x0) goto code_?;
      iVar15 = func_?(pBStack_5,TypeInfo__System__Byte);
      if (iVar15 == 0) goto code_?;
      from = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__System__Byte;
      iVar15 = func_?(pBStack_5,TypeInfo__System__Byte);
      if (iVar15 == 0) goto code_?;
      iStack_17 = *(int32_t *)(iVar15 + 0xc);
      from = (Dictionary_2_System_Object_System_Object_ *)
             func_?(TypeInfo__System__Byte,iStack_17);
      pBStack_7 = TypeInfo__System__Byte;
      if (from == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pAStack_18 = (Array *)0x0;
        pBVar19 = pBStack_7;
        goto code_?;
      }
      pAStack_18 = (Array *)func_?(from,TypeInfo__System__Byte);
      pBVar19 = TypeInfo__System__Byte;
      if (pAStack_18 == (Array *)0x0) goto code_?;
    }
code_?:
    pBStack_7 = pBVar19;
    in_stack_4 = (MethodInfo **)func_?(pBStack_5,pBStack_7);
    unaff_ESI = pBStack_5;
    pIVar6 = (Int32__Array__Class *)pBStack_7;
    if ((MethodInfo *)in_stack_4 != (MethodInfo *)0x0) goto code_?;
    goto code_?;
  }
  from = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__System__Single;
  if (pBStack_5 == (Byte__Array__Class *)0x0) goto code_?;
  iVar15 = func_?(pBStack_5,TypeInfo__System__Single);
  pSVar20 = TypeInfo__System__Single;
  if (iVar15 == 0) goto code_?;
  from = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__System__Single;
  iVar15 = func_?(pBStack_5,TypeInfo__System__Single);
  pIVar6 = (Int32__Array__Class *)pSVar20;
  if (iVar15 == 0) goto code_?;
  iStack_17 = *(int32_t *)(iVar15 + 0xc);
  from = (Dictionary_2_System_Object_System_Object_ *)
         func_?(TypeInfo__System__Single,iStack_17);
  pIVar6 = (Int32__Array__Class *)TypeInfo__System__Single;
  pBStack_7 = (Byte__Array__Class *)TypeInfo__System__Single;
  if ((Byte__Array__Class *)from == (Byte__Array__Class *)0x0) {
    pAStack_18 = (Array *)0x0;
  }
  else {
    pAStack_18 = (Array *)func_?(from,TypeInfo__System__Single);
    unaff_ESI = (Byte__Array__Class *)from;
    if (pAStack_18 == (Array *)0x0) goto code_?;
  }
  pIVar6 = (Int32__Array__Class *)TypeInfo__System__Single;
  in_stack_4 = (MethodInfo **)func_?(pBStack_5,TypeInfo__System__Single);
  unaff_ESI = pBStack_5;
  pBStack_7 = (Byte__Array__Class *)pIVar6;
  if ((MethodInfo *)in_stack_4 == (MethodInfo *)0x0) goto code_?;
code_?:
  mscorlib.dll::System::Array::Array_Copy_2
            ((Array *)in_stack_4,pAStack_18,iStack_17,(MethodInfo *)0x0);
  pBVar19 = (Byte__Array__Class *)from;
  unaff_ESI = pBStack_5;
code_?:
  if (to == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__Add
            (to,pOVar11,(Object *)pBVar19,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
            );
  goto code_?;
}


/* Dictionary`2[System.Object,System.Object]
   DeepCopyHashTable(Dictionary`2[System.Object,System.Object]) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_DeepCopyHashTable_1
          (Dictionary_2_System_Object_System_Object_ *from,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)pDVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    pDVar1 = HashtableFunctions_DeepCopyHashTable(from,pDVar1,(MethodInfo *)0x0);
    return pDVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
  return pDVar1;
}


/* Dictionary`2[System.Object,System.Object]
   GetSettingsSubDictionary(Dictionary`2[System.Object,System.Object], List`1[System.String]) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_GetSettingsSubDictionary
          (Dictionary_2_System_Object_System_Object_ *data,List_1_System_String_ *subDictionaryPath,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  bVar2 = HashtableFunctions_TryGetSubDictionary
                    (&pDStack_1,data,subDictionaryPath,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pDVar3 = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)pDVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      return pDVar3;
    }
    func_?();
    pcVar4 = (code *)swi(3);
    pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar4)();
    return pDVar3;
  }
  return pDStack_1;
}


/* String PrettyString(Dictionary`2[System.Object,System.Object]) */

String * MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString
                   (Dictionary_2_System_Object_System_Object_ *dictionary,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_u000A);
    cRam_? = '\x01';
  }
  pSVar1 = HashtableFunctions_PrettyString_1(dictionary,0,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_u000A,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


/* String PrettyString(Dictionary`2[System.Object,System.Object], Int32) */

String * MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString_1
                   (Dictionary_2_System_Object_System_Object_ *dictionary,int32_t padLeft,
                   MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&StringLiteral__0____1_u000A);
    func_?(&StringLiteral__0_____1____2__u000A);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  pSVar4 = ::StringLiteral__;
  if (dictionary != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &pDStack_6,dictionary,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uVar7 = *(undefined8 *)&(pDVar5->_current).value;
    uStack_1 = 1;
    arg1 = (MethodInfo *)(pDVar5->_current).key;
    do {
      while( true ) {
        bVar8 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                           &stack0xffffffc0,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                          );
        if (bVar8 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffc0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,unaff_EDI);
          *unaff_FS_OFFSET = uStack_3;
          return pSVar4;
        }
        pOStack_9 = (Object *)uVar7;
        if ((((pOStack_9 != (Object *)0x0) &&
             ((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).typeHierarchyDepth <= (pOStack_9->klass->_1).typeHierarchyDepth)) &&
            ((Dictionary_2_System_Object_System_Object___Class *)
             (pOStack_9->klass->_1).typeHierarchy
             [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).typeHierarchyDepth - 1] ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) &&
           (pOStack_9 != (Object *)0x0)) break;
        if (::StringLiteral__ == (String *)0x0) goto code_?;
        pMVar10 = arg1;
        pSVar11 = mscorlib.dll::System::String::String_PadLeft
                           (::StringLiteral__,padLeft,(MethodInfo *)0x0);
        pSVar11 = mscorlib.dll::System::String::String_Format_2
                           (StringLiteral__0_____1____2__u000A,(Object *)pSVar11,(Object *)arg1,
                            pOStack_9,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Concat_3(pSVar4,pSVar11,(MethodInfo *)0x0);
        unaff_EDI = arg1;
        arg1 = pMVar10;
      }
      if (::StringLiteral__ == (String *)0x0) break;
      unaff_EDI = (MethodInfo *)
                  mscorlib.dll::System::String::String_PadLeft
                            (::StringLiteral__,padLeft,(MethodInfo *)0x0);
      pSVar11 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__0____1_u000A,(Object *)unaff_EDI,(Object *)arg1,
                          (MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_3(pSVar4,pSVar11,(MethodInfo *)0x0);
      if (pOStack_9 == (Object *)0x0) {
        dictionary_00 = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        dictionary_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        if (dictionary_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
          func_?();
          break;
        }
      }
      pSVar11 = HashtableFunctions_PrettyString_1(dictionary_00,padLeft + 1,(MethodInfo *)0x0);
      arg1 = (MethodInfo *)0x0;
      pSVar4 = mscorlib.dll::System::String::String_Concat_3(pSVar4,pSVar11,(MethodInfo *)0x0);
    } while( true );
  }
code_?:
  uVar12 = func_?();
  func_?(uVar12);
  pcVar13 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar13)();
  return pSVar4;
}


/* Boolean TryGetSubDictionary(Dictionary`2[System.Object,System.Object] ByRef,
   Dictionary`2[System.Object,System.Object], List`1[System.String]) */

bool MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_TryGetSubDictionary
               (Dictionary_2_System_Object_System_Object_ **subDictionary,
               Dictionary_2_System_Object_System_Object_ *data,
               List_1_System_String_ *subDictionaryPath,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_);
    cRam_? = '\x01';
  }
  index = 0;
  this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)data;
  if (subDictionaryPath != (List_1_System_String_ *)0x0) {
    while( true ) {
      if ((subDictionaryPath->fields)._size <= index) {
        *subDictionary = (Dictionary_2_System_Object_System_Object_ *)this;
        func_?(subDictionary,this);
        return 1;
      }
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         subDictionaryPath,index,
                         MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                        );
      if (this == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) break;
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this,(Object *)RVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar2 == 0) {
        *subDictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
        func_?();
        return 0;
      }
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         subDictionaryPath,index,
                         MethodInfo__System__Collections__Generic__List<System::String>__get_Item_int_
                        );
      subDictionary =
           (Dictionary_2_System_Object_System_Object_ **)
           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
      ;
      data = (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)RVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
      if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0;
        index = index + 1;
      }
      else {
        this = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)func_?();
        if (this == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
        goto code_?;
        index = index + 1;
      }
    }
  }
  func_?();
code_?:
  func_?(data,
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}

