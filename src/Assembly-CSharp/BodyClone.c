
/* Void Destroy() */

void Assembly-CSharp.dll::BodyClone::BodyClone_Destroy(BodyClone *this,MethodInfo *method)

{
  this = (BodyClone *)(this->fields).bodyAccessoriesController;
  if ((BodyAccessoriesController *)this != (BodyAccessoriesController *)0x0) {
    pDVar1 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)*unaff_FS_OFFSET;
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
    this_00 = (((BodyAccessoriesController *)this)->fields).accessoryLoader;
    ppAVar2 = &(((BodyAccessoriesController *)this)->fields).accessoryLoader;
    if (this_00 != (AccessoryLoader *)0x0) {
      Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
      AccessoryLoader_Destroy(this_00,(MethodInfo *)0x0);
    }
    *ppAVar2 = (AccessoryLoader *)0x0;
    func_?(ppAVar2,0);
    this_01 = (Dictionary_2_System_UInt32_System_Object_ *)
              (((BodyAccessoriesController *)this)->fields).accessoryMap;
    if (this_01 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      DStack_3._getEnumeratorRetType = (int32_t)&UNK_?;
      pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         (&DStack_4,this_01,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                         );
      DStack_3._dictionary = pDVar1->_dictionary;
      DStack_3._version = pDVar1->_version;
      DStack_3._index = pDVar1->_index;
      DStack_3._current.key = (pDVar1->_current).key;
      DStack_3._16_8_ = *(undefined8 *)&(pDVar1->_current).value;
      while( true ) {
        pDVar1 = &DStack_3;
        bVar5 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (pDVar1,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                          );
        if (bVar5 == 0) break;
        if ((Component *)DStack_3._current.value == (Component *)0x0) goto code_?;
        unaff_retaddr =
             (MethodInfo *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)DStack_3._current.value,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this = (BodyClone *)0x0;
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)unaff_retaddr,(MethodInfo *)0x0);
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_3,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                 ,unaff_retaddr);
      (this->fields)._.m_CancellationTokenSource = (CancellationTokenSource *)0x0;
      func_?();
      this[1].klass = (BodyClone__Class *)0x0;
      func_?();
    }
    *unaff_FS_OFFSET = pDVar1;
    return;
  }
