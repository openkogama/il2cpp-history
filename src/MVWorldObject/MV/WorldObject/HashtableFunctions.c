
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
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  puStack_8 = (undefined4 *)&stack0xffffffa4;
  puStack_4 = &stack0xffffffa4;
  if (from == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?(0);
    func_?();
    pcVar9 = (code *)swi(3);
    pDVar10 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar9)();
    return pDVar10;
  }
  puStack_8 = (undefined4 *)&stack0xffffffa4;
  puStack_4 = &stack0xffffffa4;
  pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
           Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                     ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                      &stack0xffffffb0,(Dictionary_2_WinningConditionType_System_Object_ *)from,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                     );
  auStack_6._0_4_ = pDVar11->dictionary;
  auStack_6._4_4_ = pDVar11->next;
  auStack_6._8_4_ = pDVar11->stamp;
  auStack_6._12_4_ = (pDVar11->current).key;
  auStack_6._16_4_ = (pDVar11->current).value;
  uStack_1 = 0;
  do {
    cVar12 = func_?();
    if (cVar12 == '\0') {
      *puStack_8 = 0x16b;
      uStack_1 = 0xffffffff;
      func_?();
      *unaff_FS_OFFSET = uStack_3;
      return to;
    }
    KStack_7 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                          ((LevelRewardsManager *)auStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                          );
    pOVar13 = (Object *)func_?();
    if (pOVar13 == (Object *)0x0) goto code_?;
    this = (MVWorldObjectClient *)
           mscorlib.dll::System::Object::Object_GetType(pOVar13,in_stack_14);
    pIVar15 = TypeRef__System__Single;
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    in_stack_14 = (MethodInfo *)&UNK_?;
    pMVar16 = (MVWorldObjectClient *)
             mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)pIVar15,(MethodInfo *)0x0);
    pIVar15 = TypeRef__System__Int32;
    if (this == pMVar16) {
      uVar17 = func_?(&KStack_7,
                              MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                             );
      iVar18 = func_?(uVar17,TypeInfo__System__Single);
      if (iVar18 == 0) goto code_?;
      iVar18 = func_?(uVar17,TypeInfo__System__Single);
      length = *(int32_t *)(iVar18 + 0xc);
      pDVar10 = (Dictionary_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__Single,length);
      uVar17 = func_?(&KStack_7,
                              MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                             );
      pAStack_19 = (Array *)func_?(pDVar10,TypeInfo__System__Single);
      sourceArray = (Array *)func_?(uVar17,TypeInfo__System__Single);
code_?:
      mscorlib.dll::System::Array::Array_Copy(sourceArray,pAStack_19,length,(MethodInfo *)0x0);
    }
    else {
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pMVar16 = (MVWorldObjectClient *)
               mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar15,(MethodInfo *)0x0);
      pIVar15 = TypeRef__System__Byte;
      if (this == pMVar16) {
        uVar17 = func_?(&KStack_7,
                                MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                               );
        iVar18 = func_?(uVar17,TypeInfo__System__Int32);
        if (iVar18 != 0) {
          iVar18 = func_?(uVar17,TypeInfo__System__Int32);
          length = *(int32_t *)(iVar18 + 0xc);
          pDVar10 = (Dictionary_2_System_Object_System_Object_ *)
                    func_?(TypeInfo__System__Int32,length);
          uVar17 = func_?(&KStack_7,
                                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                                 );
          pAStack_19 = (Array *)func_?(pDVar10,TypeInfo__System__Int32);
          sourceArray = (Array *)func_?(uVar17,TypeInfo__System__Int32);
          goto code_?;
        }
        goto code_?;
      }
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pMVar16 = (MVWorldObjectClient *)
               mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar15,(MethodInfo *)0x0);
      pIVar15 = TypeRef__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (this == pMVar16) {
        uVar17 = func_?(&KStack_7,
                                MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                               );
        iVar18 = func_?(uVar17,TypeInfo__System__Byte);
        if (iVar18 != 0) {
          iVar18 = func_?(uVar17,TypeInfo__System__Byte);
          length = *(int32_t *)(iVar18 + 0xc);
          pDVar10 = (Dictionary_2_System_Object_System_Object_ *)
                    func_?(TypeInfo__System__Byte,length);
          uVar17 = func_?(&KStack_7,
                                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                                 );
          pAStack_19 = (Array *)func_?(pDVar10,TypeInfo__System__Byte);
          sourceArray = (Array *)func_?(uVar17,TypeInfo__System__Byte);
          goto code_?;
        }
        goto code_?;
      }
      if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__Type->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__Type);
      }
      pMVar16 = (MVWorldObjectClient *)
               mscorlib.dll::System::Type::Type_GetTypeFromHandle
                         ((RuntimeTypeHandle)pIVar15,(MethodInfo *)0x0);
      if (this == pMVar16) {
        uVar17 = func_?(&KStack_7,
                                MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                               );
        pDVar10 = (Dictionary_2_System_Object_System_Object_ *)
                  func_?(uVar17,
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
        pDVar10 = HashtableFunctions_DeepCopyHashTable_1(pDVar10,(MethodInfo *)0x0);
      }
      else {
        if (this == (MVWorldObjectClient *)0x0) goto code_?;
        Assembly-CSharp.dll::MVWorldObjectClient::MVWorldObjectClient_UnSetupTierInventory
                  (this,(MethodInfo *)0x0);
        pIVar15 = TypeRef__System__String;
        if (extraout_AL == '\0') {
          if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Type->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar16 = (MVWorldObjectClient *)
                   mscorlib.dll::System::Type::Type_GetTypeFromHandle
                             ((RuntimeTypeHandle)pIVar15,(MethodInfo *)0x0);
          if (this != pMVar16) {
            pOVar13 = (Object *)func_?();
            if (pOVar13 != (Object *)0x0) {
              arg1 = mscorlib.dll::System::Object::Object_GetType(pOVar13,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?();
              }
              pSVar20 = mscorlib.dll::System::String::String_Concat
                                  ((Object *)StringLiteral_Type_not_handled_in_deepcopy_has,
                                   (Object *)arg1,(MethodInfo *)0x0);
              this_00 = (ArgumentException *)func_?();
              mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
                        (this_00,pSVar20,(MethodInfo *)0x0);
              func_?();
            }
            goto code_?;
          }
        }
        pDVar10 = (Dictionary_2_System_Object_System_Object_ *)func_?();
      }
    }
    pSVar20 = (String *)func_?();
    if (to == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)to,pSVar20,(CrossPlatformInputManager_VirtualButton *)pDVar10,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
  } while( true );
}


