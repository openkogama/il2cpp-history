
/* Void Destroy() */

void Assembly-CSharp.dll::BodyClone::BodyClone_Destroy(BodyClone *this,MethodInfo *method)

{
  pBVar1 = (this->fields).bodyAccessoriesController;
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    pDVar2 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)*unaff_FS_OFFSET;
    *unaff_FS_OFFSET = &stack0xfffffff0;
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    DStack_3._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
    DStack_3._version = 0;
    DStack_3._index = 0;
    DStack_3._current.key = 0;
    DStack_3._current.value = (Object *)0x0;
    DStack_3._getEnumeratorRetType = 0;
    if ((pBVar1->fields).accessoryLoader != (AccessoryLoader *)0x0) {
      Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
      AccessoryLoader_Destroy((pBVar1->fields).accessoryLoader,(MethodInfo *)0x0);
    }
    (pBVar1->fields).accessoryLoader = (AccessoryLoader *)0x0;
    func_?(&(pBVar1->fields).accessoryLoader,0);
    if ((pBVar1->fields).accessoryMap !=
        (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
      pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         (&DStack_4,
                          (Dictionary_2_System_UInt32_System_Object_ *)(pBVar1->fields).accessoryMap
                          ,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                         );
      puStack_5 = (undefined *)0x0;
      DStack_3._dictionary = pDVar2->_dictionary;
      DStack_3._version = pDVar2->_version;
      DStack_3._index = pDVar2->_index;
      DStack_3._current.key = (pDVar2->_current).key;
      DStack_3._16_8_ = *(undefined8 *)&(pDVar2->_current).value;
      while( true ) {
        pDVar2 = &DStack_3;
        bVar6 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (pDVar2,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                          );
        if (bVar6 == 0) break;
        if ((Component *)DStack_3._current.value == (Component *)0x0) goto code_?;
        unaff_retaddr =
             (MethodInfo *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)DStack_3._current.value,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)unaff_retaddr,(MethodInfo *)0x0);
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_3,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                 ,unaff_retaddr);
      (pBVar1->fields).accessoryMap =
           (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0;
      func_?();
      (pBVar1->fields).accessoryData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      func_?();
    }
    *unaff_FS_OFFSET = pDVar2;
    return;
  }
