
/* Void ActivateCameraController() */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::
     AvatarCamerasDesktopBuildMode_ActivateCameraController
               (AvatarCamerasDesktopBuildMode *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_SetCameraController
              (this_00,(this->fields).cameraController,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* List`1[MVCameraBase] GetCameraBases() */

List_1_MVCameraBase_ *
Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_GetCameraBases
          (AvatarCamerasDesktopBuildMode *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarCamerasWrapper;
  if (pAVar1 != (AvatarCamerasWrapper *)0x0) {
    *unaff_FS_OFFSET = &stack0xfffffff0;
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
                      MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_
                     );
      func_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__List__);
      func_?(&TypeInfo__System__Collections__Generic__List<MVCameraBase>);
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                     );
      cRam_? = '\x01';
    }
    DStack_2._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
    DStack_2._index = 0;
    DStack_2._version = 0;
    DStack_2._currentValue = (Object *)0x0;
    pLVar3 = (List_1_MVCameraBase_ *)
             func_?(TypeInfo__System__Collections__Generic__List<MVCameraBase>);
    if (pLVar3 != (List_1_MVCameraBase_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)pLVar3,
                 MethodInfo__System__Collections__Generic__List<MVCameraBase>__List__);
      this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)(pAVar1->fields).avatarCameras;
      if ((this_00 !=
           (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
           0x0) && (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text
                              ::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                              Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                                        (this_00,
                                         MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                                        ),
                   this_01 !=
                   (Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                    *)0x0)) {
        puVar4 = &UNK_?;
        pDVar5 = mscorlib.dll::System::Collections::Generic::
                 Dictionary`2[TKey,TValue]+ValueCollection[System::Text::RegularExpressions::
                 Regex+CachedCodeEntryKey,System::Object]::
                 Dictionary_2_TKey_TValue_ValueCollection_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__GetEnumerator
                           (&DStack_6,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                           );
        DStack_2._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar5->_dictionary;
        DStack_2._index = pDVar5->_index;
        DStack_2._version = pDVar5->_version;
        DStack_2._currentValue = pDVar5->_currentValue;
        DStack_6._version = 0;
        DStack_6._currentValue = (Object *)&DStack_2;
        while (bVar7 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                       Object,System::Object]::
                       Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                                 (&DStack_2,
                                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                                 ), bVar7 != 0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar3,DStack_2._currentValue,
                     MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_
                    );
        }
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&DStack_2,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                   ,in_stack_8);
        *unaff_FS_OFFSET = puVar4;
        return pLVar3;
      }
    }
  }
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  pLVar3 = (List_1_MVCameraBase_ *)(*pcVar9)();
  return pLVar3;
}


