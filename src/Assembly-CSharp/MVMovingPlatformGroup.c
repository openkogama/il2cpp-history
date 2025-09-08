
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
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  pMVar7 = (this->fields).platform;
  if ((pMVar7 != (MVMovingPlatform *)0x0) &&
     (pMVar8 = (pMVar7->fields)._._CubeModel_k__BackingField, pMVar8 != (MVCubeModelInstance *)0x0))
  {
    (*(code *)(pMVar8->klass->vtable).AddPreviewBox.method)
              (pMVar8,(pMVar8->klass->vtable).AddSelectionBox.methodPtr);
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
        pDVar9 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                 StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                           (&DStack_10,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
                           );
        DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar9->_dictionary;
        DStack_6._index = pDVar9->_index;
        DStack_6._version = pDVar9->_version;
        DStack_6._currentValue = pDVar9->_currentValue;
        DStack_10._version = 0;
        uStack_1 = 1;
        DStack_10._currentValue = (Object *)&DStack_6;
        while( true ) {
          bVar11 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            (&DStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                            );
          if (bVar11 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&DStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
                       ,unaff_EDI);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          if (DStack_6._currentValue == (Object *)0x0) break;
          (*(code *)(DStack_6._currentValue)->klass[3]._1.initializationExceptionGCHandle)
                    (DStack_6._currentValue,(DStack_6._currentValue)->klass[3]._1.cctor_started);
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
  pUStack_1 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)0xffffffff;
  pDStack_2 = (Delegate *)&DAT_?;
  pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
               *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &pUStack_3;
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
  pDVar4 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)(this->fields).nodeIdToWoMap;
  if ((pDVar4 == (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)0x0) ||
     (pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                         (pDVar4,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                         ),
     pDVar5 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                *)0x0)) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine
  ::UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
  Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)&stack0xffffffc8,pDVar5,
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
            );
  pUStack_1 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)0x1;
  while (bVar6 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                 UInt32,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                           ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                             *)&stack0xffffffb8,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                           ), bVar6 != 0) {
    pUVar7 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar7,(Object *)this,
               MethodInfo__MVMovingPlatformGroup__WorldObjectClient_PositionChangedHandler_System__Object__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar7,(Delegate *)pUVar7,(MethodInfo *)0x0);
    if (pDVar8 == (Delegate *)0x0) {
      _UNK_? = 0;
      pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0;
    }
    else {
      pUStack_3 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      in_stack_9 =
           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      iVar10 = func_?();
      if (iVar10 == 0) goto code_?;
      pUStack_3 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      in_stack_9 =
           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      _UNK_? = iVar10;
      pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                   func_?();
      if (pUStack_3 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
      goto code_?;
    }
    func_?();
    pDVar8 = _UNK_?;
    pUVar7 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar7,(Object *)this,
               MethodInfo__MVMovingPlatformGroup__WorldObjectClient_SelectedChangedHandler_System__Object__SelectedEventArgs_
               ,(MethodInfo *)0x0);
    in_stack_11 = (MethodInfo *)&UNK_?;
    pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           (pDVar8,(Delegate *)pUVar7,(MethodInfo *)0x0);
    in_stack_9 =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_SelectedEventArgs>;
    if (pUStack_3 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0) {
      _UNK_? = (Delegate *)0x0;
      func_?();
    }
    else {
      pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_SelectedEventArgs>
      ;
      pDVar8 = (Delegate *)func_?();
      if (pDVar8 == (Delegate *)0x0) goto code_?;
      pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_SelectedEventArgs>
      ;
      in_stack_9 =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_SelectedEventArgs>;
      _UNK_? = pDVar8;
      pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                   func_?();
      if (pUStack_3 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
      goto code_?;
      func_?();
    }
  }
  pUStack_1 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)&stack0xffffffb8,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
             ,in_stack_11);
  pUStack_1 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)0xffffffff;
  pUVar12 = (this->fields)._._._.RotationChanged;
  pUVar7 = (UnityAction_2_System_Object_System_Object_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar7,(Object *)this,
             MethodInfo__MVMovingPlatformGroup__WorldObjectClient_RotationChangedHandler_System__Object__RotationChangedEventArgs_
             ,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pUVar12,(Delegate *)pUVar7,(MethodInfo *)0x0);
  pUVar13 = 
  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>;
  if (pDVar8 == (Delegate *)0x0) {
    (this->fields)._._._.RotationChanged =
         (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0;
    pUStack_1 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)0x0;
code_?:
    pDStack_2 = (Delegate *)&(this->fields)._._._.RotationChanged;
    pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)&UNK_?
    ;
    func_?();
    uVar14 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
    piVar15 = &(this->fields)._._._.interactionFlags;
    *(uint *)piVar15 = (uint)*piVar15 | 0x40;
    *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar14;
    bVar6 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                      ((MVWorldObjectClient *)this,InteractionFlags__Enum_IsPreview,
                       (MethodInfo *)0x0);
    if (bVar6 == 0) {
code_?:
      *unaff_FS_OFFSET = pUStack_3;
      return;
    }
    MVMovingPlatformGroup_AddPreviewBoxesToChildren(this,(MethodInfo *)0x0);
    pMVar16 = (this->fields).platform;
    if (pMVar16 != (MVMovingPlatform *)0x0) {
      pMVar17 = (pMVar16->fields)._._CubeModel_k__BackingField;
      if (pMVar17 != (MVCubeModelInstance *)0x0) {
        (pMVar17->fields)._._._.previewOwnerProfileId = (this->fields)._._._._.previewOwnerProfileId;
        pMVar16 = (this->fields).platform;
        if ((pMVar16 != (MVMovingPlatform *)0x0) &&
           (pMVar17 = (pMVar16->fields)._._CubeModel_k__BackingField,
           pMVar17 != (MVCubeModelInstance *)0x0)) {
          uVar14 = *(undefined4 *)((int)&(pMVar17->fields)._._.interactionFlags + 4);
          piVar15 = &(pMVar17->fields)._._.interactionFlags;
          *(uint *)piVar15 = (uint)*piVar15 | 0x20000;
          *(undefined4 *)((int)&(pMVar17->fields)._._.interactionFlags + 4) = uVar14;
          pDVar4 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)(this->fields).nodeIdToWoMap;
          if ((pDVar4 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                          *)0x0) &&
             (pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                       UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                       Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                 (pDVar4,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                                 ),
             pDVar5 != (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)0x0)) {
            mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
            StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                      ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                        *)&stack0xffffffc8,pDVar5,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
                      );
            pUStack_1 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)0x4;
            while (bVar6 = mscorlib.dll::System::Collections::Generic::
                           Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System
                           ::UInt32,System::Object]::
                           Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                     ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                       *)&stack0xffffffb8,
                                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                                     ), bVar6 != 0) {
              _UNK_? = (this->fields)._._._._.previewOwnerProfileId;
              _UNK_? = _UNK_? | 0x20000;
            }
            pUStack_1 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)
                        0xffffffff;
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
  else {
    pUStack_1 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>;
    pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)&UNK_?
    ;
    pDStack_2 = pDVar8;
    pUVar12 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)func_?();
    if (pUVar12 != (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
      (this->fields)._._._.RotationChanged = pUVar12;
      pUVar13 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>;
      pUStack_1 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>;
      pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                   &UNK_?;
      pDStack_2 = pDVar8;
      pUStack_1 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)
                  func_?();
      if (pUStack_1 != (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs___Class *)0x0)
      goto code_?;
    }
    pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)&UNK_?
    ;
    pDStack_2 = pDVar8;
    pUStack_1 = pUVar13;
    func_?();