code_?:
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Initialize(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BodyClone::BodyClone_Initialize
               (BodyClone *this,int32_t bodyWoId,
               Dictionary_2_System_Object_System_Object_ *accessoryData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BodyAccessoriesController);
    func_?(&MVBodyObject_MethodInfo__UnityEngine__Component__GetComponent<MVBodyObject>__);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Failed_to_get_MVBodyObject);
    cRam_? = '\x01';
  }
  x = (Object_1 *)
      UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                ((Component *)this,
                 MVBodyObject_MethodInfo__UnityEngine__Component__GetComponent<MVBodyObject>__);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    (x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (x != (Object_1 *)0x0) {
      bodyData = x[3].klass;
      pBVar2 = (BodyAccessoriesController *)func_?();
      BodyAccessoriesController::BodyAccessoriesController__ctor
                (pBVar2,bodyWoId,(BodyData *)bodyData,accessoryData,1,(MethodInfo *)0x0);
      (this->fields).bodyAccessoriesController = pBVar2;
      func_?(&(this->fields).bodyAccessoriesController,pBVar2);
      pBVar2 = (this->fields).bodyAccessoriesController;
      if (pBVar2 != (BodyAccessoriesController *)0x0) {
        BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                  (pBVar2,1,(MethodInfo *)0x0);
        pBVar2 = (this->fields).bodyAccessoriesController;
        if (pBVar2 != (BodyAccessoriesController *)0x0) {
          BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                    (pBVar2,accessoryData,(MethodInfo *)0x0);
          return;
        }
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
            ((Object *)StringLiteral_Failed_to_get_MVBodyObject,(MethodInfo *)0x0);
  return;
}


/* Void RefreshAccessories(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BodyClone::BodyClone_RefreshAccessories
               (BodyClone *this,Dictionary_2_System_Object_System_Object_ *accessoryData,
               MethodInfo *method)

{
  this_01 = (this->fields).bodyAccessoriesController;
  if (this_01 != (BodyAccessoriesController *)0x0) {
    *unaff_FS_OFFSET = &stack0xfffffff0;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Action<AvatarAccessory>);
      func_?(&TypeInfo__MV__Common__AvatarAccessoryData);
      func_?(&TypeInfo__UnityEngine__Debug);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Key__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__Add_MV__Common__AccessorySlotType_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__GetEnumerator__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__List__
                     );
      func_?(&TypeInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>);
      func_?(&TypeInfo__System__Single);
      func_?(&TypeInfo__System__String);
      func_?(&
                      MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
                     );
      func_?(&TypeInfo__BodyAccessoriesController____c__DisplayClass25_0);
      func_?(&StringLiteral_Failed_to_parse_slot);
      func_?(&StringLiteral_d);
      cRam_? = '\x01';
    }
    DStack_1._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
    DStack_1._version = 0;
    DStack_1._index = 0;
    DStack_1._current.key = 0;
    (this_01->fields).accessoryData = accessoryData;
    DStack_1._current.value = (Object *)0x0;
    DStack_1._getEnumeratorRetType = 0;
    pOStack_2 = (Object__Class *)0x0;
    DStack_3._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
    DStack_3._version = 0;
    DStack_3._index = 0;
    DStack_3._current.key = (Object *)0x0;
    DStack_3._current.value = (Object *)0x0;
    DStack_3._getEnumeratorRetType = 0;
    func_?(&(this_01->fields).accessoryData,accessoryData);
    pMVar4 = (MethodInfo *)
             func_?(
                            TypeInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>
                            );
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pMVar4,
               MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__List__
              );
    this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this_01->fields).accessoryMap;
    if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      method_00 = pMVar4;
      pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                          &stack0xffffffb0,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                         );
      DStack_1._dictionary = pDVar5->_dictionary;
      DStack_1._version = pDVar5->_version;
      DStack_1._index = pDVar5->_index;
      DStack_1._current.key = (pDVar5->_current).key;
      DStack_1._16_8_ = *(undefined8 *)&(pDVar5->_current).value;
      while (bVar6 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               (&DStack_1,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                               ), bVar6 != 0) {
        bVar6 = BodyAccessoriesController::BodyAccessoriesController_IsAccessoryInWoData
                          (this_01,(AvatarAccessory *)DStack_1._current.value,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          if (pMVar4 == (MethodInfo *)0x0) goto code_?;
          method_00 = pMVar4;
          func_?();
        }
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_1,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                 ,method_00);
      if (pMVar4 != (MethodInfo *)0x0) {
        pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                             *)&stack0xffffffb8,
                            (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            pMVar4,
                            MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__GetEnumerator__
                           );
        pOStack_2 = (Object__Class *)pLVar7->_list;
        key = pLVar7->_current;
        this = (BodyClone *)this_01;
        while (bVar6 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text
                       ::RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                 ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)&pOStack_2,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__MoveNext__
                                 ), bVar6 != 0) {
          RVar8 = key;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pDVar9 = (this_01->fields).accessoryMap;
          if (((pDVar9 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
              (unaff_EBP = 
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
              , this_03 = (AvatarAccessory *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,
                                     (Int32Enum__Enum)key,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                    ), this_03 == (AvatarAccessory *)0x0)) ||
             (in_stack_10 =
                   (MethodInfo *)
                   AvatarAccessory::AvatarAccessory_get_Transform(this_03,(MethodInfo *)0x0),
             in_stack_10 == (MethodInfo *)0x0)) goto code_?;
          this = (BodyClone *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    ((Transform *)in_stack_10,(Transform *)0x0,(MethodInfo *)0x0);
          pDVar9 = (this_01->fields).accessoryMap;
          if (pDVar9 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__Remove
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,
                     (Int32Enum__Enum)in_stack_10,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Remove_MV__Common__AccessorySlotType_
                    );
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_03,(MethodInfo *)0x0);
          key = RVar8;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
            key = RVar8;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
        }
        this_04 = (AccessoryLoader *)&UNK_?;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&pOStack_2,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__Dispose__
                   ,unaff_EBP);
        if (this[1].klass != (BodyClone__Class *)0x0) {
          pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                   Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                              &stack0xffffffb0,
                              (Dictionary_2_System_UInt32_System_Object_ *)this[1].klass,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                             );
          DStack_3._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar5->_dictionary;
          DStack_3._version = pDVar5->_version;
          DStack_3._index = pDVar5->_index;
          DStack_3._current.key = (Object *)(pDVar5->_current).key;
          DStack_3._16_8_ = *(undefined8 *)&(pDVar5->_current).value;
          pAVar11 = (AvatarAccessoryData__Enum__Class *)0x7;
code_?:
          while( true ) {
            while( true ) {
              bVar6 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                      Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                (&DStack_3,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                );
              if (bVar6 == 0) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)&DStack_3,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,in_stack_10);
                *unaff_FS_OFFSET = this_04;
                return;
              }
              pSVar12 = (String *)0x0;
              iVar13 = -1;
              if ((String *)DStack_3._current.key != (String *)0x0) {
                if ((String__Class *)(DStack_3._current.key)->klass == TypeInfo__System__String) {
                  pSVar12 = (String *)DStack_3._current.key;
                }
                if (pSVar12 == (String *)0x0) goto code_?;
              }
              pOVar14 = DStack_3._current.value;
              bVar6 = mscorlib.dll::System::Int32::Int32_TryParse
                                (pSVar12,(int32_t *)&stack0xffffffe4,(MethodInfo *)0x0);
              if (bVar6 != 0) break;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              in_stack_10 = (MethodInfo *)&UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_Failed_to_parse_slot,(MethodInfo *)0x0);
            }
            value = (AccessoryLoader *)func_?();
            this_04 = value;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)pAVar11);
            if (value == (AccessoryLoader *)0x0) break;
            (value->fields).requests =
                 (Dictionary_2_System_Int32_Assets_Scripts_WorldObjectTypes_Avatar_Accessories_AccessoryLoader_Request_
                  *)&UNK_?;
            func_?();
            (value->fields).id = iVar13;
            if (pOVar14 != (Object *)0x0) {
              accessoryData = (Dictionary_2_System_Object_System_Object_ *)func_?();
              if (accessoryData != (Dictionary_2_System_Object_System_Object_ *)0x0)
              goto code_?;
              goto code_?;
            }
            accessoryData = (Dictionary_2_System_Object_System_Object_ *)0x0;
code_?:
            pAVar11 = TypeInfo__MV__Common__AvatarAccessoryData;
            pEVar15 = (Enum *)func_?();
            pSVar12 = mscorlib.dll::System::Enum::Enum_ToString_2
                               (pEVar15,StringLiteral_d,(MethodInfo *)0x0);
            if (accessoryData == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
            TVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                               accessoryData,(Object *)pSVar12,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
            if (TVar16.m_Index != 0) {
              TVar17.m_Index = (int32_t)(String *)0x0;
              if (*(String__Class **)TVar16.m_Index == TypeInfo__System__String) {
                TVar17 = TVar16;
              }
              TVar16.m_Index = TVar17.m_Index;
              if ((String *)TVar17.m_Index != (String *)0x0) goto code_?;
              goto code_?;
            }
code_?:
            if (_UNK_? == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) break;
            bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Single]::
                    Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                              ((Dictionary_2_System_Int32Enum_System_Single_ *)_UNK_?,
                               (value->fields).id,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                              );
            if (bVar6 != 0) {
              if ((_UNK_? != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) &&
                 (pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      (_UNK_?,(value->fields).id,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                      ), pOVar14 != (Object *)0x0)) {
                bVar6 = mscorlib.dll::System::String::String_op_Inequality
                                  ((String *)pOVar14[2].klass,(String *)TVar16.m_Index,
                                   (MethodInfo *)0x0);
                if (bVar6 != 0) goto code_?;
                if (_UNK_? != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)
                goto code_?;
              }
              break;
            }
code_?:
            this_04 = _UNK_?;
            pAVar11 = (AvatarAccessoryData__Enum__Class *)func_?();
            pMVar4 = 
            MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
            ;
            DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
            Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      ((DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                        *)pAVar11,(Object *)value,
                       MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
                       ,(MethodInfo *)0x0);
            if (this_04 == (AccessoryLoader *)0x0) break;
            Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
            AccessoryLoader_LoadAccessory
                      (this_04,(String *)pMVar4,(Action_1_AvatarAccessory_ *)pAVar11,
                       (MethodInfo *)0x0);
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
code_?:
  bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]
          ::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                    ((Dictionary_2_System_Int32Enum_System_Single_ *)_UNK_?,
                     (value->fields).id,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                    );
  if (bVar6 != 0) {
    if (_UNK_? == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) goto code_?;
    this_04 = (AccessoryLoader *)(value->fields).id;
    pSVar12 = (String *)&UNK_?;
    pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        (_UNK_?,(Int32Enum__Enum)this_04,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                        );
    if (pOVar14 == (Object *)0x0) goto code_?;
    pAVar11 = (AvatarAccessoryData__Enum__Class *)pOVar14[2].klass;
    bVar6 = mscorlib.dll::System::String::String_op_Equality
                      ((String *)pAVar11,pSVar12,(MethodInfo *)0x0);
    this_02 = TypeInfo__MV__Common__AvatarAccessoryData;
    if (bVar6 != 0) {
      pEVar15 = (Enum *)func_?();
      pSVar12 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar15,StringLiteral_d,(MethodInfo *)0x0)
      ;
      TVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                         (Object *)pSVar12,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar16.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar16.m_Index + 0x20) ==
          (TypeInfo__System__Single->_0).element_class) {
        pfVar19 = (float *)func_?();
        BodyAccessoriesController::BodyAccessoriesController_ApplyAccessoryOffset
                  ((BodyAccessoriesController *)&UNK_?,*pfVar19,(value->fields).id,
                   (MethodInfo *)0x0);
        pAVar11 = TypeInfo__MV__Common__AvatarAccessoryData;
        pEVar15 = (Enum *)func_?();
        pSVar12 = mscorlib.dll::System::Enum::Enum_ToString_2
                           (pEVar15,StringLiteral_d,(MethodInfo *)0x0);
        TVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pAVar11,
                           (Object *)pSVar12,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
        if (TVar16.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar16.m_Index + 0x20) ==
            (TypeInfo__System__Single->_0).element_class) {
          pfVar19 = (float *)func_?();
          pAVar11 = (AvatarAccessoryData__Enum__Class *)(value->fields).id;
          this_04 = (AccessoryLoader *)&UNK_?;
          BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
                    ((BodyAccessoriesController *)&UNK_?,*pfVar19,
                     (AccessorySlotType__Enum)pAVar11,(MethodInfo *)0x0);
          goto code_?;
        }
      }
code_?:
      func_?();
code_?:
      func_?();
code_?:
      func_?();
      pcVar18 = (code *)swi(3);
      (*pcVar18)();
      return;
    }
  }
  goto code_?;
}