code_?:
  func_?();
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
      value = (BodyAccessoriesController *)func_?(TypeInfo__BodyAccessoriesController);
      if (cRam_? == '\0') {
        func_?(&
                        TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Dictionary__
                       );
        func_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>
                       );
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
      Int32Enum,GamePassesHighScoreList+HighScoreListData]::
      Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Dictionary__
                );
      ppDVar2 = &(value->fields).accessoryMap;
      *ppDVar2 = (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)this_00;
      func_?(ppDVar2);
      this_01 = (AccessoryLoader *)
                func_?(
                               TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader
                               );
      Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::AccessoryLoader__ctor
                (this_01,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)&(value->fields).accessoryLoader;
      *(AccessoryLoader **)method_00 = this_01;
      func_?(method_00,this_01);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)value,ExceptionArgument__Enum_obj,method_00);
      (value->fields).bodyWoId = bodyWoId;
      ppBVar3 = &(value->fields).bodyData;
      *ppBVar3 = (BodyData *)this_00;
      func_?(ppBVar3,this_00);
      ppDVar4 = &(value->fields).accessoryData;
      *ppDVar4 = accessoryData;
      func_?(ppDVar4,accessoryData);
      (value->fields).accessoriesVisible = 1;
      ppBVar5 = &(this->fields).bodyAccessoriesController;
      *ppBVar5 = value;
      func_?();
      if (*ppBVar5 != (BodyAccessoriesController *)0x0) {
        BodyAccessoriesController::BodyAccessoriesController_set_AccessoryMoveOverride
                  (*ppBVar5,1,(MethodInfo *)0x0);
        if (*ppBVar5 != (BodyAccessoriesController *)0x0) {
          BodyAccessoriesController::BodyAccessoriesController_RefreshAccessories
                    (*ppBVar5,accessoryData,(MethodInfo *)0x0);
          return;
        }
      }
    }
    func_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
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
    ppDVar1 = &(this_01->fields).accessoryData;
    pOStack_2 = (Object__Class *)0x0;
    DStack_3._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
    DStack_3._version = 0;
    DStack_3._index = 0;
    DStack_3._current.key = (Object *)0x0;
    *ppDVar1 = accessoryData;
    DStack_3._current.value = (Object *)0x0;
    DStack_3._getEnumeratorRetType = 0;
    func_?(ppDVar1,accessoryData);
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
      DStack_6._dictionary = pDVar5->_dictionary;
      DStack_6._version = pDVar5->_version;
      DStack_6._index = pDVar5->_index;
      DStack_6._current.key = (pDVar5->_current).key;
      DStack_6._current.value = (pDVar5->_current).value;
      DStack_6._getEnumeratorRetType = pDVar5->_getEnumeratorRetType;
      while (bVar7 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               (&DStack_6,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                               ), bVar7 != 0) {
        bVar7 = BodyAccessoriesController::BodyAccessoriesController_IsAccessoryInWoData
                          (this_01,(AvatarAccessory *)DStack_6._current.value,(MethodInfo *)0x0);
        if (bVar7 == 0) {
          if (pMVar4 == (MethodInfo *)0x0) goto code_?;
          method_00 = pMVar4;
          func_?();
        }
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                 ,method_00);
      if (pMVar4 != (MethodInfo *)0x0) {
        pLVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                             *)&stack0xffffffb8,
                            (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            pMVar4,
                            MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__GetEnumerator__
                           );
        pOStack_2 = (Object__Class *)pLVar8->_list;
        key = pLVar8->_current;
        this = (BodyClone *)this_01;
        while (bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text
                       ::RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                                 ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)&pOStack_2,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__MoveNext__
                                 ), bVar7 != 0) {
          RVar9 = key;
          if (cRam_? == '\0') {
            func_?();
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pDVar10 = (this_01->fields).accessoryMap;
          if (((pDVar10 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) ||
              (unaff_EBP = 
               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
              , this_03 = (AvatarAccessory *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar10,
                                     (Int32Enum__Enum)key,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                    ), this_03 == (AvatarAccessory *)0x0)) ||
             (in_stack_11 =
                   (MethodInfo *)
                   AvatarAccessory::AvatarAccessory_get_Transform(this_03,(MethodInfo *)0x0),
             in_stack_11 == (MethodInfo *)0x0)) goto code_?;
          this = (BodyClone *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    ((Transform *)in_stack_11,(Transform *)0x0,(MethodInfo *)0x0);
          pDVar10 = (this_01->fields).accessoryMap;
          if (pDVar10 == (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__Remove
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar10,
                     (Int32Enum__Enum)in_stack_11,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__Remove_MV__Common__AccessorySlotType_
                    );
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_03,(MethodInfo *)0x0);
          key = RVar9;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
            key = RVar9;
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
          pAVar12 = (AvatarAccessoryData__Enum__Class *)0x7;
code_?:
          while( true ) {
            while( true ) {
              bVar7 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                      Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                (&DStack_3,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                                );
              if (bVar7 == 0) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)&DStack_3,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,in_stack_11);
                *unaff_FS_OFFSET = this_04;
                return;
              }
              pSVar13 = (String *)0x0;
              iVar14 = -1;
              if ((String *)DStack_3._current.key != (String *)0x0) {
                if ((String__Class *)(DStack_3._current.key)->klass == TypeInfo__System__String) {
                  pSVar13 = (String *)DStack_3._current.key;
                }
                if (pSVar13 == (String *)0x0) goto code_?;
              }
              bVar7 = mscorlib.dll::System::Int32::Int32_TryParse
                                (pSVar13,(int32_t *)&stack0xffffffe4,(MethodInfo *)0x0);
              if (bVar7 != 0) break;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              in_stack_11 = (MethodInfo *)&UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_Failed_to_parse_slot,(MethodInfo *)0x0);
            }
            value = (AccessoryLoader *)func_?();
            this_04 = value;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)pAVar12);
            if (value == (AccessoryLoader *)0x0) break;
            (value->fields).requests =
                 (Dictionary_2_System_Int32_Assets_Scripts_WorldObjectTypes_Avatar_Accessories_AccessoryLoader_Request_
                  *)&UNK_?;
            func_?();
            (value->fields).id = iVar14;
            bVar15 = (
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    ->_1).naturalAligment;
            if ((*(byte *)(_UNK_? + 0xb8) < bVar15) ||
               (*(Dictionary_2_System_Object_System_Object___Class **)
                 (*(int *)(_UNK_? + 100) + -4 + (uint)bVar15 * 4) !=
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
            goto code_?;
            pAVar12 = TypeInfo__MV__Common__AvatarAccessoryData;
            pEVar16 = (Enum *)func_?();
            pSVar13 = mscorlib.dll::System::Enum::Enum_ToString_2
                               (pEVar16,StringLiteral_d,(MethodInfo *)0x0);
            TVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Object,UnityEngine::UIElements::TextureId]::
                     Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                               ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                                &UNK_?,(Object *)pSVar13,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (TVar17.m_Index != 0) {
              TVar18.m_Index = (int32_t)(String *)0x0;
              if (*(String__Class **)TVar17.m_Index == TypeInfo__System__String) {
                TVar18 = TVar17;
              }
              TVar17.m_Index = TVar18.m_Index;
              if ((String *)TVar18.m_Index != (String *)0x0) goto code_?;
              goto code_?;
            }
code_?:
            if (_UNK_? == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) break;
            bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Single]::
                    Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                              ((Dictionary_2_System_Int32Enum_System_Single_ *)_UNK_?,
                               (value->fields).id,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                              );
            if (bVar7 != 0) {
              if ((_UNK_? != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) &&
                 (pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      (_UNK_?,(value->fields).id,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                      ), pOVar19 != (Object *)0x0)) {
                bVar7 = mscorlib.dll::System::String::String_op_Inequality
                                  ((String *)pOVar19[2].klass,(String *)TVar17.m_Index,
                                   (MethodInfo *)0x0);
                if (bVar7 != 0) goto code_?;
                if (_UNK_? != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0)
                goto code_?;
              }
              break;
            }
