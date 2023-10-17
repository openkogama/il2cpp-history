
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
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  pMVar7 = (this->fields).platform;
  if ((pMVar7 != (MVMovingPlatform *)0x0) &&
     (pMVar8 = (pMVar7->fields)._._CubeModel_k__BackingField, pMVar8 != (MVCubeModelInstance *)0x0))
  {
    (*(pMVar8->klass->vtable).AddPreviewBox.methodPtr)
              (pMVar8,(pMVar8->klass->vtable).AddPreviewBox.method);
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).nodeIdToWoMap;
    if (this_00 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                          );
      if (this_01 !=
          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
           *)0x0) {
        pDVar9 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                 Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                           (&DStack_10,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
                           );
        DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar9->_dictionary;
        DStack_6._index = pDVar9->_index;
        DStack_6._version = pDVar9->_version;
        DStack_6._currentValue = pDVar9->_currentValue;
        DStack_10._version = 0;
        uStack_1 = 1;
        DStack_10._currentValue = (Object *)&DStack_6;
        while( true ) {
          bVar11 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  Object,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            (&DStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                            );
          if (bVar11 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&DStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
                       ,unaff_EDI);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          if (DStack_6._currentValue == (Object *)0x0) break;
          (*(DStack_6._currentValue)->klass[3]._1.unity_user_data)
                    (DStack_6._currentValue,
                     (DStack_6._currentValue)->klass[3]._1.initializationExceptionGCHandle);
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
  this_00 = this;
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
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
  pDVar4 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
           (this->fields).nodeIdToWoMap;
  if ((pDVar4 == (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)0x0) ||
     (pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                         (pDVar4,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                         ),
     pDVar5 == (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                *)0x0)) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+ValueCollection[System::Text
  ::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
  Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
            ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
              *)&stack0xffffffc8,pDVar5,
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
            );
  uStack_1 = 1;
  while (bVar6 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                 Object,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                           ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                             *)&stack0xffffffb8,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                           ), bVar6 != 0) {
    pUVar7 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    if (pUVar7 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar7,(Object *)this,
               MethodInfo__MVMovingPlatformGroup__WorldObjectClient_PositionChangedHandler_System__Object__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar7,(Delegate *)pUVar7,(MethodInfo *)0x0);
    if (pDVar8 == (Delegate *)0x0) {
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
      pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                   func_?();
      if (pUStack_3 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
      goto code_?;
    }
    func_?();
    pDVar8 = _UNK_?;
    pUVar7 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    if (pUVar7 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
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
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)&stack0xffffffb8,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
             ,in_stack_11);
  uStack_1 = 0xffffffff;
  pUVar12 = (this->fields)._._._.RotationChanged;
  method_00 = (MethodInfo *)&UNK_?;
  pUVar7 = (UnityAction_2_System_Object_System_Object_ *)func_?();
  if (pUVar7 == (UnityAction_2_System_Object_System_Object_ *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar7,(Object *)this,
             MethodInfo__MVMovingPlatformGroup__WorldObjectClient_RotationChangedHandler_System__Object__RotationChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pUVar12,(Delegate *)pUVar7,(MethodInfo *)0x0);
  this = (MVMovingPlatformGroup *)
         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>;
  if (pDVar8 == (Delegate *)0x0) {
    pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0;
    (this_00->fields)._._._.RotationChanged =
         (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0;
code_?:
    func_?();
    uVar13 = *(undefined4 *)((int)&(this_00->fields)._._._.interactionFlags + 4);
    piVar14 = &(this_00->fields)._._._.interactionFlags;
    *(uint *)piVar14 = (uint)*piVar14 | 0x40;
    *(undefined4 *)((int)&(this_00->fields)._._._.interactionFlags + 4) = uVar13;
    bVar6 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                      ((MVWorldObjectClient *)this_00,InteractionFlags__Enum_IsPreview,
                       (MethodInfo *)0x0);
    if (bVar6 == 0) {
code_?:
      *unaff_FS_OFFSET = pUStack_3;
      return;
    }
    MVMovingPlatformGroup_AddPreviewBoxesToChildren(this_00,(MethodInfo *)0x0);
    pMVar15 = (this_00->fields).platform;
    if (pMVar15 != (MVMovingPlatform *)0x0) {
      pMVar16 = (pMVar15->fields)._._CubeModel_k__BackingField;
      if (pMVar16 != (MVCubeModelInstance *)0x0) {
        (pMVar16->fields)._._._.previewOwnerProfileId =
             (this_00->fields)._._._._.previewOwnerProfileId;
        pMVar15 = (this_00->fields).platform;
        if ((pMVar15 != (MVMovingPlatform *)0x0) &&
           (pMVar16 = (pMVar15->fields)._._CubeModel_k__BackingField,
           pMVar16 != (MVCubeModelInstance *)0x0)) {
          uVar13 = *(undefined4 *)((int)&(pMVar16->fields)._._.interactionFlags + 4);
          piVar14 = &(pMVar16->fields)._._.interactionFlags;
          *(uint *)piVar14 = (uint)*piVar14 | 0x20000;
          *(undefined4 *)((int)&(pMVar16->fields)._._.interactionFlags + 4) = uVar13;
          pDVar4 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                    *)(this_00->fields).nodeIdToWoMap;
          if ((pDVar4 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                          *)0x0) &&
             (pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                       RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                       Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                                 (pDVar4,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                                 ),
             pDVar5 != (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)0x0)) {
            mscorlib.dll::System::Collections::Generic::
            Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
            Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                      ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                        *)&stack0xffffffc8,pDVar5,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
                      );
            uStack_1 = 4;
            while (bVar6 = mscorlib.dll::System::Collections::Generic::
                           Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System
                           ::Object,System::Object]::
                           Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                     ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object_
                                       *)&stack0xffffffb8,
                                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                                     ), bVar6 != 0) {
              _UNK_? = (this_00->fields)._._._._.previewOwnerProfileId;
              _UNK_? = _UNK_? | 0x20000;
            }
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
    pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
    ;
    pUVar12 = (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)func_?();
    if (pUVar12 != (UnityAction_2_MVWorldObjectClient_RotationChangedEventArgs_ *)0x0) {
      (this_00->fields)._._._.RotationChanged = pUVar12;
      pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
      ;
      this = (MVMovingPlatformGroup *)
             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_RotationChangedEventArgs>
      ;
      pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                   func_?();
      if (pUStack_3 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
      goto code_?;
    }
    pUStack_3 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)this;
    func_?();
code_?:
    pUStack_3 = in_stack_9;
    func_?();
  }
