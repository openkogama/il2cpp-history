
/* Void Activate() */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_Activate
               (MVCameraController_CameraStack *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).cameras;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    method_00 = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                          );
    if (method_00 != (MethodInfo *)0x0) {
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         (&DStack_8,
                          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)method_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                         );
      DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar7->_dictionary;
      DStack_6._index = pDVar7->_index;
      DStack_6._version = pDVar7->_version;
      DStack_6._currentValue = pDVar7->_currentValue;
      DStack_8._version = 0;
      uStack_1 = 1;
      DStack_8._currentValue = (Object *)&DStack_6;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&DStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (DStack_6._currentValue == (Object *)0x0) break;
        (*(code *)(DStack_6._currentValue)->klass[1]._0.nestedTypes)
                  (DStack_6._currentValue,
                   (DStack_6._currentValue)->klass[1]._0.implementedInterfaces);
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ClearStack(MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_ClearStack
               (MVCameraController_CameraStack *this,MVCameraController *cameraController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_);
    func_?(&
                    MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).activeCameras;
  if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
    index = (pLVar1->fields)._size;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return;
      }
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).activeCameras;
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) break;
      (**(code **)(*(int *)RVar3 + 0x104))
                (RVar3,cameraController,*(undefined4 *)(*(int *)RVar3 + 0x108));
      this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).activeCameras;
      if (pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) break;
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar2,index,
                         MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                        );
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      if ((this_01 == (UnityAction_2_System_Object_System_Object_ *)0x0) ||
         (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_01,(Object *)RVar3,
                     MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                     ,(MethodInfo *)0x0), this_00 == (MainCameraManager *)0x0)) break;
      MainCameraManager::MainCameraManager_remove_onIgnoreInputTypes
                (this_00,(EventHandler_1_OnIgnoreInputTypesArgs_ *)this_01,(MethodInfo *)0x0);
      pLVar1 = (this->fields).activeCameras;
      if (pLVar1 == (List_1_MVCameraBase_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar1,index,
                 MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_);
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_Deactivate
               (MVCameraController_CameraStack *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).cameras;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    method_00 = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                          );
    if (method_00 != (MethodInfo *)0x0) {
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
               Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                         (&DStack_8,
                          (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                           *)method_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                         );
      DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar7->_dictionary;
      DStack_6._index = pDVar7->_index;
      DStack_6._version = pDVar7->_version;
      DStack_6._currentValue = pDVar7->_currentValue;
      DStack_8._version = 0;
      uStack_1 = 1;
      DStack_8._currentValue = (Object *)&DStack_6;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                Object,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&DStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (DStack_6._currentValue == (Object *)0x0) break;
        (*(code *)(DStack_6._currentValue)->klass[1].interfaceOffsets)
                  (DStack_6._currentValue,(DStack_6._currentValue)->klass[1].static_fields);
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void EnterCamera(MVCameraBase, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_EnterCamera
               (MVCameraController_CameraStack *this,MVCameraBase *newCamera,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_
                   );
    func_?(&
                    MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_);
    func_?(&
                    MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).activeCameras;
  if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
    index = (pLVar1->fields)._size;
    while (index = index + -1, -1 < index) {
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).activeCameras;
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      (**(code **)(*(int *)RVar3 + 0x104))
                (RVar3,cameraController,*(undefined4 *)(*(int *)RVar3 + 0x108));
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).activeCameras;
      if (pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar2,index,
                         MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                        );
      pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
               func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      if ((pUVar5 == (UnityAction_2_System_Object_System_Object_ *)0x0) ||
         (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar5,(Object *)RVar3,
                     MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                     ,(MethodInfo *)0x0), pMVar4 == (MainCameraManager *)0x0))
      goto code_?;
      MainCameraManager::MainCameraManager_remove_onIgnoreInputTypes
                (pMVar4,(EventHandler_1_OnIgnoreInputTypesArgs_ *)pUVar5,(MethodInfo *)0x0);
      pLVar1 = (this->fields).activeCameras;
      if (pLVar1 == (List_1_MVCameraBase_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar1,index,
                 MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_);
    }
    pLVar1 = (this->fields).activeCameras;
    if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar1,(Object *)newCamera,
                 MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      pMVar6 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
      pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
               func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      if ((pUVar5 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
         (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar5,(Object *)pMVar6,
                     MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                     ,(MethodInfo *)0x0), pMVar4 != (MainCameraManager *)0x0)) {
        MainCameraManager::MainCameraManager_add_onIgnoreInputTypes
                  (pMVar4,(EventHandler_1_OnIgnoreInputTypesArgs_ *)pUVar5,(MethodInfo *)0x0);
        pMVar6 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
        if (pMVar6 != (MVCameraBase *)0x0) {
          (*(pMVar6->klass->vtable).Enter.methodPtr)
                    (pMVar6,cameraController,(pMVar6->klass->vtable).Enter.method);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Object GetCamera[Object]() */

Object * Assembly-CSharp.dll::MVCameraController+CameraStack::
         MVCameraController_CameraStack_GetCamera
                   (MVCameraController_CameraStack *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<CameraType,_MVCameraBase>__get_Value__
                   );
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).cameras;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                        &stack0xffffffa4,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (int32_t)(pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_9 = &DStack_6;
    do {
      bVar10 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return (Object *)0x0;
      }
      pOStack_11 = DStack_6._current.value;
      if (DStack_6._current.value == (Object *)0x0) goto code_?;
      left = mscorlib.dll::System::Object::Object_GetType
                       (DStack_6._current.value,(MethodInfo *)0x0);
      handle = *(method->field7_0x1c).rgctx_data;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      right = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      unaff_EDI = (MethodInfo *)&UNK_?;
      bVar10 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                        ((Object **)left,(Object **)right,(MethodInfo *)0x0);
    } while (bVar10 == 0);
    uStack_12 = func_?();
    pOVar13 = (Object *)0x0;
    if ((pOStack_11 == (Object *)0x0) ||
       (pOVar13 = (Object *)func_?(), pOVar13 != (Object *)0x0)) {
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                 ,in_stack_14);
      *unaff_FS_OFFSET = uStack_3;
      return pOVar13;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  pOVar13 = (Object *)(*pcVar15)();
  return pOVar13;
}


