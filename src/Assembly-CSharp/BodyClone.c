
/* Void Destroy() */

void Assembly-CSharp.dll::BodyClone::BodyClone_Destroy(BodyClone *this,MethodInfo *method)

{
  pBVar1 = (this->fields).bodyAccessoriesController;
  if (pBVar1 != (BodyAccessoriesController *)0x0) {
    this_00 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
              *unaff_FS_OFFSET;
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
    DStack_2._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
    DStack_2._version = 0;
    DStack_2._index = 0;
    DStack_2._current.key = 0;
    DStack_2._current.value = (Object *)0x0;
    DStack_2._getEnumeratorRetType = 0;
    if ((pBVar1->fields).accessoryLoader != (AccessoryLoader *)0x0) {
      Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
      AccessoryLoader_Destroy((pBVar1->fields).accessoryLoader,(MethodInfo *)0x0);
    }
    (pBVar1->fields).accessoryLoader = (AccessoryLoader *)0x0;
    func_?(&(pBVar1->fields).accessoryLoader,0);
    if ((pBVar1->fields).accessoryMap !=
        (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0) {
      pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         (&DStack_4,
                          (Dictionary_2_System_Object_System_Object_ *)(pBVar1->fields).accessoryMap
                          ,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                         );
      puStack_5 = (undefined *)0x0;
      DStack_2._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3->_dictionary;
      DStack_2._version = pDVar3->_version;
      DStack_2._index = pDVar3->_index;
      DStack_2._current.key = (int32_t)(pDVar3->_current).key;
      DStack_2._16_8_ = *(undefined8 *)&(pDVar3->_current).value;
      while( true ) {
        this_00 = &DStack_2;
        bVar6 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                          );
        if (bVar6 == 0) break;
        if ((Component *)DStack_2._current.value == (Component *)0x0) goto code_?;
        unaff_retaddr =
             (MethodInfo *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)DStack_2._current.value,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)unaff_retaddr,(MethodInfo *)0x0);
      }
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_2,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                 ,unaff_retaddr);
      (pBVar1->fields).accessoryMap =
           (Dictionary_2_MV_Common_AccessorySlotType_AvatarAccessory_ *)0x0;
      func_?();
      (pBVar1->fields).accessoryData = (Dictionary_2_System_Object_System_Object_ *)0x0;
      func_?();
    }
    *unaff_FS_OFFSET = this_00;
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
      pBVar2 = (BodyAccessoriesController *)func_?();
      if (pBVar2 != (BodyAccessoriesController *)0x0) {
        BodyAccessoriesController::BodyAccessoriesController__ctor
                  (pBVar2,bodyWoId,(BodyData *)accessoryData,accessoryData,1,(MethodInfo *)0x0);
        (this->fields).bodyAccessoriesController = pBVar2;
        func_?(&(this->fields).bodyAccessoriesController);
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
    }
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
    DStack_1._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
    DStack_1._version = 0;
    DStack_1._index = 0;
    DStack_1._current.key = 0;
    (this_01->fields).accessoryData = accessoryData;
    DStack_1._current.value = (Object *)0x0;
    DStack_1._getEnumeratorRetType = 0;
    pDStack_2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData___Class *)0x0;
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
    if (pMVar4 != (MethodInfo *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)pMVar4,
                 MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__List__
                );
      this_00 = (Dictionary_2_System_Object_System_Object_ *)(this_01->fields).accessoryMap;
      if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        method_00 = pMVar4;
        pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                            &stack0xffffffb0,this_00,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                           );
        DStack_1._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar5->_dictionary;
        DStack_1._version = pDVar5->_version;
        DStack_1._index = pDVar5->_index;
        DStack_1._current.key = (int32_t)(pDVar5->_current).key;
        DStack_1._16_8_ = *(undefined8 *)&(pDVar5->_current).value;
        while (bVar6 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                       Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                                 (&DStack_1,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                                 ), bVar6 != 0) {
          bVar6 = BodyAccessoriesController::BodyAccessoriesController_IsAccessoryInWoData
                            (this_01,(AvatarAccessory *)DStack_1._current.value,(MethodInfo *)0x0);
          if (bVar6 == 0) {
            method_00 = pMVar4;
            mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Add
                      ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)pMVar4,
                       (RegexCharClass_SingleRange)
                       MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__Add_MV__Common__AccessorySlotType_
                       ,
                       MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__Add_MV__Common__AccessorySlotType_
                      );
          }
        }
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&DStack_1,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                   ,method_00);
        pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                             *)&stack0xffffffb8,
                            (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            pMVar4,
                            MethodInfo__System__Collections__Generic__List<MV::Common::AccessorySlotType>__GetEnumerator__
                           );
        pDStack_2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData___Class *)pLVar7->_list;
        key = pLVar7->_current;
        this = (BodyClone *)this_01;
        while( true ) {
          this_05 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)&pDStack_2;
          bVar6 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                            ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                              *)this_05,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__MoveNext__
                            );
          if (bVar6 == 0) break;
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
              , this_02 = (AvatarAccessory *)
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,
                                     (Int32Enum__Enum)key,
                                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                    ), this_02 == (AvatarAccessory *)0x0)) ||
             (in_stack_10 =
                   (MethodInfo *)
                   AvatarAccessory::AvatarAccessory_get_Transform(this_02,(MethodInfo *)0x0),
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
                          ((Component *)this_02,(MethodInfo *)0x0);
          key = RVar8;
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
            key = RVar8;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
        }
        this_06 = (AccessoryLoader *)&UNK_?;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&pDStack_2,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::Common::AccessorySlotType>__Dispose__
                   ,unaff_EBP);
        if ((Dictionary_2_System_Object_System_Object_ *)this[1].monitor !=
            (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                              &stack0xffffffb0,
                              (Dictionary_2_System_Object_System_Object_ *)this[1].monitor,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                             );
          DStack_3._dictionary = pDVar5->_dictionary;
          DStack_3._version = pDVar5->_version;
          DStack_3._index = pDVar5->_index;
          DStack_3._current.key = (pDVar5->_current).key;
          DStack_3._16_8_ = *(undefined8 *)&(pDVar5->_current).value;
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
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          ((Object *)&DStack_3,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                           ,in_stack_10);
                *unaff_FS_OFFSET = this_06;
                return;
              }
              pSVar11 = (String *)0x0;
              pMVar12 = (MonoBehaviour *)0xffffffff;
              if ((String *)DStack_3._current.key != (String *)0x0) {
                if ((String__Class *)(DStack_3._current.key)->klass == TypeInfo__System__String) {
                  pSVar11 = (String *)DStack_3._current.key;
                }
                if (pSVar11 == (String *)0x0) goto code_?;
              }
              pOVar13 = DStack_3._current.value;
              bVar6 = mscorlib.dll::System::Int32::Int32_TryParse
                                (pSVar11,(int32_t *)&stack0xffffffe4,(MethodInfo *)0x0);
              if (bVar6 != 0) break;
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              in_stack_10 = (MethodInfo *)&UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                        ((Object *)StringLiteral_Failed_to_parse_slot,(MethodInfo *)0x0);
            }
            this_03 = (TweenRunner_1_FloatTween_ *)func_?();
            if (this_03 == (TweenRunner_1_FloatTween_ *)0x0) break;
            UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
            TweenRunner_1_FloatTween___ctor(this_03,(MethodInfo *)0x0);
            (this_03->fields).m_Tween = (IEnumerator *)&UNK_?;
            func_?();
            (this_03->fields).m_CoroutineContainer = pMVar12;
            if (pOVar13 != (Object *)0x0) {
              accessoryData = (Dictionary_2_System_Object_System_Object_ *)func_?();
              if (accessoryData != (Dictionary_2_System_Object_System_Object_ *)0x0)
              goto code_?;
              goto code_?;
            }
            accessoryData = (Dictionary_2_System_Object_System_Object_ *)0x0;