code_?:
            this_04 = _UNK_?;
            pAVar12 = (AvatarAccessoryData__Enum__Class *)func_?();
            pMVar4 = 
            MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
            ;
            DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
            Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
            __Il2CppFullySharedGenericType]::
            DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                      ((DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                        *)pAVar12,(Object *)value,
                       MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
                       ,(MethodInfo *)0x0);
            if (this_04 == (AccessoryLoader *)0x0) break;
            Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
            AccessoryLoader_LoadAccessory
                      (this_04,(String *)pMVar4,(Action_1_AvatarAccessory_ *)pAVar12,
                       (MethodInfo *)0x0);
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
code_?:
  bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]
          ::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                    ((Dictionary_2_System_Int32Enum_System_Single_ *)_UNK_?,
                     (value->fields).id,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                    );
  if (bVar7 != 0) {
    if (_UNK_? == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) goto code_?;
    this_04 = (AccessoryLoader *)(value->fields).id;
    pSVar13 = (String *)&UNK_?;
    pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        (_UNK_?,(Int32Enum__Enum)this_04,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                        );
    if (pOVar19 == (Object *)0x0) goto code_?;
    pAVar12 = (AvatarAccessoryData__Enum__Class *)pOVar19[2].klass;
    bVar7 = mscorlib.dll::System::String::String_op_Equality
                      ((String *)pAVar12,pSVar13,(MethodInfo *)0x0);
    this_02 = TypeInfo__MV__Common__AvatarAccessoryData;
    if (bVar7 != 0) {
      pEVar16 = (Enum *)func_?();
      pSVar13 = mscorlib.dll::System::Enum::Enum_ToString_2
                         (pEVar16,StringLiteral_d,(MethodInfo *)0x0);
      TVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
               UIElements::TextureId]::
               Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                         ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                          (Object *)pSVar13,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (TVar17.m_Index == 0) goto code_?;
      if (*(Il2CppClass **)(*(int *)TVar17.m_Index + 0x20) ==
          (TypeInfo__System__Single->_0).element_class) {
        pfVar21 = (float *)func_?();
        BodyAccessoriesController::BodyAccessoriesController_ApplyAccessoryOffset
                  ((BodyAccessoriesController *)&UNK_?,*pfVar21,(value->fields).id,
                   (MethodInfo *)0x0);
        pAVar12 = TypeInfo__MV__Common__AvatarAccessoryData;
        pEVar16 = (Enum *)func_?();
        pSVar13 = mscorlib.dll::System::Enum::Enum_ToString_2
                           (pEVar16,StringLiteral_d,(MethodInfo *)0x0);
        TVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                 ::UIElements::TextureId]::
                 Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                           ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)pAVar12,
                            (Object *)pSVar13,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (TVar17.m_Index == 0) goto code_?;
        if (*(Il2CppClass **)(*(int *)TVar17.m_Index + 0x20) ==
            (TypeInfo__System__Single->_0).element_class) {
          pfVar21 = (float *)func_?();
          pAVar12 = (AvatarAccessoryData__Enum__Class *)(value->fields).id;
          this_04 = (AccessoryLoader *)&UNK_?;
          BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
                    ((BodyAccessoriesController *)&UNK_?,*pfVar21,
                     (AccessorySlotType__Enum)pAVar12,(MethodInfo *)0x0);
          goto code_?;
        }
      }
code_?:
      func_?();
code_?:
      func_?();
code_?:
      func_?();
      pcVar20 = (code *)swi(3);
      (*pcVar20)();
      return;
    }
  }
  goto code_?;
}