code_?:
  func_?();
  func_?();
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
  puStack_5 = &stack0xffffff80;
  pMStack_6 = this;
  puVar7 = &stack0xffffff80;
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
    in_stack_8 =
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
    in_stack_9 = &StringLiteral_StartNode;
    func_?();
    func_?(&StringLiteral___If_this_is_a_new_platform_grou);
    func_?(&StringLiteral_Platform_group_);
    func_?(&StringLiteral__init___Could_not_find_child_pla);
    cRam_? = '\x01';
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  pDVar10 = (this->fields)._.childIdMap;
  IStack_11.m_value = 0;
  if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
code_?:
    uVar12 = func_?(pMStack_13,TypeInfo__MVMovingPlatformNode);
  }
  else {
    pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                        (&DStack_15,pDVar10,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                        );
    pMVar16 = (MVWorldObjectClient__Class *)(pDVar14->_current).key;
    uVar17 = *(undefined8 *)&(pDVar14->_current).value;
    DStack_15._current =
         (KeyValuePair_2_System_Object_System_Object_)((ulonglong)DStack_15._current & 0xffffffff);
    uStack_2 = 1;
    DStack_15._getEnumeratorRetType = (int32_t)&stack0xffffff8c;
    while (bVar18 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &stack0xffffff8c,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              ), bVar18 != 0) {
      pMStack_19 = (MethodInfo *)uVar17;
      pMStack_20 = pMStack_19;
      pMStack_21 = pMVar16;
      if ((pMVar16 == (MVWorldObjectClient__Class *)0x0) ||
         (pOVar22 = (Object__Class *)(pMVar16->_0).image,
         pSVar23 = (String *)
                   (*(pOVar22->vtable).ToString.methodPtr)(pMVar16,(pOVar22->vtable).ToString.method),
         pSVar23 == (String *)0x0)) goto code_?;
      in_stack_9 = (String **)StringLiteral_Platform;
      bVar18 = mscorlib.dll::System::String::String_Equals_1
                         (pSVar23,StringLiteral_Platform,(MethodInfo *)0x0);
      if (bVar18 == 0) {
        if (pMStack_21 == (MVWorldObjectClient__Class *)0x0) goto code_?;
        pMStack_21 = (MVWorldObjectClient__Class *)func_?(3,pMStack_21);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Convert);
        }
        in_stack_9 = (String **)&UNK_?;
        pMStack_21 = (MVWorldObjectClient__Class *)
                     mscorlib.dll::System::Convert::Convert_ToInt32_14
                               ((String *)pMStack_21,(MethodInfo *)0x0);
        uVar12 = CONCAT44(TypeInfo__System__Int32,pMStack_20);
        if (pMStack_20 == (MethodInfo *)0x0) goto code_?;
        if ((((String__Class *)pMStack_20->methodPointer)->_0).element_class !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar24 = (int32_t *)func_?(pMStack_20);
        IStack_11.m_value = *piVar24;
        pMStack_13 = MVGroup::MVGroup_GetChild((MVGroup *)this,IStack_11.m_value,(MethodInfo *)0x0);
        if (pMStack_13 == (MVWorldObjectClient *)0x0) {
          values = (String__Array *)func_?();
          if (values == (String__Array *)0x0) goto code_?;
          if ((StringLiteral_Platform_group_ != (String *)0x0) &&
             (iVar25 = func_?(StringLiteral_Platform_group_,
                                       (values->klass->_0).element_class), iVar25 == 0))
          goto code_?;
          func_?(0,StringLiteral_Platform_group_);
          pMStack_20 = (MethodInfo *)
                       mscorlib.dll::System::Int32::Int32_ToString
                                 ((Int32 *)&this->fields,(MethodInfo *)0x0);
          if ((pMStack_20 != (MethodInfo *)0x0) &&
             (iVar25 = func_?(pMStack_20,(values->klass->_0).element_class), iVar25 == 0))
          goto code_?;
          method_00 = (MethodInfo *)0x1;
          func_?(1,pMStack_20);
          if ((StringLiteral__init___Could_not_find_child_nod != (String *)0x0) &&
             (iVar25 = func_?(StringLiteral__init___Could_not_find_child_nod,
                                       (values->klass->_0).element_class), iVar25 == 0))
          goto code_?;
          func_?(2,StringLiteral__init___Could_not_find_child_nod);
          pMStack_20 = (MethodInfo *)
                       mscorlib.dll::System::Int32::Int32_ToString(&IStack_11,(MethodInfo *)0x0);
          if ((pMStack_20 != (MethodInfo *)0x0) &&
             (iVar25 = func_?(pMStack_20,(values->klass->_0).element_class), iVar25 == 0))
          goto code_?;
          func_?(3,pMStack_20);
          if ((StringLiteral___If_this_is_a_new_platform_grou != (String *)0x0) &&
             (iVar25 = func_?(StringLiteral___If_this_is_a_new_platform_grou,
                                       (values->klass->_0).element_class), iVar25 == 0))
          goto code_?;
          func_?(4,StringLiteral___If_this_is_a_new_platform_grou);
          pSVar23 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)pSVar23,(MethodInfo *)0x0);
          uStack_2 = 0xffffffff;
          (this->fields).initializeFailed = 1;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffff8c,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,method_00);
          goto code_?;
        }
        pMStack_20 = (MethodInfo *)func_?();
        if (pMStack_20 == (MethodInfo *)0x0) goto code_?;
        pDVar10 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).nodeIdToWoMap;
        if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar10,(Object *)pMStack_21,(Object *)pMStack_20,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__set_Item_int__MVMovingPlatformNode_
                  );
        pDVar10 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).woIdToNodeIdMap;
        if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar10,(Object *)((String__Fields *)&pMStack_20->invoker_method)->_stringLength,
                   (Object *)pMStack_21,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                  );
      }
    }
    uStack_2 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&stack0xffffff8c,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,(MethodInfo *)in_stack_8);
    uStack_2 = 0xffffffff;
    pDVar10 = (this->fields).nextNodeMap;
    if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                        (&DStack_15,pDVar10,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                        );
    pOVar26 = (pDVar14->_current).key;
    uVar17 = *(undefined8 *)&(pDVar14->_current).value;
    DStack_15._current =
         (KeyValuePair_2_System_Object_System_Object_)((ulonglong)DStack_15._current & 0xffffffff);
    uStack_2 = 4;
    DStack_15._getEnumeratorRetType = (int32_t)&stack0xffffff8c;
    while (bVar18 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                               &stack0xffffff8c,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                              ), bVar18 != 0) {
      pMStack_19 = (MethodInfo *)uVar17;
      pMStack_20 = pMStack_19;
      pOStack_27 = pOVar26;
      if (pOVar26 == (Object *)0x0) goto code_?;
      pMStack_13 = (MVWorldObjectClient *)
                   (*(pOVar26->klass->vtable).ToString.methodPtr)
                             (pOVar26,(pOVar26->klass->vtable).ToString.method);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      pMStack_13 = (MVWorldObjectClient *)
                   mscorlib.dll::System::Convert::Convert_ToInt32_14
                             ((String *)pMStack_13,(MethodInfo *)0x0);
      uVar12 = CONCAT44(TypeInfo__System__Int32,pMStack_20);
      if (pMStack_20 == (MethodInfo *)0x0) goto code_?;
      if ((((String__Class *)pMStack_20->methodPointer)->_0).element_class !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      puVar28 = (undefined4 *)func_?(pMStack_20);
      pMStack_20 = (MethodInfo *)*puVar28;
      pDVar29 = (this->fields).nodeIdToWoMap;
      if (pDVar29 == (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) goto code_?;
      pMStack_21 = (MVWorldObjectClient__Class *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar29,
                              (Int32Enum__Enum)pMStack_13,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                             );
      pDVar29 = (this->fields).nodeIdToWoMap;
      if ((pDVar29 == (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) ||
         (in_stack_9 = (String **)pMStack_20,
         pMStack_13 = (MVWorldObjectClient *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar29,
                                 (Int32Enum__Enum)pMStack_20,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                                ), pMStack_21 == (MVWorldObjectClient__Class *)0x0))
      goto code_?;
      (pMStack_21->vtable).get_Position.methodPtr = (Il2CppMethodPointer)pMStack_13;
      func_?(&(pMStack_21->vtable).get_Position,pMStack_13);
      if (pMStack_13 == (MVWorldObjectClient *)0x0) goto code_?;
      pMStack_13[1].klass = pMStack_21;
      func_?(pMStack_13 + 1,pMStack_21);
    }
    uStack_2 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&stack0xffffff8c,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,(MethodInfo *)in_stack_9);
    uStack_2 = 0xffffffff;
    pDVar10 = (this->fields)._.blueprintData;
    if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar10,(Object *)StringLiteral_StartNode,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    uVar12 = CONCAT44(TypeInfo__System__Int32,pOVar26);
    if (pOVar26 == (Object *)0x0) goto code_?;
    if ((pOVar26->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      pIVar30 = (Int32Enum__Enum *)func_?(pOVar26);
      pDVar29 = (this->fields).nodeIdToWoMap;
      if (pDVar29 != (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) {
        pMVar31 = (MVMovingPlatformNode *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar29,*pIVar30,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                            );
        (this->fields).startNode = pMVar31;
        func_?(&(this->fields).startNode,pMVar31);
        pMVar32 = (MVMovingPlatform *)
                  MVBlueprintBase::MVBlueprintBase_GetChild
                            ((MVBlueprintBase *)this,StringLiteral_Platform,(MethodInfo *)0x0);
        if (pMVar32 == (MVMovingPlatform *)0x0) {
          (pMStack_6->fields).platform = (MVMovingPlatform *)0x0;
        }
        else if (((((pMVar32->klass->_1).typeHierarchyDepth <
                    (TypeInfo__MVMovingPlatform->_1).typeHierarchyDepth) ||
                  ((MVMovingPlatform__Class *)
                   (pMVar32->klass->_1).typeHierarchy
                   [(TypeInfo__MVMovingPlatform->_1).typeHierarchyDepth - 1] !=
                   TypeInfo__MVMovingPlatform)) ||
                 ((pMStack_6->fields).platform = pMVar32,
                 (pMVar32->klass->_1).typeHierarchyDepth <
                 (TypeInfo__MVMovingPlatform->_1).typeHierarchyDepth)) ||
                ((MVMovingPlatform__Class *)
                 (pMVar32->klass->_1).typeHierarchy
                 [(TypeInfo__MVMovingPlatform->_1).typeHierarchyDepth - 1] !=
                 TypeInfo__MVMovingPlatform)) {
          func_?();
code_?:
          uVar33 = func_?();
          func_?(uVar33,0);
code_?:
          uVar33 = func_?();
          func_?(uVar33,0);
code_?:
          uVar33 = func_?();
          func_?(uVar33,0);
code_?:
          uVar33 = func_?();
          func_?(uVar33,0);
code_?:
          uVar33 = func_?();
          func_?(uVar33,0);
          goto code_?;
        }
        func_?();
        if ((this->fields).platform == (MVMovingPlatform *)0x0) {
          pSVar23 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&this->fields,(MethodInfo *)0x0);
          pSVar23 = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_Platform_group_,pSVar23,
                               StringLiteral__init___Could_not_find_child_pla,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)pSVar23,(MethodInfo *)0x0);
          (this->fields).initializeFailed = 1;
          *unaff_FS_OFFSET = uStack_4;
          return;
        }
        pMVar31 = (this->fields).startNode;
        pMVar32 = (this->fields).platform;
        if ((pMVar31 != (MVMovingPlatformNode *)0x0) &&
           (pMVar31 = (pMVar31->fields)._Next_k__BackingField, pMVar32 != (MVMovingPlatform *)0x0))
        {
          pMVar34 = (this->fields).startNode;
          (pMVar32->fields).start = pMVar34;
          func_?(&(pMVar32->fields).start,pMVar34);
          (pMVar32->fields).end = pMVar31;
          func_?(&(pMVar32->fields).end,pMVar31);
          MVMovingPlatform::MVMovingPlatform_RecalculateMovement(pMVar32,(MethodInfo *)0x0);
          pUVar35 = (this->fields)._._._.ScaleChanged;
          this_01 = (UnityAction_2_System_Object_System_Object_ *)
                    func_?(
                                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                   );
          if (this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_01,(Object *)this,
                       MethodInfo__MVMovingPlatformGroup__WorldObjectClient_ScaleChangedHandler_System__Object__ScaleChangedEventArgs_
                       ,(MethodInfo *)0x0);
            pDVar36 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pUVar35,(Delegate *)this_01,(MethodInfo *)0x0);
            if (pDVar36 == (Delegate *)0x0) {
              (pMStack_6->fields)._._._.ScaleChanged =
                   (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
            }
            else {
              pUVar35 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)
                        func_?();
              if (pUVar35 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0)
              goto code_?;
              (pMStack_6->fields)._._._.ScaleChanged = pUVar35;
              iVar25 = func_?();
              if (iVar25 == 0) goto code_?;
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
            pLVar37 = (this->fields).lineRenderer;
            if (pLVar37 != (LineRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_useWorldSpace
                        (pLVar37,0,(MethodInfo *)0x0);
              this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)(this->fields).nodeIdToWoMap;
              pLVar37 = (this->fields).lineRenderer;
              if ((this_00 !=
                   (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                    *)0x0) &&
                 (value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                          RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                          Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                                    (this_00,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Count__
                                    ), pLVar37 != (LineRenderer *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                LineRenderer_set_positionCount(pLVar37,value,(MethodInfo *)0x0);
                pKVar38 = (KeyValuePair_2_System_Object_System_Object_ *)
                          (*(this->klass->vtable).get_Scale.methodPtr)();
                DStack_15._current = *pKVar38;
                DStack_15._getEnumeratorRetType = (int32_t)pKVar38[1].key;
                value_00 = (float)DStack_15._current.key * _UNK_?;
                pLVar37 = (this->fields).lineRenderer;
                if (pLVar37 != (LineRenderer *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                            (pLVar37,value_00,(MethodInfo *)0x0);
                  pLVar37 = (this->fields).lineRenderer;
                  if (pLVar37 != (LineRenderer *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                              (pLVar37,value_00,(MethodInfo *)0x0);
                    pMVar31 = (this->fields).startNode;
                    this = (MVMovingPlatformGroup *)0x0;
                    pMStack_13 = (MVWorldObjectClient *)(pMVar1->fields).lineRenderer;
                    if ((pMVar31 != (MVMovingPlatformNode *)0x0) &&
                       (pVVar39 = (Vector3 *)
                                  (*(pMVar31->klass->vtable).get_Position.methodPtr)
                                            (&DStack_15._current,pMVar31,
                                             (pMVar31->klass->vtable).get_Position.method),
                       pMStack_13 != (MVWorldObjectClient *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                      LineRenderer_SetPosition
                                ((LineRenderer *)pMStack_13,0,*pVVar39,(MethodInfo *)0x0);
                      do {
                        if (((pMVar31->fields)._Next_k__BackingField == (MVMovingPlatformNode *)0x0)
                           || ((pMVar31->fields)._Next_k__BackingField ==
                               (pMVar1->fields).startNode)) goto code_?;
                        pMVar34 = (pMVar31->fields)._Next_k__BackingField;
                        pMStack_13 = (MVWorldObjectClient *)(pMVar1->fields).lineRenderer;
                        this = (MVMovingPlatformGroup *)((int)&this->klass + 1);
                        pMVar40 = pMVar34->klass;
                        pVVar39 = (Vector3 *)
                                  (*(pMVar40->vtable).get_Position.methodPtr)
                                            (auStack_41,pMVar34,(pMVar40->vtable).get_Position.method)
                        ;
                        if (pMStack_13 == (MVWorldObjectClient *)0x0) break;
                        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                        LineRenderer_SetPosition
                                  ((LineRenderer *)pMStack_13,(int32_t)this,*pVVar39,
                                   (MethodInfo *)0x0);
                        pMVar31 = (pMVar31->fields)._Next_k__BackingField;
                      } while (pMVar31 != (MVMovingPlatformNode *)0x0);
                    }
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
  uVar33 = func_?(uVar12);
  uVar33 = func_?(uVar33);
  func_?(uVar33);
code_?:
  func_?();
  pcVar42 = (code *)swi(3);
  (*pcVar42)();
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
  pMStack_4 = in_stack_2;
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
    in_stack_5 =
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
    in_stack_6 = &StringLiteral_StartNode;
    func_?();
    func_?(&StringLiteral___If_this_is_a_new_platform_grou);
    func_?(&StringLiteral_Platform_group_);
    func_?(&StringLiteral__init___Could_not_find_child_pla);
    cRam_? = '\x01';
  }
  pDVar7 = (in_stack_2->fields).childIdMap;
  IStack_8.m_value = 0;
  if (pDVar7 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
code_?:
    uVar9 = func_?(pMStack_10,TypeInfo__MVMovingPlatformNode);
  }
  else {
    pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_12,pDVar7,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    pMVar13 = (MethodInfo *)(pDVar11->_current).key;
    uVar14 = *(undefined8 *)&(pDVar11->_current).value;
    DStack_12._current =
         (KeyValuePair_2_System_Object_System_Object_)((ulonglong)DStack_12._current & 0xffffffff);
    DStack_12._getEnumeratorRetType = (int32_t)&stack0xffffff94;
    while (bVar15 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                              &stack0xffffff94,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                             ), bVar15 != 0) {
      pMStack_16 = (MethodInfo *)uVar14;
      pMStack_17 = pMStack_16;
      pMStack_18 = pMVar13;
      if ((pMVar13 == (MethodInfo *)0x0) ||
         (pSVar19 = (String *)
                    (*(((Object__Class *)pMVar13->methodPointer)->vtable).ToString.methodPtr)
                              (pMVar13,(((Object__Class *)pMVar13->methodPointer)->vtable).ToString.
                                       method), pSVar19 == (String *)0x0)) goto code_?;
      in_stack_6 = (String **)StringLiteral_Platform;
      bVar15 = mscorlib.dll::System::String::String_Equals_1
                        (pSVar19,StringLiteral_Platform,(MethodInfo *)0x0);
      if (bVar15 == 0) {
        if (pMStack_18 == (MethodInfo *)0x0) goto code_?;
        pMStack_18 = (MethodInfo *)func_?(3,pMStack_18);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Convert);
        }
        in_stack_6 = (String **)&UNK_?;
        pMStack_18 = (MethodInfo *)
                     mscorlib.dll::System::Convert::Convert_ToInt32_14
                               ((String *)pMStack_18,(MethodInfo *)0x0);
        uVar9 = CONCAT44(TypeInfo__System__Int32,pMStack_17);
        if (pMStack_17 == (MethodInfo *)0x0) goto code_?;
        if ((((String__Class *)pMStack_17->methodPointer)->_0).element_class !=
            (TypeInfo__System__Int32->_0).element_class) goto code_?;
        piVar20 = (int32_t *)func_?(pMStack_17);
        IStack_8.m_value = *piVar20;
        pMStack_10 = (MVBlueprintBase__Class *)
                     MVGroup::MVGroup_GetChild
                               ((MVGroup *)in_stack_2,IStack_8.m_value,(MethodInfo *)0x0);
        if (pMStack_10 == (MVBlueprintBase__Class *)0x0) {
          values = (String__Array *)func_?();
          if (values == (String__Array *)0x0) goto code_?;
          if ((StringLiteral_Platform_group_ != (String *)0x0) &&
             (iVar21 = func_?(StringLiteral_Platform_group_,
                                       (values->klass->_0).element_class), iVar21 == 0))
          goto code_?;
          func_?(0,StringLiteral_Platform_group_);
          pMStack_17 = (MethodInfo *)
                       mscorlib.dll::System::Int32::Int32_ToString
                                 ((Int32 *)&in_stack_2->fields,(MethodInfo *)0x0);
          if ((pMStack_17 != (MethodInfo *)0x0) &&
             (iVar21 = func_?(pMStack_17,(values->klass->_0).element_class), iVar21 == 0))
          goto code_?;
          pMVar13 = (MethodInfo *)0x1;
          func_?(1,pMStack_17);
          if ((StringLiteral__init___Could_not_find_child_nod != (String *)0x0) &&
             (iVar21 = func_?(StringLiteral__init___Could_not_find_child_nod,
                                       (values->klass->_0).element_class), iVar21 == 0))
          goto code_?;
          func_?(2,StringLiteral__init___Could_not_find_child_nod);
          pMStack_17 = (MethodInfo *)
                       mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
          if ((pMStack_17 != (MethodInfo *)0x0) &&
             (iVar21 = func_?(pMStack_17,(values->klass->_0).element_class), iVar21 == 0))
          goto code_?;
          func_?(3,pMStack_17);
          if ((StringLiteral___If_this_is_a_new_platform_grou != (String *)0x0) &&
             (iVar21 = func_?(StringLiteral___If_this_is_a_new_platform_grou,
                                       (values->klass->_0).element_class), iVar21 == 0))
          goto code_?;
          func_?(4,StringLiteral___If_this_is_a_new_platform_grou);
          pSVar19 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)pSVar19,(MethodInfo *)0x0);
          *(undefined1 *)&in_stack_2[1].fields._._._.inputLinkRefs = 1;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffff94,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     ,pMVar13);
          goto code_?;
        }
        pMStack_17 = (MethodInfo *)func_?();
        if (pMStack_17 == (MethodInfo *)0x0) goto code_?;
        pDVar7 = (Dictionary_2_System_Object_System_Object_ *)
                 in_stack_2[1].fields._._._.itemId;
        if (pDVar7 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar7,(Object *)pMStack_18,(Object *)pMStack_17,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__set_Item_int__MVMovingPlatformNode_
                  );
        pDVar7 = *(Dictionary_2_System_Object_System_Object_ **)
                  &in_stack_2[1].fields._._._.inputState;
        if (pDVar7 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (pDVar7,(Object *)((String__Fields *)&pMStack_17->invoker_method)->_stringLength,
                   (Object *)pMStack_18,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_int>__set_Item_int__int_
                  );
      }
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&stack0xffffff94,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,(MethodInfo *)in_stack_5);
    pDVar7 = (Dictionary_2_System_Object_System_Object_ *)in_stack_2[1].fields._._._.id;
    if (pDVar7 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_12,pDVar7,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    pOVar22 = (pDVar11->_current).key;
    uVar14 = *(undefined8 *)&(pDVar11->_current).value;
    DStack_12._current =
         (KeyValuePair_2_System_Object_System_Object_)((ulonglong)DStack_12._current & 0xffffffff);
    DStack_12._getEnumeratorRetType = (int32_t)&stack0xffffff94;
    while (bVar15 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                             ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                              &stack0xffffff94,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                             ), bVar15 != 0) {
      pMStack_16 = (MethodInfo *)uVar14;
      pMStack_17 = pMStack_16;
      pOStack_23 = pOVar22;
      if (pOVar22 == (Object *)0x0) goto code_?;
      pMStack_10 = (MVBlueprintBase__Class *)
                   (*(pOVar22->klass->vtable).ToString.methodPtr)
                             (pOVar22,(pOVar22->klass->vtable).ToString.method);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      pMStack_10 = (MVBlueprintBase__Class *)
                   mscorlib.dll::System::Convert::Convert_ToInt32_14
                             ((String *)pMStack_10,(MethodInfo *)0x0);
      uVar9 = CONCAT44(TypeInfo__System__Int32,pMStack_17);
      if (pMStack_17 == (MethodInfo *)0x0) goto code_?;
      if ((((String__Class *)pMStack_17->methodPointer)->_0).element_class !=
          (TypeInfo__System__Int32->_0).element_class) goto code_?;
      puVar24 = (undefined4 *)func_?(pMStack_17);
      pMStack_17 = (MethodInfo *)*puVar24;
      pDVar25 = (Dictionary_2_System_Int32Enum_System_Object_ *)
               in_stack_2[1].fields._._._.itemId;
      if (pDVar25 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) goto code_?;
      pMStack_18 = (MethodInfo *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             (pDVar25,(Int32Enum__Enum)pMStack_10,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                             );
      pDVar25 = (Dictionary_2_System_Int32Enum_System_Object_ *)
               in_stack_2[1].fields._._._.itemId;
      if ((pDVar25 == (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) ||
         (in_stack_6 = (String **)pMStack_17,
         pMStack_10 = (MVBlueprintBase__Class *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                (pDVar25,(Int32Enum__Enum)pMStack_17,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                                ), pMStack_18 == (MethodInfo *)0x0)) goto code_?;
      pMStack_18[4].field7_0x1c.methodMetadataHandle =
           (Il2CppMetadataMethodDefinitionHandle)pMStack_10;
      func_?(&pMStack_18[4].field7_0x1c,pMStack_10);
      if (pMStack_10 == (MVBlueprintBase__Class *)0x0) goto code_?;
      (pMStack_10->vtable).ToString.method = pMStack_18;
      func_?(&(pMStack_10->vtable).ToString.method,pMStack_18);
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&stack0xffffff94,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
               ,(MethodInfo *)in_stack_6);
    pDVar7 = (in_stack_2->fields).blueprintData;
    if (pDVar7 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar7,(Object *)StringLiteral_StartNode,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    uVar9 = CONCAT44(TypeInfo__System__Int32,pOVar22);
    if (pOVar22 == (Object *)0x0) goto code_?;
    if ((pOVar22->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      pIVar26 = (Int32Enum__Enum *)func_?(pOVar22);
      pDVar25 = (Dictionary_2_System_Int32Enum_System_Object_ *)
               in_stack_2[1].fields._._._.itemId;
      if (pDVar25 != (Dictionary_2_System_Int32Enum_System_Object_ *)0x0) {
        pOVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            (pDVar25,*pIVar26,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Item_int_
                            );
        in_stack_2[1].fields._._._.groupId = (int32_t)pOVar22;
        func_?(&in_stack_2[1].fields._._._.groupId,pOVar22);
        pMVar27 = MVBlueprintBase::MVBlueprintBase_GetChild
                            (in_stack_2,StringLiteral_Platform,(MethodInfo *)0x0);
        if (pMVar27 == (MVWorldObjectClient *)0x0) {
          pMStack_4[1].fields._._._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)0x0;
        }
        else if (((((pMVar27->klass->_1).typeHierarchyDepth <
                    (TypeInfo__MVMovingPlatform->_1).typeHierarchyDepth) ||
                  ((MVMovingPlatform__Class *)
                   (pMVar27->klass->_1).typeHierarchy
                   [(TypeInfo__MVMovingPlatform->_1).typeHierarchyDepth - 1] !=
                   TypeInfo__MVMovingPlatform)) ||
                 (pMStack_4[1].fields._._._.outputLinkRefs = (List_1_MV_WorldObject_Link_ *)pMVar27
                 , (pMVar27->klass->_1).typeHierarchyDepth <
                   (TypeInfo__MVMovingPlatform->_1).typeHierarchyDepth)) ||
                ((MVMovingPlatform__Class *)
                 (pMVar27->klass->_1).typeHierarchy
                 [(TypeInfo__MVMovingPlatform->_1).typeHierarchyDepth - 1] !=
                 TypeInfo__MVMovingPlatform)) {
          func_?();
code_?:
          uVar3 = func_?();
          func_?(uVar3,0);
code_?:
          uVar3 = func_?();
          func_?(uVar3,0);
code_?:
          uVar3 = func_?();
          func_?(uVar3,0);
code_?:
          uVar3 = func_?();
          func_?(uVar3,0);
code_?:
          uVar3 = func_?();
          func_?(uVar3,0);
          goto code_?;
        }
        func_?();
        if (in_stack_2[1].fields._._._.outputLinkRefs == (List_1_MV_WorldObject_Link_ *)0x0)
        {
          pSVar19 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&in_stack_2->fields,(MethodInfo *)0x0);
          pSVar19 = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_Platform_group_,pSVar19,
                               StringLiteral__init___Could_not_find_child_pla,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)pSVar19,(MethodInfo *)0x0);
          *(undefined1 *)&in_stack_2[1].fields._._._.inputLinkRefs = 1;
          *unaff_FS_OFFSET = uVar3;
          return;
        }
        iVar21 = in_stack_2[1].fields._._._.groupId;
        this_00 = (MVMovingPlatform *)in_stack_2[1].fields._._._.outputLinkRefs;
        if ((iVar21 != 0) &&
           (pMVar28 = *(MVMovingPlatformNode **)(iVar21 + 0xdc), this_00 != (MVMovingPlatform *)0x0))
        {
          pMVar29 = (MVMovingPlatformNode *)in_stack_2[1].fields._._._.groupId;
          (this_00->fields).start = pMVar29;
          func_?(&(this_00->fields).start,pMVar29);
          (this_00->fields).end = pMVar28;
          func_?(&(this_00->fields).end,pMVar28);
          MVMovingPlatform::MVMovingPlatform_RecalculateMovement(this_00,(MethodInfo *)0x0);
          pUVar30 = (in_stack_2->fields)._._.ScaleChanged;
          this_03 = (UnityAction_2_System_Object_System_Object_ *)
                    func_?(
                                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                   );
          if (this_03 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (this_03,(Object *)in_stack_2,
                       MethodInfo__MVMovingPlatformGroup__WorldObjectClient_ScaleChangedHandler_System__Object__ScaleChangedEventArgs_
                       ,(MethodInfo *)0x0);
            pDVar31 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pUVar30,(Delegate *)this_03,(MethodInfo *)0x0);
            if (pDVar31 == (Delegate *)0x0) {
              (pMStack_4->fields)._._.ScaleChanged =
                   (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
            }
            else {
              pUVar30 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)
                        func_?();
              if (pUVar30 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0)
              goto code_?;
              (pMStack_4->fields)._._.ScaleChanged = pUVar30;
              iVar21 = func_?();
              if (iVar21 == 0) goto code_?;
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
              this_01 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                         *)in_stack_2[1].fields._._._.itemId;
              this_02 = in_stack_2[1].klass;
              if ((this_01 !=
                   (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                    *)0x0) &&
                 (value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                          RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                          Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                                    (this_01,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Count__
                                    ), this_02 != (MVBlueprintBase__Class *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                LineRenderer_set_positionCount((LineRenderer *)this_02,value,(MethodInfo *)0x0);
                pKVar32 = (KeyValuePair_2_System_Object_System_Object_ *)
                          (*(in_stack_2->klass->vtable).get_Scale.methodPtr)();
                DStack_12._current = *pKVar32;
                DStack_12._getEnumeratorRetType = (int32_t)pKVar32[1].key;
                value_00 = (float)DStack_12._current.key * _UNK_?;
                if (in_stack_2[1].klass != (MVBlueprintBase__Class *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                            ((LineRenderer *)in_stack_2[1].klass,value_00,(MethodInfo *)0x0);
                  if (in_stack_2[1].klass != (MVBlueprintBase__Class *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                              ((LineRenderer *)in_stack_2[1].klass,value_00,(MethodInfo *)0x0
                              );
                    piVar33 = (int *)in_stack_2[1].fields._._._.groupId;
                    in_stack_2 = (MVBlueprintBase *)0x0;
                    pMStack_10 = pMVar1[1].klass;
                    if ((piVar33 != (int *)0x0) &&
                       (pVVar34 = (Vector3 *)
                                  (**(code **)(*piVar33 + 0xdc))
                                            (&DStack_12._current,piVar33,
                                             *(undefined4 *)(*piVar33 + 0xe0)),
                       pMStack_10 != (MVBlueprintBase__Class *)0x0)) {
                      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                      LineRenderer_SetPosition
                                ((LineRenderer *)pMStack_10,0,*pVVar34,(MethodInfo *)0x0);
                      do {
                        if ((piVar33[0x37] == 0) ||
                           (piVar33[0x37] == pMVar1[1].fields._._._.groupId)) goto code_?;
                        pMStack_10 = pMVar1[1].klass;
                        in_stack_2 = (MVBlueprintBase *)((int)in_stack_2 + 1);
                        iVar21 = *(int *)piVar33[0x37];
                        pVVar34 = (Vector3 *)
                                  (**(code **)(iVar21 + 0xdc))
                                            (auStack_35,(int *)piVar33[0x37],
                                             *(undefined4 *)(iVar21 + 0xe0));
                        if (pMStack_10 == (MVBlueprintBase__Class *)0x0) break;
                        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                        LineRenderer_SetPosition
                                  ((LineRenderer *)pMStack_10,(int32_t)in_stack_2,*pVVar34,
                                   (MethodInfo *)0x0);
                        piVar33 = (int *)piVar33[0x37];
                      } while (piVar33 != (int *)0x0);
                    }
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
  uVar3 = func_?(uVar9);
  uVar3 = func_?(uVar3);
  func_?(uVar3);
code_?:
  func_?();
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_OnEnterObject
               (MVMovingPlatformGroup *this,EditorStateMachine *e,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pMStack_2 = (this->fields).platform;
  if (pMStack_2 != (MVMovingPlatform *)0x0) {
    pMStack_1 = (pMStack_2->klass->vtable).OnEnterObject.method;
    pEStack_3 = e;
    (*(pMStack_2->klass->vtable).OnEnterObject.methodPtr)();
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
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  MVWorldObjectClient::MVWorldObjectClient_SetWorldObjectToPurchased
            ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
  pMVar7 = (this->fields).platform;
  if ((pMVar7 != (MVMovingPlatform *)0x0) &&
     (pMVar8 = (pMVar7->fields)._._CubeModel_k__BackingField, pMVar8 != (MVCubeModelInstance *)0x0))
  {
    (*(pMVar8->klass->vtable).SetWorldObjectToPurchased.methodPtr)();
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).nodeIdToWoMap;
    if (this_00 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Values__
                          );
      if (this_01 !=
          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
           *)0x0) {
        pDVar9 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                 Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                           (&DStack_10,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovingPlatformNode>__GetEnumerator__
                           );
        DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar9->_dictionary;
        DStack_6._index = pDVar9->_index;
        DStack_6._version = pDVar9->_version;
        DStack_6._currentValue = pDVar9->_currentValue;
        DStack_10._version = 0;
        uStack_1 = 1;
        DStack_10._currentValue = (Object *)&DStack_6;
        while( true ) {
          bVar11 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                  Object,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                            (&DStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__MoveNext__
                            );
          if (bVar11 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&DStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovingPlatformNode>__Dispose__
                       ,unaff_EBX);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          if (DStack_6._currentValue == (Object *)0x0) break;
          (*(code *)(DStack_6._currentValue)->klass[2]._1.native_size)();
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
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).nodeIdToWoMap;
    pLVar1 = (this->fields).lineRenderer;
    if ((this_00 !=
         (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
       && (value = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                   RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                   Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
                             (this_00,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__get_Count__
                             ), pLVar1 != (LineRenderer *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
                (pLVar1,value,(MethodInfo *)0x0);
      puVar2 = (undefined8 *)(*(this->klass->vtable).get_Scale.methodPtr)(&stack0xffffffe4);
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
                       (*(pMVar4->klass->vtable).get_Position.methodPtr)
                                 (&stack0xffffffe4,pMVar4,
                                  (pMVar4->klass->vtable).get_Position.method),
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
                       (*(pMVar7->vtable).get_Position.methodPtr)
                                 (&stack0xffffffe4,pMVar6,(pMVar7->vtable).get_Position.method);
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
  if (((sender != (Object *)0x0) &&
      ((TypeInfo__MVMovingPlatformNode->_1).typeHierarchyDepth <=
       (sender->klass->_1).typeHierarchyDepth)) &&
     ((MVMovingPlatformNode__Class *)
      (sender->klass->_1).typeHierarchy[(TypeInfo__MVMovingPlatformNode->_1).typeHierarchyDepth - 1]
      == TypeInfo__MVMovingPlatformNode)) {
    this_00 = (this->fields).platform;
    if (this_00 == (MVMovingPlatform *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((this_00->fields).start == (MVMovingPlatformNode *)sender) ||
       ((this_00->fields).end == (MVMovingPlatformNode *)sender)) {
      MVMovingPlatform::MVMovingPlatform_RecalculateMovement(this_00,(MethodInfo *)0x0);
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
  this_00 = (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>
                           );
  if (this_00 != (Dictionary_2_System_Int32_MVMovingPlatformNode_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovingPlatformNode>__Dictionary__
              );
    (this->fields).nodeIdToWoMap = this_00;
    func_?(&(this->fields).nodeIdToWoMap,this_00);
    this_01 = (Dictionary_2_System_Int32_System_Int32_ *)
              func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_int>);
    if (this_01 != (Dictionary_2_System_Int32_System_Int32_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_int>__Dictionary__);
      (this->fields).woIdToNodeIdMap = this_01;
      func_?(&(this->fields).woIdToNodeIdMap,this_01);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__PrefabPool);
        cRam_? = '\x01';
      }
      pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar1 != (PrefabPool *)0x0) {
        MVBlueprintBase::MVBlueprintBase__ctor_2
                  ((MVBlueprintBase *)this,data,(pPVar1->fields).mvMovingPlatformGroupPrefab,
                   worldObjects,(MethodInfo *)0x0);
        pDVar2 = (this->fields)._.blueprintData;
        if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar2,(Object *)StringLiteral_NextNodeMap,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
            (this->fields).nextNodeMap = (Dictionary_2_System_Object_System_Object_ *)0x0;
          }
          else {
            if (((pDVar2->klass->_1).typeHierarchyDepth <
                 (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).typeHierarchyDepth) ||
               ((Dictionary_2_System_Object_System_Object___Class *)
                (pDVar2->klass->_1).typeHierarchy
                [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).typeHierarchyDepth - 1] !=
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
            goto code_?;
            (this->fields).nextNodeMap = pDVar2;
            if (((pDVar2->klass->_1).typeHierarchyDepth <
                 (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).typeHierarchyDepth) ||
               ((Dictionary_2_System_Object_System_Object___Class *)
                (pDVar2->klass->_1).typeHierarchy
                [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).typeHierarchyDepth - 1] !=
                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
            goto code_?;
          }
          func_?();
          source = (this->fields)._._._.gameObject;
          if (source != (GameObject *)0x0) {
            pLVar3 = (LineRenderer *)
                     Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                               ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                                UnityEngine__LineRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::LineRenderer>__
                               );
            (this->fields).lineRenderer = pLVar3;
            func_?(&(this->fields).lineRenderer,pLVar3);
            piVar4 = &(this->fields)._._._.interactionFlags;
            *(uint *)piVar4 = (uint)*piVar4 | 0x9000;
            uVar5 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
            piVar6 = &(this->fields)._._._.previewLayerMask;
            *piVar6 = *piVar6 | 0x800;
            *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar5;
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVMovingPlatformGroup::MVMovingPlatformGroup_get_DocumentationType
          (MVMovingPlatformGroup *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_MovingPlatform;
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
  source = (this->fields)._._._.gameObject;
  if (source != (GameObject *)0x0) {
    pIVar1 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                        UnityEngine__MeshRenderer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshRenderer>______
                       );
    pMVar2 = (MonitorData *)0x0;
    if (pIVar1 != (IEnumerable_1_System_Object_ *)0x0) {
      pIVar3 = pIVar1 + 2;
      while( true ) {
        if ((int)pIVar1[1].monitor <= (int)pMVar2) {
          return 0;
        }
        if (pIVar1[1].monitor <= pMVar2) break;
        if (pIVar3->klass == (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                          ((Renderer *)pIVar3->klass,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          return 1;
        }
        pMVar2 = pMVar2 + 1;
        pIVar3 = (IEnumerable_1_System_Object_ *)&pIVar3->monitor;
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
    (*(pMVar2->klass->vtable).set_Visible.methodPtr)(pMVar2);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