/* Dictionary`2[System.Object,System.Object]
   DeepCopyHashTable(Dictionary`2[System.Object,System.Object]) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_DeepCopyHashTable_1
          (Dictionary_2_System_Object_System_Object_ *from,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  pDVar1 = HashtableFunctions_DeepCopyHashTable(from,pDVar1,(MethodInfo *)0x0);
  return pDVar1;
}


/* String PrettyString(Dictionary`2[System.Object,System.Object]) */

String * MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString
                   (Dictionary_2_System_Object_System_Object_ *dictionary,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = HashtableFunctions_PrettyString_1(dictionary,0,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?();
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_2
                     (StringLiteral_u000A,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


/* String PrettyString(Dictionary`2[System.Object,System.Object], Int32) */

String * MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString_1
                   (Dictionary_2_System_Object_System_Object_ *dictionary,int32_t padLeft,
                   MethodInfo *method)

{
  pIStack_1 = (Il2CppClass *)0xffffffff;
  pIStack_2 = (Il2CppClass *)&DAT_?;
  iStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int32_t)&iStack_3;
  _Stack_14.dummy = &stack0xffffffa0;
  _Var4.dummy = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    _Var4 = _Stack_14;
  }
  _Stack_14 = _Var4;
  auStack_4._16_4_ = (Object *)0x0;
  KStack_5.key = 0;
  KStack_5.value = 0;
  auStack_4._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_4._4_4_ = (Dictionary_2_System_Object_System_Object___Class *)0x0;
  auStack_4._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_4._12_4_ = 0;
  func_?();
  pOVar6 = (Object__Array *)::StringLiteral__;
  pOStack_7 = (Object__Array *)::StringLiteral__;
  pLStack_8 = (Link__Array *)&stack0xffffffa0;
  _Stack_14.dummy = &stack0xffffffa0;
  if (dictionary == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?(0);
    func_?();
    pcVar9 = (code *)swi(3);
    pSVar10 = (String *)(*pcVar9)();
    return pSVar10;
  }
  pLStack_8 = (Link__Array *)&stack0xffffffa0;
  _Stack_14.dummy = &stack0xffffffa0;
  pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
           Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                     ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                      &pDStack_12,(Dictionary_2_WinningConditionType_System_Object_ *)dictionary,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                     );
  auStack_4._0_4_ = pDVar11->dictionary;
  auStack_4._4_4_ = pDVar11->next;
  auStack_4._8_4_ = pDVar11->stamp;
  auStack_4._12_4_ = (pDVar11->current).key;
  auStack_4._16_4_ = (pDVar11->current).value;
  pIStack_1 = (Il2CppClass *)0x0;
code_?:
  do {
    cVar13 = func_?();
    if (cVar13 == '\0') {
      pLStack_8->klass = (Link__Array__Class *)0xae;
      pIStack_1 = (Il2CppClass *)0xffffffff;
      func_?();
      *unaff_FS_OFFSET = iStack_3;
      return (String *)pOVar6;
    }
    KStack_5 = Assembly-CSharp.dll::LevelRewardsManager::LevelRewardsManager_get_NextReward
                          ((LevelRewardsManager *)auStack_4,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                          );
    pDStack_12 = (Dictionary_2_WinningConditionType_System_Object_ *)&KStack_5;
    piVar14 = (int *)func_?();
    if (piVar14 != (int *)0x0) {
      bVar15 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((*(byte *)(*piVar14 + 0xb8) < bVar15) ||
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*piVar14 + 100) + -4 + (uint)bVar15 * 4) !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      piVar17 = (int *)0x0;
      if (bVar16) {
        piVar17 = piVar14;
      }
      if (piVar17 != (int *)0x0) {
        if (::StringLiteral__ == (String *)0x0) goto code_?;
        pSVar10 = mscorlib.dll::System::String::String_PadLeft
                           (::StringLiteral__,padLeft,(MethodInfo *)0x0);
        pOVar18 = (Object *)func_?();
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        pSVar10 = mscorlib.dll::System::String::String_Format_1
                           (StringLiteral__0____1_u000A,(Object *)pSVar10,pOVar18,(MethodInfo *)0x0);
        pOVar6 = (Object__Array *)
                  mscorlib.dll::System::String::String_Concat_2
                            ((String *)pOVar6,pSVar10,(MethodInfo *)0x0);
        auStack_4._0_4_ = &KStack_5;
        auStack_4._4_4_ =
             MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
        ;
        pOStack_7 = pOVar6;
        auStack_4._0_4_ = func_?();
        auStack_4._4_4_ =
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        dictionary_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
        pSVar10 = HashtableFunctions_PrettyString_1(dictionary_00,padLeft + 1,(MethodInfo *)0x0);
        pOVar6 = (Object__Array *)
                  mscorlib.dll::System::String::String_Concat_2
                            ((String *)pOVar6,pSVar10,(MethodInfo *)0x0);
        pOStack_7 = pOVar6;
        goto code_?;
      }
    }
    if (::StringLiteral__ == (String *)0x0) goto code_?;
    pSVar10 = mscorlib.dll::System::String::String_PadLeft
                       (::StringLiteral__,padLeft,(MethodInfo *)0x0);
    _Stack_1c.dummy = (void *)func_?();
    pOVar18 = (Object *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar10 = mscorlib.dll::System::String::String_Format_2
                       (StringLiteral__0_____1____2__u000A,(Object *)pSVar10,
                        (Object *)_Stack_1c.typeHandle,pOVar18,(MethodInfo *)0x0);
    pOVar6 = (Object__Array *)
              mscorlib.dll::System::String::String_Concat_2
                        ((String *)pOVar6,pSVar10,(MethodInfo *)0x0);
    pOStack_7 = pOVar6;
  } while( true );
}