/* Void Initialize(MVBuildModeAvatarLocal) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_Initialize
               (AvatarCamerasDesktopBuildMode *this,MVBuildModeAvatarLocal *avatarLocal,
               MethodInfo *method)

{
  pJVar1 = (this->fields).jetPackCamera;
  if (pJVar1 != (JetPackCamera *)0x0) {
    (*(pJVar1->klass->vtable).Initialize.methodPtr)
              (pJVar1,avatarLocal,(pJVar1->klass->vtable).Initialize.method);
    pAVar2 = (this->fields).avatarEditModeCamera;
    if (pAVar2 != (AvatarEditModeCamera *)0x0) {
      (*(pAVar2->klass->vtable).Initialize.methodPtr)
                (pAVar2,avatarLocal,(pAVar2->klass->vtable).Initialize.method);
      pAVar3 = (this->fields).avatarCamerasWrapper;
      if (pAVar3 != (AvatarCamerasWrapper *)0x0) {
        AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                  (pAVar3,(MVCameraBase *)(this->fields).jetPackCamera,(MethodInfo *)0x0);
        pAVar3 = (this->fields).avatarCamerasWrapper;
        if (pAVar3 != (AvatarCamerasWrapper *)0x0) {
          AvatarCamerasWrapper::AvatarCamerasWrapper_Add
                    (pAVar3,(MVCameraBase *)(this->fields).avatarEditModeCamera,(MethodInfo *)0x0);
          pAVar3 = (this->fields).avatarCamerasWrapper;
          this_00 = (this->fields).cameraController;
          if (pAVar3 != (AvatarCamerasWrapper *)0x0) {
            cameraBases = AvatarCamerasWrapper::AvatarCamerasWrapper_GetCameraBases
                                    (pAVar3,(MethodInfo *)0x0);
            if (this_00 != (MVCameraController *)0x0) {
              MVCameraController::MVCameraController_Initialize
                        (this_00,cameraBases,(MethodInfo *)0x0);
              pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                 ((MethodInfo *)0x0);
              if (pMVar4 != (MainCameraManager *)0x0) {
                bVar5 = MainCameraManager::MainCameraManager_IsCameraControllerSet
                                  (pMVar4,(MethodInfo *)0x0);
                if (bVar5 == 0) {
                  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                     ((MethodInfo *)0x0);
                  if (pMVar4 == (MainCameraManager *)0x0) goto code_?;
                  MainCameraManager::MainCameraManager_SetCameraController
                            (pMVar4,(this->fields).cameraController,(MethodInfo *)0x0);
                }
                return;
              }
            }
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


/* Void PushCamera(CameraType) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_PushCamera
               (AvatarCamerasDesktopBuildMode *this,CameraType__Enum cameraType,MethodInfo *method)

{
  cameraController = (this->fields).cameraController;
  if ((cameraController != (MVCameraController *)0x0) &&
     (this_00 = (cameraController->fields).cameraStack,
     this_00 != (MVCameraController_CameraStack *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
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
                (this_00,cameraBase,cameraController,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PushCamera(MVCameraBase) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_PushCamera_1
               (AvatarCamerasDesktopBuildMode *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  cameraController = (this->fields).cameraController;
  if ((cameraController != (MVCameraController *)0x0) &&
     (this_00 = (cameraController->fields).cameraStack,
     this_00 != (MVCameraController_CameraStack *)0x0)) {
    MVCameraController+CameraStack::MVCameraController_CameraStack_PushCamera_1
              (this_00,cameraBase,cameraController,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveCamera(CameraType) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_RemoveCamera
               (AvatarCamerasDesktopBuildMode *this,CameraType__Enum cameraType,MethodInfo *method)

{
  cameraController = (this->fields).cameraController;
  if ((cameraController != (MVCameraController *)0x0) &&
     (this_00 = (cameraController->fields).cameraStack,
     this_00 != (MVCameraController_CameraStack *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
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
                (this_00,cameraBase,cameraController,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveCamera(MVCameraBase) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::
     AvatarCamerasDesktopBuildMode_RemoveCamera_1
               (AvatarCamerasDesktopBuildMode *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  cameraController = (this->fields).cameraController;
  if ((cameraController != (MVCameraController *)0x0) &&
     (this_00 = (cameraController->fields).cameraStack,
     this_00 != (MVCameraController_CameraStack *)0x0)) {
    MVCameraController+CameraStack::MVCameraController_CameraStack_RemoveCamera_1
              (this_00,cameraBase,cameraController,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCamera(CameraType) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_SetCamera
               (AvatarCamerasDesktopBuildMode *this,CameraType__Enum cameraType,MethodInfo *method)

{
  cameraController = (this->fields).cameraController;
  if ((cameraController != (MVCameraController *)0x0) &&
     (this_00 = (cameraController->fields).cameraStack,
     this_00 != (MVCameraController_CameraStack *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
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
                (this_00,newCamera,cameraController,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetCamera(MVCameraBase) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_SetCamera_1
               (AvatarCamerasDesktopBuildMode *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  cameraController = (this->fields).cameraController;
  if ((cameraController != (MVCameraController *)0x0) &&
     (this_00 = (cameraController->fields).cameraStack,
     this_00 != (MVCameraController_CameraStack *)0x0)) {
    MVCameraController+CameraStack::MVCameraController_CameraStack_EnterCamera
              (this_00,cameraBase,cameraController,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* AvatarCamerasDesktopBuildMode() */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode__ctor
               (AvatarCamerasDesktopBuildMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AvatarCamerasWrapper);
    func_?(&TypeInfo__MVCameraController);
    cRam_? = '\x01';
  }
  this_00 = (AvatarCamerasWrapper *)func_?(TypeInfo__AvatarCamerasWrapper);
  if (this_00 != (AvatarCamerasWrapper *)0x0) {
    AvatarCamerasWrapper::AvatarCamerasWrapper__ctor(this_00,(MethodInfo *)0x0);
    (this->fields).avatarCamerasWrapper = this_00;
    func_?(&(this->fields).avatarCamerasWrapper,this_00);
    this_01 = (TweenRunner_1_FloatTween_ *)func_?(TypeInfo__MVCameraController);
    if (this_01 != (TweenRunner_1_FloatTween_ *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
      TweenRunner_1_FloatTween___ctor(this_01,(MethodInfo *)0x0);
      (this->fields).cameraController = (MVCameraController *)this_01;
      func_?(&(this->fields).cameraController,this_01);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                ((Transform *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