code_?:
            pEVar14 = (Enum *)func_?();
            pDStack_2 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData___Class *)
                         &UNK_?;
            pSVar11 = mscorlib.dll::System::Enum::Enum_ToString_2
                               (pEVar14,StringLiteral_d,(MethodInfo *)0x0);
            if (accessoryData == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
            pSVar11 = (String *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (accessoryData,(Object *)pSVar11,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            if (pSVar11 != (String *)0x0) {
              pSVar15 = (String *)0x0;
              if (pSVar11->klass == TypeInfo__System__String) {
                pSVar15 = pSVar11;
              }
              pSVar11 = pSVar15;
              if (pSVar15 != (String *)0x0) goto code_?;
              goto code_?;
            }
code_?:
            if (this_05 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) break;
            bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,GUILoginHandler+PlanetData]::
                    Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                              (this_05,(Object *)(this_03->fields).m_CoroutineContainer,
                               MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                              );
            if (bVar6 != 0) {
              if ((this_05 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) &&
                 (pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__get_Item
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_05,
                                       (Int32Enum__Enum)(this_03->fields).m_CoroutineContainer,
                                       MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                                      ), pOVar13 != (Object *)0x0)) {
                bVar6 = mscorlib.dll::System::String::String_op_Inequality
                                  ((String *)pOVar13[1].monitor,pSVar11,(MethodInfo *)0x0);
                if (bVar6 != 0) goto code_?;
                if (this_05 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
                goto code_?;
              }
              break;
            }
code_?:
            this_04 = (Action_1_Object_ *)func_?();
            if ((this_04 == (Action_1_Object_ *)0x0) ||
               (pMVar4 = 
                MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
               , mscorlib.dll::System::Action`1[Object]::Action_1_Object___ctor
                           (this_04,(Object *)this_03,
                            MethodInfo__BodyAccessoriesController____c__DisplayClass25_0___RefreshAccessories_b__0_AvatarAccessory_
                            ,(MethodInfo *)0x0), this_06 == (AccessoryLoader *)0x0)) break;
            this_05 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)&UNK_?;
            Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
            AccessoryLoader_LoadAccessory
                      (this_06,(String *)pMVar4,(Action_1_AvatarAccessory_ *)this_04,
                       (MethodInfo *)0x0);
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
code_?:
  bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          Object,GUILoginHandler+PlanetData]::
          Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                    (this_05,(Object *)(this_03->fields).m_CoroutineContainer,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__ContainsKey_MV__Common__AccessorySlotType_
                    );
  if (bVar6 != 0) {
    if (this_05 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
    goto code_?;
    this_06 = (AccessoryLoader *)(this_03->fields).m_CoroutineContainer;
    pSVar11 = (String *)&UNK_?;
    pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_05,
                         (Int32Enum__Enum)this_06,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Item_MV__Common__AccessorySlotType_
                        );
    if (pOVar13 == (Object *)0x0) goto code_?;
    bVar6 = mscorlib.dll::System::String::String_op_Equality
                      ((String *)pOVar13[1].monitor,pSVar11,(MethodInfo *)0x0);
    pAVar17 = TypeInfo__MV__Common__AvatarAccessoryData;
    if (bVar6 != 0) {
      pEVar14 = (Enum *)func_?();
      pSVar11 = mscorlib.dll::System::Enum::Enum_ToString_2(pEVar14,StringLiteral_d,(MethodInfo *)0x0)
      ;
      pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          ((Dictionary_2_System_Object_System_Object_ *)pAVar17,(Object *)pSVar11,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      if (pOVar13 == (Object *)0x0) goto code_?;
      if ((pOVar13->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pfVar18 = (float *)func_?();
        BodyAccessoriesController::BodyAccessoriesController_ApplyAccessoryOffset
                  ((BodyAccessoriesController *)&UNK_?,*pfVar18,
                   (AccessorySlotType__Enum)(this_03->fields).m_CoroutineContainer,(MethodInfo *)0x0
                  );
        pAVar17 = TypeInfo__MV__Common__AvatarAccessoryData;
        pEVar14 = (Enum *)func_?();
        pSVar11 = mscorlib.dll::System::Enum::Enum_ToString_2
                           (pEVar14,StringLiteral_d,(MethodInfo *)0x0);
        pOVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            ((Dictionary_2_System_Object_System_Object_ *)pAVar17,(Object *)pSVar11,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pOVar13 == (Object *)0x0) goto code_?;
        if ((pOVar13->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
          pfVar18 = (float *)func_?();
          this_06 = (AccessoryLoader *)&UNK_?;
          this_05 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)&UNK_?;
          BodyAccessoriesController::BodyAccessoriesController_ApplySizeChange
                    ((BodyAccessoriesController *)&UNK_?,*pfVar18,
                     (AccessorySlotType__Enum)(this_03->fields).m_CoroutineContainer,
                     (MethodInfo *)0x0);
          goto code_?;
        }
      }
code_?:
      func_?();
code_?:
      func_?();
code_?:
      func_?();
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  goto code_?;
}