/* Void PushCamera(CameraType, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_PushCamera
               (MVCameraController_CameraStack *this,CameraType__Enum cameraType,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cameras;
  if (this_00 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
    cameraBase = (MVCameraBase *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,cameraType,
                            MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                           );
    MVCameraController_CameraStack_PushCamera_1(this,cameraBase,cameraController,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PushCamera(MVCameraBase, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::
     MVCameraController_CameraStack_PushCamera_1
               (MVCameraController_CameraStack *this,MVCameraBase *cameraBase,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_);
    func_?(&
                    MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).activeCameras;
  if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
    iVar2 = (pLVar1->fields)._size;
    if (0 < iVar2) {
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (this->fields).activeCameras,iVar2 + -1,
                         MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                        );
      if (RVar3 == (RegexCharClass_SingleRange)0x0) goto code_?;
      (**(code **)(*(int *)RVar3 + 0x10c))
                (RVar3,cameraController,*(undefined4 *)(*(int *)RVar3 + 0x110));
    }
    pLVar1 = (this->fields).activeCameras;
    if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar1,(Object *)cameraBase,
                 MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_);
      method_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                            ((MethodInfo *)0x0);
      pMVar4 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)method_00);
      this_01 = TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>;
      this_00 = (UnityAction_2_System_Object_System_Object_ *)func_?();
      if (this_00 != (UnityAction_2_System_Object_System_Object_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_00,(Object *)pMVar4,
                   MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                   ,(MethodInfo *)0x0);
        if (this_01 != (EventHandler_1_OnIgnoreInputTypesArgs___Class *)0x0) {
          MainCameraManager::MainCameraManager_add_onIgnoreInputTypes
                    ((MainCameraManager *)this_01,(EventHandler_1_OnIgnoreInputTypesArgs_ *)this_00,
                     (MethodInfo *)0x0);
          pMVar4 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
          if (pMVar4 != (MVCameraBase *)0x0) {
            (*(pMVar4->klass->vtable).Enter.methodPtr)
                      (pMVar4,cameraController,(pMVar4->klass->vtable).Enter.method);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RemoveCamera(CameraType, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::
     MVCameraController_CameraStack_RemoveCamera
               (MVCameraController_CameraStack *this,CameraType__Enum cameraType,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cameras;
  if (this_00 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
    cameraBase = (MVCameraBase *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,cameraType,
                            MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                           );
    MVCameraController_CameraStack_RemoveCamera_1
              (this,cameraBase,cameraController,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemoveCamera(MVCameraBase, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::
     MVCameraController_CameraStack_RemoveCamera_1
               (MVCameraController_CameraStack *this,MVCameraBase *cameraBase,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_);
    func_?(&
                    MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).activeCameras;
  if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
    iVar2 = (pLVar1->fields)._size + -1;
    index = iVar2;
    while( true ) {
      if (index < 0) {
        return;
      }
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).activeCameras;
      if (pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar3,index,
                         MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                        );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)RVar4,(Object_1 *)cameraBase,(MethodInfo *)0x0);
      if (bVar5 != 0) break;
      index = index + -1;
    }
    pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).activeCameras;
    if ((pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
       (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (pLVar3,index,
                           MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                          ), RVar4 != (RegexCharClass_SingleRange)0x0)) {
      func_?(9,RVar4,cameraController);
      this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      object = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      if ((this_01 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
         (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_01,(Object *)object,
                     MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                     ,(MethodInfo *)0x0), this_00 != (MainCameraManager *)0x0)) {
        MainCameraManager::MainCameraManager_remove_onIgnoreInputTypes
                  (this_00,(EventHandler_1_OnIgnoreInputTypesArgs_ *)this_01,(MethodInfo *)0x0);
        pLVar1 = (this->fields).activeCameras;
        if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)pLVar1,index,
                     MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_);
          if (index != iVar2) {
            return;
          }
          if (index < 1) {
            return;
          }
          pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).activeCameras;
          if ((pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             && (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (pLVar3,index + -1,
                                    MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                                   ), RVar4 != (RegexCharClass_SingleRange)0x0)) {
            func_?(0xb,RVar4,cameraController);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetCamera(CameraType, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_SetCamera
               (MVCameraController_CameraStack *this,CameraType__Enum cameraType,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cameras;
  if (this_00 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
    newCamera = (MVCameraBase *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,cameraType,
                           MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                          );
    MVCameraController_CameraStack_EnterCamera(this,newCamera,cameraController,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetCamera(MVCameraBase, MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_SetCamera_1
               (MVCameraController_CameraStack *this,MVCameraBase *newCamera,
               MVCameraController *cameraController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_
                   );
    func_?(&
                    MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_);
    func_?(&
                    MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).activeCameras;
  if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
    index = (pLVar1->fields)._size;
    while (index = index + -1, -1 < index) {
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).activeCameras;
      if ((pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar2,index,
                             MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                            ), RVar3 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      (**(code **)(*(int *)RVar3 + 0x104))
                (RVar3,cameraController,*(undefined4 *)(*(int *)RVar3 + 0x108));
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      pLVar2 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).activeCameras;
      if (pLVar2 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (pLVar2,index,
                         MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                        );
      pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
               func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      if ((pUVar5 == (UnityAction_2_System_Object_System_Object_ *)0x0) ||
         (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar5,(Object *)RVar3,
                     MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                     ,(MethodInfo *)0x0), pMVar4 == (MainCameraManager *)0x0))
      goto code_?;
      MainCameraManager::MainCameraManager_remove_onIgnoreInputTypes
                (pMVar4,(EventHandler_1_OnIgnoreInputTypesArgs_ *)pUVar5,(MethodInfo *)0x0);
      pLVar1 = (this->fields).activeCameras;
      if (pLVar1 == (List_1_MVCameraBase_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar1,index,
                 MethodInfo__System__Collections__Generic__List<MVCameraBase>__RemoveAt_int_);
    }
    pLVar1 = (this->fields).activeCameras;
    if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar1,(Object *)newCamera,
                 MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_);
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      pMVar6 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
      pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
               func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      if ((pUVar5 != (UnityAction_2_System_Object_System_Object_ *)0x0) &&
         (UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar5,(Object *)pMVar6,
                     MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                     ,(MethodInfo *)0x0), pMVar4 != (MainCameraManager *)0x0)) {
        MainCameraManager::MainCameraManager_add_onIgnoreInputTypes
                  (pMVar4,(EventHandler_1_OnIgnoreInputTypesArgs_ *)pUVar5,(MethodInfo *)0x0);
        pMVar6 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
        if (pMVar6 != (MVCameraBase *)0x0) {
          (*(pMVar6->klass->vtable).Enter.methodPtr)
                    (pMVar6,cameraController,(pMVar6->klass->vtable).Enter.method);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::
     MVCameraController_CameraStack_UpdateCamera
               (MVCameraController_CameraStack *this,MVCameraController *cameraController,
               ProtectedTransform *protectedTransform,MethodInfo *method)

{
  pMVar1 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
  if (pMVar1 != (MVCameraBase *)0x0) {
    (*(pMVar1->klass->vtable).UpdateCamera.methodPtr)(pMVar1);
    return;
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVCameraController+CameraStack(List`1[MVCameraBase], MVCameraController) */

void Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack__ctor
               (MVCameraController_CameraStack *this,List_1_MVCameraBase_ *camerasList,
               MVCameraController *cameraController,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCameraBase>__Dispose__
                   );
    in_stack_6 =
         &MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCameraBase>__MoveNext__;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCameraBase>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVCameraBase>);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_MVCameraBase_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVCameraBase>);
  if (this_00 != (List_1_MVCameraBase_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<MVCameraBase>__List__);
    (this->fields).activeCameras = this_00;
    func_?(&this->fields,this_00);
    this_01 = (Dictionary_2_CameraType_MVCameraBase_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>
                             );
    if (this_01 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Dictionary__
                );
      (this->fields).cameras = this_01;
      func_?(&(this->fields).cameras,this_01);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)this,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_6);
      if (camerasList != (List_1_MVCameraBase_ *)0x0) {
        pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           (&LStack_8,
                            (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            camerasList,
                            MethodInfo__System__Collections__Generic__List<MVCameraBase>__GetEnumerator__
                           );
        LStack_8._version = 0;
        uStack_1 = 1;
        method_00 = pLVar7->_current;
        LStack_8._current = (RegexCharClass_SingleRange)&stack0xffffffc4;
        while( true ) {
          bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc4,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCameraBase>__MoveNext__
                            );
          if (bVar9 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&stack0xffffffc4,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCameraBase>__Dispose__
                       ,(MethodInfo *)method_00);
            *unaff_FS_OFFSET = uStack_3;
            return;
          }
          pDStack_10 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).cameras;
          if (method_00 == (RegexCharClass_SingleRange)0x0) break;
          RVar11 = method_00;
          key = (Object *)(**(code **)(*(int *)method_00 + 0xdc))();
          if (pDStack_10 == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDStack_10,key,(Object *)method_00,
                     MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                    );
          method_00 = RVar11;
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* MVCameraBase get_CurCamera() */

MVCameraBase *
Assembly-CSharp.dll::MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
          (MVCameraController_CameraStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).activeCameras;
  if (pLVar1 != (List_1_MVCameraBase_ *)0x0) {
    if ((pLVar1->fields)._size != 0) {
      RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (this->fields).activeCameras,(pLVar1->fields)._size + -1,
                         MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                        );
      return (MVCameraBase *)RVar2;
    }
    return (MVCameraBase *)0x0;
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  pMVar5 = (MVCameraBase *)(*pcVar4)();
  return pMVar5;
}

