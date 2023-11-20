
/* Void Activate() */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_Activate
               (MVCameraController *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraStack;
  if (pMVar1 != (MVCameraController_CameraStack *)0x0) {
    *unaff_FS_OFFSET = &stack0xfffffff0;
    puStack_2 = &stack0xffffffbc;
    puVar3 = &stack0xffffffbc;
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
      puVar3 = puStack_2;
    }
    puStack_2 = puVar3;
    DStack_4._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
    DStack_4._index = 0;
    DStack_4._version = 0;
    DStack_4._currentValue = (Object *)0x0;
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(pMVar1->fields).cameras;
    if ((this_00 !=
         (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)0x0) &&
       (method_00 = (MethodInfo *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                              (this_00,
                               MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                              ), method_00 != (MethodInfo *)0x0)) {
      pDVar5 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_6,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)method_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                         );
      DStack_4._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar5->_dictionary;
      DStack_4._index = pDVar5->_index;
      DStack_4._version = pDVar5->_version;
      DStack_4._currentValue = pDVar5->_currentValue;
      DStack_6._version = 0;
      DStack_6._currentValue = (Object *)&DStack_4;
      while( true ) {
        this_01 = &DStack_4;
        bVar7 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (this_01,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                          );
        if (bVar7 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&DStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = this_01;
          return;
        }
        if (DStack_4._currentValue == (Object *)0x0) break;
        (*(code *)(DStack_4._currentValue)->klass[1]._0.implementedInterfaces)();
      }
    }
  }
  puStack_2 = &stack0xfffffff0;
  puStack_2 = (undefined1 *)func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_Deactivate
               (MVCameraController *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraStack;
  if (pMVar1 != (MVCameraController_CameraStack *)0x0) {
    *unaff_FS_OFFSET = &stack0xfffffff0;
    puStack_2 = &stack0xffffffbc;
    puVar3 = &stack0xffffffbc;
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
      puVar3 = puStack_2;
    }
    puStack_2 = puVar3;
    DStack_4._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
    DStack_4._index = 0;
    DStack_4._version = 0;
    DStack_4._currentValue = (Object *)0x0;
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(pMVar1->fields).cameras;
    if ((this_00 !=
         (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
          *)0x0) &&
       (method_00 = (MethodInfo *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                    ::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                              (this_00,
                               MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                              ), method_00 != (MethodInfo *)0x0)) {
      pDVar5 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         (&DStack_6,
                          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)method_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                         );
      DStack_4._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar5->_dictionary;
      DStack_4._index = pDVar5->_index;
      DStack_4._version = pDVar5->_version;
      DStack_4._currentValue = pDVar5->_currentValue;
      DStack_6._version = 0;
      DStack_6._currentValue = (Object *)&DStack_4;
      while( true ) {
        this_01 = &DStack_4;
        bVar7 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (this_01,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                          );
        if (bVar7 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&DStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = this_01;
          return;
        }
        if (DStack_4._currentValue == (Object *)0x0) break;
        (*(code *)(DStack_4._currentValue)->klass[1].static_fields)();
      }
    }
  }
  puStack_2 = &stack0xfffffff0;
  puStack_2 = (undefined1 *)func_?();
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Object GetCamera[Object]() */

Object * Assembly-CSharp.dll::MVCameraController::MVCameraController_GetCamera
                   (MVCameraController *this,MethodInfo *method)

{
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(method);
  }
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    pOVar1 = MVCameraController+CameraStack::MVCameraController_CameraStack_GetCamera
                       (this_00,((method->field7_0x1c).rgctx_data)->method);
    return pOVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar2)();
  return pOVar1;
}


/* Void Initialize(List`1[MVCameraBase]) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_Initialize
               (MVCameraController *this,List_1_MVCameraBase_ *cameraBases,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVCameraController__CameraStack);
    cRam_? = '\x01';
  }
  this_00 = (MVCameraController_CameraStack *)
            func_?(TypeInfo__MVCameraController__CameraStack);
  MVCameraController+CameraStack::MVCameraController_CameraStack__ctor
            (this_00,cameraBases,this,(MethodInfo *)0x0);
  (this->fields).cameraStack = this_00;
  func_?(&this->fields,this_00);
  return;
}


/* Void PushCamera(CameraType) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_PushCamera
               (MVCameraController *this,CameraType__Enum cameraType,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                     );
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).cameras;
    if (this_01 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      cameraBase = (MVCameraBase *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,cameraType,
                              MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                             );
      MVCameraController+CameraStack::MVCameraController_CameraStack_PushCamera_1
                (this_00,cameraBase,this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PushCamera(MVCameraBase) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_PushCamera_1
               (MVCameraController *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    MVCameraController+CameraStack::MVCameraController_CameraStack_PushCamera_1
              (this_00,cameraBase,this,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveCamera(CameraType) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_RemoveCamera
               (MVCameraController *this,CameraType__Enum cameraType,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                     );
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).cameras;
    if (this_01 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      cameraBase = (MVCameraBase *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,cameraType,
                              MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                             );
      MVCameraController+CameraStack::MVCameraController_CameraStack_RemoveCamera_1
                (this_00,cameraBase,this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemoveCamera(MVCameraBase) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_RemoveCamera_1
               (MVCameraController *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    MVCameraController+CameraStack::MVCameraController_CameraStack_RemoveCamera_1
              (this_00,cameraBase,this,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Respawn() */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_Respawn
               (MVCameraController *this,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    pMVar1 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                       (this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVCameraBase *)0x0) {
      (*(code *)(pMVar1->klass->vtable).Reset.method)();
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetCamera(CameraType) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_SetCamera
               (MVCameraController *this,CameraType__Enum cameraType,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                     );
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).cameras;
    if (this_01 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      newCamera = (MVCameraBase *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,cameraType,
                             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                            );
      MVCameraController+CameraStack::MVCameraController_CameraStack_EnterCamera
                (this_00,newCamera,this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetCamera(MVCameraBase) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_SetCamera_1
               (MVCameraController *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    MVCameraController+CameraStack::MVCameraController_CameraStack_EnterCamera
              (this_00,cameraBase,this,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateCamera(ProtectedTransform) */

void Assembly-CSharp.dll::MVCameraController::MVCameraController_UpdateCamera
               (MVCameraController *this,ProtectedTransform *protectedTransform,MethodInfo *method)

{
  this_00 = (this->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    pMVar1 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                       (this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVCameraBase *)0x0) {
      (*(code *)(pMVar1->klass->vtable).UpdateCamera.method)
                (pMVar1,this,protectedTransform,(pMVar1->klass->vtable).Enter.methodPtr);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVCameraBase get_CurCamera() */

MVCameraBase *
Assembly-CSharp.dll::MVCameraController::MVCameraController_get_CurCamera
          (MVCameraController *this,MethodInfo *method)

{
  pMVar1 = (this->fields).cameraStack;
  if (pMVar1 != (MVCameraController_CameraStack *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pLVar2 = (pMVar1->fields).activeCameras;
    if (pLVar2 != (List_1_MVCameraBase_ *)0x0) {
      if ((pLVar2->fields)._size == 0) {
        return (MVCameraBase *)0x0;
      }
      RVar3 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                         (pMVar1->fields).activeCameras,(pLVar2->fields)._size + -1,
                         MethodInfo__System__Collections__Generic__List<MVCameraBase>__get_Item_int_
                        );
      return (MVCameraBase *)RVar3;
    }
  }
  uVar4 = func_?(&stack0xfffffff0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  pMVar6 = (MVCameraBase *)(*pcVar5)();
  return pMVar6;
}