code_?:
    pUStack_3 = in_stack_9;
    func_?();
  }
code_?:
  func_?();
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
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
  puStack_5 = &stack0xffffff80;
  puVar6 = &stack0xffffff80;
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
  aIStack_10[0].m_value = 0;
  if (pDVar9 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
code_?:
    uVar11 = func_?(pMStack_12,TypeInfo__MVMovingPlatformNode);
  }
  else {
    pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
              Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                        (&DStack_14,(Dictionary_2_System_UInt32_System_Object_ *)pDVar9,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                        );
    pMVar15 = (MVMovingPlatformNode *)(pDVar13->_current).key;
    uVar16 = *(undefined8 *)&(pDVar13->_current).value;
    DStack_14._current =
         (KeyValuePair_2_System_UInt32_System_Object_)((ulonglong)DStack_14._current & 0xffffffff);
    uStack_2 = 1;
    DStack_14._getEnumeratorRetType = (int32_t)&stack0xffffff8c;
    while (bVar17 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &stack0xffffff8c,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              ), bVar17 != 0) {
      pMStack_18 = (MethodInfo *)uVar16;
      pMStack_19 = pMStack_18;
      pMStack_20 = pMVar15;
      if ((pMVar15 == (MVMovingPlatformNode *)0x0) ||
         (pSVar21 = (String *)
                    (*(code *)(pMVar15->klass->vtable).ToString.method)
                              (pMVar15,(pMVar15->klass->vtable).get_Position.methodPtr),
         pSVar21 == (String *)0x0)) goto code_?;
      in_stack_8 = (String **)StringLiteral_Platform;
      bVar17 = mscorlib.dll::System::String::String_Equals_1
                         (pSVar21,StringLiteral_Platform,(MethodInfo *)0x0);
      if (bVar17 == 0) {
        if (pMStack_20 == (MVMovingPlatformNode *)0x0) goto code_?;
        pMStack_20 = (MVMovingPlatformNode *)func_?(3,pMStack_20);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Convert);
        }
        in_stack_8 = (String **)&UNK_?;
        pMStack_20 = (MVMovingPlatformNode *)
                     mscorlib.dll::System::Convert::Convert_ToInt32_14
                               ((String *)pMStack_20,(MethodInfo *)0x0);
        uVar11 = CONCAT44(TypeInfo__System__Int32,pMStack_19);
        if (pMStack_19 == (MethodInfo *)0x0) goto code_?;
        if ((((String__Class *)pMStack_19->methodPointer)->_0).element_class !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar22 = (int32_t *)func_?(pMStack_19);
        aIStack_10[0].m_value = *piVar22;
        pMStack_12 = (MVMovingPlatformNode *)
                     MVGroup::MVGroup_GetChild
                               ((MVGroup *)this,aIStack_10[0].m_value,(MethodInfo *)0x0);
        if (pMStack_12 == (MVMovingPlatformNode *)0x0) {
          pMStack_20 = (MVMovingPlatformNode *)func_?();
          if (pMStack_20 == (MVMovingPlatformNode *)0x0) goto code_?;
          func_?(0,StringLiteral_Platform_group_);
          pSVar21 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&this->fields,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)0x1;
          func_?(1,pSVar21);
          func_?(2,StringLiteral__init___Could_not_find_child_nod);
          pSVar21 = mscorlib.dll::System::Int32::Int32_ToString(aIStack_10,(MethodInfo *)0x0);
          func_?(3,pSVar21);
          func_?(4,StringLiteral___If_this_is_a_new_platform_grou);
          pMStack_19 = (MethodInfo *)
                       mscorlib.dll::System::String::String_Concat_6
                                 ((String__Array *)pMStack_20,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pMStack_19,(MethodInfo *)0x0);
          (this->fields).initializeFailed = 1;
          uStack_2 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffff8c,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,method_00);
          goto code_?;
        }
        pMStack_19 = (MethodInfo *)func_?();
        if (pMStack_19 == (MethodInfo *)0x0) goto code_?;
        pDVar23 = (this->fields).nodeIdToWoMap;
        if (pDVar23 == (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__set_Item
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar23,(int32_t)pMStack_20,
                   (Object *)pMStack_19,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__set_Item_int__MVMovingPlatformNode_
                  );
        this_00 = (this->fields).woIdToNodeIdMap;
        if (this_00 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
        Dictionary_2_System_Int32_System_Int32__set_Item
                  (this_00,((String__Fields *)&pMStack_19->invoker_method)->_stringLength,
                   (int32_t)pMStack_20,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                  );
      }
    }
    uStack_2 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffff8c,
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
    piVar24 = (int *)(pDVar13->_current).key;
    uVar16 = *(undefined8 *)&(pDVar13->_current).value;
    DStack_14._current =
         (KeyValuePair_2_System_UInt32_System_Object_)((ulonglong)DStack_14._current & 0xffffffff);
    uStack_2 = 4;
    DStack_14._getEnumeratorRetType = (int32_t)&stack0xffffff8c;
    while (bVar17 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &stack0xffffff8c,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              ), bVar17 != 0) {
      pMStack_18 = (MethodInfo *)uVar16;
      pMStack_19 = pMStack_18;
      piStack_25 = piVar24;
      if (piVar24 == (int *)0x0) goto code_?;
      pMStack_12 = (MVMovingPlatformNode *)
                   (**(code **)(*piVar24 + 0xd8))(piVar24,*(undefined4 *)(*piVar24 + 0xdc));
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      pMStack_12 = (MVMovingPlatformNode *)
                   mscorlib.dll::System::Convert::Convert_ToInt32_14
                             ((String *)pMStack_12,(MethodInfo *)0x0);
      uVar11 = CONCAT44(TypeInfo__System__Int32,pMStack_19);
      if (pMStack_19 == (MethodInfo *)0x0) goto code_?;
      if ((((String__Class *)pMStack_19->methodPointer)->_0).element_class !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      puVar26 = (undefined4 *)func_?(pMStack_19);
      pMStack_19 = (MethodInfo *)*puVar26;
      pDVar23 = (this->fields).nodeIdToWoMap;
      if (pDVar23 == (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) goto code_?;
      pMStack_20 = (MVMovingPlatformNode *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar23,(int32_t)pMStack_12
                              ,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                             );
      pDVar23 = (this->fields).nodeIdToWoMap;
      if ((pDVar23 == (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) ||
         (in_stack_8 = (String **)pMStack_19,
         pMStack_12 = (MVMovingPlatformNode *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar23,
                                 (int32_t)pMStack_19,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                                ), pMStack_20 == (MVMovingPlatformNode *)0x0))
      goto code_?;
      (pMStack_20->fields)._Next_k__BackingField = pMStack_12;
      func_?(&(pMStack_20->fields)._Next_k__BackingField,pMStack_12);
      if (pMStack_12 == (MVMovingPlatformNode *)0x0) goto code_?;
      (pMStack_12->fields)._Previous_k__BackingField = pMStack_20;
      func_?(&(pMStack_12->fields)._Previous_k__BackingField,pMStack_20);
    }
    uStack_2 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffff8c,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,(MethodInfo *)in_stack_8);
    uStack_2 = 0xffffffff;
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (this->fields)._.blueprintData;
    if (this_01 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar27 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (this_01,(Object *)StringLiteral_StartNode,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar11 = CONCAT44(TypeInfo__System__Int32,TVar27.m_Index);
    if (TVar27.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar27.m_Index + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar22 = (int32_t *)func_?(TVar27.m_Index);
      pDVar23 = (this->fields).nodeIdToWoMap;
      if (pDVar23 != (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) {
        pMVar15 = (MVMovingPlatformNode *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar23,*piVar22,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                            );
        (this->fields).startNode = pMVar15;
        func_?(&(this->fields).startNode,pMVar15);
        pMVar28 = (MVMovingPlatform *)
                  MVBlueprintBase::MVBlueprintBase_GetChild
                            ((MVBlueprintBase *)this,StringLiteral_Platform,(MethodInfo *)0x0);
        if (pMVar28 == (MVMovingPlatform *)0x0) {
          (this->fields).platform = (MVMovingPlatform *)0x0;
        }
        else if (((((pMVar28->klass->_1).naturalAligment <
                    (TypeInfo__MVMovingPlatform->_1).naturalAligment) ||
                  ((MVMovingPlatform__Class *)
                   (pMVar28->klass->_1).typeHierarchy
                   [(TypeInfo__MVMovingPlatform->_1).naturalAligment - 1] !=
                   TypeInfo__MVMovingPlatform)) ||
                 ((this->fields).platform = pMVar28,
                 (pMVar28->klass->_1).naturalAligment <
                 (TypeInfo__MVMovingPlatform->_1).naturalAligment)) ||
                ((MVMovingPlatform__Class *)
                 (pMVar28->klass->_1).typeHierarchy
                 [(TypeInfo__MVMovingPlatform->_1).naturalAligment - 1] !=
                 TypeInfo__MVMovingPlatform)) {
          func_?();
          goto code_?;
        }
        func_?();
        if ((this->fields).platform == (MVMovingPlatform *)0x0) {
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
        pMVar15 = (this->fields).startNode;
        pMVar28 = (this->fields).platform;
        if ((pMVar15 != (MVMovingPlatformNode *)0x0) &&
           (pMStack_12 = (pMVar15->fields)._Next_k__BackingField, pMVar28 != (MVMovingPlatform *)0x0
           )) {
          pMVar15 = (this->fields).startNode;
          (pMVar28->fields).start = pMVar15;
          func_?(&(pMVar28->fields).start,pMVar15);
          (pMVar28->fields).end = pMStack_12;
          func_?(&(pMVar28->fields).end,pMStack_12);
          MVMovingPlatform::MVMovingPlatform_RecalculateMovement(pMVar28,(MethodInfo *)0x0);
          pUVar29 = (this->fields)._._._.ScaleChanged;
          this_03 = (UnityAction_2_System_Object_System_Object_ *)
                    func_?(
                                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                   );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_03,(Object *)this,
                     MethodInfo__MVMovingPlatformGroup__WorldObjectClient_ScaleChangedHandler_System__Object__ScaleChangedEventArgs_
                     ,(MethodInfo *)0x0);
          pDVar30 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pUVar29,(Delegate *)this_03,(MethodInfo *)0x0);
          if (pDVar30 == (Delegate *)0x0) {
            (this->fields)._._._.ScaleChanged =
                 (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
          }
          else {
            pUVar29 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)func_?();
            if (pUVar29 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0)
            goto code_?;
            (this->fields)._._._.ScaleChanged = pUVar29;
            iVar31 = func_?();
            if (iVar31 == 0) goto code_?;
          }
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
          pLVar32 = (this->fields).lineRenderer;
          if (pLVar32 != (LineRenderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_useWorldSpace
                      (pLVar32,0,(MethodInfo *)0x0);
            this_02 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)(this->fields).nodeIdToWoMap;
            pLVar32 = (this->fields).lineRenderer;
            if ((this_02 !=
                 (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)0x0) &&
               (value = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                        UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                                  (this_02,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Count__
                                  ), pLVar32 != (LineRenderer *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
                        (pLVar32,value,(MethodInfo *)0x0);
              pKVar33 = (KeyValuePair_2_System_UInt32_System_Object_ *)
                        (*(code *)(this->klass->vtable).get_Scale.method)();
              DStack_14._current = *pKVar33;
              DStack_14._getEnumeratorRetType = pKVar33[1].key;
              value_00 = (float)DStack_14._current.key * _UNK_?;
              pLVar32 = (this->fields).lineRenderer;
              if (pLVar32 != (LineRenderer *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                          (pLVar32,value_00,(MethodInfo *)0x0);
                pLVar32 = (this->fields).lineRenderer;
                if (pLVar32 != (LineRenderer *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                            (pLVar32,value_00,(MethodInfo *)0x0);
                  pMVar15 = (this->fields).startNode;
                  this = (MVMovingPlatformGroup *)0x0;
                  pMStack_12 = (MVMovingPlatformNode *)(pMVar1->fields).lineRenderer;
                  if ((pMVar15 != (MVMovingPlatformNode *)0x0) &&
                     (pVVar34 = (Vector3 *)
                                (*(code *)(pMVar15->klass->vtable).get_Position.method)
                                          (&DStack_14._current,pMVar15,
                                           (pMVar15->klass->vtable).set_Position.methodPtr),
                     pMStack_12 != (MVMovingPlatformNode *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                              ((LineRenderer *)pMStack_12,0,*pVVar34,(MethodInfo *)0x0);
                    do {
                      if (((pMVar15->fields)._Next_k__BackingField == (MVMovingPlatformNode *)0x0)
                         || ((pMVar15->fields)._Next_k__BackingField == (pMVar1->fields).startNode))
                      goto code_?;
                      pMVar35 = (pMVar15->fields)._Next_k__BackingField;
                      pMStack_12 = (MVMovingPlatformNode *)(pMVar1->fields).lineRenderer;
                      this = (MVMovingPlatformGroup *)((int)&this->klass + 1);
                      pMVar36 = pMVar35->klass;
                      pVVar34 = (Vector3 *)
                                (*(code *)(pMVar36->vtable).get_Position.method)
                                          (auStack_37,pMVar35,(pMVar36->vtable).set_Position.methodPtr
                                          );
                      if (pMStack_12 == (MVMovingPlatformNode *)0x0) break;
                      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                      LineRenderer_SetPosition
                                ((LineRenderer *)pMStack_12,(int32_t)this,*pVVar34,(MethodInfo *)0x0
                                );
                      pMVar15 = (pMVar15->fields)._Next_k__BackingField;
                    } while (pMVar15 != (MVMovingPlatformNode *)0x0);
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  uVar38 = func_?(uVar11);
  uVar38 = func_?(uVar38);
  func_?(uVar38);
code_?:
  func_?();
  pcVar39 = (code *)swi(3);
  (*pcVar39)();
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
  aIStack_6[0].m_value = 0;
  if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
code_?:
    uVar7 = func_?(pMStack_8,TypeInfo__MVMovingPlatformNode);
  }
  else {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_10,(Dictionary_2_System_UInt32_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    pSVar11 = (String__Array *)(pDVar9->_current).key;
    uVar12 = *(undefined8 *)&(pDVar9->_current).value;
    DStack_10._current =
         (KeyValuePair_2_System_UInt32_System_Object_)((ulonglong)DStack_10._current & 0xffffffff);
    DStack_10._getEnumeratorRetType = (int32_t)&stack0xffffff94;
    while (bVar13 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                              &stack0xffffff94,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                             ), bVar13 != 0) {
      pMStack_14 = (MethodInfo *)uVar12;
      pMStack_15 = pMStack_14;
      pSStack_16 = pSVar11;
      if ((pSVar11 == (String__Array *)0x0) ||
         (pSVar17 = (String *)
                   (*(code *)(((Object__Class *)pSVar11->klass)->vtable).ToString.method)
                             (pSVar11,((Object__Class *)pSVar11->klass)[1]._0.image),
         pSVar17 == (String *)0x0)) goto code_?;
      in_stack_5 = (String **)StringLiteral_Platform;
      bVar13 = mscorlib.dll::System::String::String_Equals_1
                        (pSVar17,StringLiteral_Platform,(MethodInfo *)0x0);
      if (bVar13 == 0) {
        if (pSStack_16 == (String__Array *)0x0) goto code_?;
        pSStack_16 = (String__Array *)func_?(3,pSStack_16);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Convert);
        }
        in_stack_5 = (String **)&UNK_?;
        pSStack_16 = (String__Array *)
                     mscorlib.dll::System::Convert::Convert_ToInt32_14
                               ((String *)pSStack_16,(MethodInfo *)0x0);
        uVar7 = CONCAT44(TypeInfo__System__Int32,pMStack_15);
        if (pMStack_15 == (MethodInfo *)0x0) goto code_?;
        if ((((String__Class *)pMStack_15->methodPointer)->_0).element_class !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar18 = (int32_t *)func_?(pMStack_15);
        aIStack_6[0].m_value = *piVar18;
        pMStack_8 = (MVBlueprintBase__Class *)
                     MVGroup::MVGroup_GetChild
                               ((MVGroup *)in_stack_2,aIStack_6[0].m_value,(MethodInfo *)0x0
                               );
        if (pMStack_8 == (MVBlueprintBase__Class *)0x0) {
          pSStack_16 = (String__Array *)func_?();
          if (pSStack_16 == (String__Array *)0x0) goto code_?;
          func_?(0,StringLiteral_Platform_group_);
          pSVar17 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)&in_stack_2->fields,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)0x1;
          func_?(1,pSVar17);
          func_?(2,StringLiteral__init___Could_not_find_child_nod);
          pSVar17 = mscorlib.dll::System::Int32::Int32_ToString(aIStack_6,(MethodInfo *)0x0);
          func_?(3,pSVar17);
          func_?(4,StringLiteral___If_this_is_a_new_platform_grou);
          pMStack_15 = (MethodInfo *)
                       mscorlib.dll::System::String::String_Concat_6(pSStack_16,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pMStack_15,(MethodInfo *)0x0);
          *(undefined1 *)&in_stack_2[1].fields._._._.inputLinkRefs = 1;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffff94,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,method_00);
          goto code_?;
        }
        pMStack_15 = (MethodInfo *)func_?();
        if (pMStack_15 == (MethodInfo *)0x0) goto code_?;
        pDVar19 = (Dictionary_2_System_Int32_System_Object_ *)
                 in_stack_2[1].fields._._._.itemId;
        if (pDVar19 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__set_Item
                  (pDVar19,(int32_t)pSStack_16,(Object *)pMStack_15,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__set_Item_int__MVMovingPlatformNode_
                  );
        this_01 = *(Dictionary_2_System_Int32_System_Int32_ **)
                   &in_stack_2[1].fields._._._.inputState;
        if (this_01 == (Dictionary_2_System_Int32_System_Int32_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Int32]::
        Dictionary_2_System_Int32_System_Int32__set_Item
                  (this_01,((String__Fields *)&pMStack_15->invoker_method)->_stringLength,
                   (int32_t)pSStack_16,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                  );
      }
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffff94,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,(MethodInfo *)in_stack_4);
    this_02 = (Dictionary_2_System_UInt32_System_Object_ *)in_stack_2[1].fields._._._.id;
    if (this_02 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) goto code_?;
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_10,this_02,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    piVar20 = (int *)(pDVar9->_current).key;
    uVar12 = *(undefined8 *)&(pDVar9->_current).value;
    DStack_10._current =
         (KeyValuePair_2_System_UInt32_System_Object_)((ulonglong)DStack_10._current & 0xffffffff);
    DStack_10._getEnumeratorRetType = (int32_t)&stack0xffffff94;
    while (bVar13 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                              &stack0xffffff94,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                             ), bVar13 != 0) {
      pMStack_14 = (MethodInfo *)uVar12;
      pMStack_15 = pMStack_14;
      piStack_21 = piVar20;
      if (piVar20 == (int *)0x0) goto code_?;
      pMStack_8 = (MVBlueprintBase__Class *)
                   (**(code **)(*piVar20 + 0xd8))(piVar20,*(undefined4 *)(*piVar20 + 0xdc));
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      pMStack_8 = (MVBlueprintBase__Class *)
                   mscorlib.dll::System::Convert::Convert_ToInt32_14
                             ((String *)pMStack_8,(MethodInfo *)0x0);
      uVar7 = CONCAT44(TypeInfo__System__Int32,pMStack_15);
      if (pMStack_15 == (MethodInfo *)0x0) goto code_?;
      if ((((String__Class *)pMStack_15->methodPointer)->_0).element_class !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      puVar22 = (undefined4 *)func_?(pMStack_15);
      pMStack_15 = (MethodInfo *)*puVar22;
      pDVar19 = (Dictionary_2_System_Int32_System_Object_ *)in_stack_2[1].fields._._._.itemId;
      if (pDVar19 == (Dictionary_2_System_Int32_System_Object_ *)0x0) goto code_?;
      pSStack_16 = (String__Array *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             (pDVar19,(int32_t)pMStack_8,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                             );
      pDVar19 = (Dictionary_2_System_Int32_System_Object_ *)in_stack_2[1].fields._._._.itemId;
      if ((pDVar19 == (Dictionary_2_System_Int32_System_Object_ *)0x0) ||
         (in_stack_5 = (String **)pMStack_15,
         pMStack_8 = (MVBlueprintBase__Class *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                (pDVar19,(int32_t)pMStack_15,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                                ), pSStack_16 == (String__Array *)0x0)) goto code_?;
      pSStack_16[1].vector[0xf] = (String *)pMStack_8;
      func_?(pSStack_16[1].vector + 0xf,pMStack_8);
      if (pMStack_8 == (MVBlueprintBase__Class *)0x0) goto code_?;
      (pMStack_8->vtable).ToString.method = (MethodInfo *)pSStack_16;
      func_?(&(pMStack_8->vtable).ToString.method,pSStack_16);
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffff94,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,(MethodInfo *)in_stack_5);
    this_03 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (in_stack_2->fields).blueprintData;
    if (this_03 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (this_03,(Object *)StringLiteral_StartNode,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar7 = CONCAT44(TypeInfo__System__Int32,TVar23.m_Index);
    if (TVar23.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar23.m_Index + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar18 = (int32_t *)func_?(TVar23.m_Index);
      pDVar19 = (Dictionary_2_System_Int32_System_Object_ *)in_stack_2[1].fields._._._.itemId;
      if (pDVar19 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
        pOVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            (pDVar19,*piVar18,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                            );
        in_stack_2[1].fields._._._.groupId = (int32_t)pOVar24;
        func_?(&in_stack_2[1].fields._._._.groupId,pOVar24);
        pMVar25 = MVBlueprintBase::MVBlueprintBase_GetChild
                            (in_stack_2,StringLiteral_Platform,(MethodInfo *)0x0);
        if (pMVar25 == (MVWorldObjectClient *)0x0) {
          in_stack_2[1].fields._._._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)0x0;
        }
        else if (((((pMVar25->klass->_1).naturalAligment <
                    (TypeInfo__MVMovingPlatform->_1).naturalAligment) ||
                  ((MVMovingPlatform__Class *)
                   (pMVar25->klass->_1).typeHierarchy
                   [(TypeInfo__MVMovingPlatform->_1).naturalAligment - 1] !=
                   TypeInfo__MVMovingPlatform)) ||
                 (in_stack_2[1].fields._._._.outputLinkRefs =
                       (List_1_MV_WorldObject_Link_ *)pMVar25,
                 (pMVar25->klass->_1).naturalAligment <
                 (TypeInfo__MVMovingPlatform->_1).naturalAligment)) ||
                ((MVMovingPlatform__Class *)
                 (pMVar25->klass->_1).typeHierarchy
                 [(TypeInfo__MVMovingPlatform->_1).naturalAligment - 1] !=
                 TypeInfo__MVMovingPlatform)) {
          func_?();
          goto code_?;
        }
        func_?();
        if (in_stack_2[1].fields._._._.outputLinkRefs == (List_1_MV_WorldObject_Link_ *)0x0)
        {
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
        iVar26 = in_stack_2[1].fields._._._.groupId;
        this_04 = (MVMovingPlatform *)in_stack_2[1].fields._._._.outputLinkRefs;
        if ((iVar26 != 0) &&
           (pMStack_8 = *(MVBlueprintBase__Class **)(iVar26 + 0xdc),
           this_04 != (MVMovingPlatform *)0x0)) {
          pMVar27 = (MVMovingPlatformNode *)in_stack_2[1].fields._._._.groupId;
          (this_04->fields).start = pMVar27;
          func_?(&(this_04->fields).start,pMVar27);
          (this_04->fields).end = (MVMovingPlatformNode *)pMStack_8;
          func_?(&(this_04->fields).end,pMStack_8);
          MVMovingPlatform::MVMovingPlatform_RecalculateMovement(this_04,(MethodInfo *)0x0);
          pUVar28 = (in_stack_2->fields)._._.ScaleChanged;
          this_07 = (UnityAction_2_System_Object_System_Object_ *)
                    func_?(
                                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                   );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_07,(Object *)in_stack_2,
                     MethodInfo__MVMovingPlatformGroup__WorldObjectClient_ScaleChangedHandler_System__Object__ScaleChangedEventArgs_
                     ,(MethodInfo *)0x0);
          pDVar29 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pUVar28,(Delegate *)this_07,(MethodInfo *)0x0);
          if (pDVar29 == (Delegate *)0x0) {
            (in_stack_2->fields)._._.ScaleChanged =
                 (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
          }
          else {
            pUVar28 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)func_?();
            if (pUVar28 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0)
            goto code_?;
            (in_stack_2->fields)._._.ScaleChanged = pUVar28;
            iVar26 = func_?();
            if (iVar26 == 0) goto code_?;
          }
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
            this_05 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)in_stack_2[1].fields._._._.itemId;
            this_06 = in_stack_2[1].klass;
            if ((this_05 !=
                 (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)0x0) &&
               (value = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                        UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                                  (this_05,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Count__
                                  ), this_06 != (MVBlueprintBase__Class *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
                        ((LineRenderer *)this_06,value,(MethodInfo *)0x0);
              pKVar30 = (KeyValuePair_2_System_UInt32_System_Object_ *)
                        (*(code *)(in_stack_2->klass->vtable).get_Scale.method)();
              DStack_10._current = *pKVar30;
              DStack_10._getEnumeratorRetType = pKVar30[1].key;
              value_00 = (float)DStack_10._current.key * _UNK_?;
              if (in_stack_2[1].klass != (MVBlueprintBase__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                          ((LineRenderer *)in_stack_2[1].klass,value_00,(MethodInfo *)0x0);
                if (in_stack_2[1].klass != (MVBlueprintBase__Class *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                            ((LineRenderer *)in_stack_2[1].klass,value_00,(MethodInfo *)0x0);
                  piVar20 = (int *)in_stack_2[1].fields._._._.groupId;
                  in_stack_2 = (MVBlueprintBase *)0x0;
                  pMStack_8 = pMVar1[1].klass;
                  if ((piVar20 != (int *)0x0) &&
                     (pVVar31 = (Vector3 *)
                                (**(code **)(*piVar20 + 0xe0))
                                          (&DStack_10._current,piVar20,
                                           *(undefined4 *)(*piVar20 + 0xe4)),
                     pMStack_8 != (MVBlueprintBase__Class *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPosition
                              ((LineRenderer *)pMStack_8,0,*pVVar31,(MethodInfo *)0x0);
                    do {
                      if ((piVar20[0x37] == 0) || (piVar20[0x37] == pMVar1[1].fields._._._.groupId))
                      goto code_?;
                      pMStack_8 = pMVar1[1].klass;
                      in_stack_2 = (MVBlueprintBase *)((int)in_stack_2 + 1);
                      iVar26 = *(int *)piVar20[0x37];
                      pVVar31 = (Vector3 *)
                                (**(code **)(iVar26 + 0xe0))
                                          (auStack_32,(int *)piVar20[0x37],
                                           *(undefined4 *)(iVar26 + 0xe4));
                      if (pMStack_8 == (MVBlueprintBase__Class *)0x0) break;
                      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                      LineRenderer_SetPosition
                                ((LineRenderer *)pMStack_8,(int32_t)in_stack_2,*pVVar31,
                                 (MethodInfo *)0x0);
                      piVar20 = (int *)piVar20[0x37];
                    } while (piVar20 != (int *)0x0);
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  uVar3 = func_?(uVar7);
  uVar3 = func_?(uVar3);
  func_?(uVar3);
code_?:
  func_?();
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
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
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  MVWorldObjectClient::MVWorldObjectClient_SetWorldObjectToPurchased
            ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pMVar7 = (this->fields).platform;
  if ((pMVar7 != (MVMovingPlatform *)0x0) &&
     (pMVar8 = (pMVar7->fields)._._CubeModel_k__BackingField, pMVar8 != (MVCubeModelInstance *)0x0))
  {
    (*(code *)(pMVar8->klass->vtable).SetWorldObjectToPurchased.method)();
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
        pDVar9 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                 StyleSheetCache+SheetHandleKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                           (&DStack_10,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
                           );
        DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar9->_dictionary;
        DStack_6._index = pDVar9->_index;
        DStack_6._version = pDVar9->_version;
        DStack_6._currentValue = pDVar9->_currentValue;
        DStack_10._version = 0;
        uStack_1 = 1;
        DStack_10._currentValue = (Object *)&DStack_6;
        while( true ) {
          bVar11 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            (&DStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                            );
          if (bVar11 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&DStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
                       ,unaff_EBX);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          if (DStack_6._currentValue == (Object *)0x0) break;
          (*(code *)(DStack_6._currentValue)->klass[2]._1.static_fields_size)();
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
              if ((pMVar4->fields)._Next_k__BackingField == (MVMovingPlatformNode *)0x0) {
                return;
              }
              if ((pMVar4->fields)._Next_k__BackingField == (this->fields).startNode) {
                return;
              }
              pMVar6 = (pMVar4->fields)._Next_k__BackingField;
              index = index + 1;
              pLVar1 = (this->fields).lineRenderer;
              pMVar7 = pMVar6->klass;
              pVVar5 = (Vector3 *)
                       (*(code *)(pMVar7->vtable).get_Position.method)
                                 (&stack0xffffffe4,pMVar6,(pMVar7->vtable).set_Position.methodPtr);
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
    if (((sender->klass->_1).naturalAligment < (TypeInfo__MVMovingPlatformNode->_1).naturalAligment)
       || ((MVMovingPlatformNode__Class *)
           (sender->klass->_1).typeHierarchy
           [(TypeInfo__MVMovingPlatformNode->_1).naturalAligment - 1] !=
           TypeInfo__MVMovingPlatformNode)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    pMVar2 = (MVMovingPlatformNode *)0x0;
    if (bVar1) {
      pMVar2 = (MVMovingPlatformNode *)sender;
    }
    if (pMVar2 != (MVMovingPlatformNode *)0x0) {
      this_00 = (this->fields).platform;
      if (this_00 == (MVMovingPlatform *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((this_00->fields).start == pMVar2) || ((this_00->fields).end == pMVar2)) {
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
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__Dictionary__
            );
  (this->fields).nodeIdToWoMap = (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)pDVar1;
  func_?(&(this->fields).nodeIdToWoMap,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
  (this->fields).woIdToNodeIdMap = (Dictionary_2_System_Int32_System_Int32_ *)pDVar1;
  func_?(&(this->fields).woIdToNodeIdMap,pDVar1);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 != (PrefabPool *)0x0) {
    MVBlueprintBase::MVBlueprintBase__ctor_2
              ((MVBlueprintBase *)this,data,(pPVar2->fields).mvMovingPlatformGroupPrefab,
               worldObjects,(MethodInfo *)0x0);
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              (this->fields)._.blueprintData;
    if (this_00 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        (this_00,(Object *)StringLiteral_NextNodeMap,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar3.m_Index == 0) {
        (this->fields).nextNodeMap = (Dictionary_2_System_Object_System_Object_ *)0x0;
      }
      else {
        if ((*(byte *)(*(int *)TVar3.m_Index + 0xb8) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           (*(Dictionary_2_System_Object_System_Object___Class **)
             (*(int *)(*(int *)TVar3.m_Index + 100) + -4 +
             (uint)(
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment * 4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
        (this->fields).nextNodeMap = (Dictionary_2_System_Object_System_Object_ *)TVar3.m_Index;
        if ((*(byte *)(*(int *)TVar3.m_Index + 0xb8) <
             (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1
             ).naturalAligment) ||
           (*(Dictionary_2_System_Object_System_Object___Class **)
             (*(int *)(*(int *)TVar3.m_Index + 100) + -4 +
             (uint)(
                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   ->_1).naturalAligment * 4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
      }
      func_?();
      this_01 = (this->fields)._._._.gameObject;
      if (this_01 != (GameObject *)0x0) {
        pLVar4 = (LineRenderer *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentInChildren_1
                           (this_01,
                            UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                           );
        (this->fields).lineRenderer = pLVar4;
        func_?(&(this->fields).lineRenderer);
        piVar5 = &(this->fields)._._._.interactionFlags;
        *(uint *)piVar5 = (uint)*piVar5 | 0x9000;
        uVar6 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
        piVar7 = &(this->fields)._._._.previewLayerMask;
        *piVar7 = *piVar7 | 0x800;
        *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar6;
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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

