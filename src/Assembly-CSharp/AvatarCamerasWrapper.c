
/* Void Add(MVCameraBase) */

void Assembly-CSharp.dll::AvatarCamerasWrapper::AvatarCamerasWrapper_Add
               (AvatarCamerasWrapper *this,MVCameraBase *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarCameras;
  if (camera != (MVCameraBase *)0x0) {
    key = (*(code *)(camera->klass->vtable).__unknown.method)
                    (camera,(camera->klass->vtable).Awake.methodPtr);
    if (this_00 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[CameraType,System::Object]::
      Dictionary_2_CameraType_System_Object__Add
                ((Dictionary_2_CameraType_System_Object_ *)this_00,key,(Object *)camera,
                 MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                );
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* List`1[MVCameraBase] GetCameraBases() */

List_1_MVCameraBase_ *
Assembly-CSharp.dll::AvatarCamerasWrapper::AvatarCamerasWrapper_GetCameraBases
          (AvatarCamerasWrapper *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
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
  this_00 = (this->fields).avatarCameras;
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
      uStack_1 = 0;
      while( true ) {
        cVar4 = func_?();
        if (cVar4 == '\0') {
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
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
  pcVar5 = (code *)swi(3);
  pLVar6 = (List_1_MVCameraBase_ *)(*pcVar5)();
  return pLVar6;
}


/* AvatarCamerasWrapper() */

void Assembly-CSharp.dll::AvatarCamerasWrapper::AvatarCamerasWrapper__ctor
               (AvatarCamerasWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_CameraType_MVCameraBase_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Dictionary__
            );
  (this->fields).avatarCameras = this_00;
  return;
}

