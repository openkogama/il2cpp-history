
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
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).cameras;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    method_00 = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                          );
    if (method_00 != (MethodInfo *)0x0) {
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_7,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)method_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                         );
      DStack_8._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar6->_dictionary;
      DStack_8._index = pDVar6->_index;
      DStack_8._version = pDVar6->_version;
      DStack_8._currentValue = pDVar6->_currentValue;
      DStack_7._version = 0;
      uStack_1 = 1;
      DStack_7._currentValue = (Object *)&DStack_8;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&DStack_8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (DStack_8._currentValue == (Object *)0x0) break;
        (*(code *)(DStack_8._currentValue)->klass[1]._0.implementedInterfaces)
                  (DStack_8._currentValue,(DStack_8._currentValue)->klass[1].interfaceOffsets);
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
      (**(code **)(*(int *)RVar3 + 0x108))
                (RVar3,cameraController,*(undefined4 *)(*(int *)RVar3 + 0x10c));
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
      this_01 = (EventHandler_1_Object_ *)
                func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (this_01,(Object *)RVar3,
                 MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 ,(MethodInfo *)0x0);
      if (this_00 == (MainCameraManager *)0x0) break;
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
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).cameras;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    method_00 = (MethodInfo *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                          );
    if (method_00 != (MethodInfo *)0x0) {
      pDVar6 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_7,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)method_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                         );
      DStack_8._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar6->_dictionary;
      DStack_8._index = pDVar6->_index;
      DStack_8._version = pDVar6->_version;
      DStack_8._currentValue = pDVar6->_currentValue;
      DStack_7._version = 0;
      uStack_1 = 1;
      DStack_7._currentValue = (Object *)&DStack_8;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_8,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                          );
        if (bVar9 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&DStack_8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if (DStack_8._currentValue == (Object *)0x0) break;
        (*(code *)(DStack_8._currentValue)->klass[1].static_fields)
                  (DStack_8._currentValue,(DStack_8._currentValue)->klass[1].rgctx_data);
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
      (**(code **)(*(int *)RVar3 + 0x108))
                (RVar3,cameraController,*(undefined4 *)(*(int *)RVar3 + 0x10c));
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
      pEVar5 = (EventHandler_1_Object_ *)
               func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (pEVar5,(Object *)RVar3,
                 MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 ,(MethodInfo *)0x0);
      if (pMVar4 == (MainCameraManager *)0x0) goto code_?;
      MainCameraManager::MainCameraManager_remove_onIgnoreInputTypes
                (pMVar4,(EventHandler_1_OnIgnoreInputTypesArgs_ *)pEVar5,(MethodInfo *)0x0);
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
      pEVar5 = (EventHandler_1_Object_ *)
               func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (pEVar5,(Object *)pMVar6,
                 MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 ,(MethodInfo *)0x0);
      if (pMVar4 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_add_onIgnoreInputTypes
                  (pMVar4,(EventHandler_1_OnIgnoreInputTypesArgs_ *)pEVar5,(MethodInfo *)0x0);
        pMVar6 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
        if (pMVar6 != (MVCameraBase *)0x0) {
          (*(code *)(pMVar6->klass->vtable).Enter.method)
                    (pMVar6,cameraController,(pMVar6->klass->vtable).Exit.methodPtr);
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
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
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
    puVar5 = puStack_4;
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
      puVar5 = puStack_4;
    }
  }
  puStack_4 = puVar5;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).cameras;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffa4,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__GetEnumerator__
                       );
    uStack_7 = 0;
    DStack_8._dictionary = pDVar6->_dictionary;
    DStack_8._version = pDVar6->_version;
    DStack_8._index = pDVar6->_index;
    DStack_8._current.key = (pDVar6->_current).key;
    DStack_8._16_8_ = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    pDStack_9 = &DStack_8;
    do {
      bVar10 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_8,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                        );
      if (bVar10 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return (Object *)0x0;
      }
      pOStack_11 = DStack_8._current.value;
      if (DStack_8._current.value == (Object *)0x0) goto code_?;
      lhs = mscorlib.dll::System::Object::Object_GetType(DStack_8._current.value,(MethodInfo *)0x0)
      ;
      handle = *(method->field7_0x1c).rgctx_data;
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      rhs = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                      ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
      unaff_EDI = (MethodInfo *)&UNK_?;
      bVar10 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
              UnsafeUtility_EnumEquals((Int32Enum__Enum)lhs,(Int32Enum__Enum)rhs,(MethodInfo *)0x0);
    } while (bVar10 == 0);
    func_?();
    pOVar12 = (Object *)0x0;
    if ((pOStack_11 == (Object *)0x0) ||
       (pOVar12 = (Object *)func_?(), pOVar12 != (Object *)0x0)) {
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)&DStack_8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                 ,in_stack_13);
      *unaff_FS_OFFSET = uStack_3;
      return pOVar12;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  pOVar12 = (Object *)(*pcVar14)();
  return pOVar12;
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
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).activeCameras;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    iVar1 = (this_00->fields)._size;
    if (0 < iVar1) {
      RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,iVar1 + -1,
                         MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                        );
      if (RVar2 == (RegexCharClass_SingleRange)0x0) goto code_?;
      (**(code **)(*(int *)RVar2 + 0x110))
                (RVar2,cameraController,*(undefined4 *)(*(int *)RVar2 + 0x114));
    }
    this_01 = (this->fields).activeCameras;
    if (this_01 != (List_1_MVCameraBase_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_01,(Object *)cameraBase,
                 MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      pMVar3 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
      this_03 = (EventHandler_1_Object_ *)
                func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (this_03,(Object *)pMVar3,
                 MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 ,(MethodInfo *)0x0);
      if (this_02 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_add_onIgnoreInputTypes
                  (this_02,(EventHandler_1_OnIgnoreInputTypesArgs_ *)this_03,(MethodInfo *)0x0);
        pMVar3 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
        if (pMVar3 != (MVCameraBase *)0x0) {
          (*(code *)(pMVar3->klass->vtable).Enter.method)
                    (pMVar3,cameraController,(pMVar3->klass->vtable).Exit.methodPtr);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
      this_01 = (EventHandler_1_Object_ *)
                func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (this_01,(Object *)object,
                 MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 ,(MethodInfo *)0x0);
      if (this_00 != (MainCameraManager *)0x0) {
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
          if (index == 0) {
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
      (**(code **)(*(int *)RVar3 + 0x108))
                (RVar3,cameraController,*(undefined4 *)(*(int *)RVar3 + 0x10c));
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
      pEVar5 = (EventHandler_1_Object_ *)
               func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (pEVar5,(Object *)RVar3,
                 MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 ,(MethodInfo *)0x0);
      if (pMVar4 == (MainCameraManager *)0x0) goto code_?;
      MainCameraManager::MainCameraManager_remove_onIgnoreInputTypes
                (pMVar4,(EventHandler_1_OnIgnoreInputTypesArgs_ *)pEVar5,(MethodInfo *)0x0);
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
      pEVar5 = (EventHandler_1_Object_ *)
               func_?(TypeInfo__System__EventHandler<OnIgnoreInputTypesArgs>);
      mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                (pEVar5,(Object *)pMVar6,
                 MethodInfo__MVCameraBase__camController_onIgnoreInputTypes_System__Object__OnIgnoreInputTypesArgs_
                 ,(MethodInfo *)0x0);
      if (pMVar4 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_add_onIgnoreInputTypes
                  (pMVar4,(EventHandler_1_OnIgnoreInputTypesArgs_ *)pEVar5,(MethodInfo *)0x0);
        pMVar6 = MVCameraController_CameraStack_get_CurCamera(this,(MethodInfo *)0x0);
        if (pMVar6 != (MVCameraBase *)0x0) {
          (*(code *)(pMVar6->klass->vtable).Enter.method)
                    (pMVar6,cameraController,(pMVar6->klass->vtable).Exit.methodPtr);
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
    (*(code *)(pMVar1->klass->vtable).UpdateCamera.method)(pMVar1);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCameraBase>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCameraBase>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVCameraBase>);
    cRam_? = '\x01';
  }
  this_01 = (List_1_MVCameraBase_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVCameraBase>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<MVCameraBase>__List__);
  (this->fields).activeCameras = this_01;
  func_?(&this->fields,this_01);
  this_02 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Dictionary__
            );
  ppDVar4 = &(this->fields).cameras;
  *ppDVar4 = (Dictionary_2_CameraType_MVCameraBase_ *)this_02;
  method_00 = (MethodInfo *)ppDVar4;
  func_?(ppDVar4,this_02);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if (camerasList != (List_1_MVCameraBase_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
              ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               &stack0xffffffd8,
               (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)camerasList,
               MethodInfo__System__Collections__Generic__List<MVCameraBase>__GetEnumerator__);
    uStack_1 = 1;
    while( true ) {
      bVar5 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCameraBase>__MoveNext__
                        );
      if (bVar5 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffc8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVCameraBase>__Dispose__
                   ,in_stack_6);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      this_00 = *ppDVar4;
      key = (**(code **)(_UNK_? + 0xe0))();
      if (this_00 == (Dictionary_2_CameraType_MVCameraBase_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__Add
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,(Object *)&UNK_?
                 ,
                 MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                );
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).activeCameras;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size != 0) {
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,(this_00->fields)._size + -1,
                         MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                        );
      return (MVCameraBase *)RVar1;
    }
    return (MVCameraBase *)0x0;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pMVar4 = (MVCameraBase *)(*pcVar3)();
  return pMVar4;
}

