
/* DesktopPlayMode() */

void Assembly-CSharp.dll::DesktopPlayMode::DesktopPlayMode__ctor
               (DesktopPlayMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  DesktopDefaultKeyboardMapping::DesktopDefaultKeyboardMapping__ctor
            ((DesktopDefaultKeyboardMapping *)this,(MethodInfo *)0x0);
  pDVar1 = (this->fields)._.keyMapping;
  pOVar2 = (Object *)func_?(TypeInfo__UnityEngine__KeyCode,2);
  if (pOVar2 == (Object *)0x0) goto code_?;
  if (pOVar2[1].monitor == (MonitorData *)0x0) {
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    pOVar2[2].klass = (Object__Class *)0x77;
    if (pOVar2[1].monitor < (MonitorData *)0x2) goto code_?;
    pOVar2[2].monitor = (MonitorData *)0x111;
    if (pDVar1 == (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
code_?:
      func_?(0);
      goto code_?;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)pDVar1,KogamaControls__Enum_MoveForward
               ,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pDVar1 = (this->fields)._.keyMapping;
    pOVar2 = (Object *)func_?(TypeInfo__UnityEngine__KeyCode,2);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar2[2].klass = (Object__Class *)0x73;
    if (pOVar2[1].monitor < (MonitorData *)0x2) goto code_?;
    pOVar2[2].monitor = (MonitorData *)0x112;
    if (pDVar1 == (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)pDVar1,
               KogamaControls__Enum_MoveBackwards,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pDVar1 = (this->fields)._.keyMapping;
    pOVar2 = (Object *)func_?(TypeInfo__UnityEngine__KeyCode,2);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar2[2].klass = (Object__Class *)0x61;
    if (pOVar2[1].monitor < (MonitorData *)0x2) goto code_?;
    pOVar2[2].monitor = (MonitorData *)0x114;
    if (pDVar1 == (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)pDVar1,KogamaControls__Enum_MoveLeft,
               pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pDVar1 = (this->fields)._.keyMapping;
    pOVar2 = (Object *)func_?(TypeInfo__UnityEngine__KeyCode,2);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar2[2].klass = (Object__Class *)0x64;
    if (pOVar2[1].monitor < (MonitorData *)0x2) goto code_?;
    pOVar2[2].monitor = (MonitorData *)0x113;
    if (pDVar1 == (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
    Dictionary_2_KogamaControls_System_Object__Add
              ((Dictionary_2_KogamaControls_System_Object_ *)pDVar1,KogamaControls__Enum_MoveRight,
               pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
              );
    pDVar1 = (this->fields)._.keyMapping;
    pOVar2 = (Object *)func_?(TypeInfo__UnityEngine__KeyCode,2);
    if (pOVar2 == (Object *)0x0) goto code_?;
    if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
    pOVar2[2].klass = (Object__Class *)0x20;
    if ((MonitorData *)0x1 < pOVar2[1].monitor) {
      pOVar2[2].monitor = (MonitorData *)0x100;
      if (pDVar1 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]::
        Dictionary_2_KogamaControls_System_Object__Add
                  ((Dictionary_2_KogamaControls_System_Object_ *)pDVar1,KogamaControls__Enum_Jump,
                   pOVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                  );
        pDVar1 = (this->fields)._.keyMapping;
        pOVar2 = (Object *)func_?(TypeInfo__UnityEngine__KeyCode,1);
        if (pOVar2 != (Object *)0x0) {
          if (pOVar2[1].monitor == (MonitorData *)0x0) goto code_?;
          pOVar2[2].klass = (Object__Class *)0x143;
          if (pDVar1 != (Dictionary_2_KogamaControls_UnityEngine_KeyCode__1 *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[KogamaControls,System::Object]
            ::Dictionary_2_KogamaControls_System_Object__Add
                      ((Dictionary_2_KogamaControls_System_Object_ *)pDVar1,
                       KogamaControls__Enum_Fire,pOVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                      );
            return;
          }
        }
      }
      goto code_?;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  uVar3 = func_?(0,0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

