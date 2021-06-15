
/* Single GetAxis(String, Boolean) */

float Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::
      StandaloneInput::StandaloneInput_GetAxis
                (StandaloneInput *this,String *name,bool raw,MethodInfo *method)

{
  if (raw == 0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetAxis(name,(MethodInfo *)0x0);
    return fVar1;
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetAxisRaw(name,(MethodInfo *)0x0);
  return fVar1;
}


/* Boolean GetButton(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_GetButton(StandaloneInput *this,String *name,MethodInfo *method)

{
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetButton(name,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean GetButtonDown(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_GetButtonDown(StandaloneInput *this,String *name,MethodInfo *method)

{
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetButtonDown
                    (name,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean GetButtonUp(String) */

bool Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_GetButtonUp(StandaloneInput *this,String *name,MethodInfo *method)

{
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetButtonUp(name,(MethodInfo *)0x0);
  return bVar1;
}


/* Vector3 MousePosition() */

Vector3 * Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::
          StandaloneInput::StandaloneInput_MousePosition
                    (Vector3 *__return_storage_ptr__,StandaloneInput *this,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_get_mousePosition
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Void SetAxis(String, Single) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_SetAxis(StandaloneInput *this,String *name,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_00,StringLiteral__This_is_not_possible_to_be_call,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetAxisNegative(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_SetAxisNegative(StandaloneInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_00,StringLiteral__This_is_not_possible_to_be_call,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetAxisPositive(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_SetAxisPositive(StandaloneInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_00,StringLiteral__This_is_not_possible_to_be_call,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetAxisZero(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_SetAxisZero(StandaloneInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_00,StringLiteral__This_is_not_possible_to_be_call,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetButtonDown(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_SetButtonDown(StandaloneInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_00,StringLiteral__This_is_not_possible_to_be_call,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetButtonUp(String) */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput_SetButtonUp(StandaloneInput *this,String *name,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_00,StringLiteral__This_is_not_possible_to_be_call,(MethodInfo *)0x0);
  func_?(this_00);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* StandaloneInput() */

void Assembly-CSharp.dll::UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput
     ::StandaloneInput__ctor(StandaloneInput *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualAxis_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualAxis>__Dictionary__
            );
  (this->fields)._.m_VirtualAxes = this_00;
  this_01 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::VirtualButton>__Dictionary__
            );
  (this->fields)._.m_VirtualButtons = this_01;
  method_00 = TypeInfo__System__Collections__Generic__List<System::String>;
  this_02 = (List_1_UnityEngine_Vector4_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_02,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  (this->fields)._.m_AlwaysUseVirtual = (List_1_System_String_ *)this_02;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}

