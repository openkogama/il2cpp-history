
/* Void ActivateCameraController() */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::
     AvatarCamerasDesktopBuildMode_ActivateCameraController
               (AvatarCamerasDesktopBuildMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_SetCameraController
              (this_00,(this->fields).cameraController,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* List`1[MVCameraBase] GetCameraBases() */

List_1_MVCameraBase_ *
Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_GetCameraBases
          (AvatarCamerasDesktopBuildMode *this,MethodInfo *method)

{
  pAVar1 = (this->fields).avatarCamerasWrapper;
  if (pAVar1 == (AvatarCamerasWrapper *)0x0) {
    uStack_2 = 0;
    func_?();
    pcVar3 = (code *)swi(3);
    pLVar4 = (List_1_MVCameraBase_ *)(*pcVar3)();
    return pLVar4;
  }
  uStack_2 = 0xffffffff;
  puStack_5 = &DAT_?;
  uStack_6 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_6;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  this_01 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVCameraBase>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_01,MethodInfo__System__Collections__Generic__List<MVCameraBase>__List__);
  this_00 = (pAVar1->fields).avatarCameras;
  if (this_00 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
    this_02 = (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
              Object]::Dictionary_2_WinningConditionType_System_Object__get_Values
                        ((Dictionary_2_WinningConditionType_System_Object_ *)this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                        );
    if (this_02 != (Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::
      Dictionary`2[TKey,TValue]+ValueCollection[ChatCommand,System::Object]::
      Dictionary_2_TKey_TValue_ValueCollection_ChatCommand_System_Object__GetEnumerator
                ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_ChatCommand_System_Object_
                  *)&stack0xffffffb8,this_02,
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                );
      uStack_2 = 0;
      while( true ) {
        cVar7 = func_?();
        if (cVar7 == '\0') {
          uStack_2 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_6;
          return (List_1_MVCameraBase_ *)this_01;
        }
        item = func_?();
        if (this_01 == (List_1_UnityEngine_Vector4_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                  ((List_1_UIPushOption_ *)this_01,item,
                   MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_);
      }
    }
  }
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  pLVar4 = (List_1_MVCameraBase_ *)(*pcVar3)();
  return pLVar4;
}


/* Void Initialize(MVBuildModeAvatarLocal) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_Initialize
               (AvatarCamerasDesktopBuildMode *this,MVBuildModeAvatarLocal *avatarLocal,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pJVar1 = (this->fields).jetPackCamera;
  if (pJVar1 != (JetPackCamera *)0x0) {
    (*(code *)(pJVar1->klass->vtable).Initialize.method)
              (pJVar1,avatarLocal,pJVar1->klass[1]._0.image);
    pAVar2 = (this->fields).avatarEditModeCamera;
    if (pAVar2 != (AvatarEditModeCamera *)0x0) {
      (*(code *)(pAVar2->klass->vtable).Initialize.method)
                (pAVar2,avatarLocal,pAVar2->klass[1]._0.image);
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
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                  ((MethodInfo *)0x0);
              if (this_01 != (MainCameraManager *)0x0) {
                bVar4 = MainCameraManager::MainCameraManager_IsCameraControllerSet
                                  (this_01,(MethodInfo *)0x0);
                if (bVar4 == 0) {
                  AvatarCamerasDesktopBuildMode_ActivateCameraController(this,(MethodInfo *)0x0);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void PushCamera(CameraType) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_PushCamera
               (AvatarCamerasDesktopBuildMode *this,CameraType__Enum cameraType,MethodInfo *method)

{
  cameraController = (this->fields).cameraController;
  if (cameraController == (MVCameraController *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (cameraController->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).cameras;
    if (this_01 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      cameraBase = (MVCameraBase *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[CameraType,System::
                   Object]::Dictionary_2_CameraType_System_Object__get_Item
                             ((Dictionary_2_CameraType_System_Object_ *)this_01,cameraType,
                              MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                             );
      MVCameraController+CameraStack::MVCameraController_CameraStack_PushCamera_1
                (this_00,cameraBase,cameraController,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void PushCamera(MVCameraBase) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_PushCamera_1
               (AvatarCamerasDesktopBuildMode *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  cameraController = (this->fields).cameraController;
  if (cameraController == (MVCameraController *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (cameraController->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    MVCameraController+CameraStack::MVCameraController_CameraStack_PushCamera_1
              (this_00,cameraBase,cameraController,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemoveCamera(CameraType) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_RemoveCamera
               (AvatarCamerasDesktopBuildMode *this,CameraType__Enum cameraType,MethodInfo *method)

{
  cameraController = (this->fields).cameraController;
  if (cameraController == (MVCameraController *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (cameraController->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).cameras;
    if (this_01 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      cameraBase = (MVCameraBase *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[CameraType,System::
                   Object]::Dictionary_2_CameraType_System_Object__get_Item
                             ((Dictionary_2_CameraType_System_Object_ *)this_01,cameraType,
                              MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                             );
      MVCameraController+CameraStack::MVCameraController_CameraStack_RemoveCamera_1
                (this_00,cameraBase,cameraController,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RemoveCamera(MVCameraBase) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::
     AvatarCamerasDesktopBuildMode_RemoveCamera_1
               (AvatarCamerasDesktopBuildMode *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  cameraController = (this->fields).cameraController;
  if (cameraController == (MVCameraController *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (cameraController->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    MVCameraController+CameraStack::MVCameraController_CameraStack_RemoveCamera_1
              (this_00,cameraBase,cameraController,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetCamera(CameraType) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_SetCamera
               (AvatarCamerasDesktopBuildMode *this,CameraType__Enum cameraType,MethodInfo *method)

{
  cameraController = (this->fields).cameraController;
  if (cameraController == (MVCameraController *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (cameraController->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).cameras;
    if (this_01 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      newCamera = (MVCameraBase *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[CameraType,System::
                  Object]::Dictionary_2_CameraType_System_Object__get_Item
                            ((Dictionary_2_CameraType_System_Object_ *)this_01,cameraType,
                             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Item_CameraType_
                            );
      MVCameraController+CameraStack::MVCameraController_CameraStack_EnterCamera
                (this_00,newCamera,cameraController,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetCamera(MVCameraBase) */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode_SetCamera_1
               (AvatarCamerasDesktopBuildMode *this,MVCameraBase *cameraBase,MethodInfo *method)

{
  cameraController = (this->fields).cameraController;
  if (cameraController == (MVCameraController *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (cameraController->fields).cameraStack;
  if (this_00 != (MVCameraController_CameraStack *)0x0) {
    MVCameraController+CameraStack::MVCameraController_CameraStack_EnterCamera
              (this_00,cameraBase,cameraController,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* AvatarCamerasDesktopBuildMode() */

void Assembly-CSharp.dll::AvatarCamerasDesktopBuildMode::AvatarCamerasDesktopBuildMode__ctor
               (AvatarCamerasDesktopBuildMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (ScaleAnimationBase *)func_?(TypeInfo__AvatarCamerasWrapper);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Dictionary__
            );
  (this_00->fields)._._._._.m_CachedPtr = this_01;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields).avatarCamerasWrapper = (AvatarCamerasWrapper *)this_00;
  this_02 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)
            func_?(TypeInfo__MVCameraController);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_02,(MethodInfo *)0x0);
  (this->fields).cameraController = (MVCameraController *)this_02;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

