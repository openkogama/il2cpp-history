
/* Void AddPreviewBoxesToChildren() */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_AddPreviewBoxesToChildren
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pMVar6 = (this->fields).platform;
  if ((pMVar6 != (MVMovingPlatform *)0x0) &&
     (pMVar7 = (pMVar6->fields)._._CubeModel_k__BackingField, pMVar7 != (MVCubeModelInstance *)0x0))
  {
    (*(code *)(pMVar7->klass->vtable).AddPreviewBox.method)
              (pMVar7,(pMVar7->klass->vtable).AddSelectionBox.methodPtr);
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(this->fields).nodeIdToWoMap;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                          );
      if (this_01 !=
          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        pDVar8 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                 StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                           (&DStack_9,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
                           );
        DStack_10._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar8->_dictionary;
        DStack_10._index = pDVar8->_index;
        DStack_10._version = pDVar8->_version;
        DStack_10._currentValue = pDVar8->_currentValue;
        DStack_9._version = 0;
        uStack_1 = 1;
        DStack_9._currentValue = (Object *)&DStack_10;
        while( true ) {
          bVar11 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            (&DStack_10,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                            );
          if (bVar11 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&DStack_10,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
                       ,unaff_EDI);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          if (DStack_10._currentValue == (Object *)0x0) break;
          (*(code *)(DStack_10._currentValue)->klass[3]._1.initializationExceptionGCHandle)
                    (DStack_10._currentValue,(DStack_10._currentValue)->klass[3]._1.cctor_started);
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_Initialize
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  object = this;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__get_Current__
                   );
    func_?(&
                    MethodInfo__MVMovingPlatformGroup__WorldObjectClient_PositionChangedHandler_System__Object__PositionChangedEventArgs_
                   );
    func_?(&
                    MethodInfo__MVMovingPlatformGroup__WorldObjectClient_RotationChangedHandler_System__Object__RotationChangedEventArgs_
                   );
    func_?(&
                    MethodInfo__MVMovingPlatformGroup__WorldObjectClient_SelectedChangedHandler_System__Object__SelectedEventArgs_
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_SelectedEventArgs>
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  MVMovingPlatformGroup_InitializeCommon(this,(MethodInfo *)0x0);
  pDVar1 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)(this->fields).nodeIdToWoMap;
  if ((pDVar1 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)0x0) &&
     (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                         (pDVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                         ),
     pDVar2 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)0x0)) {
    mscorlib.dll::System::Collections::Generic::
    Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)&stack0xffffffc8,pDVar2,
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
              );
    while (bVar3 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                   UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                               *)&stack0xffffffb8,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                             ), bVar3 != 0) {
      puVar4 = &UNK_?;
      pUVar5 = (UnityAction_2_System_Object_System_Object_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar5,(Object *)object,
                 MethodInfo__MVMovingPlatformGroup__WorldObjectClient_PositionChangedHandler_System__Object__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      in_stack_6 = (MethodInfo *)&UNK_?;
      pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)0x0,(Delegate *)0x0,(MethodInfo *)0x0);
      if (pDVar7 == (Delegate *)0x0) {
        *(undefined4 *)(puVar4 + 0x6c) = 0;
      }
      else {
        puVar4 = &UNK_?;
        iVar8 = func_?();
        if (iVar8 == 0) goto code_?;
        *(int *)(puVar4 + 0x6c) = iVar8;
        iVar8 = func_?();
        if (iVar8 == 0) goto code_?;
      }
      func_?();
      pUVar5 = (UnityAction_2_System_Object_System_Object_ *)func_?();
      pDVar7 = (Delegate *)&UNK_?;
      pMVar9 = object;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar5,(Object *)object,
                 MethodInfo__MVMovingPlatformGroup__WorldObjectClient_SelectedChangedHandler_System__Object__SelectedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar5,pDVar7,(MethodInfo *)0x0);
      if (pDVar7 == (Delegate *)0x0) {
        (pMVar9->fields)._._._.SelectedChanged =
             (UnityAction_2_MVWorldObjectClient_SelectedEventArgs_ *)0x0;
      }
      else {
        pUVar10 = (UnityAction_2_MVWorldObjectClient_SelectedEventArgs_ *)func_?();
        if (pUVar10 == (UnityAction_2_MVWorldObjectClient_SelectedEventArgs_ *)0x0)
        goto code_?;
        (pMVar9->fields)._._._.SelectedChanged = pUVar10;
        iVar8 = func_?();
        if (iVar8 == 0) goto code_?;
      }
      this = (MVMovingPlatformGroup *)&UNK_?;
      func_?();
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffb8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
               ,in_stack_6);
    ppUVar11 = &(object->fields)._._._.RotationChanged;
    pUVar12 = *ppUVar11;
    pUVar5 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar5,(Object *)this,
               MethodInfo__MVMovingPlatformGroup__WorldObjectClient_RotationChangedHandler_System__Object__RotationChangedEventArgs_
               ,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar12,(Delegate *)pUVar5,(MethodInfo *)0x0);
    if (pDVar7 == (Delegate *)0x0) {
      *ppUVar11 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0;
    }
    else {
      pUVar12 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)func_?();
      if (pUVar12 == (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
        goto code_?;
      }
      *ppUVar11 = pUVar12;
      iVar8 = func_?();
      if (iVar8 == 0) goto code_?;
    }
    puVar4 = &UNK_?;
    func_?();
    uVar13 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    piVar14 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar14 = (uint)*piVar14 | 0x40;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar13;
    bVar3 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                      ((MVWorldObjectClient *)this,InteractionFlags__Enum_IsPreview,
                       (MethodInfo *)0x0);
    if (bVar3 == 0) {
code_?:
      *unaff_FS_OFFSET = puVar4;
      return;
    }
    MVMovingPlatformGroup_AddPreviewBoxesToChildren(this,(MethodInfo *)0x0);
    pMVar15 = (this->fields).platform;
    if (pMVar15 != (MVMovingPlatform *)0x0) {
      pMVar16 = (pMVar15->fields)._._CubeModel_k__BackingField;
      if (pMVar16 != (MVCubeModelInstance *)0x0) {
        (pMVar16->fields)._._._.previewOwnerProfileId = (this->fields)._._._._.previewOwnerProfileId;
        pMVar15 = (this->fields).platform;
        if ((pMVar15 != (MVMovingPlatform *)0x0) &&
           (pMVar16 = (pMVar15->fields)._._CubeModel_k__BackingField,
           pMVar16 != (MVCubeModelInstance *)0x0)) {
          uVar13 = *(undefined4 *)((int)&(pMVar16->fields)._._.interactionFlags + 4);
          piVar14 = &(pMVar16->fields)._._.interactionFlags;
          *(uint *)piVar14 = (uint)*piVar14 | 0x20000;
          *(undefined4 *)((int)&(pMVar16->fields)._._.interactionFlags + 4) = uVar13;
          pDVar1 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)(this->fields).nodeIdToWoMap;
          if ((pDVar1 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)0x0) &&
             (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                       UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                       Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                 (pDVar1,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                                 ),
             pDVar2 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)0x0)) {
            mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
            StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                      ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)&stack0xffffffc8,pDVar2,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
                      );
            while (bVar3 = mscorlib.dll::System::Collections::Generic::
                           Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System
                           ::UInt32,System::Object]::
                           Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                     ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                       *)&stack0xffffffb8,
                                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                                     ), bVar3 != 0) {
              _UNK_? = (this->fields)._._._._.previewOwnerProfileId;
              _UNK_? = _UNK_? | 0x20000;
            }
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&stack0xffffffb8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
                       ,method_00);
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
  func_?();
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_InitializeCommon
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  pMVar1 = this;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff7c;
  puVar6 = &stack0xffffff7c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__set_Item_int__MVMovingPlatformNode_
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
    func_?(&TypeInfo__System__Int32);
    in_stack_7 =
         &
         MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&
                    MethodInfo__MVMovingPlatformGroup__WorldObjectClient_ScaleChangedHandler_System__Object__ScaleChangedEventArgs_
                   );
    func_?(&TypeInfo__MVMovingPlatformNode);
    func_?(&TypeInfo__MVMovingPlatform);
    func_?(&TypeInfo__System__String);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                   );
    func_?(&StringLiteral__init___Could_not_find_child_nod);
    func_?(&StringLiteral_Platform);
    in_stack_8 = &StringLiteral_StartNode;
    func_?();
    func_?(&StringLiteral___If_this_is_a_new_platform_grou);
    func_?(&StringLiteral_Platform_group_);
    func_?(&StringLiteral__init___Could_not_find_child_pla);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  pDVar9 = (this->fields)._.childIdMap;
  IStack_10.m_value = 0;
  if (pDVar9 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
    value = extraout_EDX;
code_?:
    uVar11 = func_?(value,TypeInfo__MVMovingPlatformNode);
code_?:
    uVar12 = func_?(uVar11);
    uVar12 = func_?(uVar12);
    func_?(uVar12);
  }
  else {
    pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
              Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                        (&DStack_14,(Dictionary_2_System_UInt32_System_Object_ *)pDVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                        );
    DStack_14._getEnumeratorRetType = (int32_t)&stack0xffffff88;
    pMVar15 = (MVMovingPlatform *)(pDVar13->_current).key;
    uVar16 = *(undefined8 *)&(pDVar13->_current).value;
    DStack_14._current =
         (KeyValuePair_2_System_UInt32_System_Object_)((ulonglong)DStack_14._current & 0xffffffff);
    uStack_2 = 1;
    while( true ) {
      bVar17 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
               Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffff88,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                         );
      if (bVar17 == 0) break;
      pMStack_18 = (MVMovingPlatform *)uVar16;
      pUStack_19 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)pMStack_18;
      pMStack_20 = pMVar15;
      if ((pMVar15 == (MVMovingPlatform *)0x0) ||
         (pSVar21 = (String *)
                    (*(code *)(pMVar15->klass->vtable).ToString.method)
                              (pMVar15,(pMVar15->klass->vtable).get_Position.methodPtr),
         pSVar21 == (String *)0x0)) goto code_?;
      in_stack_8 = (String **)StringLiteral_Platform;
      bVar17 = mscorlib.dll::System::String::String_Equals_1
                         (pSVar21,StringLiteral_Platform,(MethodInfo *)0x0);
      if (bVar17 == 0) {
        if (pMStack_20 == (MVMovingPlatform *)0x0) goto code_?;
        pMStack_20 = (MVMovingPlatform *)func_?(3,pMStack_20);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Convert);
        }
        in_stack_8 = (String **)&UNK_?;
        pSStack_22 = (String__Array *)
                     mscorlib.dll::System::Convert::Convert_ToInt32_14
                               ((String *)pMStack_20,(MethodInfo *)0x0);
        uVar11 = CONCAT44(TypeInfo__System__Int32,pUStack_19);
        if (pUStack_19 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)0x0)
        goto code_?;
        if ((Il2CppClass *)((pUStack_19->_0).image)->codeGenModule !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar23 = (int32_t *)func_?(pUStack_19);
        IStack_10.m_value = *piVar23;
        value = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)
                MVGroup::MVGroup_GetChild((MVGroup *)this,IStack_10.m_value,(MethodInfo *)0x0);
        pUStack_19 = value;
        if (value == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)0x0) {
          pSStack_22 = (String__Array *)func_?(TypeInfo__System__String,5);
          if (pSStack_22 == (String__Array *)0x0) goto code_?;
          func_?(0,StringLiteral_Platform_group_);
          pSVar21 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&this->fields,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)0x1;
          func_?(1,pSVar21);
          func_?(2,StringLiteral__init___Could_not_find_child_nod);
          pSVar21 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_10,(MethodInfo *)0x0);
          func_?(3,pSVar21);
          func_?(4,StringLiteral___If_this_is_a_new_platform_grou);
          pUStack_19 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)
                       mscorlib.dll::System::String::String_Concat_6(pSStack_22,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pUStack_19,(MethodInfo *)0x0);
          (this->fields).initializeFailed = 1;
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffff88,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,method_00);
          goto code_?;
        }
        bStack_24 = (TypeInfo__MVMovingPlatformNode->_1).naturalAligment;
        if ((*(byte *)&(value->_0).image[4].assembly < bStack_24) ||
           (*(MVMovingPlatformNode__Class **)
             (((value->_0).image[2].typeCount - 4) + (uint)bStack_24 * 4) !=
            TypeInfo__MVMovingPlatformNode)) goto code_?;
        pDVar25 = (this->fields).nodeIdToWoMap;
        if (pDVar25 == (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__set_Item
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar25,(int32_t)pSStack_22,
                   (Object *)value,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__set_Item_int__MVMovingPlatformNode_
                  );
        this_00 = (this->fields).woIdToNodeIdMap;
        if (this_00 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
        Dictionary_2_System_Int32_System_Int32__set_Item
                  (this_00,(int32_t)(pUStack_19->_0).name,(int32_t)pSStack_22,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                  );
      }
    }
    uStack_2 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffff88,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,(MethodInfo *)in_stack_7);
    uStack_2 = 0xffffffff;
    pDVar9 = (this->fields).nextNodeMap;
    if (pDVar9 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
              Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                        (&DStack_14,(Dictionary_2_System_UInt32_System_Object_ *)pDVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                        );
    piVar26 = (int *)(pDVar13->_current).key;
    uVar16 = *(undefined8 *)&(pDVar13->_current).value;
    DStack_14._current =
         (KeyValuePair_2_System_UInt32_System_Object_)((ulonglong)DStack_14._current & 0xffffffff);
    uStack_2 = 4;
    DStack_14._getEnumeratorRetType = (int32_t)&stack0xffffff88;
    while (bVar17 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &stack0xffffff88,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              ), bVar17 != 0) {
      pMStack_18 = (MVMovingPlatform *)uVar16;
      pMStack_20 = pMStack_18;
      piStack_27 = piVar26;
      if (piVar26 == (int *)0x0) goto code_?;
      pUStack_19 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)
                   (**(code **)(*piVar26 + 0xd8))(piVar26,*(undefined4 *)(*piVar26 + 0xdc));
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      pUStack_19 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)
                   mscorlib.dll::System::Convert::Convert_ToInt32_14
                             ((String *)pUStack_19,(MethodInfo *)0x0);
      uVar11 = CONCAT44(TypeInfo__System__Int32,pMStack_20);
      if (pMStack_20 == (MVMovingPlatform *)0x0) goto code_?;
      if ((pMStack_20->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar28 = (undefined4 *)func_?(pMStack_20);
      pMStack_20 = (MVMovingPlatform *)*puVar28;
      pDVar25 = (this->fields).nodeIdToWoMap;
      if (pDVar25 == (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) goto code_?;
      pSStack_22 = (String__Array *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar25,(int32_t)pUStack_19
                              ,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                             );
      pDVar25 = (this->fields).nodeIdToWoMap;
      if ((pDVar25 == (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) ||
         (in_stack_8 = (String **)pMStack_20,
         pUStack_19 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar25,
                                 (int32_t)pMStack_20,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                                ), pSStack_22 == (String__Array *)0x0)) goto code_?;
      pSStack_22[1].vector[0xf] = (String *)pUStack_19;
      func_?(pSStack_22[1].vector + 0xf,pUStack_19);
      if (pUStack_19 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)0x0)
      goto code_?;
      ppMVar29 = &(pUStack_19->vtable).ToString.method;
      *ppMVar29 = (MethodInfo *)pSStack_22;
      func_?(ppMVar29,pSStack_22);
    }
    uStack_2 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffff88,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,(MethodInfo *)in_stack_8);
    uStack_2 = 0xffffffff;
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (this->fields)._.blueprintData;
    if (this_01 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar30 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (this_01,(Object *)StringLiteral_StartNode,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar11 = CONCAT44(TypeInfo__System__Int32,TVar30.m_Index);
    if (TVar30.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar30.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar23 = (int32_t *)func_?(TVar30.m_Index);
    pDVar25 = (this->fields).nodeIdToWoMap;
    if (pDVar25 == (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) goto code_?;
    pMVar31 = (MVMovingPlatformNode *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar25,*piVar23,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                        );
    ppMVar32 = &(this->fields).startNode;
    *ppMVar32 = pMVar31;
    func_?(ppMVar32,pMVar31);
    pMStack_20 = (MVMovingPlatform *)
                 MVBlueprintBase::MVBlueprintBase_GetChild
                           ((MVBlueprintBase *)this,StringLiteral_Platform,(MethodInfo *)0x0);
    if (pMStack_20 != (MVMovingPlatform *)0x0) {
      bStack_24 = (TypeInfo__MVMovingPlatform->_1).naturalAligment;
      if ((bStack_24 <= (pMStack_20->klass->_1).naturalAligment) &&
         ((MVMovingPlatform__Class *)(pMStack_20->klass->_1).typeHierarchy[bStack_24 - 1] ==
          TypeInfo__MVMovingPlatform)) {
        pSStack_22 = (String__Array *)&(this->fields).platform;
        *(MVMovingPlatform **)pSStack_22 = pMStack_20;
        bStack_24 = (TypeInfo__MVMovingPlatform->_1).naturalAligment;
        if ((bStack_24 <= (pMStack_20->klass->_1).naturalAligment) &&
           ((MVMovingPlatform__Class *)(pMStack_20->klass->_1).typeHierarchy[bStack_24 - 1] ==
            TypeInfo__MVMovingPlatform)) goto code_?;
      }
      func_?();
      goto code_?;
    }
    (this->fields).platform = (MVMovingPlatform *)0x0;
code_?:
    pSStack_22 = (String__Array *)&(this->fields).platform;
    func_?();
    pMStack_20 = (MVMovingPlatform *)pSStack_22->klass;
    if (pMStack_20 == (MVMovingPlatform *)0x0) {
      pSVar21 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&this->fields,(MethodInfo *)0x0);
      pSVar21 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_Platform_group_,pSVar21,
                           StringLiteral__init___Could_not_find_child_pla,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar21,(MethodInfo *)0x0);
      (this->fields).initializeFailed = 1;
      *unaff_FS_OFFSET = uStack_4;
      return;
    }
    pMVar31 = *ppMVar32;
    if (pMVar31 == (MVMovingPlatformNode *)0x0) goto code_?;
    pMVar33 = (pMVar31->fields)._Next_k__BackingField;
    ppMVar32 = &(pMStack_20->fields).start;
    *ppMVar32 = pMVar31;
    func_?(ppMVar32,pMVar31);
    ppMVar32 = &(pMStack_20->fields).end;
    *ppMVar32 = pMVar33;
    func_?(ppMVar32,pMVar33);
    MVMovingPlatform::MVMovingPlatform_RecalculateMovement(pMStack_20,(MethodInfo *)0x0);
    pMStack_20 = (MVMovingPlatform *)&(this->fields)._._._.ScaleChanged;
    a = *(UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ **)pMStack_20;
    this_03 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_03,(Object *)this,
               MethodInfo__MVMovingPlatformGroup__WorldObjectClient_ScaleChangedHandler_System__Object__ScaleChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar34 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDVar34 == (Delegate *)0x0) {
      pMStack_20->klass = (MVMovingPlatform__Class *)0x0;
code_?:
      func_?();
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Count__
                       );
        cRam_? = '\x01';
      }
      if ((this->fields).initializeFailed != 0) {
code_?:
        *unaff_FS_OFFSET = uStack_4;
        return;
      }
      pLVar35 = (this->fields).lineRenderer;
      if (pLVar35 != (LineRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_useWorldSpace
                  (pLVar35,0,(MethodInfo *)0x0);
        this_02 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)(this->fields).nodeIdToWoMap;
        pLVar35 = (this->fields).lineRenderer;
        if ((this_02 !=
             (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)0x0) &&
           (value_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                       UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                       Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                                 (this_02,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Count__
                                 ), pLVar35 != (LineRenderer *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
                    (pLVar35,value_00,(MethodInfo *)0x0);
          pKVar36 = (KeyValuePair_2_System_UInt32_System_Object_ *)
                    (*(code *)(this->klass->vtable).get_Scale.method)();
          DStack_14._current = *pKVar36;
          DStack_14._getEnumeratorRetType = pKVar36[1].key;
          value_01 = (float)DStack_14._current.key * _UNK_?;
          pLVar35 = (this->fields).lineRenderer;
          if (pLVar35 != (LineRenderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                      (pLVar35,value_01,(MethodInfo *)0x0);
            pLVar35 = (this->fields).lineRenderer;
            if (pLVar35 != (LineRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                        (pLVar35,value_01,(MethodInfo *)0x0);
              pMVar31 = (this->fields).startNode;
              this = (MVMovingPlatformGroup *)0x0;
              pUStack_19 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)
                           (pMVar1->fields).lineRenderer;
              if ((pMVar31 != (MVMovingPlatformNode *)0x0) &&
                 (pVVar37 = (Vector3 *)
                            (*(code *)(pMVar31->klass->vtable).get_Position.method)
                                      (&DStack_14._current,pMVar31,
                                       (pMVar31->klass->vtable).set_Position.methodPtr),
                 pUStack_19 !=
                 (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                          ((LineRenderer *)pUStack_19,0,*pVVar37,(MethodInfo *)0x0);
                do {
                  pMVar33 = (pMVar31->fields)._Next_k__BackingField;
                  if ((pMVar33 == (MVMovingPlatformNode *)0x0) ||
                     (pMVar33 == (pMVar1->fields).startNode)) goto code_?;
                  pUStack_19 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)
                               (pMVar1->fields).lineRenderer;
                  this = (MVMovingPlatformGroup *)((int)&this->klass + 1);
                  pVVar37 = (Vector3 *)
                            (*(code *)(pMVar33->klass->vtable).get_Position.method)
                                      (auStack_38,pMVar33,
                                       (pMVar33->klass->vtable).set_Position.methodPtr);
                  if (pUStack_19 ==
                      (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs___Class *)0x0) break;
                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                            ((LineRenderer *)pUStack_19,(int32_t)this,*pVVar37,(MethodInfo *)0x0);
                  pMVar31 = (pMVar31->fields)._Next_k__BackingField;
                } while (pMVar31 != (MVMovingPlatformNode *)0x0);
              }
            }
          }
        }
      }
      goto code_?;
    }
    pMVar39 = (MVMovingPlatform__Class *)func_?();
    if (pMVar39 == (MVMovingPlatform__Class *)0x0) goto code_?;
    pMStack_20->klass = pMVar39;
    pUStack_19 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
    iVar40 = func_?();
    if (iVar40 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar41 = (code *)swi(3);
  (*pcVar41)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_InitializeInventory
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  pMVar1 = in_stack_2;
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  uVar3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__set_Item_int__MVMovingPlatformNode_
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
    func_?(&TypeInfo__System__Int32);
    in_stack_4 =
         &
         MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&
                    MethodInfo__MVMovingPlatformGroup__WorldObjectClient_ScaleChangedHandler_System__Object__ScaleChangedEventArgs_
                   );
    func_?(&TypeInfo__MVMovingPlatformNode);
    func_?(&TypeInfo__MVMovingPlatform);
    func_?(&TypeInfo__System__String);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                   );
    func_?(&StringLiteral__init___Could_not_find_child_nod);
    func_?(&StringLiteral_Platform);
    in_stack_5 = &StringLiteral_StartNode;
    func_?();
    func_?(&StringLiteral___If_this_is_a_new_platform_grou);
    func_?(&StringLiteral_Platform_group_);
    func_?(&StringLiteral__init___Could_not_find_child_pla);
    cRam_? = '\x01';
  }
  this_00 = (in_stack_2->fields).childIdMap;
  IStack_6.m_value = 0;
  if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
    pMVar7 = extraout_EDX;
code_?:
    uVar8 = func_?(pMVar7,TypeInfo__MVMovingPlatformNode);
code_?:
    uVar3 = func_?(uVar8);
    uVar3 = func_?(uVar3);
    func_?(uVar3);
  }
  else {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
              Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                        (&DStack_10,(Dictionary_2_System_UInt32_System_Object_ *)this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                        );
    DStack_10._getEnumeratorRetType = (int32_t)&stack0xffffff90;
    pMVar11 = (MVMovingPlatform *)(pDVar9->_current).key;
    uVar12 = *(undefined8 *)&(pDVar9->_current).value;
    DStack_10._current =
         (KeyValuePair_2_System_UInt32_System_Object_)((ulonglong)DStack_10._current & 0xffffffff);
    while( true ) {
      bVar13 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
               Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          &stack0xffffff90,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                         );
      if (bVar13 == 0) break;
      pMStack_14 = (MVBlueprintBase__Class *)uVar12;
      pMStack_15 = pMStack_14;
      pMStack_16 = pMVar11;
      if ((pMVar11 == (MVMovingPlatform *)0x0) ||
         (pSVar17 = (String *)
                    (*(code *)(pMVar11->klass->vtable).ToString.method)
                              (pMVar11,(pMVar11->klass->vtable).get_Position.methodPtr),
         pSVar17 == (String *)0x0)) goto code_?;
      in_stack_5 = (String **)StringLiteral_Platform;
      bVar13 = mscorlib.dll::System::String::String_Equals_1
                         (pSVar17,StringLiteral_Platform,(MethodInfo *)0x0);
      if (bVar13 == 0) {
        if (pMStack_16 == (MVMovingPlatform *)0x0) goto code_?;
        pMStack_16 = (MVMovingPlatform *)func_?(3,pMStack_16);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Convert);
        }
        in_stack_5 = (String **)&UNK_?;
        pSStack_18 = (String__Array *)
                     mscorlib.dll::System::Convert::Convert_ToInt32_14
                               ((String *)pMStack_16,(MethodInfo *)0x0);
        uVar8 = CONCAT44(TypeInfo__System__Int32,pMStack_15);
        if (pMStack_15 == (MVBlueprintBase__Class *)0x0) goto code_?;
        if ((Il2CppClass *)((pMStack_15->_0).image)->codeGenModule !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar19 = (int32_t *)func_?(pMStack_15);
        IStack_6.m_value = *piVar19;
        pMVar7 = (MVBlueprintBase__Class *)
                  MVGroup::MVGroup_GetChild
                            ((MVGroup *)in_stack_2,IStack_6.m_value,(MethodInfo *)0x0);
        pMStack_15 = pMVar7;
        if (pMVar7 == (MVBlueprintBase__Class *)0x0) {
          pSStack_18 = (String__Array *)func_?(TypeInfo__System__String,5);
          if (pSStack_18 == (String__Array *)0x0) goto code_?;
          func_?(0,StringLiteral_Platform_group_);
          pSVar17 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&in_stack_2->fields,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)0x1;
          func_?(1,pSVar17);
          func_?(2,StringLiteral__init___Could_not_find_child_nod);
          pSVar17 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_6,(MethodInfo *)0x0);
          func_?(3,pSVar17);
          func_?(4,StringLiteral___If_this_is_a_new_platform_grou);
          pMStack_15 = (MVBlueprintBase__Class *)
                       mscorlib.dll::System::String::String_Concat_6(pSStack_18,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pMStack_15,(MethodInfo *)0x0);
          *(undefined1 *)&in_stack_2[1].fields._._._.inputLinkRefs = 1;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffff90,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,method_00);
          goto code_?;
        }
        bVar20 = (TypeInfo__MVMovingPlatformNode->_1).naturalAligment;
        uStack_21 = (undefined *)CONCAT13(bVar20,(undefined3)uStack_21);
        if ((*(byte *)&(pMVar7->_0).image[4].assembly < bVar20) ||
           (*(MVMovingPlatformNode__Class **)
             (((pMVar7->_0).image[2].typeCount - 4) + (uint)bVar20 * 4) !=
            TypeInfo__MVMovingPlatformNode)) goto code_?;
        pDVar22 = (Dictionary_2_System_Int32_System_Object_ *)
                 in_stack_2[1].fields._._._.itemId;
        if (pDVar22 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__set_Item
                  (pDVar22,(int32_t)pSStack_18,(Object *)pMVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__set_Item_int__MVMovingPlatformNode_
                  );
        this_01 = *(Dictionary_2_System_Int32_System_Int32_ **)
                   &in_stack_2[1].fields._._._.inputState;
        if (this_01 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
        Dictionary_2_System_Int32_System_Int32__set_Item
                  (this_01,(int32_t)(pMStack_15->_0).name,(int32_t)pSStack_18,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                  );
      }
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffff90,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,(MethodInfo *)in_stack_4);
    this_02 = (Dictionary_2_System_UInt32_System_Object_ *)in_stack_2[1].fields._._._.id;
    if (this_02 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
              Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                        (&DStack_10,this_02,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                        );
    piVar23 = (int *)(pDVar9->_current).key;
    uVar12 = *(undefined8 *)&(pDVar9->_current).value;
    DStack_10._current =
         (KeyValuePair_2_System_UInt32_System_Object_)((ulonglong)DStack_10._current & 0xffffffff);
    DStack_10._getEnumeratorRetType = (int32_t)&stack0xffffff90;
    while (bVar13 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &stack0xffffff90,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              ), bVar13 != 0) {
      pMStack_14 = (MVBlueprintBase__Class *)uVar12;
      pMStack_16 = (MVMovingPlatform *)pMStack_14;
      piStack_24 = piVar23;
      if (piVar23 == (int *)0x0) goto code_?;
      pMStack_15 = (MVBlueprintBase__Class *)
                   (**(code **)(*piVar23 + 0xd8))(piVar23,*(undefined4 *)(*piVar23 + 0xdc));
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      pMStack_15 = (MVBlueprintBase__Class *)
                   mscorlib.dll::System::Convert::Convert_ToInt32_14
                             ((String *)pMStack_15,(MethodInfo *)0x0);
      uVar8 = CONCAT44(TypeInfo__System__Int32,pMStack_16);
      if (pMStack_16 == (MVMovingPlatform *)0x0) goto code_?;
      if ((pMStack_16->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
      goto code_?;
      puVar25 = (undefined4 *)func_?(pMStack_16);
      pMStack_16 = (MVMovingPlatform *)*puVar25;
      pDVar22 = (Dictionary_2_System_Int32_System_Object_ *)in_stack_2[1].fields._._._.itemId;
      if (pDVar22 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
      pSStack_18 = (String__Array *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             (pDVar22,(int32_t)pMStack_15,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                             );
      pDVar22 = (Dictionary_2_System_Int32_System_Object_ *)in_stack_2[1].fields._._._.itemId;
      if ((pDVar22 == (Dictionary_2_System_Int32_System_Object_ *)0x0) ||
         (in_stack_5 = (String **)pMStack_16,
         pMStack_15 = (MVBlueprintBase__Class *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                (pDVar22,(int32_t)pMStack_16,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                                ), pSStack_18 == (String__Array *)0x0)) goto code_?;
      pSStack_18[1].vector[0xf] = (String *)pMStack_15;
      func_?(pSStack_18[1].vector + 0xf,pMStack_15);
      if (pMStack_15 == (MVBlueprintBase__Class *)0x0) goto code_?;
      ppMVar26 = &(pMStack_15->vtable).ToString.method;
      *ppMVar26 = (MethodInfo *)pSStack_18;
      func_?(ppMVar26,pSStack_18);
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffff90,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,(MethodInfo *)in_stack_5);
    this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (in_stack_2->fields).blueprintData;
    if (this_03 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (this_03,(Object *)StringLiteral_StartNode,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar8 = CONCAT44(TypeInfo__System__Int32,TVar27.m_Index);
    if (TVar27.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar27.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar19 = (int32_t *)func_?(TVar27.m_Index);
    pDVar22 = (Dictionary_2_System_Int32_System_Object_ *)in_stack_2[1].fields._._._.itemId;
    if (pDVar22 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
    pOVar28 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        (pDVar22,*piVar19,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                        );
    piVar19 = &in_stack_2[1].fields._._._.groupId;
    *piVar19 = (int32_t)pOVar28;
    func_?(piVar19,pOVar28);
    pMStack_16 = (MVMovingPlatform *)
                 MVBlueprintBase::MVBlueprintBase_GetChild
                           (in_stack_2,StringLiteral_Platform,(MethodInfo *)0x0);
    if (pMStack_16 != (MVMovingPlatform *)0x0) {
      bVar20 = (TypeInfo__MVMovingPlatform->_1).naturalAligment;
      uStack_21 = (undefined *)CONCAT13(bVar20,(undefined3)uStack_21);
      if ((bVar20 <= (pMStack_16->klass->_1).naturalAligment) &&
         ((MVMovingPlatform__Class *)(pMStack_16->klass->_1).typeHierarchy[bVar20 - 1] ==
          TypeInfo__MVMovingPlatform)) {
        pSStack_18 = (String__Array *)&in_stack_2[1].fields._._._.outputLinkRefs;
        *(MVMovingPlatform **)pSStack_18 = pMStack_16;
        bVar20 = (TypeInfo__MVMovingPlatform->_1).naturalAligment;
        uStack_21 = (undefined *)CONCAT13(bVar20,(undefined3)uStack_21);
        if ((bVar20 <= (pMStack_16->klass->_1).naturalAligment) &&
           ((MVMovingPlatform__Class *)(pMStack_16->klass->_1).typeHierarchy[bVar20 - 1] ==
            TypeInfo__MVMovingPlatform)) goto code_?;
      }
      func_?();
      goto code_?;
    }
    in_stack_2[1].fields._._._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)0x0;
code_?:
    pSStack_18 = (String__Array *)&in_stack_2[1].fields._._._.outputLinkRefs;
    func_?();
    pMStack_16 = (MVMovingPlatform *)pSStack_18->klass;
    if (pMStack_16 == (MVMovingPlatform *)0x0) {
      pSVar17 = mscorlib.dll::System::Int32::Int32_ToString
                          ((Int32 *)&in_stack_2->fields,(MethodInfo *)0x0);
      pSVar17 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_Platform_group_,pSVar17,
                           StringLiteral__init___Could_not_find_child_pla,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar17,(MethodInfo *)0x0);
      *(undefined1 *)&in_stack_2[1].fields._._._.inputLinkRefs = 1;
      *unaff_FS_OFFSET = uVar3;
      return;
    }
    pMVar29 = (MVMovingPlatformNode *)*piVar19;
    if (pMVar29 == (MVMovingPlatformNode *)0x0) goto code_?;
    pMVar30 = (pMVar29->fields)._Next_k__BackingField;
    ppMVar31 = &(pMStack_16->fields).start;
    *ppMVar31 = pMVar29;
    func_?(ppMVar31,pMVar29);
    ppMVar31 = &(pMStack_16->fields).end;
    *ppMVar31 = pMVar30;
    func_?(ppMVar31,pMVar30);
    MVMovingPlatform::MVMovingPlatform_RecalculateMovement(pMStack_16,(MethodInfo *)0x0);
    pMStack_16 = (MVMovingPlatform *)&(in_stack_2->fields)._._.ScaleChanged;
    a = *(UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ **)pMStack_16;
    this_05 = (UnityAction_2_System_Object_System_Object_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_05,(Object *)in_stack_2,
               MethodInfo__MVMovingPlatformGroup__WorldObjectClient_ScaleChangedHandler_System__Object__ScaleChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar32 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)a,(Delegate *)this_05,(MethodInfo *)0x0);
    if (pDVar32 == (Delegate *)0x0) {
      pMStack_16->klass = (MVMovingPlatform__Class *)0x0;
code_?:
      func_?();
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Count__
                       );
        cRam_? = '\x01';
      }
      if (*(char *)&in_stack_2[1].fields._._._.inputLinkRefs != '\0') {
code_?:
        *unaff_FS_OFFSET = uVar3;
        return;
      }
      if (in_stack_2[1].klass != (MVBlueprintBase__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_useWorldSpace
                  ((LineRenderer *)in_stack_2[1].klass,0,(MethodInfo *)0x0);
        this_04 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)in_stack_2[1].fields._._._.itemId;
        pMVar7 = in_stack_2[1].klass;
        if ((this_04 !=
             (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)0x0) &&
           (value = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                              (this_04,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Count__
                              ), pMVar7 != (MVBlueprintBase__Class *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
                    ((LineRenderer *)pMVar7,value,(MethodInfo *)0x0);
          pKVar33 = (KeyValuePair_2_System_UInt32_System_Object_ *)
                    (*(code *)(in_stack_2->klass->vtable).get_Scale.method)();
          DStack_10._current = *pKVar33;
          DStack_10._getEnumeratorRetType = pKVar33[1].key;
          value_00 = (float)DStack_10._current.key * _UNK_?;
          if (in_stack_2[1].klass != (MVBlueprintBase__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                      ((LineRenderer *)in_stack_2[1].klass,value_00,(MethodInfo *)0x0);
            if (in_stack_2[1].klass != (MVBlueprintBase__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                        ((LineRenderer *)in_stack_2[1].klass,value_00,(MethodInfo *)0x0);
              piVar23 = (int *)in_stack_2[1].fields._._._.groupId;
              in_stack_2 = (MVBlueprintBase *)0x0;
              pMStack_15 = pMVar1[1].klass;
              if ((piVar23 != (int *)0x0) &&
                 (pVVar34 = (Vector3 *)
                            (**(code **)(*piVar23 + 0xe0))
                                      (&DStack_10._current,piVar23,*(undefined4 *)(*piVar23 + 0xe4))
                 , pMStack_15 != (MVBlueprintBase__Class *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                          ((LineRenderer *)pMStack_15,0,*pVVar34,(MethodInfo *)0x0);
                do {
                  piVar35 = (int *)piVar23[0x37];
                  if ((piVar35 == (int *)0x0) || (piVar35 == (int *)pMVar1[1].fields._._._.groupId))
                  goto code_?;
                  pMStack_15 = pMVar1[1].klass;
                  in_stack_2 = (MVBlueprintBase *)((int)in_stack_2 + 1);
                  pVVar34 = (Vector3 *)
                            (**(code **)(*piVar35 + 0xe0))
                                      (auStack_36,piVar35,*(undefined4 *)(*piVar35 + 0xe4));
                  if (pMStack_15 == (MVBlueprintBase__Class *)0x0) break;
                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                            ((LineRenderer *)pMStack_15,(int32_t)in_stack_2,*pVVar34,
                             (MethodInfo *)0x0);
                  piVar23 = (int *)piVar23[0x37];
                } while (piVar23 != (int *)0x0);
              }
            }
          }
        }
      }
      goto code_?;
    }
    pMVar37 = (MVMovingPlatform__Class *)func_?();
    if (pMVar37 == (MVMovingPlatform__Class *)0x0) goto code_?;
    pMStack_16->klass = pMVar37;
    pMStack_15 = (MVBlueprintBase__Class *)
                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
    ;
    iVar38 = func_?();
    if (iVar38 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar39 = (code *)swi(3);
  (*pcVar39)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_OnEnterObject
               (MVMovingPlatformGroup *this,EditorStateMachine *e,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMStack_2 = (this->fields).platform;
  if (pMStack_2 != (MVMovingPlatform *)0x0) {
    pIStack_1 = (pMStack_2->klass->vtable).OnExitObject.methodPtr;
    pEStack_3 = e;
    (*(code *)(pMStack_2->klass->vtable).OnEnterObject.method)();
    return 1;
  }
  uVar4 = func_?(&pMStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void SetWorldObjectToPurchased() */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_SetWorldObjectToPurchased
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  MVWorldObjectClient::MVWorldObjectClient_SetWorldObjectToPurchased
            ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pMVar6 = (this->fields).platform;
  if ((pMVar6 != (MVMovingPlatform *)0x0) &&
     (pMVar7 = (pMVar6->fields)._._CubeModel_k__BackingField, pMVar7 != (MVCubeModelInstance *)0x0))
  {
    (*(code *)(pMVar7->klass->vtable).SetWorldObjectToPurchased.method)();
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(this->fields).nodeIdToWoMap;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                          );
      if (this_01 !=
          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        pDVar8 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                 StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                           (&DStack_9,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
                           );
        DStack_10._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar8->_dictionary;
        DStack_10._index = pDVar8->_index;
        DStack_10._version = pDVar8->_version;
        DStack_10._currentValue = pDVar8->_currentValue;
        DStack_9._version = 0;
        uStack_1 = 1;
        DStack_9._currentValue = (Object *)&DStack_10;
        while( true ) {
          bVar11 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            (&DStack_10,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                            );
          if (bVar11 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&DStack_10,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
                       ,unaff_EBX);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          if (DStack_10._currentValue == (Object *)0x0) break;
          (*(code *)(DStack_10._currentValue)->klass[2]._1.static_fields_size)();
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateLine() */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_UpdateLine
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Count__
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).initializeFailed != 0) {
    return;
  }
  pLVar1 = (this->fields).lineRenderer;
  if (pLVar1 != (LineRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_useWorldSpace
              (pLVar1,0,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(this->fields).nodeIdToWoMap;
    pLVar1 = (this->fields).lineRenderer;
    if ((this_00 !=
         (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)0x0) &&
       (value = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Count__
                          ), pLVar1 != (LineRenderer *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
                (pLVar1,value,(MethodInfo *)0x0);
      puVar2 = (undefined8 *)(*(code *)(this->klass->vtable).get_Scale.method)(&stack0xffffffe4);
      pLVar1 = (this->fields).lineRenderer;
      fStack_3 = (float)*puVar2;
      fStack_3 = fStack_3 * _UNK_?;
      if (pLVar1 != (LineRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                  (pLVar1,fStack_3,(MethodInfo *)0x0);
        pLVar1 = (this->fields).lineRenderer;
        if (pLVar1 != (LineRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                    (pLVar1,fStack_3,(MethodInfo *)0x0);
          pMVar4 = (this->fields).startNode;
          pLVar1 = (this->fields).lineRenderer;
          index = 0;
          if ((pMVar4 != (MVMovingPlatformNode *)0x0) &&
             (pVVar5 = (Vector3 *)
                       (*(code *)(pMVar4->klass->vtable).get_Position.method)
                                 (&stack0xffffffe4,pMVar4,
                                  (pMVar4->klass->vtable).set_Position.methodPtr),
             pLVar1 != (LineRenderer *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                      (pLVar1,0,*pVVar5,(MethodInfo *)0x0);
            do {
              pMVar6 = (pMVar4->fields)._Next_k__BackingField;
              if (pMVar6 == (MVMovingPlatformNode *)0x0) {
                return;
              }
              if (pMVar6 == (this->fields).startNode) {
                return;
              }
              pLVar1 = (this->fields).lineRenderer;
              index = index + 1;
              pVVar5 = (Vector3 *)
                       (*(code *)(pMVar6->klass->vtable).get_Position.method)
                                 (&stack0xffffffe4,pMVar6,
                                  (pMVar6->klass->vtable).set_Position.methodPtr);
              if (pLVar1 == (LineRenderer *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                        (pLVar1,index,*pVVar5,(MethodInfo *)0x0);
              pMVar4 = (pMVar4->fields)._Next_k__BackingField;
            } while (pMVar4 != (MVMovingPlatformNode *)0x0);
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void WorldObjectClient_PositionChangedHandler(Object, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVMovingPlatformGroup::
     MVMovingPlatformGroup_WorldObjectClient_PositionChangedHandler
               (MVMovingPlatformGroup *this,Object *sender,PositionChangedEventArgs *e,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVMovingPlatformNode);
    cRam_? = '\x01';
  }
  if (sender != (Object *)0x0) {
    bVar1 = (TypeInfo__MVMovingPlatformNode->_1).naturalAligment;
    if ((bVar1 <= (sender->klass->_1).naturalAligment) &&
       ((MVMovingPlatformNode__Class *)(sender->klass->_1).typeHierarchy[bVar1 - 1] ==
        TypeInfo__MVMovingPlatformNode)) {
      this_00 = (this->fields).platform;
      if (this_00 == (MVMovingPlatform *)0x0) {
        func_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((this_00->fields).start == (MVMovingPlatformNode *)sender) ||
         ((this_00->fields).end == (MVMovingPlatformNode *)sender)) {
        MVMovingPlatform::MVMovingPlatform_RecalculateMovement(this_00,(MethodInfo *)0x0);
      }
    }
  }
  MVMovingPlatformGroup_UpdateLine(this,(MethodInfo *)0x0);
  return;
}


/* Void WorldObjectClient_RotationChangedHandler(Object, RotationChangedEventArgs) */

void Assembly-CSharp.dll::MVMovingPlatformGroup::
     MVMovingPlatformGroup_WorldObjectClient_RotationChangedHandler
               (MVMovingPlatformGroup *this,Object *sender,RotationChangedEventArgs *e,
               MethodInfo *method)

{
  this_00 = (this->fields).platform;
  if (this_00 != (MVMovingPlatform *)0x0) {
    MVMovingPlatform::MVMovingPlatform_RecalculateMovement(this_00,(MethodInfo *)0x0);
    MVMovingPlatformGroup_UpdateLine(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void WorldObjectClient_ScaleChangedHandler(Object, ScaleChangedEventArgs) */

void Assembly-CSharp.dll::MVMovingPlatformGroup::
     MVMovingPlatformGroup_WorldObjectClient_ScaleChangedHandler
               (MVMovingPlatformGroup *this,Object *sender,ScaleChangedEventArgs *e,
               MethodInfo *method)

{
  MVMovingPlatformGroup_UpdateLine(this,(MethodInfo *)0x0);
  return;
}


/* Void WorldObjectClient_SelectedChangedHandler(Object, SelectedEventArgs) */

void Assembly-CSharp.dll::MVMovingPlatformGroup::
     MVMovingPlatformGroup_WorldObjectClient_SelectedChangedHandler
               (MVMovingPlatformGroup *this,Object *sender,SelectedEventArgs *e,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((e != (SelectedEventArgs *)0x0) &&
     (pMVar2 = (this->fields).platform, pMVar2 != (MVMovingPlatform *)0x0)) {
    (pMVar2->fields)._.pausedMovement = (e->fields).Selected;
    return;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVMovingPlatformGroup(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup__ctor
               (MVMovingPlatformGroup *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    func_?(&
                    UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                   );
    func_?(&StringLiteral_NextNodeMap);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__Dictionary__
            );
  ppDVar2 = &(this->fields).nodeIdToWoMap;
  *ppDVar2 = (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)pDVar1;
  func_?(ppDVar2,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  ppDVar3 = &(this->fields).woIdToNodeIdMap;
  *ppDVar3 = (Dictionary_2_System_Int32_System_Int32_ *)pDVar1;
  func_?(ppDVar3,pDVar1);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar4 == (PrefabPool *)0x0) {
code_?:
    func_?();
  }
  else {
    MVBlueprintBase::MVBlueprintBase__ctor_2
              ((MVBlueprintBase *)this,data,(pPVar4->fields).mvMovingPlatformGroupPrefab,
               worldObjects,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (this->fields)._.blueprintData;
    if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (this_00,(Object *)StringLiteral_NextNodeMap,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (TVar5.m_Index == 0) {
      (this->fields).nextNodeMap = (Dictionary_2_System_Object_System_Object_ *)0x0;
code_?:
      func_?();
      this_01 = (this->fields)._._._.gameObject;
      if (this_01 != (GameObject *)0x0) {
        pLVar6 = (LineRenderer *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentInChildren_1
                            (this_01,
                             UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                            );
        ppLVar7 = &(this->fields).lineRenderer;
        *ppLVar7 = pLVar6;
        func_?(ppLVar7);
        piVar8 = &(this->fields)._._._.interactionFlags;
        *(uint *)piVar8 = (uint)*piVar8 | 0x9000;
        uVar9 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
        piVar10 = &(this->fields)._._._.previewLayerMask;
        *piVar10 = *piVar10 | 0x800;
        *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar9;
        return;
      }
      goto code_?;
    }
    bVar11 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((*(byte *)(*(int *)TVar5.m_Index + 0xb8) < bVar11) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar5.m_Index + 100) + -4 + (uint)bVar11 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    (this->fields).nextNodeMap = (Dictionary_2_System_Object_System_Object_ *)TVar5.m_Index;
    bVar11 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((bVar11 <= *(byte *)(*(int *)TVar5.m_Index + 0xb8)) &&
       (*(Dictionary_2_System_Object_System_Object___Class **)
         (*(int *)(*(int *)TVar5.m_Index + 100) + -4 + (uint)bVar11 * 4) ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean get_Visible() */

bool Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_get_Visible
               (MVMovingPlatformGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    pOVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                       (this_00,
                        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                       );
    uVar2 = 0;
    if (pOVar1 != (Object__Array *)0x0) {
      ppOVar3 = pOVar1->vector;
      while( true ) {
        if ((int)pOVar1->max_length <= (int)uVar2) {
          return 0;
        }
        if (pOVar1->max_length <= uVar2) break;
        if ((Renderer *)*ppOVar3 == (Renderer *)0x0) goto code_?;
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                          ((Renderer *)*ppOVar3,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          return 1;
        }
        uVar2 = uVar2 + 1;
        ppOVar3 = ppOVar3 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_set_Visible
               (MVMovingPlatformGroup *this,bool value,MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_set_Visible
            ((MVWorldObjectClient *)this,value,(MethodInfo *)0x0);
  pMVar1 = (this->fields).platform;
  if ((pMVar1 != (MVMovingPlatform *)0x0) &&
     (pMVar2 = (pMVar1->fields)._._CubeModel_k__BackingField, pMVar2 != (MVCubeModelInstance *)0x0))
  {
    (*(code *)(pMVar2->klass->vtable).set_Visible.method)(pMVar2);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

